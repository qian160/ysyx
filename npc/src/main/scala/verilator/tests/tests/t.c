#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include "/home/s081/Downloads/ysyx-workbench/abstract-machine/am/src/riscv/riscv.h"

#define MMIO_BASE 0xa0000000

#define SERIAL_PORT     (MMIO_BASE + 0x00003f8)     // size = 8
#define KBD_ADDR        (MMIO_BASE + 0x0000060)     // size = 4, stores the key we just pressed
#define RTC_ADDR        (MMIO_BASE + 0x0000048)     // size = 8
#define VGACTL_ADDR     (MMIO_BASE + 0x0000100)     // size = 8, 0 - 1: height, 2 - 3: width. Left 4 unused
#define SYNC_ADDR       (VGACTL_ADDR + 4)             // write non-zero value to here will update the screen
#define AUDIO_ADDR      (MMIO_BASE 	 + 0x0000200)     // size = 24
#define DISK_ADDR       (MMIO_BASE 	 + 0x0000300)     // size = 0x80
#define FB_ADDR         (MMIO_BASE   + 0x1000000)     // size = 300 * 400 * 4
#define AUDIO_SBUF_ADDR (MMIO_BASE   + 0x1200000)     // size = 0x10000

int main()
{
	//int z __attribute__((unused)) = io_read(VGACTL_ADDR).width;
	int w __attribute__((unused)) = 1;
	return 0;
}
