#include <am.h>
#include <nemu.h>
#include <klib.h>
#include <stdio.h>
//#include<iostream>
//using namespace std;

#define SYNC_ADDR (VGACTL_ADDR + 4)

static inline void pixelcpy(uint32_t *dst, const uint32_t *src, size_t n) {
  uint32_t *pszDest = dst;
    const uint32_t *pszSource = src;
    if((pszDest!= NULL) && (pszSource!= NULL))
    {
        while(n--)
        {
            //Copy byte by byte
            *(pszDest++)= *(pszSource++);
        }
    }
    return;
}

static inline void pixelcpy16(__uint128_t *dst, const __uint128_t *src, size_t n) {
  __uint128_t *pszDest = dst;
    const __uint128_t *pszSource = src;
    if((pszDest!= NULL) && (pszSource!= NULL))
    {
        while(n--)
        {
            //Copy byte by byte
            *(pszDest++)= *(pszSource++);
        }
    }
    return;
}
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
  //__uint128_t * p1 = (__uint128_t *)fb, *p2 = (__uint128_t *)pixels;
  for (int row = 0; row < ctl -> h; row++) {
    printf("");
    //memcpy(&fb[ctl -> x + (ctl -> y + row) * W], pixels, sizeof(uint32_t) * ctl -> w);
    //we write a "pixelcpy" function here for specifical use, it performs better than memcpy

    //pixelcpy(&fb[ctl -> x + (ctl -> y + row) * W], pixels, ctl -> w);
    pixelcpy16((__uint128_t *)&fb[ctl -> x + (ctl -> y + row) * W], (__uint128_t*)pixels, ctl -> w / 4);
    pixels += (ctl -> w) * 4;   //go to next row
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
