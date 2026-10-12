module PairReorder #(
    parameter DATA_WIDTH = 32,
    parameter N          = 256
)(
    input                       clk_i,
    input                       rst_i,
    input                       valid_i,
    input                       stall_i,

    input      [DATA_WIDTH-1:0] a_i,
    input      [DATA_WIDTH-1:0] b_i,

    output reg                  valid_o,
    output reg [DATA_WIDTH-1:0] a_o,
    output reg [DATA_WIDTH-1:0] b_o
);

    // ------------------------------------------------
    // Parameters
    // ------------------------------------------------
    localparam HALF_N       = N / 2;
    localparam PAIRS_PER_STREAM = HALF_N / 2;

    localparam CNT_WIDTH =
        $clog2(HALF_N + 1);

    localparam PAIR_CNT_WIDTH =
        $clog2(PAIRS_PER_STREAM + 1);

    // ------------------------------------------------
    // Optimized storage
    // ------------------------------------------------

    // Store only the second input stream.
    reg [DATA_WIDTH-1:0] buffer_b [0:HALF_N-1];

    // One register is sufficient to retain the first
    // element of an incoming a-stream pair.
    reg [DATA_WIDTH-1:0] a_pending;

    // ------------------------------------------------
    // Counters
    // ------------------------------------------------

    // Number of accepted input transactions.
    reg [CNT_WIDTH-1:0] write_count;

    // Number of output pairs produced from a_i.
    reg [PAIR_CNT_WIDTH-1:0] a_pairs_sent;

    // Number of output pairs produced from buffer_b.
    reg [PAIR_CNT_WIDTH-1:0] b_pairs_sent;

    // ------------------------------------------------
    // Sequential logic
    // ------------------------------------------------
    always @(posedge clk_i) begin

        if (rst_i) begin

            write_count <= 0;
            a_pairs_sent <= 0;
            b_pairs_sent <= 0;

            a_pending <= 0;

            valid_o <= 1'b0;
            a_o     <= 0;
            b_o     <= 0;

        end
        else if (!stall_i) begin

            // Default: no output unless a complete pair
            // is generated during this clock cycle.
            valid_o <= 1'b0;

            // ========================================
            // PHASE 1: ACCEPT INPUT DATA
            // ========================================
            if (valid_i && (write_count < HALF_N)) begin

                // Store the second stream.
                buffer_b[write_count] <= b_i;

                // Even input index: save the first element.
                if (write_count[0] == 1'b0) begin

                    a_pending <= a_i;

                end

                // Odd input index: complete the pair.
                else begin

                    a_o <= a_pending;
                    b_o <= a_i;

                    valid_o <= 1'b1;

                    a_pairs_sent <= a_pairs_sent + 1'b1;

                end

                write_count <= write_count + 1'b1;

            end

            // ========================================
            // PHASE 2: DRAIN THE STORED SECOND STREAM
            // ========================================
            // Independent of valid_i.
            //
            // Wait until all input transactions have
            // arrived and all a-stream pairs are sent.
            // ========================================
            else if (
                (write_count == HALF_N) &&
                (a_pairs_sent == PAIRS_PER_STREAM) &&
                (b_pairs_sent < PAIRS_PER_STREAM)
            ) begin

                a_o <= buffer_b[2 * b_pairs_sent];

                b_o <= buffer_b[(2 * b_pairs_sent) + 1'b1];

                valid_o <= 1'b1;

                b_pairs_sent <= b_pairs_sent + 1'b1;

            end

        end

    end

endmodule