#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read   //memory read
#define Mw vaddr_write  //memory write

enum {
  TYPE_I, TYPE_U, TYPE_S, TYPE_J, TYPE_R, TYPE_B, TYPE_SYS,
  TYPE_N, // none
};

#define src1R(n) do { *src1 = R(n); } while (0)
#define src2R(n) do { *src2 = R(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0)

#define funct3(inst) (BITS(inst, 14, 12))

static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immU(uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }
static word_t immJ(uint32_t i) { return SEXT((BITS(i, 31, 31) << 20) | (BITS(i, 19, 12) << 12) | (BITS(i, 20, 20) << 11) | (BITS(i, 30, 21) << 1 ), 21); }
static word_t immB(uint32_t i) { return SEXT(BITS(i, 31, 31) << 12 | BITS(i, 7, 7) << 11 | BITS(i, 30, 25) << 5 | BITS(i, 11, 8) << 1, 21);}
//src1 and src2 are the source operands which will join the future calculation. Use pointer to communicate with outside
//question: how to make good use of dest, src1, src2
static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, int type) {
  //default op is add, xxx = src1 + src2. So just adjust src1 and src2
  uint32_t inst = s->isa.inst.val;
  int rd  = BITS(inst, 11, 7);
  int rs1 = BITS(inst, 19, 15);
  int rs2 = BITS(inst, 24, 20);
  word_t rs1Val = R(rs1);
  word_t rs2Val = R(rs2);
  word_t pc = s -> pc;
  word_t pc_Plus4 = pc + 4;
  word_t JAL_TARGET     = immJ(inst) + pc;
  word_t JALR_TARGET    = immI(inst) + rs1Val;
  word_t BRANCH_TARGET  = immB(inst) + pc;
  word_t storeAddr      = immS(inst) + rs1Val;
  //Log("\nJ: %lx\nI: %lx\nU: %lx\nS: %lx\n", imm_J, imm_I, imm_U, imm_S);
  destR(rd);
  switch (type) {
    case TYPE_I: {
      if(s -> is_JALR){
                src1I(pc_Plus4);    src2I(JALR_TARGET);
      }
      else{     
                src1R(rs1);         src2I(immI(inst));
      } 
      break;
    }
    case TYPE_R: src1R(rs1);          src2R(rs2); break;
    case TYPE_U: src1I(immU(inst));   src2I(pc); break;
    case TYPE_S: src1I(storeAddr);    src2R(rs2); break;
    case TYPE_J: src1I(pc_Plus4);     src2I(JAL_TARGET);break;
    case TYPE_B: {
      src2I(BRANCH_TARGET);
        switch (s -> branch_type){  //use src1 as a flag, src2 = branch_target
        case beq_funct3:  src1I(rs1Val == rs2Val);  break;
        case bne_funct3:  src1I(rs1Val ^  rs2Val);  break;
        case blt_funct3:  src1I((sword_t)rs1Val <  (sword_t)rs2Val);  break;
        case bge_funct3:  src1I((sword_t)rs1Val >= (sword_t)rs2Val);  break;
        case bltu_funct3: src1I(rs1Val <  rs2Val);  break;
        case bgeu_funct3: src1I(rs1Val >= rs2Val);  break;
        }
    }
  }
}

