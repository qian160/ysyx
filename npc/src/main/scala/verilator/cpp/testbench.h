#include <verilated_vcd_c.h>

//Verilog or chisel can't read binary file to get the instructions, so 
//we have to add this feature to our cpp testbench, which lose the compability

template<class Module> class TestBench {

	//private, user don't need to know
	VerilatedVcdC	*m_trace;
	unsigned long	m_tickcount;
	size_t	img_size;
	Module	*m_core;

	uint32_t mem[0x80000];	//seems that it can't be too large....
	uint64_t inst_fetch(uint64_t pc);
	size_t load_img(char * img_file);

public:
	TestBench(char * img_file) {
		// According to the Verilator spec, you *must* call traceEverOn
		// before calling any of the tracing functions within Verilator.
		Verilated::traceEverOn(true);
		m_core = new Module;
		m_trace	=	nullptr;
		m_tickcount = 0l;
		m_core	->	clock = 0;
		img_size	= load_img(img_file);
	}

	virtual ~TestBench(void) {
		delete m_core;
		m_core = NULL;
	}

	virtual void	reset(void) {
		m_core -> reset = 1;
		m_core -> clock = 0;
		m_core -> eval();
		// Make sure any inheritance gets applied
		m_core -> clock = 1;
		m_core -> eval();
		m_core -> reset = 0;
	}

	// Open/create a trace file
	virtual	void	opentrace(const char *vcdname) {
		if (!m_trace) {
			m_trace = new VerilatedVcdC;
			m_core  -> trace(m_trace, 99);
			m_trace -> open(vcdname);
		}
	}

	// Close a trace file
	virtual void	close(void) {
		if (m_trace) {
			m_trace	-> close();
			m_trace = NULL;
		}
	}

	virtual void	tick(void) {
		// Make sure the tickcount is greater than zero before we do this
		m_tickcount++;

		//set up all the combinational logic before the rising edge
		m_core	->	clock = 0;
		m_core	->	eval();

		if(m_trace) m_trace	-> dump(10*m_tickcount-2);

		// Repeat for the positive edge of the clock
		m_core	->	clock = 1;
		m_core  ->	io_inst_i = inst_fetch(m_core -> io_pc_o);
		m_core	->	eval();
		if(m_trace) m_trace	-> dump(10*m_tickcount);
		printf("pc = 0x%8lx, inst = %08x, wdata = 0x%-16lx \n src1 = 0x%-16lx, src2 = 0x%-16lx\n\n",\
			m_core -> io_pc_o, m_core -> io_inst_o, m_core -> io_o, m_core -> io_src1, m_core -> io_src2
		);
		if(Verilated::gotFinish()){
			return;
		}
		// Now the negative edge
		m_core->clock = 0;
		m_core->eval();
		if (m_trace) {
			m_trace->dump(10*m_tickcount+5);
			m_trace->flush();
		}
	}
};


//some functions' implementation
template<class Module> 
size_t TestBench<Module>::load_img(char * img_file){
		if(!img_file){
			//use the default inst rom
			ifstream in;
			in.open("./asm/inst_rom");
			if(in.fail()){
				cout << "can't open inst rom" << endl;
				exit(114514);
			}
			int n = 0;
			while(!in.eof()){
				in >> hex >> mem[n++];
			}
			cout << "load success" << endl;
			in.close();
			if(n) n--;		//cut '\n'
			return n * sizeof(uint32_t);
		}
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

template<class Module> 
uint64_t TestBench<Module>::inst_fetch(uint64_t pc){
	return mem[(pc - 0x80000000) >> 2];
}