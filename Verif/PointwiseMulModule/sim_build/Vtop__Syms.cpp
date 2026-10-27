// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_PointwiseMul);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(250);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_PointwiseMul.configure(this, name(), "PointwiseMul", "PointwiseMul", "PointwiseMul", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_PointwiseMul);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_PointwiseMul.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.PointwiseMul__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"Q", const_cast<void*>(static_cast<const void*>(&(TOP.PointwiseMul__DOT__Q))), true, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"Q_INV", const_cast<void*>(static_cast<const void*>(&(TOP.PointwiseMul__DOT__Q_INV))), true, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"Q_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.PointwiseMul__DOT__Q_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"a1_i", &(TOP.PointwiseMul__DOT__a1_i), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"a2_i", &(TOP.PointwiseMul__DOT__a2_i), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"a_o", &(TOP.PointwiseMul__DOT__a_o), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"b1_i", &(TOP.PointwiseMul__DOT__b1_i), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"b2_i", &(TOP.PointwiseMul__DOT__b2_i), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"b_o", &(TOP.PointwiseMul__DOT__b_o), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"clk_i", &(TOP.PointwiseMul__DOT__clk_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"corr_a_s3", &(TOP.PointwiseMul__DOT__corr_a_s3), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"corr_b_s3", &(TOP.PointwiseMul__DOT__corr_b_s3), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"m_a_s2", &(TOP.PointwiseMul__DOT__m_a_s2), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"m_b_s2", &(TOP.PointwiseMul__DOT__m_b_s2), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"mont_a_s5", &(TOP.PointwiseMul__DOT__mont_a_s5), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,16,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"mont_b_s5", &(TOP.PointwiseMul__DOT__mont_b_s5), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,16,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"prod_a_s1", &(TOP.PointwiseMul__DOT__prod_a_s1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"prod_a_s2", &(TOP.PointwiseMul__DOT__prod_a_s2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"prod_a_s3", &(TOP.PointwiseMul__DOT__prod_a_s3), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"prod_b_s1", &(TOP.PointwiseMul__DOT__prod_b_s1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"prod_b_s2", &(TOP.PointwiseMul__DOT__prod_b_s2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"prod_b_s3", &(TOP.PointwiseMul__DOT__prod_b_s3), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"q_extended", &(TOP.PointwiseMul__DOT__q_extended), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,16,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"reduced_a_s5", &(TOP.PointwiseMul__DOT__reduced_a_s5), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,16,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"reduced_b_s5", &(TOP.PointwiseMul__DOT__reduced_b_s5), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,16,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"rst_i", &(TOP.PointwiseMul__DOT__rst_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"sum_a_s4", &(TOP.PointwiseMul__DOT__sum_a_s4), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,32,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"sum_b_s4", &(TOP.PointwiseMul__DOT__sum_b_s4), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,32,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"valid_i", &(TOP.PointwiseMul__DOT__valid_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"valid_o", &(TOP.PointwiseMul__DOT__valid_o), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"valid_s1", &(TOP.PointwiseMul__DOT__valid_s1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"valid_s2", &(TOP.PointwiseMul__DOT__valid_s2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"valid_s3", &(TOP.PointwiseMul__DOT__valid_s3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"valid_s4", &(TOP.PointwiseMul__DOT__valid_s4), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_PointwiseMul.varInsert(__Vfinal,"valid_s5", &(TOP.PointwiseMul__DOT__valid_s5), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"a1_i", &(TOP.a1_i), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"a2_i", &(TOP.a2_i), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"a_o", &(TOP.a_o), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"b1_i", &(TOP.b1_i), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"b2_i", &(TOP.b2_i), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"b_o", &(TOP.b_o), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk_i", &(TOP.clk_i), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst_i", &(TOP.rst_i), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"valid_i", &(TOP.valid_i), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"valid_o", &(TOP.valid_o), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
    }
}
