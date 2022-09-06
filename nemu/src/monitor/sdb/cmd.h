void examine_memory(int n, word_t p){
  //if we directly derefference the pointer, we are in fact examing our real computer's address!!!
    printf(ANSI_FMT(" 0x%lx: ",ANSI_FG_MAGENTA), p);
    char cnt = 0;
    for (int i = 0 ; i < n ; i++)
    {
        printf(ANSI_FMT("%02lx  ", ANSI_FG_YELLOW),paddr_read(p, 1));
        p ++;
        cnt ++;
        if(cnt == (char)4 && i != n-1)
        {
            cnt = 0;
            printf("\n");
            printf(ANSI_FMT(" 0x%lx: ",ANSI_FG_MAGENTA), p);
        }
    }
    printf("\n");
    return;
}

//cmd for user input
static int cmd_c(char *args) {
    cpu_exec(-1);   //as many steps as possible
    return 0;
}

static int cmd_p(char *expression){
    bool * success = (bool *)malloc(sizeof(bool));
    *success = true;
    word_t result = expr(expression, success);
    if(!success)
        printf(ANSI_FMT("illegal expr\n",ANSI_FG_RED));
    else
        printf(ANSI_FMT("0x%lx\t%ld\n",ANSI_FG_YELLOW),result, result);
    return 0;
}

static int cmd_q(char *args) {
    nemu_state.state = NEMU_QUIT;
    return -1;
}

static int cmd_s(char * args){
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
    char * arg = strtok(NULL, " ");  //r, w, reg name
    char * reg_name = strtok(NULL, " ");
    if( arg == NULL) 
    {
        printf(ANSI_FMT("too few argument!\n", ANSI_FG_PINK));
        return 0;
    }
    if(streq(arg, "r") && !reg_name)
        isa_reg_display();
    else if(streq(arg, "w"))
        wp_display();
    else        //a specific reg
    {
        for (int i = 0; i <= 31; i ++)
        {
            const char * reg = regs[i];
            if(streq(reg_name, reg)){
                printf(ANSI_FMT("%s\t\t0x%-16lx\t%-16ld\n", ANSI_FG_PINK), reg, gpr(i), gpr(i));
                return 0;
        }
    }
    }
    return 0;
}

static int cmd_x(char * args){  //usage: x num addr
    puts(args);
    char * nump = strtok(NULL," ");
    char * Expr = nump + strlen(nump) + 1;
    bool * success = (bool * )malloc(sizeof(bool));
    *success = true;
    word_t address = expr(Expr, success);
    Log("\n%s = %lx", Expr, address);
    if(!success)
    {
        printf(ANSI_FMT("illegal expression\n",ANSI_FG_MAGENTA));
        return 0;
    }
    uint64_t  num = atoi(nump);
    printf(ANSI_FMT("[little endian, the MSB is located at low adress]\n",ANSI_FG_PINK));
    examine_memory(num, address);
    //here we dont do mem check. we pass the job to that em function
    return 0;
}

static int cmd_w(char *args){
    if(args == NULL){
        printf(ANSI_FMT("need 2 arguments. Usage: w a expr, w d number\n", ANSI_FG_YELLOW));
        return 0;
    }
    char * cmd = strtok(NULL, " "); //a or d
    //delete
    if(streq(cmd, "d")){
        char *idx = strtok(NULL, " ");
        if(idx == NULL){
            printf(ANSI_FMT("too few arguments\n",ANSI_FG_MAGENTA));
            return 0;
        }
        int no;
        while(1){
            if(idx == NULL) break;
            sscanf(idx, "%d", &no);
            free_wp(no);
            idx = strtok(NULL, " ");
        }
    }
    //add
    else if(streq(cmd, "a")){
        char * expr = cmd + strlen(cmd) + 1;
        if(expr == NULL ){
            printf(ANSI_FMT("too few arguments\n",ANSI_FG_MAGENTA));
            return 0;
        }
        WP * head = new_wp(expr);
        if(head == NULL)
            printf(ANSI_FMT("can not add this wp, maybe full(8), maybe the expr is illegal\n",ANSI_FG_CYAN));
        else
            printf(ANSI_FMT("new wp[%2d], initial value = 0x%lx\n", ANSI_FG_YELLOW), head -> NO, head -> oldVal);
    }
    else{
        printf("bad usage\n");
    }
    return 0;
}

