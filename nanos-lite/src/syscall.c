#include <common.h>
#include "syscall.h"
#include "../../navy-apps/libs/libos/src/syscall.h"

extern int fs_open(const char *pathname, int flags, int mode);
extern size_t fs_read(int fd, void *buf, size_t len);
extern size_t fs_write(int fd, const void *buf, size_t len);
extern size_t fs_lseek(int fd, size_t offset, int whence);
// extern int fs_close(int fd);


#define CALL_NUMBER   gpr[17]  // a7
#define SYSCALL_ARG1  gpr[10]  // a0
#define SYSCALL_ARG2  gpr[11]  // a1
#define SYSCALL_ARG3  gpr[12]  // a2
#define SYSCALL_RETV  gpr[10]  // a0

size_t write(uint32_t fd, char *buf, size_t len) {
  size_t ret = 0;
  if(fd == 1 || fd == 2){
    while(len-- && *buf) {
      putch(*buf++);
      ret ++;
    }
  }
  return ret;
}

void do_syscall(Context *c) {
  uintptr_t a7 = c -> CALL_NUMBER;
  uintptr_t  _a0  __attribute__((unused)) = c -> SYSCALL_ARG1;
  uintptr_t  _a1  __attribute__((unused)) = c -> SYSCALL_ARG2;
  uintptr_t  _a2  __attribute__((unused)) = c -> SYSCALL_ARG3;
  uintptr_t* _ret __attribute__((unused)) = &c -> SYSCALL_RETV;

  switch (a7) {
    case SYS_yield:   yield();    break;
    case SYS_exit:    halt(_a0);  break;
    //case SYS_read:
    case SYS_write:   *_ret = write(_a0, (char *)_a1, _a2); break;//fs_write(_a0, (char *)_a1, _a2); break;
    case SYS_brk:     *_ret = 0;   break;

    default: panic("Unhandled syscall ID = %d", a7);
  }
}

