// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VTHREE_STAGE_PIPELINE__SYMS_H_
#define _VTHREE_STAGE_PIPELINE__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VThree_stage_Pipeline.h"

// SYMS CLASS
class VThree_stage_Pipeline__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VThree_stage_Pipeline*         TOPp;
    
    // CREATORS
    VThree_stage_Pipeline__Syms(VThree_stage_Pipeline* topp, const char* namep);
    ~VThree_stage_Pipeline__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
