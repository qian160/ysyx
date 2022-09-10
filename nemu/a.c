#include<stdio.h>
#include<stdarg.h>
#include<stdint.h>
//neg
//
int strcmp(const char *s1, const char *s2) {
  if(!s1 || !s2)  {
    if(!s1 && s2) return *s2;
    else if(!s2 && s1) return *s1;
    else return 0;    ///both NULL, seems to be equal?...
  }
  while (*s1){
  // if characters differ, or end of the second string is reached
    if (*s1 != *s2) break;
    s1 ++;
    s2 ++;
  }
  // return the ASCII difference after converting `char*` to `unsigned char*`
  return *s1 - *s2;
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

void strrev(char *arr, int start, int end)
{
    char temp;

    if (start >= end)
        return;

    temp = *(arr + start);
    *(arr + start) = *(arr + end);
    *(arr + end) = temp;

    start++;
    end--;
    strrev(arr, start, end);
}

char *itoa(int number, int base)  //10, 16
{
  char * arr = (char *)malloc(32);
    int i = 0, r, negative = 0;

    if (number == 0)
    {
        arr[i] = '0';
        arr[i + 1] = '\0';
        return arr;
    }

    if (number < 0)
    {
        number *= -1;
        negative = 1;
    }

    while (number != 0)
    {
        r = number % base;
        arr[i++] = (r > 9) ? (r - 10) + 'a' : r + '0';
        number /= base;
    }

    if (negative)
    {
        arr[i] = '-';
        i++;
    }

    strrev(arr, 0, i - 1);

    arr[i] = '\0';

    return arr;
}


int sprintf(char *out, const char *fmt, ...) {
  *out = '\0';
  int n = 0;    //number of bytes put into out
  va_list l;
  va_start(l, fmt);
  int d;
  char c, *s;
  char temp[1];
  while(*fmt){
    switch (*fmt++)
    {
      case 's':
        s = va_arg(l, char *);
        out = strcat(out, s);
        break;
      case 'd':
        d = va_arg(l, int);
        char * decNum = itoa(d, 10);
        out = strcat(out, decNum);
        break;
	case '%': break;
      default: 
        temp[0] = *(fmt - 1);
        strcat(out, temp);
    }
  }
  va_end(l);
  return n;
}

char buf[128];

void check(int cond){
	if(!cond){
		printf("bad\n");
		while(1);
	}
}

int main() {
        sprintf(buf, "%s", "Hello world!\n");
        printf("%d\nbuf = %s\n", __LINE__, buf);
//	check(strcmp(buf, "Hello world!\n") == 0); 

        sprintf(buf, "%d + %d = %d\n", 1, 1, 2); 
        printf("%d\nbuf = %s\n", __LINE__, buf);
//        check(strcmp(buf, "1 + 1 = 2\n") == 0); 

        sprintf(buf, "%d + %d = %d\n", 2, 10, 12);
        printf("%d\nbuf = %s\n", __LINE__, buf);
//        check(strcmp(buf, "2 + 10 = 12\n") == 0); 

        return 0;
}

