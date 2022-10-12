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
  AM_INPUT_KEYBRD_T key = io_read(AM_INPUT_KEYBRD);
  if(key.keycode == AM_KEY_NONE)  return 0;

  char *tag = key.keydown ? "keydown " : "keyup ";
  //if (real_length <= len){
  strcpy(buf, tag);
  // }else {
  //   assert(0);
  //   return 0;
  // }
  
  //real_length += strlen(keyname[ev.keycode]);
  
  //if (real_length<= len){
  strcat(buf, keyname[key.keycode]);
  // }else {
  //   Log("Need %d for %s%s but got %d", strlen(keyname[ev.keycode]), (char *)buf, keyname[ev.keycode], len);
  //   assert(0);
  //   return 0;
  // }
  sprintf(buf, "Got [%s] (%s)\n", keyname[key.keycode], tag);
  Log("Got  (kbd): %s (%d) %s\n", keyname[key.keycode], key.keycode, key.keydown ? "DOWN" : "UP");
  
  return 1;

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
