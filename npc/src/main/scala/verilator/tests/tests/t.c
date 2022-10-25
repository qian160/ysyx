#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include "/home/s081/Downloads/ysyx-workbench/abstract-machine/am/src/riscv/riscv.h"

/*
__attribute__((noinline))
void halt(int code) {
    __asm__ volatile("mv a0, %0; ebreak" : :"r"(code));
}
*/
int main()
{
	int z __attribute__((unused)) = SYNC_ADDR;
	int w __attribute__((unused)) = 1;
	return 0;
}
