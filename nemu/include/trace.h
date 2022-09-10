#ifdef CONFIG_ITRACE_ENABLE

typedef struct {
    int index;
    char buf[CONFIG_ITRACE_SIZE][128];
}Iringbuf;

Iringbuf iringbuf;

#endif

#ifdef CONFIG_MTRACE_ENABLE

typedef struct {
    bool isLoad : 1;    //1 -> load, 0 -> store
    unsigned width : 3;
    word_t addr;
    word_t data; 
}MtraceInfo;

typedef struct 
{
  //addr L/S width data
    int index;
    MtraceInfo info[CONFIG_MTRACE_SIZE];
}Mringbuf;

Mringbuf mringbuf;

#endif