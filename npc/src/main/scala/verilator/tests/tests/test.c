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
	int j = 0;
	int n = 10e8;
	while(n--)j++;
	halt(j - 10e8);
	return 0;
}
