.PHONY: test gen clean sim run load

RED   = \033[1;31m
GREEN = \033[1;32m
NONE  = \033[0m

TARGET_DIR = $(shell pwd)/src/main/scala/verilator/verilog/ 
SBT_ARGS   = --target-dir $(TARGET_DIR)
MAIN = Gen

TEST = Test

run:
	sbt "runMain $(MAIN) $(SBT_ARGS)"

test:
	sbt "testOnly $(TEST) -- -DwriteVcd=1"
	@rm -rf test_dir

sim:
	gtkwave ...TODO

load:
	@if (./load $(img) > ./img_file); then	\
		printf "$(GREEN)success$(NONE)\n";	\
	else	\
		printf "$(RED)usage: make load img=xxx$(NONE)\n"; \
	fi
clean:
	-rm -rf test_run_dir target project 
