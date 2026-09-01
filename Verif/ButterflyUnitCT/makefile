SIM ?= verilator
TOPLEVEL_LANG ?= verilog

PWD := $(shell pwd)
REPO_ROOT := $(abspath $(PWD)/../..)

VERILOG_SOURCES := $(REPO_ROOT)/RTL/ButterflyUnitCT.v
TOPLEVEL := ButterflyUnitCT
COCOTB_TEST_MODULES := tb

COMPILE_ARGS += -Wall

export PYTHONPATH := $(REPO_ROOT)/Algo:$(PYTHONPATH)

include $(shell cocotb-config --makefiles)/Makefile.sim
