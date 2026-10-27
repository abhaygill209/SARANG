SIM ?= verilator
TOPLEVEL_LANG ?= verilog

PWD := $(shell pwd)
REPO_ROOT := $(abspath $(PWD)/../..)

VERILOG_SOURCES := $(REPO_ROOT)/RTL/PointwiseMul.v
TOPLEVEL := PointwiseMul
COCOTB_TEST_MODULES := tb

ifeq ($(SIM),verilator)
COMPILE_ARGS += -Wall \
                --trace \
                --trace-structs \
                -Wno-DECLFILENAME \
                -Wno-PINMISSING \
                -Wno-UNUSEDPARAM \
                -Wno-EOFNEWLINE \
                -Wno-WIDTHEXPAND \
                -Wno-WIDTHTRUNC \
                -Wno-BLKSEQ \
                -I$(REPO_ROOT)/RTL/DesignConfig
else
COMPILE_ARGS += -I$(REPO_ROOT)/RTL/DesignConfig
endif

export PYTHONPATH := $(REPO_ROOT)/Algo:$(PWD):$(PYTHONPATH)

include $(shell cocotb-config --makefiles)/Makefile.sim

verilog:
	iverilog -g2012 -I$(REPO_ROOT)/RTL/DesignConfig $(VERILOG_SOURCES) tb_PointwiseMul.v -o sim_verilog.vvp
	vvp sim_verilog.vvp

clean_all: clean
	rm -f sim_verilog.vvp results.xml *.vcd
