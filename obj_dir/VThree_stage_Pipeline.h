// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTHREE_STAGE_PIPELINE_H_
#define _VTHREE_STAGE_PIPELINE_H_  // guard

#include "verilated_heavy.h"

//==========

class VThree_stage_Pipeline__Syms;
class VThree_stage_Pipeline_VerilatedVcd;


//----------

VL_MODULE(VThree_stage_Pipeline) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(External_Intrpt,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*3:0*/ Three_stage_Pipeline__DOT__ALU_control;
        CData/*3:0*/ Three_stage_Pipeline__DOT__mask;
        CData/*2:0*/ Three_stage_Pipeline__DOT__br_type;
        CData/*2:0*/ Three_stage_Pipeline__DOT__load;
        CData/*2:0*/ Three_stage_Pipeline__DOT__load_MW;
        CData/*1:0*/ Three_stage_Pipeline__DOT__wb_sel;
        CData/*1:0*/ Three_stage_Pipeline__DOT__wb_sel_MW;
        CData/*1:0*/ Three_stage_Pipeline__DOT__store;
        CData/*1:0*/ Three_stage_Pipeline__DOT__store_MW;
        CData/*0:0*/ Three_stage_Pipeline__DOT__RegWrite;
        CData/*0:0*/ Three_stage_Pipeline__DOT__RegWrite_MW;
        CData/*0:0*/ Three_stage_Pipeline__DOT__wr_en;
        CData/*0:0*/ Three_stage_Pipeline__DOT__wr_en_MW;
        CData/*0:0*/ Three_stage_Pipeline__DOT__rd_en;
        CData/*0:0*/ Three_stage_Pipeline__DOT__rd_en_MW;
        CData/*0:0*/ Three_stage_Pipeline__DOT__sel_A;
        CData/*0:0*/ Three_stage_Pipeline__DOT__sel_B;
        CData/*0:0*/ Three_stage_Pipeline__DOT__Stall_DMOut;
        CData/*0:0*/ Three_stage_Pipeline__DOT__Stall_MW;
        CData/*0:0*/ Three_stage_Pipeline__DOT__csr_wr_en;
        CData/*0:0*/ Three_stage_Pipeline__DOT__csr_rd_en;
        CData/*0:0*/ Three_stage_Pipeline__DOT__mret;
        CData/*0:0*/ Three_stage_Pipeline__DOT__csr_rd_en_MW;
        CData/*0:0*/ Three_stage_Pipeline__DOT__csr_wr_en_MW;
        CData/*0:0*/ Three_stage_Pipeline__DOT__mret_MW;
        CData/*0:0*/ Three_stage_Pipeline__DOT__Timer_Intrpt;
        CData/*0:0*/ Three_stage_Pipeline__DOT__DP__DOT__br_taken;
        CData/*0:0*/ Three_stage_Pipeline__DOT__DP__DOT__epc_taken;
        CData/*0:0*/ Three_stage_Pipeline__DOT__DP__DOT__Forward_A;
        CData/*0:0*/ Three_stage_Pipeline__DOT__DP__DOT__Forward_B;
        CData/*0:0*/ Three_stage_Pipeline__DOT__DP__DOT__Stall;
        CData/*0:0*/ Three_stage_Pipeline__DOT__DP__DOT__flush;
        CData/*0:0*/ Three_stage_Pipeline__DOT__DP__DOT__csr_flush;
        CData/*2:0*/ Three_stage_Pipeline__DOT__TI__DOT__counter;
        IData/*31:0*/ Three_stage_Pipeline__DOT__Instruction_F;
        IData/*31:0*/ Three_stage_Pipeline__DOT__ALU_result_DE;
        IData/*31:0*/ Three_stage_Pipeline__DOT__readData;
        IData/*31:0*/ Three_stage_Pipeline__DOT__rdata2_DE;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__PC;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__PC_new;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__ALU_result;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__PC_F;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__PC_DE;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__evec;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__Immediate;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__rdataA;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__rdataB;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__rdata_FA;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__rdata_FB;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__rdata_FA_R;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__rdata_FB_R;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__rdata;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__Addr;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__csr_wdata;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__cause;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mip;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mie;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mstatus;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mcause;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mtvec;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mepc;
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__IM__DOT__Mem[128];
        IData/*31:0*/ Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[32];
    };
    struct {
        IData/*31:0*/ Three_stage_Pipeline__DOT__DM__DOT__Data_Mem[64];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VThree_stage_Pipeline__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VThree_stage_Pipeline);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VThree_stage_Pipeline(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VThree_stage_Pipeline();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VThree_stage_Pipeline__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VThree_stage_Pipeline__Syms* symsp, bool first);
  private:
    static QData _change_request(VThree_stage_Pipeline__Syms* __restrict vlSymsp);
    static QData _change_request_1(VThree_stage_Pipeline__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__5(VThree_stage_Pipeline__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VThree_stage_Pipeline__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VThree_stage_Pipeline__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VThree_stage_Pipeline__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VThree_stage_Pipeline__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__6(VThree_stage_Pipeline__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VThree_stage_Pipeline__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VThree_stage_Pipeline__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(VThree_stage_Pipeline__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
