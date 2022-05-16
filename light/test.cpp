#include<iostream>
#include<verilated.h>
#include<verilated_vcd_c.h>
#include"Vtop.h"
#include<nvboard.h>

Vtop *top = new Vtop("top");
VerilatedVcdC *tfp = new VerilatedVcdC;
vluint64_t TIME=0;

void nvboard_bind_all_pins(Vtop* top);

void show(short p)
{
	int n = 16;
	while(n--)
	{
		unsigned short t = (p & 0b1000000000000000) >> 15;
		p <<= 1;
		std::cout<<t;
	}
	std::cout<<std::endl;
}

void step()
{
	top->clk=(top->clk + 1) % 2;
	top->eval();
	tfp->dump(TIME++);
}

void reset(int n) 
{
	top->rst = 1;
	while (n -- > 0) step();
	top->rst = 0;
}

void exit_sim()
{
	tfp->close();
	top->final();
	delete top;
}

void initialize()
{
	Verilated::traceEverOn(true);
	top->trace(tfp,0);
	tfp->open("wave.vcd");
	top -> rst = 1;

}
 
int main()
{
	nvboard_bind_all_pins(top);
	nvboard_init();
	initialize();
	reset(10);
	while(1)
	{
		step();
	//	nvboard_update();
		show(top->led);
		nvboard_update();
	}
	exit_sim();
	return 0;
}
