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

static int decode_exec(Decode *D) {
  D->dnpc = D->snpc;    //default
/*
#define INSTPAT_INST(D) ((D)->inst)
//a match is found, do what it supposed to do.
#define INSTPAT_MATCH(D, name, type, ... , body  ) { \
  decode_operand(D, concat(TYPE_, type)); \
  word_t src1 __attribute__((unused)) = D -> decInfo.src1;\
  word_t src2 __attribute__((unused)) = D -> decInfo.src2;\
  char dest   __attribute__((unused)) = D -> decInfo.rd;\
  __VA_ARGS__ ; \
  IFDEF(CONFIG_SHOW_DECODE_INFORMATION, show_decode(D));\
  \
  IFDEF(CONFIG_FTRACE_ENABLE, _ftrace(D));\
}
*/
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
  //every case should carefully end up with a break
  //do what it is only supposed to do. For exanple, we don't need to calculate the jump address before every case(Although in Verilog we may do this)

  uint32_t inst = D -> inst;
  unsigned char rd  = BITS(inst, 11, 7);
  unsigned char rs1 = BITS(inst, 19, 15);
  unsigned char rs2 = BITS(inst, 24, 20);
  unsigned char opcode = opcode(inst);
  unsigned fct3 = funct3(inst);
  unsigned fct7 = funct7(inst);

  switch(opcode){
    case ARITH_R:{
      D -> decInfo.type = TYPE_R;
      switch(fct7){
        case(0x20):{
          switch(fct3){
            case(0x0):   //sub
              R(rd) = R(rs1) - R(rs2);  break;//D -> decInfo.src1 = R(rs1);
            case(0x5):   //sra
              R(rd) = (sword_t)R(rs1) >> (sword_t)BITS(R(rs2), 5, 0); break;
            default: panic("bad inst\n");
          }
          break;
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
            default:    panic("bad inst\n");
          }
          break;
        }
        case(0x01):{    //M extension
          switch(fct3){
            case(0x3):  R(rd) = R(rs1) * R(rs2);  break;    //mulu
            case(0x5):  R(rd) = R(rs1) / R(rs2);  break;    //divu
            case(0x7):  R(rd) = R(rs1) % R(rs2);  break;    //remu

            case(0x0):  R(rd) = (sword_t)R(rs1) * (sword_t)R(rs2);  break;    //mul
            case(0x4):  R(rd) = (sword_t)R(rs1) / (sword_t)R(rs2);  break;    //div
            case(0x6):  R(rd) = (sword_t)R(rs1) % (sword_t)R(rs2);  break;    //rem

            case(0x1):  R(rd) = BITS((__int128_t)R(rs1) * (__int128_t) R(rs2), 127, 64);  break;     //mulh
            case(0x2):  R(rd) = BITS((__int128_t)R(rs1) * (__uint128_t)R(rs2), 127, 64);  break;     //mulhsu, signed * unsigned
            default: panic("bad inst\n");
          }
          break;
        }
      }
      break;
    }

    case(ARITH_64_R):{
      D -> decInfo.type = TYPE_R;
      switch(fct7){
        case(0x00):{
          switch(fct3){
            case(0x00):   R(rd) = SEXT((int32_t) R(rs1) +  (int32_t) R(rs2), 32);             break;      //addw
            case(0x01):   R(rd) = SEXT((uint32_t)R(rs1) << (uint32_t)BITS(R(rs2), 4, 0), 32); break;      //sllw
            case(0x05):   R(rd) = SEXT((uint32_t)R(rs1) >> (uint32_t)BITS(R(rs2), 4, 0), 32); break;      //srlw
            default:    panic("bad inst\n");
          }
          break;
        }

        case(0x20):{
          switch(fct3){
            case(0x00):   R(rd) = SEXT((int)R(rs1) -  (int)R(rs2), 32);             break;  //subw
            case(0x05):   R(rd) = SEXT((int)R(rs1) >> BITS((int)R(rs2), 5, 0), 32); break;  //sraw
            default:    panic("bad inst\n");
          }
          break;
        }

        case(0x01):{          //rv64m
          switch(fct3){
            case(0x00): R(rd) = (int32_t) R(rs1) * (int32_t) R(rs2);  break;      //mulw
            case(0x04): R(rd) = (int32_t) R(rs1) / (int32_t) R(rs2);  break;      //divw
            case(0x05): R(rd) = (uint32_t)R(rs1) / (uint32_t)R(rs2);  break;      //divuw
            case(0x06): R(rd) = (int32_t) R(rs1) % (int32_t) R(rs2);  break;      //remw
            case(0x07): R(rd) = (uint32_t)R(rs1) % (uint32_t)R(rs2);  break;      //remuw
            default:    panic("bad inst\n");
          }
          break;
        }

      }
      break;
    }

    case(ARITH_I):{
      D -> decInfo.type = TYPE_I;
      word_t imm_I = immI(inst);
      switch(fct3){
        case(0x0):  R(rd) = R(rs1)          +   imm_I;                  break;  //addi
        case(0x1):  R(rd) = R(rs1)          <<  BITS(imm_I, 5, 0);      break;  //slli
        case(0x2):  R(rd) = (sword_t)R(rs1) <   (sword_t)imm_I ? 1 : 0; break;  //slti
        case(0x3):  R(rd) = R(rs1)          <   imm_I ? 1 : 0;          break;  //sltiu
        case(0x4):  R(rd) = R(rs1)          ^   imm_I;                  break;  //xori
        case(0x5):{
          switch(fct7 & 0b1111110){   //not fct7 in fact, shamt takes up 1-bit position of fct7
            case(0x00): R(rd) =          R(rs1) >>  BITS(imm_I, 5, 0);              break;  //srli
            case(0x20): R(rd) = (sword_t)R(rs1) >> (sword_t)BITS(immI(inst), 5, 0); break;  //srai
            default:    panic("bad inst\n");
          }
          break;
        }
        case(0x6):  R(rd) = R(rs1)   |   imm_I;      break;  //ori
        case(0x7):  R(rd) = R(rs1)   &   imm_I;      break;  //addi
        default:    panic("bad inst\n");
      }
      break;
    }

    case(ARITH_64_I):{
      D -> decInfo.type = TYPE_I;
      switch(fct3){
        case(0x00): R(rd) = SEXT((int32_t)R(rs1) +  (int32_t)immI(inst), 32);                  break;//addiw
        case(0x01): R(rd) = SEXT((int32_t)R(rs1) << (int32_t)BITS(immI(inst), 4, 0), 32);      break;//slliw
        case(0x05):{
          switch(fct7){
            case(0x00): R(rd) = SEXT((uint32_t)R(rs1) >> (uint32_t)BITS(immI(inst), 4, 0), 32);  break;//srliw
            case(0x20): R(rd) = SEXT((int32_t) R(rs1) >> (int32_t) BITS(immI(inst), 4, 0), 32);  break;//sraiw
            default:    panic("bad inst\n");
          }
          break;
        }
        default:    panic("bad inst\n");
      }
      break;
    }

    case(LOAD):{
      D -> decInfo.type = TYPE_I;
      word_t imm_I = immI(inst);
      switch(fct3){
        case(0x0):  R(rd) = SEXT(Mr(R(rs1) + imm_I, 1), 8);   printf("lb:  [x%d] <=  0x%lx\n", rd, R(rd));  break;  //lb
        case(0x1):  R(rd) = SEXT(Mr(R(rs1) + imm_I, 2), 16);  printf("lh:  [x%d] <=  0x%lx\n", rd, R(rd));  break;  //lh
        case(0x2):  R(rd) = SEXT(Mr(R(rs1) + imm_I, 4), 32);  printf("lw:  [x%d] <=  0x%lx\n", rd, R(rd));  break;  //lw
        case(0x3):  R(rd) = Mr(R(rs1) + imm_I, 8);            printf("ld:  [x%d] <=  0x%lx\n", rd, R(rd));  break;  //ld
        case(0x4):  R(rd) = Mr(R(rs1) + imm_I, 1);            printf("lbu: [x%d] <=  0x%lx\n", rd, R(rd));  break;  //lbu
        case(0x5):  R(rd) = Mr(R(rs1) + imm_I, 2);            printf("lhu: [x%d] <=  0x%lx\n", rd, R(rd));  break;  //lhu
        case(0x6):  R(rd) = Mr(R(rs1) + imm_I, 4);            printf("lwu: [x%d] <=  0x%lx\n", rd, R(rd));  break;  //lwu
        default:    panic("bad inst\n");
      }
      break;
    }

    case(STORE):{
      D -> decInfo.type = TYPE_S;
      word_t imm_S = immS(inst);
      switch(fct3){
        case(0x0):  Mw(R(rs1) + imm_S, 1, R(rs2));  printf("sb: 0x%lx   =>  pmem[0x%lx]\n", R(rs2), R(rs1) + imm_S );      break;
        case(0x1):  Mw(R(rs1) + imm_S, 2, R(rs2));  printf("sh: 0x%lx   =>  pmem[0x%lx]\n", R(rs2), R(rs1) + imm_S );      break;
        case(0x2):  Mw(R(rs1) + imm_S, 4, R(rs2));  printf("sw: 0x%lx   =>  pmem[0x%lx]\n", R(rs2), R(rs1) + imm_S );      break;
        case(0x3):  Mw(R(rs1) + imm_S, 8, R(rs2));  printf("sd: 0x%lx   =>  pmem[0x%lx]\n", R(rs2), R(rs1) + imm_S );      break;
        default:    panic("bad inst\n");
      }
      break;
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
        default:    panic("bad inst\n");
      }
      break;
    }

    case(JAL):    D->decInfo.type = TYPE_J;    R(rd) = linkAddr; D -> dnpc = D -> pc + immJ(inst);   break;
    case(JALR):   D->decInfo.type = TYPE_I;    R(rd) = linkAddr; D -> dnpc = R(rs1) + immI(inst);    break;
    case(AUIPC):  D->decInfo.type = TYPE_U;    R(rd) = D -> pc + immU(inst);break;
    case(LUI):    D->decInfo.type = TYPE_U;    R(rd) = immU(inst);break;
    case(EBREAK): NEMUTRAP(D->pc, R(10)); break;  //r(10) is a0,  ecall has the same opcode! need to improved, but there will never be an ecall
    default: panic("bad inst\n");
  }
  R(0) = 0; // reset $zero to 0

  Log("\nwdata = 0x%lx\npc = 0x%8lx, inst = 0x%08x,  rd = %d\n", R(rd), D->pc, inst, rd);
  return 0;
}

int isa_exec_once(Decode *D) {
  uint32_t inst = inst_fetch(&D -> snpc, 4);  //snpc will be updated in fetch ( +4 )
  D->inst = inst;
   //set some decode flags here
  /*
  D -> decInfo.is_jalr  = opcode(inst) == jalr_opcode; 
  D -> decInfo.is_lui   = BITS(inst, 5, 5);    //just a possibility
  D -> decInfo.funct3   = funct3(inst);
  D -> decInfo.is_load  = opcode(inst) == load_opcode;
  */

  return decode_exec(D);
}
