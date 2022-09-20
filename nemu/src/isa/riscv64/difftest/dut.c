#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"
//CPU_state and suruct diff_context has same fields
bool isa_difftest_checkregs(vaddr_t pc, CPU_state *ref_r, vaddr_t dnpc) {
  for(int i = 0; i < 32; i++){
    if(cpu.gpr[i] ^ ref_r->gpr[i]) {
      Log_Color(RED, "pc = 0x%lx, \ndnpc = 0x%lx:  \n%s should be 0x%lx, but get 0x%lx\n", pc, cpu.pc, reg_name(i), ref_r->gpr[i], cpu.gpr[i]);
      return false;
    }
  }
  //printf("\n\ncpu.pc: 0x%lx \t ref.pc: 0x%lx\n", cpu.pc, ref_r->pc);
  if(cpu.pc  ^ ref_r -> pc)  return false;
  return true;
}

void isa_difftest_attach() {
}
