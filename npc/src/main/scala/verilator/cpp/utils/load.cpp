#include<iostream>
#include<stdio.h>
#include<assert.h>
#include<memory>
#include<initializer_list>

using namespace std;

#define MAX_SIZE 0x114514

/* 	we can't simpliy just use objcopy, because Verilog will use redmemh to innitialize the memory,
and raw binary file is ugly to him which can't be recognized. Only pure hex(or binary 0 1) data is allowed.
	And this program's job is to convert raw object file to beautiful hex data, so that readmemh can recognize
*/
int main(int argc, char **argv)
{
	if(argc < 2){
		printf("need an argument!\n");
		return 0;
	}
	string build_dir("/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/verilator/tests/build/");
	printf("\33[0;33mloading img %s...\33[0m\n", argv[1]);
	string scala_source_path("/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/");
	// binary files for tests
	string img_file(build_dir + argv[1]);
	unsigned int inst_rom[MAX_SIZE];

	unique_ptr<FILE> in(fopen(img_file.c_str(), "rb"));
/*
	// this will cause bugs, img4 is always empty... I don't know why
	unique_ptr<FILE > img[4] = {
		unique_ptr<FILE>(fopen((scala_source_path + "img_file1").c_str(), "w")),
		unique_ptr<FILE>(fopen((scala_source_path + "img_file2").c_str(), "w")),
		unique_ptr<FILE>(fopen((scala_source_path + "img_file3").c_str(), "w")),
		unique_ptr<FILE>(fopen((scala_source_path + "img_file4").c_str(), "w")),
	};
*/
	FILE * img[4] = {
		fopen((scala_source_path + "img_file1").c_str(), "w"),
		fopen((scala_source_path + "img_file2").c_str(), "w"),
		fopen((scala_source_path + "img_file3").c_str(), "w"),
		fopen((scala_source_path + "img_file4").c_str(), "w"),
	};

	assert(in);	assert(img[0]);	assert(img[1]);	assert(img[2]);	assert(img[3]);

	fseek(in.get(), 0, SEEK_END);
	size_t size = ftell(in.get());

	fseek(in.get(), 0, SEEK_SET);
	// can't simply use fscanf, seems that raw data won't be recognized
	int ret = fread(inst_rom, size, 1, in.get());
	assert(ret);
	printf("img size = %ldB\n", size);
	assert(size < MAX_SIZE);

	uint8_t cnt = 0;
	// ram entry size = 32B, so divide size by 4
	for(int i = 0; i < size / 4; i++){
		fprintf(img[cnt], "%08x\n", inst_rom[i]);
		cnt = (cnt + 1) % 4;
	}
	printf("\33[1;32mimg load success!\33[0m\n");

	for(int i = 0; i < 4; i ++)
		fclose(img[i]);
}
