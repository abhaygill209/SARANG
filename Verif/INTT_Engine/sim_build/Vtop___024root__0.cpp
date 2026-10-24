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
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__aresetn 
        = vlSelfRef.aresetn;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__s_axis_tlast 
        = vlSelfRef.s_axis_tlast;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_full 
        = (0x0200U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__core_tlast 
        = (0x7fU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__core_out_cnt));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__stall_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__stall_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_1__DOT__stall_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_2__DOT__stall_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_3__DOT__stall_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_4__DOT__stall_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_5__DOT__stall_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_6__DOT__stall_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_7__DOT__stall_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__stall 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__stall 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__stall 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__stall 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__stall 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__stall 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__stall 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__stall 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
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
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_0;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__m_next 
        = (0x0000ffffU & ((IData)(0x1dffU) * (0x0000ffffU 
                                              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mult_s1))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__m_next 
        = (0x0000ffffU & ((IData)(0x1dffU) * (0x0000ffffU 
                                              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mult_s1))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__m_next 
        = (0x0000ffffU & ((IData)(0x1dffU) * (0x0000ffffU 
                                              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mult_s1))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__m_next 
        = (0x0000ffffU & ((IData)(0x1dffU) * (0x0000ffffU 
                                              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mult_s1))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__m_next 
        = (0x0000ffffU & ((IData)(0x1dffU) * (0x0000ffffU 
                                              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mult_s1))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__m_next 
        = (0x0000ffffU & ((IData)(0x1dffU) * (0x0000ffffU 
                                              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mult_s1))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__m_next 
        = (0x0000ffffU & ((IData)(0x1dffU) * (0x0000ffffU 
                                              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mult_s1))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__m_next 
        = (0x0000ffffU & ((IData)(0x1dffU) * (0x0000ffffU 
                                              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mult_s1))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__sub_temp 
        = (0x00000001ffffffffULL & ((0x0000000000001e01ULL 
                                     + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s4))) 
                                    - (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__sub_temp 
        = (0x00000001ffffffffULL & ((0x0000000000001e01ULL 
                                     + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s4))) 
                                    - (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__sub_temp 
        = (0x00000001ffffffffULL & ((0x0000000000001e01ULL 
                                     + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s4))) 
                                    - (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__sub_temp 
        = (0x00000001ffffffffULL & ((0x0000000000001e01ULL 
                                     + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s4))) 
                                    - (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__sub_temp 
        = (0x00000001ffffffffULL & ((0x0000000000001e01ULL 
                                     + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s4))) 
                                    - (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__sub_temp 
        = (0x00000001ffffffffULL & ((0x0000000000001e01ULL 
                                     + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s4))) 
                                    - (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__sub_temp 
        = (0x00000001ffffffffULL & ((0x0000000000001e01ULL 
                                     + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s4))) 
                                    - (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__sub_temp 
        = (0x00000001ffffffffULL & ((0x0000000000001e01ULL 
                                     + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s4))) 
                                    - (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_product_a 
        = ((IData)(0x00001dffU) * (0x0000ffffU & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mult_s1_a)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_product_b 
        = ((IData)(0x00001dffU) * (0x0000ffffU & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mult_s1_b)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_1 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_1__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_2 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_2__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_3 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_3__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_4 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_4__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_5 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_5__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_6 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_6__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_7 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_7__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tready 
        = vlSelfRef.m_axis_tready;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mq 
        = (0x0000ffffffffffffULL & (0x0000000000001e01ULL 
                                    * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__m_s2))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_sub_q 
        = (0x0001ffffffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_s3 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__add_temp 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                    + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mq 
        = (0x0000ffffffffffffULL & (0x0000000000001e01ULL 
                                    * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__m_s2))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_sub_q 
        = (0x0001ffffffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_s3 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__add_temp 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                    + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mq 
        = (0x0000ffffffffffffULL & (0x0000000000001e01ULL 
                                    * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__m_s2))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_sub_q 
        = (0x0001ffffffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_s3 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__add_temp 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                    + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mq 
        = (0x0000ffffffffffffULL & (0x0000000000001e01ULL 
                                    * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__m_s2))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_sub_q 
        = (0x0001ffffffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_s3 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__add_temp 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                    + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mq 
        = (0x0000ffffffffffffULL & (0x0000000000001e01ULL 
                                    * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__m_s2))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_sub_q 
        = (0x0001ffffffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_s3 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__add_temp 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                    + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mq 
        = (0x0000ffffffffffffULL & (0x0000000000001e01ULL 
                                    * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__m_s2))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_sub_q 
        = (0x0001ffffffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_s3 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__add_temp 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                    + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mq 
        = (0x0000ffffffffffffULL & (0x0000000000001e01ULL 
                                    * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__m_s2))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_sub_q 
        = (0x0001ffffffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_s3 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__add_temp 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                    + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mq 
        = (0x0000ffffffffffffULL & (0x0000000000001e01ULL 
                                    * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__m_s2))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_sub_q 
        = (0x0001ffffffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_s3 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__add_temp 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                    + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__valid_o 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__valid_s2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b[7U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a[7U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[0U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__valid_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[1U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__valid_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[2U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__valid_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[3U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__valid_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[4U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__valid_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[5U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__valid_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[6U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__valid_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[7U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__valid_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_dout[0U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_mem
        [vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_rd_ptr][0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_dout[1U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_mem
        [vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_rd_ptr][1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_dout[2U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_mem
        [vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_rd_ptr][2U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mq_a 
        = (0x0000ffffffffffffULL & (0x0000000000001e01ULL 
                                    * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_s2_a))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mq_b 
        = (0x0000ffffffffffffULL & (0x0000000000001e01ULL 
                                    * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_s2_b))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f1_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f2_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f3_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f4_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f1_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f2_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f3_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f4_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f1_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f2_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f3_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f4_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f1_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f2_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f3_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f4_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f1_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f2_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f3_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f4_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f1_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f2_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f3_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f4_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f1_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f2_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f3_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f4_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__full 
        = (6U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__full 
        = (6U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__full 
        = (6U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__full 
        = (6U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__full 
        = (8U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__full 
        = (8U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__full 
        = (8U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__full 
        = (8U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__full 
        = (0x0eU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__full 
        = (0x0eU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__full 
        = (0x0eU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__full 
        = (0x0eU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__full 
        = (0x1aU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__full 
        = (0x1aU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__full 
        = (0x1aU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__full 
        = (0x1aU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__full 
        = (0x32U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__full 
        = (0x32U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__full 
        = (0x32U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__full 
        = (0x32U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__full 
        = (0x62U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__full 
        = (0x62U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__full 
        = (0x62U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__full 
        = (0x62U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__full 
        = (0xc2U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__full 
        = (0xc2U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__full 
        = (0xc2U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__full 
        = (0xc2U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__s_axis_tvalid 
        = vlSelfRef.s_axis_tvalid;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__s_axis_tready 
        = (0x017eU >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__total_words_in_system));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__s_axis_tdata 
        = vlSelfRef.s_axis_tdata;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b[0U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b[1U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b[2U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b[3U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b[4U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b[5U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b[6U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b[7U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a[0U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a[1U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a[2U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a[3U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a[4U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a[5U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a[6U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a[7U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__stall_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__stall_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__stall_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__stall_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__stall_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__stall_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__stall_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__rst = vlSelfRef.INTT_engine_axis_wrapper__DOT__rst_sync_1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__clk = vlSelfRef.clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid[0U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid[1U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid[2U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid[3U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid[4U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid[5U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid[6U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid[7U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_next_a 
        = (0x0000ffffU & vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_product_a);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_next_b 
        = (0x0000ffffU & vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__m_product_b);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_3;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_5;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_6;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_data_7;
    __Vtemp_2[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mult_s2);
    __Vtemp_2[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mult_s2 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mq);
    __Vtemp_3[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mq 
                             >> 0x00000020U));
    __Vtemp_3[2U] = 0U;
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_next[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_next[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_next[2U] 
        = (1U & __Vtemp_4[2U]);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__bw_next 
        = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_s3)
            ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_sub_q)
            : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_s3));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__add_sub_q 
        = (0x00000001ffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__add_temp 
                                    - 0x0000000000001e01ULL));
    __Vtemp_6[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mult_s2);
    __Vtemp_6[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mult_s2 
                             >> 0x00000020U));
    __Vtemp_6[2U] = 0U;
    __Vtemp_7[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mq);
    __Vtemp_7[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mq 
                             >> 0x00000020U));
    __Vtemp_7[2U] = 0U;
    VL_ADD_W(3, __Vtemp_8, __Vtemp_6, __Vtemp_7);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_next[0U] 
        = __Vtemp_8[0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_next[1U] 
        = __Vtemp_8[1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_next[2U] 
        = (1U & __Vtemp_8[2U]);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__bw_next 
        = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_s3)
            ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_sub_q)
            : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_s3));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__add_sub_q 
        = (0x00000001ffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__add_temp 
                                    - 0x0000000000001e01ULL));
    __Vtemp_10[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mult_s2);
    __Vtemp_10[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mult_s2 
                              >> 0x00000020U));
    __Vtemp_10[2U] = 0U;
    __Vtemp_11[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mq);
    __Vtemp_11[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mq 
                              >> 0x00000020U));
    __Vtemp_11[2U] = 0U;
    VL_ADD_W(3, __Vtemp_12, __Vtemp_10, __Vtemp_11);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_next[0U] 
        = __Vtemp_12[0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_next[1U] 
        = __Vtemp_12[1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_next[2U] 
        = (1U & __Vtemp_12[2U]);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__bw_next 
        = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_s3)
            ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_sub_q)
            : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_s3));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__add_sub_q 
        = (0x00000001ffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__add_temp 
                                    - 0x0000000000001e01ULL));
    __Vtemp_14[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mult_s2);
    __Vtemp_14[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mult_s2 
                              >> 0x00000020U));
    __Vtemp_14[2U] = 0U;
    __Vtemp_15[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mq);
    __Vtemp_15[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mq 
                              >> 0x00000020U));
    __Vtemp_15[2U] = 0U;
    VL_ADD_W(3, __Vtemp_16, __Vtemp_14, __Vtemp_15);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_next[0U] 
        = __Vtemp_16[0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_next[1U] 
        = __Vtemp_16[1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_next[2U] 
        = (1U & __Vtemp_16[2U]);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__bw_next 
        = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_s3)
            ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_sub_q)
            : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_s3));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__add_sub_q 
        = (0x00000001ffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__add_temp 
                                    - 0x0000000000001e01ULL));
    __Vtemp_18[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mult_s2);
    __Vtemp_18[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mult_s2 
                              >> 0x00000020U));
    __Vtemp_18[2U] = 0U;
    __Vtemp_19[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mq);
    __Vtemp_19[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mq 
                              >> 0x00000020U));
    __Vtemp_19[2U] = 0U;
    VL_ADD_W(3, __Vtemp_20, __Vtemp_18, __Vtemp_19);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_next[0U] 
        = __Vtemp_20[0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_next[1U] 
        = __Vtemp_20[1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_next[2U] 
        = (1U & __Vtemp_20[2U]);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__bw_next 
        = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_s3)
            ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_sub_q)
            : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_s3));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__add_sub_q 
        = (0x00000001ffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__add_temp 
                                    - 0x0000000000001e01ULL));
    __Vtemp_22[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mult_s2);
    __Vtemp_22[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mult_s2 
                              >> 0x00000020U));
    __Vtemp_22[2U] = 0U;
    __Vtemp_23[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mq);
    __Vtemp_23[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mq 
                              >> 0x00000020U));
    __Vtemp_23[2U] = 0U;
    VL_ADD_W(3, __Vtemp_24, __Vtemp_22, __Vtemp_23);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_next[0U] 
        = __Vtemp_24[0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_next[1U] 
        = __Vtemp_24[1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_next[2U] 
        = (1U & __Vtemp_24[2U]);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__bw_next 
        = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_s3)
            ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_sub_q)
            : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_s3));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__add_sub_q 
        = (0x00000001ffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__add_temp 
                                    - 0x0000000000001e01ULL));
    __Vtemp_26[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mult_s2);
    __Vtemp_26[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mult_s2 
                              >> 0x00000020U));
    __Vtemp_26[2U] = 0U;
    __Vtemp_27[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mq);
    __Vtemp_27[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mq 
                              >> 0x00000020U));
    __Vtemp_27[2U] = 0U;
    VL_ADD_W(3, __Vtemp_28, __Vtemp_26, __Vtemp_27);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_next[0U] 
        = __Vtemp_28[0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_next[1U] 
        = __Vtemp_28[1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_next[2U] 
        = (1U & __Vtemp_28[2U]);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__bw_next 
        = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_s3)
            ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_sub_q)
            : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_s3));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__add_sub_q 
        = (0x00000001ffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__add_temp 
                                    - 0x0000000000001e01ULL));
    __Vtemp_30[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mult_s2);
    __Vtemp_30[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mult_s2 
                              >> 0x00000020U));
    __Vtemp_30[2U] = 0U;
    __Vtemp_31[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mq);
    __Vtemp_31[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mq 
                              >> 0x00000020U));
    __Vtemp_31[2U] = 0U;
    VL_ADD_W(3, __Vtemp_32, __Vtemp_30, __Vtemp_31);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_next[0U] 
        = __Vtemp_32[0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_next[1U] 
        = __Vtemp_32[1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_next[2U] 
        = (1U & __Vtemp_32[2U]);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__bw_next 
        = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_s3)
            ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_sub_q)
            : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_s3));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__add_sub_q 
        = (0x00000001ffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__add_temp 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__valid_o 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__valid_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid
        [7U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tdata 
        = (((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_dout[1U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_dout[0U])));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__reduction_a 
        = (0x0001ffffffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mult_s2_a 
                                    + vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mq_a));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__reduction_b 
        = (0x0001ffffffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mult_s2_b 
                                    + vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__mq_b));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tvalid 
        = (1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_empty)));
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair1_q) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__a_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f1_dout;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__b_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f3_dout;
    } else {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__a_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f2_dout;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__b_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f4_dout;
    }
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair1_q) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__a_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f1_dout;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__b_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f3_dout;
    } else {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__a_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f2_dout;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__b_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f4_dout;
    }
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair1_q) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__a_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f1_dout;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__b_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f3_dout;
    } else {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__a_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f2_dout;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__b_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f4_dout;
    }
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair1_q) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__a_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f1_dout;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__b_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f3_dout;
    } else {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__a_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f2_dout;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__b_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f4_dout;
    }
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair1_q) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__a_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f1_dout;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__b_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f3_dout;
    } else {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__a_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f2_dout;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__b_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f4_dout;
    }
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair1_q) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__a_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f1_dout;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__b_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f3_dout;
    } else {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__a_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f2_dout;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__b_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f4_dout;
    }
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair1_q) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__a_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f1_dout;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__b_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f3_dout;
    } else {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__a_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f2_dout;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__b_o 
            = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f4_dout;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f1_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f2_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f3_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f4_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f1_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f2_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f3_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f4_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f1_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f2_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f3_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f4_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f1_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f2_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f3_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f4_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f1_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f2_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f3_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f4_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f1_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f2_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f3_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f4_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f1_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f2_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f3_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f4_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f1_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f3_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f2_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f4_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f1_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f3_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f2_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f4_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f1_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f3_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f2_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f4_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f1_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f3_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f2_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f4_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f1_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f3_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f2_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f4_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f1_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f3_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f2_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f4_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f1_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f3_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f2_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__empty;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f4_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__empty;
    vlSelfRef.s_axis_tready = vlSelfRef.INTT_engine_axis_wrapper__DOT__s_axis_tready;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__in_handshake 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__s_axis_tready) 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__s_axis_tvalid));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__a_i = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__s_axis_tdata);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__b_i = (IData)(
                                                           (vlSelfRef.INTT_engine_axis_wrapper__DOT__s_axis_tdata 
                                                            >> 0x00000020U));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b
        [7U];
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
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a
        [7U];
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
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid
        [7U];
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
    vlSelfRef.INTT_engine_axis_wrapper__DOT__core_valid_o 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__valid_o;
    vlSelfRef.m_axis_tdata = vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tdata;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__reduced_a 
        = (0x00000001ffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__reduction_a 
                                    >> 0x00000010U));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__reduced_b 
        = (0x00000001ffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__reduction_b 
                                    >> 0x00000010U));
    vlSelfRef.m_axis_tvalid = vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tvalid;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__out_handshake 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tready) 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tvalid));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tlast 
        = (vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_dout[2U] 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tvalid));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a[0U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b[0U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a[1U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b[1U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a[2U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b[2U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a[3U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b[3U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a[4U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b[4U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a[5U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b[5U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a[6U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b[6U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair1_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f1_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f3_empty))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair2_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f2_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f4_empty))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair1_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f1_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f3_empty))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair2_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f2_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f4_empty))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair1_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f1_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f3_empty))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair2_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f2_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f4_empty))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair1_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f1_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f3_empty))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair2_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f2_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f4_empty))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair1_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f1_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f3_empty))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair2_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f2_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f4_empty))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair1_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f1_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f3_empty))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair2_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f2_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f4_empty))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair1_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f1_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f3_empty))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair2_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f2_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f4_empty))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__in_handshake;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__rst_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__rst_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__rst_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__rst_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__rst_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__rst_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__rst_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__rst_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__clk_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_1__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_2__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_3__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_4__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_5__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_6__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_7__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__clk_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__clk_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__clk_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__clk_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__clk_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__clk_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__clk_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT____VdfgRegularize_h5f8bbaef_0_1 
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
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT____VdfgRegularize_hd6bfc3d2_0_1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__stall_i)) 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__valid_i));
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
    vlSelfRef.m_axis_tlast = vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tlast;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a
        [7U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b
        [7U];
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__burst_active) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__pair1_ready 
            = ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair1_has_data));
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__pair2_ready 
            = ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair2_has_data));
    } else {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__pair1_ready 
            = ((1U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair1_has_data));
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__pair2_ready 
            = ((1U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair2_has_data));
    }
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__burst_active) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__pair1_ready 
            = ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair1_has_data));
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__pair2_ready 
            = ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair2_has_data));
    } else {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__pair1_ready 
            = ((2U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair1_has_data));
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__pair2_ready 
            = ((2U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair2_has_data));
    }
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__burst_active) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__pair1_ready 
            = ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair1_has_data));
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__pair2_ready 
            = ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair2_has_data));
    } else {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__pair1_ready 
            = ((4U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair1_has_data));
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__pair2_ready 
            = ((4U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair2_has_data));
    }
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__burst_active) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__pair1_ready 
            = ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair1_has_data));
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__pair2_ready 
            = ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair2_has_data));
    } else {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__pair1_ready 
            = ((8U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair1_has_data));
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__pair2_ready 
            = ((8U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair2_has_data));
    }
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__burst_active) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__pair1_ready 
            = ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair1_has_data));
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__pair2_ready 
            = ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair2_has_data));
    } else {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__pair1_ready 
            = ((0x10U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair1_has_data));
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__pair2_ready 
            = ((0x10U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair2_has_data));
    }
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__burst_active) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__pair1_ready 
            = ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair1_has_data));
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__pair2_ready 
            = ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair2_has_data));
    } else {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__pair1_ready 
            = ((0x20U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair1_has_data));
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__pair2_ready 
            = ((0x20U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair2_has_data));
    }
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__burst_active) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__pair1_ready 
            = ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair1_has_data));
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__pair2_ready 
            = ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair2_has_data));
    } else {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__pair1_ready 
            = ((0x40U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair1_has_data));
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__pair2_ready 
            = ((0x40U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair2_has_data));
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D[0U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__valid_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D[0U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D[0U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__clk 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__clk_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_1_2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__state)) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f1_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f2_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT____VdfgRegularize_h5f8bbaef_0_1)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_3_4 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT____VdfgRegularize_h5f8bbaef_0_1) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f3_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f4_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__state)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_1_2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__state)) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f1_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f2_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT____VdfgRegularize_h2ab18376_0_1)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_3_4 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT____VdfgRegularize_h2ab18376_0_1) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f3_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f4_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__state)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_1_2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__state)) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f1_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f2_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT____VdfgRegularize_hcdadf19d_0_1)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_3_4 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT____VdfgRegularize_hcdadf19d_0_1) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f3_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f4_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__state)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_1_2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__state)) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f1_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f2_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT____VdfgRegularize_had232467_0_1)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_3_4 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT____VdfgRegularize_had232467_0_1) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f3_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f4_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__state)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_1_2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__state)) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f1_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f2_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT____VdfgRegularize_h4bf5fa17_0_1)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_3_4 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT____VdfgRegularize_h4bf5fa17_0_1) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f3_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f4_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__state)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_1_2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__state)) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f1_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f2_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT____VdfgRegularize_he1721b4e_0_1)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_3_4 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT____VdfgRegularize_he1721b4e_0_1) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f3_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f4_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__state)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_1_2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__state)) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f1_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f2_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT____VdfgRegularize_hd6bfc3d2_0_1)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_3_4 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT____VdfgRegularize_hd6bfc3d2_0_1) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f3_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f4_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__state)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__a_o 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__b_o 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__stall_i)) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_state)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__pair1_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__stall_i)) 
           & ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_state) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__pair2_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__stall_i)) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_state)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__pair1_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__stall_i)) 
           & ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_state) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__pair2_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__stall_i)) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_state)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__pair1_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__stall_i)) 
           & ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_state) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__pair2_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__stall_i)) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_state)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__pair1_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__stall_i)) 
           & ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_state) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__pair2_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__stall_i)) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_state)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__pair1_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__stall_i)) 
           & ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_state) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__pair2_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__stall_i)) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_state)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__pair1_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__stall_i)) 
           & ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_state) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__pair2_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__stall_i)) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_state)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__pair1_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__stall_i)) 
           & ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_state) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__pair2_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [2U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [3U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [4U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [5U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [6U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [7U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [2U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [3U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [4U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [5U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [6U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [7U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [2U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [3U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [4U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [5U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [6U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [7U];
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
    vlSelfRef.INTT_engine_axis_wrapper__DOT__a_o = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__b_o = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f1_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f3_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_enable 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair1) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair2));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f2_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f4_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f1_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f3_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_enable 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair1) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair2));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f2_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f4_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f1_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f3_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_enable 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair1) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair2));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f2_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f4_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f1_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f3_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_enable 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair1) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair2));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f2_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f4_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f1_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f3_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_enable 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair1) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair2));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f2_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f4_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f1_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f3_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_enable 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair1) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair2));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f2_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f4_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f1_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f3_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_enable 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair1) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair2));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f2_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f4_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f1_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f3_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f2_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f4_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f1_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f3_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f2_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f4_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f1_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f3_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f2_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f4_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f1_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f3_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f2_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f4_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f1_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f3_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f2_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f4_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f1_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f3_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f2_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f4_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f1_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f3_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f2_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f4_rd_en;
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
    vlSelfRef.__VactTriggered[0U] = (((QData)((IData)(
                                                      (((((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__clk__0))) 
                                                           << 6U) 
                                                          | ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__clk__0))) 
                                                              << 5U) 
                                                             | (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__clk__0))) 
                                                                << 4U))) 
                                                         | (((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__clk__0))) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__clk__0))) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__clk__0))) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__clk__0)))))) 
                                                        << 0x00000010U) 
                                                       | ((((((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__clk__0))) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_7__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_7__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_6__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_6__DOT__clk__0))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_5__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_5__DOT__clk__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_4__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_4__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_3__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_3__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_2__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_2__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_1__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_1__DOT__clk__0))))) 
                                                              << 8U)) 
                                                          | (((((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__clk_i) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__clk_i__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__clk__0))))) 
                                                              << 4U) 
                                                             | (((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__clk__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__clk_i) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__clk_i__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__clk__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__clk__0)))))))))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((((((((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__clk__0))) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__clk_i) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__clk_i__0))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__clk__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__clk_i) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__clk_i__0))))) 
                                                              << 8U)) 
                                                          | (((((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__clk__0))))) 
                                                              << 4U) 
                                                             | (((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__clk_i) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__clk_i__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__clk__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__clk__0))))))) 
                                                         << 0x00000010U) 
                                                        | ((((((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__clk__0))) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__clk_i) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__clk_i__0))) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__clk__0))) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__clk__0))))) 
                                                             << 0x0000000cU) 
                                                            | ((((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__clk__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__clk_i) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__clk_i__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__clk__0))))) 
                                                               << 8U)) 
                                                           | (((((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__clk__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__clk__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__clk_i) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__clk_i__0))))) 
                                                               << 4U) 
                                                              | (((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__clk__0))) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk__0))) 
                                                                     << 2U)) 
                                                                 | ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__clk__0))) 
                                                                     << 1U) 
                                                                    | ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__aresetn)) 
                                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__aresetn__0))))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__aresetn__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__aresetn;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__clk_i__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__clk_i__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__clk_i__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__clk_i__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__clk_i__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__clk_i__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__clk_i__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__clk_i__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_1__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_2__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_3__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_3__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_4__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_4__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_5__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_5__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_6__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_6__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_7__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__t_rom_7__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__clk__0 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__clk;
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
    CData/*2:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr = 0;
    CData/*2:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__full)))) {
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__din;
            __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr;
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0 = 1U;
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr 
                = ((7U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__count 
            = (0x0000000fU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__dout 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem
                [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr];
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr 
                = ((7U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__full 
        = (8U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f1_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f1_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f1_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr = 0;
    CData/*2:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__full)))) {
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__din;
            __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr;
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0 = 1U;
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr 
                = ((7U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__count 
            = (0x0000000fU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__dout 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem
                [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr];
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr 
                = ((7U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__full 
        = (8U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f2_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f2_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f2_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__wr_ptr = 0;
    CData/*2:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__full)))) {
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__mem__v0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__din;
            __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__mem__v0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__wr_ptr;
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__mem__v0 = 1U;
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__wr_ptr 
                = ((7U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__wr_ptr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__count 
            = (0x0000000fU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__dout 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__mem
                [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__rd_ptr];
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__rd_ptr 
                = ((7U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__rd_ptr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__full 
        = (8U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f3_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f3_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f3_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__wr_ptr = 0;
    CData/*2:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__full)))) {
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__mem__v0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__din;
            __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__mem__v0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__wr_ptr;
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__mem__v0 = 1U;
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__wr_ptr 
                = ((7U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__wr_ptr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__count 
            = (0x0000000fU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__dout 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__mem
                [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__rd_ptr];
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__rd_ptr 
                = ((7U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__rd_ptr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__full 
        = (8U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f4_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f4_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f4_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr = 0;
    CData/*2:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT____Vlvbound_h931b6092__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__din;
            if ((5U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT____Vlvbound_h931b6092__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr 
                = ((5U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_en) 
                               & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_en) 
                                   & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__empty)))))
                          ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__dout 
                = ((5U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr 
                = ((5U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__full 
        = (6U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f1_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f1_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f1_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr = 0;
    CData/*2:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT____Vlvbound_h931b6092__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__din;
            if ((5U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT____Vlvbound_h931b6092__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr 
                = ((5U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_en) 
                               & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_en) 
                                   & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__empty)))))
                          ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__dout 
                = ((5U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr 
                = ((5U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__full 
        = (6U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f2_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f2_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f2_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__wr_ptr = 0;
    CData/*2:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT____Vlvbound_h931b6092__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__din;
            if ((5U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT____Vlvbound_h931b6092__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__wr_ptr 
                = ((5U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__wr_ptr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__wr_en) 
                               & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__rd_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__wr_en) 
                                   & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__rd_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__empty)))))
                          ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__dout 
                = ((5U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__rd_ptr 
                = ((5U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__rd_ptr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__full 
        = (6U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f3_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f3_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f3_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__wr_ptr = 0;
    CData/*2:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT____Vlvbound_h931b6092__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__din;
            if ((5U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT____Vlvbound_h931b6092__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__wr_ptr 
                = ((5U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__wr_ptr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__wr_en) 
                               & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__rd_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__wr_en) 
                                   & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__rd_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__empty)))))
                          ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__dout 
                = ((5U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__rd_ptr 
                = ((5U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__rd_ptr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__full 
        = (6U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f4_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f4_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f4_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr = 0;
    CData/*3:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT____Vlvbound_h3c63b7d9__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__din;
            if ((0x0dU >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT____Vlvbound_h3c63b7d9__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr 
                = ((0x0dU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr))
                    ? 0U : (0x0000000fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__count 
            = (0x0000000fU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__dout 
                = ((0x0dU >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr 
                = ((0x0dU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr))
                    ? 0U : (0x0000000fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__full 
        = (0x0eU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f1_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f1_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f1_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr = 0;
    CData/*3:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT____Vlvbound_h3c63b7d9__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__din;
            if ((0x0dU >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT____Vlvbound_h3c63b7d9__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr 
                = ((0x0dU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr))
                    ? 0U : (0x0000000fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__count 
            = (0x0000000fU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__dout 
                = ((0x0dU >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr 
                = ((0x0dU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr))
                    ? 0U : (0x0000000fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__full 
        = (0x0eU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f2_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f2_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f2_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__wr_ptr = 0;
    CData/*3:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT____Vlvbound_h3c63b7d9__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__din;
            if ((0x0dU >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT____Vlvbound_h3c63b7d9__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__wr_ptr 
                = ((0x0dU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__wr_ptr))
                    ? 0U : (0x0000000fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__count 
            = (0x0000000fU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__dout 
                = ((0x0dU >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__rd_ptr 
                = ((0x0dU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__rd_ptr))
                    ? 0U : (0x0000000fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__full 
        = (0x0eU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f3_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f3_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f3_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__wr_ptr = 0;
    CData/*3:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT____Vlvbound_h3c63b7d9__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__din;
            if ((0x0dU >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT____Vlvbound_h3c63b7d9__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__wr_ptr 
                = ((0x0dU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__wr_ptr))
                    ? 0U : (0x0000000fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__count 
            = (0x0000000fU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__dout 
                = ((0x0dU >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__rd_ptr 
                = ((0x0dU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__rd_ptr))
                    ? 0U : (0x0000000fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__full 
        = (0x0eU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f4_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f4_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f4_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr = 0;
    CData/*4:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT____Vlvbound_h066a0221__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__din;
            if ((0x19U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT____Vlvbound_h066a0221__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr 
                = ((0x19U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr))
                    ? 0U : (0x0000001fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__count 
            = (0x0000001fU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__dout 
                = ((0x19U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr 
                = ((0x19U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr))
                    ? 0U : (0x0000001fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__full 
        = (0x1aU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f1_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f1_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f1_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr = 0;
    CData/*4:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT____Vlvbound_h066a0221__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__din;
            if ((0x19U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT____Vlvbound_h066a0221__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr 
                = ((0x19U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr))
                    ? 0U : (0x0000001fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__count 
            = (0x0000001fU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__dout 
                = ((0x19U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr 
                = ((0x19U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr))
                    ? 0U : (0x0000001fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__full 
        = (0x1aU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f2_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f2_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f2_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__wr_ptr = 0;
    CData/*4:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT____Vlvbound_h066a0221__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__din;
            if ((0x19U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT____Vlvbound_h066a0221__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__wr_ptr 
                = ((0x19U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__wr_ptr))
                    ? 0U : (0x0000001fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__count 
            = (0x0000001fU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__dout 
                = ((0x19U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__rd_ptr 
                = ((0x19U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__rd_ptr))
                    ? 0U : (0x0000001fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__full 
        = (0x1aU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f3_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f3_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f3_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__wr_ptr = 0;
    CData/*4:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT____Vlvbound_h066a0221__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__din;
            if ((0x19U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT____Vlvbound_h066a0221__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__wr_ptr 
                = ((0x19U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__wr_ptr))
                    ? 0U : (0x0000001fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__count 
            = (0x0000001fU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__dout 
                = ((0x19U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__rd_ptr 
                = ((0x19U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__rd_ptr))
                    ? 0U : (0x0000001fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__full 
        = (0x1aU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f4_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f4_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f4_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr = 0;
    CData/*5:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT____Vlvbound_h50622658__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__din;
            if ((0x31U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT____Vlvbound_h50622658__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr 
                = ((0x31U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr))
                    ? 0U : (0x0000003fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__count 
            = (0x0000003fU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__dout 
                = ((0x31U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr 
                = ((0x31U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr))
                    ? 0U : (0x0000003fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__full 
        = (0x32U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f1_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f1_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f1_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr = 0;
    CData/*5:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT____Vlvbound_h50622658__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__din;
            if ((0x31U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT____Vlvbound_h50622658__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr 
                = ((0x31U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr))
                    ? 0U : (0x0000003fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__count 
            = (0x0000003fU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__dout 
                = ((0x31U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr 
                = ((0x31U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr))
                    ? 0U : (0x0000003fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__full 
        = (0x32U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f2_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f2_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f2_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__18(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__wr_ptr = 0;
    CData/*5:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT____Vlvbound_h50622658__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__din;
            if ((0x31U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT____Vlvbound_h50622658__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__wr_ptr 
                = ((0x31U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__wr_ptr))
                    ? 0U : (0x0000003fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__count 
            = (0x0000003fU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__dout 
                = ((0x31U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__rd_ptr 
                = ((0x31U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__rd_ptr))
                    ? 0U : (0x0000003fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__full 
        = (0x32U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f3_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f3_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f3_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__19(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__19\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__wr_ptr = 0;
    CData/*5:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT____Vlvbound_h50622658__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__din;
            if ((0x31U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT____Vlvbound_h50622658__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__wr_ptr 
                = ((0x31U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__wr_ptr))
                    ? 0U : (0x0000003fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__count 
            = (0x0000003fU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__dout 
                = ((0x31U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__rd_ptr 
                = ((0x31U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__rd_ptr))
                    ? 0U : (0x0000003fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__full 
        = (0x32U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f4_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f4_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f4_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__20(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr = 0;
    CData/*6:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*6:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT____Vlvbound_hd1f7c748__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__din;
            if ((0x61U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT____Vlvbound_hd1f7c748__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr 
                = ((0x61U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr))
                    ? 0U : (0x0000007fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__count 
            = (0x0000007fU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__dout 
                = ((0x61U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr 
                = ((0x61U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr))
                    ? 0U : (0x0000007fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__full 
        = (0x62U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f1_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f1_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f1_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__21(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr = 0;
    CData/*6:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*6:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT____Vlvbound_hd1f7c748__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__din;
            if ((0x61U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT____Vlvbound_hd1f7c748__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr 
                = ((0x61U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr))
                    ? 0U : (0x0000007fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__count 
            = (0x0000007fU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__dout 
                = ((0x61U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr 
                = ((0x61U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr))
                    ? 0U : (0x0000007fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__full 
        = (0x62U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f2_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f2_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f2_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__22\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__wr_ptr = 0;
    CData/*6:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__mem__v0 = 0;
    CData/*6:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT____Vlvbound_hd1f7c748__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__din;
            if ((0x61U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT____Vlvbound_hd1f7c748__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__wr_ptr 
                = ((0x61U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__wr_ptr))
                    ? 0U : (0x0000007fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__count 
            = (0x0000007fU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__dout 
                = ((0x61U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__rd_ptr 
                = ((0x61U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__rd_ptr))
                    ? 0U : (0x0000007fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__full 
        = (0x62U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f3_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f3_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f3_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__23(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__23\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__wr_ptr = 0;
    CData/*6:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__mem__v0 = 0;
    CData/*6:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT____Vlvbound_hd1f7c748__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__din;
            if ((0x61U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT____Vlvbound_hd1f7c748__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__wr_ptr 
                = ((0x61U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__wr_ptr))
                    ? 0U : (0x0000007fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__count 
            = (0x0000007fU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__dout 
                = ((0x61U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__rd_ptr 
                = ((0x61U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__rd_ptr))
                    ? 0U : (0x0000007fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__full 
        = (0x62U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f4_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f4_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f4_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__24(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__24\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr = 0;
    CData/*7:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT____Vlvbound_hccbe678c__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__din;
            if ((0xc1U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT____Vlvbound_hccbe678c__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr 
                = ((0xc1U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr))
                    ? 0U : (0x000000ffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__count 
            = (0x000000ffU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__dout 
                = ((0xc1U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr 
                = ((0xc1U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr))
                    ? 0U : (0x000000ffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__full 
        = (0xc2U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f1_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f1_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f1_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__25(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__25\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr = 0;
    CData/*7:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT____Vlvbound_hccbe678c__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__din;
            if ((0xc1U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT____Vlvbound_hccbe678c__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr 
                = ((0xc1U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr))
                    ? 0U : (0x000000ffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__count 
            = (0x000000ffU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__dout 
                = ((0xc1U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr 
                = ((0xc1U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr))
                    ? 0U : (0x000000ffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__full 
        = (0xc2U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f2_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f2_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f2_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__26(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__26\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__wr_ptr = 0;
    CData/*7:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT____Vlvbound_hccbe678c__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__din;
            if ((0xc1U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT____Vlvbound_hccbe678c__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__wr_ptr 
                = ((0xc1U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__wr_ptr))
                    ? 0U : (0x000000ffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__count 
            = (0x000000ffU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__dout 
                = ((0xc1U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__rd_ptr 
                = ((0xc1U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__rd_ptr))
                    ? 0U : (0x000000ffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__full 
        = (0xc2U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f3_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f3_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f3_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__27(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__27\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__wr_ptr = 0;
    CData/*7:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__mem__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__mem__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__mem__v0 = 0U;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__rd_ptr;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__wr_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__rd_ptr = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__full)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT____Vlvbound_hccbe678c__0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__din;
            if ((0xc1U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__wr_ptr))) {
                __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT____Vlvbound_hccbe678c__0;
                __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__mem__v0 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__wr_ptr;
                __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__mem__v0 = 1U;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__wr_ptr 
                = ((0xc1U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__wr_ptr))
                    ? 0U : (0x000000ffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__wr_ptr))));
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__count 
            = (0x000000ffU & ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__wr_en) 
                                        & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__full))) 
                                       << 1U) | ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__rd_en) 
                                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__empty)))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__count))
                               : ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__wr_en) 
                                            & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__full))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__rd_en) 
                                           & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__empty)))))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__count))));
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__empty)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__dout 
                = ((0xc1U >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__rd_ptr))
                    ? vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__mem
                   [vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__rd_ptr]
                    : 0U);
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__rd_ptr 
                = ((0xc1U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__rd_ptr))
                    ? 0U : (0x000000ffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__rd_ptr))));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__wr_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__rd_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__mem__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__mem__v0;
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__full 
        = (0xc2U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f4_dout 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__dout;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f4_full 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__full;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f4_empty 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__empty;
}

void Vtop___024root___nba_sequent__TOP__28(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__state;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__state = 0;
    CData/*1:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__counter = 0;
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_state;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_state = 0;
    CData/*2:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_counter = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__counter 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__state 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__state;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_counter 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_state 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_state;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__rst_i) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__state = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__counter = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair2_count = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair1_count = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair1_q = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_state = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__burst_active = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_counter = 0U;
    } else {
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__input_accept) {
            if ((0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__counter))) {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__state 
                    = (1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__state)));
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__counter = 0U;
            } else {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__counter 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__counter)));
            }
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair2_count 
            = (7U & ((2U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_3_4) 
                              << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair2)))
                      ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair2_count))
                      : ((1U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_3_4) 
                                  << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair2)))
                          ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair2_count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair2_count))));
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair1_count 
            = (7U & ((2U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_1_2) 
                              << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair1)))
                      ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair1_count))
                      : ((1U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_1_2) 
                                  << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair1)))
                          ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair1_count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair1_count))));
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_enable) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair1_q 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair1;
            if ((0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_counter))) {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_state 
                    = (1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_state)));
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_counter = 0U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__burst_active = 0U;
            } else {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_counter 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_counter)));
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__burst_active = 1U;
            }
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__valid_o 
        = ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__rst_i))) 
           && (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_enable));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__counter 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__counter;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__state 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__state;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_counter 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_counter;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_state 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_state;
}

void Vtop___024root___nba_sequent__TOP__29(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__29\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__state;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__state = 0;
    CData/*2:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__counter = 0;
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_state;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_state = 0;
    CData/*3:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_counter = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__counter 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__state 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__state;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_counter 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_state 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_state;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__rst_i) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__state = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__counter = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair2_count = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair1_count = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair1_q = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_state = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__burst_active = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_counter = 0U;
    } else {
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__input_accept) {
            if ((1U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__counter))) {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__state 
                    = (1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__state)));
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__counter = 0U;
            } else {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__counter 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__counter)));
            }
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair2_count 
            = (0x0000000fU & ((2U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_3_4) 
                                       << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair2)))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair2_count))
                               : ((1U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_3_4) 
                                           << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair2)))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair2_count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair2_count))));
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair1_count 
            = (0x0000000fU & ((2U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_1_2) 
                                       << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair1)))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair1_count))
                               : ((1U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_1_2) 
                                           << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair1)))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair1_count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair1_count))));
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_enable) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair1_q 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair1;
            if ((1U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_counter))) {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_state 
                    = (1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_state)));
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_counter = 0U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__burst_active = 0U;
            } else {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_counter 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_counter)));
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__burst_active = 1U;
            }
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__valid_o 
        = ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__rst_i))) 
           && (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_enable));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__counter 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__counter;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__state 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__state;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_counter 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_counter;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_state 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_state;
}

void Vtop___024root___nba_sequent__TOP__30(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__30\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__state;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__state = 0;
    CData/*3:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__counter = 0;
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_state;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_state = 0;
    CData/*3:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_counter = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__counter 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__state 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__state;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_counter 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_state 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_state;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__rst_i) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__state = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__counter = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair2_count = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair1_count = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair1_q = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_state = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__burst_active = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_counter = 0U;
    } else {
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__input_accept) {
            if ((3U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__counter))) {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__state 
                    = (1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__state)));
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__counter = 0U;
            } else {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__counter 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__counter)));
            }
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair2_count 
            = (0x0000000fU & ((2U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_3_4) 
                                       << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair2)))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair2_count))
                               : ((1U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_3_4) 
                                           << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair2)))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair2_count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair2_count))));
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair1_count 
            = (0x0000000fU & ((2U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_1_2) 
                                       << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair1)))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair1_count))
                               : ((1U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_1_2) 
                                           << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair1)))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair1_count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair1_count))));
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_enable) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair1_q 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair1;
            if ((3U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_counter))) {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_state 
                    = (1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_state)));
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_counter = 0U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__burst_active = 0U;
            } else {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_counter 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_counter)));
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__burst_active = 1U;
            }
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__valid_o 
        = ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__rst_i))) 
           && (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_enable));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__counter 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__counter;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__state 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__state;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_counter 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_counter;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_state 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_state;
}

void Vtop___024root___nba_sequent__TOP__31(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__31\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__state;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__state = 0;
    CData/*4:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__counter = 0;
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_state;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_state = 0;
    CData/*4:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_counter = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__counter 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__state 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__state;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_counter 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_state 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_state;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__rst_i) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__state = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__counter = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair2_count = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair1_count = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair1_q = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_state = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__burst_active = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_counter = 0U;
    } else {
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__input_accept) {
            if ((7U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__counter))) {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__state 
                    = (1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__state)));
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__counter = 0U;
            } else {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__counter 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__counter)));
            }
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair2_count 
            = (0x0000001fU & ((2U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_3_4) 
                                       << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair2)))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair2_count))
                               : ((1U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_3_4) 
                                           << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair2)))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair2_count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair2_count))));
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair1_count 
            = (0x0000001fU & ((2U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_1_2) 
                                       << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair1)))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair1_count))
                               : ((1U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_1_2) 
                                           << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair1)))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair1_count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair1_count))));
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_enable) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair1_q 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair1;
            if ((7U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_counter))) {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_state 
                    = (1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_state)));
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_counter = 0U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__burst_active = 0U;
            } else {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_counter 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_counter)));
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__burst_active = 1U;
            }
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__valid_o 
        = ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__rst_i))) 
           && (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_enable));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__counter 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__counter;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__state 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__state;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_counter 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_counter;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_state 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_state;
}

void Vtop___024root___nba_sequent__TOP__32(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__32\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__state;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__state = 0;
    CData/*5:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__counter = 0;
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_state;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_state = 0;
    CData/*5:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_counter = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__counter 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__state 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__state;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_counter 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_state 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_state;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__rst_i) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__state = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__counter = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair2_count = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair1_count = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair1_q = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_state = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__burst_active = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_counter = 0U;
    } else {
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__input_accept) {
            if ((0x0fU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__counter))) {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__state 
                    = (1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__state)));
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__counter = 0U;
            } else {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__counter 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__counter)));
            }
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair2_count 
            = (0x0000003fU & ((2U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_3_4) 
                                       << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair2)))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair2_count))
                               : ((1U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_3_4) 
                                           << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair2)))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair2_count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair2_count))));
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair1_count 
            = (0x0000003fU & ((2U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_1_2) 
                                       << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair1)))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair1_count))
                               : ((1U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_1_2) 
                                           << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair1)))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair1_count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair1_count))));
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_enable) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair1_q 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair1;
            if ((0x0fU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_counter))) {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_state 
                    = (1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_state)));
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_counter = 0U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__burst_active = 0U;
            } else {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_counter 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_counter)));
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__burst_active = 1U;
            }
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__valid_o 
        = ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__rst_i))) 
           && (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_enable));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__counter 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__counter;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__state 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__state;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_counter 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_counter;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_state 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_state;
}

void Vtop___024root___nba_sequent__TOP__33(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__33\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__state;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__state = 0;
    CData/*6:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__counter = 0;
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_state;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_state = 0;
    CData/*6:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_counter = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__counter 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__state 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__state;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_counter 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_state 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_state;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__rst_i) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__state = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__counter = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair2_count = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair1_count = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair1_q = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_state = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__burst_active = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_counter = 0U;
    } else {
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__input_accept) {
            if ((0x1fU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__counter))) {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__state 
                    = (1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__state)));
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__counter = 0U;
            } else {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__counter 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__counter)));
            }
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair2_count 
            = (0x0000007fU & ((2U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_3_4) 
                                       << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair2)))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair2_count))
                               : ((1U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_3_4) 
                                           << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair2)))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair2_count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair2_count))));
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair1_count 
            = (0x0000007fU & ((2U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_1_2) 
                                       << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair1)))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair1_count))
                               : ((1U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_1_2) 
                                           << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair1)))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair1_count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair1_count))));
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_enable) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair1_q 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair1;
            if ((0x1fU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_counter))) {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_state 
                    = (1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_state)));
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_counter = 0U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__burst_active = 0U;
            } else {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_counter 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_counter)));
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__burst_active = 1U;
            }
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__valid_o 
        = ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__rst_i))) 
           && (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_enable));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__counter 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__counter;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__state 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__state;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_counter 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_counter;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_state 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_state;
}

void Vtop___024root___nba_sequent__TOP__34(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__34\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__state;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__state = 0;
    CData/*7:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__counter = 0;
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_state;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_state = 0;
    CData/*7:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_counter = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__counter 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__state 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__state;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_counter 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_counter;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_state 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_state;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__rst_i) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__state = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__counter = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair2_count = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair1_count = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair1_q = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_state = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__burst_active = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_counter = 0U;
    } else {
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__input_accept) {
            if ((0x3fU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__counter))) {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__state 
                    = (1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__state)));
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__counter = 0U;
            } else {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__counter 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__counter)));
            }
        }
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair2_count 
            = (0x000000ffU & ((2U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_3_4) 
                                       << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair2)))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair2_count))
                               : ((1U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_3_4) 
                                           << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair2)))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair2_count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair2_count))));
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair1_count 
            = (0x000000ffU & ((2U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_1_2) 
                                       << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair1)))
                               ? ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair1_count))
                               : ((1U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_1_2) 
                                           << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair1)))
                                   ? ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair1_count) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair1_count))));
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_enable) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair1_q 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair1;
            if ((0x3fU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_counter))) {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_state 
                    = (1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_state)));
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_counter = 0U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__burst_active = 0U;
            } else {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_counter 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_counter)));
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__burst_active = 1U;
            }
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__valid_o 
        = ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__rst_i))) 
           && (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_enable));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__counter 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__counter;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__state 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__state;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_counter 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_counter;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_state 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_state;
}

void Vtop___024root___nba_sequent__TOP__35(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__35\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__write_count;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__write_count = 0;
    CData/*6:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_pairs_sent;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_pairs_sent = 0;
    CData/*6:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__b_pairs_sent;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__b_pairs_sent = 0;
    IData/*31:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_pending;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_pending = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__buffer_b__v0;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__buffer_b__v0 = 0;
    CData/*6:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__buffer_b__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__buffer_b__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__buffer_b__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__buffer_b__v0 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__write_count 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__write_count;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_pairs_sent 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_pairs_sent;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__b_pairs_sent 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__b_pairs_sent;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_pending 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_pending;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__buffer_b__v0 = 0U;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__rst_i) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__write_count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_pairs_sent = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__b_pairs_sent = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_pending = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__valid_o = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_o = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__b_o = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__stall_i)))) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__valid_o = 0U;
        if (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__valid_i) 
             & (0x80U > (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__write_count)))) {
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__buffer_b__v0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__b_i;
            __VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__buffer_b__v0 
                = (0x0000007fU & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__write_count));
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__buffer_b__v0 = 1U;
            if ((1U & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__write_count))) {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_pairs_sent 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_pairs_sent)));
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_o 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_pending;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__b_o 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_i;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__valid_o = 1U;
            } else {
                __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_pending 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_i;
            }
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__write_count 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__write_count)));
        } else if ((((0x80U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__write_count)) 
                     & (0x40U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_pairs_sent))) 
                    & (0x40U > (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__b_pairs_sent)))) {
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_o 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__buffer_b
                [(0x0000007fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__b_pairs_sent), 1U))];
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__valid_o = 1U;
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__b_o 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__buffer_b
                [(0x0000007fU & ((IData)(1U) + VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__b_pairs_sent), 1U)))];
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__b_pairs_sent 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__b_pairs_sent)));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__write_count 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__write_count;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_pairs_sent 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_pairs_sent;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__b_pairs_sent 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__b_pairs_sent;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_pending 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_pending;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__buffer_b__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__buffer_b[__VdlyDim0__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__buffer_b__v0] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__buffer_b__v0;
    }
}

void Vtop___024root___nba_sequent__TOP__36(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__36\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__total_words_in_system;
    __Vdly__INTT_engine_axis_wrapper__DOT__total_words_in_system = 0;
    CData/*6:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__in_word_cnt;
    __Vdly__INTT_engine_axis_wrapper__DOT__in_word_cnt = 0;
    CData/*6:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__core_out_cnt;
    __Vdly__INTT_engine_axis_wrapper__DOT__core_out_cnt = 0;
    SData/*8:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__fifo_wr_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__fifo_wr_ptr = 0;
    SData/*8:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__fifo_rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__fifo_rd_ptr = 0;
    SData/*9:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__fifo_count;
    __Vdly__INTT_engine_axis_wrapper__DOT__fifo_count = 0;
    VlWide<3>/*64:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__fifo_mem__v0;
    VL_ZERO_W(65, __VdlyVal__INTT_engine_axis_wrapper__DOT__fifo_mem__v0);
    SData/*8:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__fifo_mem__v0;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__fifo_mem__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__fifo_mem__v0 = 0;
    VlWide<3>/*64:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__fifo_mem__v1;
    VL_ZERO_W(65, __VdlyVal__INTT_engine_axis_wrapper__DOT__fifo_mem__v1);
    SData/*8:0*/ __VdlyDim0__INTT_engine_axis_wrapper__DOT__fifo_mem__v1;
    __VdlyDim0__INTT_engine_axis_wrapper__DOT__fifo_mem__v1 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__fifo_mem__v1;
    __VdlySet__INTT_engine_axis_wrapper__DOT__fifo_mem__v1 = 0;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__core_out_cnt 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__core_out_cnt;
    __Vdly__INTT_engine_axis_wrapper__DOT__in_word_cnt 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__in_word_cnt;
    __Vdly__INTT_engine_axis_wrapper__DOT__fifo_rd_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_rd_ptr;
    __Vdly__INTT_engine_axis_wrapper__DOT__fifo_count 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_count;
    __Vdly__INTT_engine_axis_wrapper__DOT__total_words_in_system 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__total_words_in_system;
    __Vdly__INTT_engine_axis_wrapper__DOT__fifo_wr_ptr 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_wr_ptr;
    __VdlySet__INTT_engine_axis_wrapper__DOT__fifo_mem__v0 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__fifo_mem__v1 = 0U;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__core_out_cnt = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__in_word_cnt = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__fifo_rd_ptr = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__fifo_count = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__total_words_in_system = 0U;
        __Vdly__INTT_engine_axis_wrapper__DOT__fifo_wr_ptr = 0U;
    } else {
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__core_valid_o) {
            __Vdly__INTT_engine_axis_wrapper__DOT__core_out_cnt 
                = ((0x7fU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__core_out_cnt))
                    ? 0U : (0x0000007fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__core_out_cnt))));
        }
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__in_handshake) {
            __Vdly__INTT_engine_axis_wrapper__DOT__in_word_cnt 
                = (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__s_axis_tlast) 
                    | (0x7fU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__in_word_cnt)))
                    ? 0U : (0x0000007fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__in_word_cnt))));
        }
        if ((2U != ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__core_valid_o) 
                      & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_full))) 
                     << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__out_handshake)))) {
            if ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__core_valid_o) 
                          & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_full))) 
                         << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__out_handshake)))) {
                __Vdly__INTT_engine_axis_wrapper__DOT__fifo_rd_ptr 
                    = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_rd_ptr)));
            } else if ((3U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__core_valid_o) 
                                 & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_full))) 
                                << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__out_handshake)))) {
                __Vdly__INTT_engine_axis_wrapper__DOT__fifo_rd_ptr 
                    = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_rd_ptr)));
            }
        }
        if ((2U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__core_valid_o) 
                      & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_full))) 
                     << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__out_handshake)))) {
            __Vdly__INTT_engine_axis_wrapper__DOT__fifo_count 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_count)));
            __VdlyVal__INTT_engine_axis_wrapper__DOT__fifo_mem__v0[0U] 
                = (IData)((((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__b_o)) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__a_o))));
            __VdlyVal__INTT_engine_axis_wrapper__DOT__fifo_mem__v0[1U] 
                = (IData)(((((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__b_o)) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__a_o))) 
                           >> 0x00000020U));
            __VdlyVal__INTT_engine_axis_wrapper__DOT__fifo_mem__v0[2U] 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__core_tlast;
            __VdlyDim0__INTT_engine_axis_wrapper__DOT__fifo_mem__v0 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_wr_ptr;
            __VdlySet__INTT_engine_axis_wrapper__DOT__fifo_mem__v0 = 1U;
            __Vdly__INTT_engine_axis_wrapper__DOT__fifo_wr_ptr 
                = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_wr_ptr)));
        } else {
            if ((1U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__core_valid_o) 
                          & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_full))) 
                         << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__out_handshake)))) {
                __Vdly__INTT_engine_axis_wrapper__DOT__fifo_count 
                    = (0x000003ffU & ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_count) 
                                      - (IData)(1U)));
            }
            if ((1U != ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__core_valid_o) 
                          & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_full))) 
                         << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__out_handshake)))) {
                if ((3U == ((((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__core_valid_o) 
                              & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_full))) 
                             << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__out_handshake)))) {
                    __VdlyVal__INTT_engine_axis_wrapper__DOT__fifo_mem__v1[0U] 
                        = (IData)((((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__b_o)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__a_o))));
                    __VdlyVal__INTT_engine_axis_wrapper__DOT__fifo_mem__v1[1U] 
                        = (IData)(((((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__b_o)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__a_o))) 
                                   >> 0x00000020U));
                    __VdlyVal__INTT_engine_axis_wrapper__DOT__fifo_mem__v1[2U] 
                        = vlSelfRef.INTT_engine_axis_wrapper__DOT__core_tlast;
                    __VdlyDim0__INTT_engine_axis_wrapper__DOT__fifo_mem__v1 
                        = vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_wr_ptr;
                    __VdlySet__INTT_engine_axis_wrapper__DOT__fifo_mem__v1 = 1U;
                    __Vdly__INTT_engine_axis_wrapper__DOT__fifo_wr_ptr 
                        = (0x000001ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_wr_ptr)));
                }
            }
        }
        if ((2U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__in_handshake) 
                     << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__out_handshake)))) {
            __Vdly__INTT_engine_axis_wrapper__DOT__total_words_in_system 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__total_words_in_system)));
        } else if ((1U == (((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__in_handshake) 
                            << 1U) | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__out_handshake)))) {
            __Vdly__INTT_engine_axis_wrapper__DOT__total_words_in_system 
                = (0x000003ffU & ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__total_words_in_system) 
                                  - (IData)(1U)));
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__core_out_cnt 
        = __Vdly__INTT_engine_axis_wrapper__DOT__core_out_cnt;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__in_word_cnt 
        = __Vdly__INTT_engine_axis_wrapper__DOT__in_word_cnt;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_rd_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__fifo_rd_ptr;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_count 
        = __Vdly__INTT_engine_axis_wrapper__DOT__fifo_count;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__total_words_in_system 
        = __Vdly__INTT_engine_axis_wrapper__DOT__total_words_in_system;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_wr_ptr 
        = __Vdly__INTT_engine_axis_wrapper__DOT__fifo_wr_ptr;
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__fifo_mem__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__fifo_mem__v0][0U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__fifo_mem__v0[0U];
        vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__fifo_mem__v0][1U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__fifo_mem__v0[1U];
        vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__fifo_mem__v0][2U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__fifo_mem__v0[2U];
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__fifo_mem__v1) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__fifo_mem__v1][0U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__fifo_mem__v1[0U];
        vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__fifo_mem__v1][1U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__fifo_mem__v1[1U];
        vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_mem[__VdlyDim0__INTT_engine_axis_wrapper__DOT__fifo_mem__v1][2U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__fifo_mem__v1[2U];
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__core_tlast 
        = (0x7fU == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__core_out_cnt));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_full 
        = (0x0200U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_empty 
        = (0U == (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_count));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__s_axis_tready 
        = (0x017eU >= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__total_words_in_system));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_dout[0U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_mem
        [vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_rd_ptr][0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_dout[1U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_mem
        [vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_rd_ptr][1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_dout[2U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_mem
        [vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_rd_ptr][2U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tvalid 
        = (1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_empty)));
    vlSelfRef.s_axis_tready = vlSelfRef.INTT_engine_axis_wrapper__DOT__s_axis_tready;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__in_handshake 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__s_axis_tready) 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__s_axis_tvalid));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tdata 
        = (((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_dout[1U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_dout[0U])));
    vlSelfRef.m_axis_tvalid = vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tvalid;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__out_handshake 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tready) 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tvalid));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tlast 
        = (vlSelfRef.INTT_engine_axis_wrapper__DOT__fifo_dout[2U] 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tvalid));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__in_handshake;
    vlSelfRef.m_axis_tdata = vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tdata;
    vlSelfRef.m_axis_tlast = vlSelfRef.INTT_engine_axis_wrapper__DOT__m_axis_tlast;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D[0U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__valid_i;
}

