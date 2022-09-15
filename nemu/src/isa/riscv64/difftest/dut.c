#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

//CPU_state and suruct diff_context has same fields
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  CPU_state temp;
  ref_difftest_regcpy(&temp, DIFFTEST_TO_DUT);
  for(int i = 0; i < 32; i++){
    if(temp.gpr[i] ^ ref_r->gpr[i]) return false;
  }
  if(temp.pc  ^ ref_r -> pc)  return false;
  return true;
}

void isa_difftest_attach() {
}
