#include <common.h>
#include "syscall.h"
#include "../../navy-apps/libs/libos/src/syscall.h"

extern int fs_open(const char *pathname, int flags, int mode);
extern size_t fs_read(int fd, void *buf, size_t len);
extern size_t fs_write(int fd, const void *buf, size_t len);
extern size_t fs_lseek(int fd, size_t offset, int whence);
// extern int fs_close(int fd);

void do_syscall(Context *c) {
  uintptr_t a7 = c -> CALL_NUMBER;
  
  uintptr_t _a0  __attribute__((unused))= c -> SYSCALL_ARG1;
  uintptr_t _a1  __attribute__((unused))= c -> SYSCALL_ARG2;
  uintptr_t _a2  __attribute__((unused))= c -> SYSCALL_ARG3;
  uintptr_t _ret __attribute__((unused));

  switch (a7) {
    case SYS_yield:    yield();   break;
    //case SYS_exit:  halt(_a0);  break;
    //case SYS_read:
    //case SYS_write: _ret = fs_write(_a0, (char *)_a1, _a2); break;

    default: panic("Unhandled syscall ID = %d", a7);
  }
}
