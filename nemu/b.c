#include<stdio.h>
#include<stdint.h>

int main()
{
	char buf1[128];
	char *s1 = "hello", * s2 = "world";

	int i = ({ printf("111\n"); 114;514;});
	__uint128_t a = (__uint128_t)1 << 114;
	char *fmt = "%d %d";
	char * buf2 = (char *)calloc(100, 1);
	strcat(buf1, s1);
	strcat(buf1, s2);
	printf("buf1 = %s\n", buf1);
	sprintf(buf2, fmt, 114, 514);
	puts(buf2);
}
