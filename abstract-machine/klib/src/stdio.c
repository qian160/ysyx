#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

bool is_num(char c){
  return c >= '0' && c <= '9';
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

int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  char buf[1024];
  int n = vsprintf(buf, fmt, ap);
  va_end(ap);
  for(int i = 0; i < n; i++){
    putch(buf[i]);
  }
  return n;
}

//v: use va_list as argument instead of ... its behavior is same as sprintf

int vsprintf(char *out, const char *fmt, va_list ap) {
  //support %s %d %c %x 
  int n = 0;
  char *str = out;
  while(*fmt){
    if(*fmt != '%'){  //string
      *str = *fmt++;
      n++;
      str++;
      continue;
    }
    fmt++;    //fmt now points to the char after %, which could be the width or fmt

  switch (*fmt++) {
    case 's' : {
      char * t = va_arg(ap, char*);
      int len = strlen(t);
      for(int i = 0; i < len; i++) {
        *str++ = *t++;
        n++;
      }
      break;
    }
    case 'd' : {
      int n = va_arg(ap, int);
      if (n < 0) {
        n = - n;
        *str++ = '-';
        n++;
      }
      char *np = itoa(n, 10);
      n += strlen(np);
      strcpy(str, np);
      str += strlen(np);
      break;
    }
    case 'u': {
      uint32_t num = va_arg(ap, int);
      char *n = itoa(num, 10);
      strcpy(str, n);
      n   += strlen(n);
      str += strlen(n);
      break;
    }
    case 'c': {
      char c = (char)va_arg(ap, int);
      *str++ = c;
      n++;
      break;
    }
    case 'p':
    case 'x': {
      uint32_t num = va_arg(ap, uint32_t);
      char *n = itoa(num, 16);
      *str++ = '0';
      *str++ = 'x';
      strcpy(str, n);
      n   += strlen(n) + 2;
      str += strlen(n);
      break;
    }
    default :
      assert(0);
      break;
    }
  }
  *str='\0';
  return n;
}

//this function won't add spaces between 2 calls, it just append
int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int ret = vsprintf(out, fmt, ap);
  va_end(ap);
  return ret;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
