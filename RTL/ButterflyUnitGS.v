module ButterflyUnitGS #(
    parameter DATA_WIDTH = 13,
    parameter Q          = 7681,
    parameter Q_WIDTH    = 16,
    parameter Q_INV      = 7679
)(
    input                           clk,
    input                           rst,
    input                           valid_i,
    input                           stall,

    input      [DATA_WIDTH-1:0]     a_i,
    input      [DATA_WIDTH-1:0]     b_i,
    input      [DATA_WIDTH-1:0]     w,

    output reg                      valid_out,
    output reg [DATA_WIDTH-1:0]     a_o,
    output reg [DATA_WIDTH-1:0]     b_o
);

    // =====================================================
    // Parameters
    // =====================================================

    localparam MULT_WIDTH = 2 * DATA_WIDTH;
    localparam MQ_WIDTH   = Q_WIDTH + DATA_WIDTH;
    localparam T_WIDTH    =
        ((MULT_WIDTH > MQ_WIDTH) ? MULT_WIDTH : MQ_WIDTH) + 1;
    localparam TDIV_WIDTH = T_WIDTH - Q_WIDTH;

    // =====================================================
    // Pipeline Registers
    // =====================================================

    reg [MULT_WIDTH-1:0] mult_s1;
    reg [DATA_WIDTH-1:0] sum_s1;
    reg                  valid_s1;

    reg [Q_WIDTH-1:0]    m_s2;
    reg [MULT_WIDTH-1:0] mult_s2;
    reg [DATA_WIDTH-1:0] sum_s2;
    reg                  valid_s2;

    reg [TDIV_WIDTH-1:0] t_s3;
    reg [DATA_WIDTH-1:0] sum_s3;
    reg                  valid_s3;

    reg [DATA_WIDTH-1:0] bw_s4;
    reg [DATA_WIDTH-1:0] sum_s4;
    reg                  valid_s4;

    // =====================================================
    // Stage 1: DIF Butterfly
    // =====================================================

    // SUM = (A + B) mod Q

    wire [DATA_WIDTH:0] sum_temp =
        {1'b0, a_i} + {1'b0, b_i};

    wire [DATA_WIDTH:0] sum_sub_q =
        sum_temp - {1'b0, Q[DATA_WIDTH-1:0]};

    wire [DATA_WIDTH-1:0] sum_next =
        (sum_temp >= {1'b0, Q[DATA_WIDTH-1:0]})
        ? sum_sub_q[DATA_WIDTH-1:0]
        : sum_temp[DATA_WIDTH-1:0];

    // DIFF = (A - B) mod Q

    wire [DATA_WIDTH:0] diff_temp =
        (a_i >= b_i)
        ? ({1'b0, a_i} - {1'b0, b_i})
        : ({1'b0, a_i}
           + {1'b0, Q[DATA_WIDTH-1:0]}
           - {1'b0, b_i});

    wire [DATA_WIDTH-1:0] diff_next =
        diff_temp[DATA_WIDTH-1:0];

    // -----------------------------------------------------
    // Explicitly extend both operands before multiplication.
    // The full product is preserved in MULT_WIDTH bits.
    // -----------------------------------------------------

    wire [MULT_WIDTH-1:0] diff_ext =
        {{DATA_WIDTH{1'b0}}, diff_next};

    wire [MULT_WIDTH-1:0] w_ext =
        {{DATA_WIDTH{1'b0}}, w};

    wire [MULT_WIDTH-1:0] mult_next =
        diff_ext * w_ext;

    // =====================================================
    // Stage 2: Montgomery Parameter
    //
    // m = (T * Q_INV) mod R
    // =====================================================

    wire [Q_WIDTH-1:0] m_next =
        mult_s1[Q_WIDTH-1:0] * Q_INV;

    // =====================================================
    // Stage 3: Montgomery Reduction
    //
    // t = (T + m*Q) / R
    // =====================================================

    wire [MQ_WIDTH-1:0] mq =
        m_s2 * Q[DATA_WIDTH-1:0];

    wire [T_WIDTH-1:0] t_next =
        {{(T_WIDTH-MULT_WIDTH){1'b0}}, mult_s2}
        +
        {{(T_WIDTH-MQ_WIDTH){1'b0}}, mq};

    wire [TDIV_WIDTH-1:0] t_div =
        t_next[T_WIDTH-1:Q_WIDTH];

    // =====================================================
    // Stage 4: Final Montgomery Reduction
    // =====================================================

    wire [TDIV_WIDTH-1:0] t_sub_q =
        t_s3 - Q;

    wire [DATA_WIDTH-1:0] bw_next =
        (t_s3 >= Q)
        ? t_sub_q[DATA_WIDTH-1:0]
        : t_s3[DATA_WIDTH-1:0];

    // =====================================================
    // Pipeline
    // =====================================================

    always @(posedge clk) begin

        if (rst) begin

            valid_s1  <= 1'b0;
            valid_s2  <= 1'b0;
            valid_s3  <= 1'b0;
            valid_s4  <= 1'b0;
            valid_out <= 1'b0;

            mult_s1 <= {MULT_WIDTH{1'b0}};
            mult_s2 <= {MULT_WIDTH{1'b0}};

            m_s2 <= {Q_WIDTH{1'b0}};

            t_s3 <= {TDIV_WIDTH{1'b0}};

            sum_s1 <= {DATA_WIDTH{1'b0}};
            sum_s2 <= {DATA_WIDTH{1'b0}};
            sum_s3 <= {DATA_WIDTH{1'b0}};
            sum_s4 <= {DATA_WIDTH{1'b0}};

            bw_s4 <= {DATA_WIDTH{1'b0}};

            a_o <= {DATA_WIDTH{1'b0}};
            b_o <= {DATA_WIDTH{1'b0}};

        end

        else if (stall) begin

            // Hold all pipeline registers.

        end

        else begin

            // ---------------------------------------------
            // Stage 1: Sum, Difference and Multiplication
            // ---------------------------------------------

            valid_s1 <= valid_i;

            if (valid_i) begin
                mult_s1 <= mult_next;
                sum_s1  <= sum_next;
            end

            // ---------------------------------------------
            // Stage 2: Montgomery Parameter
            // ---------------------------------------------

            valid_s2 <= valid_s1;

            if (valid_s1) begin
                m_s2    <= m_next;
                mult_s2 <= mult_s1;
                sum_s2  <= sum_s1;
            end

            // ---------------------------------------------
            // Stage 3: Montgomery Reduction
            // ---------------------------------------------

            valid_s3 <= valid_s2;

            if (valid_s2) begin
                t_s3   <= t_div;
                sum_s3 <= sum_s2;
            end

            // ---------------------------------------------
            // Stage 4: Final Modular Reduction
            // ---------------------------------------------

            valid_s4 <= valid_s3;

            if (valid_s3) begin
                bw_s4  <= bw_next;
                sum_s4 <= sum_s3;
            end

            // ---------------------------------------------
            // Stage 5: Outputs
            // ---------------------------------------------

            valid_out <= valid_s4;

            if (valid_s4) begin
                a_o <= sum_s4;
                b_o <= bw_s4;
            end

        end

    end

endmodule