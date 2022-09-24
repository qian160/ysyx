template<class Module>	class TestBench {
	unsigned long	m_tickcount;
	Module	*m_core;

	TestBench(void) {
		m_core = new Module;
		m_tickcount = 0l;
	}

	virtual ~TestBench(void) {
		delete m_core;
		m_core = NULL;
	}

	virtual void	reset(void) {
		m_core->reset = 1;
		// Make sure any inheritance gets applied
		this->tick();
		m_core->reset = 0;
	}

	virtual void	tick(void) {
		// Increment our own internal time reference
		m_tickcount++;

		// Make sure any combinatorial logic depending upon
		// inputs that may have changed before we called tick()
		// has settled before the rising edge of the clock.
		m_core->clock = 0;
		m_core->eval();

		// Toggle the clock

		// Rising edge
		m_core->clock = 1;
		m_core->eval();

		// Falling edge
		m_core->clock = 0;
		m_core->eval();
	}

	virtual bool	done(void) { return (Verilated::gotFinish()); }
};
