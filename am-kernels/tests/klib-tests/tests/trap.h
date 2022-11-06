#ifndef __TRAP_H__
#define __TRAP_H__

#include <am.h>
#include <klib.h>
#include <klib-macros.h>

__attribute__((noinline))
void check(bool cond) {
  if (!cond) halt(1);
}

#define N 64
uint8_t data[N];

void check_seq(int l, int r, int val)
{	//for memset, init val = data[l] + 1
	for (int i = l; i < r; i ++) {
		assert(data[i] == val + i - l);
	}

}

void check_eq(int l, int r, int val) {
  	int i;
  	for (i = l; i < r; i ++) {
    		assert(data[i] == val);
  	}
}

#endif
