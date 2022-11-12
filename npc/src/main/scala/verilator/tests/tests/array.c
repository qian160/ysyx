#include "trap.h"

int main() {

	int a[1024][1024];
	for(int i = 0; i < 1024; i++){
		for(int j = 0; j < 1024; j++){
			a[j][i] = i + j;
	}
	// data cache should catch bad hit rate
        return 0;
}

