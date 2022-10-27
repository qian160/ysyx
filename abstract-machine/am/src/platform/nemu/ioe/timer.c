#include <am.h>
#include <nemu.h>

static uint64_t boot_time = 0;

void __am_timer_init() {
  // the 'ind' will be compiled to 'ld' in asm, remember how lw is implemented in nemu(inst.c):
  // firstly it calls paddr_read. And then pmem_read will find that the address is not in pmem
  // then it will try mmio_read and map_read. After map_read, the call_back function is also called
  //__asm__ volatile("j 0");
  boot_time = ind(RTC_ADDR);
  while(1);
}

/*  difference between this function and 'rtc_io_handler':
      * rtc_io_handler will be called whenever you try to r/w that address
      * this am function serves as am's API, and will only be called through the 'io_read' or 'io_write' function by user program(through a lut)
        * so this am function will also trigger 'rtc_io_handler' since it wants to r/w that address
*/
void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint64_t now = ind(RTC_ADDR);
  uptime -> us = now - boot_time;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 8;
  rtc->month  = 5;
  rtc->year   = 2002;
  return;
}
