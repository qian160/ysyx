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
	printf("hello world!\n");
	return 0;
}
