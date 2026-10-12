// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___nba_sequent__TOP__40(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__40\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_out;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_out = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_out 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_out;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_o = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__b_o = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__bw_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_s3 = 0ULL;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s3 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mult_s2 = 0ULL;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__m_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s1 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mult_s1 = 0ULL;
    } else {
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__stall) {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_out 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_out;
        } else if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s4) {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_out = 1U;
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_o 
                = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__add_temp)
                    ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__add_sub_q)
                    : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__add_temp));
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__b_o 
                = ((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s4 
                    >= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__bw_s4)
                    ? (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s4 
                       - vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__bw_s4)
                    : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__sub_temp));
        } else {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__stall)))) {
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s3) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s4 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__bw_s4 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__bw_next;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s4 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s3;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s2) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s3 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_s3 
                    = (0x0001ffffffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_next[2U])) 
                                                 << 0x00000030U) 
                                                | (((QData)((IData)(
                                                                    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_next[1U])) 
                                                    << 0x00000010U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_next[0U])) 
                                                      >> 0x00000010U))));
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s3 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s2;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s1) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s2 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__m_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__m_next;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mult_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mult_s1;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s1;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_i) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s1 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s1 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_i;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mult_s1 
                    = ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__b_i)) 
                       * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__w)));
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
            }
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_out 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a[3U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b[3U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid[3U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__sub_temp 
        = (0x00000001ffffffffULL & ((0x0000000000001e01ULL 
                                     + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s4))) 
                                    - (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__add_temp 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                    + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__add_sub_q 
        = (0x00000001ffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__add_temp 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_sub_q 
        = (0x0001ffffffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_s3 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__bw_next 
        = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_s3)
            ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_sub_q)
            : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_s3));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mq 
        = (0x0000ffffffffffffULL & (0x0000000000001e01ULL 
                                    * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__m_s2))));
    __Vtemp_2[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mult_s2);
    __Vtemp_2[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mult_s2 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mq);
    __Vtemp_3[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mq 
                             >> 0x00000020U));
    __Vtemp_3[2U] = 0U;
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_next[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_next[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_next[2U] 
        = (1U & __Vtemp_4[2U]);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__m_next 
        = (0x0000ffffU & ((IData)(0x1dffU) * (0x0000ffffU 
                                              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mult_s1))));
}

void Vtop___024root___nba_sequent__TOP__41(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__41\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_out;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_out = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_out 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_out;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_o = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__b_o = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__bw_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_s3 = 0ULL;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s3 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mult_s2 = 0ULL;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__m_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s1 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mult_s1 = 0ULL;
    } else {
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__stall) {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_out 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_out;
        } else if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s4) {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_out = 1U;
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_o 
                = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__add_temp)
                    ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__add_sub_q)
                    : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__add_temp));
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__b_o 
                = ((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s4 
                    >= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__bw_s4)
                    ? (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s4 
                       - vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__bw_s4)
                    : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__sub_temp));
        } else {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__stall)))) {
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s3) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s4 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__bw_s4 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__bw_next;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s4 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s3;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s2) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s3 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_s3 
                    = (0x0001ffffffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_next[2U])) 
                                                 << 0x00000030U) 
                                                | (((QData)((IData)(
                                                                    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_next[1U])) 
                                                    << 0x00000010U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_next[0U])) 
                                                      >> 0x00000010U))));
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s3 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s2;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s1) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s2 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__m_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__m_next;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mult_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mult_s1;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s1;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_i) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s1 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s1 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_i;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mult_s1 
                    = ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__b_i)) 
                       * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__w)));
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
            }
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_out 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a[4U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b[4U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid[4U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__sub_temp 
        = (0x00000001ffffffffULL & ((0x0000000000001e01ULL 
                                     + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s4))) 
                                    - (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__add_temp 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                    + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__add_sub_q 
        = (0x00000001ffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__add_temp 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_sub_q 
        = (0x0001ffffffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_s3 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__bw_next 
        = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_s3)
            ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_sub_q)
            : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_s3));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mq 
        = (0x0000ffffffffffffULL & (0x0000000000001e01ULL 
                                    * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__m_s2))));
    __Vtemp_2[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mult_s2);
    __Vtemp_2[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mult_s2 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mq);
    __Vtemp_3[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mq 
                             >> 0x00000020U));
    __Vtemp_3[2U] = 0U;
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_next[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_next[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_next[2U] 
        = (1U & __Vtemp_4[2U]);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__m_next 
        = (0x0000ffffU & ((IData)(0x1dffU) * (0x0000ffffU 
                                              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mult_s1))));
}

