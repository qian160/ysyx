#ifndef __CPU_DECODE_H__
#define __CPU_DECODE_H__

#include <isa.h>
#include "../../isa/riscv64/local-include/reg.h"

typedef struct Decode {
  vaddr_t pc;
  vaddr_t snpc; // static(also default) next pc, that is pc + 4. It is performed automically in inst_fetch
  vaddr_t dnpc; // dynamic next pc. Currently no branch is implemented, so just set dnpc = snpc(which is increased in inst_fetch by 4). A mux is needed in the future. set in decode_exec
  uint32_t inst;
  ISADecodeInfo decInfo;  //struct riscv64_ISADecodeInfo, the only member is inst(union).val. Use union could save memory and improve performance.
  //TODU: improve struct isa and decode. 
  IFDEF(CONFIG_ITRACE, char logbuf[128]); //decode information
  //char opcode : 7;
}Decode;

// --- pattern matching mechanism ---
__attribute__((always_inline))
static inline void pattern_decode(const char *str, int len,
    uint64_t *key, uint64_t *mask, uint64_t *shift) {

  uint64_t __key = 0, __mask = 0, __shift = 0;
  for(int i = 0; i < len; i++){
    char c = str[i];
    if(c != '1' && c != '0' && c != ' ' && c != '?'){
      Assert(0, "invalid character '%c' in pattern string", c);
    }
    if(c != ' '){
      //for a specific instruction, some of its bits must be 0, and some 1. these bits are the instruction's symbols.
      //so to tell an instruction we just need to check these symbols.
      //key is used to match 1, and mask observes 0(if the inst has some 1s that shouldn't have, then the these 1s will be reflected in inst & mask, then key match will fail)
        __key   = (__key << 1)  | (c == '1');   //extract all the high bits, like (???? 10111 ??) -> (0000 10111 00), those 0s and 1s in the key are the must-have bits, which can uniquely tell an instruction 
        __mask  = (__mask << 1) | (c != '?');   //extract all the valid bits,(0/1, not ?)
        __shift = (c == '?' ? __shift + 1: 0);  //the number of continuous ? from right to left
        //printf("\ni = %d, c = %c key = %lx, mask = %lx, shift = %lx\n", i, c, __key, __mask, __shift);
    }
  }
  //as an example, when str = "10?", key = 0b100, maks = 0x110, shift = 1
  //shift and throw away the right bits because we don't care(the '?' indicates that. Their value should not influence the check)
  //while the left '?' bits will both be ignored in mask and key(set to 0), they won't make any influence too
  //the output key and mask also need to be shifted to fit in the shifted inst
  *key = __key >> __shift;
  *mask = __mask >> __shift;
  *shift = __shift;
  //printf("\n\n\nstr = %s\nkey = %lx, mask = %lx, shift = %lx\n", str, *key, *mask, *shift);

}


