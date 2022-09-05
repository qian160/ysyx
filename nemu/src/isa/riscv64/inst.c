#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read   //memory read
#define Mw vaddr_write  //memory write

enum {
  TYPE_I, TYPE_U, TYPE_S,
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

static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, int type) {
  uint32_t inst = s->isa.inst.val;
  int rd  = BITS(inst, 11, 7);
  int rs1 = BITS(inst, 19, 15);
  int rs2 = BITS(inst, 24, 20);
  destR(rd);
  switch (type) {
    case TYPE_I: src1R(rs1);     src2I(immI(inst)); break;
    case TYPE_U: src1I(immU(inst)); break;
    case TYPE_S: destI(immS(inst)); src1R(rs1); src2R(rs2); break;
  }
}

static int decode_exec(Decode *s) {
  word_t dest = 0, src1 = 0, src2 = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
//a match is found, react to it according to the args
//call decode_oprand first to offer the operands, then put the VA_ARGS after, which will do the jobs mentioned in INSTPAT
#define INSTPAT_MATCH(s, name, type, ... /* body */ ) { \
  decode_operand(s, &dest, &src1, &src2, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}
  //check one by one  
  //note that when we say inst(0), we are counting from the right side(LSB), but str(0) below starts at left side
  //each pattern has its unique mask, key and shift
  INSTPAT_START();                       //inst name is just for comment, not used
  INSTPAT("??????? ????? ????? ??? ????? 0010111", auipc  , U, R(dest) = src1 + s->pc);
  INSTPAT("??????? ????? ????? 011 ????? 0000011", ld     , I, R(dest) = Mr(src1 + src2, 8));
  INSTPAT("??????? ????? ????? 111 ????? 0010011", addi,  , I, R(dest) = src1 + src2);
  INSTPAT("??????? ????? ????? 011 ????? 0100011", sd     , S, Mw(src1 + dest, 8, src2));

  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));    //invalid
  INSTPAT_END();


  R(0) = 0; // reset $zero to 0
  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);  //4 bytes per inst
  return decode_exec(s);
}
