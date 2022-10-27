#include"include/common.h"
#include"include/device.h"
#include<functional>
#include<time.h>

//these devices are simple, so we just put them together here
void * serial_port = nullptr;
void * rtc_port    = nullptr;
void * kbd_base    = nullptr;

//vga is a little complex. So we put these variables in that module instead of here to better modulize
//extern void * vga_ctl;
//extern void * vga_fb;

using handler_t = void(uint64_t offset, uint64_t len , bool is_write);

extern void add_mmio_map(uint64_t begin, uint64_t end, void *mem, std::function<handler_t> handler);
extern void init_vga();


uint64_t getTime(){
    struct timespec now;
    clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
    return (now.tv_sec * 1000000 + now.tv_nsec / 1000);
}

uint64_t boot_time = 0;

static void serial_handler(uint64_t offset, uint64_t len, bool is_write)
{
    if(is_write){
        cout << ((char*)serial_port)[0];
    }
    else
    {
        printf("serial: do not support read\n");
        assert(0);
    }
}

static void rtc_handler(uint64_t offset, uint64_t len, bool is_write)
{
    if(is_write)
    {
        cout << "rtc:   do not support write" << endl;
    }
    else
    {
        uint64_t us = getTime() - boot_time;
        *(uint64_t*)rtc_port = us;
    }
}

int init_device()
{

    serial_port = malloc(1);
    add_mmio_map(SERIAL_PORT, SERIAL_PORT + 1, serial_port, serial_handler);

    rtc_port = malloc(8);
    boot_time = getTime();
    add_mmio_map(RTC_ADDR, RTC_ADDR + 8, rtc_port, rtc_handler);

    kbd_base = calloc(8, 1);
    add_mmio_map(KBD_ADDR, KBD_ADDR + 8, kbd_base, nullptr);

    init_vga();


    return 0;
}