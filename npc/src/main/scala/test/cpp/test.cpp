#include<verilated.h>
#include<VTOP.h>
#include<iostream>
#include<fstream>
#include<verilated_vcd_c.h>
using namespace std;

bool check_bound(uint64_t addr);

VTOP * top = new VTOP("top");
VerilatedVcdC * tfp = new VerilatedVcdC;
vluint64_t TIME = 0;
uint32_t mem[0x800];	//seems that it can't be too large....

uint32_t readl(uint64_t addr)
{
	return mem[addr - 0x80000000];
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
	cout << n << " instructions found" << endl;
	top -> io_pc_i = 0x80000000;	
	in.close();
	return n;
}

void step()
{
	top->io_inst_i = readl(top->io_pc_i);
	std::cout << "inst = " << hex << top -> io_inst_i << std::endl;
	top -> eval();
	std::cout << "$a0 = " << hex << top -> io_o << std::endl;
}

int main(int argc, char **argv)
{
	uint32_t n = init();
	while(n--)
	{
		step();
	}

}

