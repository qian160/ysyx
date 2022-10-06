#include<iostream>
#include<string>
#include<verilated.h>
#include"sdb.h"
#include"testbench.h"
#include"VTOP.h"
#include"debug.h"

extern VTOP * top;

void get_state(CPU_state & state){
    memcpy((void*)&state, &top->io_regs_0, 32 * sizeof(uint64_t));
}

CPU_state state;

extern bool (*difftest_checkregs)(uint64_t pc);
extern void (*difftest_regcpy)(void *dut, bool direction);
extern void (*difftest_exec)(int n);

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

const char *regs[] = {    //names.. add $ prefix to make regex match easier
    "0",   "ra", "sp",   "gp",  "tp",  "t0",  "t1",  "t2",
    "s0",  "s1", "a0",   "a1",  "a2",  "a3",  "a4",  "a5",
    "a6",  "a7", "s2",   "s3",  "s4",  "s5",  "s6",  "s7",
    "s8",  "s9", "s10",  "s11", "t3",  "t4",  "t5",  "t6", 
};

using namespace std;
//link this file to test.cpp. so in test.cpp's main loop we can call those functions
extern TestBench<VTOP> tb;
/*
static int step(size_t steps){
    while()
}
*/
int cmd_s(string steps){
    size_t n = atoi(steps.c_str());
    if(!n){ 
        //no argument, default execuate once
        tb.tick();
        //difftest_regcpy()
    }
    else{
        while(n-- && !Verilated::gotFinish()){
            tb.tick();
        }
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
        cout << i.second.name << " - " << i.second.description << " - " << i.second.Usage << endl;
    }
    return 0;
}

int cmd_q(string arg){
    cout << Green("Goodbye\n");
    exit(0);
}

int cmd_i(string arg) {
    memcpy((void *)&state, (void *)&top -> io_regs_0, 32 * sizeof(uint64_t));
    for(int i = 0; i < 32; i++){
        printf("\033[1;33m[%3s] = %-16lx%c\033[0m", regs[i], state.gpr[i], i & 0b1? '\n' : '\t');
    }
    return 0;
}