void Vtop___024root___nba_sequent__TOP__42(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__42\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_out;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_out = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_out 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_out;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_o = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__b_o = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__bw_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_s3 = 0ULL;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s3 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mult_s2 = 0ULL;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__m_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s1 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mult_s1 = 0ULL;
    } else {
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__stall) {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_out 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_out;
        } else if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s4) {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_out = 1U;
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_o 
                = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__add_temp)
                    ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__add_sub_q)
                    : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__add_temp));
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__b_o 
                = ((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s4 
                    >= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__bw_s4)
                    ? (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s4 
                       - vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__bw_s4)
                    : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__sub_temp));
        } else {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__stall)))) {
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s3) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s4 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__bw_s4 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__bw_next;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s4 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s3;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s2) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s3 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_s3 
                    = (0x0001ffffffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_next[2U])) 
                                                 << 0x00000030U) 
                                                | (((QData)((IData)(
                                                                    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_next[1U])) 
                                                    << 0x00000010U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_next[0U])) 
                                                      >> 0x00000010U))));
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s3 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s2;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s1) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s2 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__m_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__m_next;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mult_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mult_s1;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s1;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_i) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s1 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s1 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_i;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mult_s1 
                    = ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__b_i)) 
                       * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__w)));
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
            }
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_out 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a[5U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b[5U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid[5U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__sub_temp 
        = (0x00000001ffffffffULL & ((0x0000000000001e01ULL 
                                     + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s4))) 
                                    - (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__add_temp 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                    + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__add_sub_q 
        = (0x00000001ffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__add_temp 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_sub_q 
        = (0x0001ffffffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_s3 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__bw_next 
        = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_s3)
            ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_sub_q)
            : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_s3));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mq 
        = (0x0000ffffffffffffULL & (0x0000000000001e01ULL 
                                    * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__m_s2))));
    __Vtemp_2[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mult_s2);
    __Vtemp_2[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mult_s2 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mq);
    __Vtemp_3[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mq 
                             >> 0x00000020U));
    __Vtemp_3[2U] = 0U;
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_next[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_next[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_next[2U] 
        = (1U & __Vtemp_4[2U]);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__m_next 
        = (0x0000ffffU & ((IData)(0x1dffU) * (0x0000ffffU 
                                              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mult_s1))));
}

void Vtop___024root___nba_sequent__TOP__43(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__43\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_out;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_out = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_out 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_out;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_o = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__b_o = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__bw_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_s3 = 0ULL;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s3 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mult_s2 = 0ULL;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__m_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s1 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mult_s1 = 0ULL;
    } else {
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__stall) {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_out 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_out;
        } else if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s4) {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_out = 1U;
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_o 
                = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__add_temp)
                    ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__add_sub_q)
                    : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__add_temp));
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__b_o 
                = ((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s4 
                    >= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__bw_s4)
                    ? (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s4 
                       - vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__bw_s4)
                    : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__sub_temp));
        } else {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__stall)))) {
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s3) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s4 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__bw_s4 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__bw_next;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s4 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s3;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s2) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s3 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_s3 
                    = (0x0001ffffffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_next[2U])) 
                                                 << 0x00000030U) 
                                                | (((QData)((IData)(
                                                                    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_next[1U])) 
                                                    << 0x00000010U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_next[0U])) 
                                                      >> 0x00000010U))));
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s3 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s2;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s1) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s2 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__m_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__m_next;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mult_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mult_s1;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s1;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_i) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s1 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s1 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_i;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mult_s1 
                    = ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__b_i)) 
                       * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__w)));
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
            }
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_out 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a[6U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b[6U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid[6U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__sub_temp 
        = (0x00000001ffffffffULL & ((0x0000000000001e01ULL 
                                     + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s4))) 
                                    - (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__add_temp 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                    + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__add_sub_q 
        = (0x00000001ffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__add_temp 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_sub_q 
        = (0x0001ffffffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_s3 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__bw_next 
        = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_s3)
            ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_sub_q)
            : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_s3));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mq 
        = (0x0000ffffffffffffULL & (0x0000000000001e01ULL 
                                    * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__m_s2))));
    __Vtemp_2[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mult_s2);
    __Vtemp_2[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mult_s2 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mq);
    __Vtemp_3[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mq 
                             >> 0x00000020U));
    __Vtemp_3[2U] = 0U;
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_next[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_next[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_next[2U] 
        = (1U & __Vtemp_4[2U]);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__m_next 
        = (0x0000ffffU & ((IData)(0x1dffU) * (0x0000ffffU 
                                              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mult_s1))));
}

