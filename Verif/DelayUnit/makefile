SIM ?= verilator
TOPLEVEL_LANG ?= verilog

PWD := $(shell pwd)
REPO_ROOT := $(abspath $(PWD)/../..)

VERILOG_SOURCES := $(REPO_ROOT)/RTL/Delay_unit.v $(REPO_ROOT)/RTL/DU_FIFO.v
TOPLEVEL := Delay_Unit
COCOTB_TEST_MODULES := tb

COMPILE_ARGS += -Wall -Wno-DECLFILENAME -Wno-PINMISSING -Wno-UNUSEDPARAM -Wno-EOFNEWLINE -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC

# Support overriding STAGE, DATA_WIDTH, DEPTH, N via make arguments
# e.g., make STAGE=2 DEPTH=16
ifdef STAGE
  COMPILE_ARGS += -GSTAGE=$(STAGE)
endif
ifdef DATA_WIDTH
  COMPILE_ARGS += -GDATA_WIDTH=$(DATA_WIDTH)
endif
ifdef DEPTH
  COMPILE_ARGS += -GDEPTH=$(DEPTH)
endif
ifdef N
  COMPILE_ARGS += -GN=$(N)
endif

export PYTHONPATH := $(REPO_ROOT)/Algo:$(PWD):$(PYTHONPATH)

include $(shell cocotb-config --makefiles)/Makefile.sim
