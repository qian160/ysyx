#include <amtest.h>

void rtc_test() {
  AM_TIMER_RTC_T rtc;
  int sec = 1;
  int now_us = 0, now_sec = 0;
  while (1) {
    //while(io_read(AM_TIMER_UPTIME).us / 1000000 < sec) 
    while(1)
    {
	now_us  = io_read(AM_TIMER_UPTIME).us;
	now_sec = now_us / 1000000;
//	if(now_sec < sec)
//	    printf("not enough: past time = %d\n", now_us);
//	else
	if(now_sec >= sec)
	    break;
    }
//    printf("OKAY, past time = %d\n", now_us);

    rtc = io_read(AM_TIMER_RTC);
    //printf("%d-%d-%d %02d:%02d:%02d GMT (", rtc.year, rtc.month, rtc.day, rtc.hour, rtc.minute, rtc.second);
    printf("%d-%2d-%2d %2d:%2d:%2d GMT (", rtc.year, rtc.month, rtc.day, rtc.hour, rtc.minute, rtc.second);
    if (sec == 1) {
      printf("%d second).\n", sec);
    } else {
      printf("%d seconds).\n", sec);
    }
    sec ++;
  }
}
