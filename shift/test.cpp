#include<verilated.h>
#include"Vbarrel_shifter.h"
#include<iostream>
#include<verilated_vcd_c.h>

Vbarrel_shifter * top = new Vbarrel_shifter("top");
VerilatedVcdC * tfp = new VerilatedVcdC;
vluint64_t TIME = 0;

int main()
{
        Verilated::traceEverOn(true);
        top -> trace(tfp,0);
        tfp -> open("wave.vcd");

//a_l  l_r  data  shift  result
while(1){
	top -> data = (signed)0b10000000;

//	printf("input is %d\n",top -> data);
	
	top -> a_l = 0; 

	top -> shift = 4;   //shift right 4 logically

	top -> eval();

	tfp -> dump(TIME++);
//	printf("result is %d\n",top -> result);
}
}
