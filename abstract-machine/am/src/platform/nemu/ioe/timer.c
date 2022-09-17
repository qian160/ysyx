#include <am.h>
#include <nemu.h>
#include <stdio.h>    //for temp debug use

uint64_t init_time = 0;

void __am_timer_init() {
  init_time = io_read(AM_TIMER_UPTIME).us;
  printf("%lx\n", init_time);
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  //uint64_t time;
  //ioe_read(AM_TIMER_UPTIME, &time);
  //io_read(AM_TIMER_UPTIME);
  uptime->us = io_read(AM_TIMER_UPTIME).us - init_time;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
