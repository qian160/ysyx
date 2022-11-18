#include"trap.h"

int main()
{
	asm volatile(
		"li x10, 8\n"
	        "slli x10, x10, 28\n"
	        "li x1, 1\n"
	        "li x2, 3\n"
	        "sb x1, 0(x10)  # 1 -> [0x80000000]\n"
	        "lb x2, 0(x10)\n"
	        "sub a0, x1, x2\n"
	        "ebreak\n"
	);
}
