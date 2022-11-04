#include"trap.h"

int main()
{
	char * s1 = "114514";
	char * s2 = "-1919810";

	int v1 = atoi(s1);
	int v2 = atoi(s2);

	char * s3 = (char *)malloc(24);
	strncpy(s3, s1, 4);

	printf("%d\n%d\n%s\n", v1, v2, s3);
}
