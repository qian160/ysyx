.PHONY : run gen clean compile load test

HOME   = $(shell pwd)
VSRC   = $(addprefix $(HOME)/verilog/, $(shell ls ./verilog | grep \.\*v))   #.v or .sv
CPPSRC = $(addprefix $(HOME)/cpp/, $(shell ls ./cpp | grep cpp))
LOGO   = $(HOME)/cpp/logo.o
LOGO_S = $(HOME)/cpp/logo.S
VFLAGS = --cc --exe --trace -Wno-lint --build --top TOP -LDFLAGS -ldl -LDFLAGS -lSDL2 -O3

VTOP_ALL = $(HOME)/obj_dir/VTOP__ALL.a
DEPS   = $(CPPSRC:.cpp=.d)
OBJS   = $(CPPSRC:.cpp=.o)
OBJS   += $(LOGO)
CPPFLAGS    = -I./obj_dir -I./cpp/include -I$(VERILATOR_ROOT)/include/vltstd -O3 #-std=c++17
DIFFTEST    = $(NEMU_HOME)/build/riscv64-nemu-interpreter-so
 
LLVM_FLAGS += $(shell llvm-config --ldflags)
LLVM_FLAGS += $(shell llvm-config --cxxflags)
LLVM_FLAGS += $(shell llvm-config --libs)

COLOR_RED   = \033[1;31m
COLOR_GREEN = \033[1;32m
COLOR_NONE  = \033[0m

-include $(DEPS)	#this will trigger some execuations

./cpp/%.d: ./cpp/%.cpp		#.o is not used...
	@set -e; rm -f $@;echo update $@;\
        $(CPP) -MM $(CPPFLAGS) $< > $@.$$$$; \
        sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@;\
	rm -f $@.$$$$

.cpp/%.o:.cpp/%.cpp
	@echo [g++] $@
	@g++ -c $@ -std=c++17 -03 #-o ./cpp/$@

$(LOGO): $(LOGO_S)
	as $< -o $@

echo:
	@echo $(OBJS)

#usage: make run [img=xxx]
run: $(OBJS) 
ifneq ($(img),)
	@./cpp/utils/load_rs $(img) 
endif
	@verilator $(VSRC) $(CPPSRC) $(VFLAGS) $(LOGO) $(CPPFLAGS)
#	@verilator $(VSRC) $(OBJS) $(VFLAGS) $(CPPFLAGS) $(VTOP__ALL)
	@obj_dir/VTOP $(img)
clean:
	-rm  -rf obj_dir wave.vcd
		@printf "$(COLOR_GREEN)[done]$(COLOR_NONE)\n"
