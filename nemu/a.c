#include<stdio.h>
#include<stdint.h>
#include<string.h>

#define s(a,b) 1

size_t strlen(const char *s) {
  size_t len = 0;
  if(!s) return 0;
  while(*s++)len++;
  return len;
  // \0 is not counted
  //panic("Not implemented");
}

int strcmp(const char *s1, const char *s2) {
  if(!s1 || !s2)  {
    if(!s1 && s2) return *s2;
    else if(!s2 && s1) return *s1;
    else return 0;    ///both NULL, seems to be equal?...
  }
  while (*s1){
  // if characters differ, or end of the second string is reached
    if (*s1++ != *s2++) break;
  }
  // return the ASCII difference after converting `char*` to `unsigned char*`
  return *s1 - *s2;
}


int strncmp(const char *s1, const char *s2, size_t n) {
  if(n == 0) {
  	return 1;
  }
  if(n > strlen(s1) || n > strlen(s2)){
	return 1;
  }
  if(!s1 || !s2)  {
    if(!s1 && s2) return *s2;
    else if(!s2 && s1) return *s1;
    else return 0;    ///both NULL, seems to be equal?...
  }
  while (*s1 && n--){
  // if characters differ, or end of the second string is reached
    if (*s1 != *s2) break;
    s1 ++;
    s2 ++;
  }
  // return the ASCII difference after converting `char*` to `unsigned char*`
  return *s1 - *s2;
}



int main()
{
	char * s1 = "hello",  * s2 = "hello";
	char * s3 = "hell1o", * s4 = "hello";
	char * s5 = NULL,     * s6 = "";
	char * s7 = NULL,     * s8 = "hello";

	printf("%d : %d\n", strncmp(s1,s2, 1), strcmp(s1, s2));
	printf("%d : %d\n", strncmp(s3,s4, 4), strcmp(s3, s4));
	printf("%d : %d\n", strncmp(s5,s6, 5), strcmp(s5, s6));
	printf("%d : %d\n", strncmp(s7,s8, 6), strcmp(s7, s8));
}
