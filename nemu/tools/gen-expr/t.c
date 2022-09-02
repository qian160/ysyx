#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static int idx = 0;
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format = "%d";

void gen_num()
{
	int length = rand() % 3 + 3;
	while(length--)
	{
		buf[idx++] = rand() % 9 + '1';		//bug: start at 0. so just skip 0
	}
}

void gen_left(){
	buf[idx++] = '(';
}

void gen_op()
{
	char * op = "+-*/";
	int idx_ = rand() % 4;
	buf[idx++] = op[idx_];
}

void gen_right()
{
	buf[idx++] = ')';
}

static void gen_rand_expr() {
	int r = rand() % 3;
	switch(r)
	{
		case(0):gen_num();break;
		case(1):gen_left();gen_rand_expr();gen_right();break;
		case(2):gen_rand_expr();gen_op();gen_rand_expr();break;
	}
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  gen_rand_expr();
  puts(buf);
}