void Vtop___024root___nba_sequent__TOP__37(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__37\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v0 = 0;
    CData/*0:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v1;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v1 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v1;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v1 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v0 = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v1;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v1 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v1;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v1 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v0 = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v1;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v1 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v1;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v1 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v2;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v2 = 0;
    CData/*0:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v3;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v3 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v3;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v3 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v2;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v2 = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v3;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v3 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v3;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v3 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v2;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v2 = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v3;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v3 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v3;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v3 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v4;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v4 = 0;
    CData/*0:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v5;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v5 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v5;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v5 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v4;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v4 = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v5;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v5 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v5;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v5 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v4;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v4 = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v5;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v5 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v5;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v5 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v6;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v6 = 0;
    CData/*0:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v7;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v7 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v7;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v7 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v6;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v6 = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v7;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v7 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v7;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v7 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v6;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v6 = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v7;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v7 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v7;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v7 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v8;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v8 = 0;
    CData/*0:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v9;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v9 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v9;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v9 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v8;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v8 = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v9;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v9 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v9;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v9 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v8;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v8 = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v9;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v9 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v9;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v9 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v10;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v10 = 0;
    CData/*0:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v11;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v11 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v11;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v11 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v10;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v10 = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v11;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v11 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v11;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v11 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v10;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v10 = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v11;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v11 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v11;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v11 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v12;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v12 = 0;
    CData/*0:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v13;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v13 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v13;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v13 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v12;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v12 = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v13;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v13 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v13;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v13 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v12;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v12 = 0;
    IData/*31:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v13;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v13 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v13;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v13 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v0;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v0 = 0;
    CData/*7:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v1;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v1 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v1;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v1 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v2;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v2 = 0;
    CData/*7:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v3;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v3 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v3;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v3 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v4;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v4 = 0;
    CData/*7:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v5;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v5 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v5;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v5 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v6;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v6 = 0;
    CData/*7:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v7;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v7 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v7;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v7 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v8;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v8 = 0;
    CData/*7:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v9;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v9 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v9;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v9 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v10;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v10 = 0;
    CData/*7:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v11;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v11 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v11;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v11 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v12;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v12 = 0;
    CData/*7:0*/ __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v13;
    __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v13 = 0;
    CData/*0:0*/ __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v13;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v13 = 0;
    // Body
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v0 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v1 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v2 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v3 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v4 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v5 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v6 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v7 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v8 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v9 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v10 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v11 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v12 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v13 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v0 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v1 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v2 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v3 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v4 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v5 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v6 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v7 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v8 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v9 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v10 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v11 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v12 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v13 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v0 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v1 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v2 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v3 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v4 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v5 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v6 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v7 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v8 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v9 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v10 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v11 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v12 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v13 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v0 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v1 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v2 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v3 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v4 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v5 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v6 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v7 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v8 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v9 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v10 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v11 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v12 = 0U;
    __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v13 = 0U;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst) {
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v0 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v2 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v4 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v6 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v8 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v10 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v12 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v0 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v2 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v4 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v6 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v8 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v10 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v12 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v0 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v2 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v4 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v6 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v8 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v10 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v12 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v0 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v2 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v4 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v6 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v8 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v10 = 1U;
        __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v12 = 1U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i)))) {
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v1 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a
                [0U];
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v1 = 1U;
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v3 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a
                [1U];
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v3 = 1U;
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v5 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a
                [2U];
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v5 = 1U;
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v7 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a
                [3U];
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v7 = 1U;
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v9 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a
                [4U];
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v9 = 1U;
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v11 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a
                [5U];
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v11 = 1U;
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v13 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a
                [6U];
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v13 = 1U;
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v1 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b
                [0U];
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v1 = 1U;
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v3 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b
                [1U];
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v3 = 1U;
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v5 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b
                [2U];
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v5 = 1U;
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v7 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b
                [3U];
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v7 = 1U;
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v9 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b
                [4U];
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v9 = 1U;
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v11 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b
                [5U];
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v11 = 1U;
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v13 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b
                [6U];
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v13 = 1U;
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v1 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid
                [0U];
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v1 = 1U;
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v3 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid
                [1U];
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v3 = 1U;
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v5 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid
                [2U];
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v5 = 1U;
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v7 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid
                [3U];
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v7 = 1U;
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v9 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid
                [4U];
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v9 = 1U;
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v11 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid
                [5U];
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v11 = 1U;
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v13 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid
                [6U];
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v13 = 1U;
        }
        if ((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid
             [0U] & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i)))) {
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v1 
                = ((1U == vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr
                    [0U]) ? 0U : (0x000000ffU & ((IData)(1U) 
                                                 + 
                                                 vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr
                                                 [0U])));
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v1 = 1U;
        }
        if ((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid
             [1U] & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i)))) {
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v3 
                = ((3U == vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr
                    [1U]) ? 0U : (0x000000ffU & ((IData)(1U) 
                                                 + 
                                                 vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr
                                                 [1U])));
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v3 = 1U;
        }
        if ((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid
             [2U] & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i)))) {
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v5 
                = ((7U == vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr
                    [2U]) ? 0U : (0x000000ffU & ((IData)(1U) 
                                                 + 
                                                 vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr
                                                 [2U])));
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v5 = 1U;
        }
        if ((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid
             [3U] & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i)))) {
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v7 
                = ((0x0fU == vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr
                    [3U]) ? 0U : (0x000000ffU & ((IData)(1U) 
                                                 + 
                                                 vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr
                                                 [3U])));
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v7 = 1U;
        }
        if ((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid
             [4U] & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i)))) {
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v9 
                = ((0x1fU == vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr
                    [4U]) ? 0U : (0x000000ffU & ((IData)(1U) 
                                                 + 
                                                 vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr
                                                 [4U])));
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v9 = 1U;
        }
        if ((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid
             [5U] & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i)))) {
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v11 
                = ((0x3fU == vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr
                    [5U]) ? 0U : (0x000000ffU & ((IData)(1U) 
                                                 + 
                                                 vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr
                                                 [5U])));
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v11 = 1U;
        }
        if ((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid
             [6U] & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__stall_i)))) {
            __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v13 
                = ((0x7fU == vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr
                    [6U]) ? 0U : (0x000000ffU & ((IData)(1U) 
                                                 + 
                                                 vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr
                                                 [6U])));
            __VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v13 = 1U;
        }
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D[1U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v1) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D[1U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v1;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v2) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D[2U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v3) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D[2U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v3;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v4) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D[3U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v5) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D[3U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v5;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v6) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D[4U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v7) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D[4U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v7;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v8) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D[5U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v9) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D[5U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v9;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v10) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D[6U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v11) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D[6U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v11;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v12) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D[7U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v13) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D[7U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D__v13;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D[1U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v1) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D[1U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v1;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v2) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D[2U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v3) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D[2U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v3;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v4) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D[3U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v5) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D[3U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v5;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v6) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D[4U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v7) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D[4U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v7;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v8) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D[5U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v9) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D[5U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v9;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v10) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D[6U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v11) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D[6U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v11;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v12) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D[7U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v13) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D[7U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D__v13;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D[1U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v1) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D[1U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v1;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v2) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D[2U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v3) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D[2U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v3;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v4) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D[3U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v5) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D[3U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v5;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v6) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D[4U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v7) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D[4U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v7;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v8) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D[5U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v9) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D[5U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v9;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v10) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D[6U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v11) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D[6U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v11;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v12) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D[7U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v13) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D[7U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D__v13;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v0) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr[0U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v1) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr[0U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v1;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v2) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr[1U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v3) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr[1U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v3;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v4) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr[2U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v5) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr[2U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v5;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v6) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr[3U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v7) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr[3U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v7;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v8) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr[4U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v9) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr[4U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v9;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v10) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr[5U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v11) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr[5U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v11;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v12) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr[6U] = 0U;
    }
    if (__VdlySet__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v13) {
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr[6U] 
            = __VdlyVal__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__tf_addr__v13;
    }
}

