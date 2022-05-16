.PHONY: run wave clean
include $(NVBOARD_HOME)/scripts/nvboard.mk
PWD=/home/s081/Downloads/ysyx-workbench/test

LDFLAGS += -lSDL2 -lSDL2_image

ARCHIVE=/home/s081/Downloads/ysyx-workbench/nvboard/build/nvboard.a

BIND=$(PWD)/light/bind.nxdc

AUTO_BIND_SRC=$(PWD)/light/auto_bind.cpp

CSRC=./light/test.cpp

VSRC=./light/top.v

VERILATOR = verilator  $(VSRC)\
                --cc $(CSRC) \
		$(AUTO_BIND_SRC) \
		$(ARCHIVE)	\
                --trace  --exe \
		$(addprefix -LDFLAGS , $(LDFLAGS)) 

BIN =  make -C obj_dir -f Vtop.mk Vtop

#-C : target dir -f: use the specific makefile 
WAVE = gtkwave wave.vcd

#start compile and simulate
com:
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $(BIND) $(AUTO_BIND_SRC)	#BIND THE PORT
	$(VERILATOR)
	$(BIN)
run :
	./obj_dir/Vtop
#run gtkwave
wave:
	$(WAVE)

clean:
	rm -rf wave.vcd
	rm -rf ./obj_dir
