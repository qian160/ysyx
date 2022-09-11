#include <isa.h>
#include <memory/paddr.h>

word_t vaddr_ifetch(vaddr_t addr, int len) {
  return paddr_read(addr, len, 0);
}

word_t vaddr_read(vaddr_t addr, int len, bool flag) {
  return paddr_read(addr, len, flag);
}

void vaddr_write(vaddr_t addr, int len, word_t data) {
  paddr_write(addr, len, data);
}
