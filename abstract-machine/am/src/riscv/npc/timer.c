#include <am.h>

# define DEVICE_BASE 0xa0000000   //string.c: hit bad trap
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)  

//static uint64_t init_time = 0;

void __am_timer_init() {
  /*
  uint32_t hi = inl(RTC_ADDR + 4);
  uint32_t lo = inl(RTC_ADDR);
  //init_time = read_timer();
  init_time = ((uint64_t)hi << 32) | (uint64_t)lo;
  */
}


void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  /*
  uint32_t now_hi = inl(RTC_ADDR + 4);
  uint32_t now_lo = inl(RTC_ADDR);
  uint64_t now = ((uint64_t)now_hi << 32) | (uint64_t)now_lo;
  uptime -> us = now - init_time;
  */
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
