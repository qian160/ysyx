//context extension
#include <am.h>
#include <riscv/riscv.h>
#include "../../../../../navy-apps/libs/libos/src/syscall.h"
#include <klib.h>
#define syscall_num c -> gpr[17]    //a7
static Context* (*user_handler)(Event, Context*) = NULL;    // do_event

//called by __am_asm_trap
Context* __am_irq_handle(Context *c) {
  //find the irq reason by examing a7
  if (user_handler) {
    Event ev = {0};
    c -> mepc += 4;   //need further consideration
    printf("111");
    if(syscall_num >= SYS_exit && syscall_num <= SYS_gettimeofday){
      ev.event = EVENT_SYSCALL; //do_event will figure out the syscall 
    }
    else if(syscall_num == -1)
      ev.event  = EVENT_YIELD;
    else{
      switch (syscall_num) {
        default: ev.event = EVENT_ERROR; break;
      }
    }

    c = user_handler(ev, c);    //do_event
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  // mtvec now holds that handler func's address
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));
  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  //a7 is the syscall number. Improve event_yield to be syscall_yield so it can be dealt uniformly
  asm volatile("li a7, -1; ecall");   //x17, the handler is '__am_asm_trap'(in trap.S), which will call 'do_event'(in irq.c)
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
