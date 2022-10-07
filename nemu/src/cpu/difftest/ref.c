#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

extern void init_device();

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
vaddr_t   curr_pc;

bool difftest_checkregs() {
  for(int i = 0; i < 32; i++){
    //an error happens
    if(cpu.gpr[i] ^dut_state.gpr[i]) {
      putchar('\n');
      Log_Color(RED, "\npc = 0x%lx:  \n%s should be 0x%lx, but get 0x%lx\n", curr_pc, regs[i], cpu.gpr[i], dut_state.gpr[i]);
      return false;
    }
  }
  if(cpu.pc  ^ dut_state.pc) {
    putchar('\n');
    Log_Color(RED, "\nbad pc: expected 0x%lx, but get 0x%lx\n", cpu.pc, dut_state.pc);
    return false;
  }
  return true;
}

void difftest_regcpy(CPU_state *dut, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
    for(int i = 0; i < 32; i++){
      dut_state.gpr[i]  = dut->gpr[i];
    }
    dut_state.pc  = dut->pc;
  }
  else  {
    for(int i = 0; i < 32; i++){
      dut->gpr[i]  = cpu.gpr[i];
    }
    dut->pc = cpu.pc;
  }
}

//how to know the dut's reg?
void difftest_ref_exec_once(){   //exec once
  curr_pc = cpu.pc;         //the inst going to be execuaated. If difftest fails, this inst should take the responsibility
  cpu_exec(1);
//  assert(difftest_checkregs(pc));
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
  init_device();
  fclose(fp);
  //need to pass the img file to nemu
}
