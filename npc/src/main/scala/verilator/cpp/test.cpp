#include"debug.h"
#include"testbench.h"
using namespace std;

VTOP * top = new VTOP("top");
vluint64_t TIME = 0;
static char * img_file = (char *)0;

int main(int argc, char **argv)
{
	Verilated::commandArgs(argc, argv);
	if(argc < 2)
		cout << "no image is given, use the default inst rom" << endl;
	else
		img_file = strcat(test_path, strcat(argv[1], "-riscv64-npc.bin"));
	TestBench<VTOP> tb(img_file);
	tb.reset();
	while(!Verilated::gotFinish())
	{
		tb.tick();
	}
}