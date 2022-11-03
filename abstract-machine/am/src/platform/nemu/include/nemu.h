#ifndef NEMU_H__
#define NEMU_H__

#include <klib-macros.h>
#include "/home/s081/Downloads/ysyx-workbench/nemu/include/generated/autoconf.h"

#include ISA_H // the macro `ISA_H` is defined in CFLAGS
               // it will be expanded as "x86/x86.h", "mips/mips32.h", ...

#if defined(__ISA_X86__)
# define nemu_trap(code) asm volatile ("int3" : :"a"(code))
#elif defined(__ISA_MIPS32__)
# define nemu_trap(code) asm volatile ("move $v0, %0; sdbbp" : :"r"(code))
#elif defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
# define nemu_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))
#elif
# error unsupported ISA __ISA__
#endif

#if defined(__ARCH_X86_NEMU)
# define DEVICE_BASE 0x0
#else
# define DEVICE_BASE 0xa0000000   //string.c: hit bad trap
#endif

#define MMIO_BASE 0xa0000000

#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)     // size = 8
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)     // size = 4, stores the key we just pressed
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)     // size = 8
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)     // size = 8, 0 - 1: height, 2 - 3: width. Left 4 unused
#define SYNC_ADDR       (VGACTL_ADDR + 4)             // write non-zero value to here will update the screen
#define AUDIO_ADDR      (DEVICE_BASE + 0x0000200)     // size = 24
#define DISK_ADDR       (DEVICE_BASE + 0x0000300)     // size = 0x80
#define FB_ADDR         (MMIO_BASE   + 0x1000000)     // size = 300 * 400 * 4
#define AUDIO_SBUF_ADDR (MMIO_BASE   + 0x1200000)     // size = 0x10000

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)
#define NEMU_PADDR_SPACE \
  RANGE(&_pmem_start, PMEM_END), \
  RANGE(FB_ADDR, FB_ADDR + 0x200000), \
  RANGE(MMIO_BASE, MMIO_BASE + 0x1000) /* serial, rtc, screen, keyboard */

typedef uintptr_t PTE;

#define PGSIZE    4096

//#define WHERE_AM_I (printf("%s %s %d\n", __FILE__, __func__, __LINE__))

#endif
