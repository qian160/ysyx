.PHONY : run gen clean compile load test

HOME   = $(shell pwd)
VSRC   = $(addprefix $(HOME)/verilog/, $(shell ls ./verilog | grep .v))
CPPSRC = $(addprefix $(HOME)/cpp/, $(shell ls ./cpp | grep cpp))
VFLAGS = --cc --exe --trace --build -Wno-lint

DEPS   = $(CPPSRC:.cpp=.d)
OBJS   = $(CPPSRC:.cpp=.o)	
CPPFLAGS    = -I ./cpp -I ./obj_dir

LLVM_FLAGS += $(shell llvm-config --ldflags)
LLVM_FLAGS += $(shell llvm-config --cxxflags)
LLVM_FLAGS += $(shell llvm-config --libs)

COLOR_RED   = \033[1;31m
COLOR_GREEN = \033[1;32m
COLOR_NONE  = \033[0m

-include $(DEPS)

./cpp/%.d: ./cpp/%.cpp		#.o is not used...
	@set -e; rm -f $@;echo $@;\
        $(CPP) -MM $(CPPFLAGS) $< > $@.$$$$; \
        sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@;\
	rm -f $@.$$$$

.cpp/%.o:.cpp/.cpp
	@echo [g++] $@
	@g++ -c $@  #-o ./cpp/$@

#usage: make run [img=xxx]
run:
ifneq ($(img),)
	echo loading img $(img)...
	./cpp/load $(img) > ../img_file
endif
	@verilator $(VSRC) $(CPPSRC) $(VFLAGS) --top TOP
	@obj_dir/VTOP $(img)
clean:
	-rm  -rf obj_dir wave.vcd
	@printf "$(COLOR_GREEN)[done]$(COLOR_NONE)\n"

