#include <am.h>

Area heap = RANGE(NULL, NULL);

void putch(char ch) {
}

__attribute__((noinline))
void halt(int code) {
    asm volatile("mv a0, %0; ebreak" : :"r"(code));
}
