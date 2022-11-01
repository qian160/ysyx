#include"include/common.h"
#include"include/sdb.h"
#include"include/macro.h"
#include<iterator>
#include<SDL2/SDL.h>
extern VTOP * top;

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

void get_state(CPU_state & state){
    memcpy((void*)&state, &top->io_regs_0, 32 * sizeof(uint64_t));
}

extern bool (*difftest_checkregs)();
extern void (*difftest_regcpy)(void *dut, bool direction);
extern void (*difftest_exec)();
extern void (*difftest_init)(const char *img_file);
extern uint64_t * npc_timer;
CPU_state state;
extern void SDL_Exit();

const char *regs[] = {    //names.. add $ prefix to make regex match easier
    "x0",  "ra", "sp",   "gp",  "tp",  "t0",  "t1",  "t2",
    "s0",  "s1", "a0",   "a1",  "a2",  "a3",  "a4",  "a5",
    "a6",  "a7", "s2",   "s3",  "s4",  "s5",  "s6",  "s7",
    "s8",  "s9", "s10",  "s11", "t3",  "t4",  "t5",  "t6", 
};

using namespace std;
//link this file to test.cpp. so in test.cpp's main loop we can call those functions
extern TestBench<VTOP> tb;

bool difftest()
{
    //get dut's information about registers
    memcpy((void *)&state, (void *)&top -> io_regs_0, 32 * sizeof(uint64_t));
    state.pc = top->io_pc_o;
    difftest_regcpy(&state, DIFFTEST_TO_REF);
    return difftest_checkregs();
}

extern uint64_t getTime();
extern void vga_update_screen();
extern uint64_t boot_time;
extern void send_key(uint8_t scancode, bool is_keydown);

int cmd_s(string steps){
    size_t n = atoi(steps.c_str());
    n = n? n: 1;
    while(n-- && !Verilated::gotFinish()){
        IFDEF(DIFFTEST_ENABLE, difftest_exec());                    //let ref execuate first, to get the new timer
        IFDEF(DIFFTEST_ENABLE, top -> io_timer_i = *npc_timer);

        tb.tick();
        IFDEF(DIFFTEST_ENABLE, assert(difftest()));
#ifdef  HAS_DEVICE
        /*

        //vga
        static uint64_t last = 0;
        uint64_t now = getTime();
        if (now - last >= 1000000 / 60) {
            last = now;
            vga_update_screen();
        }
        //kbd
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_QUIT:  exit(0);

                // If a key was pressed
                case SDL_KEYDOWN: case SDL_KEYUP: {
                    uint8_t k = event.key.keysym.scancode;
                    bool is_keydown = (event.key.type == SDL_KEYDOWN);
                    send_key(k, is_keydown);
                    break;
                }

                default: break;
            }
        }
        */
#endif
    }

    return 0;
}

int cmd_c(string args){
    cmd_s("-1");
    return 0;
}

int cmd_h(string cmd){
    for(auto i :cmd_table){
        cout.width(8);
        cout << i.first << " - " << i.second.description << " - " << i.second.Usage << endl;
    }
    return 0;
}
int cmd_q (string arg){
    /*      
        iostream's iterator, treats the stream as an array.

        for istream_iterator, trying to dereferrence it will get the input from the associated stream
        for ostream_iterator, assigning value to it will send that value to the stream
    */
    ostream_iterator<string> out(cout);
    *out++ = Green("Goodbye😀\n");
    SDL_Exit();
    __asm__ volatile(
        "movl $60,  %eax\n\t"
        "xorl %edi, %edi\n\t"
        "syscall\n"
    );

    return 114514;
}

int cmd_i(string arg) {
    memcpy((void *)&state, (void *)&top -> io_regs_0, 32 * sizeof(uint64_t));
    for(int i = 0; i < 32; i++){
        printf("\033[1;33m[%3s] = %-16lx%c\033[0m", regs[i], state.gpr[i], i & 0b1? '\n' : '\t');
    }
    cout << endl << endl;;
    cout << _pink << "mepc:      " << top->io_csrData_epc  <<  normal << endl;
    cout << _pink << "mtvec:     " << top->io_csrData_tvec << normal << endl;
    cout << _pink << "mcause:    " << top->io_csrData_cause << normal << endl;
    cout << _pink << "mstatus:   " << top->io_csrData_status << normal << endl;
    cout << endl;
    return 0;
}

int cmd_b(string arg){
    uint64_t addr;
    sscanf(arg.c_str(), "%lx", &addr);
    while(1)
    {
        if(top -> io_pc_o == addr)
            break;
        cout << "pc = " << top -> io_pc_o << endl;
        cmd_s("1");
    }
    return 0;
}