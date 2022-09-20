#include <am.h>
#include <nemu.h>
#include <klib.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/mman.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

static int PIXELS[300 * 400];

void load_bmp(){

    int fd = open("/home/s081/code/114514.bmp", O_RDONLY);
    if(fd == -1){
        printf("open file %s failed\n", "114514.bmp");
        exit(1);
    }
    //get file size
    struct stat sb;
    if(fstat(fd, &sb) == -1){
        printf("fstat failed\n");
        exit(1);
    }
    size_t size = sb.st_size;
    //do mmap
    char * bmp = mmap(NULL, size, PROT_READ, MAP_PRIVATE, fd, 0);
    if(!bmp){
        printf("mmap failed\n");
        exit(1);
    }
//    close(fd);
    //check magic
    short magic = *(short*)bmp;
    if(magic ^ 19778){
        printf("not a bmp file\n");
        exit(1);
    }
    //get header infomation
    int sz = *(int *)(bmp + 2);
    int pixel_off         = *(int *)(bmp + 10);
    u_int32_t width       = *(u_int32_t *)(bmp + 18);
    u_int32_t height      = *(u_int32_t *)(bmp + 22);
    u_int32_t color_depth = *(ushort *)(bmp + 28);

    int * pixels = (int *)(bmp + pixel_off);
    
    printf("sz = %d, off = %d, width = %d, height = %d, depth = %d\n", sz, pixel_off, width, height, color_depth);

    int stride = (24*width+31)/8;
    stride = stride / 4 * 4;
    printf("%d\n", stride);
    printf("w = %d, h = %d\n", width, height);

    int i, j;

    for(int i =0; i < width * height; i++){
        int pixel = *pixels;
        /*
        int r = (pixel & 0x11000000) >> 24;
        int g = (pixel & 0x00110000) >> 16;
        int b = (pixel & 0x00001100) >> 8;
        printf("%p:    %d, %d, %d\n", pixels, r, g, b);
        */
        pixels++;
        PIXELS[i] = pixel;
    }
    

}


void __am_gpu_init() {

  //TODO: add a photo
  load_bmp();
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
