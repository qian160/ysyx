#include<verilated.h>
#include<verilated_vcd_c.h>
#include"Vtop.h"
#include<iostream>
using namespace std;

vluint64_t TIME;
Vtop * top = new Vtop("top");
VerilatedVcdC *tfp = new VerilatedVcdC;

void initialize()
{
	Verilated::traceEverOn(true);
	top -> trace(tfp,0);
	tfp -> open("wave.vcd");
	top -> en = 1;
}

void RAND()
{
	top -> x0 = rand() & 1;;
        top -> x1 = rand() & 1;
}
int main(){
	initialize();
	while(TIME<=20)
	{
		if(TIME<=10) top->en = 0;
		else top->en = 1;
		RAND();
		top -> eval();
		tfp -> dump(TIME++);
		printf("x0 = %d x1 = %d en = %d y = %d\n",top->x0,top->x1,top->en,top->y);	
	}
	top->final();
	delete top;
	tfp->close();
}

