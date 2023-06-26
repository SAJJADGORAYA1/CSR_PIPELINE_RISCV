Warning = -Wno-fatal -Wno-WIDTH -Wno-CASEINCOMPLETE
Module = Three_stage_Pipeline
VModule = VThree_stage_Pipeline
TestBench = tb_Three_stage_Pipeline

.PHONY: wave
wave: sim  
	@echo
	@echo "### wave ###"
	gtkwave waveform.vcd
	@echo

.PHONY: sim
sim: build 
	@echo
	@echo "### SIMULATION ###"
	./obj_dir/$(VModule)
	@echo

.PHONY: build
build: verilate
	@echo
	@echo "### BUILD ###"
	make -C obj_dir -f $(VModule).mk $(VModule) $(Warning)
	@echo

.PHONY: verilate
verilate: compile
	@echo
	@echo "### VERILATE ###"
	verilator -Wall --trace -cc $(Module).sv --exe $(TestBench).cpp $(Warning)
	@echo

.PHONY: compile
compile:
	@echo
	@echo "### COMPILE ###"
	verilator --cc $(Module).sv $(Warning)
	@echo
	
.PHONY: clean
clean:
	rm -rf obj_dir waveform.vcd


