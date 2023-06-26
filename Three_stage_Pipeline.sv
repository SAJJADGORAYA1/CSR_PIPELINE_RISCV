module Three_stage_Pipeline (
    input logic clk,
    rst,
    External_Intrpt
);

  logic [31:0] Instruction_F, ALU_result_DE, readData, rdata2_DE;
  logic [3:0] ALU_control, mask;
  logic [2:0] br_type, load, load_MW;
  logic [1:0] wb_sel, wb_sel_MW, store, store_MW;
  logic
      RegWrite,
      RegWrite_MW,
      wr_en,
      wr_en_MW,
      rd_en,
      rd_en_MW,
      sel_A,
      sel_B,
      cs,
      Stall_Out,
      Stall_DMOut,
      Stall_MW,
      csr_wr_en,
      csr_rd_en,
      mret,
      csr_rd_en_MW,
      csr_wr_en_MW,
      mret_MW;

  // Data_Path
  DataPath DP (
      ALU_result_DE,
      Instruction_F,
      rdata2_DE,
      mask,
      cs,
      Stall_Out,
      Stall_MW,
      readData,
      ALU_control,
      br_type,
      load_MW,
      wb_sel_MW,
      store_MW,
      RegWrite_MW,
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

  // Controller 
  Controller CU (
      Instruction_F[6:0],
      Instruction_F[31:25],
      Instruction_F[14:12],
      ALU_control,
      br_type,
      load,
      wb_sel,
      store,
      RegWrite,
      wr_en,
      rd_en,
      sel_A,
      sel_B,
      csr_wr_en,
      csr_rd_en,
      mret
  );

  //Stage 2 contorl signal register
  Control_Reg CR (
      load,
      wb_sel,
      store,
      RegWrite,
      Stall_MW,
      wr_en,
      rd_en,
      csr_wr_en,
      csr_rd_en,
      mret,
      rst,
      clk,
      load_MW,
      wb_sel_MW,
      store_MW,
      RegWrite_MW,
      wr_en_MW,
      rd_en_MW,
      csr_rd_en_MW,
      csr_wr_en_MW,
      mret_MW
  );

  //Data Memory
  DataMemory DM (
      readData,
      Stall_DMOut,
      ALU_result_DE,
      rdata2_DE,
      mask,
      wr_en_MW,
      rd_en_MW,
      cs,
      clk,
      rst,
      Stall_Out
  );

  //Timer Interrupt 
  Timer_Intrupt TI (
      Timer_Intrpt,
      clk,
      rst
  );

endmodule
