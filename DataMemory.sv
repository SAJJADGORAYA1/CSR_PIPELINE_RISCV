module DataMemory (
    output logic [31:0] readData,
    output logic Stall_DMOut,
    input logic [31:0] ALU_result_DE,
    input logic [31:0] rdata2_DE,
    input logic [3:0] mask,
    input logic wr_en_MW,
    rd_en_MW,
    cs,
    clk,
    rst,
    Stall_Out
);

  logic [31:0] Data_Mem[0:63];

  initial begin
    $readmemh("Data_Memory.txt", Data_Mem);
  end

  always_ff @(posedge clk) begin
    if (rst) begin
      Stall_DMOut <= 1'b0;
    end else begin
      Stall_DMOut <= Stall_Out;
    end
  end


  // Read data from Memory
  always_comb begin
    if (rd_en_MW) begin
      readData <= Data_Mem[ALU_result_DE>>2];  //load data 
    end
  end

  // Write data to Memory
  always_ff @(negedge clk) begin
    if (~cs) begin
      if (~wr_en_MW) begin
        if (mask[0]) begin
          Data_Mem[ALU_result_DE>>2][7:0] <= rdata2_DE[7:0];
        end
        if (mask[1]) begin
          Data_Mem[ALU_result_DE>>2][15:8] <= rdata2_DE[15:8];
        end
        if (mask[2]) begin
          Data_Mem[ALU_result_DE>>2][23:16] <= rdata2_DE[23:16];
        end
        if (mask[3]) begin
          Data_Mem[ALU_result_DE>>2][31:24] <= rdata2_DE[31:24];
        end
      end
    end
  end

endmodule
