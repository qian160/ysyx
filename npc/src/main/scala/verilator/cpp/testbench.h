#include <verilated_vcd_c.h>

//Verilog or chisel can't read binary file to get the instructions, so 
//we have to add this feature to our cpp testbench, which lose the compability

template<class Module> class TestBench {
private:
	//private, user don't need to know
	VerilatedVcdC	*m_trace;
	vluint64_t		m_tickcount;
	size_t			img_size;
	Module			*dut;
	uint32_t 		inst_rom[0x80000];	//seems that it can't be too large....

	uint64_t inst_fetch(uint64_t pc);
	size_t 	load_img(char * img_file);

public:
	TestBench(char * img_file);
	virtual ~TestBench();
	virtual void	reset(void);
	// Open/create a trace file
	virtual	void	trace(const char *vcdname);
	// Close a trace file
	virtual void	close(void);
	virtual void	tick(void);
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
				in >> hex >> inst_rom[n++];
			}
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
		int ret = fread(inst_rom, size, 1, fp);
		assert(ret == 1);

		fclose(fp);
		return size;
}

template<class Module> 
uint64_t TestBench<Module>::inst_fetch(uint64_t pc){
	return inst_rom[(pc - 0x80000000) >> 2];
}

template<class Module>
void TestBench<Module>::tick(){
			// Make sure the tickcount is greater than zero before we do this
		m_tickcount++;

		//set up all the combinational logic before the rising edge
		dut	->	clock = 0;
		dut	->	eval();
		uint64_t pc	  =	dut -> io_pc_o;

		if(m_trace) 
			m_trace	-> dump(10*m_tickcount-2);

		// Repeat for the positive edge of the clock
		dut	->	clock = 1;
		dut  ->	io_inst_i = inst_fetch(dut -> io_pc_o);
		dut	->	eval();
		uint32_t inst = dut -> io_inst_i;

		if(m_trace) 
			m_trace	-> dump(10*m_tickcount);

		printf("type = %d, pc = 0x%8lx, inst = %08x, wdata = 0x%-16lx \n src1 = 0x%-16lx, src2 = 0x%-16lx\n\n",\
			dut -> io_instType, pc, inst, dut -> io_o, dut -> io_src1, dut -> io_src2
		);
		if(Verilated::gotFinish()){
			return;
		}
		// Now the negative edge
		dut->clock = 0;
		dut->eval();
		if (m_trace) {
			m_trace->dump(10*m_tickcount+5);
			m_trace->flush();
		}
}

template<class Module>
void TestBench<Module>::reset(){
		dut -> reset = 1;
		dut -> clock = 0;
		dut -> eval();
		// Make sure any inheritance gets applied
		dut -> clock = 1;
		dut -> eval();
		dut -> reset = 0;

		cout << "pc = " << hex << dut -> io_pc_o << endl;
}

template<class Module>
TestBench<Module>::TestBench(char * img_file){
	// According to the Verilator spec, you *must* call traceEverOn
	// before calling any of the tracing functions within Verilator.
	Verilated::traceEverOn(true);
	dut = new Module;
	m_trace	=	nullptr;
	m_tickcount = 0l;
	dut	->	clock = 0;
	img_size	= load_img(img_file);
}

template<class Module>
TestBench<Module>::~TestBench(){
	delete dut;
	dut = NULL;
}

template<class Module>
void TestBench<Module>::trace(const char *vcdname){
	if (!m_trace) {
		m_trace = new VerilatedVcdC;
		dut  -> trace(m_trace, 99);
		m_trace -> open(vcdname);
	}
}

template<class Module>
void TestBench<Module>::close(){
	if (m_trace) {
		m_trace	-> close();
		m_trace = NULL;
	}
}