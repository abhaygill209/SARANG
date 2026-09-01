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
    vlSelfRef.Delay_Unit__DOT__stall_i = vlSelfRef.stall_i;
    vlSelfRef.valid_o = vlSelfRef.Delay_Unit__DOT__valid_o;
    vlSelfRef.Delay_Unit__DOT__fifo_change = (0x007fU 
                                              == (IData)(vlSelfRef.Delay_Unit__DOT__counter));
    vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__occupancy));
    vlSelfRef.Delay_Unit__DOT__clk_i = vlSelfRef.clk_i;
    vlSelfRef.Delay_Unit__DOT__buffer_1_data_o = vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_data;
    vlSelfRef.Delay_Unit__DOT__buffer_2_data_o = vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_data;
    vlSelfRef.Delay_Unit__DOT__rst_i = vlSelfRef.rst_i;
    vlSelfRef.Delay_Unit__DOT__valid_i = vlSelfRef.valid_i;
    vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__occupancy));
    vlSelfRef.Delay_Unit__DOT__a_i = vlSelfRef.a_i;
    vlSelfRef.Delay_Unit__DOT__b_i = vlSelfRef.b_i;
    vlSelfRef.Delay_Unit__DOT__buffer_1_empty = vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__empty;
    vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__clk = vlSelfRef.Delay_Unit__DOT__clk_i;
    vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__clk = vlSelfRef.Delay_Unit__DOT__clk_i;
    vlSelfRef.Delay_Unit__DOT__a_o = vlSelfRef.Delay_Unit__DOT__buffer_1_data_o;
    vlSelfRef.Delay_Unit__DOT__b_o = vlSelfRef.Delay_Unit__DOT__buffer_2_data_o;
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
                                                    ((((IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__clk) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Delay_Unit__DOT__buffer_2__DOT__clk__0))) 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Delay_Unit__DOT__buffer_1__DOT__clk__0))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.Delay_Unit__DOT__clk_i) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Delay_Unit__DOT__clk_i__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__Delay_Unit__DOT__clk_i__0 
        = vlSelfRef.Delay_Unit__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__Delay_Unit__DOT__buffer_1__DOT__clk__0 
        = vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__Delay_Unit__DOT__buffer_2__DOT__clk__0 
        = vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__clk;
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
    SData/*8:0*/ __Vdly__Delay_Unit__DOT__counter;
    __Vdly__Delay_Unit__DOT__counter = 0;
    CData/*0:0*/ __Vdly__Delay_Unit__DOT__state;
    __Vdly__Delay_Unit__DOT__state = 0;
    // Body
    __Vdly__Delay_Unit__DOT__counter = vlSelfRef.Delay_Unit__DOT__counter;
    __Vdly__Delay_Unit__DOT__state = vlSelfRef.Delay_Unit__DOT__state;
    if (vlSelfRef.Delay_Unit__DOT__rst_i) {
        __Vdly__Delay_Unit__DOT__counter = 0U;
        __Vdly__Delay_Unit__DOT__state = 0U;
    } else {
        if (vlSelfRef.Delay_Unit__DOT__fifo_change) {
            __Vdly__Delay_Unit__DOT__counter = 0U;
        } else if (((IData)(vlSelfRef.Delay_Unit__DOT__valid_i) 
                    & (~ (IData)(vlSelfRef.Delay_Unit__DOT__stall_i)))) {
            __Vdly__Delay_Unit__DOT__counter = (0x000001ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.Delay_Unit__DOT__counter)));
        }
        if (((IData)(vlSelfRef.Delay_Unit__DOT__fifo_change) 
             & (IData)(vlSelfRef.Delay_Unit__DOT__valid_i))) {
            __Vdly__Delay_Unit__DOT__state = (1U & 
                                              (~ (IData)(vlSelfRef.Delay_Unit__DOT__state)));
        }
    }
    vlSelfRef.Delay_Unit__DOT__valid_o = ((1U & (~ (IData)(vlSelfRef.Delay_Unit__DOT__rst_i))) 
                                          && (1U & 
                                              (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2_empty))));
    vlSelfRef.Delay_Unit__DOT__counter = __Vdly__Delay_Unit__DOT__counter;
    vlSelfRef.Delay_Unit__DOT__state = __Vdly__Delay_Unit__DOT__state;
    vlSelfRef.Delay_Unit__DOT__fifo_change = (0x007fU 
                                              == (IData)(vlSelfRef.Delay_Unit__DOT__counter));
    vlSelfRef.Delay_Unit__DOT__buffer_1_wr_en = ((1U 
                                                  & (~ (IData)(vlSelfRef.Delay_Unit__DOT__state))) 
                                                 && (IData)(vlSelfRef.Delay_Unit__DOT__valid_i));
    vlSelfRef.Delay_Unit__DOT__buffer_2_wr_en = ((IData)(vlSelfRef.Delay_Unit__DOT__state) 
                                                 && (IData)(vlSelfRef.Delay_Unit__DOT__valid_i));
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
    vlSelfRef.valid_o = vlSelfRef.Delay_Unit__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vdly__Delay_Unit__DOT__buffer_1__DOT__wr_ptr;
    __Vdly__Delay_Unit__DOT__buffer_1__DOT__wr_ptr = 0;
    SData/*9:0*/ __Vdly__Delay_Unit__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__Delay_Unit__DOT__buffer_1__DOT__rd_ptr = 0;
    SData/*10:0*/ __Vdly__Delay_Unit__DOT__buffer_1__DOT__occupancy;
    __Vdly__Delay_Unit__DOT__buffer_1__DOT__occupancy = 0;
    SData/*15:0*/ __VdlyVal__Delay_Unit__DOT__buffer_1__DOT__mem__v0;
    __VdlyVal__Delay_Unit__DOT__buffer_1__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__Delay_Unit__DOT__buffer_1__DOT__mem__v0;
    __VdlyDim0__Delay_Unit__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Delay_Unit__DOT__buffer_1__DOT__mem__v0;
    __VdlySet__Delay_Unit__DOT__buffer_1__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__Delay_Unit__DOT__buffer_1__DOT__mem__v1;
    __VdlyVal__Delay_Unit__DOT__buffer_1__DOT__mem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__Delay_Unit__DOT__buffer_1__DOT__mem__v1;
    __VdlyDim0__Delay_Unit__DOT__buffer_1__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__Delay_Unit__DOT__buffer_1__DOT__mem__v1;
    __VdlySet__Delay_Unit__DOT__buffer_1__DOT__mem__v1 = 0;
    SData/*15:0*/ __VdlyVal__Delay_Unit__DOT__buffer_1__DOT__mem__v2;
    __VdlyVal__Delay_Unit__DOT__buffer_1__DOT__mem__v2 = 0;
    SData/*9:0*/ __VdlyDim0__Delay_Unit__DOT__buffer_1__DOT__mem__v2;
    __VdlyDim0__Delay_Unit__DOT__buffer_1__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__Delay_Unit__DOT__buffer_1__DOT__mem__v2;
    __VdlySet__Delay_Unit__DOT__buffer_1__DOT__mem__v2 = 0;
    SData/*15:0*/ __VdlyVal__Delay_Unit__DOT__buffer_1__DOT__mem__v3;
    __VdlyVal__Delay_Unit__DOT__buffer_1__DOT__mem__v3 = 0;
    SData/*9:0*/ __VdlyDim0__Delay_Unit__DOT__buffer_1__DOT__mem__v3;
    __VdlyDim0__Delay_Unit__DOT__buffer_1__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__Delay_Unit__DOT__buffer_1__DOT__mem__v3;
    __VdlySet__Delay_Unit__DOT__buffer_1__DOT__mem__v3 = 0;
    // Body
    __Vdly__Delay_Unit__DOT__buffer_1__DOT__occupancy 
        = vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__occupancy;
    __Vdly__Delay_Unit__DOT__buffer_1__DOT__rd_ptr 
        = vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__Delay_Unit__DOT__buffer_1__DOT__wr_ptr 
        = vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_ptr;
    __VdlySet__Delay_Unit__DOT__buffer_1__DOT__mem__v0 = 0U;
    __VdlySet__Delay_Unit__DOT__buffer_1__DOT__mem__v1 = 0U;
    __VdlySet__Delay_Unit__DOT__buffer_1__DOT__mem__v2 = 0U;
    __VdlySet__Delay_Unit__DOT__buffer_1__DOT__mem__v3 = 0U;
    if (vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rst) {
        __Vdly__Delay_Unit__DOT__buffer_1__DOT__occupancy = 0U;
        __Vdly__Delay_Unit__DOT__buffer_1__DOT__wr_ptr = 0U;
        __Vdly__Delay_Unit__DOT__buffer_1__DOT__rd_ptr = 0U;
        vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_data = 0U;
    } else {
        if ((((IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_en) 
              & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__full))) 
             & (~ ((IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_en) 
                   & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__empty)))))) {
            __Vdly__Delay_Unit__DOT__buffer_1__DOT__occupancy 
                = (0x000007ffU & ((IData)(2U) + (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__occupancy)));
            vlSelfRef.Delay_Unit__DOT__buffer_1__DOT____Vlvbound_h57f8e2fc__0 
                = (0x0000ffffU & vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_data);
            if ((0x0303U >= (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_ptr))) {
                __VdlyVal__Delay_Unit__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.Delay_Unit__DOT__buffer_1__DOT____Vlvbound_h57f8e2fc__0;
                __VdlyDim0__Delay_Unit__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_ptr;
                __VdlySet__Delay_Unit__DOT__buffer_1__DOT__mem__v0 = 1U;
            }
            vlSelfRef.Delay_Unit__DOT__buffer_1__DOT____Vlvbound_hf0066f4b__0 
                = (vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_data 
                   >> 0x10U);
            if ((0x0303U >= (0x000003ffU & VL_MODDIV_III(32, 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x00000304U))))) {
                __VdlyVal__Delay_Unit__DOT__buffer_1__DOT__mem__v1 
                    = vlSelfRef.Delay_Unit__DOT__buffer_1__DOT____Vlvbound_hf0066f4b__0;
                __VdlyDim0__Delay_Unit__DOT__buffer_1__DOT__mem__v1 
                    = (0x000003ffU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x00000304U)));
                __VdlySet__Delay_Unit__DOT__buffer_1__DOT__mem__v1 = 1U;
            }
            __Vdly__Delay_Unit__DOT__buffer_1__DOT__wr_ptr 
                = (0x000003ffU & VL_MODDIV_III(32, 
                                               ((IData)(2U) 
                                                + (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x00000304U)));
        } else {
            if ((((IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__full)))))) {
                __Vdly__Delay_Unit__DOT__buffer_1__DOT__occupancy 
                    = (0x000007ffU & ((IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__occupancy) 
                                      - (IData)(1U)));
            } else if (((((IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__full))) 
                         & (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__empty)))) {
                __Vdly__Delay_Unit__DOT__buffer_1__DOT__occupancy 
                    = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__occupancy)));
            }
            if ((1U & (~ (((IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_en) 
                           & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__empty))) 
                          & (~ ((IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_en) 
                                & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__full)))))))) {
                if (((((IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__full))) 
                      & (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_en)) 
                     & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__empty)))) {
                    vlSelfRef.Delay_Unit__DOT__buffer_1__DOT____Vlvbound_h57f8e2fc__1 
                        = (0x0000ffffU & vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_data);
                    if ((0x0303U >= (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_ptr))) {
                        __VdlyVal__Delay_Unit__DOT__buffer_1__DOT__mem__v2 
                            = vlSelfRef.Delay_Unit__DOT__buffer_1__DOT____Vlvbound_h57f8e2fc__1;
                        __VdlyDim0__Delay_Unit__DOT__buffer_1__DOT__mem__v2 
                            = vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_ptr;
                        __VdlySet__Delay_Unit__DOT__buffer_1__DOT__mem__v2 = 1U;
                    }
                    vlSelfRef.Delay_Unit__DOT__buffer_1__DOT____Vlvbound_hf0066f4b__1 
                        = (vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_data 
                           >> 0x10U);
                    if ((0x0303U >= (0x000003ffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x00000304U))))) {
                        __VdlyVal__Delay_Unit__DOT__buffer_1__DOT__mem__v3 
                            = vlSelfRef.Delay_Unit__DOT__buffer_1__DOT____Vlvbound_hf0066f4b__1;
                        __VdlyDim0__Delay_Unit__DOT__buffer_1__DOT__mem__v3 
                            = (0x000003ffU & VL_MODDIV_III(32, 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x00000304U)));
                        __VdlySet__Delay_Unit__DOT__buffer_1__DOT__mem__v3 = 1U;
                    }
                    __Vdly__Delay_Unit__DOT__buffer_1__DOT__wr_ptr 
                        = (0x000003ffU & VL_MODDIV_III(32, 
                                                       ((IData)(2U) 
                                                        + (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x00000304U)));
                }
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__full))) 
                      & (~ ((IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_en) 
                            & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__empty)))))))) {
            if ((((IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__full)))))) {
                vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_data 
                    = ((0x0303U >= (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_ptr))
                        ? vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__mem
                       [vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_ptr]
                        : 0U);
                __Vdly__Delay_Unit__DOT__buffer_1__DOT__rd_ptr 
                    = (0x000003ffU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_ptr)), (IData)(0x00000304U)));
            } else if (((((IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__full))) 
                         & (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__empty)))) {
                vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_data 
                    = ((0x0303U >= (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_ptr))
                        ? vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__mem
                       [vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_ptr]
                        : 0U);
                __Vdly__Delay_Unit__DOT__buffer_1__DOT__rd_ptr 
                    = (0x000003ffU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_ptr)), (IData)(0x00000304U)));
            }
        }
    }
    vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__occupancy 
        = __Vdly__Delay_Unit__DOT__buffer_1__DOT__occupancy;
    vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_ptr 
        = __Vdly__Delay_Unit__DOT__buffer_1__DOT__wr_ptr;
    vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_ptr 
        = __Vdly__Delay_Unit__DOT__buffer_1__DOT__rd_ptr;
    if (__VdlySet__Delay_Unit__DOT__buffer_1__DOT__mem__v0) {
        vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__mem[__VdlyDim0__Delay_Unit__DOT__buffer_1__DOT__mem__v0] 
            = __VdlyVal__Delay_Unit__DOT__buffer_1__DOT__mem__v0;
    }
    if (__VdlySet__Delay_Unit__DOT__buffer_1__DOT__mem__v1) {
        vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__mem[__VdlyDim0__Delay_Unit__DOT__buffer_1__DOT__mem__v1] 
            = __VdlyVal__Delay_Unit__DOT__buffer_1__DOT__mem__v1;
    }
    if (__VdlySet__Delay_Unit__DOT__buffer_1__DOT__mem__v2) {
        vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__mem[__VdlyDim0__Delay_Unit__DOT__buffer_1__DOT__mem__v2] 
            = __VdlyVal__Delay_Unit__DOT__buffer_1__DOT__mem__v2;
    }
    if (__VdlySet__Delay_Unit__DOT__buffer_1__DOT__mem__v3) {
        vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__mem[__VdlyDim0__Delay_Unit__DOT__buffer_1__DOT__mem__v3] 
            = __VdlyVal__Delay_Unit__DOT__buffer_1__DOT__mem__v3;
    }
    vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__occupancy));
    vlSelfRef.Delay_Unit__DOT__buffer_1_data_o = vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_data;
    vlSelfRef.Delay_Unit__DOT__buffer_1_empty = vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__empty;
    vlSelfRef.Delay_Unit__DOT__a_o = vlSelfRef.Delay_Unit__DOT__buffer_1_data_o;
    vlSelfRef.a_o = vlSelfRef.Delay_Unit__DOT__a_o;
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vdly__Delay_Unit__DOT__buffer_2__DOT__wr_ptr;
    __Vdly__Delay_Unit__DOT__buffer_2__DOT__wr_ptr = 0;
    SData/*9:0*/ __Vdly__Delay_Unit__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__Delay_Unit__DOT__buffer_2__DOT__rd_ptr = 0;
    SData/*10:0*/ __Vdly__Delay_Unit__DOT__buffer_2__DOT__occupancy;
    __Vdly__Delay_Unit__DOT__buffer_2__DOT__occupancy = 0;
    SData/*15:0*/ __VdlyVal__Delay_Unit__DOT__buffer_2__DOT__mem__v0;
    __VdlyVal__Delay_Unit__DOT__buffer_2__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__Delay_Unit__DOT__buffer_2__DOT__mem__v0;
    __VdlyDim0__Delay_Unit__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Delay_Unit__DOT__buffer_2__DOT__mem__v0;
    __VdlySet__Delay_Unit__DOT__buffer_2__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__Delay_Unit__DOT__buffer_2__DOT__mem__v1;
    __VdlyVal__Delay_Unit__DOT__buffer_2__DOT__mem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__Delay_Unit__DOT__buffer_2__DOT__mem__v1;
    __VdlyDim0__Delay_Unit__DOT__buffer_2__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__Delay_Unit__DOT__buffer_2__DOT__mem__v1;
    __VdlySet__Delay_Unit__DOT__buffer_2__DOT__mem__v1 = 0;
    SData/*15:0*/ __VdlyVal__Delay_Unit__DOT__buffer_2__DOT__mem__v2;
    __VdlyVal__Delay_Unit__DOT__buffer_2__DOT__mem__v2 = 0;
    SData/*9:0*/ __VdlyDim0__Delay_Unit__DOT__buffer_2__DOT__mem__v2;
    __VdlyDim0__Delay_Unit__DOT__buffer_2__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__Delay_Unit__DOT__buffer_2__DOT__mem__v2;
    __VdlySet__Delay_Unit__DOT__buffer_2__DOT__mem__v2 = 0;
    SData/*15:0*/ __VdlyVal__Delay_Unit__DOT__buffer_2__DOT__mem__v3;
    __VdlyVal__Delay_Unit__DOT__buffer_2__DOT__mem__v3 = 0;
    SData/*9:0*/ __VdlyDim0__Delay_Unit__DOT__buffer_2__DOT__mem__v3;
    __VdlyDim0__Delay_Unit__DOT__buffer_2__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__Delay_Unit__DOT__buffer_2__DOT__mem__v3;
    __VdlySet__Delay_Unit__DOT__buffer_2__DOT__mem__v3 = 0;
    // Body
    __Vdly__Delay_Unit__DOT__buffer_2__DOT__rd_ptr 
        = vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__Delay_Unit__DOT__buffer_2__DOT__occupancy 
        = vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__occupancy;
    __Vdly__Delay_Unit__DOT__buffer_2__DOT__wr_ptr 
        = vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_ptr;
    __VdlySet__Delay_Unit__DOT__buffer_2__DOT__mem__v0 = 0U;
    __VdlySet__Delay_Unit__DOT__buffer_2__DOT__mem__v1 = 0U;
    __VdlySet__Delay_Unit__DOT__buffer_2__DOT__mem__v2 = 0U;
    __VdlySet__Delay_Unit__DOT__buffer_2__DOT__mem__v3 = 0U;
    if (vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rst) {
        __Vdly__Delay_Unit__DOT__buffer_2__DOT__occupancy = 0U;
        __Vdly__Delay_Unit__DOT__buffer_2__DOT__wr_ptr = 0U;
        __Vdly__Delay_Unit__DOT__buffer_2__DOT__rd_ptr = 0U;
        vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_data = 0U;
    } else {
        if ((((IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_en) 
              & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__full))) 
             & (~ ((IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_en) 
                   & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__empty)))))) {
            __Vdly__Delay_Unit__DOT__buffer_2__DOT__occupancy 
                = (0x000007ffU & ((IData)(2U) + (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__occupancy)));
            vlSelfRef.Delay_Unit__DOT__buffer_2__DOT____Vlvbound_h57f8e2fc__0 
                = (0x0000ffffU & vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_data);
            if ((0x0303U >= (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_ptr))) {
                __VdlyVal__Delay_Unit__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.Delay_Unit__DOT__buffer_2__DOT____Vlvbound_h57f8e2fc__0;
                __VdlyDim0__Delay_Unit__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_ptr;
                __VdlySet__Delay_Unit__DOT__buffer_2__DOT__mem__v0 = 1U;
            }
            vlSelfRef.Delay_Unit__DOT__buffer_2__DOT____Vlvbound_hf0066f4b__0 
                = (vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_data 
                   >> 0x10U);
            if ((0x0303U >= (0x000003ffU & VL_MODDIV_III(32, 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x00000304U))))) {
                __VdlyVal__Delay_Unit__DOT__buffer_2__DOT__mem__v1 
                    = vlSelfRef.Delay_Unit__DOT__buffer_2__DOT____Vlvbound_hf0066f4b__0;
                __VdlyDim0__Delay_Unit__DOT__buffer_2__DOT__mem__v1 
                    = (0x000003ffU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x00000304U)));
                __VdlySet__Delay_Unit__DOT__buffer_2__DOT__mem__v1 = 1U;
            }
            __Vdly__Delay_Unit__DOT__buffer_2__DOT__wr_ptr 
                = (0x000003ffU & VL_MODDIV_III(32, 
                                               ((IData)(2U) 
                                                + (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x00000304U)));
        } else {
            if ((((IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__full)))))) {
                __Vdly__Delay_Unit__DOT__buffer_2__DOT__occupancy 
                    = (0x000007ffU & ((IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__occupancy) 
                                      - (IData)(1U)));
            } else if (((((IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__full))) 
                         & (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__empty)))) {
                __Vdly__Delay_Unit__DOT__buffer_2__DOT__occupancy 
                    = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__occupancy)));
            }
            if ((1U & (~ (((IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_en) 
                           & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__empty))) 
                          & (~ ((IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_en) 
                                & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__full)))))))) {
                if (((((IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__full))) 
                      & (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_en)) 
                     & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__empty)))) {
                    vlSelfRef.Delay_Unit__DOT__buffer_2__DOT____Vlvbound_h57f8e2fc__1 
                        = (0x0000ffffU & vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_data);
                    if ((0x0303U >= (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_ptr))) {
                        __VdlyVal__Delay_Unit__DOT__buffer_2__DOT__mem__v2 
                            = vlSelfRef.Delay_Unit__DOT__buffer_2__DOT____Vlvbound_h57f8e2fc__1;
                        __VdlyDim0__Delay_Unit__DOT__buffer_2__DOT__mem__v2 
                            = vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_ptr;
                        __VdlySet__Delay_Unit__DOT__buffer_2__DOT__mem__v2 = 1U;
                    }
                    vlSelfRef.Delay_Unit__DOT__buffer_2__DOT____Vlvbound_hf0066f4b__1 
                        = (vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_data 
                           >> 0x10U);
                    if ((0x0303U >= (0x000003ffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x00000304U))))) {
                        __VdlyVal__Delay_Unit__DOT__buffer_2__DOT__mem__v3 
                            = vlSelfRef.Delay_Unit__DOT__buffer_2__DOT____Vlvbound_hf0066f4b__1;
                        __VdlyDim0__Delay_Unit__DOT__buffer_2__DOT__mem__v3 
                            = (0x000003ffU & VL_MODDIV_III(32, 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x00000304U)));
                        __VdlySet__Delay_Unit__DOT__buffer_2__DOT__mem__v3 = 1U;
                    }
                    __Vdly__Delay_Unit__DOT__buffer_2__DOT__wr_ptr 
                        = (0x000003ffU & VL_MODDIV_III(32, 
                                                       ((IData)(2U) 
                                                        + (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x00000304U)));
                }
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__full))) 
                      & (~ ((IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_en) 
                            & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__empty)))))))) {
            if ((((IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__full)))))) {
                vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_data 
                    = ((0x0303U >= (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_ptr))
                        ? vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__mem
                       [vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_ptr]
                        : 0U);
                __Vdly__Delay_Unit__DOT__buffer_2__DOT__rd_ptr 
                    = (0x000003ffU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_ptr)), (IData)(0x00000304U)));
            } else if (((((IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__full))) 
                         & (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__empty)))) {
                vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_data 
                    = ((0x0303U >= (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_ptr))
                        ? vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__mem
                       [vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_ptr]
                        : 0U);
                __Vdly__Delay_Unit__DOT__buffer_2__DOT__rd_ptr 
                    = (0x000003ffU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_ptr)), (IData)(0x00000304U)));
            }
        }
    }
    vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__occupancy 
        = __Vdly__Delay_Unit__DOT__buffer_2__DOT__occupancy;
    vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_ptr 
        = __Vdly__Delay_Unit__DOT__buffer_2__DOT__wr_ptr;
    vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_ptr 
        = __Vdly__Delay_Unit__DOT__buffer_2__DOT__rd_ptr;
    if (__VdlySet__Delay_Unit__DOT__buffer_2__DOT__mem__v0) {
        vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__mem[__VdlyDim0__Delay_Unit__DOT__buffer_2__DOT__mem__v0] 
            = __VdlyVal__Delay_Unit__DOT__buffer_2__DOT__mem__v0;
    }
    if (__VdlySet__Delay_Unit__DOT__buffer_2__DOT__mem__v1) {
        vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__mem[__VdlyDim0__Delay_Unit__DOT__buffer_2__DOT__mem__v1] 
            = __VdlyVal__Delay_Unit__DOT__buffer_2__DOT__mem__v1;
    }
    if (__VdlySet__Delay_Unit__DOT__buffer_2__DOT__mem__v2) {
        vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__mem[__VdlyDim0__Delay_Unit__DOT__buffer_2__DOT__mem__v2] 
            = __VdlyVal__Delay_Unit__DOT__buffer_2__DOT__mem__v2;
    }
    if (__VdlySet__Delay_Unit__DOT__buffer_2__DOT__mem__v3) {
        vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__mem[__VdlyDim0__Delay_Unit__DOT__buffer_2__DOT__mem__v3] 
            = __VdlyVal__Delay_Unit__DOT__buffer_2__DOT__mem__v3;
    }
    vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__occupancy));
    vlSelfRef.Delay_Unit__DOT__buffer_2_data_o = vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_data;
    vlSelfRef.Delay_Unit__DOT__buffer_2_empty = vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__empty;
    vlSelfRef.Delay_Unit__DOT__b_o = vlSelfRef.Delay_Unit__DOT__buffer_2_data_o;
    vlSelfRef.Delay_Unit__DOT__buffer_1_rd_en = (1U 
                                                 & (~ (IData)(vlSelfRef.Delay_Unit__DOT__buffer_2_empty)));
    vlSelfRef.b_o = vlSelfRef.Delay_Unit__DOT__b_o;
    vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.Delay_Unit__DOT__buffer_1_rd_en;
    vlSelfRef.Delay_Unit__DOT__buffer_2_rd_en = vlSelfRef.Delay_Unit__DOT__buffer_1_rd_en;
    vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.Delay_Unit__DOT__buffer_2_rd_en;
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_data 
        = vlSelfRef.Delay_Unit__DOT__buffer_1_data_i;
    vlSelfRef.Delay_Unit__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.Delay_Unit__DOT__buffer_1_wr_en;
    vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_data 
        = vlSelfRef.Delay_Unit__DOT__buffer_2_data_i;
    vlSelfRef.Delay_Unit__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.Delay_Unit__DOT__buffer_2_wr_en;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
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
            VL_FATAL_MT("/home/abhay/OpenSource/PQC_ASIC/RTL/Delay_unit.v", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/abhay/OpenSource/PQC_ASIC/RTL/Delay_unit.v", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/abhay/OpenSource/PQC_ASIC/RTL/Delay_unit.v", 1, "", "Active region did not converge after 100 tries");
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
    if (VL_UNLIKELY(((vlSelfRef.stall_i & 0xfeU)))) {
        Verilated::overWidthError("stall_i");
    }
}
#endif  // VL_DEBUG
