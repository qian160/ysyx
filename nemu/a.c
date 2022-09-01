#include<stdio.h>

int main(int argc, char**argv){
	int result;
	sscanf(argv[1],"%x",&result);
	printf("%d\n",result);

}
