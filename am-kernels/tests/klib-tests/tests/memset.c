#include<stdio.h>
#include"trap.h"

void reset(){
	for(int i = 0; i < N; i++){
	       data[i] = i + 1;
	}
}

void print(){
	for(int i = 0; i < N; i++){
		printf("%2d ", data[i]);
		if(((i + 1)&0b111) == 0) putchar('\n');
	}
}

int main()
{
	int l, r;
	for (l = 0; l < N; l ++) {
		for (r = l + 1; r <= N; r ++) {
			printf("l = %d, r = %d\n", l, r);
			reset();	//1 2 3 ... 64
		      	uint8_t val = (l + r) / 2;
			memset(data + l, val, r - l);
			print();
	      		check_seq(0, l, 1);
			printf("left passed\n");
	      		check_eq(l, r, val);
			printf("mid passed\n");
	      		check_seq(r + 1, N, r + 2);
			printf("right passed\n\n");
	    	}
	}
}
