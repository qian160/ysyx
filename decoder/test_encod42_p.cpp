#include<verilated.h>
#include<verilated_vcd_c.h>
#include"Vencode42_p.h"
#include<iostream>
using namespace std;

vluint64_t TIME;
Vencode42_p * top = new Vencode42_p("top");
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
        top -> x = rand() & 15;
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
		printf("x = %d en = %d y = %d\n",top->x,top->en,top->y);	
	}

}

