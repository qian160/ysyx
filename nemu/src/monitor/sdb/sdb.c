#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <utils.h>
#include "../../isa/riscv64/local-include/reg.h"

static int is_batch_mode __attribute__((unused)) = false;
#define NR_CMD ARRLEN(cmd_table)

#include "cmd.h"  //put this under all the definations

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
  char * line_read = readline(ANSI_FMT("(nemu)",ANSI_FG_PINK));
  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {   //get command
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }
  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);
    for(int i = 0 ; i< strlen(str) ; i++)
      if(isalnum(str[i])) str[i] |= 0x20;    //convert to a b c ...z .大小写都能用
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
      if (strcmp(cmd, cmd_table[i].short_name) == 0 || streq(cmd, cmd_table[i].full_name)) {
        if (cmd_table[i].handler(args) < 0) { return; } //error when running
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
#ifdef CONFIG_AUTO_DISASM_NEXT
  if(cmd[0] != 'q' && cmd[0] != 'd')
  {
    int n = atoi(CONFIG_AUTO_DISASM_NEXT);
    printf(ANSI_FMT("\nnext %d instruction(s) is:\n", ANSI_FG_YELLOW), n);
    cmd_d(CONFIG_AUTO_DISASM_NEXT);
    putchar('\n');
  }
#endif
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
