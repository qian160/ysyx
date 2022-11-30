#include<iostream>
#include<stdio.h>
#include<assert.h>
#include<vector>

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
	std::string build_dir("/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/verilator/tests/build/");
	std::string img_path("/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/IMG/img_file");
	std::string img_file(build_dir + argv[1]);

	FILE * in = fopen(img_file.c_str(), "rb");
	assert(in);	

	FILE * output[4] {
		fopen((img_path + "0").c_str(), "w"),
		fopen((img_path + "1").c_str(), "w"),
		fopen((img_path + "2").c_str(), "w"),
		fopen((img_path + "3").c_str(), "w"),
	};

	for(auto &p: output){
		assert(p);
	}

	uint8_t cnt = 0;
	// ram entry size = 32B, so divide size by 4
	uint32_t buffer;
	while(1){
		if(fread(&buffer, sizeof(uint32_t), 1, in) <= 0) break;
		fprintf(output[cnt], "%08x\n", buffer);
		cnt = (cnt + 1) % 4;
	}
	for(int i = 0; i < 4; i ++)
		fclose(output[i]);
	fclose(in);
	asm volatile(
		"movl $60, %eax\n"
		"xorl %edi, %edi\n"
		"syscall\n"
	);
}