__attribute__((always_inline))
static inline void pattern_decode_hex(const char *str, int len,
    uint64_t *key, uint64_t *mask, uint64_t *shift) {
  uint64_t __key = 0, __mask = 0, __shift = 0;
  for(int i = 0; i < len; i++){
    char c = str[i];
    if(c != ' '){
        Assert((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?', \
          "invalid character '%c' in pattern string", c);
        __key   = (__key  << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10);   //extract all the high bits
        __mask  = (__mask << 4) | (c == '?' ? 0 : 0xf);
        __shift = (c == '?' ? __shift + 4: 0);  
    }
  }
  *key = __key >> __shift;
  *mask = __mask >> __shift;
  *shift = __shift;
}


// --- pattern matching wrappers for decode ---
#define INSTPAT(pattern, ...) do { \
  uint64_t key, mask, shift; \
  pattern_decode(pattern, STRLEN(pattern), &key, &mask, &shift); \
  if (((INSTPAT_INST(D) >> shift) & mask) == key) { \
    INSTPAT_MATCH(D, ##__VA_ARGS__); \
    goto *(__instpat_end); \
  } \
} while (0)
//& gets the address of a variable, and && gets the address of a label. a '*' is needed to access the lable address
#define INSTPAT_START(name) { const void ** __instpat_end = &&concat(__instpat_end_, name);
#define INSTPAT_END(name)   concat(__instpat_end_, name): ; }

#endif

#define L_width(fct3) (1 << (fct3 & 0b11))
#define S_width(fct3) (1 << fct3)

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


#define R(i) gpr(i)
#define Mr vaddr_read   //memory read
#define Mw vaddr_write  //memory write
enum {
  TYPE_I, TYPE_U, TYPE_S, TYPE_J, TYPE_R, TYPE_B, TYPE_SYS,
  TYPE_N, // none
};

//#ifdef CONFIG_SHOW_DECODE_INFORMATION
static const char tp[] __attribute__((unused))= "IUSJRB";    //use type as index

void show_decode(Decode *D, word_t src1, word_t src2, int dest, int type){
printf(ANSI_FMT(" ---------------------------------------------------------------------------\n", ANSI_FG_YELLOW));\
  puts(ANSI_FMT("| Information about the just execuated instruction: \t\t\t    |", ANSI_FG_GREEN));\
  char buf[30];\
  disassemble(buf, sizeof(buf), D -> pc, (uint8_t *)(&D -> inst), 4);\
  printf(ANSI_FMT("| type-%c:  %32s \t\t\t\t    | \n| old PC = 0x%-60lx   |\n", ANSI_FG_GREEN),tp[type], buf, D -> pc);\
  printf(ANSI_FMT("| src1 = 0x%-64lx | \n", ANSI_FG_YELLOW), src1);   \
  show_bits_fmt(src1);\
  printf(ANSI_FMT("| src2 = 0x%-64lx | \n", ANSI_FG_YELLOW), src2);   \
  show_bits_fmt(src2);\
  int fct3 = D -> decInfo.funct3;\
  switch(type){  \
    case(TYPE_I):case(TYPE_R):case(TYPE_U):\
    if(D -> decInfo.is_load){\
      word_t address = src1 + src2;\
      word_t loadVal = Mr(src1 + src2, L_width(fct3));\
      printf(ANSI_FMT("| load a value 0x%-16lx from address: 0x%-24lx  | \n", ANSI_FG_YELLOW), loadVal, address); \
      show_bits_fmt(loadVal);\
      IFDEF(CONFIG_MTRACE_ENABLE, update_mringbuf(1, address, loadVal, 0));\
    }  \
    else if(D->decInfo.is_jalr){\
      printf(ANSI_FMT("jalr, set %s = 0x%-lx, new PC at 0x%lx. %s's bits are:\n", ANSI_FG_YELLOW), reg_name(dest), src1, src2, reg_name(dest));\
      show_bits_fmt(src1);\
      IFDEF(CONFIG_FTRACE_ENABLE, \
        if(dest == 0) update_ftrace(0, src2, "dont know", depth);\
      );\
      \
    }\
    else  {\
      printf(ANSI_FMT("| set %s = 0x%-60lx  | \n", ANSI_FG_YELLOW), reg_name(dest), R(dest)); \
      show_bits_fmt(R(dest));\
    }\
    break;\
    case(TYPE_B):\
      if( src1 == 0){  \
        printf(ANSI_FMT("| branch is not taken %-40s | \n",  ANSI_FG_YELLOW), " "); \
      }\
      else {\
        printf(ANSI_FMT("| branch is taken, new PC at 0x%-44lx | \n", ANSI_FG_YELLOW), src2); \
        IFDEF(CONFIG_FTRACE_ENABLE, update_ftrace(1, src2, "dont know", depth));\
      }\
      break;\
    case(TYPE_J):\
      printf(ANSI_FMT("| jal, set %s = 0x%lx, new PC at 0x%-34lx | \n", ANSI_FG_YELLOW), reg_name(dest), src1, src2);\
      show_bits_fmt(src1);\
      IFDEF(CONFIG_FTRACE_ENABLE, update_ftrace(1, src2, "dont know", depth));\
      \
      break;\
    case(TYPE_S):{\
      word_t storeVal = src2 & BITMASK(S_width(fct3) << 3);\
      printf(ANSI_FMT("| store a value 0x%-16lx to address 0x%-27lx | \n", ANSI_FG_YELLOW), storeVal, src1);\
      show_bits_fmt(storeVal);\
      IFDEF(CONFIG_MTRACE_ENABLE, update_mringbuf(0, src1, storeVal, dest));\
      break;\
    }\
    default:  break;}\
  printf(ANSI_FMT(" ---------------------------------------------------------------------------\n", ANSI_FG_YELLOW));\
}

//#endif