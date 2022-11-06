#include<stdio.h>

int z;

int t(){
	return 514;
}
int foo(){
	int temp __attribute__((unused))= t();
	return temp;
}
void bar(){
	z++;
}

int main()
{
	z = foo();
	z -= 515;
	bar();
	return z;
}
