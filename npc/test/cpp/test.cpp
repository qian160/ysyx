#include<verilated.h>    
#include<VTOP.h>
#include<iostream>
#include<verilated_vcd_c.h>

using namespace std;

uint32_t mem[0x80000000];

void step(){}


int main(int argc, char *argv)
{
	VTOP * top = new VTOP("top");
	VerilatedVcdC * tfp = new VerilatedVcdC; 
	vluint64_t TIME = 0;

	std::cout<<"hello world\n";
	top->pc = 0x80000000;

}

