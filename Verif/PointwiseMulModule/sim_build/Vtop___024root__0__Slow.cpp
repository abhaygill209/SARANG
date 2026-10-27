// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__PointwiseMul__DOT__clk_i__0 
        = vlSelfRef.PointwiseMul__DOT__clk_i;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PointwiseMul__DOT__q_extended = 0x00001e01U;
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
            VL_FATAL_MT("/home/abhay/OpenSource/PQC_ASIC/RTL/PointwiseMul.v", 3, "", "Settle region did not converge after 100 tries");
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge PointwiseMul.clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726502174457611970ull);
    vlSelf->a1_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 454480909424991650ull);
    vlSelf->a2_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17021087685948604330ull);
    vlSelf->b1_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17543689759187387005ull);
    vlSelf->b2_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10145106906596560941ull);
    vlSelf->valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 550966959580451262ull);
    vlSelf->valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10854271546065566948ull);
    vlSelf->a_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8518468431007011424ull);
    vlSelf->b_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12892622049390836758ull);
    vlSelf->PointwiseMul__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1762077438344832224ull);
    vlSelf->PointwiseMul__DOT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11276424468619404164ull);
    vlSelf->PointwiseMul__DOT__a1_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5632336058494702556ull);
    vlSelf->PointwiseMul__DOT__a2_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8803397376630946467ull);
    vlSelf->PointwiseMul__DOT__b1_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7140519053412354206ull);
    vlSelf->PointwiseMul__DOT__b2_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7825240207928069785ull);
    vlSelf->PointwiseMul__DOT__valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10057001056959643114ull);
    vlSelf->PointwiseMul__DOT__valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9624589060884369130ull);
    vlSelf->PointwiseMul__DOT__a_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2742595222451449070ull);
    vlSelf->PointwiseMul__DOT__b_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1863511992265700650ull);
    vlSelf->PointwiseMul__DOT__prod_a_s1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7045799879253514004ull);
    vlSelf->PointwiseMul__DOT__prod_b_s1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15753909909941946475ull);
    vlSelf->PointwiseMul__DOT__valid_s1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2024159614414792865ull);
    vlSelf->PointwiseMul__DOT__prod_a_s2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10419260034992208737ull);
    vlSelf->PointwiseMul__DOT__prod_b_s2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14272000262933310094ull);
    vlSelf->PointwiseMul__DOT__m_a_s2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16221775529661207831ull);
    vlSelf->PointwiseMul__DOT__m_b_s2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8922846975127054925ull);
    vlSelf->PointwiseMul__DOT__valid_s2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3714411180173742555ull);
    vlSelf->PointwiseMul__DOT__prod_a_s3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11291458442708084431ull);
    vlSelf->PointwiseMul__DOT__prod_b_s3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5246477498641643708ull);
    vlSelf->PointwiseMul__DOT__corr_a_s3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14482710171698079540ull);
    vlSelf->PointwiseMul__DOT__corr_b_s3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16449390587398627707ull);
    vlSelf->PointwiseMul__DOT__valid_s3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1254034019004089657ull);
    vlSelf->PointwiseMul__DOT__sum_a_s4 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 14564002277609745787ull);
    vlSelf->PointwiseMul__DOT__sum_b_s4 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 2644891506140106786ull);
    vlSelf->PointwiseMul__DOT__valid_s4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6202510824879620369ull);
    vlSelf->PointwiseMul__DOT__mont_a_s5 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6726637575254871234ull);
    vlSelf->PointwiseMul__DOT__mont_b_s5 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6325675340761907559ull);
    vlSelf->PointwiseMul__DOT__q_extended = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 250079526107640028ull);
    vlSelf->PointwiseMul__DOT__reduced_a_s5 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10550175976737545378ull);
    vlSelf->PointwiseMul__DOT__reduced_b_s5 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6580249188984002477ull);
    vlSelf->PointwiseMul__DOT__valid_s5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2285367220113499716ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__PointwiseMul__DOT__clk_i__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3863114382380012989ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
