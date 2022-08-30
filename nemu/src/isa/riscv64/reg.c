#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {

	for (int i = 0; i <= 31; i ++) 
    //-代表左对齐,31 = yellow
    printf(ANSI_FMT("%s\t\t0x%-16lx\t%-16ld\n", ANSI_FG_PINK), regs[i], gpr(i), gpr(i));
  //printf("\033[40;38m%s\t\t%-16lx\t%-16ld\n\033[0m", regs[i],gpr(i),gpr(i));
}

word_t isa_reg_str2val(const char *s, bool *success) {
  return 0;
}
