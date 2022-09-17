#include <am.h>
#include <nemu.h>
#include <stdio.h>
#include "../../../riscv/riscv.h"

uint64_t init_time = 0;

void __am_timer_init() {
  uint32_t lo = inl(RTC_ADDR);
  uint32_t hi = inl(RTC_ADDR + 4);
  init_time = ((uint64_t)hi << 32) | lo;
  
  //WHERE_AM_I;
  printf("hi = %d, lo = %d\n", hi, lo);
  printf("init time = 0x%lx\n", init_time);
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
