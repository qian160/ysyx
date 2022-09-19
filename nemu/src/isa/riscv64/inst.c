#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#include "../../../include/trace.h"   //load op will set ringbuf's rd

extern void update_mringbuf(bool isLoad, word_t addr, word_t data, int rd);
extern void update_ftrace(bool is_ret, word_t addr, word_t pc, const char * name, int depth);
extern char * getFuncName(word_t addr);
extern int depth; //ftrace
enum {
  TYPE_I, TYPE_U, TYPE_S, TYPE_J, TYPE_R, TYPE_B, TYPE_SYS,
  TYPE_N, // none
};

#define src1R(n) do { D -> decInfo.src1 = R(n); } while (0)
#define src2R(n) do { D -> decInfo.src2 = R(n); } while (0)
#define destR(n) do { D -> decInfo.dest = n; } while (0)
#define src1I(i) do { D -> decInfo.src1 = i; } while (0)
#define src2I(i) do { D -> decInfo.src2 = i; } while (0)
#define destI(i) do { D -> decInfo.dest = i; } while (0)

#define funct3(inst) (BITS(inst, 14, 12))
#define funct7(inst) (BITS(inst, 31, 25))
#define opcode(inst) (BITS(inst, 6, 0))
static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immU(uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immS(uint32_t i) { return SEXT((BITS(i, 31, 25) << 5) | BITS(i, 11, 7), 12); }
static word_t immJ(uint32_t i) { return SEXT((BITS(i, 31, 31) << 20) | (BITS(i, 19, 12) << 12) | (BITS(i, 20, 20) << 11) | (BITS(i, 30, 21) << 1 ), 21); }
static word_t immB(uint32_t i) { return SEXT((BITS(i, 31, 31) << 12) | (BITS(i, 7, 7) << 11) | (BITS(i, 30, 25) << 5) | (BITS(i, 11, 8) << 1) | 0, 13);}

#ifdef CONFIG_FTRACE_ENABLE
extern void update_ftrace(bool is_ret, word_t addr, word_t pc, const char * name, int d);
extern void _ftrace(Decode * D);
#endif

#define R(i) gpr(i)
#define Mr vaddr_read   //memory read
#define Mw vaddr_write  //memory write


static const char tp[] __attribute__((unused))= "IUSJRB";    //use type as index


#ifdef CONFIG_SHOW_DECODE_INFORMATION

void show_bits(word_t b){
  int cnt = 65;
  const long long mask = 1l << 63;
  while(cnt -- > 1){
    if(cnt % 8 == 0)putchar(' ');
    int bit = (b & mask) >> 63;
    printf("%d", bit);
    b = b << 1;
  }
  return;
}

void show_bits_fmt(word_t b){
  printf(ANSI_FMT("| ", ANSI_FG_PINK));
  show_bits(b); 
  printf(ANSI_FMT("  |", ANSI_FG_PINK));
  putchar('\n');
  return;
}

void show_decode(Decode *D){
word_t src1   = D->decInfo.src1;
word_t src2   = D->decInfo.src2;
uint32_t dest = D->decInfo.rd;
int type      = D->decInfo.type;
printf(ANSI_FMT(" ---------------------------------------------------------------------------\n", ANSI_FG_YELLOW));
  puts(ANSI_FMT("| Information about the just execuated instruction: \t\t\t    |", ANSI_FG_GREEN));
  char buf[30];
  disassemble(buf, sizeof(buf), D -> pc, (uint8_t *)(&D -> inst), 4);
  printf(ANSI_FMT("| type-%c:  %32s \t\t\t\t    | \n| old PC = 0x%-60lx   |\n", ANSI_FG_GREEN),tp[type], buf, D -> pc);
  printf(ANSI_FMT("| src1 = 0x%-64lx | \n", ANSI_FG_YELLOW), src1);   
  show_bits_fmt(src1);
  printf(ANSI_FMT("| src2 = 0x%-64lx | \n", ANSI_FG_YELLOW), src2);   
  show_bits_fmt(src2);
  int fct3 = D -> decInfo.funct3;
  switch(type){  
    case(TYPE_I):case(TYPE_R):case(TYPE_U):
    if(D -> decInfo.is_load){
      word_t address = src1 + src2;
      word_t loadVal = Mr(src1 + src2, L_width(fct3));
      printf(ANSI_FMT("| load a value 0x%-16lx from address: 0x%-24lx  | \n", ANSI_FG_YELLOW), loadVal, address);
      show_bits_fmt(loadVal);
      IFDEF(CONFIG_MTRACE_ENABLE, update_mringbuf(1, address, loadVal, dest));
    }
    else if(D->decInfo.is_jalr){
      printf(ANSI_FMT("| jalr, set %s = 0x%-lx, new PC at 0x%lx. %s's bits are: \t\t|\n", ANSI_FG_YELLOW), reg_name(dest), src1, src2, reg_name(dest));
      show_bits_fmt(src1);
    }
    else  {
      printf(ANSI_FMT("| set %s = 0x%-60lx  | \n", ANSI_FG_YELLOW), reg_name(dest), R(dest)); 
      show_bits_fmt(R(dest));
    }
    break;
    case(TYPE_B):
      if( src1 == 0){
        printf(ANSI_FMT("| branch is not taken %-40s | \n",  ANSI_FG_YELLOW), " ");
      }
      else {
        printf(ANSI_FMT("| branch is taken, new PC at 0x%-44lx | \n", ANSI_FG_YELLOW), src2);
      }
      break;
    case(TYPE_J):
      printf(ANSI_FMT("| jal, set %s = 0x%lx, new PC at 0x%-34lx | \n", ANSI_FG_YELLOW), reg_name(dest), src1, src2);
      show_bits_fmt(src1);
      break;
    case(TYPE_S):{
      word_t storeVal = src2 & BITMASK(S_width(fct3) << 3);
      printf(ANSI_FMT("| store a value 0x%-16lx to address 0x%-27lx | \n", ANSI_FG_YELLOW), storeVal, src1);
      show_bits_fmt(storeVal);
      IFDEF(CONFIG_MTRACE_ENABLE, update_mringbuf(0, src1, storeVal, dest));
      break;
    }
    default:  break;
  }
  printf(ANSI_FMT(" ---------------------------------------------------------------------------\n", ANSI_FG_YELLOW));
}
#endif

#define JAL_TARGET      (immJ(inst) + D -> pc)
#define BRANCH_TARGET   (immB(inst) + D -> pc)
#define JALR_TARGET     (immI(inst) + R(rs1))
#define storeAddr       (immS(inst) + R(rs1))
#define linkAddr        (D -> pc + 4)
//src1 and src2 are the source operands which will join the future calculation. Use pointer to communicate with outside
//question: how to make good use of dest, src1, src2
/*
static void decode_operand(Decode * D, int type) {
  //default op is add, xxx = src1 + src2. So just adjust src1 and src2
  uint32_t inst = D->inst;
  int rs1 = BITS(inst, 19, 15);
  int rs2 = BITS(inst, 24, 20);
  //Branch : src1 = flag, src2 = address
  //Jump   : src1 = link address, src2 = target address
  D->decInfo.rd   = BITS(inst, 11, 7);
  D->decInfo.type = type;  
  IFDEF(CONFIG_FTRACE_ENABLE, 
    D->decInfo.target = 0;
    D->decInfo.is_ret = 0;
  );
  //  ret -> jalr ra, x0, 0
  switch (type) {
    case TYPE_R: src1I(R(rs1));       src2I(R(rs2));    break;
    case TYPE_S: src1I(storeAddr);    src2R(rs2);       break;
    case TYPE_J: 
      src1I(linkAddr);
      src2I(JAL_TARGET);
      IFDEF(CONFIG_FTRACE_ENABLE,
        D->decInfo.target = JAL_TARGET; 
        D->decInfo.is_ret = 0;  //(rd == 0 ? )
      );
      break;
    case TYPE_I: {
      if(D -> decInfo.is_jalr){ //jalr is I type, which is special
          src1I(linkAddr);
          src2I(JALR_TARGET);
          IFDEF(CONFIG_FTRACE_ENABLE, 
            D->decInfo.target = JALR_TARGET; 
            D->decInfo.is_ret = (rd == 0 && rs1 == 1);
          );
      }
      else{
          src1R(rs1);         src2I(immI(inst));
      }  
      break;
    }
    case TYPE_U: {
      //to dest's upper 20 bits
      if(D -> decInfo.is_lui){
        src1I(immU(inst));   
      }
      else{           //auipc rd, imm -> rd = pc + imm
        src1I(immU(inst));   src2I(D -> pc);
      } 
      break;
    }
    case TYPE_B: {
      src2I(BRANCH_TARGET);
      //D->decInfo.target = BRANCH_TARGET;
        switch (D -> decInfo.funct3){  //use src1 as a flag, src2 = branch_target
        case beq_funct3:  src1I(R(rs1) == R(rs2));                     break;
        case bne_funct3:  src1I(R(rs1) ^  R(rs2));                     break;
        case blt_funct3:  src1I((sword_t)R(rs1) <  (sword_t)R(rs2));   break;
        case bge_funct3:  src1I((sword_t)R(rs1) >= (sword_t)R(rs2));   break;
        case bltu_funct3: src1I(R(rs1) <  R(rs2));                     break;
        case bgeu_funct3: src1I(R(rs1) >= R(rs2));                     break;
        }
    }
  }
}
*/


static int decode_exec(Decode *D) {
  D->dnpc = D->snpc;    //default

#define INSTPAT_INST(D) ((D)->inst)
//a match is found, do what it supposed to do.
#define INSTPAT_MATCH(D, name, type, ... /* body */ ) { \
  decode_operand(D, concat(TYPE_, type)); \
  word_t src1 __attribute__((unused)) = D -> decInfo.src1;\
  word_t src2 __attribute__((unused)) = D -> decInfo.src2;\
  char dest   __attribute__((unused)) = D -> decInfo.rd;\
  __VA_ARGS__ ; \
  IFDEF(CONFIG_SHOW_DECODE_INFORMATION, show_decode(D));\
  \
  IFDEF(CONFIG_FTRACE_ENABLE, _ftrace(D));\
}

  //check one by one
  //note that when we say inst(0), we are counting from the right side(LSB), but str(0) below starts at left side
  //each pattern has its unique mask, key and shift
  /*
    some frequently used psedo inst:
      li rd, imm:  -> addi rd, x0, 0  load immediate
      j offset:    -> jal x0, offset (write to x0 will make no influence). j 0 may be useful
      jal offset:  -> jalr ra, offset. Use default ra register
      ret -> jalr x0, ra, 0

      auipc + addi : get the address of a section, or some label
  */

  uint32_t inst = D -> inst;
  unsigned char rd  = BITS(inst, 11, 7);
  unsigned char rs1 = BITS(inst, 19, 15);
  unsigned char rs2 = BITS(inst, 24, 20);
  unsigned char opcode = opcode(inst);
  unsigned fct3 = funct3(inst);
  unsigned fct7 = funct7(inst);

  switch(opcode){
    case ARITH_R:
      D -> decInfo.type = TYPE_R;
      switch(fct7){
        case(0x20):{
          switch(fct3){
            case(0x0):{   //sub
              R(rd) = R(rs1) - R(rs2); //D -> decInfo.src1 = R(rs1);
            }
            case(0x5):{   //sra
              R(rd) = (sword_t)R(rs1) >> (sword_t)BITS(R(rs2), 5, 0);
            }
            break;
          }
        }
        case(0x0):{
          switch(fct3){
            case(0x0):  R(rd) = R(rs1)          +   R(rs2);                     break;  //add
            case(0x1):  R(rd) = R(rs1)          <<  BITS(R(rs2), 5, 0);         break;  //sll
            case(0x2):  R(rd) = (sword_t)R(rs1) <   (sword_t)R(rs2) ? 1 : 0;    break;  //slt
            case(0x3):  R(rd) = R(rs1)          <   R(rs2)? 1 : 0;              break;  //sltu
            case(0x4):  R(rd) = R(rs1)          ^   R(rs2);                     break;  //xor
            case(0x5):  R(rd) = R(rs1)          >>  BITS(R(rs2), 5, 0);         break;  //srl
            case(0x6):  R(rd) = R(rs1)          |   R(rs2);                     break;  //or
            case(0x7):  R(rd) = R(rs1)          &   R(rs2);                     break;  //and
          }
        }
      }

    case(ARITH_I):{
      printf("hit\n");
      D -> decInfo.type = TYPE_I;
      word_t imm_I = immI(inst);
      switch(fct7){
        case(0x0):
          switch(fct3){
            case(0x0):  R(rd) = R(rs1)          +   imm_I;                  break;  //addi
            case(0x1):  R(rd) = R(rs1)          +   imm_I;                  break;  //slli
            case(0x2):  R(rd) = (sword_t)R(rs1) <   (sword_t)imm_I ? 1 : 0; break;  //slti
            case(0x3):  R(rd) = R(rs1)          <   imm_I ? 1 : 0;          break;  //sltiu
            case(0x4):  R(rd) = R(rs1)          ^   imm_I;                  break;  //xori
            case(0x5):  R(rd) = R(rs1)          >>  BITS(imm_I, 5, 0);      break;  //srli
            case(0x6):  R(rd) = R(rs1)          |   imm_I;                  break;  //ori
            case(0x7):  R(rd) = R(rs1)          &   imm_I;                  break;  //addi
          }
        case(0x20): R(rd) = (sword_t)R(rs1) >> (sword_t)BITS(R(rs2), 5, 0); break;  //srai
      }

    }

    case(LOAD):{
      D -> decInfo.type = TYPE_I;
      word_t imm_I = immI(inst);
      switch(fct3){
        case(0x0):  R(rd) = SEXT(Mr(R(rs1) + imm_I, 1), 8);  break;  //lb
        case(0x1):  R(rd) = SEXT(Mr(R(rs1) + imm_I, 2), 16); break;  //lh
        case(0x2):  R(rd) = SEXT(Mr(R(rs1) + imm_I, 4), 32); break;  //lw
        case(0x3):  R(rd) = Mr(R(rs1) + imm_I, 8);           break;  //ld

        case(0x4):  R(rd) = Mr(R(rs1) + imm_I, 1);           break;  //lbu
        case(0x5):  R(rd) = Mr(R(rs1) + imm_I, 2);           break;  //lhu
        case(0x6):  R(rd) = Mr(R(rs1) + imm_I, 4);           break;  //lwu
      }
    }

    case(STORE):{
      D -> decInfo.type = TYPE_S;
      word_t imm_S = immS(inst);
      switch(fct3){
        case(0x0):  Mw(R(rs2) + imm_S, 1, R(rs1));  break;
        case(0x1):  Mw(R(rs2) + imm_S, 2, R(rs1));  break;
        case(0x2):  Mw(R(rs2) + imm_S, 4, R(rs1));  break;
        case(0x3):  Mw(R(rs2) + imm_S, 8, R(rs1));  break;
      }
    }

    case(BRANCH):{
      D -> decInfo.type = TYPE_B;
      word_t target = D->pc + immB(inst);
      switch(fct3){
        case(0x0):  D -> dnpc =          R(rs1) ==          R(rs2) ? target : D -> dnpc;  break;
        case(0x1):  D -> dnpc =          R(rs1) !=          R(rs2) ? target : D -> dnpc;  break;
        case(0x4):  D -> dnpc = (sword_t)R(rs1) <  (sword_t)R(rs2) ? target : D -> dnpc;  break;
        case(0x5):  D -> dnpc = (sword_t)R(rs1) >= (sword_t)R(rs2) ? target : D -> dnpc;  break;
        case(0x6):  D -> dnpc =          R(rs1) <           R(rs2) ? target : D -> dnpc;  break;
        case(0x7):  D -> dnpc =          R(rs1) >=          R(rs2) ? target : D -> dnpc;  break;
      }
    }

    case(JAL):    D->decInfo.type = TYPE_J;    R(rd) = linkAddr; D -> dnpc = D -> pc + immJ(inst);   break;
    case(JALR):   D->decInfo.type = TYPE_I;    R(rd) = linkAddr; D -> dnpc = R(rs1) + immI(inst);    break;
    case(AUIPC):  D->decInfo.type = TYPE_U;    R(rd) = D -> pc + immU(inst);break;
    case(LUI):    D->decInfo.type = TYPE_U;    R(rd) = immU(inst);break;
    case(EBREAK): NEMUTRAP(D->pc, R(10)); break;  //r(10) is a0
  }
/*
  INSTPAT_START();
  //guess: compute key, shift, mask at first, then use these 3 to index into something
  //        funct7  rs2   rs1 funct3 rd   opcode
  //put most frequently used insts at first
  INSTPAT("??????? ????? ????? 000 ????? 0010011", addi,     I, R(dest) = src1 + src2);
  INSTPAT("0000000 ????? ????? 000 ????? 0110011", add,      R, R(dest) = src1 + src2);
  INSTPAT("??????? ????? ????? 011 ????? 0000011", ld,       I, R(dest) = Mr(src1 + src2, 8));
  INSTPAT("??????? ????? ????? 011 ????? 0100011", sd,       S, Mw(src1, 8, src2));    //addr, len, data
  INSTPAT("??????? ????? ????? ??? ????? 0010111", auipc,    U, R(dest) = src1 + src2);
  INSTPAT("??????? ????? ????? 000 ????? 1100011", beq,      B, D -> dnpc = src1? src2 : D -> dnpc);    //use src1 as a flag
  INSTPAT("??????? ????? ????? 001 ????? 1100011", bne,      B, D -> dnpc = src1? src2 : D -> dnpc);
  INSTPAT("??????? ????? ????? 100 ????? 1100011", blt,      B, D -> dnpc = src1? src2 : D -> dnpc);
  INSTPAT("??????? ????? ????? 101 ????? 1100011", bge,      B, D -> dnpc = src1? src2 : D -> dnpc);
  INSTPAT("??????? ????? ????? 110 ????? 1100011", bltu,     B, D -> dnpc = src1? src2 : D -> dnpc);
  INSTPAT("??????? ????? ????? 111 ????? 1100011", bgtu,     B, D -> dnpc = src1? src2 : D -> dnpc);
  INSTPAT("??????? ????? ????? ??? ????? 1101111", jal,      J, R(dest) = src1, D->dnpc = src2);
  INSTPAT("??????? ????? ????? 000 ????? 1100111", jalr,     I, R(dest) = src1, D->dnpc = src2);
  INSTPAT("0000000 ????? ????? 100 ????? 0110011", xor,      R, R(dest) = src1 ^ src2);
  INSTPAT("??????? ????? ????? 100 ????? 0010011", xori,     I, R(dest) = src1 ^ src2);
  INSTPAT("0000000 ????? ????? 110 ????? 0110011", or,       R, R(dest) = src1 | src2);
  INSTPAT("??????? ????? ????? 110 ????? 0010011", ori,      I, R(dest) = src1 | src2);
  INSTPAT("0000000 ????? ????? 111 ????? 0110011", and,      R, R(dest) = src1 & src2);
  INSTPAT("??????? ????? ????? 111 ????? 0010011", andi,     I, R(dest) = src1 & src2);
  INSTPAT("??????? ????? ????? 000 ????? 0000011", lb,       I, R(dest) = SEXT(Mr(src1 + src2, 1), 8));
  INSTPAT("??????? ????? ????? 001 ????? 0000011", lh,       I, R(dest) = SEXT(Mr(src1 + src2, 2), 16));
  INSTPAT("??????? ????? ????? 010 ????? 0000011", lw,       I, R(dest) = SEXT(Mr(src1 + src2, 4), 32));
  INSTPAT("??????? ????? ????? 010 ????? 0100011", sw,       S, Mw(src1, 4, src2));
  INSTPAT("??????? ????? ????? 001 ????? 0100011", sh,       S, Mw(src1, 2, src2));
  INSTPAT("??????? ????? ????? 000 ????? 0100011", sb,       S, Mw(src1, 1, src2));
  INSTPAT("??????? ????? ????? 100 ????? 0000011", lbu,      I, R(dest) = Mr(src1 + src2, 1));
  INSTPAT("??????? ????? ????? 101 ????? 0000011", lhu,      I, R(dest) = Mr(src1 + src2, 2));
  //compare
  //shifts. RV64 needs 6 bits' shamt, so it will take one-bit's position of funct7 
  INSTPAT("0000000 ????? ????? 001 ????? 0110011", sll,      R, R(dest) = src1 << BITS(src2, 5, 0));
  INSTPAT("000000? ????? ????? 001 ????? 0010011", slli,     I, R(dest) = src1 << BITS(src2, 5, 0));
  INSTPAT("0000000 ????? ????? 101 ????? 0110011", srl,      R, R(dest) = src1 >> BITS(src2, 5, 0));
//INSTPAT("0000001 ????? ????? 101 ????? 0110011", divu,     R, R(dest) = (src1 / src2));
  INSTPAT("000000? ????? ????? 101 ????? 0010011", srli,     I, R(dest) = src1 >> BITS(src2, 5, 0));
  INSTPAT("0100000 ????? ????? 101 ????? 0110011", sra,      R, R(dest) = (sword_t)src1 >> (sword_t)BITS(src2, 5, 0));
  INSTPAT("010000? ????? ????? 101 ????? 0010011", srai,     I, R(dest) = (sword_t)src1 >> (sword_t)BITS(src2, 5, 0));

  INSTPAT("0000000 ????? ????? 010 ????? 0110011", slt,      R, R(dest) = (sword_t)src1 < (sword_t)src2 ? 1 : 0);
  INSTPAT("??????? ????? ????? 010 ????? 0010011", slti,     I, R(dest) = (sword_t)src1 < (sword_t)src2 ? 1 : 0);
  INSTPAT("0000000 ????? ????? 011 ????? 0110011", sltu,     R, R(dest) = src1 < src2 ? 1 : 0);
  INSTPAT("??????? ????? ????? 011 ????? 0010011", sltiu,    I, R(dest) = src1 < src2 ? 1 : 0);

  INSTPAT("??????? ????? ????? ??? ????? 0110111", lui,      U, R(dest) = src1);
  //JAL
  //M extension
  //RV64I
  INSTPAT("0000000 ????? ????? 000 ????? 0111011", addw,     R, R(dest) = SEXT((int)src1 + (int)src2, 32));
  INSTPAT("0100000 ????? ????? 000 ????? 0111011", subw,     R, R(dest) = SEXT((int)src1 - (int)src2, 32));
  INSTPAT("0000000 ????? ????? 001 ????? 0111011", sllw,     R, R(dest) = SEXT((int)src1 << (int)src2, 32));
  INSTPAT("0000000 ????? ????? 101 ????? 0111011", srlw,     R, R(dest) = SEXT((uint32_t)src1 >> (uint32_t)src2, 32));
  INSTPAT("0100000 ????? ????? 101 ????? 0111011", sraw,     R, R(dest) = SEXT((int)src1 >> (int)src2, 32));
  INSTPAT("??????? ????? ????? 110 ????? 0000011", lwu,      I, R(dest) = Mr(src1 + src2, 4));

  INSTPAT("??????? ????? ????? 000 ????? 0011011", addiw,    I, R(dest) = SEXT((int)src1 + (int)src2, 32));
  INSTPAT("0000000 ????? ????? 001 ????? 0011011", slliw,    I, R(dest) = SEXT((int)src1 << (int)src2, 32));
  INSTPAT("0000000 ????? ????? 101 ????? 0011011", srliw,    I, R(dest) = SEXT((uint32_t)src1 >> (uint32_t)src2, 32));
  INSTPAT("0100000 ????? ????? 101 ????? 0011011", sraiw,    I, R(dest) = SEXT((int)src1 >> (int)src2, 32));

  INSTPAT("0000001 ????? ????? 000 ????? 0110011", mul,      R, R(dest) = (sword_t)src1 * (sword_t)src2);
  INSTPAT("0000001 ????? ????? 001 ????? 0110011", mulh,     R, R(dest) = BITS((__int128_t)src1 * (__int128_t)src2, 127, 64));
  INSTPAT("0000001 ????? ????? 010 ????? 0110011", mulhsu,   R, R(dest) = BITS((__int128_t)src1 * (__uint128_t)src2, 127, 64));
  INSTPAT("0000001 ????? ????? 011 ????? 0110011", mulhu,    R, R(dest) = BITS((__uint128_t)src1 * (__uint128_t)src2, 127, 64));
  INSTPAT("0000001 ????? ????? 100 ????? 0110011", div,      R, R(dest) = (sword_t)src1 / (sword_t)src2);
  INSTPAT("0000001 ????? ????? 101 ????? 0110011", divu,     R, R(dest) = (src1 / src2));
  INSTPAT("0000001 ????? ????? 110 ????? 0110011", rem,      R, R(dest) = (sword_t)src1 % (sword_t)src2);
  INSTPAT("0000001 ????? ????? 111 ????? 0110011", remu,     R, R(dest) = src1 % src2);
  //RV64M
  INSTPAT("0000001 ????? ????? 000 ????? 0111011", mulw,     R, R(dest) = (int32_t)src1 * (int32_t)src2);
  INSTPAT("0000001 ????? ????? 100 ????? 0111011", divw,     R, R(dest) = (int32_t)src1 / (int32_t)src2);
  INSTPAT("0000001 ????? ????? 101 ????? 0111011", divuw,    R, R(dest) = (uint32_t)src1 / (uint32_t)src2);
  INSTPAT("0000001 ????? ????? 110 ????? 0111011", remw,     R, R(dest) = (int32_t)src1 % (int32_t)src2);
  INSTPAT("0000001 ????? ????? 111 ????? 0111011", remuw,    R, R(dest) = (uint32_t)src1 % (uint32_t)src2);
  INSTPAT("0100000 ????? ????? 000 ????? 0110011", sub,      R, R(dest) = src1 - src2);

  INSTPAT("0000000 00001 00000 000 00000 1110011", ebreak  , N, NEMUTRAP(D->pc, R(10))); // R(10) is $a0
  INSTPAT("??????? ????? ????? ??? ????? ???????", invalid , N, INV(D->pc));
  INSTPAT_END();
*/
  R(0) = 0; // reset $zero to 0
  return 0;
}

int isa_exec_once(Decode *D) {
  uint32_t inst = inst_fetch(&D -> snpc, 4);  //snpc will be updated in fetch ( +4 )
  D->inst = inst;
   //set some decode flags here
  D -> decInfo.is_jalr  = opcode(inst) == jalr_opcode; 
  D -> decInfo.is_lui   = BITS(inst, 5, 5);    //just a possibility
  D -> decInfo.funct3   = funct3(inst);
  D -> decInfo.is_load  = opcode(inst) == load_opcode;

  return decode_exec(D);
}
