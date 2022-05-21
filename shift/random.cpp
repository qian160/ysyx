#include<nvboard.h>
#include<verilated.h>
#include"Vrandom.h"
#include<verilated_vcd_c.h>

Vrandom  *top = new Vrandom("top");

void nvboard_bind_all_pins(Vrandom * top);

int main(){
	
	VerilatedVcdC * tfp = new VerilatedVcdC;
	vluint64_t TIME = 0;
  
        Verilated::traceEverOn(true);
        top -> trace(tfp,0);
        tfp -> open("wave.vcd");

	top -> clk = 0;

	nvboard_init();
	nvboard_bind_all_pins(top);
	int cnt = 0;
	while(1){
		while(cnt++<=5000);
		cnt = 0;
		top -> clk = ~ top -> clk;
		top->eval();

		nvboard_update();
	}	
}

