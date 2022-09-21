#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

/*
        the va_arg(ap, ptr) is a macro, during a afunction call, variable arguments will be pushed
      onto stack, and this macro sets ap to point at the address above ptr, which is the last non-variable argument

*/

size_t strlen(const char *s) {
  size_t len = 0;
  if(!s) return 0;
  while(*s++)len++;
  return len;
  // \0 is not counted
}

char *strcpy(char *dst, const char *src) {

// return if no memory is allocated to the dst
  if (dst == NULL) {
      return NULL;
  }
  // take a pointer pointing to the beginning of the dst string
  char *ptr = dst;

  // copy the C-string pointed by src into the array
  // pointed by dst
  while (*src != '\0')
    *dst++ = *src++;

  // include the terminating null character
  *dst = '\0';

  // the dst is returned by standard `strcpy()`
  return ptr;

}

char *strncpy(char *dst, const char *src, size_t n) {
  // return if no memory is allocated to the dst
  if (dst == NULL )
    return NULL;

  printf("n = %d\n", n);

  // take a pointer pointing to the beginning of the dst string
  char* ptr = dst;
  // copy first `num` characters of C-string pointed by src
  // into the array pointed by dst
  if(strlen(dst) < n)
    return dst;
  while (*(char *)src && n--)
    *dst++ = *src++;

  // null terminate dst string 
//  *dst = '\0';

  // the dst is returned by standard `strncpy()`
  return ptr;
}

char *strcat(char *dst, const char *src) {
  assert(dst);
  assert(src);
  // make ptr point to the end of the dst string
  char* ptr = dst + strlen(dst);

  // appends characters of the src to the dst string
  while (*src != '\0') {
      *ptr++ = *src++;
  }   
  // null terminate dst string
  *ptr = '\0';

  return dst;

}
//strcmp may cause segmentation fault
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

int strncmp(const char *s1, const char *s2, size_t n) {
  if(n == 0) {
    return 1;
  }
  if(n > strlen(s1) || n > strlen(s2)) {
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

void *memset(void *s, int c, size_t n) {
  //seems that n can be larger than sizeof(s), no check is needed
  unsigned char * p = s;
    while(n--)
      *p++ = (unsigned char)c;
    return s;
}
//can overlap, will generate a temp sapce to avoid overlap
void *memmove(void *dst, const void *src, size_t n) {
  //restore the original dst, don't use that pointer
  char *pDest = (char *)dst;
    const char *pSrc =( const char*)src;
    //allocate memory for tmp array
    char *tmp  = (char *)malloc(sizeof(char ) * n);
    if(NULL == tmp)
    {
        return NULL;
    }
    else
    {
        unsigned int i = 0;
        // copy src to tmp array
        for(i =0; i < n ; ++i)
        {
            *(tmp + i) = *(pSrc + i);
        }
        //copy tmp to dest
        for(i =0 ; i < n ; ++i)
        {
            *(pDest + i) = *(tmp + i);
        }
        free(tmp); //free allocated memory
    }
    return dst;
}

//can not overlap. UB
void *memcpy(void *dst, const void *src, size_t n) {
  char *pszDest = (char *)dst;
    const char *pszSource =( const char*)src;
    if((pszDest!= NULL) && (pszSource!= NULL))
    {
        while(n--) //till cnt
        {
            //Copy byte by byte
            *(pszDest++)= *(pszSource++);
        }
    }
    return dst;
}

int memcmp(const void *s1, const void *s2, size_t n) {
    unsigned const char *p = s1;
    unsigned const char *q = s2;
    //both pointer points to the same memory block, there is no need to compare
    if (s1 == s2)
    {
        return 0;
    }
    while (n--)
    {
        if (*p != *q)
        {  //compare the mismatching character
          return *p - *q;
        }
        p++;
        q++;
    }
    return 0;
}

#endif
