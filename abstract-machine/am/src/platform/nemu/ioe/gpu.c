#include <am.h>
#include <nemu.h>
#include <klib.h>
#include <stdio.h>
//#include<iostream>
//using namespace std;

#define SYNC_ADDR (VGACTL_ADDR + 4)
static int PIXELS[300 * 400];
/*
void load_bmp()
{
    FILE* f = fopen("/home/s081/code/114514.bmp", "rb");

    if(f == NULL)
    return ;
        //throw "Argument Exception";

    unsigned char info[54];
    fread(info, sizeof(unsigned char), 54, f); // read the 54-byte header

    // extract image height and width from header
    int width = *(int*)&info[18];
    int height = *(int*)&info[22];

    int row_padded = (width*3 + 3) & (~3);
    unsigned char data [row_padded];
    unsigned char tmp;

    int t = 0;
    for(int i = 0; i < height; i++)
    {
        fread(data, sizeof(unsigned char), row_padded, f);
        for(int j = 0; j < width*3; j += 3)
        {
            // Convert (B, G, R) to (R, G, B)
            tmp = data[j];
            data[j] = data[j+2];
            data[j+2] = tmp;
            PIXELS[t++] = (data[i] << 16 | data[i+1] << 8) | data[i+2];
            //printf("R: %d G:%d B%d\n",(int)data[i], (int)data[i+1], (int)data[i+2]);
//            cout << "R: "<< (int)data[j] << " G: " << (int)data[j+1]<< " B: " << (int)data[j+2]<< endl;
        }
    }

    fclose(f);
    return;
}
*/
void __am_gpu_init() {

  //TODO: add a photo
  //load_bmp();
  int i;
  int w = inw(VGACTL_ADDR + 2);  // TODO: get the correct width
  int h = inw(VGACTL_ADDR);      // TODO: get the correct height
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) fb[i] = PIXELS[i];
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
  /*
  if (ctl->sync) {
    outl(SYNC_ADDR, 114514);    //write to SYNC reg will call update
  }
  //TODO: improve the performance
  
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
