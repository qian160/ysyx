#include<stdio.h>
#include<stdint.h>
int64_t SEXT(int64_t val, int width)
{
/*
	struct {
		int64_t a : width;
	}_t = {.a = val};
	return _t.a;
*/
	
	return
	({printf("aaaa\n");114;});
}

int main()
{
	int i = ({ printf("111\n"); 114;514;});
	__uint128_t a = (__uint128_t)1 << 114;
	printf("%ld\n", SEXT(1,1));

}
