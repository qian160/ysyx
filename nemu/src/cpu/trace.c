#include "../../include/trace.h"
#ifdef CONFIG_ITRACE_ENABLE

void show_itrace()
{
    printf(ANSI_FMT("\nHere is the ring buffer:\n", ANSI_FG_YELLOW));
    int temp = CONFIG_ITRACE_SIZE;
    for (int i = iringbuf.index ; temp--; i = (i + 1) % temp)
    {
        word_t pc;
        sscanf(iringbuf.buf[i], "%lx", &pc);
        printf(ANSI_FMT("  %s ", ANSI_FG_YELLOW), pc == nemu_state.halt_pc ? "-->" : "   ");
        printf(ANSI_FMT("%s\n", ANSI_FG_PINK), iringbuf.buf[i]);
    }
    putchar('\n');
}
#endif

#ifdef CONFIG_MTRACE_ENABLE

void show_mtrace()
{

}

#endif