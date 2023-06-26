module Branch_Reg (
    input logic [31:0] rdata_FA,
    rdata_FB,
    input logic clk,
    rst,
    Stall,
    output logic [31:0] rdata_FA_R,
    rdata_FB_R
);


  always_ff @(posedge clk) begin
    if (rst) begin
      rdata_FA_R <= 32'h0;
      rdata_FB_R <= 32'h0;
    end else if (Stall) begin
      rdata_FA_R <= rdata_FA_R;
      rdata_FB_R <= rdata_FB_R;
    end else begin
      rdata_FA_R <= rdata_FA;
      rdata_FB_R <= rdata_FB;
    end
  end

endmodule
