#include "../include/common.h"
#include <../include/generated/autoconf.h>
#include "../include/trace.h"
#include "isa/riscv64/local-include/reg.h"
#include "../include/cpu/decode.h"

#ifdef CONFIG_ITRACE_ENABLE

void show_itrace()
{
    printf(ANSI_FMT("\nI - Trace:\n", ANSI_FG_YELLOW));
    int temp = CONFIG_ITRACE_SIZE;
    for (int i = iringbuf.index ; temp--; i = (i + 1) % CONFIG_ITRACE_SIZE)
    {
        if(strlen(iringbuf.buf[i]) > 0)
            printf(ANSI_FMT("   %s\n", ANSI_FG_GREEN), iringbuf.buf[i]);
    }
    putchar('\n');
}
#endif

#ifdef CONFIG_MTRACE_ENABLE

void show_mtrace()
{
    int size = CONFIG_MTRACE_SIZE;
    printf(ANSI_FMT("M - Trace:\n", ANSI_FG_YELLOW));
    for(int i = mringbuf.index; size --; i = (i + 1) % CONFIG_MTRACE_SIZE){
        bool c = mringbuf.info[i].isLoad;
        MtraceInfo temp = mringbuf.info[i];
        if(temp.addr | temp.rd){    //store 0 t0 $0 is skipped, which is also the default struct
            switch (c)
            {
                case 1:
                    printf(ANSI_FMT("Load:  %s <- pmem[0x%lx],  val = 0x%lx\n", ANSI_FG_CYAN), reg_name(temp.rd), temp.addr, temp.data );
                break;
                case 0:
                    printf(ANSI_FMT("Store: 0x%lx -> pmem[0x%lx]\n", ANSI_FG_GREEN), temp.data, temp.addr);
                break;
            }
        }
    }
    putchar('\n');
}

void update_mringbuf(bool isLoad, word_t addr, word_t data, int rd){
    int idx = mringbuf.index;
    switch (isLoad)
    {
        case 1:
            mringbuf.info[idx].addr    = addr;
            mringbuf.info[idx].data    = data;
            mringbuf.info[idx].isLoad  = 1;
            mringbuf.info[idx].rd      = rd;
            mringbuf.index = (idx + 1) % CONFIG_MTRACE_SIZE;
            break;
        case 0:
            mringbuf.info[idx].addr    = addr;
            mringbuf.info[idx].data    = data;
            mringbuf.info[idx].isLoad  = 0;
            mringbuf.index = (idx + 1) % CONFIG_MTRACE_SIZE;
            break;
    }
}

#endif

#ifdef CONFIG_FTRACE_ENABLE

symbol * Sym_head = NULL;

void show_ftrace(){
    printf(ANSI_FMT("F - Trace:\n", ANSI_FG_YELLOW));
    for(int i = 0; i < ftrace.cnt ; i++)
    {
        Ftrace_entry f = ftrace.trace[i];
        char * s = f.is_ret ? "ret " : "call";
        printf(ANSI_FMT("0x%lx: ", ANSI_FG_YELLOW), f.pc);
        for(char j = 0; j < f.depth; j++)
            printf("  ");
        printf(ANSI_FMT("%s %s <0x%lx>\n", ANSI_FG_YELLOW), s, f.name, f.address);
    }
    putchar('\n');
}

int depth = 0;      //this is used at runtime

void update_ftrace(bool is_ret, word_t addr, word_t pc, const char * name, int d){
    Log("\nis_ret: %d, addr: 0x%lx, pc: 0x%lx, name: %s, depth: %d\n", is_ret, addr, pc, name, d);
    int cnt = ftrace.cnt;
    ftrace.trace[cnt].depth   = d - is_ret;   //if not call(ret), depth-=1
    ftrace.trace[cnt].is_ret = is_ret;
    ftrace.trace[cnt].pc = pc;
    strcpy(ftrace.trace[cnt].name, name);
    ftrace.trace[cnt].address = addr;
    
    ftrace.cnt ++;
    if(is_ret) depth-- ;
    else depth ++;
}

char * getFuncName(word_t addr)
{
    for(symbol * t = Sym_head; t; t = t -> next)
    {
        word_t bg = t ->offset, ed = t -> offset + t -> size;
        if( bg <= addr && addr < ed)  return t -> name;
        //call's target is always at the beginning, but ret's could be any value as long as it's between the boundary
//      if(addr == t -> offset)  return t -> name;
    }
    return NULL;
}
enum {
    TYPE_I, TYPE_U, TYPE_S, TYPE_J, TYPE_R, TYPE_B, TYPE_SYS,
    TYPE_N, // none
};
void _ftrace(Decode * D){
    //is_ret need to be improved, jal could also ret
    char * name = getFuncName(D->decInfo.target);
    if(!name) return;   //not a function call or ret
    Log("\nname = %s\n", name);
    word_t addr = D->decInfo.target;
    switch(D->decInfo.type){
        case(TYPE_B):
        //if(D->decInfo.branch_taken) 
          //update_ftrace(1, addr, pc, name, depth);
        break;
        case(TYPE_I):   //jalr, and other normal insts
            if(D->decInfo.is_jalr)
                update_ftrace(D->decInfo.is_ret, addr, D->pc, name, depth);
            break;
        case(TYPE_J):
            update_ftrace(D->decInfo.is_ret, addr, D->pc, name, depth);
            break;
    }
}

#endif