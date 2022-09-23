#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>

#include "../monitor/sdb/sdb.h"
/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#include "../../src/isa/riscv64/local-include/reg.h"
#include "../include/trace.h"

#define MAX_INST_TO_PRINT 10
CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

void device_update();
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

static inline void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  //if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  IFDEF(CONFIG_ITRACE_ENABLE, 
    strcpy(iringbuf.buf[iringbuf.index], _this -> logbuf);
    //index changed here
    iringbuf.index = (iringbuf.index + 1) % CONFIG_ITRACE_SIZE;
  )
  //if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));

#ifdef CONFIG_WP_ENABLE
  for(WP * head = get_head(); head != NULL; head = head -> next){
    bool * success = (bool *)malloc(sizeof(bool));
    *success = true;
    head -> newVal = expr(head -> expr, success);
    word_t newVal = head -> newVal, oldVal = head -> oldVal;
    if(newVal ^ oldVal){
      putchar('\n');
      nemu_state.state = NEMU_STOP;
      Log_Color(CYAN,"\nstop at PC: 0x%lx, wp[%d]: %s triggered\noldVal = 0x%lx\nnewVal = 0x%lx\n", _this -> pc, head -> NO, head -> expr, oldVal, newVal);
    }
    head -> oldVal = newVal;
  }
#endif
}

static void exec_once(Decode *D, vaddr_t pc) {
  D->pc = pc;
  D->snpc = pc;     //+4 will be performed in inst_fetch
  isa_exec_once(D);
  cpu.pc = D->dnpc; //dnpc is updated in decode_exec, currently dnpc = snpc(pc + 4)
#ifdef CONFIG_ITRACE
  IFDEF(CONFIG_ITRACE_ENABLE
  char *p = D->logbuf;
  //add address to logbuf
  p += snprintf(p, sizeof(D->logbuf), FMT_WORD ":", D->pc);
  int ilen = D->snpc - D->pc;
  int i;
  uint8_t *inst = (uint8_t *)&D->inst;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  //printf("\033[40;30m   %s    \033[0m\n",s->logbuf);

  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
  //add inst name to logbuf
  disassemble(p, D->logbuf + sizeof(D->logbuf) - p,
    MUXDEF(CONFIG_ISA_x86, D->snpc, D->pc), (uint8_t *)&D->inst, ilen));
#endif
}

static void execute(uint64_t n) {
  Decode D;   //pc, dnpc, snpc, isa, logbuf
  //execuate n steps
  for (;n > 0; n --) {
    exec_once(&D, cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&D, cpu.pc);
    if (nemu_state.state != NEMU_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%ld", "%'ld")
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT); //Greater than max PRINT STEPs
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();
  execute(n);
  IFDEF(CONFIG_FTRACE_ENABLE, show_ftrace());

  IFDEF(CONFIG_FTRACE_ENABLE, show_ftrace());   //debug use

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break; //n instructions have been execuated, time to stop and wait for new cmd
    
    case NEMU_END: case NEMU_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
            (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);      
          IFDEF(CONFIG_ITRACE_ENABLE, show_itrace());
          IFDEF(CONFIG_MTRACE_ENABLE, show_mtrace());
          IFDEF(CONFIG_FTRACE_ENABLE, show_ftrace());
    case NEMU_QUIT: statistic();
  }
}