static int cmd_d(char * e){
    //d n, or d n address
    //can't use strtok in auto disasm mode. Because strtok will start from the previous position(When the arg is NULL)
    char * n, * arg2;
    Log("\ne = %s\n",e);
    //auto disasm
    //if(e == NULL || streq(e, "riscv64-pc-linux-gnu")){
    if(e == NULL || *(e + 1) == '\0'){      //e == NULL is a guard
        n = e;
        arg2 = NULL;
    }
    else{
        n = strtok(NULL, " ");
        arg2 = strtok(NULL, " ");
    }

    char * Expr = n + strlen(n) + 1;
    if(n == NULL)
    {
        printf(ANSI_FMT("too few arguments\n", ANSI_FG_YELLOW));
        return 0;
    }

    word_t address;
    int N  = atoi(n);
    bool * success = (bool *)malloc(sizeof(bool));
    *success = true;
    //case d next n, need to change these variables' values
    if(arg2 == NULL)
        address = cpu.pc;
    else
        address = expr(Expr, success);

    if(!*success){
        printf(ANSI_FMT("illegal expression\n", ANSI_FG_YELLOW));
        return 0;
    }

    char buf[128];
    char * p = buf;
    vaddr_t pc = address;//cpu.pc;

    while(N--){
        uint32_t inst = vaddr_ifetch(pc, 4);
        p = buf;
        //address
        p += snprintf(p, sizeof(buf), FMT_WORD ":", pc);
        //value
        uint8_t *inst_byte = (uint8_t *)&inst;
        for (int i = 3; i >= 0; i --) {
            p += snprintf(p, 4, " %02x", inst_byte[i]);
        }
        //add some spaces between value and name to make it look more beautiful
        int space_len = 1;
        memset(p, ' ', space_len);
        p += space_len;
        //name
        disassemble(p, buf + sizeof(buf) - p, pc, (uint8_t *)&inst, 4);
        //full inst is ready
        puts(buf);
        pc += 4;        
    }

    return 0;
}

static int cmd_shell(char * args){
    return system("zsh");
}

static int cmd_help(char *args);  //if not defined here, cmd_table will find the 

//we put this table in an embarressing position, cmd_help needs this so it must be put before it. 
//And the table contains lots of functions, so it also must be put after the functions to find their definations
static struct {
    const char *short_name;
    const char *full_name;
    const char *description;
    int (*handler) (char *);
    const char * Usage;
} cmd_table [] = {
    {"h",    "help",       "Display informations about commands. Can take an argument",    cmd_help,   "help (cmd), show cmd's description and usage. If default show all but without usage"},
    {"c",    "continue",   "Continue the execution of the program",                        cmd_c,      "no argument"},
    {"q",    "quit",       "Exit NEMU",                                                    cmd_q,      "no argument"},
    {"s",    "step",       "Step and execuate n instrction",                               cmd_s,      "s (num), default -1"},
    {"i",    "info",       "Print the specific information. See help info",                cmd_info,   "info {r/w/reg_name}"},
    {"x",    "examine",    "Examine the memory",                                           cmd_x,      "x num expr"},
    {"p",    "print",      "Print the expression's value",                                 cmd_p,      "p expr"},
    {"w",    "watch",      "Add or delete watchpoint.",                                    cmd_w,      "w a expr, w d num0, num1, ..."},
    {"d",    "disasm",     "disasmble the next n inst. Or starting at other address ",     cmd_d,      "d n (expr). the second arg is optional"},
    {"sh",   "shell",      "temporarily transfer control to a shell",                      cmd_shell,  "no argument"},


  /* TODO: Add more commands */
};

static int cmd_help(char *args) {
    /* extract the first argument */
    char *arg = strtok(NULL, " ");
    int i;

    if (arg == NULL) {
    /* no argument given */
        for (i = 0; i < NR_CMD; i ++) 
            printf(ANSI_FMT("%2s: %-8s \t -%-s\n", ANSI_FG_GREEN), cmd_table[i].short_name, cmd_table[i].full_name, cmd_table[i].description);
        printf(ANSI_FMT("\nFor usage, see help cmd_name\n\n", ANSI_FG_CYAN));
    }
    else {
        for (i = 0; i < NR_CMD; i ++) {
            //find the cmd
            if (streq(arg, cmd_table[i].short_name) || streq(arg, cmd_table[i].full_name)) {
                printf(ANSI_FMT("\t%s\n", ANSI_FG_GREEN), cmd_table[i].Usage);
                return 0;
            }
        }
    printf("Unknown command '%s'\n", arg);
    }
    return 0;
}