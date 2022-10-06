#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>
extern char * reg_name(int i);
void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  assert(0);
}

void difftest_regcpy(void *dut, bool direction) {
  CPU_state *state = (CPU_state*) &dut;
  if (direction == DIFFTEST_TO_REF) {
    for(int i = 0; i < 32; i++){
      cpu.gpr[i]  = state->gpr[i];
    }
    cpu.pc  = state->pc;
  }
  else  {
    for(int i = 0; i < 32; i++){
      state->gpr[i]  = cpu.gpr[i];
    }
    state->pc = cpu.pc;
  }
}

bool difftest_checkregs(vaddr_t pc, CPU_state *dut_r) {
  for(int i = 0; i < 32; i++){
    //an error happens
    if(cpu.gpr[i] ^dut_r->gpr[i]) {
      Log_Color(RED, "\npc = 0x%lx, \ndnpc = 0x%lx:  \n%s should be 0x%lx, but get 0x%lx\n", pc, cpu.pc, reg_name(i), dut_r->gpr[i], cpu.gpr[i]);
      return false;
    }
  }
  //printf("\n\ncpu.pc: 0x%lx \t ref.pc: 0x%lx\n", cpu.pc, ref_r->pc);
  if(cpu.pc  ^ dut_r -> pc) {
    Log_Color(RED, "\nbad pc: expected 0x%lx, but get 0x%lx\n", cpu.pc, dut_r->pc);
    return false;
  }
  return true;
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  init_isa();
}
