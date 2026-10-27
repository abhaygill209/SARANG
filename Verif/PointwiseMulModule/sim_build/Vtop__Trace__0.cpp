// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    bufp->chgBit(oldp+0,(vlSelfRef.clk_i));
    bufp->chgBit(oldp+1,(vlSelfRef.rst_i));
    bufp->chgSData(oldp+2,(vlSelfRef.a1_i),16);
    bufp->chgSData(oldp+3,(vlSelfRef.a2_i),16);
    bufp->chgSData(oldp+4,(vlSelfRef.b1_i),16);
    bufp->chgSData(oldp+5,(vlSelfRef.b2_i),16);
    bufp->chgBit(oldp+6,(vlSelfRef.valid_i));
    bufp->chgBit(oldp+7,(vlSelfRef.valid_o));
    bufp->chgSData(oldp+8,(vlSelfRef.a_o),16);
    bufp->chgSData(oldp+9,(vlSelfRef.b_o),16);
    bufp->chgBit(oldp+10,(vlSelfRef.PointwiseMul__DOT__clk_i));
    bufp->chgBit(oldp+11,(vlSelfRef.PointwiseMul__DOT__rst_i));
    bufp->chgSData(oldp+12,(vlSelfRef.PointwiseMul__DOT__a1_i),16);
    bufp->chgSData(oldp+13,(vlSelfRef.PointwiseMul__DOT__a2_i),16);
    bufp->chgSData(oldp+14,(vlSelfRef.PointwiseMul__DOT__b1_i),16);
    bufp->chgSData(oldp+15,(vlSelfRef.PointwiseMul__DOT__b2_i),16);
    bufp->chgBit(oldp+16,(vlSelfRef.PointwiseMul__DOT__valid_i));
    bufp->chgBit(oldp+17,(vlSelfRef.PointwiseMul__DOT__valid_o));
    bufp->chgSData(oldp+18,(vlSelfRef.PointwiseMul__DOT__a_o),16);
    bufp->chgSData(oldp+19,(vlSelfRef.PointwiseMul__DOT__b_o),16);
    bufp->chgIData(oldp+20,(vlSelfRef.PointwiseMul__DOT__prod_a_s1),32);
    bufp->chgIData(oldp+21,(vlSelfRef.PointwiseMul__DOT__prod_b_s1),32);
    bufp->chgBit(oldp+22,(vlSelfRef.PointwiseMul__DOT__valid_s1));
    bufp->chgIData(oldp+23,(vlSelfRef.PointwiseMul__DOT__prod_a_s2),32);
    bufp->chgIData(oldp+24,(vlSelfRef.PointwiseMul__DOT__prod_b_s2),32);
    bufp->chgSData(oldp+25,(vlSelfRef.PointwiseMul__DOT__m_a_s2),16);
    bufp->chgSData(oldp+26,(vlSelfRef.PointwiseMul__DOT__m_b_s2),16);
    bufp->chgBit(oldp+27,(vlSelfRef.PointwiseMul__DOT__valid_s2));
    bufp->chgIData(oldp+28,(vlSelfRef.PointwiseMul__DOT__prod_a_s3),32);
    bufp->chgIData(oldp+29,(vlSelfRef.PointwiseMul__DOT__prod_b_s3),32);
    bufp->chgIData(oldp+30,(vlSelfRef.PointwiseMul__DOT__corr_a_s3),32);
    bufp->chgIData(oldp+31,(vlSelfRef.PointwiseMul__DOT__corr_b_s3),32);
    bufp->chgBit(oldp+32,(vlSelfRef.PointwiseMul__DOT__valid_s3));
    bufp->chgQData(oldp+33,(vlSelfRef.PointwiseMul__DOT__sum_a_s4),33);
    bufp->chgQData(oldp+35,(vlSelfRef.PointwiseMul__DOT__sum_b_s4),33);
    bufp->chgBit(oldp+37,(vlSelfRef.PointwiseMul__DOT__valid_s4));
    bufp->chgIData(oldp+38,(vlSelfRef.PointwiseMul__DOT__mont_a_s5),17);
    bufp->chgIData(oldp+39,(vlSelfRef.PointwiseMul__DOT__mont_b_s5),17);
    bufp->chgIData(oldp+40,(vlSelfRef.PointwiseMul__DOT__q_extended),17);
    bufp->chgIData(oldp+41,(vlSelfRef.PointwiseMul__DOT__reduced_a_s5),17);
    bufp->chgIData(oldp+42,(vlSelfRef.PointwiseMul__DOT__reduced_b_s5),17);
    bufp->chgBit(oldp+43,(vlSelfRef.PointwiseMul__DOT__valid_s5));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
