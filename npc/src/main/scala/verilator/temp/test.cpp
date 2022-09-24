#include<verilated.h>
#include<iostream>
#include<svdpi.h>
#include<VTest.h>
#include<VTest__Dpi.h>

using namespace std;

int main(){
	VTest * top = new VTest("top");	
	int i = 0;
	while(!Verilated::gotFinish()){
		i++;
		top -> a = rand() % 256;
		top -> b = rand() % 256;
		if( i > 1145) {
			top -> panic = 1;
		}
		top -> eval();
		cout << top -> c << endl;
	}
}
