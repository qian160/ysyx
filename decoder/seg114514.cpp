#include<nvboard.h>
#include<verilated.h>
#include"Vseg114514.h"
using namespace std;

Vseg114514  *top = new Vseg114514("top");

void nvboard_bind_all_pins(Vseg114514 * top);

int main(){
	
	nvboard_init();
	nvboard_bind_all_pins(top);
	while(1){
		top->eval();
		nvboard_update();
	}	
}

