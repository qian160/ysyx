#include"common.h"
#include<verilated_vcd_c.h>
#include"sdb.h"
using namespace std;

vluint64_t TIME = 0;
unique_ptr<string> img_file(nullptr);
TestBench<VTOP> tb;				//the test class
extern void init_difftest();
VTOP * top = tb.getModule();	//the dut module

//unique_ptr<VTOP> top(tb.getModule());

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
	//tb.trace("./wave.vcd");
	string s;
	init_difftest();
	while(1){
		cout << "(😅)";
		getline(cin, s);
		s.erase(0, s.find_first_not_of(" "));	//remove the leading spaces
		char cmd  = s[0];
		if(!cmd) continue;
		string args = s.substr(1, s.size());
		if(cmd_table.find(cmd)!= cmd_table.end()) {
			cmd_table[cmd].handler(args);
		}
		else
			cout << "unsupported command " << "'" << cmd << "'" << endl;
		if(Verilated::gotFinish())
		{
			exit(0);
		}
	}
}
