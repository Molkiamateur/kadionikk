vhd-sim:
	python3 sim/vhd_run.py --gtkwave-fmt ghw

vhd-fpga:
	mkdir -p fpga/sw
	cp sw/hex/sw.ram.mem fpga/sw/sw.ram.mem

chisel-sim:
	sbt "runMain learn.top.Sim -o=gen/sim"
	verilator --x-initial unique --x-assign unique -Wno-WIDTH -Wno-CMPCONST --trace -cc -Igen/sim/ gen/sim/Sim.sv --exe --Mdir obj/ --build sim/sim.cpp

chisel-fpga:
	rm -rf fpga/gen
	sbt "runMain learn.top.Sys -o=fpga/gen"
	cp sw/hex/sw.ram.mem fpga/gen/sw.ram.mem

chisel-tt:
	rm -rf gen/tt
	sbt "runMain learn.top.TT -o=gen/tt"
	cp sw/hex/sw.ram.mem gen/tt/sw.ram.mem
	
clean:
	sbt clean cleanFiles
	make -C sw clean
	rm -rf gen/
	rm -rf obj/
	rm -rf target/
	rm -rf vunit_out/