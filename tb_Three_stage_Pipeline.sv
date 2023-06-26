module tb_Three_stage_Pipeline;

  logic clk, rst, External_Intrpt;

  Three_stage_Pipeline DUT (
      .clk(clk),
      .rst(rst),
      .External_Intrpt(External_Intrpt)
  );

  initial begin
    clk = 0;
    forever #10 clk = ~clk;
  end

  initial begin
    rst = 1;
    External_Intrpt = 0;
    @(posedge clk);
    rst = 0;
    @(posedge clk);
    @(posedge clk);
    External_Intrpt = 1;
    #30;
    External_Intrpt = 0;
    @(posedge clk);
    repeat (500) @(posedge clk);
    $stop;
  end

endmodule
