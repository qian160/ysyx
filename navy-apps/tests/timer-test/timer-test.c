#include <unistd.h>
#include <NDL.h>
#include <sys/time.h>

int main() {
  NDL_Init(0);
  unsigned ms=NDL_GetTicks();
  while(1) {
      while(NDL_GetTicks() < ms);
      ms+=500;
      printf("一句话\n");
  }
  return 0;	
}
