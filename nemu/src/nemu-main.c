#include <common.h>

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  for(int i = 0 ; i < argc; i++)
    printf("%s\n",argv[i]);

  printf("%d\n", MUXDEF(ITRACE_COND, 1, 0));
  /* Start engine. */
  engine_start();

  return is_exit_status_bad();
}
