// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VThree_stage_Pipeline.h for the primary calling header

#include "VThree_stage_Pipeline.h"
#include "VThree_stage_Pipeline__Syms.h"

//==========

VL_CTOR_IMP(VThree_stage_Pipeline) {
    VThree_stage_Pipeline__Syms* __restrict vlSymsp = __VlSymsp = new VThree_stage_Pipeline__Syms(this, name());
    VThree_stage_Pipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VThree_stage_Pipeline::__Vconfigure(VThree_stage_Pipeline__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VThree_stage_Pipeline::~VThree_stage_Pipeline() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VThree_stage_Pipeline::_initial__TOP__1(VThree_stage_Pipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThree_stage_Pipeline::_initial__TOP__1\n"); );
    VThree_stage_Pipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1[4];
    WData/*159:0*/ __Vtemp2[5];
    WData/*127:0*/ __Vtemp3[4];
    // Body
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x6d6f7279U;
    __Vtemp1[2U] = 0x615f4d65U;
    __Vtemp1[3U] = 0x446174U;
    VL_READMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NW(4, __Vtemp1)
                 , vlTOPp->Three_stage_Pipeline__DOT__DM__DOT__Data_Mem
                 , 0, ~0ULL);
    __Vtemp2[0U] = 0x2e6d656dU;
    __Vtemp2[1U] = 0x66696c65U;
    __Vtemp2[2U] = 0x7465725fU;
    __Vtemp2[3U] = 0x65676973U;
    __Vtemp2[4U] = 0x52U;
    VL_READMEM_N(true, 32, 32, 0, VL_CVT_PACK_STR_NW(5, __Vtemp2)
                 , vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem
                 , 0, ~0ULL);
    __Vtemp3[0U] = 0x2e747874U;
    __Vtemp3[1U] = 0x6d6f7279U;
    __Vtemp3[2U] = 0x6e5f4d65U;
    __Vtemp3[3U] = 0x49U;
    VL_READMEM_N(true, 32, 128, 0, VL_CVT_PACK_STR_NW(4, __Vtemp3)
                 , vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__IM__DOT__Mem
                 , 0, ~0ULL);
}

void VThree_stage_Pipeline::_settle__TOP__4(VThree_stage_Pipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThree_stage_Pipeline::_settle__TOP__4\n"); );
    VThree_stage_Pipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
             | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
            | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
           | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
          | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
         | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))) {
        vlTOPp->Three_stage_Pipeline__DOT__rd_en = 
            ((0x33U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
             & ((0x13U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                & (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))));
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            vlTOPp->Three_stage_Pipeline__DOT__rd_en = 0U;
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
             | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
            | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
           | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
          | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
         | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))) {
        if ((0x33U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            if ((0x13U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                    vlTOPp->Three_stage_Pipeline__DOT__load 
                        = ((0x4000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                            ? ((0x2000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                ? 0U : ((0x1000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                         ? 4U : 3U))
                            : ((0x2000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                ? ((0x1000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                    ? 0U : 2U) : ((0x1000U 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                   ? 1U
                                                   : 0U)));
                }
            }
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
             | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
            | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
           | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
          | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
         | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))) {
        vlTOPp->Three_stage_Pipeline__DOT__wr_en = 
            ((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
             | ((0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                | ((3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                   | (0x23U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))));
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            vlTOPp->Three_stage_Pipeline__DOT__wr_en = 1U;
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
             | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
            | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
           | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
          | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
         | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))) {
        vlTOPp->Three_stage_Pipeline__DOT__RegWrite 
            = ((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | ((0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                  | ((3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                     | ((0x23U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                        & (0x63U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))))));
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            vlTOPp->Three_stage_Pipeline__DOT__RegWrite = 1U;
        } else {
            if ((0x73U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((1U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                  >> 0xcU)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__RegWrite = 1U;
                } else {
                    if ((0U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                      >> 0xcU)))) {
                        vlTOPp->Three_stage_Pipeline__DOT__RegWrite = 0U;
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                        | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                       | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                      | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                     | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                    | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                   | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                  | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))))) {
        if ((0x17U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            if ((0x73U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((1U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                  >> 0xcU)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__csr_rd_en = 1U;
                } else {
                    if ((0U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                      >> 0xcU)))) {
                        vlTOPp->Three_stage_Pipeline__DOT__csr_rd_en = 0U;
                    }
                }
            }
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
             | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
            | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
           | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
          | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
         | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))) {
        vlTOPp->Three_stage_Pipeline__DOT__wb_sel = 
            ((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
              ? 1U : ((0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                       ? 1U : ((3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                ? 2U : ((0x23U == (0x7fU 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                         ? 0U : ((0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                                  ? 0U
                                                  : 
                                                 ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                                   ? 0U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                                    ? 0U
                                                    : 1U)))))));
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            vlTOPp->Three_stage_Pipeline__DOT__wb_sel = 1U;
        } else {
            if ((0x73U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((1U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                  >> 0xcU)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__wb_sel = 3U;
                } else {
                    if ((0U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                      >> 0xcU)))) {
                        vlTOPp->Three_stage_Pipeline__DOT__wb_sel = 0U;
                    }
                }
            }
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
             | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
            | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
           | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
          | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
         | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))) {
        if ((0x33U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            if ((0x13U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((3U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                    if ((0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                        vlTOPp->Three_stage_Pipeline__DOT__store 
                            = ((0U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                             >> 0xcU)))
                                ? 0U : ((1U == (7U 
                                                & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                   >> 0xcU)))
                                         ? 1U : ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                      >> 0xcU)))
                                                  ? 2U
                                                  : 0U)));
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                        | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                       | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                      | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                     | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                    | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                   | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                  | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))))) {
        if ((0x17U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            if ((0x73U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((1U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                  >> 0xcU)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__csr_wr_en = 1U;
                } else {
                    if ((0U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                      >> 0xcU)))) {
                        vlTOPp->Three_stage_Pipeline__DOT__csr_wr_en = 0U;
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                        | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                       | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                      | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                     | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                    | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                   | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                  | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))))) {
        if ((0x17U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            if ((0x73U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((1U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                  >> 0xcU)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__mret = 0U;
                } else {
                    if ((0U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                      >> 0xcU)))) {
                        vlTOPp->Three_stage_Pipeline__DOT__mret = 1U;
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->Three_stage_Pipeline__DOT__store_MW))) {
        vlTOPp->Three_stage_Pipeline__DOT__mask = (
                                                   (2U 
                                                    & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)
                                                    ? 
                                                   ((1U 
                                                     & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)
                                                     ? 8U
                                                     : 4U)
                                                    : 
                                                   ((1U 
                                                     & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)
                                                     ? 2U
                                                     : 1U));
    } else {
        if ((1U == (IData)(vlTOPp->Three_stage_Pipeline__DOT__store_MW))) {
            if ((2U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)) {
                if ((2U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)) {
                    vlTOPp->Three_stage_Pipeline__DOT__mask = 0xcU;
                }
            } else {
                vlTOPp->Three_stage_Pipeline__DOT__mask = 3U;
            }
        } else {
            if ((2U == (IData)(vlTOPp->Three_stage_Pipeline__DOT__store_MW))) {
                vlTOPp->Three_stage_Pipeline__DOT__mask = 0xfU;
            }
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
             | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
            | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
           | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
          | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
         | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))) {
        if ((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            vlTOPp->Three_stage_Pipeline__DOT__ALU_control 
                = ((0x4000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                    ? ((0x2000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                        ? ((0x1000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                            ? 9U : 8U) : ((0x1000U 
                                           & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                           ? (((0x20U 
                                                == 
                                                (0x7fU 
                                                 & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                    >> 0x19U))) 
                                               & (0x33U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))
                                               ? 7U
                                               : 6U)
                                           : 5U)) : 
                   ((0x2000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                     ? ((0x1000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                         ? 4U : 3U) : ((0x1000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                        ? 2U : (((0x20U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                      >> 0x19U))) 
                                                 & (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))
                                                 ? 1U
                                                 : 0U))));
        } else {
            if ((0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                vlTOPp->Three_stage_Pipeline__DOT__ALU_control 
                    = ((0x4000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                        ? ((0x2000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                            ? ((0x1000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                ? 9U : 8U) : ((0x1000U 
                                               & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                               ? ((
                                                   (0x20U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                        >> 0x19U))) 
                                                   & (0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))
                                                   ? 7U
                                                   : 6U)
                                               : 5U))
                        : ((0x2000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                            ? ((0x1000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                ? 4U : 3U) : ((0x1000U 
                                               & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                               ? 2U
                                               : 0U)));
            } else {
                if ((3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                    vlTOPp->Three_stage_Pipeline__DOT__ALU_control = 0U;
                } else {
                    if ((0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                        vlTOPp->Three_stage_Pipeline__DOT__ALU_control = 0U;
                    } else {
                        if ((0x63U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                            vlTOPp->Three_stage_Pipeline__DOT__ALU_control 
                                = ((0x6fU == (0x7fU 
                                              & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                    ? 0U : ((0x67U 
                                             == (0x7fU 
                                                 & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                             ? 0U : 0xaU));
                        }
                    }
                }
            }
        }
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            vlTOPp->Three_stage_Pipeline__DOT__ALU_control = 0U;
        } else {
            if ((0x73U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((1U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                  >> 0xcU)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__ALU_control = 0U;
                } else {
                    if ((0U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                      >> 0xcU)))) {
                        vlTOPp->Three_stage_Pipeline__DOT__ALU_control = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Immediate 
        = ((0x40U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
            ? ((0x20U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                ? ((0x10U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                    ? 0U : ((8U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                             ? ((4U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                 ? ((2U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                     ? ((1U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                         ? ((0xfff00000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                               >> 0x1fU)))) 
                                                << 0x14U)) 
                                            | ((0xff000U 
                                                & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F) 
                                               | ((0x800U 
                                                   & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                        >> 0x14U)))))
                                         : 0U) : 0U)
                                 : 0U) : ((4U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                           ? ((2U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                               ? ((1U 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                   ? 
                                                  ((0xfffff000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                                      >> 0x1fU)))) 
                                                       << 0xcU)) 
                                                   | (0xfffU 
                                                      & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                         >> 0x14U)))
                                                   : 0U)
                                               : 0U)
                                           : ((2U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                               ? ((1U 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                   ? 
                                                  ((0xfffff000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                                      >> 0x1fU)))) 
                                                       << 0xcU)) 
                                                   | ((0x800U 
                                                       & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                               >> 7U)))))
                                                   : 0U)
                                               : 0U))))
                : 0U) : ((0x20U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                          ? ((0x10U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                              ? ((8U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                  ? 0U : ((4U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                           ? ((2U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                               ? ((1U 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                   : 0U)
                                               : 0U)
                                           : 0U)) : 
                             ((8U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                               ? 0U : ((4U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                        ? 0U : ((2U 
                                                 & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                 ? 
                                                ((1U 
                                                  & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                  ? 
                                                 ((0xfffff000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                                     >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | ((0xfe0U 
                                                      & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                           >> 7U))))
                                                  : 0U)
                                                 : 0U))))
                          : ((0x10U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                              ? ((8U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                  ? 0U : ((4U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                           ? ((2U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                               ? ((1U 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                   : 0U)
                                               : 0U)
                                           : ((2U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                               ? ((1U 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                   ? 
                                                  ((0xfffff000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                                      >> 0x1fU)))) 
                                                       << 0xcU)) 
                                                   | (0xfffU 
                                                      & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                         >> 0x14U)))
                                                   : 0U)
                                               : 0U)))
                              : ((8U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                  ? 0U : ((4U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                           ? 0U : (
                                                   (2U 
                                                    & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                    ? 
                                                   ((1U 
                                                     & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                                        >> 0x1fU)))) 
                                                         << 0xcU)) 
                                                     | (0xfffU 
                                                        & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                           >> 0x14U)))
                                                     : 0U)
                                                    : 0U))))));
    if (((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
             | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
            | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
           | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
          | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
         | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))) {
        vlTOPp->Three_stage_Pipeline__DOT__sel_B = 
            (0x33U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F));
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            vlTOPp->Three_stage_Pipeline__DOT__sel_B = 1U;
        } else {
            if ((0x73U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((1U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                  >> 0xcU)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__sel_B = 1U;
                } else {
                    if ((0U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                      >> 0xcU)))) {
                        vlTOPp->Three_stage_Pipeline__DOT__sel_B = 0U;
                    }
                }
            }
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
             | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
            | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
           | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
          | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
         | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))) {
        vlTOPp->Three_stage_Pipeline__DOT__sel_A = 
            ((0x33U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
             & ((0x13U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                & ((3U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                   & ((0x23U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                      & ((0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                         | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))))));
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            vlTOPp->Three_stage_Pipeline__DOT__sel_A = 1U;
        } else {
            if ((0x73U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((1U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                  >> 0xcU)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__sel_A = 0U;
                } else {
                    if ((0U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                      >> 0xcU)))) {
                        vlTOPp->Three_stage_Pipeline__DOT__sel_A = 0U;
                    }
                }
            }
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
             | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
            | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
           | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
          | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
         | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))) {
        vlTOPp->Three_stage_Pipeline__DOT__br_type 
            = ((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                ? 6U : ((0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                         ? 6U : ((3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                  ? 6U : ((0x23U == 
                                           (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                           ? 6U : (
                                                   (0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                                    ? 
                                                   ((0x4000U 
                                                     & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                       ? 5U
                                                       : 4U)
                                                      : 
                                                     ((0x1000U 
                                                       & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                       ? 3U
                                                       : 2U))
                                                     : 
                                                    ((0x2000U 
                                                      & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                      ? 0U
                                                      : 
                                                     ((0x1000U 
                                                       & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                       ? 1U
                                                       : 0U)))
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                                     ? 7U
                                                     : 
                                                    ((0x67U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                                      ? 7U
                                                      : 6U)))))));
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            vlTOPp->Three_stage_Pipeline__DOT__br_type = 6U;
        } else {
            if ((0x73U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((1U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                  >> 0xcU)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__br_type = 6U;
                } else {
                    if ((0U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                      >> 0xcU)))) {
                        vlTOPp->Three_stage_Pipeline__DOT__br_type = 6U;
                    }
                }
            }
        }
    }
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__cause 
        = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__Timer_Intrpt)
            ? 0x80000004U : ((IData)(vlTOPp->External_Intrpt)
                              ? 0x80000008U : 0U));
    if (vlTOPp->Three_stage_Pipeline__DOT__rd_en_MW) {
        vlTOPp->Three_stage_Pipeline__DOT__readData 
            = vlTOPp->Three_stage_Pipeline__DOT__DM__DOT__Data_Mem
            [(0x3fU & (vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE 
                       >> 2U))];
    }
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__br_taken 
        = (1U & ((4U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__br_type))
                  ? ((2U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__br_type))
                      ? (IData)(vlTOPp->Three_stage_Pipeline__DOT__br_type)
                      : ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__br_type))
                          ? (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA_R 
                             >= vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB_R)
                          : (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA_R 
                             < vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB_R)))
                  : ((2U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__br_type))
                      ? ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__br_type))
                          ? VL_GTES_III(1,32,32, vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA_R, vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB_R)
                          : VL_LTS_III(1,32,32, vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA_R, vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB_R))
                      : ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__br_type))
                          ? (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA_R 
                             != vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB_R)
                          : (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA_R 
                             == vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB_R)))));
    if ((0x80000000U & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__cause)) {
        if ((4U & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__cause)) {
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mip = 0x80U;
        } else {
            if ((8U & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__cause)) {
                vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mip = 0x800U;
            }
        }
    } else {
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mip = 0U;
    }
    if ((0U == (IData)(vlTOPp->Three_stage_Pipeline__DOT__load_MW))) {
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata 
            = ((2U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)
                ? ((1U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)
                    ? ((0xffffff00U & ((- (IData)((1U 
                                                   & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                                      >> 0x1fU)))) 
                                       << 8U)) | (0xffU 
                                                  & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                                     >> 0x18U)))
                    : ((0xffffff00U & ((- (IData)((1U 
                                                   & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                                      >> 0x17U)))) 
                                       << 8U)) | (0xffU 
                                                  & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                                     >> 0x10U))))
                : ((1U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)
                    ? ((0xffffff00U & ((- (IData)((1U 
                                                   & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                                      >> 0xfU)))) 
                                       << 8U)) | (0xffU 
                                                  & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                                     >> 8U)))
                    : ((0xffffff00U & ((- (IData)((1U 
                                                   & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                                      >> 7U)))) 
                                       << 8U)) | (0xffU 
                                                  & vlTOPp->Three_stage_Pipeline__DOT__readData))));
    } else {
        if ((1U == (IData)(vlTOPp->Three_stage_Pipeline__DOT__load_MW))) {
            if ((2U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)) {
                if ((2U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)) {
                    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata 
                        = ((0xffff0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                                          >> 0x1fU)))) 
                                           << 0x10U)) 
                           | (0xffffU & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                         >> 0x10U)));
                }
            } else {
                vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata 
                    = ((0xffff0000U & ((- (IData)((1U 
                                                   & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                                      >> 0xfU)))) 
                                       << 0x10U)) | 
                       (0xffffU & vlTOPp->Three_stage_Pipeline__DOT__readData));
            }
        } else {
            if ((2U == (IData)(vlTOPp->Three_stage_Pipeline__DOT__load_MW))) {
                vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata 
                    = vlTOPp->Three_stage_Pipeline__DOT__readData;
            } else {
                if ((3U == (IData)(vlTOPp->Three_stage_Pipeline__DOT__load_MW))) {
                    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata 
                        = ((2U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)
                            ? ((1U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)
                                ? (0xffU & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                            >> 0x18U))
                                : (0xffU & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                            >> 0x10U)))
                            : ((1U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)
                                ? (0xffU & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                            >> 8U))
                                : (0xffU & vlTOPp->Three_stage_Pipeline__DOT__readData)));
                } else {
                    if ((4U == (IData)(vlTOPp->Three_stage_Pipeline__DOT__load_MW))) {
                        if ((2U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)) {
                            if ((2U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)) {
                                vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata 
                                    = (0xffffU & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                                  >> 0x10U));
                            }
                        } else {
                            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata 
                                = (0xffffU & vlTOPp->Three_stage_Pipeline__DOT__readData);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_DMOut)) 
                  & (IData)(vlTOPp->Three_stage_Pipeline__DOT__RegWrite_MW))))) {
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__flush 
            = vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__br_taken;
    }
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC_new 
        = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__epc_taken)
            ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__evec
            : ((IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__br_taken)
                ? vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE
                : ((IData)(4U) + vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC)));
    if (((~ (IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_DMOut)) 
         & (IData)(vlTOPp->Three_stage_Pipeline__DOT__RegWrite_MW))) {
        if (((((0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE)) 
               | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE))) 
             & (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                           >> 7U)) == (0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                >> 0xfU))) 
                | ((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                             >> 7U)) == (0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                  >> 0x14U)))))) {
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Stall = 1U;
        } else {
            if (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                           >> 7U)) != (0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                >> 0xfU)))) {
                if (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                               >> 7U)) != (0x1fU & 
                                           (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                            >> 0x14U)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Stall = 0U;
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__br_taken)))) {
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Stall = 0U;
        }
    }
    if (((~ (IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_DMOut)) 
         & (IData)(vlTOPp->Three_stage_Pipeline__DOT__RegWrite_MW))) {
        if (((((0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE)) 
               | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE))) 
             & (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                           >> 7U)) == (0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                >> 0xfU))) 
                | ((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                             >> 7U)) == (0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                  >> 0x14U)))))) {
            vlTOPp->Three_stage_Pipeline__DOT__Stall_MW = 1U;
        } else {
            if (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                           >> 7U)) != (0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                >> 0xfU)))) {
                if (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                               >> 7U)) != (0x1fU & 
                                           (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                            >> 0x14U)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__Stall_MW = 0U;
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__br_taken)))) {
            vlTOPp->Three_stage_Pipeline__DOT__Stall_MW = 0U;
        }
    }
    if (((~ (IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_DMOut)) 
         & (IData)(vlTOPp->Three_stage_Pipeline__DOT__RegWrite_MW))) {
        if ((1U & (~ ((((0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE)) 
                        | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE))) 
                       | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE))) 
                      & (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                                    >> 7U)) == (0x1fU 
                                                & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                   >> 0xfU))) 
                         | ((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                                      >> 7U)) == (0x1fU 
                                                  & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                     >> 0x14U)))))))) {
            if (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                           >> 7U)) == (0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                >> 0xfU)))) {
                vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Forward_A = 1U;
            } else {
                if (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                               >> 7U)) != (0x1fU & 
                                           (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                            >> 0x14U)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Forward_A = 0U;
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__br_taken)))) {
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Forward_A = 0U;
        }
    }
    if (((~ (IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_DMOut)) 
         & (IData)(vlTOPp->Three_stage_Pipeline__DOT__RegWrite_MW))) {
        if ((1U & (~ ((((0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE)) 
                        | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE))) 
                       | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE))) 
                      & (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                                    >> 7U)) == (0x1fU 
                                                & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                   >> 0xfU))) 
                         | ((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                                      >> 7U)) == (0x1fU 
                                                  & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                     >> 0x14U)))))))) {
            if (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                           >> 7U)) != (0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                >> 0xfU)))) {
                vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Forward_B 
                    = ((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                                 >> 7U)) == (0x1fU 
                                             & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                >> 0x14U)));
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__br_taken)))) {
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Forward_B = 0U;
        }
    }
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA 
        = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Forward_A)
            ? vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE
            : ((0U == (0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                >> 0xfU))) ? 0U : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem
               [(0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                          >> 0xfU))]));
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB 
        = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Forward_B)
            ? vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE
            : ((0U == (0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                >> 0x14U))) ? 0U : 
               vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem
               [(0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                          >> 0x14U))]));
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA 
        = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__sel_A)
            ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC_F
            : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA);
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB 
        = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__sel_B)
            ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Immediate
            : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB);
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__ALU_result 
        = ((8U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
            ? ((4U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                ? 0U : ((2U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                         ? ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                             ? 0U : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)
                         : ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                             ? (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA 
                                & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)
                             : (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA 
                                | vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB))))
            : ((4U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                ? ((2U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                    ? ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                        ? ((0x1fU >= vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)
                            ? (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA 
                               >> vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)
                            : 0U) : ((0x1fU >= vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)
                                      ? (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA 
                                         >> vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)
                                      : 0U)) : ((1U 
                                                 & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                                                 ? 
                                                (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA 
                                                 ^ vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)
                                                 : 
                                                ((vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA 
                                                  < vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)
                                                  ? 1U
                                                  : 0U)))
                : ((2U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                    ? ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                        ? (VL_LTS_III(1,32,32, vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA, vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)
                            ? 1U : 0U) : (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA 
                                          << (0x1fU 
                                              & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)))
                    : ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                        ? (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA 
                           - vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)
                        : (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA 
                           + vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)))));
}

void VThree_stage_Pipeline::_eval_initial(VThree_stage_Pipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThree_stage_Pipeline::_eval_initial\n"); );
    VThree_stage_Pipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VThree_stage_Pipeline::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThree_stage_Pipeline::final\n"); );
    // Variables
    VThree_stage_Pipeline__Syms* __restrict vlSymsp = this->__VlSymsp;
    VThree_stage_Pipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VThree_stage_Pipeline::_eval_settle(VThree_stage_Pipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThree_stage_Pipeline::_eval_settle\n"); );
    VThree_stage_Pipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VThree_stage_Pipeline::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThree_stage_Pipeline::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    External_Intrpt = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__Instruction_F = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__ALU_result_DE = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__readData = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__rdata2_DE = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__ALU_control = VL_RAND_RESET_I(4);
    Three_stage_Pipeline__DOT__mask = VL_RAND_RESET_I(4);
    Three_stage_Pipeline__DOT__br_type = VL_RAND_RESET_I(3);
    Three_stage_Pipeline__DOT__load = VL_RAND_RESET_I(3);
    Three_stage_Pipeline__DOT__load_MW = VL_RAND_RESET_I(3);
    Three_stage_Pipeline__DOT__wb_sel = VL_RAND_RESET_I(2);
    Three_stage_Pipeline__DOT__wb_sel_MW = VL_RAND_RESET_I(2);
    Three_stage_Pipeline__DOT__store = VL_RAND_RESET_I(2);
    Three_stage_Pipeline__DOT__store_MW = VL_RAND_RESET_I(2);
    Three_stage_Pipeline__DOT__RegWrite = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__RegWrite_MW = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__wr_en = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__wr_en_MW = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__rd_en = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__rd_en_MW = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__sel_A = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__sel_B = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__Stall_DMOut = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__Stall_MW = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__csr_wr_en = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__csr_rd_en = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__mret = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__csr_rd_en_MW = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__csr_wr_en_MW = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__mret_MW = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__Timer_Intrpt = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__DP__DOT__PC = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__PC_new = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__ALU_result = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__PC_F = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__PC_DE = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__evec = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__Immediate = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__rdataA = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__rdataB = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__rdata_FA = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__rdata_FB = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__rdata_FA_R = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__rdata_FB_R = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__rdata = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__Addr = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__csr_wdata = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__cause = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__br_taken = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__DP__DOT__epc_taken = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__DP__DOT__Forward_A = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__DP__DOT__Forward_B = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__DP__DOT__Stall = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__DP__DOT__flush = VL_RAND_RESET_I(1);
    Three_stage_Pipeline__DOT__DP__DOT__csr_flush = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<128; ++__Vi0) {
            Three_stage_Pipeline__DOT__DP__DOT__IM__DOT__Mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mip = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mie = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mstatus = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mcause = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mtvec = VL_RAND_RESET_I(32);
    Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mepc = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            Three_stage_Pipeline__DOT__DM__DOT__Data_Mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Three_stage_Pipeline__DOT__TI__DOT__counter = VL_RAND_RESET_I(3);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
