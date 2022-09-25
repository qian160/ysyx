#include"debug.h"
#include"testbench.h"
using namespace std;

VTOP * top = new VTOP("top");
vluint64_t TIME = 0;
static char * img_file = nullptr;

int main(int argc, char **argv)
{
	Verilated::commandArgs(argc, argv);
	if(argc < 2)
		cout << Yellow("no image is given, using the default inst rom\n") << endl;
	else
		img_file = strcat(test_path, strcat(argv[1], "-riscv64-npc.bin"));
	TestBench<VTOP> tb(img_file);
	tb.reset();
	tb.trace("./wave.vcd");
	while(!Verilated::gotFinish())
	{
		tb.tick();
	}
}