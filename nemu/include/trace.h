#ifdef CONFIG_MTRACE_ENABLE

typedef struct {
    bool isLoad : 1;    //1 -> load, 0 -> store
    uint64_t addr;
    uint64_t data;
    unsigned int rd : 5;
}MtraceInfo;

typedef struct 
{
    int index;
    MtraceInfo info[CONFIG_MTRACE_SIZE];
}Mringbuf;

Mringbuf mringbuf;

void update_mringbuf(bool isLoad, word_t addr, word_t data, int rd);
void show_mtrace();

#endif

#ifdef CONFIG_ITRACE_ENABLE

typedef struct {
    int index;
    char buf[CONFIG_ITRACE_SIZE][128];
}Iringbuf;

Iringbuf iringbuf;

void show_itrace();

#endif

#ifdef CONFIG_FTRACE_ENABLE

typedef struct {
    unsigned depth : 8;
    word_t address;
    char name[32];
}Ftrace_entry;

Ftrace_entry Ftrace[128];

void show_ftrace();

#endif