#include <am.h>
#include <nemu.h>

static uint64_t init_time = 0;

static inline uint64_t read_timer(){
  uint64_t hi = ((uint64_t)inl(RTC_ADDR + 4) << 32);
  uint64_t lo = (uint64_t)inl(RTC_ADDR);
  return hi | lo;
}

void __am_timer_init() {
  //inl will be compiled to lw, recall the implementation of lw in nemu(inst.c)
  //it will call paddr_read. And then this function will discover that the address is a device, 
  //so it calls mmio_read and map_read. After map_read, the call_back function is also called
  //only at offset 4 will the clock be updated 
  uint32_t hi = inl(RTC_ADDR + 4);
  uint32_t lo = inl(RTC_ADDR);
  //init_time = read_timer();
  init_time = ((uint64_t)hi << 32) | (uint64_t)lo;
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t now_hi = inl(RTC_ADDR + 4);
  uint32_t now_lo = inl(RTC_ADDR);
  uint64_t now = ((uint64_t)now_hi << 32) | (uint64_t)now_lo;
  uptime -> us = now - init_time;
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
