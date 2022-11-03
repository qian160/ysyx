#include <am.h>
#include <klib.h>
#include <klib-macros.h>
/*
__attribute__((noinline))
void halt(int code) {
    __asm__ volatile("mv a0, %0; ebreak" : :"r"(code));
}
*/
int main()
{

	int a[10];
	a[8] = 0x114514;
	halt(a[8] - 0x114514);
	return 0;
}
