com:
	python3 /home/s081/Downloads/ysyx-workbench/nvboard/scripts/auto_pin_bind.py /home/s081/Downloads/ysyx-workbench/test/shift/bind.nxdc /home/s081/Downloads/ysyx-workbench/test/shift/auto_bind.cpp	#BIND THE PORT, write a bind.nxdc first
	verilator  ./random.v --cc ./random.cpp ./auto_bind.cpp /home/s081/Downloads/ysyx-workbench/nvboard/build/nvboard.a --trace  --exe -LDFLAGS -lSDL2 -LDFLAGS -lSDL2_image
	make -C obj_dir -f Vrandom.mk Vrandom

