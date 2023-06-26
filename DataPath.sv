module DataPath (
    output logic [31:0] ALU_result_DE,
    Instruction_F,
    rdata2_DE,
    output logic [3:0] mask,
    output logic cs,
    Stall_Out,
    Stall_MW,
    input logic [31:0] readData,
    input logic [3:0] ALU_control,
    input logic [2:0] br_type,
    load_MW,
    input logic [1:0] wb_sel_MW,
    store_MW,
    input logic RegWrite_MW,
    csr_rd_en_MW,
    csr_wr_en_MW,
    mret_MW,
    Timer_Intrpt,
    External_Intrpt,
    sel_A,
    sel_B,
    clk,
    rst,
    Stall_DMOut
);


  logic [31:0] PC, PC_new, PC_IN, Instruction, ALU_result;
  logic [31:0] rdata1, wdata, PC_F, PC_DE, evec;
  logic [31:0] Immediate, rdataA, rdataB, rdata_FA, rdata_FB, rdata_FA_R, rdata_FB_R;
  logic [31:0] rdata, rdata2, Instruction_DE, Addr, csr_wdata, csr_rdata, cause;
  logic br_taken, epc_taken, Stall_out_en, Forward_A, Forward_B, Stall, flush, csr_flush;

  //PC Mux
  always_comb begin
    if (br_taken) PC_IN = ALU_result_DE;
    else PC_IN = PC + 4;
  end

  //CSR epc taken Mux
  always_comb begin
    if (epc_taken) PC_new = evec;
    else PC_new = PC_IN;
  end

  //Program Counter
  Program_counter P_C (
      PC_new,
      rst,
      clk,
      flush,
      PC
  );

  //Instruction Memory
  In_Mem IM (
      PC,
      Instruction
  );

  //Stage 1 Outputs Registers
  Fetch_Reg Stage2 (
      Instruction,
      PC,
      rst,
      clk,
      csr_flush,
      Stall,
      flush,
      Instruction_F,
      PC_F
  );

  //Register File
  Reg_File RF (
      wdata,
      Instruction_F[19:15],
      Instruction_F[24:20],
      Instruction_DE[11:7],
      RegWrite_MW,
      clk,
      rst,
      rdata1,
      rdata2
  );

  //Immediate Generator  (sign-extender)	
  ImmediateGen IG (
      Instruction_F,
      Immediate
  );

  //Forward Data Mux_1
  always_comb begin
    if (Forward_A) rdata_FA = ALU_result_DE;
    else rdata_FA = rdata1;
  end

  //Operand 1 Mux
  always_comb begin
    if (sel_A) rdataA = PC_F;
    else rdataA = rdata_FA;
  end

  //Forward Data Mux_2
  always_comb begin
    if (Forward_B) rdata_FB = ALU_result_DE;
    else rdata_FB = rdata2;
  end

  //Operand 2 Mux
  always_comb begin
    if (sel_B) rdataB = Immediate;
    else rdataB = rdata_FB;
  end

  //ALU
  ALU AU (
      rdataA,
      rdataB,
      ALU_control,
      ALU_result
  );

  Branch_Reg BR (
      rdata_FA,
      rdata_FB,
      clk,
      rst,
      Stall,
      rdata_FA_R,
      rdata_FB_R
  );

  //Branch Comparator
  Branch BC (
      rdata_FA_R,
      rdata_FB_R,
      br_type,
      br_taken
  );

  //Stage 2 Outputs Registers
  Decode_Execute_Reg Stage3 (
      PC_F,
      ALU_result,
      rdata_FB,
      Instruction_F,
      clk,
      rst,
      csr_flush,
      Stall_MW,
      PC_DE,
      ALU_result_DE,
      rdata2_DE,
      Instruction_DE
  );


  //load store unit 
  load_store_unit LSU (
      rdata,  //write back data from data memory 
      mask,
      cs,
      Stall_Out,
      Stall_out_en,
      readData,
      ALU_result_DE,
      load_MW,
      store_MW,
      Stall_MW,
      Stall_DMOut
  );

  Forward_Stall_Unit FSU (
      Instruction_F,
      Instruction_DE,
      RegWrite_MW,
      br_taken,
      Stall_out_en,
      Forward_A,
      Forward_B,
      Stall,
      Stall_MW,
      flush
  );


  CSR_Reg CSR_R (
      rdata_FA,
      Immediate,
      Stall_MW,
      clk,
      rst,
      Addr,
      csr_wdata
  );

  intrpt_encoder IE (
      Timer_Intrpt,
      External_Intrpt,
      cause
  );

  CSR_Unit csr (
      clk,
      rst,
      mret_MW,
      csr_wr_en_MW,
      csr_rd_en_MW,
      Addr,
      cause,
      PC_DE,
      csr_wdata,
      csr_flush,
      epc_taken,
      csr_rdata,
      evec
  );


  //Write Back Mux
  always_comb begin
    case (wb_sel_MW)
      2'b00:   wdata = PC_DE + 4;
      2'b01:   wdata = ALU_result_DE;
      2'b10:   wdata = rdata;
      2'b11:   wdata = csr_rdata;
      default: wdata = 32'b0;
    endcase
  end

endmodule
