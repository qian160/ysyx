#include <am.h>
#include <klib-macros.h>
extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

#define DEVICE_BASE     0xa0000000
#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)     //size = 8
static inline void outb(uintptr_t addr, uint8_t  data) { *(volatile uint8_t  *)addr = data; }

void putch(char ch) {
  outb(SERIAL_PORT, ch);
}

__attribute__((noinline))
void halt(int code) {
    __asm__ volatile("mv a0, %0; ebreak" : :"r"(code));
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
