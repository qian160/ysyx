#include "trap.h"

int max(int x, int y) {
	int z;
	if(x > y) { z = x; }
	else { z = y; }
	return z;
}

int test_data[] = {0, 1, 2, 0x7fffffff, 0x80000000, 0x80000001, 0xfffffffe, 0xffffffff};
int ans[] = {0, 0x1, 0x2, 0x7fffffff, 0, 0, 0, 0, 0x1, 0x1, 0x2, 0x7fffffff, 0x1, 0x1, 0x1, 0x1, 0x2, 0x2, 0x2, 0x7fffffff, 0x2, 0x2, 0x2, 0x2, 0x7fffffff, 0x7fffffff, 0x7fffffff, 0x7fffffff, 0x7fffffff, 0x7fffffff, 0x7fffffff, 0x7fffffff, 0, 0x1, 0x2, 0x7fffffff, 0x80000000, 0x80000001, 0xfffffffe, 0xffffffff, 0, 0x1, 0x2, 0x7fffffff, 0x80000001, 0x80000001, 0xfffffffe, 0xffffffff, 0, 0x1, 0x2, 0x7fffffff, 0xfffffffe, 0xfffffffe, 0xfffffffe, 0xffffffff, 0, 0x1, 0x2, 0x7fffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff};

#define NR_DATA LENGTH(test_data)

int main() {
	int i, j, ans_idx = 0;
	for(i = 0; i < NR_DATA; i ++) {
		for(j = 0; j < NR_DATA; j ++) {
			check(max(test_data[i], test_data[j]) == ans[ans_idx ++]);
		}
		check(j == NR_DATA);
	}

	check(i == NR_DATA);

	return 0;
}
/*
	line 46???????. meaningless op. maybe compiler bug
	line 53, 54: a0 should be equal to a5
	s7: <ans> before inner loop
	s8: <test_data>, fixed
	47 - 56 J-loop, 43 - 62 I-loop
	s1 -> ans_idx used in inner loop. LINE 44, and line 61, every outer loop advance the idx by 4 * 8 = 32
	s0 -> j, line 45 reset before every inner loop
	s6 -> i. line 43 and 60

	a0 -> ans[idx]
	s2 -> t[i]
	s4 = s2

	a0 -> ans[idx]
	s2 -> t[i], LINE 43, changed in outer loop and maintain the same in inner loop

	the 2nd and 3rd check will always be true, they do not control the flow, instead i and j do that. That's also why a li a0, 1 is performed before the check
  
  */
