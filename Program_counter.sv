module Program_counter (
    input logic [31:0] PC_new,
    input logic rst,
    clk,
    flush,
    output logic [31:0] PC
);

  always_ff @(posedge clk) begin
    if (rst | flush) PC <= 0;
    else PC <= PC_new;
  end

endmodule