void Vtop___024root___nba_sequent__TOP__38(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__38\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_out;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_out = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_out 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_out;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_o = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__b_o = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__bw_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_s3 = 0ULL;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s3 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mult_s2 = 0ULL;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__m_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s1 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mult_s1 = 0ULL;
    } else {
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__stall) {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_out 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_out;
        } else if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s4) {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_out = 1U;
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_o 
                = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__add_temp)
                    ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__add_sub_q)
                    : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__add_temp));
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__b_o 
                = ((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s4 
                    >= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__bw_s4)
                    ? (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s4 
                       - vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__bw_s4)
                    : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__sub_temp));
        } else {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__stall)))) {
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s3) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s4 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__bw_s4 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__bw_next;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s4 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s3;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s2) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s3 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_s3 
                    = (0x0001ffffffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_next[2U])) 
                                                 << 0x00000030U) 
                                                | (((QData)((IData)(
                                                                    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_next[1U])) 
                                                    << 0x00000010U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_next[0U])) 
                                                      >> 0x00000010U))));
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s3 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s2;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s1) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s2 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__m_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__m_next;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mult_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mult_s1;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s1;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_i) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s1 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s1 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_i;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mult_s1 
                    = ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__b_i)) 
                       * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__w)));
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
            }
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_out 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a[0U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b[0U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid[0U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__sub_temp 
        = (0x00000001ffffffffULL & ((0x0000000000001e01ULL 
                                     + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s4))) 
                                    - (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__add_temp 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                    + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__add_sub_q 
        = (0x00000001ffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__add_temp 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_sub_q 
        = (0x0001ffffffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_s3 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__bw_next 
        = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_s3)
            ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_sub_q)
            : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_s3));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mq 
        = (0x0000ffffffffffffULL & (0x0000000000001e01ULL 
                                    * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__m_s2))));
    __Vtemp_2[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mult_s2);
    __Vtemp_2[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mult_s2 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mq);
    __Vtemp_3[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mq 
                             >> 0x00000020U));
    __Vtemp_3[2U] = 0U;
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_next[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_next[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_next[2U] 
        = (1U & __Vtemp_4[2U]);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__m_next 
        = (0x0000ffffU & ((IData)(0x1dffU) * (0x0000ffffU 
                                              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mult_s1))));
}

