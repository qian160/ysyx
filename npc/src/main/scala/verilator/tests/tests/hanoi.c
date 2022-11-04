#include"trap.h"

//move an n-level towel from 'from' to 'to' through 'mid'
void hanoi(int n, char from, char mid, char to)
{
	if(n == 1)
	{
		printf("%c -> %c\n", from, to);
	}
	else
	{
		hanoi(n - 1, from, to, mid);
		hanoi(1, from, mid, to);
		hanoi(n - 1, mid, from, to);
	}
}

int main()
{
	//minimal steps = 2 ^ n - 1
	hanoi(5, 'A', 'B', 'C');
}
