module ReorderingPairs_Reverse #(
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

    localparam HALF_N    = N / 2;
    localparam CNT_WIDTH = $clog2(N + 1);

    // Store the complete input sequence.
    reg [DATA_WIDTH-1:0] buffer [0:N-1];

    // Number of elements successfully accepted.
    reg [CNT_WIDTH-1:0] elements_received;

    // Number of input transactions accepted.
    reg [CNT_WIDTH-1:0] write_count;

    // Number of output pairs produced.
    reg [CNT_WIDTH-1:0] read_count;

    integer i;

    always @(posedge clk_i) begin

        if (rst_i) begin
            elements_received <= 0;
            write_count       <= 0;
            read_count        <= 0;

            valid_o <= 1'b0;
            a_o     <= 0;
            b_o     <= 0;

            for (i = 0; i < N; i = i + 1)
                buffer[i] <= 0;
        end

        else if (!stall_i) begin

            // Default: no output this cycle.
            valid_o <= 1'b0;

            // ----------------------------------------
            // INPUT BUFFERING
            // ----------------------------------------
            if (valid_i && (write_count < HALF_N)) begin

                buffer[elements_received]     <= a_i;
                buffer[elements_received + 1'b1] <= b_i;

                elements_received <= elements_received + 2;
                write_count       <= write_count + 1'b1;

            end

            // ----------------------------------------
            // OUTPUT GENERATION
            // Independent of valid_i.
            // ----------------------------------------
            if ((read_count < HALF_N) &&
                (elements_received >=
                    (read_count + HALF_N))) begin

                a_o <= buffer[read_count];

                b_o <= buffer[read_count + HALF_N - 1'b1];

                valid_o <= 1'b1;

                read_count <= read_count + 1'b1;

            end

        end

    end

endmodule