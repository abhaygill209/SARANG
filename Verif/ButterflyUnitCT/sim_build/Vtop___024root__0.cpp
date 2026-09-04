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
    vlSelfRef.ButterflyUnitCT__DOT__clk = vlSelfRef.clk;
    vlSelfRef.ButterflyUnitCT__DOT__rst = vlSelfRef.rst;
    vlSelfRef.ButterflyUnitCT__DOT__valid_i = vlSelfRef.valid_i;
    vlSelfRef.ButterflyUnitCT__DOT__stall = vlSelfRef.stall;
    vlSelfRef.ButterflyUnitCT__DOT__a_i = vlSelfRef.a_i;
    vlSelfRef.ButterflyUnitCT__DOT__b_i = vlSelfRef.b_i;
    vlSelfRef.ButterflyUnitCT__DOT__w = vlSelfRef.w;
    vlSelfRef.valid_out = vlSelfRef.ButterflyUnitCT__DOT__valid_out;
    vlSelfRef.a_o = vlSelfRef.ButterflyUnitCT__DOT__a_o;
    vlSelfRef.b_o = vlSelfRef.ButterflyUnitCT__DOT__b_o;
    vlSelfRef.ButterflyUnitCT__DOT__m_next = (0x0000ffffU 
                                              & ((IData)(0x0cffU) 
                                                 * 
                                                 (0x0000ffffU 
                                                  & vlSelfRef.ButterflyUnitCT__DOT__mult_s1)));
    vlSelfRef.ButterflyUnitCT__DOT__sub_temp = (0x00001fffU 
                                                & (((IData)(0x0d01U) 
                                                    + (IData)(vlSelfRef.ButterflyUnitCT__DOT__a_s4)) 
                                                   - (IData)(vlSelfRef.ButterflyUnitCT__DOT__bw_s4)));
    vlSelfRef.ButterflyUnitCT__DOT__mq = (0x0fffffffU 
                                          & ((IData)(0x00000d01U) 
                                             * (IData)(vlSelfRef.ButterflyUnitCT__DOT__m_s2)));
    vlSelfRef.ButterflyUnitCT__DOT__t_sub_q = (0x00001fffU 
                                               & ((IData)(vlSelfRef.ButterflyUnitCT__DOT__t_s3) 
                                                  - (IData)(0x0d01U)));
    vlSelfRef.ButterflyUnitCT__DOT__add_temp = (0x00001fffU 
                                                & ((IData)(vlSelfRef.ButterflyUnitCT__DOT__a_s4) 
                                                   + (IData)(vlSelfRef.ButterflyUnitCT__DOT__bw_s4)));
    vlSelfRef.ButterflyUnitCT__DOT__t_next = (0x1fffffffU 
                                              & (vlSelfRef.ButterflyUnitCT__DOT__mult_s2 
                                                 + vlSelfRef.ButterflyUnitCT__DOT__mq));
    vlSelfRef.ButterflyUnitCT__DOT__bw_next = (0x00000fffU 
                                               & ((0x0d01U 
                                                   <= (IData)(vlSelfRef.ButterflyUnitCT__DOT__t_s3))
                                                   ? (IData)(vlSelfRef.ButterflyUnitCT__DOT__t_sub_q)
                                                   : (IData)(vlSelfRef.ButterflyUnitCT__DOT__t_s3)));
    vlSelfRef.ButterflyUnitCT__DOT__add_sub_q = (0x00001fffU 
                                                 & ((IData)(vlSelfRef.ButterflyUnitCT__DOT__add_temp) 
                                                    - (IData)(0x0d01U)));
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
                                                    ((IData)(vlSelfRef.ButterflyUnitCT__DOT__clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ButterflyUnitCT__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__ButterflyUnitCT__DOT__clk__0 
        = vlSelfRef.ButterflyUnitCT__DOT__clk;
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
    // Locals
    CData/*0:0*/ __Vdly__ButterflyUnitCT__DOT__valid_out;
    __Vdly__ButterflyUnitCT__DOT__valid_out = 0;
    // Body
    __Vdly__ButterflyUnitCT__DOT__valid_out = vlSelfRef.ButterflyUnitCT__DOT__valid_out;
    if (vlSelfRef.ButterflyUnitCT__DOT__rst) {
        __Vdly__ButterflyUnitCT__DOT__valid_out = 0U;
        vlSelfRef.ButterflyUnitCT__DOT__a_o = 0U;
        vlSelfRef.ButterflyUnitCT__DOT__b_o = 0U;
        vlSelfRef.ButterflyUnitCT__DOT__valid_s4 = 0U;
        vlSelfRef.ButterflyUnitCT__DOT__a_s4 = 0U;
        vlSelfRef.ButterflyUnitCT__DOT__bw_s4 = 0U;
        vlSelfRef.ButterflyUnitCT__DOT__valid_s3 = 0U;
        vlSelfRef.ButterflyUnitCT__DOT__t_s3 = 0U;
        vlSelfRef.ButterflyUnitCT__DOT__a_s3 = 0U;
        vlSelfRef.ButterflyUnitCT__DOT__valid_s2 = 0U;
        vlSelfRef.ButterflyUnitCT__DOT__mult_s2 = 0U;
        vlSelfRef.ButterflyUnitCT__DOT__m_s2 = 0U;
        vlSelfRef.ButterflyUnitCT__DOT__a_s2 = 0U;
        vlSelfRef.ButterflyUnitCT__DOT__valid_s1 = 0U;
        vlSelfRef.ButterflyUnitCT__DOT__a_s1 = 0U;
        vlSelfRef.ButterflyUnitCT__DOT__mult_s1 = 0U;
    } else {
        if (vlSelfRef.ButterflyUnitCT__DOT__stall) {
            __Vdly__ButterflyUnitCT__DOT__valid_out 
                = vlSelfRef.ButterflyUnitCT__DOT__valid_out;
        } else if (vlSelfRef.ButterflyUnitCT__DOT__valid_s4) {
            __Vdly__ButterflyUnitCT__DOT__valid_out = 1U;
            vlSelfRef.ButterflyUnitCT__DOT__a_o = (0x00000fffU 
                                                   & ((0x0d01U 
                                                       <= (IData)(vlSelfRef.ButterflyUnitCT__DOT__add_temp))
                                                       ? (IData)(vlSelfRef.ButterflyUnitCT__DOT__add_sub_q)
                                                       : (IData)(vlSelfRef.ButterflyUnitCT__DOT__add_temp)));
            vlSelfRef.ButterflyUnitCT__DOT__b_o = (0x00000fffU 
                                                   & (((IData)(vlSelfRef.ButterflyUnitCT__DOT__a_s4) 
                                                       >= (IData)(vlSelfRef.ButterflyUnitCT__DOT__bw_s4))
                                                       ? 
                                                      ((IData)(vlSelfRef.ButterflyUnitCT__DOT__a_s4) 
                                                       - (IData)(vlSelfRef.ButterflyUnitCT__DOT__bw_s4))
                                                       : (IData)(vlSelfRef.ButterflyUnitCT__DOT__sub_temp)));
        } else {
            __Vdly__ButterflyUnitCT__DOT__valid_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.ButterflyUnitCT__DOT__stall)))) {
            if (vlSelfRef.ButterflyUnitCT__DOT__valid_s3) {
                vlSelfRef.ButterflyUnitCT__DOT__valid_s4 = 1U;
                vlSelfRef.ButterflyUnitCT__DOT__bw_s4 
                    = vlSelfRef.ButterflyUnitCT__DOT__bw_next;
                vlSelfRef.ButterflyUnitCT__DOT__a_s4 
                    = vlSelfRef.ButterflyUnitCT__DOT__a_s3;
            } else {
                vlSelfRef.ButterflyUnitCT__DOT__valid_s4 = 0U;
            }
            if (vlSelfRef.ButterflyUnitCT__DOT__valid_s2) {
                vlSelfRef.ButterflyUnitCT__DOT__valid_s3 = 1U;
                vlSelfRef.ButterflyUnitCT__DOT__t_s3 
                    = (0x00001fffU & (vlSelfRef.ButterflyUnitCT__DOT__t_next 
                                      >> 0x10U));
                vlSelfRef.ButterflyUnitCT__DOT__a_s3 
                    = vlSelfRef.ButterflyUnitCT__DOT__a_s2;
            } else {
                vlSelfRef.ButterflyUnitCT__DOT__valid_s3 = 0U;
            }
            if (vlSelfRef.ButterflyUnitCT__DOT__valid_s1) {
                vlSelfRef.ButterflyUnitCT__DOT__valid_s2 = 1U;
                vlSelfRef.ButterflyUnitCT__DOT__m_s2 
                    = vlSelfRef.ButterflyUnitCT__DOT__m_next;
                vlSelfRef.ButterflyUnitCT__DOT__mult_s2 
                    = vlSelfRef.ButterflyUnitCT__DOT__mult_s1;
                vlSelfRef.ButterflyUnitCT__DOT__a_s2 
                    = vlSelfRef.ButterflyUnitCT__DOT__a_s1;
            } else {
                vlSelfRef.ButterflyUnitCT__DOT__valid_s2 = 0U;
            }
            if (vlSelfRef.ButterflyUnitCT__DOT__valid_i) {
                vlSelfRef.ButterflyUnitCT__DOT__valid_s1 = 1U;
                vlSelfRef.ButterflyUnitCT__DOT__a_s1 
                    = vlSelfRef.ButterflyUnitCT__DOT__a_i;
                vlSelfRef.ButterflyUnitCT__DOT__mult_s1 
                    = (0x00ffffffU & ((IData)(vlSelfRef.ButterflyUnitCT__DOT__b_i) 
                                      * (IData)(vlSelfRef.ButterflyUnitCT__DOT__w)));
            } else {
                vlSelfRef.ButterflyUnitCT__DOT__valid_s1 = 0U;
            }
        }
    }
    vlSelfRef.ButterflyUnitCT__DOT__valid_out = __Vdly__ButterflyUnitCT__DOT__valid_out;
    vlSelfRef.valid_out = vlSelfRef.ButterflyUnitCT__DOT__valid_out;
    vlSelfRef.a_o = vlSelfRef.ButterflyUnitCT__DOT__a_o;
    vlSelfRef.b_o = vlSelfRef.ButterflyUnitCT__DOT__b_o;
    vlSelfRef.ButterflyUnitCT__DOT__sub_temp = (0x00001fffU 
                                                & (((IData)(0x0d01U) 
                                                    + (IData)(vlSelfRef.ButterflyUnitCT__DOT__a_s4)) 
                                                   - (IData)(vlSelfRef.ButterflyUnitCT__DOT__bw_s4)));
    vlSelfRef.ButterflyUnitCT__DOT__add_temp = (0x00001fffU 
                                                & ((IData)(vlSelfRef.ButterflyUnitCT__DOT__a_s4) 
                                                   + (IData)(vlSelfRef.ButterflyUnitCT__DOT__bw_s4)));
    vlSelfRef.ButterflyUnitCT__DOT__add_sub_q = (0x00001fffU 
                                                 & ((IData)(vlSelfRef.ButterflyUnitCT__DOT__add_temp) 
                                                    - (IData)(0x0d01U)));
    vlSelfRef.ButterflyUnitCT__DOT__t_sub_q = (0x00001fffU 
                                               & ((IData)(vlSelfRef.ButterflyUnitCT__DOT__t_s3) 
                                                  - (IData)(0x0d01U)));
    vlSelfRef.ButterflyUnitCT__DOT__bw_next = (0x00000fffU 
                                               & ((0x0d01U 
                                                   <= (IData)(vlSelfRef.ButterflyUnitCT__DOT__t_s3))
                                                   ? (IData)(vlSelfRef.ButterflyUnitCT__DOT__t_sub_q)
                                                   : (IData)(vlSelfRef.ButterflyUnitCT__DOT__t_s3)));
    vlSelfRef.ButterflyUnitCT__DOT__mq = (0x0fffffffU 
                                          & ((IData)(0x00000d01U) 
                                             * (IData)(vlSelfRef.ButterflyUnitCT__DOT__m_s2)));
    vlSelfRef.ButterflyUnitCT__DOT__t_next = (0x1fffffffU 
                                              & (vlSelfRef.ButterflyUnitCT__DOT__mult_s2 
                                                 + vlSelfRef.ButterflyUnitCT__DOT__mq));
    vlSelfRef.ButterflyUnitCT__DOT__m_next = (0x0000ffffU 
                                              & ((IData)(0x0cffU) 
                                                 * 
                                                 (0x0000ffffU 
                                                  & vlSelfRef.ButterflyUnitCT__DOT__mult_s1)));
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
            VL_FATAL_MT("/home/abhay/OpenSource/PQC_ASIC/RTL/ButterflyUnitCT.v", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/abhay/OpenSource/PQC_ASIC/RTL/ButterflyUnitCT.v", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/abhay/OpenSource/PQC_ASIC/RTL/ButterflyUnitCT.v", 1, "", "Active region did not converge after 100 tries");
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
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.valid_i & 0xfeU)))) {
        Verilated::overWidthError("valid_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.stall & 0xfeU)))) {
        Verilated::overWidthError("stall");
    }
    if (VL_UNLIKELY(((vlSelfRef.a_i & 0xf000U)))) {
        Verilated::overWidthError("a_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.b_i & 0xf000U)))) {
        Verilated::overWidthError("b_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.w & 0xf000U)))) {
        Verilated::overWidthError("w");
    }
}
#endif  // VL_DEBUG
