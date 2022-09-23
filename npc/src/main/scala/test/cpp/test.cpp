#include<verilated.h>    
#include<VTOP.h>
#include<iostream>
#include<verilated_vcd_c.h>

using namespace std;

bool check_bound(uint64_t addr);
uint32_t mem[128];	//seems that it can't be too large....

uint32_t readl(uint64_t addr) 
{
	return mem[addr - 0x80000000];
}
void step(){}

int main(int argc, char **argv)
{
	VTOP * top = new VTOP("top");
	VerilatedVcdC * tfp = new VerilatedVcdC; 
	vluint64_t TIME = 0;
	mem[0] = 0xfff00513;	//li a0, -1

	std::cout<<"hello world\n";
	top->io_pc_i = 0x80000000;
	top->io_inst_i = readl(top->io_pc_i);
	std::cout << "inst = " << hex << top -> io_inst_i << std::endl;
	top -> eval();
	std::cout << "$a0 = " << hex << top -> io_o << std::endl;

}

