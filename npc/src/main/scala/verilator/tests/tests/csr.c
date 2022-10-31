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
	int in = 0x114514, out = 0;
	__asm__ volatile(
		"csrw mepc, %1\n\t"
		"csrr %0, mepc\n\t"
		:"=r"(out):"r"(in)
	);

	halt(out - 0x114514);
	return 0;
}