void Vtop___024root___nba_sequent__TOP__44(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__44\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_out;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_out = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_out 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_out;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_o = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__b_o = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__bw_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_s3 = 0ULL;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s3 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mult_s2 = 0ULL;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__m_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s1 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mult_s1 = 0ULL;
    } else {
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__stall) {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_out 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_out;
        } else if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s4) {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_out = 1U;
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_o 
                = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__add_temp)
                    ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__add_sub_q)
                    : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__add_temp));
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__b_o 
                = ((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s4 
                    >= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__bw_s4)
                    ? (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s4 
                       - vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__bw_s4)
                    : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__sub_temp));
        } else {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__stall)))) {
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s3) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s4 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__bw_s4 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__bw_next;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s4 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s3;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s2) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s3 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_s3 
                    = (0x0001ffffffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_next[2U])) 
                                                 << 0x00000030U) 
                                                | (((QData)((IData)(
                                                                    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_next[1U])) 
                                                    << 0x00000010U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_next[0U])) 
                                                      >> 0x00000010U))));
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s3 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s2;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s1) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s2 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__m_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__m_next;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mult_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mult_s1;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s1;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_i) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s1 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s1 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_i;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mult_s1 
                    = ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__b_i)) 
                       * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__w)));
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
            }
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_out 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a[7U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b[7U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid[7U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__sub_temp 
        = (0x00000001ffffffffULL & ((0x0000000000001e01ULL 
                                     + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s4))) 
                                    - (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__add_temp 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                    + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__add_sub_q 
        = (0x00000001ffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__add_temp 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_sub_q 
        = (0x0001ffffffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_s3 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__bw_next 
        = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_s3)
            ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_sub_q)
            : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_s3));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mq 
        = (0x0000ffffffffffffULL & (0x0000000000001e01ULL 
                                    * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__m_s2))));
    __Vtemp_2[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mult_s2);
    __Vtemp_2[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mult_s2 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mq);
    __Vtemp_3[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mq 
                             >> 0x00000020U));
    __Vtemp_3[2U] = 0U;
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_next[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_next[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_next[2U] 
        = (1U & __Vtemp_4[2U]);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__m_next 
        = (0x0000ffffU & ((IData)(0x1dffU) * (0x0000ffffU 
                                              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mult_s1))));
}

void Vtop___024root___nba_sequent__TOP__45(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__45\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_1__DOT__stall_i)))) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_1__DOT__dout 
            = ((2U > (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_1__DOT__addr))
                ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_1__DOT__mem
               [(1U & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_1__DOT__addr))]
                : 0U);
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_1 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_1__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_1;
}

void Vtop___024root___nba_sequent__TOP__46(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__46\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_2__DOT__stall_i)))) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_2__DOT__dout 
            = ((4U > (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_2__DOT__addr))
                ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_2__DOT__mem
               [(3U & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_2__DOT__addr))]
                : 0U);
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_2 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_2__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_2;
}

void Vtop___024root___nba_sequent__TOP__47(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__47\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_3__DOT__stall_i)))) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_3__DOT__dout 
            = ((8U > (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_3__DOT__addr))
                ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_3__DOT__mem
               [(7U & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_3__DOT__addr))]
                : 0U);
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_3 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_3__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_3;
}

void Vtop___024root___nba_sequent__TOP__48(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__48\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_4__DOT__stall_i)))) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_4__DOT__dout 
            = ((0x10U > (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_4__DOT__addr))
                ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_4__DOT__mem
               [(0x0000000fU & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_4__DOT__addr))]
                : 0U);
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_4 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_4__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_4;
}

