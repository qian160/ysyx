#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vmux2to1.h"

Vmux2to1 * top = new Vmux2to1("top");
VerilatedVcdC *tfp = new VerilatedVcdC;		
vluint64_t TIME = 0;

void step()
{
	int a = rand() & 1;
	int b = rand() & 1;
	int s = rand() & 1;
	top -> a = a;
	top -> b = b;
	top -> select = s;
	top->eval();	
	tfp -> dump(TIME++);
	int y = top -> y;
	printf("a = %d , b = %d , s = %d ,y = %d\n",a,b,s,y);
     	assert((s == 0 && y == a) || (s == 1 && y == b));
}

void sim_exit()
{
	tfp->close();
	top->final();
	delete top;
}

int main(int argc, char** argv, char** env) 
{
	//Verilated::commandArgs(argc,argv);
	Verilated::traceEverOn(true);		
	top->trace(tfp,0);
	tfp->open("wave.vcd");				
	while (TIME <= 20 /*&& !Verilated::gotFinish()*/) { 
		step();
		//std::cout<<"";
        }
	sim_exit();
        return 0;
}
