// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_i,0,0);
        VL_IN8(valid_i,0,0);
        VL_IN8(stall_i,0,0);
        VL_OUT8(valid_o,0,0);
        CData/*0:0*/ Delay_Unit__DOT__clk_i;
        CData/*0:0*/ Delay_Unit__DOT__rst_i;
        CData/*0:0*/ Delay_Unit__DOT__valid_i;
        CData/*0:0*/ Delay_Unit__DOT__stall_i;
        CData/*0:0*/ Delay_Unit__DOT__valid_o;
        CData/*0:0*/ Delay_Unit__DOT__buffer_1_wr_en;
        CData/*0:0*/ Delay_Unit__DOT__buffer_2_wr_en;
        CData/*0:0*/ Delay_Unit__DOT__buffer_1_rd_en;
        CData/*0:0*/ Delay_Unit__DOT__buffer_2_rd_en;
        CData/*0:0*/ Delay_Unit__DOT__buffer_1_empty;
        CData/*0:0*/ Delay_Unit__DOT__buffer_2_empty;
        CData/*0:0*/ Delay_Unit__DOT__state;
        CData/*0:0*/ Delay_Unit__DOT__fifo_change;
        CData/*0:0*/ Delay_Unit__DOT__buffer_1__DOT__clk;
        CData/*0:0*/ Delay_Unit__DOT__buffer_1__DOT__rst;
        CData/*0:0*/ Delay_Unit__DOT__buffer_1__DOT__wr_en;
        CData/*0:0*/ Delay_Unit__DOT__buffer_1__DOT__full;
        CData/*0:0*/ Delay_Unit__DOT__buffer_1__DOT__rd_en;
        CData/*0:0*/ Delay_Unit__DOT__buffer_1__DOT__empty;
        CData/*0:0*/ Delay_Unit__DOT__buffer_2__DOT__clk;
        CData/*0:0*/ Delay_Unit__DOT__buffer_2__DOT__rst;
        CData/*0:0*/ Delay_Unit__DOT__buffer_2__DOT__wr_en;
        CData/*0:0*/ Delay_Unit__DOT__buffer_2__DOT__full;
        CData/*0:0*/ Delay_Unit__DOT__buffer_2__DOT__rd_en;
        CData/*0:0*/ Delay_Unit__DOT__buffer_2__DOT__empty;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__Delay_Unit__DOT__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__Delay_Unit__DOT__buffer_1__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__Delay_Unit__DOT__buffer_2__DOT__clk__0;
        VL_IN16(a_i,15,0);
        VL_IN16(b_i,15,0);
        VL_OUT16(a_o,15,0);
        VL_OUT16(b_o,15,0);
        SData/*15:0*/ Delay_Unit__DOT__a_i;
        SData/*15:0*/ Delay_Unit__DOT__b_i;
        SData/*15:0*/ Delay_Unit__DOT__a_o;
        SData/*15:0*/ Delay_Unit__DOT__b_o;
        SData/*15:0*/ Delay_Unit__DOT__buffer_1_data_o;
        SData/*15:0*/ Delay_Unit__DOT__buffer_2_data_o;
        SData/*8:0*/ Delay_Unit__DOT__counter;
        SData/*15:0*/ Delay_Unit__DOT__buffer_1__DOT__rd_data;
        SData/*9:0*/ Delay_Unit__DOT__buffer_1__DOT__wr_ptr;
        SData/*9:0*/ Delay_Unit__DOT__buffer_1__DOT__rd_ptr;
        SData/*10:0*/ Delay_Unit__DOT__buffer_1__DOT__occupancy;
        SData/*15:0*/ Delay_Unit__DOT__buffer_1__DOT____Vlvbound_h57f8e2fc__0;
        SData/*15:0*/ Delay_Unit__DOT__buffer_1__DOT____Vlvbound_hf0066f4b__0;
        SData/*15:0*/ Delay_Unit__DOT__buffer_1__DOT____Vlvbound_h57f8e2fc__1;
        SData/*15:0*/ Delay_Unit__DOT__buffer_1__DOT____Vlvbound_hf0066f4b__1;
        SData/*15:0*/ Delay_Unit__DOT__buffer_2__DOT__rd_data;
        SData/*9:0*/ Delay_Unit__DOT__buffer_2__DOT__wr_ptr;
        SData/*9:0*/ Delay_Unit__DOT__buffer_2__DOT__rd_ptr;
        SData/*10:0*/ Delay_Unit__DOT__buffer_2__DOT__occupancy;
        SData/*15:0*/ Delay_Unit__DOT__buffer_2__DOT____Vlvbound_h57f8e2fc__0;
        SData/*15:0*/ Delay_Unit__DOT__buffer_2__DOT____Vlvbound_hf0066f4b__0;
        SData/*15:0*/ Delay_Unit__DOT__buffer_2__DOT____Vlvbound_h57f8e2fc__1;
        SData/*15:0*/ Delay_Unit__DOT__buffer_2__DOT____Vlvbound_hf0066f4b__1;
        IData/*31:0*/ Delay_Unit__DOT__buffer_1_data_i;
        IData/*31:0*/ Delay_Unit__DOT__buffer_2_data_i;
    };
    struct {
        IData/*31:0*/ Delay_Unit__DOT__buffer_1__DOT__wr_data;
        IData/*31:0*/ Delay_Unit__DOT__buffer_1__DOT__i;
        IData/*31:0*/ Delay_Unit__DOT__buffer_2__DOT__wr_data;
        IData/*31:0*/ Delay_Unit__DOT__buffer_2__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*15:0*/, 772> Delay_Unit__DOT__buffer_1__DOT__mem;
        VlUnpacked<SData/*15:0*/, 772> Delay_Unit__DOT__buffer_2__DOT__mem;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ Delay_Unit__DOT__DATA_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ Delay_Unit__DOT__STAGE = 8U;
    static constexpr IData/*31:0*/ Delay_Unit__DOT__DEPTH = 0x00000182U;
    static constexpr IData/*31:0*/ Delay_Unit__DOT__N = 0x00000010U;
    static constexpr IData/*31:0*/ Delay_Unit__DOT__buffer_1__DOT__DEPTH = 0x00000182U;
    static constexpr IData/*31:0*/ Delay_Unit__DOT__buffer_1__DOT__DATA_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ Delay_Unit__DOT__buffer_1__DOT__MEM_DEPTH = 0x00000304U;
    static constexpr IData/*31:0*/ Delay_Unit__DOT__buffer_1__DOT__PTR_W = 0x0000000aU;
    static constexpr IData/*31:0*/ Delay_Unit__DOT__buffer_2__DOT__DEPTH = 0x00000182U;
    static constexpr IData/*31:0*/ Delay_Unit__DOT__buffer_2__DOT__DATA_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ Delay_Unit__DOT__buffer_2__DOT__MEM_DEPTH = 0x00000304U;
    static constexpr IData/*31:0*/ Delay_Unit__DOT__buffer_2__DOT__PTR_W = 0x0000000aU;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
