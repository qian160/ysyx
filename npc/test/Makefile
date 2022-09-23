.PHONY: run clean

VSRC   = ./verilog/TOP.v
CPPSRC = ./cpp/test.cpp
VFLAGS = --cc --exe --build --trace
run:
	@verilator $(VSRC) $(CPPSRC) $(VFLAGS)

clean:
	-rm -rf obj_dir
