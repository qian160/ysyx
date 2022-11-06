#include "trap.h"

int main() {
	int loops = 100, n = 0;
	while(loops--)n++;
	check(n == 100);
	return 0;
}
