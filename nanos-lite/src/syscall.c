#include <common.h>
#include "syscall.h"
void do_syscall(Context *c) {
  uintptr_t a7 = c -> CALL_NUMBER;
  
  //uintptr_t _a0 = c -> SYSCALL_ARG1;
  //uintptr_t _a1 = c -> SYSCALL_ARG2;
  //uintptr_t _a2 = c -> SYSCALL_ARG3;
  //uintptr_t _ret;

  switch (a7) {
    default: panic("Unhandled syscall ID = %d", a7);
  }
}
