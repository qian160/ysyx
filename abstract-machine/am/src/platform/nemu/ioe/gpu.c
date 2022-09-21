#include <am.h>
#include <nemu.h>
#include <klib.h>
#include <stdio.h>
#include "/home/s081/Downloads/ysyx-workbench/nemu/include/generated/autoconf.h"
//#include<iostream>
//using namespace std;

#define SYNC_ADDR (VGACTL_ADDR + 4)

static int  W __attribute__((unused)) = 0, 
            H __attribute__((unused)) = 0;

void __am_gpu_init() {
#ifdef CONFIG_HAS_VGA
  W = inw(VGACTL_ADDR + 2);
  H = inw(VGACTL_ADDR);
#endif
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = 400, .height = 300,
    .vmemsz = 400 * 300 * 4
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {

  if (ctl->sync) {
    outl(SYNC_ADDR, 114514);    //write to SYNC reg will call update
  }
  //TODO: improve the performance
  //this seems to be consuming lots of computations......
  //write to vga frame buffer
  uint32_t* fb __attribute__((unused))     = (uint32_t *)(uintptr_t)FB_ADDR;
  uint32_t* pixels __attribute__((unused)) = ctl->pixels;

  //draw row by row
  //int W = inw(VGACTL_ADDR + 2);
  //if(ctl -> h == 0 || ctl -> w == 0)  return;
  /*
  for (int row = 0; row < ctl -> h; row++) {
    memcpy(&fb[ctl -> x + (ctl -> y + row) * W], pixels, sizeof(uint32_t) * ctl -> w);
    pixels += ctl->w;   //go to next row
  }
  */
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