void Vtop___024root___nba_sequent__TOP__49(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__49\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_5__DOT__stall_i)))) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_5__DOT__dout 
            = ((0x20U > (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_5__DOT__addr))
                ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_5__DOT__mem
               [(0x0000001fU & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_5__DOT__addr))]
                : 0U);
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_5 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_5__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_5;
}

void Vtop___024root___nba_sequent__TOP__50(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__50\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_6__DOT__stall_i)))) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_6__DOT__dout 
            = ((0x40U > (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_6__DOT__addr))
                ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_6__DOT__mem
               [(0x0000003fU & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_6__DOT__addr))]
                : 0U);
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_6 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_6__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_6;
}

void Vtop___024root___nba_sequent__TOP__51(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__51\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_7__DOT__stall_i)))) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_7__DOT__dout 
            = ((0x80U > (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_7__DOT__addr))
                ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_7__DOT__mem
               [(0x0000007fU & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_7__DOT__addr))]
                : 0U);
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_7 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_7__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_7;
}

void Vtop___024root___nba_sequent__TOP__52(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__52\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__rst) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__valid_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mult_s2_a = 0ULL;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mult_s2_b = 0ULL;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_s2_a = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_s2_b = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__valid_s1 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mult_s1_a = 0ULL;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mult_s1_b = 0ULL;
    } else if ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__stall_i)))) {
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__valid_s1) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__valid_s2 = 1U;
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mult_s2_a 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mult_s1_a;
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mult_s2_b 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mult_s1_b;
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_s2_a 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_next_a;
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_s2_b 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_next_b;
        } else {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__valid_s2 = 0U;
        }
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__valid_i) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__valid_s1 = 1U;
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mult_s1_a 
                = (0x0000ffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__a_i)), 8U));
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mult_s1_b 
                = (0x0000ffffffffffffULL & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__b_i)), 8U));
        } else {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__valid_s1 = 0U;
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__valid_o 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__valid_s2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mq_a 
        = (0x0000ffffffffffffULL & (0x0000000000001e01ULL 
                                    * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_s2_a))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mq_b 
        = (0x0000ffffffffffffULL & (0x0000000000001e01ULL 
                                    * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_s2_b))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__valid_o 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__valid_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__reduction_a 
        = (0x0001ffffffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mult_s2_a 
                                    + vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mq_a));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__reduction_b 
        = (0x0001ffffffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mult_s2_b 
                                    + vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mq_b));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tvalid 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__valid_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__reduced_a 
        = (0x00000001ffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__reduction_a 
                                    >> 0x00000010U));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__reduced_b 
        = (0x00000001ffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__reduction_b 
                                    >> 0x00000010U));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_product_a 
        = ((IData)(0x00001dffU) * (0x0000ffffU & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mult_s1_a)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_product_b 
        = ((IData)(0x00001dffU) * (0x0000ffffU & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mult_s1_b)));
    vlSelfRef.m_axis_tvalid = vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tvalid;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__a_o 
        = (IData)((0x00000001ffffffffULL & ((0x0000000000001e01ULL 
                                             <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__reduced_a)
                                             ? (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__reduced_a 
                                                - 0x0000000000001e01ULL)
                                             : vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__reduced_a)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__b_o 
        = (IData)((0x00000001ffffffffULL & ((0x0000000000001e01ULL 
                                             <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__reduced_b)
                                             ? (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__reduced_b 
                                                - 0x0000000000001e01ULL)
                                             : vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__reduced_b)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_next_a 
        = (0x0000ffffU & vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_product_a);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_next_b 
        = (0x0000ffffU & vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_product_b);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__a_o 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__b_o 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__a_o = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__b_o = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tdata 
        = (((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__b_o)) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__a_o)));
    vlSelfRef.m_axis_tdata = vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tdata;
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__a_o 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair1_q)
            ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f1_dout
            : vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f2_dout);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a[0U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__a_o;
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__a_o 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair1_q)
            ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f1_dout
            : vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f2_dout);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a[1U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__a_o;
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__a_o 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair1_q)
            ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f1_dout
            : vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f2_dout);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a[2U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__a_o;
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__a_o 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair1_q)
            ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f1_dout
            : vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f2_dout);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a[3U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__a_o;
}

void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__a_o 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair1_q)
            ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f1_dout
            : vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f2_dout);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a[4U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__a_o;
}

void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__a_o 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair1_q)
            ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f1_dout
            : vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f2_dout);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a[5U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__a_o;
}

