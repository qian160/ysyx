#include"debug.h"
#include"testbench.h"
#include"sdb.h"
#include<dlfcn.h>
using namespace std;

vluint64_t TIME = 0;
static char * img_file = nullptr;
TestBench<VTOP> tb;				//the test class

VTOP * top = tb.getModule();	//the dut module

bool (*difftest_checkregs)(uint64_t pc) = nullptr;
void (*difftest_regcpy)(void *dut, bool direction) = nullptr;
void (*difftest_exec)(int n) = nullptr;

int main(int argc, char **argv)
{
	Verilated::commandArgs(argc, argv);
	if(argc < 2)
		cout << Yellow("no image is given, using the default inst rom\n") << endl;
	else
		img_file = strcat(test_path, strcat(argv[1], "-riscv64-npc.bin"));
	tb.reset();
	//tb.trace("./wave.vcd");
	string s;
	const string deli = " ";

	void *handle = dlopen(diff, RTLD_LAZY);
	assert(handle);
	difftest_checkregs	=	(bool (*)(uint64_t))	 (dlsym(handle, "difftest_checkregs"));
	difftest_regcpy		=	(void (*)(void *, bool)) (dlsym(handle, "difftest_regcpy"));
	difftest_exec		=	(void (*)(int)) 		 (dlsym(handle, "difftest_exec"));
	assert(difftest_checkregs);	assert(difftest_regcpy);	assert(difftest_exec);
	while(1){
		int rnd = rand() % emojis.size();
		cout << "(😅)";
		getline(cin, s);
		s.erase(0, s.find_first_not_of(" "));	//remove the leading spaces
		int cmd_end = s.find(deli);
		char cmd  = s[0];
		if(!cmd) continue;
		string args = s.substr(1, s.size());
		int i = 0;
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
