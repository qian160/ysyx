#include<iostream>
#include<assert.h>
#include<vector>
#include<thread>

#define MAX_SIZE 0x114514
int printf(char * fmt, ...);
// this has some bugs.... and even performs worse than single thread

// read file will cause hazard(fseek). so use array
void write_parallel(uint32_t *in, FILE * out, size_t size, uint32_t offset){
	in += offset;
	for(size_t i = 0; i < size / 4; i ++)
	{
		fprintf(out, "%08x\n", *in);
		in += 3;
	}
	std::cout << "thread " << std::this_thread::get_id() << " exited\n";
}

int main(int argc, char **argv)
{
	if(argc < 2){
		printf("need an argument!\n");
		return 0;
	}
	printf("\33[0;33mloading img %s...\33[0m\n", argv[1]);

	std::string build_dir("/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/verilator/tests/build/");
	std::string img_path("/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/IMG/img_file");
	// binary files for tests
	std::string img_file(build_dir + argv[1]);
	unsigned int inst_rom[MAX_SIZE];

	FILE * in = fopen(img_file.c_str(), "rb");

	FILE * output[4] {
		fopen((img_path + "0").c_str(), "w"),
		fopen((img_path + "1").c_str(), "w"),
		fopen((img_path + "2").c_str(), "w"),
		fopen((img_path + "3").c_str(), "w"),
	};

	assert(in);
	for(auto &p: output)
		assert(p);

	fseek(in, 0, SEEK_END);
	size_t size = ftell(in);

	fseek(in, 0, SEEK_SET);
	int ret = fread(inst_rom, size, 1, in);
	assert(ret);
	printf("img size = %ldB\n", size);
	assert(size < MAX_SIZE);

	std::vector<std::thread> threads;
	for(int i = 0; i < 4; i ++){
		threads.push_back(std::thread(write_parallel, inst_rom, output[i], size, i));
	}

	for(auto &p: threads){
		p.join();
	}

	printf("\33[1;32mimg load success!\33[0m\n");

	for(int i = 0; i < 4; i ++)
		fclose(output[i]);
	fclose(in);
}
