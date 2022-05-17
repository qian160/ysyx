#include<nvboard.h>
#include<verilated.h>
#include<verilated_vcd_c.h>
#include"Vseg7.h"
#include<iostream>
using namespace std;

vluint64_t TIME;
Vseg7 * top = new Vseg7("top");
VerilatedVcdC *tfp = new VerilatedVcdC;

void nvboard_bind_all_pins(Vseg7 * top);

void initialize()
{
	nvboard_init();
	nvboard_bind_all_pins(top);
	Verilated::traceEverOn(true);
	top -> trace(tfp,0);
	tfp -> open("wave.vcd");
}

void RAND()
{
//	top -> bcd = rand() % 6;
	top -> bcd = 6;
}
int main(){
	int cnt = 0;
	initialize();
	while(1)
	{
		if(cnt==10000000){
			RAND();
			top->eval();
			nvboard_update();
			printf("bcd = %x h = %x\n",top->bcd,top->h);
			cnt = 0;
		}
		else cnt++;
	}
	top->final();
	delete top;
	tfp->close();
}

