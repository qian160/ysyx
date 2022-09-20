#include <am.h>
#include <nemu.h>
#include <klib.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {

  //TODO: add a photo
  /*
  int i;
  int w = inw(VGACTL_ADDR + 2);  // TODO: get the correct width
  int h = inw(VGACTL_ADDR);      // TODO: get the correct height
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) fb[i] = i;
  outl(SYNC_ADDR, 1);
  */
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  fb[0] = 0x20221d;
  fb[1] = 0x221dff;
  fb[2] = 0x1dff20;
  fb[3] = 0xff2022;
  fb[4] = 0x20221c;
  fb[5] = 0x1cff20;
  fb[6] = 0xff2022;
  fb[7] = 0x1f221d;
  fb[8] = 0x231dff;
  fb[9] = 0x1dff1f;
  fb[10] = 0xff1f23;
  fb[11] = 0x1e221d;
  fb[12] = 0x221dff;
  fb[13] = 0x1dff1e;
  outl(SYNC_ADDR, 1);
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
  /*
  //this consumes lots of computations......
  //write to vga frame buffer
  uint32_t* fb = (uint32_t *)(uintptr_t)FB_ADDR;
  uint32_t* pixels = ctl->pixels;

  int W = inw(VGACTL_ADDR + 2);

  for (int i = 0; i < ctl->h; ++i) {
    memcpy(&fb[ctl->x + (ctl->y + i) * W], pixels, sizeof(uint32_t) * ctl->w);
    pixels += ctl->w;
  }
  */
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
