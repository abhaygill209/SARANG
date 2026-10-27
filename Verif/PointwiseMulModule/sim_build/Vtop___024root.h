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
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_IN8(valid_i,0,0);
    VL_OUT8(valid_o,0,0);
    CData/*0:0*/ PointwiseMul__DOT__clk_i;
    CData/*0:0*/ PointwiseMul__DOT__rst_i;
    CData/*0:0*/ PointwiseMul__DOT__valid_i;
    CData/*0:0*/ PointwiseMul__DOT__valid_o;
    CData/*0:0*/ PointwiseMul__DOT__valid_s1;
    CData/*0:0*/ PointwiseMul__DOT__valid_s2;
    CData/*0:0*/ PointwiseMul__DOT__valid_s3;
    CData/*0:0*/ PointwiseMul__DOT__valid_s4;
    CData/*0:0*/ PointwiseMul__DOT__valid_s5;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__PointwiseMul__DOT__clk_i__0;
    VL_IN16(a1_i,15,0);
    VL_IN16(a2_i,15,0);
    VL_IN16(b1_i,15,0);
    VL_IN16(b2_i,15,0);
    VL_OUT16(a_o,15,0);
    VL_OUT16(b_o,15,0);
    SData/*15:0*/ PointwiseMul__DOT__a1_i;
    SData/*15:0*/ PointwiseMul__DOT__a2_i;
    SData/*15:0*/ PointwiseMul__DOT__b1_i;
    SData/*15:0*/ PointwiseMul__DOT__b2_i;
    SData/*15:0*/ PointwiseMul__DOT__a_o;
    SData/*15:0*/ PointwiseMul__DOT__b_o;
    SData/*15:0*/ PointwiseMul__DOT__m_a_s2;
    SData/*15:0*/ PointwiseMul__DOT__m_b_s2;
    IData/*31:0*/ PointwiseMul__DOT__prod_a_s1;
    IData/*31:0*/ PointwiseMul__DOT__prod_b_s1;
    IData/*31:0*/ PointwiseMul__DOT__prod_a_s2;
    IData/*31:0*/ PointwiseMul__DOT__prod_b_s2;
    IData/*31:0*/ PointwiseMul__DOT__prod_a_s3;
    IData/*31:0*/ PointwiseMul__DOT__prod_b_s3;
    IData/*31:0*/ PointwiseMul__DOT__corr_a_s3;
    IData/*31:0*/ PointwiseMul__DOT__corr_b_s3;
    IData/*16:0*/ PointwiseMul__DOT__mont_a_s5;
    IData/*16:0*/ PointwiseMul__DOT__mont_b_s5;
    IData/*16:0*/ PointwiseMul__DOT__q_extended;
    IData/*16:0*/ PointwiseMul__DOT__reduced_a_s5;
    IData/*16:0*/ PointwiseMul__DOT__reduced_b_s5;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ PointwiseMul__DOT__sum_a_s4;
    QData/*32:0*/ PointwiseMul__DOT__sum_b_s4;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr SData/*15:0*/ PointwiseMul__DOT__Q = 0x1e01U;
    static constexpr SData/*15:0*/ PointwiseMul__DOT__Q_INV = 0x1dffU;
    static constexpr IData/*31:0*/ PointwiseMul__DOT__DATA_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ PointwiseMul__DOT__Q_WIDTH = 0x00000010U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
