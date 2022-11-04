/*
#include <stdio.h>
#include <amtest.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>

#define W 400
#define H 300
#define SIZE W * H * 4

#if __ARCH__ == native
void nishiyige_test()
{

	AM_GPU_FBDRAW_T temp __attribute__((unused));
	int fd = open("./src/tests/114514.bmp", O_RDONLY);
	struct stat sb;
	fstat(fd, &sb);
	int * pixels = mmap(NULL, sb.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
	
	pixels = (int *)((char *)pixels + 10);
	printf("offset should be %d\n", *pixels);
	temp.w = W;
	temp.h = H;
	temp.pixels = pixels;
	temp.sync = 1;
	temp.x = 0;
	temp.y = 0;
	ioe_write(AM_GPU_FBDRAW, &temp);
	while(1);
	printf("114514\n");
}

#endif

*/
