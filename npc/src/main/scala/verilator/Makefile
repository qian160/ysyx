.PHONY : run gen clean compile load 
RESOURCES = ../../resources/	#Used by chisel BlackBox
BLACKBOX = $(addprefix  $(RESOURCES), $(shell ls $RESOURCES))

VSRC   = $(addprefix ./verilog/, $(shell ls ./verilog | grep .v))
CPPSRC = ./cpp/test.cpp
FLAGS  = --cc --exe --build --trace

LLVM_FLAGS += $(shell llvm-config --ldflags)
LLVM_FLAGS += $(shell llvm-config --cxxflags)
LLVM_FLAGS += $(shell llvm-config --libs)

COLOR_RED   = \033[1;31m
COLOR_GREEN = \033[1;32m
COLOR_NONE  = \033[0m

#makefiles = $(shell find . -name "makefile")

gen:
	make -C ./asm gen
	@printf "$(COLOR_GREEN)[done]$(COLOR_NONE)\n"

load:
	@if (./cpp/load $(img) > ../inst_rom); then	\
		./cpp/load $(img)	\
		printf "$(COLOR_GREEN)success$(COLOR_NONE)\n";	\
	else	\
		printf "$(COLOR_RED)usage: make load img=xxx$(COLOR_NONE)\n"; \
	fi
run:
	@obj_dir/VTOP $(img)
compile:
	@verilator $(VSRC) $(CPPSRC) $(FLAGS) --top TOP
	@printf "$(COLOR_GREEN)[done]$(COLOR_NONE)\n"

clean:
	-rm  -rf obj_dir wave.vcd
	@printf "$(COLOR_GREEN)[done]$(COLOR_NONE)\n"

