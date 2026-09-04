// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_ButterflyUnitCT);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(252);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_ButterflyUnitCT.configure(this, name(), "ButterflyUnitCT", "ButterflyUnitCT", "ButterflyUnitCT", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_ButterflyUnitCT);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.ButterflyUnitCT__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"MQ_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.ButterflyUnitCT__DOT__MQ_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"MULT_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.ButterflyUnitCT__DOT__MULT_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"Q", const_cast<void*>(static_cast<const void*>(&(TOP.ButterflyUnitCT__DOT__Q))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"Q_INV", const_cast<void*>(static_cast<const void*>(&(TOP.ButterflyUnitCT__DOT__Q_INV))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"Q_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.ButterflyUnitCT__DOT__Q_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"TDIV_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.ButterflyUnitCT__DOT__TDIV_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"T_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.ButterflyUnitCT__DOT__T_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"a_i", &(TOP.ButterflyUnitCT__DOT__a_i), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"a_o", &(TOP.ButterflyUnitCT__DOT__a_o), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"a_s1", &(TOP.ButterflyUnitCT__DOT__a_s1), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"a_s2", &(TOP.ButterflyUnitCT__DOT__a_s2), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"a_s3", &(TOP.ButterflyUnitCT__DOT__a_s3), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"a_s4", &(TOP.ButterflyUnitCT__DOT__a_s4), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"add_sub_q", &(TOP.ButterflyUnitCT__DOT__add_sub_q), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,12,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"add_temp", &(TOP.ButterflyUnitCT__DOT__add_temp), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,12,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"b_i", &(TOP.ButterflyUnitCT__DOT__b_i), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"b_o", &(TOP.ButterflyUnitCT__DOT__b_o), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"bw_next", &(TOP.ButterflyUnitCT__DOT__bw_next), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"bw_s4", &(TOP.ButterflyUnitCT__DOT__bw_s4), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"clk", &(TOP.ButterflyUnitCT__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"m_next", &(TOP.ButterflyUnitCT__DOT__m_next), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"m_s2", &(TOP.ButterflyUnitCT__DOT__m_s2), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"mq", &(TOP.ButterflyUnitCT__DOT__mq), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,27,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"mult_s1", &(TOP.ButterflyUnitCT__DOT__mult_s1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,23,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"mult_s2", &(TOP.ButterflyUnitCT__DOT__mult_s2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,23,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"rst", &(TOP.ButterflyUnitCT__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"stall", &(TOP.ButterflyUnitCT__DOT__stall), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"sub_temp", &(TOP.ButterflyUnitCT__DOT__sub_temp), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,12,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"t_next", &(TOP.ButterflyUnitCT__DOT__t_next), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,28,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"t_s3", &(TOP.ButterflyUnitCT__DOT__t_s3), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,12,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"t_sub_q", &(TOP.ButterflyUnitCT__DOT__t_sub_q), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,12,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"valid_i", &(TOP.ButterflyUnitCT__DOT__valid_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"valid_out", &(TOP.ButterflyUnitCT__DOT__valid_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"valid_s1", &(TOP.ButterflyUnitCT__DOT__valid_s1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"valid_s2", &(TOP.ButterflyUnitCT__DOT__valid_s2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"valid_s3", &(TOP.ButterflyUnitCT__DOT__valid_s3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"valid_s4", &(TOP.ButterflyUnitCT__DOT__valid_s4), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ButterflyUnitCT.varInsert(__Vfinal,"w", &(TOP.ButterflyUnitCT__DOT__w), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_TOP.varInsert(__Vfinal,"a_i", &(TOP.a_i), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_TOP.varInsert(__Vfinal,"a_o", &(TOP.a_o), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_TOP.varInsert(__Vfinal,"b_i", &(TOP.b_i), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_TOP.varInsert(__Vfinal,"b_o", &(TOP.b_o), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst", &(TOP.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"stall", &(TOP.stall), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"valid_i", &(TOP.valid_i), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"valid_out", &(TOP.valid_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"w", &(TOP.w), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,0,1 ,11,0);
    }
}
