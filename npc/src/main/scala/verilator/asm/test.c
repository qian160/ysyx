__attribute__((noinline))
int  check(int cond);
void halt(int code);

int _start()
{
	int loops = 100;
	int n = 0;
	while(loops--)	n++;
	if(!check(n == 100)) halt(114514);
	halt(0);
	return 0;
}

void halt(int code)
{
    asm volatile("mv a0, %0; ebreak" : :"r"(code));

}

int check(int cond)
{
	return cond? 1 : 0;
}

