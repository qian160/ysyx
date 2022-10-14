#include <stdint.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;

static uint32_t NDL_INIT_TIME;
static struct timeval time_val;

uint32_t NDL_GetTicks() {
  gettimeofday(&time_val, 0);
  return time_val.tv_sec*1000 + time_val.tv_usec/1000 - NDL_INIT_TIME;
}

extern int _open(const char *path, int flags, mode_t mode);
extern int _read(int fd, void *buf, size_t count);

int NDL_PollEvent(char *buf, int len) {
  //in fact we can directly use open and read.... But why?
  int fd = open("/dev/events", 0, 0);
  return read(fd, buf, len);
}

#define W 400
#define H 300
#define SIZE W * H * 4

void NDL_OpenCanvas(int *w, int *h) {

  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
}

static int canvas_w, canvas_h, canvas_x = 0, canvas_y = 0;

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  int graphics = open("/dev/fb", O_RDWR);
  for (int i = 0; i < h; ++i){
    lseek(graphics, ((canvas_y + y + i) * screen_w + (canvas_x + x)) * sizeof(uint32_t), SEEK_SET);
    ssize_t s = write(graphics, pixels + w * i, w * sizeof(uint32_t));
  }
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  // get boot time
  gettimeofday(&time_val, NULL);
  NDL_INIT_TIME = time_val.tv_sec*1000 + time_val.tv_usec/1000;
  // get screen width and height
  char info[128];
  int dispinfo = open("/proc/dispinfo", 0);
  read(dispinfo, info, sizeof(info));
  sscanf(info, "WIDTH:%d\nHEIGHT:%d", &screen_w, &screen_h);
  printf("w = %d\nh = %d\n", screen_w, screen_h);

  return 0;
}

void NDL_Quit() {
}

