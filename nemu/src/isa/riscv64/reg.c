#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {    //names.. add $ prefix to make regex match easier
  "$0",   "$ra", "$sp",   "$gp",  "$tp",  "$t0",  "$t1",  "$t2",
  "$s0",  "$s1", "$a0",   "$a1",  "$a2",  "$a3",  "$a4",  "$a5",
  "$a6",  "$a7", "$s2",   "$s3",  "$s4",  "$s5",  "$s6",  "$s7",
  "$s8",  "$s9", "$s10",  "$s11", "$t3",  "$t4",  "$t5",  "$t6", 
};

void isa_reg_display() {

	for (int i = 0; i < 31; i += 2) 
    printf(ANSI_FMT("%s:\t0x%-16lx\t%s:\t0x%-16ld\n", ANSI_FG_YELLOW), regs[i], gpr(i),regs[i+1], gpr(i+1));
}

word_t isa_reg_str2val(const char *s, bool *success) {
  for(int i = 0; i < 32; i++){
    if(strcmp(s, regs[i]) == 0){
      *success = 1;
      return gpr(i);
    }
  }
  *success = 0;
  return 0;
}
