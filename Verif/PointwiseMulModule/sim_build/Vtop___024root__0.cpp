// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PointwiseMul__DOT__clk_i = vlSelfRef.clk_i;
    vlSelfRef.PointwiseMul__DOT__rst_i = vlSelfRef.rst_i;
    vlSelfRef.PointwiseMul__DOT__a1_i = vlSelfRef.a1_i;
    vlSelfRef.PointwiseMul__DOT__a2_i = vlSelfRef.a2_i;
    vlSelfRef.PointwiseMul__DOT__b1_i = vlSelfRef.b1_i;
    vlSelfRef.PointwiseMul__DOT__b2_i = vlSelfRef.b2_i;
    vlSelfRef.PointwiseMul__DOT__valid_i = vlSelfRef.valid_i;
    vlSelfRef.valid_o = vlSelfRef.PointwiseMul__DOT__valid_o;
    vlSelfRef.a_o = vlSelfRef.PointwiseMul__DOT__a_o;
    vlSelfRef.b_o = vlSelfRef.PointwiseMul__DOT__b_o;
    vlSelfRef.PointwiseMul__DOT__mont_a_s5 = (0x0001ffffU 
                                              & (IData)(
                                                        (vlSelfRef.PointwiseMul__DOT__sum_a_s4 
                                                         >> 0x00000010U)));
    vlSelfRef.PointwiseMul__DOT__mont_b_s5 = (0x0001ffffU 
                                              & (IData)(
                                                        (vlSelfRef.PointwiseMul__DOT__sum_b_s4 
                                                         >> 0x00000010U)));
    vlSelfRef.PointwiseMul__DOT__reduced_a_s5 = (0x0001ffffU 
                                                 & ((vlSelfRef.PointwiseMul__DOT__mont_a_s5 
                                                     >= vlSelfRef.PointwiseMul__DOT__q_extended)
                                                     ? 
                                                    (vlSelfRef.PointwiseMul__DOT__mont_a_s5 
                                                     - vlSelfRef.PointwiseMul__DOT__q_extended)
                                                     : vlSelfRef.PointwiseMul__DOT__mont_a_s5));
    vlSelfRef.PointwiseMul__DOT__reduced_b_s5 = (0x0001ffffU 
                                                 & ((vlSelfRef.PointwiseMul__DOT__mont_b_s5 
                                                     >= vlSelfRef.PointwiseMul__DOT__q_extended)
                                                     ? 
                                                    (vlSelfRef.PointwiseMul__DOT__mont_b_s5 
                                                     - vlSelfRef.PointwiseMul__DOT__q_extended)
                                                     : vlSelfRef.PointwiseMul__DOT__mont_b_s5));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.PointwiseMul__DOT__clk_i) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__PointwiseMul__DOT__clk_i__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__PointwiseMul__DOT__clk_i__0 
        = vlSelfRef.PointwiseMul__DOT__clk_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PointwiseMul__DOT__valid_s5 = ((1U & 
                                              (~ (IData)(vlSelfRef.PointwiseMul__DOT__rst_i))) 
                                             && (IData)(vlSelfRef.PointwiseMul__DOT__valid_s4));
    vlSelfRef.PointwiseMul__DOT__valid_o = ((1U & (~ (IData)(vlSelfRef.PointwiseMul__DOT__rst_i))) 
                                            && (IData)(vlSelfRef.PointwiseMul__DOT__valid_s4));
    if (vlSelfRef.PointwiseMul__DOT__rst_i) {
        vlSelfRef.PointwiseMul__DOT__a_o = 0U;
        vlSelfRef.PointwiseMul__DOT__b_o = 0U;
        vlSelfRef.PointwiseMul__DOT__sum_a_s4 = 0ULL;
        vlSelfRef.PointwiseMul__DOT__sum_b_s4 = 0ULL;
        vlSelfRef.PointwiseMul__DOT__prod_a_s3 = 0U;
        vlSelfRef.PointwiseMul__DOT__corr_a_s3 = 0U;
        vlSelfRef.PointwiseMul__DOT__prod_b_s3 = 0U;
        vlSelfRef.PointwiseMul__DOT__corr_b_s3 = 0U;
        vlSelfRef.PointwiseMul__DOT__prod_a_s2 = 0U;
        vlSelfRef.PointwiseMul__DOT__m_a_s2 = 0U;
        vlSelfRef.PointwiseMul__DOT__prod_b_s2 = 0U;
        vlSelfRef.PointwiseMul__DOT__m_b_s2 = 0U;
        vlSelfRef.PointwiseMul__DOT__prod_a_s1 = 0U;
        vlSelfRef.PointwiseMul__DOT__prod_b_s1 = 0U;
    } else {
        if (vlSelfRef.PointwiseMul__DOT__valid_s4) {
            vlSelfRef.PointwiseMul__DOT__a_o = (0x0000ffffU 
                                                & vlSelfRef.PointwiseMul__DOT__reduced_a_s5);
            vlSelfRef.PointwiseMul__DOT__b_o = (0x0000ffffU 
                                                & vlSelfRef.PointwiseMul__DOT__reduced_b_s5);
        }
        if (vlSelfRef.PointwiseMul__DOT__valid_s3) {
            vlSelfRef.PointwiseMul__DOT__sum_a_s4 = 
                (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.PointwiseMul__DOT__prod_a_s3)) 
                                          + (QData)((IData)(vlSelfRef.PointwiseMul__DOT__corr_a_s3))));
            vlSelfRef.PointwiseMul__DOT__sum_b_s4 = 
                (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.PointwiseMul__DOT__prod_b_s3)) 
                                          + (QData)((IData)(vlSelfRef.PointwiseMul__DOT__corr_b_s3))));
        }
        if (vlSelfRef.PointwiseMul__DOT__valid_s2) {
            vlSelfRef.PointwiseMul__DOT__prod_a_s3 
                = vlSelfRef.PointwiseMul__DOT__prod_a_s2;
            vlSelfRef.PointwiseMul__DOT__corr_a_s3 
                = ((IData)(0x00001e01U) * (IData)(vlSelfRef.PointwiseMul__DOT__m_a_s2));
            vlSelfRef.PointwiseMul__DOT__prod_b_s3 
                = vlSelfRef.PointwiseMul__DOT__prod_b_s2;
            vlSelfRef.PointwiseMul__DOT__corr_b_s3 
                = ((IData)(0x00001e01U) * (IData)(vlSelfRef.PointwiseMul__DOT__m_b_s2));
        }
        if (vlSelfRef.PointwiseMul__DOT__valid_s1) {
            vlSelfRef.PointwiseMul__DOT__prod_a_s2 
                = vlSelfRef.PointwiseMul__DOT__prod_a_s1;
            vlSelfRef.PointwiseMul__DOT__m_a_s2 = (0x0000ffffU 
                                                   & ((IData)(0x00001dffU) 
                                                      * vlSelfRef.PointwiseMul__DOT__prod_a_s1));
            vlSelfRef.PointwiseMul__DOT__prod_b_s2 
                = vlSelfRef.PointwiseMul__DOT__prod_b_s1;
            vlSelfRef.PointwiseMul__DOT__m_b_s2 = (0x0000ffffU 
                                                   & ((IData)(0x00001dffU) 
                                                      * vlSelfRef.PointwiseMul__DOT__prod_b_s1));
        }
        if (vlSelfRef.PointwiseMul__DOT__valid_i) {
            vlSelfRef.PointwiseMul__DOT__prod_a_s1 
                = ((IData)(vlSelfRef.PointwiseMul__DOT__a1_i) 
                   * (IData)(vlSelfRef.PointwiseMul__DOT__a2_i));
            vlSelfRef.PointwiseMul__DOT__prod_b_s1 
                = ((IData)(vlSelfRef.PointwiseMul__DOT__b1_i) 
                   * (IData)(vlSelfRef.PointwiseMul__DOT__b2_i));
        }
    }
    vlSelfRef.valid_o = vlSelfRef.PointwiseMul__DOT__valid_o;
    vlSelfRef.a_o = vlSelfRef.PointwiseMul__DOT__a_o;
    vlSelfRef.b_o = vlSelfRef.PointwiseMul__DOT__b_o;
    vlSelfRef.PointwiseMul__DOT__valid_s4 = ((1U & 
                                              (~ (IData)(vlSelfRef.PointwiseMul__DOT__rst_i))) 
                                             && (IData)(vlSelfRef.PointwiseMul__DOT__valid_s3));
    vlSelfRef.PointwiseMul__DOT__mont_a_s5 = (0x0001ffffU 
                                              & (IData)(
                                                        (vlSelfRef.PointwiseMul__DOT__sum_a_s4 
                                                         >> 0x00000010U)));
    vlSelfRef.PointwiseMul__DOT__mont_b_s5 = (0x0001ffffU 
                                              & (IData)(
                                                        (vlSelfRef.PointwiseMul__DOT__sum_b_s4 
                                                         >> 0x00000010U)));
    vlSelfRef.PointwiseMul__DOT__reduced_a_s5 = (0x0001ffffU 
                                                 & ((vlSelfRef.PointwiseMul__DOT__mont_a_s5 
                                                     >= vlSelfRef.PointwiseMul__DOT__q_extended)
                                                     ? 
                                                    (vlSelfRef.PointwiseMul__DOT__mont_a_s5 
                                                     - vlSelfRef.PointwiseMul__DOT__q_extended)
                                                     : vlSelfRef.PointwiseMul__DOT__mont_a_s5));
    vlSelfRef.PointwiseMul__DOT__reduced_b_s5 = (0x0001ffffU 
                                                 & ((vlSelfRef.PointwiseMul__DOT__mont_b_s5 
                                                     >= vlSelfRef.PointwiseMul__DOT__q_extended)
                                                     ? 
                                                    (vlSelfRef.PointwiseMul__DOT__mont_b_s5 
                                                     - vlSelfRef.PointwiseMul__DOT__q_extended)
                                                     : vlSelfRef.PointwiseMul__DOT__mont_b_s5));
    vlSelfRef.PointwiseMul__DOT__valid_s3 = ((1U & 
                                              (~ (IData)(vlSelfRef.PointwiseMul__DOT__rst_i))) 
                                             && (IData)(vlSelfRef.PointwiseMul__DOT__valid_s2));
    vlSelfRef.PointwiseMul__DOT__valid_s2 = ((1U & 
                                              (~ (IData)(vlSelfRef.PointwiseMul__DOT__rst_i))) 
                                             && (IData)(vlSelfRef.PointwiseMul__DOT__valid_s1));
    vlSelfRef.PointwiseMul__DOT__valid_s1 = ((1U & 
                                              (~ (IData)(vlSelfRef.PointwiseMul__DOT__rst_i))) 
                                             && (IData)(vlSelfRef.PointwiseMul__DOT__valid_i));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    Vtop___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/abhay/OpenSource/PQC_ASIC/RTL/PointwiseMul.v", 3, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/abhay/OpenSource/PQC_ASIC/RTL/PointwiseMul.v", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/abhay/OpenSource/PQC_ASIC/RTL/PointwiseMul.v", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop___024root___eval_phase__act(vlSelf));
    } while (Vtop___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_i & 0xfeU)))) {
        Verilated::overWidthError("clk_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_i & 0xfeU)))) {
        Verilated::overWidthError("rst_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.valid_i & 0xfeU)))) {
        Verilated::overWidthError("valid_i");
    }
}
#endif  // VL_DEBUG
