#include<stdio.h>
int main()
{
	for(int i =0; i< 7; i++)	
	{
		printf("i = %d, width = %d\n", i, 1 << (i & 0b11));
	}
}