void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__a_o 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair1_q)
            ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f1_dout
            : vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f2_dout);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a[6U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__a_o;
}

void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__b_o 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair1_q)
            ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f3_dout
            : vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f4_dout);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b[1U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__b_o;
}

void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__stall_i)) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_1_3_available)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_2_4_available)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_enable 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair1) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair2));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f2_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f4_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f2_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f4_rd_en;
}

void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__b_o 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair1_q)
            ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f3_dout
            : vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f4_dout);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b[6U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__b_o;
}

void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__stall_i)) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_1_3_available)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_2_4_available)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_enable 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair1) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair2));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f2_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f4_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f2_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f4_rd_en;
}

void Vtop___024root___nba_comb__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__b_o 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair1_q)
            ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f3_dout
            : vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f4_dout);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b[0U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__b_o;
}

void Vtop___024root___nba_comb__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__stall_i)) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_1_3_available)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_2_4_available)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_enable 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair1) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair2));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f2_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f4_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f2_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f4_rd_en;
}

void Vtop___024root___nba_comb__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__b_o 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair1_q)
            ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f3_dout
            : vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f4_dout);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b[2U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__b_o;
}

void Vtop___024root___nba_comb__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__stall_i)) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_1_3_available)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_2_4_available)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_enable 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair1) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair2));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f2_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f4_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f2_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f4_rd_en;
}

void Vtop___024root___nba_comb__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__b_o 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair1_q)
            ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f3_dout
            : vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f4_dout);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b[3U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__b_o;
}

void Vtop___024root___nba_comb__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__stall_i)) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_1_3_available)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_2_4_available)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_enable 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair1) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair2));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f2_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f4_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f2_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f4_rd_en;
}

void Vtop___024root___nba_comb__TOP__17(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__b_o 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair1_q)
            ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f3_dout
            : vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f4_dout);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b[4U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__b_o;
}

void Vtop___024root___nba_comb__TOP__18(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__stall_i)) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_1_3_available)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_2_4_available)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_enable 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair1) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair2));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f2_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f4_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f2_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f4_rd_en;
}

void Vtop___024root___nba_comb__TOP__19(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__19\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__b_o 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair1_q)
            ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f3_dout
            : vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f4_dout);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b[5U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__b_o;
}

void Vtop___024root___nba_comb__TOP__20(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__stall_i)) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_1_3_available)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_2_4_available)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_enable 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair1) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair2));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f2_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f4_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f2_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f4_rd_en;
}

void Vtop___024root___nba_sequent__TOP__53(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__53\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[0U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__54(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__54\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[1U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__55(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__55\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[2U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__56(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__56\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[3U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__57(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__57\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[4U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__58(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__58\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[5U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__59(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__59\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[6U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__60(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__60\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [2U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [2U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [2U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [3U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [3U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [3U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [4U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [4U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [4U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [5U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [5U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [5U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [6U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [6U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [6U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [7U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [7U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [7U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_1__DOT__addr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr
        [0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_2__DOT__addr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr
        [1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_3__DOT__addr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr
        [2U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_4__DOT__addr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr
        [3U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_5__DOT__addr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr
        [4U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_6__DOT__addr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr
        [5U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_7__DOT__addr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr
        [6U];
}

void Vtop___024root___nba_comb__TOP__21(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a
        [0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a
        [1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a
        [2U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a
        [3U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a
        [4U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a
        [5U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a
        [6U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b
        [0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b
        [1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b
        [2U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b
        [3U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b
        [4U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b
        [5U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b
        [6U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid
        [0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid
        [1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid
        [2U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid
        [3U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid
        [4U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid
        [5U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid
        [6U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a
        [7U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b
        [7U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid
        [7U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_data 
        = (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__a_i));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_data 
        = (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__a_i));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_data 
        = (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__a_i));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_data 
        = (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__a_i));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_data 
        = (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__a_i));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_data 
        = (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__a_i));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_data 
        = (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__a_i));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_data 
        = (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__b_i));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_data 
        = (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__b_i));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_data 
        = (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__b_i));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_data 
        = (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__b_i));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_data 
        = (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__b_i));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_data 
        = (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__b_i));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_data 
        = (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__b_i));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT____VdfgRegularize_h587f25fc_0_1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__stall_i)) 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__valid_i));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT____VdfgRegularize_h2ab18376_0_1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__stall_i)) 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__valid_i));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT____VdfgRegularize_hcdadf19d_0_1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__stall_i)) 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__valid_i));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT____VdfgRegularize_had232467_0_1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__stall_i)) 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__valid_i));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT____VdfgRegularize_h4bf5fa17_0_1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__stall_i)) 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__valid_i));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT____VdfgRegularize_he1721b4e_0_1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__stall_i)) 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__valid_i));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT____VdfgRegularize_h823e8401_0_1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__stall_i)) 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__valid_i));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__wr_data 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_data;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__wr_data 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_data;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__wr_data 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_data;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__wr_data 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_data;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__wr_data 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_data;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__wr_data 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_data;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__wr_data 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_data;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__wr_data 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_data;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__wr_data 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_data;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__wr_data 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_data;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__wr_data 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_data;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__wr_data 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_data;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__wr_data 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_data;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__wr_data 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_data;
}

void Vtop___024root___nba_comb__TOP__22(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__22\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tlast 
        = ((0x7fU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__out_cnt)) 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tvalid));
    vlSelfRef.m_axis_tlast = vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tlast;
}

void Vtop___024root___nba_comb__TOP__23(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__23\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_1_2 
        = ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f1_full) 
               | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__state))) 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT____VdfgRegularize_h587f25fc_0_1));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_3_4 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT____VdfgRegularize_h587f25fc_0_1) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f3_full)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__state)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_1_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_1_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_3_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_3_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__input_accept 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_1_2) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_3_4));
}

void Vtop___024root___nba_comb__TOP__24(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__24\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_1_2 
        = ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f1_full) 
               | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__state))) 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT____VdfgRegularize_h2ab18376_0_1));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_3_4 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT____VdfgRegularize_h2ab18376_0_1) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f3_full)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__state)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_1_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_1_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_3_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_3_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__input_accept 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_1_2) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_3_4));
}

