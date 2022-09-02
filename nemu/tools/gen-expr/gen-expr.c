#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static int index = 0;
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";
void gen_num()
{
	int length = rand() % 10;
	int i = length;
	while(i--)
	{
		buf[index] = rand() % 10 + '0';		//bug: start at 0
	}
}

void gen_left(){
	buf[index++] = '(';
}

void gen_op()
{
	char * op ={'+', '-', '*', '/'};
	int idx = rand() % 4;
	buf[index++] = op[idx];
}

void gen_right()
{
	buf[index++] = ')';
}

static void gen_rand_expr() {
	int r = rand() % 3;
	switch(r)
	{
		case(0):gen_num();break;
		case(1):gen_left();gen_rand_expr();gen_right();break;
		case(2);gen_rand_expr();gen_op();gen_rand_expr();break;
	}
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
