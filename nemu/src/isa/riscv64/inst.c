#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read   //memory read
#define Mw vaddr_write  //memory write

enum {
  TYPE_I, TYPE_U, TYPE_S, TYPE_J,
  TYPE_N, // none
};

#define src1R(n) do { *src1 = R(n); } while (0)
#define src2R(n) do { *src2 = R(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0)

static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immU(uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }
static word_t immJ(uint32_t i) { return SEXT((BITS(i, 31, 31) << 20) | (BITS(i, 19, 12) << 12) | (BITS(i, 20, 20) << 11) | (BITS(i, 30, 21) << 1 ), 20); }

//src1 and src2 are not source operands, they are just used to communicate with outside
static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, int type) {
  uint32_t inst = s->isa.inst.val;
  int rd  = BITS(inst, 11, 7);
  int rs1 = BITS(inst, 19, 15);
  int rs2 = BITS(inst, 24, 20);
  word_t inst = s ->isa.inst.val;
  word_t imm_J = immJ(inst);
  word_t imm_I = immI(inst);
  word_t imm_U = immU(inst);
  word_t imm_S = immS(inst);
  word_t pc = s -> pc;
  word_t pc_Plus4 = pc + 4;
  word_t JAL_TARGET = pc + imm_J;
  word_t JALR_TARGET = R(rs1) + imm_I;
  //Log("\nJ: %lx\nI: %lx\nU: %lx\nS: %lx\n", imm_J, imm_I, imm_U, imm_S);
  destR(rd);
  switch (type) {
    case TYPE_I: {
      if(s -> is_JALR){
        src1I(s -> pc + 4); src2I(R(rs1) + immI(inst));
      }
      else{
        src1R(rs1);     src2I(imm_I); break;
      }
    }
    case TYPE_U: src1I(imm_U); break;
    case TYPE_S: destI(imm_S); src1R(rs1); src2R(rs2); break;
    case TYPE_J: src1I(pc_Plus4);  src2I(JAL_TARGET);break;
  }
}

static int decode_exec(Decode *s) {
  word_t dest = 0, src1 = 0, src2 = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
//a match is found, react to it according to the args
//first prepare for operands, then do the things listed in INSTPAT
#define INSTPAT_MATCH(s, name, type, ... /* body */ ) { \
  decode_operand(s, &dest, &src1, &src2, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}
  //check one by one  
  //note that when we say inst(0), we are counting from the right side(LSB), but str(0) below starts at left side
  //each pattern has its unique mask, key and shift
  INSTPAT_START();
  //        funct7  rs2   rs1 funct3 rd   opcode
  INSTPAT("??????? ????? ????? ??? ????? 0010111", auipc   , U, R(dest) = src1 + s->pc);
  INSTPAT("??????? ????? ????? 011 ????? 0000011", ld      , I, R(dest) = Mr(src1 + src2, 8));
  INSTPAT("??????? ????? ????? 000 ????? 0010011", addi    , I, R(dest) = src1 + src2);
  INSTPAT("??????? ????? ????? 011 ????? 0100011", sd      , S, Mw(src1 + dest, 8, src2));
  INSTPAT("??????? ????? ????? ??? ????? 1101111", jal     , J, R(dest) = src1, s->dnpc = src2);
  INSTPAT("??????? ????? ????? 000 ????? 1100111", jalr,     I, R(dest) = src1, s->dnpc = src2);
  INSTPAT("0000000 00001 00000 000 00000 1110011", ebreak  , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("??????? ????? ????? ??? ????? ???????", invalid , N, INV(s->pc));
  INSTPAT_END();


  R(0) = 0; // reset $zero to 0
  return 0;
}

int isa_exec_once(Decode *s) {
  uint32_t inst = inst_fetch(&s -> snpc, 4);  //snpc will be updated in fetch ( +4 )
  s->isa.inst.val = inst;

  s -> is_JALR = BITS(inst, 6, 0) == 0b1100111; 
  Log("is jalr: %d\n", s -> is_JALR);
  return decode_exec(s);
}
