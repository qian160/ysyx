#include"debug.h"
using namespace std;

#define EBREAK 0x100073

bool check_bound(uint64_t addr);

VTOP * top = new VTOP("top");
//VerilatedVcdC * tfp = new VerilatedVcdC;
vluint64_t TIME = 0;
static char * img_file = (char *)0;

uint32_t mem[0x80000];	//seems that it can't be too large....

uint32_t readl(uint64_t addr)
{
	return mem[(addr - 0x80000000) >> 2];
}

static size_t load_img()
{
	if(!img_file){
		ifstream in;
		in.open("./asm/inst_rom");
		if(in.fail()){
			cout << "can't open inst rom" << endl;
			exit(114514);
		}
		int n = 0;
		while(!in.eof())
			in >> hex >> mem[n++];
		in.close();
		return 4096;
	}
	cout << img_file << endl;
	FILE * fp = fopen(img_file, "rb");
	assert(fp);

	fseek(fp, 0, SEEK_END);
	size_t size = ftell(fp);

	cout << "the img file is " << img_file << ", size = " << size << endl;

	fseek(fp, 0, SEEK_SET);
	int ret = fread(mem, size, 1, fp);
	assert(ret == 1);

	fclose(fp);
	return size;
}

void step()
{
	//settle all the combinational logic before the edge comes
	top -> clock = 0;
	top -> eval();
	//rising edge
	top -> clock = 1;
	top -> io_inst_i = readl(top -> io_pc_o);
	top -> eval();
	//falling edge
	top -> clock = 0;
	top -> eval();

	//if(top -> clock){	//at rising edge
	if(Verilated::gotFinish())
	{
		cout<<Yellow("ebreak\n");
		return;
	}
	printf("inst = %08x, pc = 0x%lx, src1 = 0x%lx, src2 = 0x%lx\n", \
		top -> io_inst_o, top -> io_pc_o, top ->io_src1, top->io_src2);
	std::cout << "wdata = " << hex << top -> io_o << std::endl;
}

void init(){
	top -> clock = 0;
	top -> reset = 1;
	top -> eval();		//to remember state
	top -> clock = 1;
	top -> eval();		//0 -> 1, rising edge. do the reset
	top -> reset = 0;
	top -> clock = 0;
}

int main(int argc, char **argv)
{
	Verilated::commandArgs(argc, argv);
	if(argc < 2){
		cout << "no image is given, use the default inst rom" << endl;
	}
	else
		img_file = strcat(test_path, strcat(argv[1], "-riscv64-npc.bin"));
	size_t img_size = load_img();
	init();
	while(!Verilated::gotFinish())
	{
		step();
	}
}

