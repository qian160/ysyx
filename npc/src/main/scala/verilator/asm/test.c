__attribute__((noinline))
void halt(int code) {
    __asm__ volatile("mv a0, %0; ebreak" : :"r"(code));
}

int main()
{
	int j = 4;
	int i = 4;
	halt(i - j);
	return 0;
}
