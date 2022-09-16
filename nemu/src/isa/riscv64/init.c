#include <isa.h>
#include <memory/paddr.h>

// this is not consistent with uint8_t
// but it is ok since we do not access the array directly
//a memcpy will overcover this if a img file is used
static const uint32_t img [] = {             //offset
  0x00108093,  // addi x1, x1, 1
  0x00000297,  // auipc t0,0
  0x0002b823,  // sd  zero,16(t0)
  0x0000006f,  // j 8
  0x00108093,  // addi x1, x1, 1
  0x0000006f,  // j -8
  0x00108093,  // addi x1, x1, 1
  0x0102b503,  // ld  a0,16(t0)
  0x00100073,  // ebreak (used as nemu_trap)
  0xdeadbeef,  // some data

/*

*/
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
