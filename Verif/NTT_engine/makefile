SIM ?= verilator
TOPLEVEL_LANG ?= verilog

PWD := $(shell pwd)
REPO_ROOT := $(abspath $(PWD)/../..)

VERILOG_SOURCES := $(REPO_ROOT)/RTL/Twiddle_ROM_inst/NTT_engine.v \
                   $(REPO_ROOT)/RTL/ButterflyUnitCT.v \
                   $(REPO_ROOT)/RTL/Delay_unit.v \
                   $(REPO_ROOT)/RTL/DU_FIFO.v \
                   $(REPO_ROOT)/RTL/TwiddleRom.v

TOPLEVEL := NTT_engine
COCOTB_TEST_MODULES := tb

COMPILE_ARGS += -Wall -Wno-DECLFILENAME -Wno-PINMISSING -Wno-UNUSEDPARAM -Wno-EOFNEWLINE -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-BLKSEQ -I$(REPO_ROOT)/RTL/DesignConfig

export PYTHONPATH := $(REPO_ROOT)/Algo:$(PWD):$(PYTHONPATH)

include $(shell cocotb-config --makefiles)/Makefile.sim
