#include<verilated.h>
#include<Vadd1_full.h>
#include<iostream>

Vadd1_full * top = new Vadd1_full("top");
vluint64_t TIME = 0;
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
	top -> a = rand() & 1;
	top -> b = rand() & 1;
	top -> c = rand() & 1;
	top -> eval();
	printf("a = %d b = %d c = %d s = %d cnext= %d\n",\
	    top -> a,top -> b, top ->c ,top -> s, top -> cnext );
}

int main()
{
	while(TIME++ <= 20)
	{
		step();
	}
}
