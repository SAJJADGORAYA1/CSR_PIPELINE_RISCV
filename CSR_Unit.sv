module CSR_Unit (
    input logic clk,
    rst,
    input logic mret_MW,
    input logic csr_wr_en_MW,
    input logic csr_rd_en_MW,
    input logic [11:0] Addr,
    input logic [31:0] cause,
    input logic [31:0] PC_DE,
    input logic [31:0] csr_wdata,
    output logic csr_flush,
    epc_taken,
    output logic [31:0] csr_rdata,
    output logic [31:0] evec
);

  parameter MSTATUS = 12'h300;
  parameter MIE = 12'h304;
  parameter MTVEC = 12'h305;
  parameter MEPC = 12'h341;
  parameter MCAUSE = 12'h342;
  parameter MIP = 12'h344;

  logic [31:0] mip;
  logic [31:0] mie;
  logic [31:0] mstatus;
  logic [31:0] mcause;
  logic [31:0] mtvec;
  logic [31:0] mepc;

  //Machine Interrupt Pending register
  always_comb begin
    if (cause[31]) begin
      if (cause[2]) begin
        mip = 32'h80;  //for timer interrupt 7th bit is 1
      end else if (cause[3]) begin
        mip = 32'h800;  //for external interrupt 11th bit is 1
      end
    end else begin
      mip = 32'h00000000;
    end
  end

  //Read data from CSR registers 
  always_comb begin
    if (csr_rd_en_MW) begin
      case (Addr)
        MIP:     csr_rdata = mip;
        MIE:     csr_rdata = mie;
        MSTATUS: csr_rdata = mstatus;
        MCAUSE:  csr_rdata = mcause;
        MTVEC:   csr_rdata = mtvec;
        MEPC:    csr_rdata = mepc;
        default: csr_rdata = 32'h0;
      endcase
    end else begin
      csr_rdata = 32'h0;
    end

  end

  //Writing data into CSR registers 
  always_ff @(posedge clk) begin
    if (rst) begin
      mie     <= 32'h0;
      mstatus <= 32'h0;
      mcause  <= 32'h0;
      mtvec   <= 32'h0;
      mepc    <= 32'h0;
    end else if (csr_wr_en_MW) begin
      case (Addr)
        MIE:     mie <= csr_wdata;
        MSTATUS: mstatus <= csr_wdata;
        MCAUSE:  mcause <= csr_wdata;
        MTVEC:   mtvec <= csr_wdata;
        MEPC:    mepc <= csr_wdata;
      endcase
    end
  end

  //CSR Unit outputs for timer interrupt 
  always_ff @(posedge clk) begin
    if (mstatus[3] && (mip[7] && mie[7])) begin
      mepc   <= PC_DE;
      evec   <= mtvec;
      epc_taken <= 1;
      mie    <= 0;
      mcause <= cause;
      csr_flush  <= 1'b1;
    end else if (mret_MW) begin
      evec <= mepc;
      epc_taken <= 1;
      mcause <= 0;
      csr_flush <= 1'b0;
    end else begin
      epc_taken <= 0;
      csr_flush <= 1'b0;
    end
  end

  //CSR Unit outputs for external interrupt 
  always_ff @(posedge clk) begin
    if (mstatus[3] && (mip[11] && mie[11])) begin
      mepc   <= PC_DE;
      evec   <= mtvec;
      epc_taken <= 1;
      mie    <= 0;
      mcause <= cause;
      csr_flush  <= 1'b1;
    end else if (mret_MW) begin
      evec <= mepc;
      epc_taken <= 1;
      mcause <= 0;
      csr_flush <= 1'b0;
    end else begin
      epc_taken <= 0;
      csr_flush <= 1'b0;
    end
  end

endmodule
