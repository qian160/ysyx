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
}rb_I;      //ring buffer

rb_I rbi;

void show_itrace();

#endif

#ifdef CONFIG_FTRACE_ENABLE

typedef struct {
    unsigned int depth;
    word_t address;
    bool is_ret : 1;
    char name[64];
    word_t pc;
}Ftrace_entry;

typedef struct {
    //if ftrace cases a segmentation fault, the buf may need to be enlarged
    Ftrace_entry trace[1 << 16];
    unsigned int cnt;
}Ftrace;

Ftrace ftrace;

typedef struct symbol {
    char * name;
    word_t offset;
    word_t size;
    struct symbol * next;
}symbol;

/*
void tranverse(){
    symbol * t = head;
    while(t){
        printf("%lx: %s %lx\n",t->offset, t->name, t->size);
        t = t -> next;
    }
}
*/

void show_ftrace();

void update_ftrace(bool is_ret, word_t addr, word_t pc, const char * name, int d);


#endif