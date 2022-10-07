#include <am.h>
#include <nemu.h>

static uint64_t init_time = 0;

static inline uint64_t read_timer(){
  uint64_t hi = ((uint64_t)inl(RTC_ADDR + 4) << 32);
  uint64_t lo = (uint64_t)inl(RTC_ADDR);
  return hi | lo;
}

void __am_timer_init() {
  // the 'inl' will be compiled to 'lw' in asm, remember how lw is implemented in nemu(inst.c):
  // firstly it calls paddr_read. And then pmem_read will find that the address is not in pmem
  // then it will try mmio_read and map_read. After map_read, the call_back function is also called
  // only at offset 4 will the clock be updated 
  uint32_t hi = inl(RTC_ADDR + 4);
  uint32_t lo = inl(RTC_ADDR);
  //init_time = read_timer();
  init_time = ((uint64_t)hi << 32) | (uint64_t)lo;
  printf("am_timer_init called\n");
}

/*  difference between this function and 'rtc_io_handler':
      * rtc_io_handler will be called whenever you try to r/w that address
      * this am function serves as am's API, and will only be called through the 'io_read' or 'io_write' function by user program(through a lut)
        * so this am function will also trigger 'rtc_io_handler' since it wants to r/w that address
*/
void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t now_hi = inl(RTC_ADDR + 4);  //offset = 4 will update the time before reading
  uint32_t now_lo = inl(RTC_ADDR);
  uint64_t now = ((uint64_t)now_hi << 32) | (uint64_t)now_lo;
  uptime -> us = 114514;//now - init_time;
  printf("am_timer_uptime called\n");
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
