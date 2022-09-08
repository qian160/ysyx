#include <isa.h>
#include <memory/paddr.h>

// this is not consistent with uint8_t
// but it is ok since we do not access the array directly
//a memcpy will overcover this if a img file is used
static const uint32_t img [] = {             //offset

0xfff00093,
0x00200113,
0x002081bb,
0x00600093,
0xfff00113,
0x002081bb,

/*
  0x00000297,  // auipc t0,0                  /*0
  0x80000093,  // li x1, -2048                /*4
  0x00100113,  // li x2, 1                    /*8
  0x003081bb,  // addw x3, x1, x2             /*12
  0x0052be23,  // sd t0, 28(t0)               /*16
  0x01c2be03,  // ld a0, 28(t0)               /*20
  0x00100073,  // ebreak (used as nemu_trap)  /*24
  0x41919810,  // some data                   /*28
  0x00011451,                                 /*32
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
