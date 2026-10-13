module MontgomeryToNormal #(
    parameter DATA_WIDTH = 12,
    parameter Q          = 3329,
    parameter Q_WIDTH    = 16,
    parameter Q_INV      = 3327
)(
    input                           clk,
    input                           rst,
    input                           valid_i,
    input                           stall,

    input      [DATA_WIDTH-1:0]     a_mont,

    output reg                      valid_out,
    output reg [DATA_WIDTH-1:0]     a_normal
);

    // =====================================================
    // Local Parameters
    // =====================================================

    localparam M_PROD_WIDTH = DATA_WIDTH + Q_WIDTH;
    localparam MQ_WIDTH     = Q_WIDTH + DATA_WIDTH;
    localparam T_WIDTH      = MQ_WIDTH + 1;
    localparam TDIV_WIDTH   = T_WIDTH - Q_WIDTH;

    // =====================================================
    // Pipeline Registers
    // =====================================================

    // Stage 1
    reg [DATA_WIDTH-1:0] a_s1;
    reg [Q_WIDTH-1:0]   m_s1;
    reg                  valid_s1;

    // Stage 2
    reg [DATA_WIDTH-1:0] a_s2;
    reg [MQ_WIDTH-1:0]  mq_s2;
    reg                  valid_s2;

    // Stage 3
    reg [TDIV_WIDTH-1:0] t_s3;
    reg                   valid_s3;

    // =====================================================
    // Combinational Logic / Intermediates
    // =====================================================

    // -----------------------------------------------------
    // Stage 1:
    // m = (a_mont * Q_INV) mod R
    // R = 2^Q_WIDTH
    // -----------------------------------------------------

    wire [M_PROD_WIDTH-1:0] m_product =
        a_mont * Q_INV;

    wire [Q_WIDTH-1:0] m_next =
        m_product[Q_WIDTH-1:0];

    // -----------------------------------------------------
    // Stage 2:
    // mq = m * Q
    // -----------------------------------------------------

    wire [MQ_WIDTH-1:0] mq_next =
        m_s1 * Q[DATA_WIDTH-1:0];

    // -----------------------------------------------------
    // Stage 3:
    // t = (a_mont + mq) / R
    //
    // Since R = 2^Q_WIDTH, division by R is a shift.
    // -----------------------------------------------------

    wire [T_WIDTH-1:0] t_sum =
        {{(T_WIDTH-DATA_WIDTH){1'b0}}, a_s2} +
        {{(T_WIDTH-MQ_WIDTH){1'b0}}, mq_s2};

    wire [TDIV_WIDTH-1:0] t_next =
        t_sum[T_WIDTH-1:Q_WIDTH];

    // -----------------------------------------------------
    // Stage 4:
    // a_normal = t mod Q
    // -----------------------------------------------------

    wire [TDIV_WIDTH-1:0] t_sub_q =
        t_s3 - Q[DATA_WIDTH-1:0];

    wire [DATA_WIDTH-1:0] reduced =
        (t_s3 >= Q) ?
        t_sub_q[DATA_WIDTH-1:0] :
        t_s3[DATA_WIDTH-1:0];

    // =====================================================
    // Pipeline
    // =====================================================

    always @(posedge clk) begin

        if (rst) begin

            // Valid signals
            valid_s1  <= 1'b0;
            valid_s2  <= 1'b0;
            valid_s3  <= 1'b0;
            valid_out <= 1'b0;

            // Stage 1 registers
            a_s1 <= {DATA_WIDTH{1'b0}};
            m_s1 <= {Q_WIDTH{1'b0}};

            // Stage 2 registers
            a_s2  <= {DATA_WIDTH{1'b0}};
            mq_s2 <= {MQ_WIDTH{1'b0}};

            // Stage 3 registers
            t_s3 <= {TDIV_WIDTH{1'b0}};

            // Output
            a_normal <= {DATA_WIDTH{1'b0}};

        end

        else if (stall) begin

            // Hold all pipeline registers during a stall.
            // No assignments are required.

        end

        else begin

            // =================================================
            // Stage 1: Calculate Montgomery Parameter
            //
            // m = (a_mont * Q_INV) mod R
            // =================================================

            valid_s1 <= valid_i;

            if (valid_i) begin
                m_s1 <= m_next;
                a_s1 <= a_mont;
            end

            // =================================================
            // Stage 2: Calculate m * Q
            // =================================================

            valid_s2 <= valid_s1;

            if (valid_s1) begin
                mq_s2 <= mq_next;
                a_s2  <= a_s1;
            end

            // =================================================
            // Stage 3: Calculate t
            //
            // t = (a_mont + m*Q) / R
            // =================================================

            valid_s3 <= valid_s2;

            if (valid_s2) begin
                t_s3 <= t_next;
            end

            // =================================================
            // Stage 4: Final Modular Reduction
            //
            // a_normal = t mod Q
            // =================================================

            valid_out <= valid_s3;

            if (valid_s3) begin
                a_normal <= reduced;
            end

        end

    end

endmodule