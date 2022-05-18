#include<verilated.h>
#include<Vadd4_seq.h>
#include<iostream>
#include<verilated_vcd_c.h>

Vadd4_seq * top = new Vadd4_seq("top");
vluint64_t TIME = 0;
VerilatedVcdC *tfp = new VerilatedVcdC; 

/*
void reset(int t)
{
	top -> rst = 1;
	while(t--)
		step();
	top -> rst = 0;
}
*/
void step()
{
	top -> a = rand() % 8;
	top -> b = rand() % 8;
	top -> cin = rand() & 1;
	top -> eval();
	tfp->dump(TIME++);
	printf("a = %d b = %d cin = %d s = %d cout= %d\n",\
	    top -> a,top -> b, top ->cin ,top -> s, top -> cout);
	
}

int main()
{
	Verilated::traceEverOn(true);
        top->trace(tfp,0);
        tfp->open("wave.vcd");
	while(1)
	{
		step();
	}
}
