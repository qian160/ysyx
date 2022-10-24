#include"include/common.h"
#include<verilated_vcd_c.h>
#include"include/macro.h"
#include"include/sdb.h"
#include"verilated_dpi.h"
#include"VTOP__Dpi.h"
#include<svdpi.h>

using namespace std;

void vga_update(const char* s){
	cout << s << endl;
}
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

int main(int argc, char **argv)
{
	Verilated::commandArgs(argc, argv);
	if(argc < 2){
		cout << Yellow("no image is given, using the old inst rom\n") << endl;
		img_file.reset(new DEFAULT_IMG);
	}
	else
		img_file.reset(new string(TEST_PATH + string(argv[1]) + string("-riscv64-npc.bin")));
	tb.reset();
	//tb.trace("./wave.vcd");		//consumes too much memory
	IFDEF(DIFFTEST_ENABLE, init_difftest());
	IFDEF(HAS_DEVICE, init_device());
	while(1){
		cout << "(😅)";
		cmd_info cmd = get_cmd();
		if(!cmd.name) continue;

		if(cmd_table.find(cmd.name)!= cmd_table.end())
			cmd_table[cmd.name].handler(cmd.args);
		else
			cout << "unsupported command " << "'" << cmd.name << "'" << endl;
		if(Verilated::gotFinish()){
			exit(0);
		}
	}
}
