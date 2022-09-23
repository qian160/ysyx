#include<verilated.h>
#include<VTOP.h>
#include<iostream>
#include<fstream>
#include<verilated_vcd_c.h>

#define EBREAK 0x100073
using namespace std;

bool check_bound(uint64_t addr);

VTOP * top = new VTOP("top");
VerilatedVcdC * tfp = new VerilatedVcdC;
vluint64_t TIME = 0;
uint32_t mem[0x800];	//seems that it can't be too large....

uint32_t readl(uint64_t addr)
{
	return mem[(addr - 0x80000000) >> 2];
}

uint32_t init(){
	ifstream in;
	in.open("./asm/inst_rom");
	if(in.fail()){
		cout << "can't open inst_rom\n" << endl;
		exit(114514);
	}
	int n = 0;
	while(!in.eof())
		in >> hex >> mem[n++];
	if(n)n--;
	cout << n << " instructions found" << endl << endl;
	top -> io_pc_i = 0x80000000;	
	top -> clock = 0;
	in.close();
	return n;
}

void step()
{
	top -> clock = (top -> clock + 1) % 2;
	top -> eval();
	if(top -> clock){	//at rising edge
		top->io_inst_i = readl(top -> io_pc_i);
		top -> eval();

		uint32_t inst = top -> io_inst_i;
		uint64_t pc   = top -> io_pc_i;
		uint64_t src1 = top -> io_src1;
		uint64_t src2 = top -> io_src2;

		if(inst == EBREAK){
			cout << "ebreak" << endl;
			exit(0);
		}

		printf("inst = %08x, pc = 0x%lx, src1 = 0x%lx, src2 = 0x%lx\n", \
			inst, pc, src1, src2);
		std::cout << "wdata = " << hex << top -> io_o << std::endl;
		top -> io_pc_i += 4;
	}
}

int main(int argc, char **argv)
{
	Verilated::commandArgs(argc, argv);
	uint32_t n = init() << 1;
	while(n--)
	{
		step();
	}

}

