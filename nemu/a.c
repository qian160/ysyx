#include<stdio.h>


int main()
{
	static const int array[] = {&&foo - &&foo, &&bar - &&foo, &&hack - &&foo};
	goto * (&&foo + array[2]);
	printf("[%s %d %s]\n", __FILE__, __LINE__, __func__);
foo:
	puts("foo");
	while(1);
bar:
	puts("bar");
	while(1);
hack:
	puts("hack");
	while(1);
}
