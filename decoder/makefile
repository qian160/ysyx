LDFLAGS += -lSDL2 -lSDL2_image

include $(NVBOARD_HOME)/scripts/nvboard.mk

ARCHIVE=/home/s081/Downloads/ysyx-workbench/nvboard/build/nvboard.a 

BIND7=./bind7.nxdc

AUTO_BIND_SRC7=./auto_bind7.cpp

CSRC7=./seg7.cpp

VSRC7=./seg7.v

BIND114514=./bind114514.nxdc

AUTO_BIND_SRC114514=./auto_bind114514.cpp

CSRC114514=./seg114514.cpp

VSRC114514=./seg114514.v


clean:
	sudo rm -r ./obj_dir
	rm wave.vcd

seg7:
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $(BIND7) $(AUTO_BIND_SRC7)  
	
	verilator  $(VSRC7)\
                 --cc $(CSRC7) \
                 $(AUTO_BIND_SRC7) \
                 $(ARCHIVE) \
		 -O0 \
		 --trace  --exe \
        	$(addprefix -LDFLAGS , $(LDFLAGS)) 
	make -C obj_dir -f Vseg7.mk Vseg7

seg114514:
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $(BIND114514) $(AUTO_BIND_SRC114514)  
	
	verilator  $(VSRC114514)\
                 --cc $(CSRC114514) \
                 $(AUTO_BIND_SRC114514) \
                 $(ARCHIVE) \
		 -O0 \
		 --trace  --exe \
        	$(addprefix -LDFLAGS , $(LDFLAGS)) 
#	echo include $(NVBOARD_HOME)/scripts/nvboard.mk >> /home/s081/Downloads/ysyx-workbench/test/decoder/obj_dir/Vseg7.mk
	make -C obj_dir -f Vseg114514.mk Vseg114514

