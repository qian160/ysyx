#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

static const char *regs[] = {    //names.. add $ prefix to make regex match easier
  "$0",   "$ra", "$sp",   "$gp",  "$tp",  "$t0",  "$t1",  "$t2",
  "$s0",  "$s1", "$a0",   "$a1",  "$a2",  "$a3",  "$a4",  "$a5",
  "$a6",  "$a7", "$s2",   "$s3",  "$s4",  "$s5",  "$s6",  "$s7",
  "$s8",  "$s9", "$s10",  "$s11", "$t3",  "$t4",  "$t5",  "$t6", 
};

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  assert(0);
}

CPU_state dut_state;
/*in npc, how to use difftest:
  1. pack the dut regs up in a struct, then call regcpy, this updates the dut_state variable above
  2. just call difftest_exec, compare the updated dut_state and cpu_state in nemu
*/

bool difftest_checkregs(vaddr_t pc) {
  for(int i = 0; i < 32; i++){
    //an error happens
    if(cpu.gpr[i] ^dut_state.gpr[i]) {
      Log_Color(RED, "\npc = 0x%lx, \ndnpc = 0x%lx:  \n%s should be 0x%lx, but get 0x%lx\n", pc, cpu.pc, regs[i], cpu.gpr[i], dut_state.gpr[i]);
      return false;
    }
  }
  //printf("\n\ncpu.pc: 0x%lx \t ref.pc: 0x%lx\n", cpu.pc, ref_r->pc);
  if(cpu.pc  ^ dut_state.pc) {
    Log_Color(RED, "\nbad pc: expected 0x%lx, but get 0x%lx\n", cpu.pc, dut_state.pc);
    return false;
  }
  return true;
}

void difftest_regcpy(void *dut, bool direction) {
  CPU_state *state = (CPU_state*)dut;
  if (direction == DIFFTEST_TO_REF) {
    for(int i = 0; i < 32; i++){
      dut_state.gpr[i]  = state->gpr[i];
    }
    dut_state.pc  = state->pc;
  }
  else  {
    for(int i = 0; i < 32; i++){
      state->gpr[i]  = cpu.gpr[i];
    }
    state->pc = cpu.pc;
  }
}

//how to know the dut's reg?
void difftest_exec(int n){
  while(n--){
    uint64_t pc = cpu.pc; //the inst goint to be execuated
    cpu_exec(1);          //let dut(outside of nemu) execuate first
    assert(difftest_checkregs(pc));
  }
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init(char * img_file) {
  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  //pmem(pointer to flobal memory) + paddr(argument) - CONFIG_MBASE(0x80000000)
  assert(fread(guest_to_host(RESET_VECTOR), size, 1, fp));
  cpu.pc  = 0x80000000;
  fclose(fp);
  //need to pass the img file to nemu
}