void Vtop___024root___nba_sequent__TOP__39(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__39\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_out;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_out = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_out 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_out;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_o = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__b_o = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__bw_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_s3 = 0ULL;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s3 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mult_s2 = 0ULL;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__m_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s1 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mult_s1 = 0ULL;
    } else {
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__stall) {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_out 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_out;
        } else if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s4) {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_out = 1U;
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_o 
                = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__add_temp)
                    ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__add_sub_q)
                    : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__add_temp));
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__b_o 
                = ((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s4 
                    >= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__bw_s4)
                    ? (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s4 
                       - vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__bw_s4)
                    : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__sub_temp));
        } else {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__stall)))) {
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s3) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s4 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__bw_s4 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__bw_next;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s4 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s3;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s2) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s3 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_s3 
                    = (0x0001ffffffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_next[2U])) 
                                                 << 0x00000030U) 
                                                | (((QData)((IData)(
                                                                    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_next[1U])) 
                                                    << 0x00000010U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_next[0U])) 
                                                      >> 0x00000010U))));
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s3 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s2;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s1) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s2 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__m_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__m_next;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mult_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mult_s1;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s1;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_i) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s1 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s1 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_i;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mult_s1 
                    = ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__b_i)) 
                       * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__w)));
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
            }
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_out 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a[1U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b[1U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid[1U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__sub_temp 
        = (0x00000001ffffffffULL & ((0x0000000000001e01ULL 
                                     + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s4))) 
                                    - (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__add_temp 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                    + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__add_sub_q 
        = (0x00000001ffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__add_temp 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_sub_q 
        = (0x0001ffffffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_s3 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__bw_next 
        = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_s3)
            ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_sub_q)
            : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_s3));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mq 
        = (0x0000ffffffffffffULL & (0x0000000000001e01ULL 
                                    * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__m_s2))));
    __Vtemp_2[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mult_s2);
    __Vtemp_2[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mult_s2 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mq);
    __Vtemp_3[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mq 
                             >> 0x00000020U));
    __Vtemp_3[2U] = 0U;
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_next[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_next[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_next[2U] 
        = (1U & __Vtemp_4[2U]);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__m_next 
        = (0x0000ffffU & ((IData)(0x1dffU) * (0x0000ffffU 
                                              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mult_s1))));
}

