#include <am.h>
#include <nemu.h>
#include <klib.h>
#include <stdio.h>
//#include<iostream>
//using namespace std;

#define SYNC_ADDR (VGACTL_ADDR + 4)

static inline void pixelcpy4(void *dst, const void *src, size_t n) {
  uint32_t *pszDest = (uint32_t *)dst;
    const uint32_t *pszSource = (uint32_t *)src;
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

static inline void pixelcpy8(void *dst, const void *src, size_t n) {
  uint64_t *pszDest = (uint64_t *)dst;
  n = n >> 1;
    const uint64_t *pszSource = (uint64_t *)src;
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

static inline void pixelcpy16(void *dst, const void *src, size_t n) {
  __uint128_t *pszDest = (__uint128_t *)dst;
  n = n >> 2;
    const __uint128_t *pszSource = (__uint128_t *)src;
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

  void (*whichFunc)(void * dst, const void *src, size_t n) = ctl -> w % 4 == 0 ? pixelcpy16 : ctl -> w % 2 == 0 ? pixelcpy8 : pixelcpy4;

  for (int row = 0; row < ctl -> h; row++) {
    //we write a "pixelcpy" function here for specifical use, it performs better than memcpy
    /*
    if(ctl -> w % 4 == 0){
      pixelcpy16((__uint128_t *)&fb[ctl -> x + (ctl -> y + row) * W], (__uint128_t*)pixels, ctl -> w / 4);
      pixels += (ctl -> w);
    }
    else if (ctl -> w % 2 == 0)
    {
      pixelcpy8((uint64_t *)&fb[ctl -> x + (ctl -> y + row) * W], (uint64_t*)pixels, ctl -> w / 2);
      pixels += (ctl -> w);
    }
    else{
      pixelcpy4(&fb[ctl -> x + (ctl -> y + row) * W], pixels, ctl -> w);
      pixels += (ctl -> w);
    }
    */
    whichFunc(&fb[ctl -> x + (ctl -> y + row) * W], pixels, ctl -> w);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
