// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"a1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+4,0,"a2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"b1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"b2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+7,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"a_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("PointwiseMul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+45,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+45,0,"Q_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+46,0,"Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+47,0,"Q_INV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+11,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"a1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"a2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+15,0,"b1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+16,0,"b2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+17,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"a_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+21,0,"prod_a_s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"prod_b_s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"valid_s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"prod_a_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"prod_b_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"m_a_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+27,0,"m_b_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+28,0,"valid_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"prod_a_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"prod_b_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"corr_a_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"corr_b_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"valid_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+34,0,"sum_a_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+36,0,"sum_b_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+38,0,"valid_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"mont_a_s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+40,0,"mont_b_s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+41,0,"q_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+42,0,"reduced_a_s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+43,0,"reduced_b_s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+44,0,"valid_s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+45,(0x00000010U),32);
    bufp->fullSData(oldp+46,(0x1e01U),16);
    bufp->fullSData(oldp+47,(0x1dffU),16);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.clk_i));
    bufp->fullBit(oldp+2,(vlSelfRef.rst_i));
    bufp->fullSData(oldp+3,(vlSelfRef.a1_i),16);
    bufp->fullSData(oldp+4,(vlSelfRef.a2_i),16);
    bufp->fullSData(oldp+5,(vlSelfRef.b1_i),16);
    bufp->fullSData(oldp+6,(vlSelfRef.b2_i),16);
    bufp->fullBit(oldp+7,(vlSelfRef.valid_i));
    bufp->fullBit(oldp+8,(vlSelfRef.valid_o));
    bufp->fullSData(oldp+9,(vlSelfRef.a_o),16);
    bufp->fullSData(oldp+10,(vlSelfRef.b_o),16);
    bufp->fullBit(oldp+11,(vlSelfRef.PointwiseMul__DOT__clk_i));
    bufp->fullBit(oldp+12,(vlSelfRef.PointwiseMul__DOT__rst_i));
    bufp->fullSData(oldp+13,(vlSelfRef.PointwiseMul__DOT__a1_i),16);
    bufp->fullSData(oldp+14,(vlSelfRef.PointwiseMul__DOT__a2_i),16);
    bufp->fullSData(oldp+15,(vlSelfRef.PointwiseMul__DOT__b1_i),16);
    bufp->fullSData(oldp+16,(vlSelfRef.PointwiseMul__DOT__b2_i),16);
    bufp->fullBit(oldp+17,(vlSelfRef.PointwiseMul__DOT__valid_i));
    bufp->fullBit(oldp+18,(vlSelfRef.PointwiseMul__DOT__valid_o));
    bufp->fullSData(oldp+19,(vlSelfRef.PointwiseMul__DOT__a_o),16);
    bufp->fullSData(oldp+20,(vlSelfRef.PointwiseMul__DOT__b_o),16);
    bufp->fullIData(oldp+21,(vlSelfRef.PointwiseMul__DOT__prod_a_s1),32);
    bufp->fullIData(oldp+22,(vlSelfRef.PointwiseMul__DOT__prod_b_s1),32);
    bufp->fullBit(oldp+23,(vlSelfRef.PointwiseMul__DOT__valid_s1));
    bufp->fullIData(oldp+24,(vlSelfRef.PointwiseMul__DOT__prod_a_s2),32);
    bufp->fullIData(oldp+25,(vlSelfRef.PointwiseMul__DOT__prod_b_s2),32);
    bufp->fullSData(oldp+26,(vlSelfRef.PointwiseMul__DOT__m_a_s2),16);
    bufp->fullSData(oldp+27,(vlSelfRef.PointwiseMul__DOT__m_b_s2),16);
    bufp->fullBit(oldp+28,(vlSelfRef.PointwiseMul__DOT__valid_s2));
    bufp->fullIData(oldp+29,(vlSelfRef.PointwiseMul__DOT__prod_a_s3),32);
    bufp->fullIData(oldp+30,(vlSelfRef.PointwiseMul__DOT__prod_b_s3),32);
    bufp->fullIData(oldp+31,(vlSelfRef.PointwiseMul__DOT__corr_a_s3),32);
    bufp->fullIData(oldp+32,(vlSelfRef.PointwiseMul__DOT__corr_b_s3),32);
    bufp->fullBit(oldp+33,(vlSelfRef.PointwiseMul__DOT__valid_s3));
    bufp->fullQData(oldp+34,(vlSelfRef.PointwiseMul__DOT__sum_a_s4),33);
    bufp->fullQData(oldp+36,(vlSelfRef.PointwiseMul__DOT__sum_b_s4),33);
    bufp->fullBit(oldp+38,(vlSelfRef.PointwiseMul__DOT__valid_s4));
    bufp->fullIData(oldp+39,(vlSelfRef.PointwiseMul__DOT__mont_a_s5),17);
    bufp->fullIData(oldp+40,(vlSelfRef.PointwiseMul__DOT__mont_b_s5),17);
    bufp->fullIData(oldp+41,(vlSelfRef.PointwiseMul__DOT__q_extended),17);
    bufp->fullIData(oldp+42,(vlSelfRef.PointwiseMul__DOT__reduced_a_s5),17);
    bufp->fullIData(oldp+43,(vlSelfRef.PointwiseMul__DOT__reduced_b_s5),17);
    bufp->fullBit(oldp+44,(vlSelfRef.PointwiseMul__DOT__valid_s5));
}