void Vtop___024root___nba_sequent__TOP__40(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__40\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_out;
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_out = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_out 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_out;
    if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__rst) {
        __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_o = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__b_o = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__bw_s4 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_s3 = 0ULL;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s3 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mult_s2 = 0ULL;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__m_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s2 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s1 = 0U;
        vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mult_s1 = 0ULL;
    } else {
        if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__stall) {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_out 
                = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_out;
        } else if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s4) {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_out = 1U;
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_o 
                = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__add_temp)
                    ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__add_sub_q)
                    : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__add_temp));
            vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__b_o 
                = ((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s4 
                    >= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__bw_s4)
                    ? (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s4 
                       - vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__bw_s4)
                    : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__sub_temp));
        } else {
            __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__stall)))) {
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s3) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s4 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__bw_s4 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__bw_next;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s4 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s3;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s2) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s3 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_s3 
                    = (0x0001ffffffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_next[2U])) 
                                                 << 0x00000030U) 
                                                | (((QData)((IData)(
                                                                    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_next[1U])) 
                                                    << 0x00000010U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_next[0U])) 
                                                      >> 0x00000010U))));
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s3 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s2;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s1) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s2 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__m_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__m_next;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mult_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mult_s1;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s2 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s1;
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
            }
            if (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_i) {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s1 = 1U;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s1 
                    = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_i;
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mult_s1 
                    = ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__b_i)) 
                       * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__w)));
            } else {
                vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
            }
        }
    }
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_out 
        = __Vdly__INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a[2U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b[2U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid[2U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_out;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__sub_temp 
        = (0x00000001ffffffffULL & ((0x0000000000001e01ULL 
                                     + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s4))) 
                                    - (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__add_temp 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                    + (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__bw_s4))));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__add_sub_q 
        = (0x00000001ffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__add_temp 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_sub_q 
        = (0x0001ffffffffffffULL & (vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_s3 
                                    - 0x0000000000001e01ULL));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__bw_next 
        = ((0x0000000000001e01ULL <= vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_s3)
            ? (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_sub_q)
            : (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_s3));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mq 
        = (0x0000ffffffffffffULL & (0x0000000000001e01ULL 
                                    * (QData)((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__m_s2))));
    __Vtemp_2[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mult_s2);
    __Vtemp_2[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mult_s2 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mq);
    __Vtemp_3[1U] = (IData)((vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mq 
                             >> 0x00000020U));
    __Vtemp_3[2U] = 0U;
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_next[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_next[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_next[2U] 
        = (1U & __Vtemp_4[2U]);
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__m_next 
        = (0x0000ffffU & ((IData)(0x1dffU) * (0x0000ffffU 
                                              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mult_s1))));
}

void Vtop___024root___nba_sequent__TOP__41(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__41\n"); );
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

void Vtop___024root___nba_sequent__TOP__42(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__42\n"); );
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

void Vtop___024root___nba_sequent__TOP__43(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__43\n"); );
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

void Vtop___024root___nba_sequent__TOP__44(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__44\n"); );
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

void Vtop___024root___nba_sequent__TOP__45(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__45\n"); );
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

void Vtop___024root___nba_sequent__TOP__46(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__46\n"); );
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

void Vtop___024root___nba_sequent__TOP__47(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__47\n"); );
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

void Vtop___024root___nba_sequent__TOP__48(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__48\n"); );
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

void Vtop___024root___nba_sequent__TOP__49(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__49\n"); );
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

void Vtop___024root___nba_sequent__TOP__50(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__50\n"); );
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

void Vtop___024root___nba_sequent__TOP__51(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__51\n"); );
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

void Vtop___024root___nba_sequent__TOP__52(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__52\n"); );
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

void Vtop___024root___nba_sequent__TOP__53(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__53\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__rst_sync_1 
        = ((1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__aresetn))) 
           || (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__rst_sync_0));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__rst_sync_0 
        = (1U & (~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__aresetn)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__rst = vlSelfRef.INTT_engine_axis_wrapper__DOT__rst_sync_1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__rst_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__rst_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__rst_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__rst_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__rst_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__rst_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__rst_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__rst_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__rst_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__rst_i;
}

void Vtop___024root___nba_sequent__TOP__54(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__54\n"); );
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
    vlSelfRef.INTT_engine_axis_wrapper__DOT__core_valid_o 
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
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair1_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f1_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f3_empty))));
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair2_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f2_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f4_empty))));
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair1_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f1_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f3_empty))));
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair2_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f2_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f4_empty))));
}

