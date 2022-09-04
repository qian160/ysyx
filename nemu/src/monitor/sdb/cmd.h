void examine_memory(int n, int64_t p){
  //if we directly derefference the pointer, we are in fact examing our real computer's address!!!
    printf(ANSI_FMT(" 0x%lx: ",ANSI_FG_MAGENTA), p);
    char cnt = 0;
    for (int i = 0 ; i < n ; i++)
    {
        printf(ANSI_FMT("%02lx  ", ANSI_FG_YELLOW),paddr_read(p, 1));
        p ++;
        cnt ++;
        if(cnt == (char)4)
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
        printf(ANSI_FMT("%ld\t\t0x%lx\n",ANSI_FG_YELLOW),result, result);
    return 0;
}

static int cmd_q(char *args) {
    nemu_state.state = NEMU_QUIT;
    return -1;
}

static inline int cmd_clear(){
    return system("clear");
}

static int cmd_si(char * args){
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
    char * arg = strtok(args," ");
    if( arg == NULL) 
    {
        //printf("\33[40;33mneed an argument!\33[0m\n");
        printf(ANSI_FMT("need an argument!\n", ANSI_FG_PINK));
        return 0;
    }
    if(streq(arg, "r"))
        isa_reg_display();
    else if(streq(arg, "w"))
        wp_display();
    else        //a specific reg
    {
        for (int i = 0; i <= 31; i ++)
        {
            const char * reg = regs[i];
            if(streq(arg, reg)){
                printf(ANSI_FMT("%s\t\t0x%-16lx\t%-16ld\n", ANSI_FG_PINK), reg, gpr(i), gpr(i));
                return 0;
        }
    }
    }
    return 0;
}

static int cmd_x(char * args){  //usage: x num addr
    char * nump = strtok(args," ");
    char * Expr = strtok(NULL," ");
    bool * success = (bool * )malloc(sizeof(bool));
    word_t address = expr(Expr, success);
    if(!success)
    {
        printf(ANSI_FMT("illegal expression\n",ANSI_FG_MAGENTA));
        return 0;
    }
    uint64_t  num = atoi(nump);
    /*
    uint64_t addr; 
    sscanf(addrp,"%lx",&addr); 
    */
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
        char * expr = strtok(NULL, " ");
        if(expr == NULL ){
            printf(ANSI_FMT("too few arguments\n",ANSI_FG_MAGENTA));
            return 0;
        }
        WP * head = new_wp(expr);
        if(head == NULL)
            printf(ANSI_FMT("can not add more wp\n",ANSI_FG_CYAN));
        else
            printf(ANSI_FMT("new wp[%2d], value = %ld\n", ANSI_FG_YELLOW), head ->NO, head -> oldVal);
    }
    else{
        printf("bad usage\n");
    }
    return 0;

}

static int cmd_help(char *args);  //if not defined here, cmd_table will find the 

//we put this table in an embarressing position, cmd_help needs this so it must be put before it. 
//And the table contains lots of functions, so it also must be put after the functions to find their definations
static struct {
    const char *name;
    const char *description;
    int (*handler) (char *);
    const char * Usage;
} cmd_table [] = {
    { "help",   "Display informations about commands. Can take an argument",    cmd_help,   "help (cmd), show cmd's description and usage. If default show all but without usage"},
    { "c",      "Continue the execution of the program",                        cmd_c,      "no argument"},
    { "q",      "Exit NEMU",                                                    cmd_q,      "no argument"},
    { "si",     "Step single instrction",                                       cmd_si,     "si (num), default -1"},
    { "info",   "Print the specific information. See help info",                cmd_info,   "info {r/w/reg_name}"},
    { "x",      "Examine the memory",                                           cmd_x,      "x num expr"},
    { "p",      "Print the expression's value",                                 cmd_p,      "p expr"},
    { "clear",  "clear up the screen",                                          cmd_clear,  "no argument"},
    { "w",      "Add or delete watchpoint.",                                    cmd_w,      "w a expr, w d num0, num1, ..."},
//    { "d",      "Delete watch point",                                           cmd_d},

  /* TODO: Add more commands */
};

static int cmd_help(char *args) {
    /* extract the first argument */
    char *arg = strtok(NULL, " ");
    int i;

    if (arg == NULL) {
    /* no argument given */
        for (i = 0; i < NR_CMD; i ++) 
            printf(ANSI_FMT("%8s - %-s\n", ANSI_FG_GREEN), cmd_table[i].name, cmd_table[i].description);
    }
    else {
        for (i = 0; i < NR_CMD; i ++) {
//            if (strcmp(arg, cmd_table[i].name) == 0) {
            if (streq(arg, cmd_table[i].name)) {
                printf(ANSI_FMT("%8s - %-s\n", ANSI_FG_GREEN), cmd_table[i].name, cmd_table[i].Usage);
                return 0;
            }
        }
    printf("Unknown command '%s'\n", arg);
    }
    return 0;
}