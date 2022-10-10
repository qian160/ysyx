#ifndef __ISA_RISCV64_H__
#define __ISA_RISCV64_H__

#include <common.h>

#define MTVEC   0x305
#define MSTATUS 0x300
#define MCAUSE  0x342
#define MEPC    0x341

typedef struct {
  word_t gpr[32];
  word_t pc;

  word_t mtvec;
  word_t mstatus;
  word_t mepc;
  word_t mcause;
} riscv64_CPU_state;

enum CSRMODE{CSRRW = 1, CSRRS, CSRRC, CSRRWI = 5, CSRRSI, CSRRCI};

// decode
typedef struct {
  unsigned char funct3/*  : 3*/;
  bool is_jalr : 1;
  bool is_lui  : 1;
  bool is_load : 1;
  //bool branch_taken : 1;
  bool is_ret : 1;
  //word_t link_addr; not necessarily, always pc + 4
  word_t target;
  word_t src1, src2;
  unsigned char rd/* : 5*/;
  unsigned char type/* : 4*/;
  //add more signals
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
