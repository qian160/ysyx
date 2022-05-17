#include<nvboard.h>
#include<verilated.h>
#include"Vseg7.h"

vluint64_t TIME;
Vseg7 * top = new Vseg7("top");

void nvboard_bind_all_pins(Vseg7 * top);

void initialize()
{
	nvboard_init();
	nvboard_bind_all_pins(top);
	Verilated::traceEverOn(true);
	top -> clk = 0;
}

int main(){
	initialize();
	while(1)
	{
		top->clk = 1;
		top->eval();
		top -> clk = 0;
		top -> eval();
		nvboard_update();
	}
}

