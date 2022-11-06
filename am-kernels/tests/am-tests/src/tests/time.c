#include <amtest.h>

void time_test() {

  while (1) {
    printf("%d\n", io_read(AM_TIMER_UPTIME).us / 1000);
  }
}
