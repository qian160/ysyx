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
  int is_down  = 0;
  int key = io_read(AM_INPUT_KEYBRD).keycode;
  if(key == AM_KEY_NONE) {
    return 0;
  }

  if(key & KEYDOWN_MASK){
    is_down = 1;
    key ^= KEYDOWN_MASK;  //clear that bit
  }

  if(is_down)
    len=sprintf(buf,"keydown %s\n",keyname[key]);
  else
    len=sprintf(buf,"keyup %s\n",keyname[key]);
  return len;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
