module CSR_Reg (
    input logic [31:0] rdata_FA,
    Immediate,
    input logic Stall_MW,
    clk,
    rst,
    output logic [31:0] Addr,
    csr_wdata
);

  //Register-1 for rs1 to csr_wdata
  always_ff @(posedge clk) begin
    if (rst) begin
      csr_wdata <= 32'h0;
    end else begin
      if (Stall_MW) begin
        csr_wdata <= csr_wdata;
      end else begin
        csr_wdata <= rdata_FA;
      end
    end
  end

  //Register-2 for Immediate to csr_Addr
  always_ff @(posedge clk) begin
    if (rst) begin
      Addr <= 32'h0;
    end else begin
      if (Stall_MW) begin
        Addr <= Addr;
      end else begin
        Addr <= Immediate;
      end
    end
  end

endmodule
