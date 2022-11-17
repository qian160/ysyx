#include "trap.h"
#define SIZEX 1024
#define SIZEY 128

volatile int a[SIZEY][SIZEX] __attribute__((unused));
int main() {
	// size = 4B x 1024 x 1024 = 4MB
	for(int i = 0; i < SIZEX; i++){
		for(int j = 0; j < SIZEY; j++)
			a[j][i] = rand();
	}
	printf("%d\n", a[114][51]);
        return 0;
}

