.PHONY: test gen clean sim gen

TARGET_DIR = $(shell pwd)/test/verilog
SBT_ARGS   = --target-dir $(TARGET_DIR)

gen:
	sbt "runMain Gen $(SBT_ARGS)"

test:
	sbt "testOnly Test"

sim:
	gtkwave 
clean:
	-rm -rf test_run_dir target project 
