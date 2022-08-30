#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <utils.h>
#include "../../isa/riscv64/local-include/reg.h"

uint64_t pmem_read(paddr_t addr, int len);

static int is_batch_mode = false;

#define uint64_t  long long

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  /*
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");
  */
  char * line_read = readline("(nemu)" );
  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

void examine_memory(int n, int64_t p){
  //if we directly derefference the pointer, we are in fact examing our real computer's address!!!
  //printf("\33[40;32m 0x%x\33[0m: ",p);   //green
  printf(ANSI_FMT(" 0x%lx: ",ANSI_FG_MAGENTA), p);
  char cnt = 0;
  for (int i = 0 ; i < n ; i++)
  {
    printf(ANSI_FMT("%02lx  ", ANSI_FG_YELLOW),pmem_read(p, 1));
    //printf("\33[40;33m%02lx\33[0m  ",pmem_read(p,1));   //yellow
    p ++;
    cnt ++;
    if(cnt == (char)4)
    {
      cnt = 0;
      printf("\n");
      //printf("\33[40;32m 0x%x\33[0m: ",p);
        printf(ANSI_FMT(" 0x%lx: ",ANSI_FG_MAGENTA), p);
    }
  }
  printf("\n");
  return;

}

//cmd for user input
static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}

static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_si(char * args){
  char *arg = strtok(NULL," ");  
  int steps = 0;  
  if(arg == NULL){  
      cpu_exec(1);  
      return 0;  
  }  
  sscanf(arg, "%d", &steps);  
  if(steps<0){  
      printf("negetve steps!!\n");  
      return 0;  
  }   
  cpu_exec(steps);  
  return 0;
}  

static int cmd_info(char * args){
  char * arg = strtok(args," ");
  if( arg == NULL) 
  {
    //printf("\33[40;33mneed an argument!\33[0m\n");
    printf(ANSI_FMT("need an argument!\n", ANSI_FG_PINK));
    return 0;
  }
  if(strcmp(arg,"r") == 0)
    isa_reg_display();
  return 0;
}


static int cmd_x(char * args){

  char * nump = strtok(args," ");
  char * addrp = strtok(NULL," ");

  int64_t  num = atoi(nump);
  int64_t addr; 
  sscanf(addrp,"%lx",&addr); 
  printf(ANSI_FMT("[little endian, the MSB is located at low adress]\n",ANSI_FG_PINK));
  examine_memory(num, addr);
  //here we dont do mem check. we pass the job to that em function
  return 0;
}


static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "step single instrction", cmd_si},
  { "info", "print all regs' information", cmd_info},
  { "x", "examine the memory", cmd_x},

  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf(ANSI_FMT("%8s - %-s\n", ANSI_FG_GREEN), cmd_table[i].name, cmd_table[i].description);
      //printf("\033[40;32m%8s - %-s\033[0m\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf(ANSI_FMT("%8s - %-s\n", ANSI_FG_GREEN), cmd_table[i].name, cmd_table[i].description);
        //printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);
    for(int i = 0 ; i< strlen(str) ; i++)
      str[i] |= 0x20;    //convert to a b c ...z .大小写都能用
    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */

    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        //notice that a function call happens here!
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
