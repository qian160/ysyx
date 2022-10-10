#include <verilated_vcd_c.h>
#include "emoji.h"

#define _DIFFTEST_ 1
//extern uint64_t * npc_timer;

using namespace std;
//Verilog or chisel can't read binary file to get the instructions, so 
//we have to add this feature to our cpp testbench, which lose the compability

template<class Module> class TestBench {
private:
	//private, user don't need to know
	VerilatedVcdC	*m_trace;
	Module			*dut;
	vluint64_t		m_tickcount;
	clock_t			boot_time;
public:
	TestBench() noexcept;
	//TestBench(std::initializer_list<int int>)();
	virtual ~TestBench() noexcept;
	virtual void	reset(void) noexcept;
	// Open/create a trace file
	virtual	void	trace(const char *vcdname) noexcept;
	// Close a trace file
	virtual void	close(void) noexcept;
	virtual void	tick(void) noexcept;
	virtual Module*	getModule() noexcept;
};

//implementation
template<class Module>
void TestBench<Module>::tick() noexcept{
	// Make sure the tickcount is greater than zero before we do this
	m_tickcount++;

	//set up all the combinational logic before the rising edge
	dut	->	clock = 0;
	dut	->	eval();
	//cout << "pc = 0x" << hex << pc << endl;

	if(m_trace)
		m_trace	-> dump(10*m_tickcount-2);

	// Repeat for the positive edge of the clock
	dut	->	clock = 1;
	dut	->	eval();		//update the flip flops

	if(m_trace) 
		m_trace	-> dump(10*m_tickcount);

	if(Verilated::gotFinish())	return;

	// Now the negative edge
	dut->clock = 0;
	dut->eval();
	if (m_trace) {
		m_trace->dump(10*m_tickcount+5);
		m_trace->flush();
	}

}
template<class Module>
void TestBench<Module>::reset() noexcept{
	dut -> reset = 1;
	dut -> clock = 0;
	dut -> eval();
	// Make sure any inheritance gets applied
	dut -> clock = 1;
	dut -> eval();
	dut -> reset = 0;

	cout << "pc: reset at 0x" << hex << dut -> io_pc_o << endl;
	boot_time = clock();		//init value
	for(const auto iter : emojis){
		cout << iter.second;
	}
	cout << endl;
	cout << "😅😅😅😅😅😅😅😅😅😅😅😅😅😅😅😅😅😅😅😅" << endl;
}

template<class Module>
TestBench<Module>::TestBench() noexcept{
	// According to the Verilator spec, you *must* call traceEverOn
	// before calling any of the tracing functions within Verilator.
	Verilated::traceEverOn(true);
	dut = new Module;
	m_trace = nullptr;
	m_tickcount = 0l;
	dut	->	clock = 0;
}

template<class Module>
TestBench<Module>::~TestBench() noexcept{
	delete dut;
	dut = NULL;
}

template<class Module>
void TestBench<Module>::trace(const char *vcdname) noexcept{
	if (!m_trace) {
		m_trace = new VerilatedVcdC;
		dut  -> trace(m_trace, 99);
		m_trace -> open(vcdname);
	}
}

template<class Module>
void TestBench<Module>::close() noexcept{
	if (m_trace) {
		m_trace	-> close();
		m_trace = NULL;
	}
}

template<class Module>
Module * TestBench<Module>::getModule() noexcept{
	return this->dut;
}