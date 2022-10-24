#include<functional>
#include<iostream>
//an interesting thing about difftest: if both dut and ref try to print something, then that will be printed twice
#ifndef __DIRECTION__
#define __DIRECTION__
    enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
#endif

#include<dlfcn.h>

std::function<bool()> difftest_checkregs = nullptr;
std::function<void(void * dut, bool direction)> difftest_regcpy = nullptr;
std::function<void()> difftest_exec = nullptr;
std::function<void(const char * img_file)> difftest_init = nullptr;

uint64_t* npc_timer = 0;

//alias, and transform the dlopen/dlsym's return value(void*) to a functional type, so it can be assigned to std::function objects
using checkregs =   bool(*)();
using regcpy    =   void(*)(void*, bool);
using exec      =   void(*)();
using init      =   void(*)(const char*);

#define DIFF "/home/s081/Downloads/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so"