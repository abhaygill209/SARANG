// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__Delay_Unit__DOT__clk_i__0 
        = vlSelfRef.Delay_Unit__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__Delay_Unit__DOT__buffer_1__DOT__clk__0 
        = vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__Delay_Unit__DOT__buffer_2__DOT__clk__0 
        = vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__clk;
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
            VL_FATAL_MT("/home/abhay/OpenSource/PQC_ASIC/RTL/Delay_unit.v", 1, "", "Settle region did not converge after 100 tries");
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

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Delay_Unit__DOT__stall_i = vlSelfRef.stall_i;
    vlSelfRef.valid_o = vlSelfRef.Delay_Unit__DOT__valid_o;
    vlSelfRef.Delay_Unit__DOT__fifo_change = (0x007fU 
                                              == (IData)(vlSelfRef.Delay_Unit__DOT__counter));
    vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__occupancy));
    vlSelfRef.Delay_Unit__DOT__buffer_1_data_o = vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_data;
    vlSelfRef.Delay_Unit__DOT__buffer_2_data_o = vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_data;
    vlSelfRef.Delay_Unit__DOT__clk_i = vlSelfRef.clk_i;
    vlSelfRef.Delay_Unit__DOT__rst_i = vlSelfRef.rst_i;
    vlSelfRef.Delay_Unit__DOT__valid_i = vlSelfRef.valid_i;
    vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__occupancy));
    vlSelfRef.Delay_Unit__DOT__a_i = vlSelfRef.a_i;
    vlSelfRef.Delay_Unit__DOT__b_i = vlSelfRef.b_i;
    vlSelfRef.Delay_Unit__DOT__buffer_1_empty = vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__empty;
    vlSelfRef.Delay_Unit__DOT__a_o = vlSelfRef.Delay_Unit__DOT__buffer_1_data_o;
    vlSelfRef.Delay_Unit__DOT__b_o = vlSelfRef.Delay_Unit__DOT__buffer_2_data_o;
    vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__clk = vlSelfRef.Delay_Unit__DOT__clk_i;
    vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__clk = vlSelfRef.Delay_Unit__DOT__clk_i;
    vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rst = vlSelfRef.Delay_Unit__DOT__rst_i;
    vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rst = vlSelfRef.Delay_Unit__DOT__rst_i;
    vlSelfRef.Delay_Unit__DOT__buffer_1_wr_en = ((1U 
                                                  & (~ (IData)(vlSelfRef.Delay_Unit__DOT__state))) 
                                                 && (IData)(vlSelfRef.Delay_Unit__DOT__valid_i));
    vlSelfRef.Delay_Unit__DOT__buffer_2_wr_en = ((IData)(vlSelfRef.Delay_Unit__DOT__state) 
                                                 && (IData)(vlSelfRef.Delay_Unit__DOT__valid_i));
    vlSelfRef.Delay_Unit__DOT__buffer_2_empty = vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__empty;
    if (vlSelfRef.Delay_Unit__DOT__state) {
        vlSelfRef.Delay_Unit__DOT__buffer_1_data_i = 0U;
        vlSelfRef.Delay_Unit__DOT__buffer_2_data_i 
            = (((IData)(vlSelfRef.Delay_Unit__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.Delay_Unit__DOT__a_i));
    } else {
        vlSelfRef.Delay_Unit__DOT__buffer_1_data_i 
            = (((IData)(vlSelfRef.Delay_Unit__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.Delay_Unit__DOT__a_i));
        vlSelfRef.Delay_Unit__DOT__buffer_2_data_i = 0U;
    }
    vlSelfRef.a_o = vlSelfRef.Delay_Unit__DOT__a_o;
    vlSelfRef.b_o = vlSelfRef.Delay_Unit__DOT__b_o;
    vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.Delay_Unit__DOT__buffer_1_wr_en;
    vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.Delay_Unit__DOT__buffer_2_wr_en;
    vlSelfRef.Delay_Unit__DOT__buffer_1_rd_en = (1U 
                                                 & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2_empty)));
    vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_data 
        = vlSelfRef.Delay_Unit__DOT__buffer_1_data_i;
    vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_data 
        = vlSelfRef.Delay_Unit__DOT__buffer_2_data_i;
    vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.Delay_Unit__DOT__buffer_1_rd_en;
    vlSelfRef.Delay_Unit__DOT__buffer_2_rd_en = vlSelfRef.Delay_Unit__DOT__buffer_1_rd_en;
    vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.Delay_Unit__DOT__buffer_2_rd_en;
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge Delay_Unit.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge Delay_Unit.buffer_1.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge Delay_Unit.buffer_2.clk)\n");
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
    vlSelf->valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 550966959580451262ull);
    vlSelf->stall_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6422829819824836280ull);
    vlSelf->valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10854271546065566948ull);
    vlSelf->a_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12042468572559684522ull);
    vlSelf->b_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15122488259574687123ull);
    vlSelf->a_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8518468431007011424ull);
    vlSelf->b_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12892622049390836758ull);
    vlSelf->Delay_Unit__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17783311770440737368ull);
    vlSelf->Delay_Unit__DOT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4744473014624343040ull);
    vlSelf->Delay_Unit__DOT__valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9014555959921254328ull);
    vlSelf->Delay_Unit__DOT__stall_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8850654740855292777ull);
    vlSelf->Delay_Unit__DOT__valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3957835528141339611ull);
    vlSelf->Delay_Unit__DOT__a_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15544693335811086382ull);
    vlSelf->Delay_Unit__DOT__b_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 944005369144340659ull);
    vlSelf->Delay_Unit__DOT__a_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4908699317335872818ull);
    vlSelf->Delay_Unit__DOT__b_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3051307532016977055ull);
    vlSelf->Delay_Unit__DOT__buffer_1_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11794648821686268312ull);
    vlSelf->Delay_Unit__DOT__buffer_2_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10053150666662566967ull);
    vlSelf->Delay_Unit__DOT__buffer_1_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15278627750257195829ull);
    vlSelf->Delay_Unit__DOT__buffer_2_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17878203992034521830ull);
    vlSelf->Delay_Unit__DOT__buffer_1_data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10871895671763471117ull);
    vlSelf->Delay_Unit__DOT__buffer_2_data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15794275873321646992ull);
    vlSelf->Delay_Unit__DOT__buffer_1_data_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9918392988950226105ull);
    vlSelf->Delay_Unit__DOT__buffer_2_data_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6916319023144418983ull);
    vlSelf->Delay_Unit__DOT__buffer_1_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9223335911740455350ull);
    vlSelf->Delay_Unit__DOT__buffer_2_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6115335322099576200ull);
    vlSelf->Delay_Unit__DOT__state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7408167447787166985ull);
    vlSelf->Delay_Unit__DOT__counter = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3703311964778006251ull);
    vlSelf->Delay_Unit__DOT__fifo_change = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10193179589398934514ull);
    vlSelf->Delay_Unit__DOT__buffer_1__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7028535700522811413ull);
    vlSelf->Delay_Unit__DOT__buffer_1__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2598608660482838760ull);
    vlSelf->Delay_Unit__DOT__buffer_1__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9836895244945727237ull);
    vlSelf->Delay_Unit__DOT__buffer_1__DOT__wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11542278847783366363ull);
    vlSelf->Delay_Unit__DOT__buffer_1__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10174451326467798138ull);
    vlSelf->Delay_Unit__DOT__buffer_1__DOT__rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15766569040492816372ull);
    vlSelf->Delay_Unit__DOT__buffer_1__DOT__rd_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3149520315986601966ull);
    vlSelf->Delay_Unit__DOT__buffer_1__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13301022838262945940ull);
    for (int __Vi0 = 0; __Vi0 < 772; ++__Vi0) {
        vlSelf->Delay_Unit__DOT__buffer_1__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7537873899359769097ull);
    }
    vlSelf->Delay_Unit__DOT__buffer_1__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9839339721384527662ull);
    vlSelf->Delay_Unit__DOT__buffer_1__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9369631452271526833ull);
    vlSelf->Delay_Unit__DOT__buffer_1__DOT__occupancy = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1133582158457490233ull);
    vlSelf->Delay_Unit__DOT__buffer_1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 840377074803553565ull);
    vlSelf->Delay_Unit__DOT__buffer_1__DOT____Vlvbound_h57f8e2fc__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2853402321211688789ull);
    vlSelf->Delay_Unit__DOT__buffer_1__DOT____Vlvbound_hf0066f4b__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10588312980430498850ull);
    vlSelf->Delay_Unit__DOT__buffer_1__DOT____Vlvbound_h57f8e2fc__1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6946274637991139548ull);
    vlSelf->Delay_Unit__DOT__buffer_1__DOT____Vlvbound_hf0066f4b__1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15342034558740921470ull);
    vlSelf->Delay_Unit__DOT__buffer_2__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6339484898775077729ull);
    vlSelf->Delay_Unit__DOT__buffer_2__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7060189502202586484ull);
    vlSelf->Delay_Unit__DOT__buffer_2__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 675374360663656612ull);
    vlSelf->Delay_Unit__DOT__buffer_2__DOT__wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2704445905438849531ull);
    vlSelf->Delay_Unit__DOT__buffer_2__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7195228861255418032ull);
    vlSelf->Delay_Unit__DOT__buffer_2__DOT__rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5533013729368317ull);
    vlSelf->Delay_Unit__DOT__buffer_2__DOT__rd_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15022283225711252146ull);
    vlSelf->Delay_Unit__DOT__buffer_2__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10537981348441482871ull);
    for (int __Vi0 = 0; __Vi0 < 772; ++__Vi0) {
        vlSelf->Delay_Unit__DOT__buffer_2__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16355158817259356128ull);
    }
    vlSelf->Delay_Unit__DOT__buffer_2__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11021600748861596488ull);
    vlSelf->Delay_Unit__DOT__buffer_2__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17304617854303615521ull);
    vlSelf->Delay_Unit__DOT__buffer_2__DOT__occupancy = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16170714648275614120ull);
    vlSelf->Delay_Unit__DOT__buffer_2__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3280065733174120033ull);
    vlSelf->Delay_Unit__DOT__buffer_2__DOT____Vlvbound_h57f8e2fc__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7960853624458262715ull);
    vlSelf->Delay_Unit__DOT__buffer_2__DOT____Vlvbound_hf0066f4b__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16369244159484376504ull);
    vlSelf->Delay_Unit__DOT__buffer_2__DOT____Vlvbound_h57f8e2fc__1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10447319711413404996ull);
    vlSelf->Delay_Unit__DOT__buffer_2__DOT____Vlvbound_hf0066f4b__1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2574820623939362002ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__Delay_Unit__DOT__clk_i__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16175053059191670831ull);
    vlSelf->__Vtrigprevexpr___TOP__Delay_Unit__DOT__buffer_1__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13862154855554956766ull);
    vlSelf->__Vtrigprevexpr___TOP__Delay_Unit__DOT__buffer_2__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16741349650127040225ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
