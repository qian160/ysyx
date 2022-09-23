.PHONY : run gen clean

VSRC   = ./verilog/TOP.v
CPPSRC = ./cpp/test.cpp
FLAGS  = --cc --exe --build --trace

COLOR_RED   = \033[1;31m
COLOR_GREEN = \033[1;32m
COLOR_NONE  = \033[0m

#makefiles = $(shell find . -name "makefile")

gen:
	make -C ./asm gen
	printf "$(COLOR_GREEN)[done]$(COLOR_NONE)\n"

run:
	@verilator $(VSRC) $(CPPSRC) $(FLAGS)
	printf "$(COLOR_GREEN)[done]$(COLOR_NONE)\n"

clean:
	-rm obj_dir
	printf "$(COLOR_GREEN)[done]$(COLOR_NONE)\n"

