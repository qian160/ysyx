#include"include/common.h"
#include"include/macro.h"
#include"include/sdb.h"

#include<verilated_vcd_c.h>
#include"verilated_dpi.h"
#include"VTOP__Dpi.h"

#include<signal.h>

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

static inline cmd_info get_cmd()
{		
	string s;
	getline(cin, s);
	s.erase(0, s.find_first_not_of(" "));	//remove the leading spaces

	return cmd_info{
		.name = s[0],
		.args = s.substr(1, s.size())
	};
}

extern int init_device();
extern uint64_t nr_inst;
extern uint64_t valid_inst;

void my_exit(int sig)
{
	SDL_Exit();
	uint64_t & nr_branch = top -> io_nr_branch_o;
	uint64_t & nr_taken  = top -> io_nr_taken_o;
	cout.setf(ios_base::dec, ios_base::basefield);
	cout << endl;
	cout << Green("total insts: ") << nr_inst << endl; 
	cout << Green("        ipc: ") << (double)valid_inst / (double)nr_inst << endl;
	cout << Green("branch rate: ") << (double)nr_taken / (double)nr_branch <<" (" << nr_taken << " / " << nr_branch << ")" << endl;
	cout << Green("bp accuracy: ") << endl;
	//todo: add cache hit rate, branch predictor accuracy
	exit(0);
    __asm__ volatile(
        "movl $60,  %eax\n\t"
        "xorl %edi, %edi\n\t"
        "syscall\n"
    );
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
	tb.trace("./wave.vcd");
	while(!Verilated::gotFinish()){
		// IF's pc
		cout << _green << "(0x" << top -> io_pc_o << ")" << normal;
		cmd_info cmd = get_cmd();
		if(!cmd.name) continue;

		if(cmd_table.find(cmd.name)!= cmd_table.end())
			cmd_table[cmd.name].handler(cmd.args);
		else
			cout << "unsupported command " << "'" << cmd.name << "'" << endl;
	}
	my_exit(114514);
}