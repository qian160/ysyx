.PHONY : run test clean

SBT_ARGS = --target-dir $(shell pwd)/test/verilog
MAIN = Gen
gen:	#generate verilog code
	sbt "runMain $(MAIN) $(SBT_ARGS)"

test:	#run chisel test
	sbt "testOnly Test"

clean:
	-rm -rf test_run_dir project target 
