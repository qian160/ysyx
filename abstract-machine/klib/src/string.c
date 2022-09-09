#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#include<stdio.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t len = 0;
  if(!s) return 0;
  while(*s++)len++;
  return len;
  // \0 is not counted
  //panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
  if(strlen(dst) < strlen(src))
    printf("dest < src, can't do this\n");
  else{
    while(*src){
      *dst++ = *src++;
    }
  }
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  if(n > strlen(src))
    printf("too many bytes\n");
  else{
    while(n--){
      *dst++ = *src++;
    }
  }
  return dst;
}

char *strcat(char *dst, const char *src) {
  if(!dst || !src){
    printf("null\n");
    return NULL;
  }                                                                                 
  // make ptr point to the end of the destination string
  char* ptr = dst + strlen(dst);

  // appends characters of the source to the destination string
  while (*src != '\0') {
      *ptr++ = *src++;
  }   
  // null terminate destination string
  *ptr = '\0';

  return dst;

}

int strcmp(const char *s1, const char *s2) {
  if(!s1 || !s2 || strlen(s1) != strlen(s2)){
    return 114514;   //non-zero for failure
  }
  while(*(s1) == *(s2)){
    s1++;s2++;
  }
  if(*s1 == '\0') return 0;
  return 1;
  panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n) {
  if(n == 0) return 1;
  if(n > strlen(s1) || n > strlen(s2))
    return -1;
  while(n--){
    if(*s1++ != *s2++)return -1;
  }
  return 0;
}

void *memset(void *s, int c, size_t n) {
  //seems that n can be larger than sizeof(s)
  if (!s) return NULL;
    while(n--){
      *(char *)s++ = c;
    }
  return s;
}
//can overlap
void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}
//can not overlap. UB
void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  panic("Not implemented");
}

#endif
