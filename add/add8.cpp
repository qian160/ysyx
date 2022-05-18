#include<verilated.h>
#include<Vadd8.h>
#include<iostream>
#include<verilated_vcd_c.h>
#include<assert.h>

Vadd8 * top = new Vadd8("top");
vluint64_t TIME = 0;
VerilatedVcdC * tfp = new VerilatedVcdC; 

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
	top -> a = rand() % 256;
	top -> b = rand() % 256;
	top -> cin = rand() & 1;
	top -> eval();
	printf("a = %d b = %d cin = %d s = %d cout = %d\n",\
	    top -> a,top -> b, top ->cin ,top -> s, top -> cout);
//	assert(top -> a + top -> b + top -> cin + (top -> cout) << 8 == top -> s);
}

int main()
{
	Verilated::traceEverOn(true);
        top->trace(tfp,0); 
    	tfp->open("wave.vcd");

	while(1)
	{
		step();
		tfp -> dump(TIME++);
	}
}
