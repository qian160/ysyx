.PHONY: test gen clean sim gen

#include test/Makefile

TARGET_DIR = $(shell pwd)/src/main/scala/verilator/verilog/ 
SBT_ARGS   = --target-dir $(TARGET_DIR)
MAIN = Gen
TEST = Test
gen:
	sbt "runMain $(MAIN) $(SBT_ARGS)"

test:
	sbt "testOnly $(TEST)"
	@rm -rf test_dir

sim:
	gtkwave ...TODO
clean:
	-rm -rf test_run_dir target project 
