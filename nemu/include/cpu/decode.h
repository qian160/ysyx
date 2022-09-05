#ifndef __CPU_DECODE_H__
#define __CPU_DECODE_H__

#include <isa.h>

typedef struct Decode {
  vaddr_t pc;
  vaddr_t snpc; // static(also default) next pc, that is pc + 4. It is performed automically in inst_fetch
  vaddr_t dnpc; // dynamic next pc. Currently no branch is implemented, so just set dnpc = snpc(which is increased in inst_fetch by 4). A mux is needed in the future. set in decode_exec
  ISADecodeInfo isa;  //struct riscv64_ISADecodeInfo, the only member is inst(union).val
  IFDEF(CONFIG_ITRACE, char logbuf[128]); //decode information
} Decode;

// --- pattern matching mechanism ---
__attribute__((always_inline))
static inline void pattern_decode(const char *str, int len,
    uint64_t *key, uint64_t *mask, uint64_t *shift) {
  uint64_t __key = 0, __mask = 0, __shift = 0;
#define macro(i) \
  Log_Color(YELLOW, "\ni = %d, c = %c\n", i, str[i]); \
  if ((i) >= len) goto finish; \
  else { \
    char c = str[i]; \
    if (c != ' ') { \
      Assert(c == '0' || c == '1' || c == '?', \
          "invalid character '%c' in pattern string", c); \
      __key  = (__key  << 1) | (c == '1' ? 1 : 0); \
      __mask = (__mask << 1) | (c == '?' ? 0 : 1); \
      __shift = (c == '?' ? __shift + 1 : 0); \
    } \
  }/*
      key:    all the high bits
      mask:   all the non-? bits
      shift:  nember of contineous ? from  
  */
//the number after macro name is also the step length. for example,  macro16's lenth is 16 and 0, 16, 32, 48 will be execuated(all <= 64)
#define macro2(i)  macro(i);   macro((i) + 1)
#define macro4(i)  macro2(i);  macro2((i) + 2)
#define macro8(i)  macro4(i);  macro4((i) + 4)
#define macro16(i) macro8(i);  macro8((i) + 8)
#define macro32(i) macro16(i); macro16((i) + 16)
#define macro64(i) macro32(i); macro32((i) + 32)
  macro64(0);
  /*
=  macro32(0); macro32(32);
=  macro16(0); macro16(16); macro16(32); macro16(48);
=  macro8(0);  macro8(8);   macro8(16); macro8(24);macro8(32); macro8(40);macro8(48); macro8(56);
=  macro4(0);  macro4(4);...macro4(60);
=  macro2(0);  macro2(2);...macro2(62);
=  macro(0);   macro(1);....macro(63);  //start checking at the lowest bit
  */



  panic("pattern too long");
#undef macro
finish:
  Log("\n__key = %lx, __mask = %lx, __shift = %lx\n", __key, __mask, __shift);
  *key = __key >> __shift;
  *mask = __mask >> __shift;
  *shift = __shift;
  Log("\nkey = %lx, mask = %lx, shift = %lx\n", *key, *mask, *shift);
}

__attribute__((always_inline))
static inline void pattern_decode_hex(const char *str, int len,
    uint64_t *key, uint64_t *mask, uint64_t *shift) {
  uint64_t __key = 0, __mask = 0, __shift = 0;
#define macro(i) \
  if ((i) >= len) goto finish; \
  else { \
    char c = str[i]; \
    if (c != ' ') { \
      Assert((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?', \
          "invalid character '%c' in pattern string", c); \
      __key  = (__key  << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); \
      __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); \
      __shift = (c == '?' ? __shift + 4 : 0); \
    } \
  }

  macro16(0);
  panic("pattern too long");
#undef macro
finish:
  *key = __key >> __shift;
  *mask = __mask >> __shift;
  *shift = __shift;
}


// --- pattern matching wrappers for decode ---
#define INSTPAT(pattern, ...) do { \
  uint64_t key, mask, shift; \
  pattern_decode(pattern, STRLEN(pattern), &key, &mask, &shift); \
  if (((INSTPAT_INST(s) >> shift) & mask) == key) { \
    INSTPAT_MATCH(s, ##__VA_ARGS__); \
    goto *(__instpat_end); \
  } \
} while (0)
//& gets the address of a variable, and && gets the address of a label. a '*' is needed to access the lable address
#define INSTPAT_START(name) { const void ** __instpat_end = &&concat(__instpat_end_, name);
#define INSTPAT_END(name)   concat(__instpat_end_, name): ; }

#endif
