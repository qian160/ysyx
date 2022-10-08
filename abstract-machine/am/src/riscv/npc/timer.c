#include <am.h>
#include "../../riscv/riscv.h"

# define DEVICE_BASE 0xa0000000   //string.c: hit bad trap
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)  

static uint64_t init_time = 0;

void __am_timer_init() {
  init_time = ind(RTC_ADDR);
}


void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint64_t now = ind(RTC_ADDR);
  uptime -> us = now - init_time;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
