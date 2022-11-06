#include <amtest.h>

void print_test() {
  unsigned long last = 0;

  while (1) {
    unsigned long upt = io_read(AM_TIMER_UPTIME).us / 1000;
    if (upt - last > 1000) {
	printf("Hello World!\n");
	last = upt;
    }
    else
    {
    	printf("%d\n", upt);
    }
  }
}
