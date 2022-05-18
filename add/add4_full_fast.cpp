#include<verilated.h>
#include<Vadd4_full_fast.h>
#include<iostream>
#include<assert.h>

Vadd4_full_fast * top = new Vadd4_full_fast("top");
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
	//4 bits range:0 - 15
	top -> a = rand() % 16;
	top -> b = rand() % 16;
	top -> cin = rand() & 1;
	top -> eval();
	printf(" %d + %d + %d = %d\n cout = %d\n ",\
	    top -> a,top -> b, top -> cin, top -> s, top -> cout);
//	assert(top -> a + top -> b + top -> cin == top -> s);
	
}

int main()
{
	while(1)
	{
		step();
	}
}
