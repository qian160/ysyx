#include "cmd.h"

#define uint64_t  long long
static int is_batch_mode __attribute__((unused)) = false;

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
  cpu.mstatus = 0xa00001800;
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }
  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);
    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments, */

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
      if (streq(cmd, cmd_table[i].short_name) || streq(cmd, cmd_table[i].full_name) || streq(cmd, cmd_table[i].capital_name)) {
        //Log("\nargs = %s\n", args);
        if (cmd_table[i].handler(args) < 0) { return; } //error when running
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
#ifdef CONFIG_AUTO_DISASM_NEXT
  if(CONFIG_DISASM_NUMBER != 0){
    if(cmd[0] != 'q' && cmd[0] != 'd')
    {
      int n = atoi(CONFIG_AUTO_DISASM_NEXT);
      printf(ANSI_FMT("\nnext %d instruction(s) is:\n", ANSI_FG_YELLOW), n);
      char *buf = (char *) malloc(30);
      memset(buf, 0, 30);
      char * arg = strcat(strcat(strcat(buf, " "), CONFIG_AUTO_DISASM_NEXT), " $pc");
      cmd_d(arg);
      putchar('\n');
      free(buf);
    }
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
