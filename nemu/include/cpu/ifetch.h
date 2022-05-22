#ifndef __CPU_IFETCH_H__

#include <memory/vaddr.h>

//s->isa.inst.val = inst_fetch(&s->snpc, 4);
static inline uint32_t inst_fetch(vaddr_t *pc, int len) {
  uint32_t inst = vaddr_ifetch(*pc, len);
  (*pc) += len;   //static new pc, assume no branch happens, so just points to the next inst
  return inst;
}

#endif
