#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"
#include "../../../monitor/sdb/cmd.h"
//CPU_state and suruct diff_context has same fields
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  for(int i = 0; i < 32; i++){
    if(cpu.gpr[i] ^ ref_r->gpr[i]) {
      char * t = "d 1";
      char * arg = strtok(t, " ");
      cmd_d(arg);
      Log_Color(RED, "\n %s should be 0x%lx, but get 0x%lx\n", reg_name(i), ref_r->gpr[i], cpu.gpr[i]);
      Log_Color(RED, "AT PC = 0X%lx\n", cpu.pc);
      return false;
    }
  }
  //printf("\n\ncpu.pc: 0x%lx \t ref.pc: 0x%lx\n", cpu.pc, ref_r->pc);
  if(cpu.pc  ^ ref_r -> pc)  return false;
  return true;
}

void isa_difftest_attach() {
}
