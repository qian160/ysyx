#include<iostream>
#include<stdio.h>
#include<assert.h>
#include<sys/stat.h>

using namespace std;

int main(int argc, char **argv)
{
	//string img_file("/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/img_file");
	if(argc < 2)return 0;
	string img_file = (string)"/home/s081/Downloads/ysyx-workbench/am-kernels/tests/cpu-tests/build/" + (string)argv[1] + (string)"-riscv64-npc.bin";
	unsigned int inst_rom[0x80000];
	FILE * in  = fopen(img_file.c_str(), "rb");
	assert(in);
	fseek(in, 0, SEEK_END);
	size_t size = ftell(in);
	
	fseek(in, 0, SEEK_SET);
	int ret = fread(inst_rom, size, 1, in);
	assert(ret);
	for(int i = 0; i < size / 4; i++){
		printf("%08x\n", inst_rom[i]);		//need to redirect this output
	}
	fclose(in);

}
