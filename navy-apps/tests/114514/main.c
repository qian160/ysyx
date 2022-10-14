#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <NDL.h>

#define W 400
#define H 300
#define SIZE W * H * 4

enum { AM_GPU_FBDRAW = (11) }; typedef struct { int x, y; void *pixels; int w, h; _Bool sync; } AM_GPU_FBDRAW_T;

void nishiyige()
{
  AM_GPU_FBDRAW_T temp __attribute__((unused));

  FILE *fp = fopen("/share/pictures/114514.bmp", "r");
  if (!fp) return;

  uint32_t *pixels = malloc(W * H * sizeof(uint32_t));
  fseek(fp, 0, SEEK_END);

  size_t sz = ftell(fp);
  printf("sz = %ld\n", sz);
  fseek(fp, 0, SEEK_SET);
  fread(pixels, sz, 1, fp);
  //not all the file is about pixels. need to cut off the useless iinformation
	pixels = (int *)((char *)pixels + 10);

  write(3, pixels, sz /*- 128 - 8*/ );
}

int main() {
  nishiyige();
  printf("nishiyige");
  while (1){
  	printf("yige");
  }
  return 0;
}
