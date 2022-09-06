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

static const char tp[] = "IUSJRB";    //use type as index

#define src1R(n) do { *src1 = R(n); } while (0)
#define src2R(n) do { *src2 = R(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0)

#define funct3(inst) (BITS(inst, 14, 12))
#define opcode(inst) (BITS(inst, 6, 0))
static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immU(uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }
static word_t immJ(uint32_t i) { return SEXT((BITS(i, 31, 31) << 20) | (BITS(i, 19, 12) << 12) | (BITS(i, 20, 20) << 11) | (BITS(i, 30, 21) << 1 | 0 ), 21); }
static word_t immB(uint32_t i) { return SEXT(BITS(i, 31, 31) << 12 | BITS(i, 7, 7) << 11 | BITS(i, 30, 25) << 5 | BITS(i, 11, 8) << 1, 21);}
//src1 and src2 are the source operands which will join the future calculation. Use pointer to communicate with outside
//question: how to make good use of dest, src1, src2
static void decode_operand(Decode * D, word_t *dest, word_t *src1, word_t *src2, int type) {
  //default op is add, xxx = src1 + src2. So just adjust src1 and src2
  uint32_t inst = D->inst;
  int rd  = BITS(inst, 11, 7);
  int rs1 = BITS(inst, 19, 15);
  int rs2 = BITS(inst, 24, 20);
  word_t rs1Val = R(rs1);
  word_t rs2Val = R(rs2);
  word_t pc = D -> pc;
  word_t pc_Plus4 = pc + 4;
  word_t JAL_TARGET     = (int64_t)immJ(inst) + (int64_t)pc;//immJ fails for neg numbers
  word_t JALR_TARGET    = immI(inst) + rs1Val;
  Log("\njal target : %lx\n", JAL_TARGET);
  Log("\nimmJ = 0x%lx\nimmI = 0x%lx\n", immJ(inst), immI(inst));
  word_t BRANCH_TARGET  = immB(inst) + pc;
  word_t storeAddr      = immS(inst) + rs1Val;
  //Log("\nJ: %lx\nI: %lx\nU: %lx\nS: %lx\n", imm_J, imm_I, imm_U, imm_S);
  destR(rd);
  switch (type) {
    case TYPE_R: src1I(rs1Val);       src2I(rs2Val);    break;
    case TYPE_S: src1I(storeAddr);    src2R(rs2);       break;
    case TYPE_J: src1I(pc_Plus4);     src2I(JAL_TARGET);break;
    case TYPE_I: {
      if(D -> decInfo.is_JALR){ //jalr is I type, which is special
          src1I(pc_Plus4);    src2I(JALR_TARGET); break;
      }
      else{
          src1R(rs1);         src2I(immI(inst));  break;
      } 
    }
    case TYPE_U: {
      if(D -> decInfo.is_lui){
        src1I(immU(inst) << 12);    break;
      }
      else{           //auipc rd, imm -> rd = pc + imm
        src1I(immU(inst));   src2I(pc); break;
      }
    }
    case TYPE_B: {
      src2I(BRANCH_TARGET);
        switch (D -> decInfo.funct3){  //use src1 as a flag, src2 = branch_target
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

static int decode_exec(Decode *D) {
  word_t dest = 0, src1 = 0, src2 = 0;
  D->dnpc = D->snpc;    //default

#define INSTPAT_INST(D) ((D)->inst)
//a match is found, do what it supposed to do.
//first prepare for operands, then do the things listed in __VA_ARGS__

#define INSTPAT_MATCH(D, name, type, ... /* body */ ) { \
  decode_operand(D, &dest, &src1, &src2, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
  IFDEF(CONFIG_SHOW_DECODE_INFORMATION,  \
  puts(ANSI_FMT("\nInformation about the just execuated instruction:", ANSI_FG_GREEN));\
  char buf[30];\
  disassemble(buf, sizeof(buf), D -> pc, (uint8_t *)(&D -> inst), 4);\
  printf(ANSI_FMT("type-%c:  %s\nold PC = 0x%lx  \noperand1 = 0x%-16lx, operand2 = 0x%-16lx \n", ANSI_FG_GREEN),tp[TYPE_##type], buf, D -> pc, src1, src2);\
  switch(TYPE_##type){  \
    case(TYPE_I):case(TYPE_R):case(TYPE_U):\
    if(D -> decInfo.is_load){\
      printf(ANSI_FMT("load a value 0x%lx from address: 0x%lx", ANSI_FG_YELLOW), Mr(src1 + src2, D -> decInfo.L_width), src1 + src2); \
    }  \
    else  {\
      printf(ANSI_FMT("set %s to be 0x%lx\n", ANSI_FG_GREEN), reg_name(dest, 64), R(dest)); \
    }\
    break;\
    case(TYPE_B):case(TYPE_J):\
      if( src1 == 0){  \
        printf(ANSI_FMT("branch/jump not taken\n",  ANSI_FG_YELLOW)); \
      }\
      else {\
        printf(ANSI_FMT("branch/jump is taken, new PC at 0x%lx", ANSI_FG_YELLOW), src2); \
      }\
      break;\
    case(TYPE_S):\
      printf(ANSI_FMT("store a value 0x%lx to address 0x%lx\n", ANSI_FG_YELLOW), src2 | BITMASK(D->decInfo.S_width << 3), src1);\
    default:  printf("%d\n", TYPE_##type);break;}\
)}
//width is needed in store

/*

#define INSTPAT_MATCH(D, name, type, ...  body  ) { \
  decode_operand(D, &dest, &src1, &src2, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
  IFDEF(CONFIG_SHOW_DECODE_INFORMATION,  \
  switch(TYPE_##type)  \
  if(TYPE_##type == TYPE_I || TYPE_##type == TYPE_R)  \
    printf(ANSI_FMT("the result is 0x%lx\n", ANSI_FG_PINK), R(dest)); \
  else if(TYPE_##type == TYPE_J || TYPE_##type == TYPE_B){  \
    if( src1 == 0)  \
      printf(ANSI_FMT("branch/jump not taken\n",  ANSI_FG_YELLOW)); \
    else printf(ANSI_FMT("branch/jump is taken, new PC at 0x%lx", ANSI_FG_YELLOW), src2);}\
)}




*/
  //check one by one
  //note that when we say inst(0), we are counting from the right side(LSB), but str(0) below starts at left side
  //each pattern has its unique mask, key and shift
  /*
    some frequently used psedo inst:
      li rd, imm:  -> addi rd, x0, 0  load immediate
      j offset:    -> jal x0, offset (write to x0 will make no influence). j 0 may be useful
      jal offset:  -> jalr ra, offset. Use default ra register
  */
  INSTPAT_START();
  //we can put frequently used inst at first, since these matches will be execuated in sequence
  //but it will make the code less readable, so just ignore that
  //        funct7  rs2   rs1 funct3 rd   opcode
  //arithmetic                                              //if use R, then access the regfile is needed
  INSTPAT("0000000 ????? ????? 000 ????? 0110011", add,      R, R(dest) = src1 + src2);
  INSTPAT("??????? ????? ????? 000 ????? 0010011", addi,     I, R(dest) = src1 + src2);
  INSTPAT("0100000 ????? ????? 000 ????? 0110011", sub,      R, R(dest) = src1 - src2);
  INSTPAT("0000000 ????? ????? 100 ????? 0110011", xor,      R, R(dest) = src1 ^ src2);
  INSTPAT("??????? ????? ????? 100 ????? 0010011", xori,     I, R(dest) = src1 ^ src2);
  INSTPAT("0000000 ????? ????? 110 ????? 0110011", or,       R, R(dest) = src1 | src2);
  INSTPAT("??????? ????? ????? 110 ????? 0010011", ori,      I, R(dest) = src1 | src2);
  INSTPAT("0000000 ????? ????? 111 ????? 0110011", and,      R, R(dest) = src1 & src2);
  INSTPAT("??????? ????? ????? 111 ????? 0010011", andi,     I, R(dest) = src1 & src2);
  INSTPAT("??????? ????? ????? ??? ????? 0110111", lui,      U, R(dest) = src1 + src2);
  //compare
  INSTPAT("0000000 ????? ????? 010 ????? 0110011", slt,      R, R(dest) = (sword_t)src1 < (sword_t)src2 ? 1 : 0);
  INSTPAT("??????? ????? ????? 010 ????? 0010011", slti,     I, R(dest) = (sword_t)src1 < (sword_t)src2 ? 1 : 0);
  INSTPAT("0000000 ????? ????? 011 ????? 0110011", sltu,     R, R(dest) = src1 < src2 ? 1 : 0);
  INSTPAT("??????? ????? ????? 011 ????? 0010011", sltiu,    I, R(dest) = src1 < src2 ? 1 : 0);
  //shifts
  INSTPAT("0000000 ????? ????? 001 ????? 0110011", sll,      R, R(dest) = src1 << BITS(src2, 5, 0));
  INSTPAT("0000000 ????? ????? 001 ????? 0010011", slli,     I, R(dest) = src1 << BITS(src2, 5, 0));
  INSTPAT("0000000 ????? ????? 101 ????? 0110011", srl,      R, R(dest) = src1 >> BITS(src2, 5, 0));
  INSTPAT("0000000 ????? ????? 101 ????? 0010011", srli,     I, R(dest) = src1 >> BITS(src2, 5, 0));
  INSTPAT("0100000 ????? ????? 101 ????? 0110011", sra,      R, R(dest) = (sword_t)src1 >> (sword_t)BITS(src2, 5, 0));
  INSTPAT("0100000 ????? ????? 101 ????? 0010011", srai,     I, R(dest) = (sword_t)src1 >> (sword_t)BITS(src2, 5, 0));
  //load: 
  INSTPAT("??????? ????? ????? 000 ????? 0000011", lb,       I, R(dest) = SEXT(Mr(src1 + src2, 1), 8));
  INSTPAT("??????? ????? ????? 001 ????? 0000011", lh,       I, R(dest) = SEXT(Mr(src1 + src2, 2), 16));
  INSTPAT("??????? ????? ????? 010 ????? 0000011", lw,       I, R(dest) = SEXT(Mr(src1 + src2, 4), 32));
  INSTPAT("??????? ????? ????? 100 ????? 0000011", lbu,      I, R(dest) = Mr(src1 + src2, 1));
  INSTPAT("??????? ????? ????? 101 ????? 0000011", lhu,      I, R(dest) = Mr(src1 + src2, 2));
  //store
  
  //branches
  INSTPAT("??????? ????? ????? 000 ????? 1100011", beq,      B, D -> dnpc = src1? src2 : D -> dnpc);    //use src1 as a flag
  INSTPAT("??????? ????? ????? 001 ????? 1100011", bne,      B, D -> dnpc = src1? src2 : D -> dnpc);
  INSTPAT("??????? ????? ????? 100 ????? 1100011", blt,      B, D -> dnpc = src1? src2 : D -> dnpc);
  INSTPAT("??????? ????? ????? 101 ????? 1100011", bge,      B, D -> dnpc = src1? src2 : D -> dnpc);
  INSTPAT("??????? ????? ????? 110 ????? 1100011", bltu,     B, D -> dnpc = src1? src2 : D -> dnpc);
  INSTPAT("??????? ????? ????? 111 ????? 1100011", bgtu,     B, D -> dnpc = src1? src2 : D -> dnpc);
  //
  INSTPAT("??????? ????? ????? ??? ????? 0010111", auipc,    U, R(dest) = src1 + src2);
  //JAL
  INSTPAT("??????? ????? ????? ??? ????? 1101111", jal,      J, R(dest) = src1, D->dnpc = src2);
  Log("\n\n\njal failed\n\n\n");
  INSTPAT("??????? ????? ????? 000 ????? 1100111", jalr,     I, R(dest) = src1, D->dnpc = src2);
  INSTPAT("0000000 00001 00000 000 00000 1110011", ebreak  , N, NEMUTRAP(D->pc, R(10))); // R(10) is $a0
  //M extension

  //RV64I
  INSTPAT("0000000 ????? ????? 000 ????? 0111011", addw,     R, R(dest) = SEXT((int)src1 + (int)src2, 32));
  INSTPAT("0100000 ????? ????? 000 ????? 0111011", subw,     R, R(dest) = SEXT((int)src1 - (int)src2, 32));
  INSTPAT("0000000 ????? ????? 001 ????? 0111011", sllw,     R, R(dest) = SEXT((int)src1 << (int)src2, 32));
  INSTPAT("0000000 ????? ????? 101 ????? 0111011", srlw,     R, R(dest) = SEXT((uint32_t)src1 >> (uint32_t)src2, 32));
  INSTPAT("0100000 ????? ????? 101 ????? 0111011", sraw,     R, R(dest) = SEXT((int)src1 >> (int)src2, 32));
  INSTPAT("??????? ????? ????? 110 ????? 0000011", lwu,      I, R(dest) = Mr(src1 + src2, 4));
  INSTPAT("??????? ????? ????? 011 ????? 0000011", ld,       I, R(dest) = Mr(src1 + src2, 8));
  INSTPAT("??????? ????? ????? 011 ????? 0100011", sd,       S, Mw(src1, 8, src2));    //addr, len, data

  INSTPAT("??????? ????? ????? 000 ????? 0011011", addiw,    I, R(dest) = SEXT((int)src1 + (int)src2, 32));
  INSTPAT("0000000 ????? ????? 001 ????? 0011011", slliw,    I, R(dest) = SEXT((int)src1 << (int)src2, 32));
  INSTPAT("0000000 ????? ????? 101 ????? 0011011", srliw,    I, R(dest) = SEXT((uint32_t)src1 >> (uint32_t)src2, 32));
  INSTPAT("0100000 ????? ????? 101 ????? 0011011", sraiw,    I, R(dest) = SEXT((int)src1 >> (int)src2, 32));

  //RV64M
  //TODO();



  INSTPAT("??????? ????? ????? ??? ????? ???????", invalid , N, INV(D->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0
  return 0;
}

int isa_exec_once(Decode *D) {
  uint32_t inst = inst_fetch(&D -> snpc, 4);  //snpc will be updated in fetch ( +4 )
  D->inst = inst;
  char fct3 = funct3(inst);
  //set some decode flags here
  D -> decInfo.is_JALR  = opcode(inst) == jalr_opcode; 
  D -> decInfo.is_lui   = BITS(inst, 5, 5);    //just a possibility
  D -> decInfo.funct3   = fct3;
  D -> decInfo.is_load  = opcode(inst) == load_opcode;
  D -> decInfo.L_width  = 1 << (fct3 & 0b11);
  D -> decInfo.S_width  = 1 << fct3;
  return decode_exec(D);
}