static int decode_exec(Decode *s) {
  word_t dest = 0, src1 = 0, src2 = 0;
  s->dnpc = s->snpc;    //default

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
  //arith                                                       //if use R, then access the regfile is needed
  INSTPAT("0000000 ????? ????? 000 ????? 0110011", add,      R, R(dest) = src1 + src2);
  INSTPAT("??????? ????? ????? 000 ????? 0010011", addi,     I, R(dest) = src1 + src2);
  INSTPAT("0100000 ????? ????? 000 ????? 0110011", sub,      R, R(dest) = src1 - src2);
  INSTPAT("0000000 ????? ????? 100 ????? 0110011", xor,      R, R(dest) = src1 ^ src2);
  INSTPAT("??????? ????? ????? 100 ????? 0010011", xori,     I, R(dest) = src1 ^ src2);
  INSTPAT("0000000 ????? ????? 110 ????? 0110011", or,       R, R(dest) = src1 | src2);
  INSTPAT("??????? ????? ????? 110 ????? 0010011", ori,      I, R(dest) = src1 | src2);
  INSTPAT("0000000 ????? ????? 111 ????? 0110011", and,      R, R(dest) = src1 & src2);
  INSTPAT("??????? ????? ????? 111 ????? 0010011", andi,     I, R(dest) = src1 & src2);
  //compare
  INSTPAT("0000000 ????? ????? 010 ????? 0110011", slt,      R, R(dest) = (sword_t)src1 < (sword_t)src2 ? 1 : 0);
  INSTPAT("??????? ????? ????? 010 ????? 0010011", slti,     I, R(dest) = (sword_t)src1 < (sword_t)src2 ? 1 : 0);
  INSTPAT("0000000 ????? ????? 010 ????? 0110011", sltu,     R, R(dest) = src1 < src2 ? 1 : 0);
  INSTPAT("0000000 ????? ????? 010 ????? 0110011", sltiu,    I, R(dest) = src1 < src2 ? 1 : 0);
  //shifts
  INSTPAT("0000000 ????? ????? 001 ????? 0110011", sll,      R, R(dest) = src1 << BITS(src2, 5, 0));
  INSTPAT("0000000 ????? ????? 001 ????? 0010011", slli,     I, R(dest) = src1 << BITS(src2, 5, 0));
  INSTPAT("0000000 ????? ????? 101 ????? 0110011", srl,      R, R(dest) = src1 >> BITS(src2, 5, 0));
  INSTPAT("0000000 ????? ????? 101 ????? 0010011", srli,     I, R(dest) = src1 >> BITS(src2, 5, 0));
  INSTPAT("0100000 ????? ????? 101 ????? 0110011", sra,      R, R(dest) = (sword_t)src1 >> (sword_t)BITS(src2, 5, 0));
  INSTPAT("0100000 ????? ????? 101 ????? 0010011", srai,     I, R(dest) = (sword_t)src1 >> (sword_t)BITS(src2, 5, 0));
  //loads: todo

  //branches
  INSTPAT("??????? ????? ????? 000 ????? 1100011", beq,      B, s -> dnpc = src1? src2 : s -> dnpc);    //use src1 as a flag
  INSTPAT("??????? ????? ????? 001 ????? 1100011", bne,      B, s -> dnpc = src1? src2 : s -> dnpc);
  INSTPAT("??????? ????? ????? 100 ????? 1100011", blt,      B, s -> dnpc = src1? src2 : s -> dnpc);
  INSTPAT("??????? ????? ????? 101 ????? 1100011", bge,      B, s -> dnpc = src1? src2 : s -> dnpc);
  INSTPAT("??????? ????? ????? 110 ????? 1100011", bltu,     B, s -> dnpc = src1? src2 : s -> dnpc);
  INSTPAT("??????? ????? ????? 111 ????? 1100011", bgtu,     B, s -> dnpc = src1? src2 : s -> dnpc);
  //
  INSTPAT("??????? ????? ????? ??? ????? 0110111", lui,      U, R(dest) = src1 + src2);
  INSTPAT("??????? ????? ????? ??? ????? 0010111", auipc,    U, R(dest) = src1 + src2);
  INSTPAT("??????? ????? ????? 011 ????? 0000011", ld,       I, R(dest) = Mr(src1 + src2, 8));
  INSTPAT("??????? ????? ????? 011 ????? 0100011", sd,       S, Mw(src1, 8, src2));    //addr, len, data
  INSTPAT("??????? ????? ????? ??? ????? 1101111", jal,      J, R(dest) = src1, s->dnpc = src2);
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
  //set some decode flags here
  s -> is_JALR = BITS(inst, 6, 0) == 0b1100111; 
  s -> branch_type  = funct3(inst);

  return decode_exec(s);
}
