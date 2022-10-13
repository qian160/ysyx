#include <common.h>
#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

#define putnstr(buf, n) \
    for(size_t i=0; i<n; ++i) putch(*(const char*)(buf+i))
size_t serial_write(const void *buf, size_t offset, size_t len) {
  putnstr("[stdout/err] len:", 18);
  putch('0'+len/10);
  putch('0'+len%10);
  putch('\t');
  putnstr(buf, len);
  return len;
}

#define KEYDOWN_MASK 0x8000

size_t events_read(void *buf, size_t offset, size_t len) {
  buf = (char*)buf;
  AM_INPUT_KEYBRD_T key = io_read(AM_INPUT_KEYBRD);
  if(key.keycode == AM_KEY_NONE)  return 0;
  char *tag = key.keydown ? "keydown: " : "keyup: ";
  strcpy(buf, tag);
  strcat(buf, keyname[key.keycode]);
  return 1;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  Log("I'm reading");

  int w = io_read(AM_GPU_CONFIG).width;
  int h = io_read(AM_GPU_CONFIG).height;

  int ret = snprintf(buf, len, "WIDTH:%d\nHEIGHT:%d", w, h);
  Log("%s", (char *)buf);
  if (ret >= len){
    assert(0);
  }
  while(1);

  return ret + 1;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {

  // const uint32_t *src = (uint32_t *)buf;
  // uint32_t *fb = (uint32_t *)(uintptr_t)(FB_ADDR + offset); //字节编址

  // for (int i = 0; i < len / 4; ++i){
  //   fb[i] = src[i];
  // }
  //yield();
  uintptr_t *ptr = (uintptr_t *)(&buf);
  //                        dest,   src,        size
  io_write(AM_GPU_MEMCPY, offset, (void *)*ptr, len);
  io_write(AM_GPU_FBDRAW, 0, 0, NULL, 0, 0, true);

  return len;
}


void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
