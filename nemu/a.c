#include<stdio.h>
#include<stdint.h>

char *my_strcat(char *dst, const char *src) {
  if(!dst || !src){
    printf("null\n");
    return NULL;
  }
    // make `ptr` point to the end of the destination string
    char* ptr = dst + strlen(dst);
 
    // appends characters of the source to the destination string
    while (*src != '\0') {
        *ptr++ = *src++;
    }
    // null terminate destination string
    *ptr = '\0';
 
    // the destination is returned by standard `strcat()`
    return dst;
}

int main()
{
	char * s1 = "hello";
	char * s2 = "world";
	char * str = (char*)calloc(100, 1);
	printf("%s\n", my_strcat(str, "hello"));
	printf("%s\n", my_strcat(s1, s2));
}
