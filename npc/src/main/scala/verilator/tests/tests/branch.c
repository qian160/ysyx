#include"trap.h"

int main()
{
	int z = 114;
	if(z > 1)
	{
		halt(0);
	}
	else 
		halt(1);
	while(1);
}
