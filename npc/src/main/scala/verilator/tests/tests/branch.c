#include"trap.h"

int main()
{
	int z = 114;
	if(z > 1)
	{
		z = 0;
	}
	else 
		z = 1;
	halt(z);
}
