#include"common.h"
#include"sdb.h"
#include"macro.h"
#include"conf.h"
#include<iterator>
extern VTOP * top;

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

void get_state(CPU_state & state){
    memcpy((void*)&state, &top->io_regs_0, 32 * sizeof(uint64_t));
}

extern bool (*difftest_checkregs)();
extern void (*difftest_regcpy)(void *dut, bool direction);
extern void (*difftest_exec)();
extern void (*difftest_init)(const char *img_file);
extern uint64_t * npc_timer;
CPU_state state;


const char *regs[] = {    //names.. add $ prefix to make regex match easier
    "x0",  "ra", "sp",   "gp",  "tp",  "t0",  "t1",  "t2",
    "s0",  "s1", "a0",   "a1",  "a2",  "a3",  "a4",  "a5",
    "a6",  "a7", "s2",   "s3",  "s4",  "s5",  "s6",  "s7",
    "s8",  "s9", "s10",  "s11", "t3",  "t4",  "t5",  "t6", 
};

using namespace std;
//link this file to test.cpp. so in test.cpp's main loop we can call those functions
extern TestBench<VTOP> tb;

bool difftest()
{
    //get dut's information about registers
    memcpy((void *)&state, (void *)&top -> io_regs_0, 32 * sizeof(uint64_t));
    state.pc = top->io_pc_o;
    difftest_regcpy(&state, DIFFTEST_TO_REF);
    return difftest_checkregs();
}

uint64_t getTime(){
    struct timespec now;
    clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
    return (now.tv_sec * 1000000 + now.tv_nsec / 1000);
}

uint64_t boot_time = getTime();

int cmd_s(string steps){
    size_t n = atoi(steps.c_str());
    //if n is not given, use the default case(step once)
    n = n? n: 1;
    while(n-- && !Verilated::gotFinish()){
        IFDEF(DIFFTEST_ENABLE, difftest_exec());                    //let ref execuate first, to get the new timer
        IFDEF(DIFFTEST_ENABLE, top -> io_timer_i = *npc_timer);

        IFNDEF(DIFFTEST_ENABLE, top->io_timer_i = (getTime() - boot_time));
        tb.tick();
        IFDEF(DIFFTEST_ENABLE, assert(difftest()));
    }
    return 0;
}

int cmd_c(string args){
    cmd_s("-1");
    return 0;
}

int cmd_h(string cmd){
    for(auto i :cmd_table){
        cout.width(8);
        cout << i.first << " - " << i.second.description << " - " << i.second.Usage << endl;
    }
    return 0;
}
int cmd_q (string arg){
    /*      
        iostream's iterator, treats the stream as an array.

        for istream_iterator, trying to dereferrence it will get the input from the associated stream
        for ostream_iterator, assigning value to it will send that value to the stream
    */
    ostream_iterator<string> out(cout);
    *out++ = Green("Goodbye😀\n");

    __asm__ volatile(
        "movl $60,  %eax\n\t"
        "xorl %edi, %edi\n\t"
        "syscall\n"
    );

    return 114514;
}

int cmd_i(string arg) {
    memcpy((void *)&state, (void *)&top -> io_regs_0, 32 * sizeof(uint64_t));
    for(int i = 0; i < 32; i++){
        printf("\033[1;33m[%3s] = %-16lx%c\033[0m", regs[i], state.gpr[i], i & 0b1? '\n' : '\t');
    }
    return 0;
}