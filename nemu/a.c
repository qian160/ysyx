#include<stdio.h>
#include<stdint.h>
static inline void pattern_decode(const char *str, int len,
    uint64_t *key, uint64_t *mask, uint64_t *shift) {

  uint64_t __key = 0, __mask = 0, __shift = 0;
  for(int i = 0; i < len; i++){
    char c = str[i];
    if(c != ' '){
    	__key   = (__key << 1)  | (c == '1'? 1 : 0);
    	__mask  = (__mask << 1) | (c == '?'? 0 : 1);
    	__shift = (c == '?' ? __shift + 1: 0);
    	printf("\ni = %d, c = %c key = %lx, mask = %lx, shift = %lx\n", i, c, __key, __mask, __shift);
    }
  }
  *key = __key >> __shift;
  *mask = __mask >> __shift;
  *shift = __shift;
  printf("\n\n\nstr = %s\nkey = %lx, mask = %lx, shift = %lx\n", str, *key, *mask, *shift);
}

int main()
{
	uint64_t key, mask, shift;
	pattern_decode("10?", 3, &key,&mask, &shift);
	static const int array[] = {&&foo - &&foo, &&bar - &&foo, &&hack - &&foo};
	goto * (&&foo + array[2]);
	printf("[%s %d %s]\n", __FILE__, __LINE__, __func__);
foo:
	puts("foo");
	while(1);
bar:
	puts("bar");
	while(1);
hack:
	puts("hack");
	while(1);
}