void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair1_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f1_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f3_empty))));
}

void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair2_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f2_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f4_empty))));
}

void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair1_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f1_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f3_empty))));
}

void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair2_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f2_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f4_empty))));
}

void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair1_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f1_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f3_empty))));
}

void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair2_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f2_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f4_empty))));
}

void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair1_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f1_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f3_empty))));
}

void Vtop___024root___nba_comb__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair2_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f2_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f4_empty))));
}

void Vtop___024root___nba_comb__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair1_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f1_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f3_empty))));
}

void Vtop___024root___nba_comb__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair2_has_data 
        = (1U & (~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f2_empty) 
                    | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f4_empty))));
}

void Vtop___024root___nba_comb__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__14\n"); );
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

void Vtop___024root___nba_comb__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__15\n"); );
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

void Vtop___024root___nba_comb__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__16\n"); );
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

void Vtop___024root___nba_comb__TOP__17(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__17\n"); );
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

void Vtop___024root___nba_comb__TOP__18(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__18\n"); );
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

void Vtop___024root___nba_comb__TOP__19(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__19\n"); );
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

void Vtop___024root___nba_comb__TOP__20(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__20\n"); );
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

void Vtop___024root___nba_comb__TOP__21(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__21\n"); );
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

void Vtop___024root___nba_comb__TOP__22(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__22\n"); );
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

void Vtop___024root___nba_comb__TOP__23(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__23\n"); );
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

void Vtop___024root___nba_comb__TOP__24(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__24\n"); );
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

void Vtop___024root___nba_comb__TOP__25(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__25\n"); );
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

void Vtop___024root___nba_comb__TOP__26(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__26\n"); );
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

void Vtop___024root___nba_comb__TOP__27(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__27\n"); );
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

void Vtop___024root___nba_sequent__TOP__55(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__55\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a[7U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b[7U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__b_o;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[7U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__56(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__56\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[0U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__57(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__57\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[1U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__58(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__58\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[2U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__59(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__59\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[3U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__60(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__60\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[4U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__61(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__61\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[5U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__62(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__62\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid[6U] 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__63(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__63\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [2U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [2U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [3U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [3U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [4U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [4U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [5U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [5U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [6U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
        [6U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a_D
        [7U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b_D
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

void Vtop___024root___nba_comb__TOP__28(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [0U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [1U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [2U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [3U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [4U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [5U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [6U];
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid_D
        [7U];
}

void Vtop___024root___nba_comb__TOP__29(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__29\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_a
        [7U];
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
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_bus_b
        [7U];
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
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_8__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__BU_DU_valid
        [7U];
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
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__a_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__din 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__b_i;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT____VdfgRegularize_h5f8bbaef_0_1 
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
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT____VdfgRegularize_hd6bfc3d2_0_1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__stall_i)) 
           & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__valid_i));
}

void Vtop___024root___nba_sequent__TOP__64(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__64\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__rst 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__rst;
}

void Vtop___024root___nba_comb__TOP__30(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__30\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__pair1_ready 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__burst_active)
            ? ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair1_has_data))
            : ((2U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair1_has_data)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__stall_i)) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_state)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__pair1_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f1_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f3_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f1_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f3_rd_en;
}

void Vtop___024root___nba_comb__TOP__31(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__31\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__pair2_ready 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__burst_active)
            ? ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair2_has_data))
            : ((2U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__fifo_pair2_has_data)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__stall_i)) 
           & ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__output_state) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__pair2_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f2_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f4_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f2_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f4_rd_en;
}

void Vtop___024root___nba_comb__TOP__32(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__32\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__pair1_ready 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__burst_active)
            ? ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair1_has_data))
            : ((1U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair1_has_data)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__stall_i)) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_state)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__pair1_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f1_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f3_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f1_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f3_rd_en;
}

void Vtop___024root___nba_comb__TOP__33(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__33\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__pair2_ready 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__burst_active)
            ? ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair2_has_data))
            : ((1U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__fifo_pair2_has_data)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__stall_i)) 
           & ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__output_state) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__pair2_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f2_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f4_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f2_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f4_rd_en;
}

void Vtop___024root___nba_comb__TOP__34(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__34\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__pair1_ready 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__burst_active)
            ? ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair1_has_data))
            : ((4U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair1_has_data)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__stall_i)) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_state)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__pair1_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f1_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f3_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f1_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f3_rd_en;
}

void Vtop___024root___nba_comb__TOP__35(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__35\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__pair2_ready 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__burst_active)
            ? ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair2_has_data))
            : ((4U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__fifo_pair2_has_data)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__stall_i)) 
           & ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__output_state) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__pair2_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f2_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f4_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f2_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f4_rd_en;
}

void Vtop___024root___nba_comb__TOP__36(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__36\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__pair1_ready 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__burst_active)
            ? ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair1_has_data))
            : ((8U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair1_has_data)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__stall_i)) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_state)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__pair1_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f1_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f3_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f1_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f3_rd_en;
}

void Vtop___024root___nba_comb__TOP__37(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__37\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__pair2_ready 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__burst_active)
            ? ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair2_has_data))
            : ((8U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__fifo_pair2_has_data)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__stall_i)) 
           & ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__output_state) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__pair2_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f2_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f4_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f2_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f4_rd_en;
}

void Vtop___024root___nba_comb__TOP__38(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__38\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__pair1_ready 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__burst_active)
            ? ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair1_has_data))
            : ((0x10U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair1_has_data)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__stall_i)) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_state)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__pair1_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f1_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f3_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f1_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f3_rd_en;
}

