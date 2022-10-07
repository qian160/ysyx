#include<iostream>
//an interesting thing about difftest: if both dut and ref try to print something, then that will be printed twice
#ifndef __DIRECTION__
#define __DIRECTION__
    enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
#endif

#include<dlfcn.h>
bool (*difftest_checkregs)() = nullptr;
void (*difftest_regcpy)(void *dut, bool direction) = nullptr;
void (*difftest_exec)() = nullptr;
void (*difftest_init)(char *img_file) = nullptr;

uint64_t* npc_timer = 0;

//alias
using checkregs =   bool(*)();
using regcpy    =   void(*)(void*, bool);
using exec      =   void(*)();
using init      =   void(*)(char*);
