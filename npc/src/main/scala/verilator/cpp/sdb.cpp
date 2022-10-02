#include<iostream>
#include<string>
#include<verilated.h>
#include"sdb.h"
#include"testbench.h"
#include"VTOP.h"
#include"debug.h"

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