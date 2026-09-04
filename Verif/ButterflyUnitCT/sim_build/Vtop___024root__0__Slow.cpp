// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__ButterflyUnitCT__DOT__clk__0 
        = vlSelfRef.ButterflyUnitCT__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/abhay/OpenSource/PQC_ASIC/RTL/ButterflyUnitCT.v", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtop___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge ButterflyUnitCT.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 550966959580451262ull);
    vlSelf->stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7179230919112499263ull);
    vlSelf->a_i = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12042468572559684522ull);
    vlSelf->b_i = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15122488259574687123ull);
    vlSelf->w = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2482183445564601373ull);
    vlSelf->valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8744939437868816662ull);
    vlSelf->a_o = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8518468431007011424ull);
    vlSelf->b_o = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12892622049390836758ull);
    vlSelf->ButterflyUnitCT__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11381524423368894405ull);
    vlSelf->ButterflyUnitCT__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9379793570191492585ull);
    vlSelf->ButterflyUnitCT__DOT__valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1747759669550495381ull);
    vlSelf->ButterflyUnitCT__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2824224492023901280ull);
    vlSelf->ButterflyUnitCT__DOT__a_i = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7468620269751554916ull);
    vlSelf->ButterflyUnitCT__DOT__b_i = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17435180436494466461ull);
    vlSelf->ButterflyUnitCT__DOT__w = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7660333704091625676ull);
    vlSelf->ButterflyUnitCT__DOT__valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1776668184213568290ull);
    vlSelf->ButterflyUnitCT__DOT__a_o = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15956729850746473142ull);
    vlSelf->ButterflyUnitCT__DOT__b_o = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13807412275611383984ull);
    vlSelf->ButterflyUnitCT__DOT__mult_s1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7782951823511315439ull);
    vlSelf->ButterflyUnitCT__DOT__a_s1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4552328971149336939ull);
    vlSelf->ButterflyUnitCT__DOT__valid_s1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6800441833479844909ull);
    vlSelf->ButterflyUnitCT__DOT__m_s2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4473036066602792108ull);
    vlSelf->ButterflyUnitCT__DOT__mult_s2 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 18287015522981407629ull);
    vlSelf->ButterflyUnitCT__DOT__a_s2 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13429108832612428962ull);
    vlSelf->ButterflyUnitCT__DOT__valid_s2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7025218326836449685ull);
    vlSelf->ButterflyUnitCT__DOT__t_s3 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 12094464773035567199ull);
    vlSelf->ButterflyUnitCT__DOT__a_s3 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6037473885517552275ull);
    vlSelf->ButterflyUnitCT__DOT__valid_s3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5037564361857216845ull);
    vlSelf->ButterflyUnitCT__DOT__bw_s4 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8886881454748997557ull);
    vlSelf->ButterflyUnitCT__DOT__a_s4 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10416516741897697058ull);
    vlSelf->ButterflyUnitCT__DOT__valid_s4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14646177160438155552ull);
    vlSelf->ButterflyUnitCT__DOT__m_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13344334241576635682ull);
    vlSelf->ButterflyUnitCT__DOT__mq = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 5667299777869809265ull);
    vlSelf->ButterflyUnitCT__DOT__t_next = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 6160880768421481093ull);
    vlSelf->ButterflyUnitCT__DOT__t_sub_q = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 9377652862768265825ull);
    vlSelf->ButterflyUnitCT__DOT__bw_next = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3308533434221763751ull);
    vlSelf->ButterflyUnitCT__DOT__add_temp = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16887791596010389431ull);
    vlSelf->ButterflyUnitCT__DOT__add_sub_q = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7904695130785468670ull);
    vlSelf->ButterflyUnitCT__DOT__sub_temp = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 17731680492874280293ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__ButterflyUnitCT__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13952380689663085456ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
