#include <isa.h>
#include <memory/paddr.h>

// this is not consistent with uint8_t
// but it is ok since we do not access the array directly
//a memcpy will overcover this if a img file is used
static const uint32_t img [] = {
  0x00000297,  // auipc t0,0
  0x07200313,  // li t1, 114
  0x20200393,  // li t2, 514
  0x01c2be03,  // ld t3, 28(t0)
  0x0052be23,  // sd t0, 28(t0)
  0x01c2be03,  // ld a0, 28(t0)
  0x00100073,  // ebreak (used as nemu_trap)
  0x11451419,  // some data
};

static void restart() {
  /* Set the initial program counter. */
  cpu.pc = RESET_VECTOR;

  /* The zero register is always 0. */
  cpu.gpr[0] = 0;
}

void init_isa() {
  /* Load built-in image. */
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));

  /* Initialize this virtual computer system. */
  restart();
}
