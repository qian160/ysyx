#include "../../include/generated/autoconf.h"
#include "../../include/common.h"
#ifdef CONFIG_ITRACE_ENABLE

typedef struct {
    int index;
    char buf[CONFIG_ITRACE_SIZE][128];
}Iringbuf;

Iringbuf iringbuf;

void show_itrace()
{
    printf(ANSI_FMT("\nHere is the ring buffer:\n", ANSI_FG_YELLOW));
    int temp = CONFIG_ITRACE_SIZE;
    for (int i = iringbuf.index ; temp--; i = (i + 1) % temp)
    {
        unsigned long long pc;
        sscanf(iringbuf.buf[i], "%lx", &pc);
        printf(ANSI_FMT("  %s ", ANSI_FG_YELLOW), pc == nemu_state.halt_pc ? "-->" : "   ");
        printf(ANSI_FMT("%s\n", ANSI_FG_PINK), iringbuf.buf[i]);
    }
    putchar('\n');
}
#endif

#ifdef CONFIG_MTRACE_ENABLE

typedef struct {
    bool isLoad : 1;    //1 -> load, 0 -> store
    unsigned width : 3;
    uint64_t addr;
    uint64_t data;

}MtraceInfo;

typedef struct 
{
  //addr L/S width data
    int index;
    MtraceInfo info[CONFIG_MTRACE_SIZE];
}Mringbuf;

Mringbuf mringbuf;

void show_mtrace()
{

}

#endif