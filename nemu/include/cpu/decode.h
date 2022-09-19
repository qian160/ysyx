#ifndef __CPU_DECODE_H__
#define __CPU_DECODE_H__

#include <isa.h>

//opcode
#define ARITH_R   0b0110011
#define ARITH_I   0b0010011
#define LOAD      0b0000011
#define STORE     0b0100011
#define BRANCH    0b1100011
#define JAL       0b1101111
#define JALR      0b1100111
#define LUI       0b0110111
#define AUIPC     0b0010111
#define EBREAK    0b1110011

#define ARITH_64_R  0b0111011
#define ARITH_64_I  0b0011011

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


