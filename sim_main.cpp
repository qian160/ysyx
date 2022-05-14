#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vour_OnOff.h"
vluint64_t TIME = 0;
int main(int argc, char** argv, char** env) {
	//Verilated::commandArgs(argc,argv);
	Vour_OnOff * top = new Vour_OnOff("top");
	VerilatedVcdC *tfp = new VerilatedVcdC;		//class for wave support
	Verilated::traceEverOn(true);			//turn on tracing
	top->trace(tfp,0);
	tfp->open("wave.vcd");				//set output file,used for gtkwave
	while (TIME <= 20 /*&& !Verilated::gotFinish()*/) { 
		int a = rand() & 1;
		int b = rand() & 1;
		top -> a = a;
		top -> b = b;
	     	top->eval();	
      		printf("a = %d , b = %d , c = %d\n",a,b,top->c);
      		assert(top -> c == a ^ b);
		tfp -> dump(TIME++);
      }
      top->final();
      tfp->close();
      delete top;
      return 0;
}
