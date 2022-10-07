#include<iostream>
//an interesting thing about difftest: if both dut and ref try to print something, then that will be printed twice
static enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
#include<dlfcn.h>
static bool (*difftest_checkregs)(void) = nullptr;
static void (*difftest_regcpy)(void *dut, bool direction) = nullptr;
static void (*difftest_exec)(void) = nullptr;
static void (*difftest_init)(char *img_file) = nullptr;

uint64_t* npc_timer = 0;

//alias
using checkregs =   bool(*)();
using regcpy    =   void(*)(void*, bool);
using exec      =   void(*)();
using init      =   void(*)(char*);
