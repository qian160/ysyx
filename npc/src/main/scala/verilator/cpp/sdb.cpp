#include<iostream>
#include<string>
#include<verilated.h>
#include"sdb.h"
#include"testbench.h"
#include"VTOP.h"
#include"debug.h"

extern VTOP * top;
extern bool difftest_checkregs(uint64_t pc, CPU_state *dut_r);
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
        tb.tick();
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

#define show(x) (printf("\033[1;33m[%3s] = %-16lx%c\033[0m", regs[x],  top->io_regs_##x, x & 0b1 ? '\n' : '\t'))

int cmd_i(string arg) {
    //a very straightforward method...
    show(0);    show(1);    show(2);    show(3);    show(4);    show(5);    show(6);    show(7);
    show(8);    show(9);    show(10);   show(11);   show(12);   show(13);   show(14);   show(15);
    show(16);   show(17);   show(18);   show(19);   show(20);   show(21);   show(22);   show(23);
    show(24);   show(25);   show(26);   show(27);   show(28);   show(29);   show(30);   show(31);
    return 0;
}