void Vtop___024root___nba_comb__TOP__25(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__25\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_1_2 
        = ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f1_full) 
               | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__state))) 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT____VdfgRegularize_hcdadf19d_0_1));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_3_4 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT____VdfgRegularize_hcdadf19d_0_1) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f3_full)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__state)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_1_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_1_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_3_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_3_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__input_accept 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_1_2) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_3_4));
}

void Vtop___024root___nba_comb__TOP__26(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__26\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_1_2 
        = ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f1_full) 
               | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__state))) 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT____VdfgRegularize_had232467_0_1));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_3_4 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT____VdfgRegularize_had232467_0_1) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f3_full)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__state)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_1_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_1_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_3_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_3_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__input_accept 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_1_2) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_3_4));
}

void Vtop___024root___nba_comb__TOP__27(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__27\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_1_2 
        = ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f1_full) 
               | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__state))) 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT____VdfgRegularize_h4bf5fa17_0_1));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_3_4 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT____VdfgRegularize_h4bf5fa17_0_1) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f3_full)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__state)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_1_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_1_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_3_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_3_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__input_accept 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_1_2) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_3_4));
}

void Vtop___024root___nba_comb__TOP__28(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_1_2 
        = ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f1_full) 
               | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__state))) 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT____VdfgRegularize_he1721b4e_0_1));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_3_4 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT____VdfgRegularize_he1721b4e_0_1) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f3_full)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__state)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_1_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_1_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_3_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_3_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__input_accept 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_1_2) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_3_4));
}

