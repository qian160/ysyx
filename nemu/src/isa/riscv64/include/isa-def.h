#ifndef __ISA_RISCV64_H__
#define __ISA_RISCV64_H__

#include <common.h>

typedef struct {
  word_t gpr[32];
  vaddr_t pc;
} riscv64_CPU_state;

// decode
typedef struct {  ///????????
  char funct3  : 3;
  bool is_JALR : 1;
  bool is_lui  : 1;
  bool is_load : 1;
  char L_width : 3; //1,2,4,8
} riscv64_ISADecodeInfo;

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#define jalr_opcode  0b1100111
#define load_opcode  0b0000011
#define store_opcode 0b0100011

#define beq_funct3   0b000
#define bne_funct3   0b001
#define blt_funct3   0b100
#define bge_funct3   0b101
#define bltu_funct3  0b110
#define bgeu_funct3  0b111

#endif
