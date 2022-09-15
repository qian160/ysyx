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
  return 0;
  //panic("Not implemented");
}

//v: use va_list as argument instead of ... its behavior is same as sprintf

int vsprintf(char *out, const char *fmt, va_list ap) {
  //support %s %d %c %x 
  char *str = out;
  while(*fmt){
    if(*fmt != '%'){
      *str = *fmt++;
      str++;
      continue;
    }
    fmt++;    //fmt now points to the char after %, which could be the width or fmt

  //check if it's a number
  //char * format_begin = fmt;
  //char * format_end = fmt; 
  /*
  while (is_num(*fmt)) {
    format_end ++;
    fmt ++;
  }
  */
  //int format_len = get_format_length(format_begin, format_end);

  switch (*fmt++) {
    case 's' : {
      char * t = va_arg(ap, char*);
      int len = strlen(t);
      for(int i = 0; i < len; i++) {
        *str++ = *t++;
      }
      break;
    }
    case 'd' : {
      long int n = va_arg(ap, int);
      if (n < 0) {
        n = - n;
        *str++ = '-';
      }
      //uint32_t num = (uint32_t)n;
      char *np = itoa(n, 10);
      //int i = num_2_10str(num_str, num);
      //if ( i < format_len) {
      //  memset(str, ' ', format_len - i);
      //  str += format_len - i;
      //}
      strcpy(str, np);
      str += strlen(np);
      break;
    }
    case 'u': {
      uint32_t num = va_arg(ap, int);
      char *n = itoa(num, 10);
      //int i = num_2_10str(num_str, num);
      //if ( i < format_len) {
      //  memset(str, ' ', format_len - i);
      //  str += format_len - i;
      //}
      strcpy(str, n);
      str += strlen(n);
      break;
    }
    case 'c': {
      char c = (char)va_arg(ap, int);
      *str++ = c;
      break;
    }
    case 'p':
    case 'x': {
      uint32_t num = va_arg(ap, uint32_t);
      char *n = itoa(num, 16);
      //int i = num_2_16str(num_str, num);
      //if ( (i + 2) < format_len) {
      //  memset(str, ' ', format_len - i - 2 );
      //  str += format_len - i -2 ;
      //}
      *str++ = '0';
      *str++ = 'x';
      strcpy(str, n);
      str += strlen(n);
      break;
    }
    default :
      // printf("%c\n", --fmt);
      assert(0);
      break;
    }
  }
  *str='\0';
  return 0;
}

//this function won't add spaces between 2 calls, it just append
int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int ret = vsprintf(out, fmt, ap);
  va_end(ap);
  return ret;

  /* the code below is my implementation,  but it doesn't work in nemu...
  //strcpy and strcat ?
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
  */
}
int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
