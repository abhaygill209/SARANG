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
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(valid_i,0,0);
    VL_IN8(stall,0,0);
    VL_OUT8(valid_out,0,0);
    CData/*0:0*/ ButterflyUnitCT__DOT__clk;
    CData/*0:0*/ ButterflyUnitCT__DOT__rst;
    CData/*0:0*/ ButterflyUnitCT__DOT__valid_i;
    CData/*0:0*/ ButterflyUnitCT__DOT__stall;
    CData/*0:0*/ ButterflyUnitCT__DOT__valid_out;
    CData/*0:0*/ ButterflyUnitCT__DOT__valid_s1;
    CData/*0:0*/ ButterflyUnitCT__DOT__valid_s2;
    CData/*0:0*/ ButterflyUnitCT__DOT__valid_s3;
    CData/*0:0*/ ButterflyUnitCT__DOT__valid_s4;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ButterflyUnitCT__DOT__clk__0;
    VL_IN16(a_i,15,0);
    VL_IN16(b_i,15,0);
    VL_IN16(w,15,0);
    VL_OUT16(a_o,15,0);
    VL_OUT16(b_o,15,0);
    SData/*15:0*/ ButterflyUnitCT__DOT__a_i;
    SData/*15:0*/ ButterflyUnitCT__DOT__b_i;
    SData/*15:0*/ ButterflyUnitCT__DOT__w;
    SData/*15:0*/ ButterflyUnitCT__DOT__a_o;
    SData/*15:0*/ ButterflyUnitCT__DOT__b_o;
    SData/*15:0*/ ButterflyUnitCT__DOT__a_s1;
    SData/*15:0*/ ButterflyUnitCT__DOT__m_s2;
    SData/*15:0*/ ButterflyUnitCT__DOT__a_s2;
    SData/*15:0*/ ButterflyUnitCT__DOT__a_s3;
    SData/*15:0*/ ButterflyUnitCT__DOT__bw_s4;
    SData/*15:0*/ ButterflyUnitCT__DOT__a_s4;
    IData/*31:0*/ ButterflyUnitCT__DOT__mult_s1;
    IData/*31:0*/ ButterflyUnitCT__DOT__mult_s2;
    IData/*31:0*/ ButterflyUnitCT__DOT__t_s3;
    IData/*16:0*/ ButterflyUnitCT__DOT__add_temp;
    IData/*16:0*/ ButterflyUnitCT__DOT__sub_temp;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ ButterflyUnitCT__DOT__DATA_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ ButterflyUnitCT__DOT__Q = 0x00000d01U;
    static constexpr IData/*31:0*/ ButterflyUnitCT__DOT__Q_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ ButterflyUnitCT__DOT__Q_INV = 0x00000cffU;
    static constexpr IData/*31:0*/ ButterflyUnitCT__DOT__R_MASK = 0x0000ffffU;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
