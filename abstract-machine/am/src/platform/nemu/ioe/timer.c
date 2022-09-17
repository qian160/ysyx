#include <am.h>
#include <nemu.h>
#include <stdio.h>

uint64_t init_time = 0;

void __am_timer_init() {
  
  //printf("init time = 0x%lx\n", init_time);
  return;
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {

  uptime->us = io_read(AM_TIMER_UPTIME).us - init_time;
  return;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
  return;
}
