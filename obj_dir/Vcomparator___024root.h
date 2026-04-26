// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcomparator.h for the primary calling header

#ifndef VERILATED_VCOMPARATOR___024ROOT_H_
#define VERILATED_VCOMPARATOR___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vcomparator___024unit;


class Vcomparator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcomparator___024root final {
  public:
    // CELLS
    Vcomparator___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ tb__DOT__a;
    CData/*3:0*/ tb__DOT__b;
    CData/*0:0*/ tb__DOT__gt;
    CData/*0:0*/ tb__DOT__lt;
    CData/*0:0*/ tb__DOT__eq;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*3:0*/ __Vtrigprevexpr___TOP__tb__DOT__a__0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__tb__DOT__b__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__eq__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__gt__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__lt__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vcomparator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcomparator___024root(Vcomparator__Syms* symsp, const char* namep);
    ~Vcomparator___024root();
    VL_UNCOPYABLE(Vcomparator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
