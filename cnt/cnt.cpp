#include<verilated.h>
#include<Vcnt.h>
#include<iostream>
#include<nvboard.h>

Vcnt * top = new Vcnt("top");
void nvboard_bind_all_pins(Vcnt * top);
int main()
{
	nvboard_init();
	nvboard_bind_all_pins(top);
	int clk= 0;
	while(1) {
		clk = (clk + 1) % 2;
		top -> clk = clk;
		top -> eval();
		nvboard_update();
//		std::cout<<top->f[0]<<std::endl;
	}
}
