TOP        = divmod
DSRC_DIR   = design_src
SSRC_DIR   = sim_src
SRES_DIR   = sim_result
SRC_V      = $(DSRC_DIR)/*.v
SRC_CPP    = $(SSRC_DIR)/$(TOP).cpp
EXEC       = V$(TOP)
OBJ_DIR    = $(SSRC_DIR)/obj_dir
INDATA     = $(SSRC_DIR)/input.data
VCD        = $(SRES_DIR)/wave.vcd
LOG        = $(SRES_DIR)/log.txt
RESULT     = $(SRES_DIR)/result.txt

VERILATOR_FLAGS = --public -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC --hierarchical --trace-depth 100 --trace-structs --top-module $(TOP) --trace -Mdir $(OBJ_DIR)
VERILATOR_ROOT ?= $(VERILATOR_ROOT)

.PHONY: all dut test clean

all: $(OBJ_DIR)/$(EXEC)

dut:
	verilator $(VERILATOR_FLAGS) --cc $(SRC_V)

$(OBJ_DIR)/$(EXEC): $(SRC_V) $(SRC_CPP)
	verilator $(VERILATOR_FLAGS) --cc $(SRC_V) --exe $(SRC_CPP) --build

test: all
	./$(OBJ_DIR)/$(EXEC) $(INDATA) $(VCD) $(LOG) $(RESULT)

clean:
	rm -rf $(OBJ_DIR) $(VCD) $(SRES_DIR)/*
