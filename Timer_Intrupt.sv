module Timer_Intrupt (
    output logic Timer_Intrpt,
    input  logic clk,
    rst
);

  logic [2:0] counter;

  always_ff @(posedge clk) begin
    if (rst) begin
      counter = 3'b0;
    end else begin
      counter = counter + 1;
    end
    if (counter == 3'h7) begin
      Timer_Intrpt = 1'b1;
      counter = 3'b0;
    end else begin
      Timer_Intrpt = 1'b0;
    end
  end

endmodule