void Vtop___024root___nba_comb__TOP__39(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__39\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__pair2_ready 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__burst_active)
            ? ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair2_has_data))
            : ((0x10U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__fifo_pair2_has_data)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__stall_i)) 
           & ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__output_state) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__pair2_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f2_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f4_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f2_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f4_rd_en;
}

void Vtop___024root___nba_comb__TOP__40(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__40\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__pair1_ready 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__burst_active)
            ? ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair1_has_data))
            : ((0x20U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair1_has_data)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__stall_i)) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_state)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__pair1_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f1_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f3_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f1_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f3_rd_en;
}

void Vtop___024root___nba_comb__TOP__41(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__41\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__pair2_ready 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__burst_active)
            ? ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair2_has_data))
            : ((0x20U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__fifo_pair2_has_data)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__stall_i)) 
           & ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__output_state) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__pair2_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f2_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f4_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f2_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f4_rd_en;
}

void Vtop___024root___nba_comb__TOP__42(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__42\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__pair1_ready 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__burst_active)
            ? ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair1_has_data))
            : ((0x40U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair1_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair1_has_data)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair1 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__stall_i)) 
           & ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_state)) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__pair1_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f1_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f3_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair1;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f1_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f3_rd_en;
}

void Vtop___024root___nba_comb__TOP__43(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__43\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__pair2_ready 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__burst_active)
            ? ((0U != (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair2_has_data))
            : ((0x40U <= (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair2_count)) 
               & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__fifo_pair2_has_data)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__stall_i)) 
           & ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__output_state) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__pair2_ready)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f2_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f4_rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f2_rd_en;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__rd_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f4_rd_en;
}

