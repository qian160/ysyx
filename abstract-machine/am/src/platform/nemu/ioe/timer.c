#include <am.h>
#include <nemu.h>
#include <stdio.h>
#include "../../../riscv/riscv.h"

extern uint64_t get_time();
uint64_t init_time = 0;

void __am_timer_init() {
  init_time   = get_time();
  uint32_t hi = init_time >> 32;
  uint32_t lo = init_time & 0xffffffff;
  outl(RTC_ADDR, lo);
  outl(RTC_ADDR + 4, hi);

  printf("init time = 0x%lx\n", init_time);
  return;
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {

  uptime->us = get_time() - init_time;
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
