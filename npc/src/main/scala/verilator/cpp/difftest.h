#include<iostream>

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
#include<dlfcn.h>
bool (*difftest_checkregs)(void) = nullptr;
void (*difftest_regcpy)(void *dut, bool direction) = nullptr;
void (*difftest_exec)(void) = nullptr;
void (*difftest_init)(char *img_file) = nullptr;

uint64_t* npc_timer = 0;

//alias
using checkregs =   bool(*)();
using regcpy    =   void(*)(void*, bool);
using exec      =   void(*)();
using init      =   void(*)(char*);
