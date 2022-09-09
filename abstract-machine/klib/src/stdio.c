#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
/*
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
*/
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

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

//this function won't add spaces between 2 calls, it just append
int sprintf(char *out, const char *fmt, ...) {
  int n = 0;    //number of bytes put into out
  va_list l;
  va_start(l, fmt);
  int d;
  char c __attribute__((unused)), *s;
  while(*fmt){
    switch (*fmt++)
    {
      case 's':
        s = va_arg(l, char *);
        out = strcat(out, s);
        break;
      case 'd':
        d = va_arg(l, int);
        char * decNum = itoa(d);
        out = strcat(out, decNum);
        break;

      default: break;
    }
  }
  va_end(l);
  return n;
}
int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
