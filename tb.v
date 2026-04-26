`timescale 1ns/1ps

module tb;

reg  [3:0] a;
reg  [3:0] b;
wire gt;
wire lt;
wire eq;

comparator dut (
    .a(a),
    .b(b),
    .gt(gt),
    .lt(lt),
    .eq(eq)
);

initial begin
    $dumpfile("comparator.vcd");
    $dumpvars(0, tb);

    a = 4'd8; b = 4'd3; #10;
    a = 4'd2; b = 4'd7; #10;
    a = 4'd5; b = 4'd5; #10;
    a = 4'd0; b = 4'd1; #10;
    a = 4'd9; b = 4'd4; #10;

    $finish;
end

initial begin
    $monitor("time=%0t a=%0d b=%0d gt=%b lt=%b eq=%b",
              $time, a, b, gt, lt, eq);
end

endmodule
