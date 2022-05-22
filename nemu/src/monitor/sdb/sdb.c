#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <utils.h>
#include "../../isa/riscv64/local-include/reg.h"
static int is_batch_mode = false;

#define uint64_t  long long

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

void examine_memory(int n, uint64_t p){
  printf("%2x",*((char *)p));
  return;
}

unsigned uint64_t str2hex(char *s ){
  uint64_t result = 0, temp = 0;
  for (int i = 0; i< strlen(s) ; i++)
  {

    if(s[i] >= '0' && s[i] <= '9' ) temp = s[i]  - '0';
    if(s[i] >= 'a' && s[i] <= 'z' ) temp = s[i]  - 'a' + 10;
    if(s[i] >= 'A' && s[i] <= 'Z' ) temp = s[i]  - 'A' + 10;

    result = (result << 4 ) + temp;
  }
  return result;
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

static int cmd_si(){
  cpu_exec(1);
  gpr(5)=gpr(5)+4;    //maybe there is a  bug
  return 0;  
}

static int cmd_info_r(){
  isa_reg_display();
  return 0;
}


static int cmd_x(char * args){

  char * nump = strtok(args," ");
  char * addrp = strtok(NULL," ");

  int64_t  num = atoi(nump);
  uint64_t addr = str2hex(addrp);

  printf("\033[40;33m args: %s\n num: %s\n addr: %s\n  \033[0m\n",args,nump,addrp);

  examine_memory(num,addr);
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
  { "info r", "print all regs' information", cmd_info_r},
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
      printf("%-s - %-s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%-10s - %30s\n", cmd_table[i].name, cmd_table[i].description);
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

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    if (strcmp(cmd,"info") == 0)
    {
        //info need one more argument
        //if we strcat the cmd directly, it will overlay the following characters, which will affect the value of addition
        char * addition = strtok(NULL," ");
        char t[20];
        strcpy(t,cmd);
        strcat(t," ");
        strcat(t,addition);
        cmd = t; 
    }

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
