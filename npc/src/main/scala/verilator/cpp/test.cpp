#include"include/common.h"
#include"include/macro.h"
#include"include/sdb.h"

extern char logo[];

#include<verilated_vcd_c.h>
#include"verilated_dpi.h"
#include"VTOP__Dpi.h"

#include<signal.h>
#include<iomanip>

using namespace std;

extern VTOP * top;

extern void SDL_Exit();

vluint64_t TIME = 0;
unique_ptr<string> img_file(nullptr);
TestBench<VTOP> tb;				//the test class, contains members
extern void init_difftest();
VTOP * top = tb.getModule();	//the dut module, contains ports

typedef  struct{
	char name;
	string args;
}cmd_info;

static inline unique_ptr<cmd_info> get_cmd() 
{		
	string s;
	getline(cin, s);
	s.erase(0, s.find_first_not_of(" "));	//remove the leading spaces

	if(s.length() == 0) return nullptr;
	unique_ptr<cmd_info> info (make_unique<cmd_info>(cmd_info{
		.name = s[0],
		.args = s.substr(1, s.size()),
	}));
	return info;
}

extern int init_device();
extern uint64_t nr_inst;
extern uint64_t nr_stall;
extern uint64_t nr_flush;
extern uint64_t valid_inst;

using ld = long double;
void my_exit(int sig) 
{
	//SDL_Exit();
	uint64_t & nr_branch  	 = top -> io_statistics_o_branch_cnt;
	uint64_t & nr_taken   	 = top -> io_statistics_o_taken_cnt;
	uint64_t & nr_success 	 = top -> io_statistics_o_bp_success_cnt;
	uint64_t & nr_icache_hit = top -> io_statistics_o_icache_hit_cnt;
	uint64_t & nr_dcache_hit = top -> io_statistics_o_dcache_hit_cnt;
	uint64_t & nr_load 		 = top -> io_statistics_o_load_cnt;
	cout.setf(ios_base::dec, ios_base::basefield);
	cout << setprecision(8) << endl;
	cout << Green("total insts: ") << nr_inst << endl; 
	cout << Green("stall times: ") << nr_stall << endl; 
	cout << Green("flush times: ") << nr_flush << endl; 
	cout << Green("        ipc: ") << (ld)valid_inst / (ld)nr_inst << endl;
	cout << Green("branch rate: ") << (ld)nr_taken   / (ld)nr_branch << " (" << (ld)nr_taken   << " / " << (ld)nr_branch << ")" << endl;
	cout << Green("bp accuracy: ") << (ld)nr_success / (ld)nr_branch << " (" << (ld)nr_success << " / " << (ld)nr_branch << ")" << endl;
	cout << Green("I-Cache hit: ") << (ld)nr_icache_hit / (ld)nr_inst << " (" << (ld)nr_icache_hit << " / " << (ld)nr_inst << ")" << endl;
	cout << Green("D-Cache hit: ") << (ld)nr_dcache_hit / (ld)nr_load << " (" << (ld)nr_dcache_hit << " / " << (ld)nr_load << ")" << endl;
	//todo: add cache hit rate, branch predictor accuracy
	exit(0);
    __asm__ volatile(
        "movl $60,  %eax\n\t"
        "xorl %edi, %edi\n\t"
        "syscall\n"
    );
	exit(0);
}

int main(int argc, char **argv) 
{
	Verilated::commandArgs(argc, argv);
	signal(SIGINT, my_exit);
	if(argc < 2){
		cout << Yellow("no image is given, using the old inst rom\n") << endl;
		img_file.reset(new DEFAULT_IMG);
	}
	else
		img_file.reset(new string(TEST_PATH + string(argv[1]) + string("-riscv64-npc.bin")));
	tb.reset();
	IFDEF(TRACE_EN, tb.trace("./wave.vcd"));		//consumes too much memory
	IFDEF(DIFFTEST_ENABLE, init_difftest());		//almost impossible to use now...
	IFDEF(HAS_DEVICE, init_device());
	cout << endl << logo << endl << endl;
	tb.trace("./wave.vcd");
	while(!Verilated::gotFinish()){
		// IF's pc
		cout << _green << "(0x" << top -> io_pc_o << ")" << normal;
		unique_ptr<cmd_info> cmd = get_cmd();
		if(!cmd) continue;
		cmd -> name |= 0x20;
		if(cmd_table.find(cmd -> name)!= cmd_table.end())
			cmd_table[cmd -> name].handler(cmd ->args);
		else
			cout << "unsupported command " << "'" << cmd -> name << "'" << endl;
	}
	my_exit(114514);
}