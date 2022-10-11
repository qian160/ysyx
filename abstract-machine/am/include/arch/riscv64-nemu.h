#ifndef ARCH_H__
#define ARCH_H__

struct Context {
  // TODO: fix the order of these members to match trap.S
  uintptr_t gpr[32], mcause, mstatus, mepc;
  void *pdir;
};

#define CALL_NUMBER   gpr[17]  // a7
#define SYSCALL_ARG1  gpr[10]  // a0
#define SYSCALL_ARG2  gpr[11]  // a1
#define SYSCALL_ARG3  gpr[12]  // a2
#define SYSCALL_RETV  gpr[10]  // a0
#endif
