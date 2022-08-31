/*
#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <utils.h>
#include "../../isa/riscv64/local-include/reg.h"

uint64_t pmem_read(paddr_t addr, int len);
extern const char* regs[];
static int is_batch_mode = false;
#define NR_CMD ARRLEN(cmd_table)
*///these definations can be used

bool make_token(char * expr);
void examine_memory(int n, int64_t p){
  //if we directly derefference the pointer, we are in fact examing our real computer's address!!!
    printf(ANSI_FMT(" 0x%lx: ",ANSI_FG_MAGENTA), p);
    char cnt = 0;
    for (int i = 0 ; i < n ; i++)
    {
        printf(ANSI_FMT("%02lx  ", ANSI_FG_YELLOW),pmem_read(p, 1));
        p ++;
        cnt ++;
        if(cnt == (char)4)
        {
            cnt = 0;
            printf("\n");
            printf(ANSI_FMT(" 0x%lx: ",ANSI_FG_MAGENTA), p);
        }
    }
    printf("\n");
    return;
}

//cmd for user input
static int cmd_c(char *args) {
    cpu_exec(-1);   //as many steps as possible
    return 0;
}

static int cmd_p(char *expr){
    printf(ANSI_FMT("%s\n",ANSI_FG_MAGENTA), expr);
    if(make_token(expr) == false)
        printf(ANSI_FMT("illegal expr\n",ANSI_FG_RED));
    return 0;
}

static int cmd_q(char *args) {
    nemu_state.state = NEMU_QUIT;
    return -1;
}

static int cmd_si(char * args){
    char *arg = strtok(NULL," ");  
    int steps = 0;  
    if(arg == NULL){  
        cpu_exec(1);  
        return 0;  
    }  
    sscanf(arg, "%d", &steps);  
    if(steps<0){  
        printf("negetve steps!!\n");  
        return 0;  
    }   
    cpu_exec(steps);  
    return 0;
}  

static int cmd_info(char * args){
    char * arg = strtok(args," ");
    if( arg == NULL) 
    {
        //printf("\33[40;33mneed an argument!\33[0m\n");
        printf(ANSI_FMT("need an argument!\n", ANSI_FG_PINK));
        return 0;
    }
    if(streq(arg, "r"))
        isa_reg_display();
    else
    {
        for (int i = 0; i <= 31; i ++)
        {
            const char * reg = regs[i];
            if(streq(arg, reg)){
                printf(ANSI_FMT("%s\t\t0x%-16lx\t%-16ld\n", ANSI_FG_PINK), reg, gpr(i), gpr(i));
                return 0;
        }
    }
    }
    return 0;
}

static int cmd_x(char * args){  //usage: x num addr
    char * nump = strtok(args," ");
    char * addrp = strtok(NULL," ");

    int64_t  num = atoi(nump);
    int64_t addr; 
    sscanf(addrp,"%lx",&addr); 
    printf(ANSI_FMT("[little endian, the MSB is located at low adress]\n",ANSI_FG_PINK));
    examine_memory(num, addr);
    //here we dont do mem check. we pass the job to that em function
    return 0;
}

static int cmd_r(){
    printf("do you want to restart the program?(y/n) \n");
    char c = getchar();
    if(c == '\n') c = getchar();
    if(c == 'y')
    {
        cpu.pc  = 0x80000000;
        for(int i = 0; i < 32; i++)
            gpr(i) = 0;
    }
    else
        printf("canceled\n");
    return 0;
}

static int cmd_help(char *args);  //if not defined here, cmd_table will find the 

static struct {
    const char *name;
    const char *description;
    int (*handler) (char *);
    } cmd_table [] = {
    { "help", "Display informations about all supported commands", cmd_help },
    { "c", "Continue the execution of the program", cmd_c },
    { "q", "Exit NEMU", cmd_q },
    { "si", "step single instrction", cmd_si},
    { "info", "print the specific reg's value, r for all", cmd_info},
    { "x", "examine the memory. Usage: x num addr", cmd_x},
    { "r", "restart and run the program", cmd_r},
    { "p", "print the expression's value", cmd_p},

  /* TODO: Add more commands */
};

static int cmd_help(char *args) {
    /* extract the first argument */
    char *arg = strtok(NULL, " ");
    int i;

    if (arg == NULL) {
    /* no argument given */
        for (i = 0; i < NR_CMD; i ++) 
            printf(ANSI_FMT("%8s - %-s\n", ANSI_FG_GREEN), cmd_table[i].name, cmd_table[i].description);
    }
    else {
        for (i = 0; i < NR_CMD; i ++) {
//            if (strcmp(arg, cmd_table[i].name) == 0) {
            if (streq(arg, cmd_table[i].name)) {
                printf(ANSI_FMT("%8s - %-s\n", ANSI_FG_GREEN), cmd_table[i].name, cmd_table[i].description);
                return 0;
            }
        }
    printf("Unknown command '%s'\n", arg);
    }
    return 0;
}