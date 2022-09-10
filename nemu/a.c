#include<stdio.h>
#include<stdarg.h>
#include<stdint.h>
//neg
//
char buf[128];

int atoi(const char *s){
  if(!s) return 0;
  while(*s == ' ')  s++;    //skip spaces
  char neg = 0;
  if(*s == '-'){
    neg = 1;
    s++;
  } 
  int res = 0;
  while(*s && *s != ' '){
    res *= 10;
    res += *s - '0';
    s++;
  }
  return neg? -res: res;
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

//this function won't add spaces between 2 calls, it just append
int sprintf(char *out, const char *fmt, ...) {
  *out = '\0';      //reset the buf
  int n = 0;    //number of bytes put into out
  va_list l;
  va_start(l, fmt);
  int d;
  char c __attribute__((unused)), *s;
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
      case '%': break;    //need to be improved
      default: 
        temp[0] = *(fmt - 1);
        strcat(out, temp);
    }
  }
  va_end(l);
  return n;
}


void check(int cond){
	if(!cond){
		printf("bad\n");
		while(1);
	}
}

void print(const char * s)
{
	while(*s++)
		putchar('.');
	putchar('\n');
}

int main() {
        sprintf(buf, "%s", "Hello world!\n");
        printf("%d\nbuf = %s\n", __LINE__, buf);
	check(strcmp(buf, "Hello world!\n") == 0); 
	print(buf);
	print("Hello World!\n");

        sprintf(buf, "%d + %d = %d\n", 1, 1, 2); 
        printf("%d\nbuf = %s\n", __LINE__, buf);
        check(strcmp(buf, "1 + 1 = 2\n") == 0); 
	print(buf);
	print("1 + 1 = 2\n");

        sprintf(buf, "%d + %d = %d\n", 2, 10, 12);
        printf("%d\nbuf = %s\n", __LINE__, buf);
        check(strcmp(buf, "2 + 10 = 12\n") == 0); 
	print(buf);
	print("2 + 10 = 12\n");

        return 0;
}

