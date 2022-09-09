#include<stdio.h>
#include<string.h>
#include<stdarg.h>
#include<stdint.h>

int64_t atoi(char *s){
  if(!s) return 0;
  while(*s == ' ')  s++;    //skip spaces
  char neg = 0;
  if(*s == '-'){
    neg = 1;
    s++;
  } 
  int64_t res = 0;
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


int sprintf(char *out, const char *fmt, ...) {
  int n = 0;    //number of bytes put into out
  va_list l;
  va_start(l, fmt);
  int d;
  char c, *s;
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

      default: break;
    }
  }
  va_end(l);
  return n;
}


int main()
{
	char * s = (char *)malloc(30);
	sprintf(s, "%d %d", 114, 514);
	puts(s);
}
