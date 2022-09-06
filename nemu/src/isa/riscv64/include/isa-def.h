#ifndef __ISA_RISCV64_H__
#define __ISA_RISCV64_H__

#include <common.h>

typedef struct {
  word_t gpr[32];
  vaddr_t pc;
} riscv64_CPU_state;

// decode
typedef struct {
  union { //only 1 information, so use union now. May need to be improved in the future
    uint32_t val;
  } inst;
} riscv64_ISADecodeInfo;

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#define jalr_opcode  0b1100111

#define beq_funct3   0b000
#define bne_funct3   0b001
#define blt_funct3   0b100
#define bge_funct3   0b101
#define bltu_funct3  0b110
#define bgeu_funct3  0b111

#endif
