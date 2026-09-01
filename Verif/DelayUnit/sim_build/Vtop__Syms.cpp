// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_Delay_Unit);
    __Vhier.remove(&__Vscope_Delay_Unit, &__Vscope_Delay_Unit__buffer_1);
    __Vhier.remove(&__Vscope_Delay_Unit, &__Vscope_Delay_Unit__buffer_2);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(360);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_Delay_Unit.configure(this, name(), "Delay_Unit", "Delay_Unit", "Delay_Unit", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_Delay_Unit__buffer_1.configure(this, name(), "Delay_Unit.buffer_1", "buffer_1", "DU_FIFO", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_Delay_Unit__buffer_2.configure(this, name(), "Delay_Unit.buffer_2", "buffer_2", "DU_FIFO", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_Delay_Unit);
    __Vhier.add(&__Vscope_Delay_Unit, &__Vscope_Delay_Unit__buffer_1);
    __Vhier.add(&__Vscope_Delay_Unit, &__Vscope_Delay_Unit__buffer_2);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_Delay_Unit.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.Delay_Unit__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.Delay_Unit__DOT__DEPTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"N", const_cast<void*>(static_cast<const void*>(&(TOP.Delay_Unit__DOT__N))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"STAGE", const_cast<void*>(static_cast<const void*>(&(TOP.Delay_Unit__DOT__STAGE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"a_i", &(TOP.Delay_Unit__DOT__a_i), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"a_o", &(TOP.Delay_Unit__DOT__a_o), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"b_i", &(TOP.Delay_Unit__DOT__b_i), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"b_o", &(TOP.Delay_Unit__DOT__b_o), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"buffer_1_data_i", &(TOP.Delay_Unit__DOT__buffer_1_data_i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"buffer_1_data_o", &(TOP.Delay_Unit__DOT__buffer_1_data_o), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"buffer_1_empty", &(TOP.Delay_Unit__DOT__buffer_1_empty), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"buffer_1_rd_en", &(TOP.Delay_Unit__DOT__buffer_1_rd_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"buffer_1_wr_en", &(TOP.Delay_Unit__DOT__buffer_1_wr_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"buffer_2_data_i", &(TOP.Delay_Unit__DOT__buffer_2_data_i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"buffer_2_data_o", &(TOP.Delay_Unit__DOT__buffer_2_data_o), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"buffer_2_empty", &(TOP.Delay_Unit__DOT__buffer_2_empty), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"buffer_2_rd_en", &(TOP.Delay_Unit__DOT__buffer_2_rd_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"buffer_2_wr_en", &(TOP.Delay_Unit__DOT__buffer_2_wr_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"clk_i", &(TOP.Delay_Unit__DOT__clk_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"counter", &(TOP.Delay_Unit__DOT__counter), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,8,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"fifo_change", &(TOP.Delay_Unit__DOT__fifo_change), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"rst_i", &(TOP.Delay_Unit__DOT__rst_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"stall_i", &(TOP.Delay_Unit__DOT__stall_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"state", &(TOP.Delay_Unit__DOT__state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"valid_i", &(TOP.Delay_Unit__DOT__valid_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit.varInsert(__Vfinal,"valid_o", &(TOP.Delay_Unit__DOT__valid_o), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit__buffer_1.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.Delay_Unit__DOT__buffer_1__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Delay_Unit__buffer_1.varInsert(__Vfinal,"DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.Delay_Unit__DOT__buffer_1__DOT__DEPTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Delay_Unit__buffer_1.varInsert(__Vfinal,"MEM_DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.Delay_Unit__DOT__buffer_1__DOT__MEM_DEPTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Delay_Unit__buffer_1.varInsert(__Vfinal,"PTR_W", const_cast<void*>(static_cast<const void*>(&(TOP.Delay_Unit__DOT__buffer_1__DOT__PTR_W))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Delay_Unit__buffer_1.varInsert(__Vfinal,"clk", &(TOP.Delay_Unit__DOT__buffer_1__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit__buffer_1.varInsert(__Vfinal,"empty", &(TOP.Delay_Unit__DOT__buffer_1__DOT__empty), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit__buffer_1.varInsert(__Vfinal,"full", &(TOP.Delay_Unit__DOT__buffer_1__DOT__full), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit__buffer_1.varInsert(__Vfinal,"i", &(TOP.Delay_Unit__DOT__buffer_1__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Delay_Unit__buffer_1.varInsert(__Vfinal,"mem", &(TOP.Delay_Unit__DOT__buffer_1__DOT__mem), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,771 ,15,0);
        __Vscope_Delay_Unit__buffer_1.varInsert(__Vfinal,"occupancy", &(TOP.Delay_Unit__DOT__buffer_1__DOT__occupancy), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,10,0);
        __Vscope_Delay_Unit__buffer_1.varInsert(__Vfinal,"rd_data", &(TOP.Delay_Unit__DOT__buffer_1__DOT__rd_data), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_Delay_Unit__buffer_1.varInsert(__Vfinal,"rd_en", &(TOP.Delay_Unit__DOT__buffer_1__DOT__rd_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit__buffer_1.varInsert(__Vfinal,"rd_ptr", &(TOP.Delay_Unit__DOT__buffer_1__DOT__rd_ptr), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,9,0);
        __Vscope_Delay_Unit__buffer_1.varInsert(__Vfinal,"rst", &(TOP.Delay_Unit__DOT__buffer_1__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit__buffer_1.varInsert(__Vfinal,"wr_data", &(TOP.Delay_Unit__DOT__buffer_1__DOT__wr_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Delay_Unit__buffer_1.varInsert(__Vfinal,"wr_en", &(TOP.Delay_Unit__DOT__buffer_1__DOT__wr_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit__buffer_1.varInsert(__Vfinal,"wr_ptr", &(TOP.Delay_Unit__DOT__buffer_1__DOT__wr_ptr), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,9,0);
        __Vscope_Delay_Unit__buffer_2.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.Delay_Unit__DOT__buffer_2__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Delay_Unit__buffer_2.varInsert(__Vfinal,"DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.Delay_Unit__DOT__buffer_2__DOT__DEPTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Delay_Unit__buffer_2.varInsert(__Vfinal,"MEM_DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.Delay_Unit__DOT__buffer_2__DOT__MEM_DEPTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Delay_Unit__buffer_2.varInsert(__Vfinal,"PTR_W", const_cast<void*>(static_cast<const void*>(&(TOP.Delay_Unit__DOT__buffer_2__DOT__PTR_W))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Delay_Unit__buffer_2.varInsert(__Vfinal,"clk", &(TOP.Delay_Unit__DOT__buffer_2__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit__buffer_2.varInsert(__Vfinal,"empty", &(TOP.Delay_Unit__DOT__buffer_2__DOT__empty), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit__buffer_2.varInsert(__Vfinal,"full", &(TOP.Delay_Unit__DOT__buffer_2__DOT__full), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit__buffer_2.varInsert(__Vfinal,"i", &(TOP.Delay_Unit__DOT__buffer_2__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Delay_Unit__buffer_2.varInsert(__Vfinal,"mem", &(TOP.Delay_Unit__DOT__buffer_2__DOT__mem), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,771 ,15,0);
        __Vscope_Delay_Unit__buffer_2.varInsert(__Vfinal,"occupancy", &(TOP.Delay_Unit__DOT__buffer_2__DOT__occupancy), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,10,0);
        __Vscope_Delay_Unit__buffer_2.varInsert(__Vfinal,"rd_data", &(TOP.Delay_Unit__DOT__buffer_2__DOT__rd_data), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_Delay_Unit__buffer_2.varInsert(__Vfinal,"rd_en", &(TOP.Delay_Unit__DOT__buffer_2__DOT__rd_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit__buffer_2.varInsert(__Vfinal,"rd_ptr", &(TOP.Delay_Unit__DOT__buffer_2__DOT__rd_ptr), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,9,0);
        __Vscope_Delay_Unit__buffer_2.varInsert(__Vfinal,"rst", &(TOP.Delay_Unit__DOT__buffer_2__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit__buffer_2.varInsert(__Vfinal,"wr_data", &(TOP.Delay_Unit__DOT__buffer_2__DOT__wr_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Delay_Unit__buffer_2.varInsert(__Vfinal,"wr_en", &(TOP.Delay_Unit__DOT__buffer_2__DOT__wr_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Delay_Unit__buffer_2.varInsert(__Vfinal,"wr_ptr", &(TOP.Delay_Unit__DOT__buffer_2__DOT__wr_ptr), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,9,0);
        __Vscope_TOP.varInsert(__Vfinal,"a_i", &(TOP.a_i), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"a_o", &(TOP.a_o), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"b_i", &(TOP.b_i), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"b_o", &(TOP.b_o), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk_i", &(TOP.clk_i), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst_i", &(TOP.rst_i), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"stall_i", &(TOP.stall_i), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"valid_i", &(TOP.valid_i), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"valid_o", &(TOP.valid_o), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
    }
}