void Vtop___024root___nba_comb__TOP__29(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__29\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_1_2 
        = ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f1_full) 
               | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__state))) 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT____VdfgRegularize_h823e8401_0_1));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_3_4 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT____VdfgRegularize_h823e8401_0_1) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f3_full)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__state)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_1_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_1_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_3_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_3_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__input_accept 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_1_2) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_3_4));
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__18(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__19(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__20(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__21(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__23(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__24(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__25(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__26(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__27(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__28(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__29(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__30(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__31(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__32(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__33(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__34(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__35(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__36(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__37(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__38(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__39(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000080000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x0000000000100000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x0000000001000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x0000000002000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x0000000020000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x0000000040000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x0000000400000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x0000000800000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0x0000000000040000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((0x0000000000800000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__18(vlSelf);
    }
    if ((0x0000000010000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__19(vlSelf);
    }
    if ((0x0000000200000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__20(vlSelf);
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__21(vlSelf);
    }
    if ((0x0000002000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__22(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__23(vlSelf);
    }
    if ((0x0000000000020000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__24(vlSelf);
    }
    if ((0x0000000000400000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__25(vlSelf);
    }
    if ((0x0000000008000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__26(vlSelf);
    }
    if ((0x0000000100000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__27(vlSelf);
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__28(vlSelf);
    }
    if ((0x0000001000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__29(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__30(vlSelf);
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__31(vlSelf);
    }
    if ((0x0000000000200000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__32(vlSelf);
    }
    if ((0x0000000004000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__33(vlSelf);
    }
    if ((0x0000000080000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__34(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__35(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__36(vlSelf);
    }
    if ((0x0000200000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__37(vlSelf);
    }
    if ((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__38(vlSelf);
    }
    if ((0x0000800000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__39(vlSelf);
    }
    if ((0x0001000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__40(vlSelf);
    }
    if ((0x0002000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__41(vlSelf);
    }
    if ((0x0004000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__42(vlSelf);
    }
    if ((0x0008000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__43(vlSelf);
    }
    if ((0x0010000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__44(vlSelf);
    }
    if ((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__45(vlSelf);
    }
    if ((0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__46(vlSelf);
    }
    if ((0x0000010000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__47(vlSelf);
    }
    if ((0x0000020000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__48(vlSelf);
    }
    if ((0x0000040000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__49(vlSelf);
    }
    if ((0x0000080000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__50(vlSelf);
    }
    if ((0x0000100000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__51(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__52(vlSelf);
    }
    if ((0x0000000000000038ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x0000000000000700ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x000000000000e000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x00000000001c0000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x0000000003800000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x0000000070000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x0000000e00000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x0000000000001900ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0x0000000000001800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x0000003200000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((0x0000003000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((0x00000000000000c8ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__11(vlSelf);
    }
    if ((0x00000000000000c0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__12(vlSelf);
    }
    if ((0x0000000000032000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__13(vlSelf);
    }
    if ((0x0000000000030000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__14(vlSelf);
    }
    if ((0x0000000000640000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__15(vlSelf);
    }
    if ((0x0000000000600000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__16(vlSelf);
    }
    if ((0x000000000c800000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__17(vlSelf);
    }
    if ((0x000000000c000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__18(vlSelf);
    }
    if ((0x0000000190000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__19(vlSelf);
    }
    if ((0x0000000180000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__20(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__53(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__54(vlSelf);
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__55(vlSelf);
    }
    if ((0x0000000000040000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__56(vlSelf);
    }
    if ((0x0000000000800000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__57(vlSelf);
    }
    if ((0x0000000010000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__58(vlSelf);
    }
    if ((0x0000000200000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__59(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__60(vlSelf);
    }
    if ((0x001fe00000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__21(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__22(vlSelf);
    }
    if ((0x001fe00000000008ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__23(vlSelf);
    }
    if ((0x001fe00000000100ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__24(vlSelf);
    }
    if ((0x001fe00000002000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__25(vlSelf);
    }
    if ((0x001fe00000040000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__26(vlSelf);
    }
    if ((0x001fe00000800000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__27(vlSelf);
    }
    if ((0x001fe00010000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__28(vlSelf);
    }
    if ((0x001fe00200000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__29(vlSelf);
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

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

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

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

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

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

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
            VL_FATAL_MT("/home/abhay/OpenSource/PQC_ASIC/RTL/INTT/INTT_engine_axis_wrapper.v", 3, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/abhay/OpenSource/PQC_ASIC/RTL/INTT/INTT_engine_axis_wrapper.v", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/abhay/OpenSource/PQC_ASIC/RTL/INTT/INTT_engine_axis_wrapper.v", 3, "", "Active region did not converge after 100 tries");
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
    if (VL_UNLIKELY(((vlSelfRef.aresetn & 0xfeU)))) {
        Verilated::overWidthError("aresetn");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_axis_tvalid & 0xfeU)))) {
        Verilated::overWidthError("s_axis_tvalid");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_axis_tlast & 0xfeU)))) {
        Verilated::overWidthError("s_axis_tlast");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axis_tready & 0xfeU)))) {
        Verilated::overWidthError("m_axis_tready");
    }
}
#endif  // VL_DEBUG
