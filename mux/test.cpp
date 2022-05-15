
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vmux41_2.h"

Vmux41_2 * top = new Vmux41_2("top");
VerilatedVcdC *tfp = new VerilatedVcdC;		
vluint64_t TIME = 0;	//uint64_t

void show()
{
}

void initialize()
{
	top -> y  = 0b00; 
	top -> x0 = 0b00;
	top -> x1 = 0b01;
	top -> x2 = 0b10;
	top -> x3 = 0b11;

}
void step()
{
	top->eval();	
	printf("x0 = %d , x1 = %d , x2 = %d ,x3 = %d , y = %d ,f = %d\n",\
		top->x0,top->x1,top->x2,top->x3,top->y,top->f);
//     	assert((s == 0 && y == a) || (s == 1 && y == b));
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
	initialize();
	while (TIME <= 20 /*&& !Verilated::gotFinish()*/) { 
		step();
		tfp -> dump(TIME++);
		top -> y = ((top -> y )+1) % 4 ; 

		//std::cout<<"";
    }
	sim_exit();
    return 0;
}
