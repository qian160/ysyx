//context extension
#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>
#define syscall_num c -> gpr[17]    //a7
static Context* (*user_handler)(Event, Context*) = NULL;    // do_event

//called by __am_asm_trap
Context* __am_irq_handle(Context *c) {
//  asm volatile ("j 0");
  if (user_handler) {
    Event ev = {0};
    c -> mepc += 4;   //need consideration
    switch (syscall_num) {
      case -1: ev.event = EVENT_YIELD; break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
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
  //a7 is the syscall number 

  asm volatile("li a7, -1; ecall");   //x17, the handler is '__am_asm_trap'(in trap.S), which will call 'do_event'(in irq.c)
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
