// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::Delay_Unit__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::Delay_Unit__DOT__STAGE;
constexpr IData/*31:0*/ Vtop___024root::Delay_Unit__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::Delay_Unit__DOT__N;
constexpr IData/*31:0*/ Vtop___024root::Delay_Unit__DOT__buffer_1__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::Delay_Unit__DOT__buffer_1__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::Delay_Unit__DOT__buffer_1__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::Delay_Unit__DOT__buffer_1__DOT__PTR_W;
constexpr IData/*31:0*/ Vtop___024root::Delay_Unit__DOT__buffer_2__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::Delay_Unit__DOT__buffer_2__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::Delay_Unit__DOT__buffer_2__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::Delay_Unit__DOT__buffer_2__DOT__PTR_W;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
}