void Vtop___024root___nba_comb__TOP__44(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__44\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__a_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_a
        [7U];
}

void Vtop___024root___nba_comb__TOP__45(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__45\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__b_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_bus_b
        [7U];
}

void Vtop___024root___nba_comb__TOP__46(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__46\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__normalization_inst__DOT__valid_i 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__DU_BU_valid
        [7U];
}

void Vtop___024root___nba_comb__TOP__47(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__47\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_1_2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__state)) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f1_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f2_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT____VdfgRegularize_h5f8bbaef_0_1)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_1_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_1_2;
}

void Vtop___024root___nba_comb__TOP__48(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__48\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_3_4 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT____VdfgRegularize_h5f8bbaef_0_1) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f3_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__f4_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__state)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_3__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_3_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__buffer_4__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_3_4;
}

void Vtop___024root___nba_comb__TOP__49(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__49\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_1_2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__state)) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f1_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f2_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT____VdfgRegularize_h2ab18376_0_1)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_1_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_1_2;
}

void Vtop___024root___nba_comb__TOP__50(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__50\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_3_4 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT____VdfgRegularize_h2ab18376_0_1) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f3_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__f4_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__state)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_3__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_3_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__buffer_4__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_3_4;
}

void Vtop___024root___nba_comb__TOP__51(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__51\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_1_2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__state)) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f1_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f2_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT____VdfgRegularize_hcdadf19d_0_1)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_1_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_1_2;
}

void Vtop___024root___nba_comb__TOP__52(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__52\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_3_4 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT____VdfgRegularize_hcdadf19d_0_1) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f3_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__f4_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__state)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_3__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_3_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__buffer_4__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_3_4;
}

void Vtop___024root___nba_comb__TOP__53(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__53\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_1_2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__state)) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f1_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f2_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT____VdfgRegularize_had232467_0_1)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_1_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_1_2;
}

void Vtop___024root___nba_comb__TOP__54(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__54\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_3_4 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT____VdfgRegularize_had232467_0_1) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f3_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__f4_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__state)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_3__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_3_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__buffer_4__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_3_4;
}

void Vtop___024root___nba_comb__TOP__55(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__55\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_1_2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__state)) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f1_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f2_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT____VdfgRegularize_h4bf5fa17_0_1)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_1_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_1_2;
}

void Vtop___024root___nba_comb__TOP__56(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__56\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_3_4 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT____VdfgRegularize_h4bf5fa17_0_1) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f3_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__f4_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__state)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_3__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_3_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__buffer_4__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_3_4;
}

void Vtop___024root___nba_comb__TOP__57(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__57\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_1_2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__state)) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f1_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f2_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT____VdfgRegularize_he1721b4e_0_1)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_1_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_1_2;
}

void Vtop___024root___nba_comb__TOP__58(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__58\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_3_4 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT____VdfgRegularize_he1721b4e_0_1) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f3_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__f4_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__state)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_3__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_3_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__buffer_4__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_3_4;
}

void Vtop___024root___nba_comb__TOP__59(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__59\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_1_2 
        = ((~ (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__state)) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f1_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f2_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT____VdfgRegularize_hd6bfc3d2_0_1)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_1_2;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_1_2;
}

void Vtop___024root___nba_comb__TOP__60(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__60\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_3_4 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT____VdfgRegularize_hd6bfc3d2_0_1) 
           & ((~ ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f3_full) 
                  | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__f4_full))) 
              & (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__state)));
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_3__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_3_4;
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__buffer_4__DOT__wr_en 
        = vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_3_4;
}

void Vtop___024root___nba_comb__TOP__61(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__61\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_enable 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair1) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__read_pair2));
}

void Vtop___024root___nba_comb__TOP__62(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__62\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_enable 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair1) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__read_pair2));
}

void Vtop___024root___nba_comb__TOP__63(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__63\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_enable 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair1) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__read_pair2));
}

void Vtop___024root___nba_comb__TOP__64(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__64\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_enable 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair1) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__read_pair2));
}

void Vtop___024root___nba_comb__TOP__65(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__65\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_enable 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair1) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__read_pair2));
}

void Vtop___024root___nba_comb__TOP__66(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__66\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_enable 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair1) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__read_pair2));
}

void Vtop___024root___nba_comb__TOP__67(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__67\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_enable 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair1) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__read_pair2));
}

void Vtop___024root___nba_comb__TOP__68(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__68\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__input_accept 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_1_2) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_1__DOT__write_fifo_3_4));
}

void Vtop___024root___nba_comb__TOP__69(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__69\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__input_accept 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_1_2) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_2__DOT__write_fifo_3_4));
}

void Vtop___024root___nba_comb__TOP__70(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__70\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__input_accept 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_1_2) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_3__DOT__write_fifo_3_4));
}

void Vtop___024root___nba_comb__TOP__71(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__71\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__input_accept 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_1_2) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_4__DOT__write_fifo_3_4));
}

void Vtop___024root___nba_comb__TOP__72(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__72\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__input_accept 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_1_2) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_5__DOT__write_fifo_3_4));
}

void Vtop___024root___nba_comb__TOP__73(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__73\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__input_accept 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_1_2) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_6__DOT__write_fifo_3_4));
}

void Vtop___024root___nba_comb__TOP__74(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__74\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__input_accept 
        = ((IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_1_2) 
           | (IData)(vlSelfRef.INTT_engine_axis_wrapper__DOT__intt_inst__DOT__Delay_inst_7__DOT__write_fifo_3_4));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x0000000000020000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x0000000000040000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x0000000000100000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x0000000000200000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((0x0000000000400000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((0x0000000000800000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((0x0000000002000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0x0000000004000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((0x0000000008000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__18(vlSelf);
    }
    if ((0x0000000010000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__19(vlSelf);
    }
    if ((0x0000000040000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__20(vlSelf);
    }
    if ((0x0000000080000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__21(vlSelf);
    }
    if ((0x0000000100000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__22(vlSelf);
    }
    if ((0x0000000200000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__23(vlSelf);
    }
    if ((0x0000000800000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__24(vlSelf);
    }
    if ((0x0000001000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__25(vlSelf);
    }
    if ((0x0000002000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__26(vlSelf);
    }
    if ((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__27(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__28(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__29(vlSelf);
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__30(vlSelf);
    }
    if ((0x0000000000080000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__31(vlSelf);
    }
    if ((0x0000000001000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__32(vlSelf);
    }
    if ((0x0000000020000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__33(vlSelf);
    }
    if ((0x0000000400000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__34(vlSelf);
    }
    if ((0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__35(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__36(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__37(vlSelf);
    }
    if ((0x0000800000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__38(vlSelf);
    }
    if ((0x0001000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__39(vlSelf);
    }
    if ((0x0002000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__40(vlSelf);
    }
    if ((0x0004000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__41(vlSelf);
    }
    if ((0x0008000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__42(vlSelf);
    }
    if ((0x0010000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__43(vlSelf);
    }
    if ((0x0020000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__44(vlSelf);
    }
    if ((0x0040000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__45(vlSelf);
    }
    if ((0x0000010000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__46(vlSelf);
    }
    if ((0x0000020000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__47(vlSelf);
    }
    if ((0x0000040000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__48(vlSelf);
    }
    if ((0x0000080000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__49(vlSelf);
    }
    if ((0x0000100000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__50(vlSelf);
    }
    if ((0x0000200000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__51(vlSelf);
    }
    if ((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__52(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__53(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__54(vlSelf);
    }
    if ((0x0000000000001400ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x0000000000002800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x00000000000000a0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x0000000000000140ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x0000000000028000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x0000000000050000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x0000000000500000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x0000000000a00000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0x000000000a000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x0000000014000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((0x0000000140000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((0x0000000280000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__11(vlSelf);
    }
    if ((0x0000002800000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__12(vlSelf);
    }
    if ((0x0000005000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__13(vlSelf);
    }
    if ((0x0000000000000190ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__14(vlSelf);
    }
    if ((0x0000000000000070ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__15(vlSelf);
    }
    if ((0x0000000000003200ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__16(vlSelf);
    }
    if ((0x0000000000000e00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__17(vlSelf);
    }
    if ((0x0000000000064000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__18(vlSelf);
    }
    if ((0x000000000001c000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__19(vlSelf);
    }
    if ((0x0000000000c80000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__20(vlSelf);
    }
    if ((0x0000000000380000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__21(vlSelf);
    }
    if ((0x0000000019000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__22(vlSelf);
    }
    if ((0x0000000007000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__23(vlSelf);
    }
    if ((0x0000000320000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__24(vlSelf);
    }
    if ((0x00000000e0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__25(vlSelf);
    }
    if ((0x0000006400000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__26(vlSelf);
    }
    if ((0x0000001c00000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__27(vlSelf);
    }
    if ((0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__55(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__56(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__57(vlSelf);
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__58(vlSelf);
    }
    if ((0x0000000000080000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__59(vlSelf);
    }
    if ((0x0000000001000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__60(vlSelf);
    }
    if ((0x0000000020000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__61(vlSelf);
    }
    if ((0x0000000400000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__62(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__63(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__28(vlSelf);
    }
    if ((0x007f800000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__29(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__64(vlSelf);
    }
    if ((0x0000000000001600ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__30(vlSelf);
    }
    if ((0x0000000000002a00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__31(vlSelf);
    }
    if ((0x00000000000000b0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__32(vlSelf);
    }
    if ((0x0000000000000150ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__33(vlSelf);
    }
    if ((0x000000000002c000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__34(vlSelf);
    }
    if ((0x0000000000054000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__35(vlSelf);
    }
    if ((0x0000000000580000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__36(vlSelf);
    }
    if ((0x0000000000a80000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__37(vlSelf);
    }
    if ((0x000000000b000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__38(vlSelf);
    }
    if ((0x0000000015000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__39(vlSelf);
    }
    if ((0x0000000160000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__40(vlSelf);
    }
    if ((0x00000002a0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__41(vlSelf);
    }
    if ((0x0000002c00000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__42(vlSelf);
    }
    if ((0x0000005400000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__43(vlSelf);
    }
    if ((0x0000009ce739ce70ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__44(vlSelf);
    }
    if ((0x000000e739ce7390ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__45(vlSelf);
    }
    if ((0x0000008421084210ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__46(vlSelf);
    }
    if ((0x007f800000000070ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__47(vlSelf);
    }
    if ((0x007f800000000190ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__48(vlSelf);
    }
    if ((0x007f800000000e00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__49(vlSelf);
    }
    if ((0x007f800000003200ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__50(vlSelf);
    }
    if ((0x007f80000001c000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__51(vlSelf);
    }
    if ((0x007f800000064000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__52(vlSelf);
    }
    if ((0x007f800000380000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__53(vlSelf);
    }
    if ((0x007f800000c80000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__54(vlSelf);
    }
    if ((0x007f800007000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__55(vlSelf);
    }
    if ((0x007f800019000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__56(vlSelf);
    }
    if ((0x007f8000e0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__57(vlSelf);
    }
    if ((0x007f800320000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__58(vlSelf);
    }
    if ((0x007f801c00000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__59(vlSelf);
    }
    if ((0x007f806400000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__60(vlSelf);
    }
    if ((0x0000000000003e00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__61(vlSelf);
    }
    if ((0x00000000000001f0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__62(vlSelf);
    }
    if ((0x000000000007c000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__63(vlSelf);
    }
    if ((0x0000000000f80000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__64(vlSelf);
    }
    if ((0x000000001f000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__65(vlSelf);
    }
    if ((0x00000003e0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__66(vlSelf);
    }
    if ((0x0000007c00000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__67(vlSelf);
    }
    if ((0x007f8000000001f0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__68(vlSelf);
    }
    if ((0x007f800000003e00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__69(vlSelf);
    }
    if ((0x007f80000007c000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__70(vlSelf);
    }
    if ((0x007f800000f80000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__71(vlSelf);
    }
    if ((0x007f80001f000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__72(vlSelf);
    }
    if ((0x007f8003e0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__73(vlSelf);
    }
    if ((0x007f807c00000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__74(vlSelf);
    }
}
