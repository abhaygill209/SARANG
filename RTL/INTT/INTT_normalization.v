`include "DesignParam.vh"

module INTT_normalization (
    input  wire clk,
    input  wire rst,
    input  wire valid_i,
    input  wire stall_i,

    input  wire [`DATA_WIDTH-1:0] a_i,
    input  wire [`DATA_WIDTH-1:0] b_i,

    output wire [`DATA_WIDTH-1:0] a_o,
    output wire [`DATA_WIDTH-1:0] b_o,
    output wire valid_o
);

    // R = 2^Q_WIDTH
    // N_inv = N^(-1) mod Q = 7651
    //
    // Montgomery-form normalization constant:
    // N_inv_mont = N_inv * R mod Q = 256

    localparam [15:0] N_INV_MONT = 16'd256;

    // --------------------------------------------------
    // Stage 1: Multiply by N_INV_MONT
    // --------------------------------------------------

    reg [47:0] mult_s1_a;
    reg [47:0] mult_s1_b;
    reg        valid_s1;

    // --------------------------------------------------
    // Stage 2: Montgomery reduction
    //
    // m = (T * Q_INV) mod R
    // u = (T + m*Q) / R
    //
    // Since Q_INV = -Q^(-1) mod R,
    // u = T * R^(-1) mod Q
    // --------------------------------------------------

    reg [15:0] m_s2_a;
    reg [15:0] m_s2_b;

    reg [47:0] mult_s2_a;
    reg [47:0] mult_s2_b;

    reg        valid_s2;

    wire [31:0] m_product_a;
    wire [31:0] m_product_b;

    wire [47:0] mq_a;
    wire [47:0] mq_b;

    wire [48:0] reduction_a;
    wire [48:0] reduction_b;

    wire [32:0] reduced_a;
    wire [32:0] reduced_b;

    // Compute the low Q_WIDTH bits of T * Q_INV.
    assign m_product_a = mult_s1_a[15:0] * `Q_INV;
    assign m_product_b = mult_s1_b[15:0] * `Q_INV;

    // Keep only the low 16 bits: m = (T * Q_INV) mod R.
    wire [15:0] m_next_a = m_product_a[15:0];
    wire [15:0] m_next_b = m_product_b[15:0];

    // Compute m * Q.
    assign mq_a = m_s2_a * `Q;
    assign mq_b = m_s2_b * `Q;

    // T + m*Q.
    assign reduction_a = {1'b0, mult_s2_a}
                       + {1'b0, mq_a};

    assign reduction_b = {1'b0, mult_s2_b}
                       + {1'b0, mq_b};

    // Divide by R = 2^16.
    assign reduced_a = reduction_a >> `Q_WIDTH;
    assign reduced_b = reduction_b >> `Q_WIDTH;

    // --------------------------------------------------
    // Pipeline registers
    // --------------------------------------------------

    always @(posedge clk) begin

        if (rst) begin

            valid_s1 <= 1'b0;
            valid_s2 <= 1'b0;

            mult_s1_a <= 48'd0;
            mult_s1_b <= 48'd0;

            mult_s2_a <= 48'd0;
            mult_s2_b <= 48'd0;

            m_s2_a <= 16'd0;
            m_s2_b <= 16'd0;

        end else if (stall_i) begin

            // Hold all registers during stall.

        end else begin

            // Stage 1: Multiply inputs by N_INV_MONT.
            valid_s1 <= valid_i;

            if (valid_i) begin
                mult_s1_a <= a_i * N_INV_MONT;
                mult_s1_b <= b_i * N_INV_MONT;
            end

            // Stage 2: Register multiplication results and m.
            valid_s2 <= valid_s1;

            if (valid_s1) begin
                mult_s2_a <= mult_s1_a;
                mult_s2_b <= mult_s1_b;

                m_s2_a <= m_next_a;
                m_s2_b <= m_next_b;
            end

        end

    end

    // --------------------------------------------------
    // Outputs: Correct the Montgomery result modulo Q.
    // --------------------------------------------------

    assign a_o = (reduced_a >= `Q)
               ? reduced_a - `Q
               : reduced_a;

    assign b_o = (reduced_b >= `Q)
               ? reduced_b - `Q
               : reduced_b;

    assign valid_o = valid_s2;

endmodule