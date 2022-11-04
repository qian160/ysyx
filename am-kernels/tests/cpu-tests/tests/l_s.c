#include "trap.h"

int main() {
	__asm__ volatile(
		"auipc a0, 0  \t\n"
		"addi a0, a0, -16 \t\n"
		"ld x1, 0(a0) \t\n"
		"sd x1, 0(a0) \t\n"
	);
	return 0;
}
