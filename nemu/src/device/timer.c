#include <device/map.h>
#include <device/alarm.h>
#include <utils.h>

static uint32_t *rtc_port_base = NULL;

volatile uint64_t npc_timer = 0l;

static void rtc_io_handler(uint32_t offset, int len, bool is_write) {
  // printf("%s %s %d\n 111\n", __FILE__, __func__, __LINE__);
  assert(offset == 0 || offset == 4);
  // this is the handler function(callback)
  // there are 2 behaviors according to the offset:
  // offset = 0: just read, no update
  // offset = 4: update then read
  // the attempt to write won't update the timer(execuate the code below)
  // Instead, nothing will happen if we try to write to rtc
  // only read will update the timer
  if (!is_write && offset == 4) {
    uint64_t us = get_time();
    //rtc just accumulate the time. It's uptime's job to calculate the past time
    rtc_port_base[0] = (uint32_t)us;    //us
    rtc_port_base[1] = us >> 32;        //sec
    npc_timer = us;
    printf("new timer @0x%lx\n", us);
  }
}

#ifndef CONFIG_TARGET_AM
static void timer_intr() {
  if (nemu_state.state == NEMU_RUNNING) {
    extern void dev_raise_intr();
    dev_raise_intr();
  }
}
#endif

void init_timer() {
  rtc_port_base = (uint32_t *)new_space(8);
#ifdef CONFIG_HAS_PORT_IO
  add_pio_map ("rtc", CONFIG_RTC_PORT, rtc_port_base, 8, rtc_io_handler);
#else
  add_mmio_map("rtc", CONFIG_RTC_MMIO, rtc_port_base, 8, rtc_io_handler);
#endif
  IFNDEF(CONFIG_TARGET_AM, add_alarm_handle(timer_intr));
}
