/*
#include"testbench.h"
#include<iostream>
using namespace std;

template<class Module>
void TestBench<Module>::reset(){
	dut -> reset = 1;
	dut -> clock = 0;
	dut -> eval();
	// Make sure any inheritance gets applied
	dut -> clock = 1;
	dut -> eval();
	dut -> reset = 0;

	cout << "pc: reset at 0x" << hex << dut -> io_pc_o << endl;
}

template<class Module>
TestBench<Module>::TestBench(){
	// According to the Verilator spec, you *must* call traceEverOn
	// before calling any of the tracing functions within Verilator.
	Verilated::traceEverOn(true);
	dut = new Module;
	m_trace = nullptr;
	m_tickcount = 0l;
	//m_trace = make_shared<VerilatedVcdC>(nullptr);
	//dut		= make_shared<Module>();
	dut	->	clock = 0;
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
*/