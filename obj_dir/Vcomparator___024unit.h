// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcomparator.h for the primary calling header

#ifndef VERILATED_VCOMPARATOR___024UNIT_H_
#define VERILATED_VCOMPARATOR___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcomparator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcomparator___024unit final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;

    // INTERNAL VARIABLES
    Vcomparator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcomparator___024unit();
    ~Vcomparator___024unit();
    void ctor(Vcomparator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcomparator___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
