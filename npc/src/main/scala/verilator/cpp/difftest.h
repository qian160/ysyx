#include<iostream>

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
#include<dlfcn.h>
bool (*difftest_checkregs)(uint64_t pc) = nullptr;
void (*difftest_regcpy)(void *dut, bool direction) = nullptr;
void (*difftest_exec)(int n) = nullptr;
void (*difftest_init)(char *img_file) = nullptr;

uint64_t* npc_timer = 0;