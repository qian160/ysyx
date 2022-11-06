#include <amtest.h>

void gpu_test() {
	int w = io_read(AM_GPU_CONFIG).width;
	int h = io_read(AM_GPU_CONFIG).height;

	printf("w = %d, h = %d\n", w, h);
}
