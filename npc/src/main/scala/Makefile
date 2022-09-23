.PHONY : run

SBT_ARGS = --target-dir $(shell pwd)/test/verilog
MAIN = Gen
gen:
	sbt "runMain $(MAIN) $(SBT_ARGS)"

test:	
	sbt "testOnly Test"

clean:
	-rm -rf test_run_dir project target 
