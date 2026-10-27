`timescale 1ns/1ps
`include "DesignParam.vh"

module tb_PointwiseMul;

    parameter integer DATA_WIDTH = `DATA_WIDTH;
    parameter integer Q_WIDTH    = `Q_WIDTH;
    parameter [Q_WIDTH-1:0] Q     = `Q;
    parameter [Q_WIDTH-1:0] Q_INV = `Q_INV;

    reg                     clk;
    reg                     rst;
    reg  [DATA_WIDTH-1:0]   a1_i;
    reg  [DATA_WIDTH-1:0]   a2_i;
    reg  [DATA_WIDTH-1:0]   b1_i;
    reg  [DATA_WIDTH-1:0]   b2_i;
    reg                     valid_i;

    wire                    valid_o;
    wire [DATA_WIDTH-1:0]   a_o;
    wire [DATA_WIDTH-1:0]   b_o;

    // Instantiate DUT
    PointwiseMul #(
        .DATA_WIDTH(DATA_WIDTH),
        .Q_WIDTH(Q_WIDTH),
        .Q(Q),
        .Q_INV(Q_INV)
    ) dut (
        .clk_i(clk),
        .rst_i(rst),
        .a1_i(a1_i),
        .a2_i(a2_i),
        .b1_i(b1_i),
        .b2_i(b2_i),
        .valid_i(valid_i),
        .valid_o(valid_o),
        .a_o(a_o),
        .b_o(b_o)
    );

    // Clock generation: 100 MHz (10 ns period)
    always #5 clk = ~clk;

    // Storage for 256 CSV coefficients (128 pairs)
    reg [DATA_WIDTH-1:0] a_mont [0:255];
    reg [DATA_WIDTH-1:0] b_mont [0:255];
    reg [DATA_WIDTH-1:0] out_mont[0:255];

    integer fd;
    integer scan_status;
    integer i, k;
    reg [1023:0] header_line;
    integer idx, a_ord, b_ord, a_m, b_m, out_m, out_dec;

    // Scoreboard queue for pipeline checking
    localparam LATENCY = 5;
    reg [DATA_WIDTH-1:0] exp_a_pipe [0:LATENCY-1];
    reg [DATA_WIDTH-1:0] exp_b_pipe [0:LATENCY-1];
    reg                  exp_val_pipe [0:LATENCY-1];
    integer exp_pair_pipe [0:LATENCY-1];

    integer errors = 0;
    integer passed_pairs = 0;
    integer total_pairs = 128;

    initial begin
        clk = 0;
        rst = 1;
        valid_i = 0;
        a1_i = 0;
        a2_i = 0;
        b1_i = 0;
        b2_i = 0;

        for (i = 0; i < LATENCY; i = i + 1) begin
            exp_val_pipe[i] = 1'b0;
            exp_a_pipe[i] = 0;
            exp_b_pipe[i] = 0;
            exp_pair_pipe[i] = -1;
        end

        // Try opening CSV from known locations
        fd = $fopen("../../Algo/pointwise_montgomery_results.csv", "r");
        if (fd == 0) begin
            fd = $fopen("/home/abhay/OpenSource/PQC_ASIC/Algo/pointwise_montgomery_results.csv", "r");
        end
        if (fd == 0) begin
            $display("[ERROR] Could not open pointwise_montgomery_results.csv");
            $finish(1);
        end

        // Read and discard CSV header line
        scan_status = $fgets(header_line, fd);

        // Read 256 data lines
        for (i = 0; i < 256; i = i + 1) begin
            scan_status = $fscanf(fd, "%d,%d,%d,%d,%d,%d,%d\n", idx, a_ord, b_ord, a_m, b_m, out_m, out_dec);
            if (scan_status != 7) begin
                $display("[ERROR] Failed to read row %0d from CSV (scan_status=%0d)", i, scan_status);
                $fclose(fd);
                $finish(1);
            end
            a_mont[i] = a_m[DATA_WIDTH-1:0];
            b_mont[i] = b_m[DATA_WIDTH-1:0];
            out_mont[i] = out_m[DATA_WIDTH-1:0];
        end
        $fclose(fd);
        $display("[INFO] Successfully loaded 256 coefficients (128 pairs) from CSV.");

        // Reset sequence
        #25;
        @(negedge clk);
        rst = 0;
        #10;

        $display("----------------------------------------------------------------------");
        $display(" Starting PointwiseMul Verification: Streaming 128 Pairs (256 Words) ");
        $display("----------------------------------------------------------------------");

        // Stream all 128 pairs
        for (k = 0; k < total_pairs; k = k + 1) begin
            @(negedge clk);
            a1_i = a_mont[2*k];
            a2_i = b_mont[2*k];
            b1_i = a_mont[2*k+1];
            b2_i = b_mont[2*k+1];
            valid_i = 1'b1;

            // Pipeline tracking
            advance_pipe(1'b1, out_mont[2*k], out_mont[2*k+1], k);
        end

        // Idle after stream
        @(negedge clk);
        valid_i = 1'b0;
        a1_i = 0;
        a2_i = 0;
        b1_i = 0;
        b2_i = 0;
        advance_pipe(1'b0, 0, 0, -1);

        // Wait until all outputs emerge from pipeline
        for (k = 0; k < LATENCY + 2; k = k + 1) begin
            @(negedge clk);
            advance_pipe(1'b0, 0, 0, -1);
        end

        // Summary
        $display("----------------------------------------------------------------------");
        $display(" PointwiseMul Verification Summary: Passed Pairs = %0d / %0d, Errors = %0d",
                 passed_pairs, total_pairs, errors);
        $display("----------------------------------------------------------------------");

        if (errors == 0 && passed_pairs == total_pairs) begin
            $display("[TEST PASSED] PointwiseMul matches golden model exactly!");
            $finish(0);
        end else begin
            $display("[TEST FAILED] PointwiseMul mismatch detected!");
            $finish(1);
        end
    end

    // Task to shift scoreboard pipeline and check outputs at posedge clk
    task advance_pipe(
        input reg in_val,
        input reg [DATA_WIDTH-1:0] in_exp_a,
        input reg [DATA_WIDTH-1:0] in_exp_b,
        input integer in_pair_idx
    );
        integer p;
        reg [DATA_WIDTH-1:0] cur_exp_a;
        reg [DATA_WIDTH-1:0] cur_exp_b;
        reg                  cur_exp_val;
        integer              cur_pair_idx;
    begin
        cur_exp_val = exp_val_pipe[LATENCY-1];
        cur_exp_a   = exp_a_pipe[LATENCY-1];
        cur_exp_b   = exp_b_pipe[LATENCY-1];
        cur_pair_idx = exp_pair_pipe[LATENCY-1];

        // Shift pipeline
        for (p = LATENCY-1; p > 0; p = p - 1) begin
            exp_val_pipe[p]  = exp_val_pipe[p-1];
            exp_a_pipe[p]    = exp_a_pipe[p-1];
            exp_b_pipe[p]    = exp_b_pipe[p-1];
            exp_pair_pipe[p] = exp_pair_pipe[p-1];
        end
        exp_val_pipe[0]  = in_val;
        exp_a_pipe[0]    = in_exp_a;
        exp_b_pipe[0]    = in_exp_b;
        exp_pair_pipe[0] = in_pair_idx;

        // Check DUT output
        if (cur_exp_val) begin
            if (!valid_o) begin
                $display("[ERROR @ %0t ns] Expected valid_o=1 for Pair %0d, but got valid_o=0", $time, cur_pair_idx);
                errors = errors + 1;
            end else if ((a_o !== cur_exp_a) || (b_o !== cur_exp_b)) begin
                $display("[ERROR @ %0t ns] Pair %0d Mismatch! Got: (a_o=%0d, b_o=%0d), Expected: (a_o=%0d, b_o=%0d)",
                         $time, cur_pair_idx, a_o, b_o, cur_exp_a, cur_exp_b);
                errors = errors + 1;
            end else begin
                passed_pairs = passed_pairs + 1;
                if (cur_pair_idx < 5 || cur_pair_idx == 127) begin
                    $display("[MATCH @ %0t ns] Pair %0d: got (a_o=%0d, b_o=%0d), expected (a_o=%0d, b_o=%0d)",
                             $time, cur_pair_idx, a_o, b_o, cur_exp_a, cur_exp_b);
                end
            end
        end else begin
            if (valid_o) begin
                $display("[ERROR @ %0t ns] Unexpected valid_o=1 during idle/bubble cycle", $time);
                errors = errors + 1;
            end
        end
    end
    endtask

endmodule
