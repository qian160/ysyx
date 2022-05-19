clean:	
	sudo rm -rf obj_dir wave.vcd

include $(NVBOARD_HOME)/scripts/nvboard.mk
PWD=/home/s081/Downloads/ysyx-workbench/test/cnt

LDFLAGS += -lSDL2 -lSDL2_image

ARCHIVE=/home/s081/Downloads/ysyx-workbench/nvboard/build/nvboard.a

BIND=$(PWD)/bind.nxdc

AUTO_BIND_SRC=$(PWD)/auto_bind.cpp

CSRC=./cnt.cpp

VSRC=./cnt.v

VERILATOR = verilator  $(VSRC)\
                 --cc $(CSRC) \
                 $(AUTO_BIND_SRC) \
                 $(ARCHIVE)      \
                 --trace  --exe \
                 $(addprefix -LDFLAGS , $(LDFLAGS))

BIN =  make -C obj_dir -f Vcnt.mk Vcnt
#-C : target dir -f: use the specific makefile

WAVE = gtkwave wave.vcd
com:
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $(BIND) $(AUTO_BIND_SRC)
	$(VERILATOR)
	$(BIN)

