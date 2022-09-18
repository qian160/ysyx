#include <am.h>
#include <nemu.h>
#include <stdio.h>
#include "../../../riscv/riscv.h"

uint64_t init_time = 0;
void __am_timer_init() {
  //inl will be compiled to lw, recall the implementation of lw in nemu(inst.c)
  //it will call paddr_read. And then this function will discover that the address is a device, 
  //so it calls mmio_read and map_read. After map_read, the call_back function is also called
  //only at offset 4 will the clock be updated 
  uint32_t hi = inl(RTC_ADDR + 4);
  uint32_t lo = inl(RTC_ADDR);

  init_time = ((uint64_t)hi << 32) | lo;
  printf("init_hi = %x, init_lo = %x\n", hi, lo);
  return;
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t now_hi = inl(RTC_ADDR + 4);
  uint32_t now_lo = inl(RTC_ADDR);
  uint64_t now = ((uint64_t)now_hi << 32) | now_lo;
  uptime->us = now - init_time;
  printf("now_hi = %x, now_lo = %x\n", now_hi, now_lo);
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
