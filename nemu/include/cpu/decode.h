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
  for(int i = len - 1; i >= 0; i--){
    char c = str[i];
    if(c != ' '){
      Assert(c == '0' || c == '1' || c == '?', "invalid character %c in pattern string", c);
    }
    __key   = (__key << 1)  | (c == '1'? 1 : 0);
    __mask  = (__mask << 1) | (c == '?'? 0 : 1);
    __shift = (c == '?' ? __shift + 1: 0);
  }
  *key = __key >> __shift;
  *mask = __mask >> __shift;
  *shift = __shift;
  Log("\nstr = %s\nkey = %lx, mask = %lx, shift = %lx\n", str, *key, *mask, *shift);
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
  Log("emmmmm\n\n");
  //macro16(0);
  panic("pattern too long");
#undef macro
finish: __unused__
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
