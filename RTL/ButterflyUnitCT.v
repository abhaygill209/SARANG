module ButterflyUnitCT #(
    parameter DATA_WIDTH = 12,
    parameter Q          = 3329,
    parameter Q_WIDTH    = 16,
    parameter Q_INV      = 3327
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
    // Local Parameters
    // =====================================================

    localparam MULT_WIDTH = 2 * DATA_WIDTH;
    localparam MQ_WIDTH   = Q_WIDTH + DATA_WIDTH;
    localparam T_WIDTH    = (MULT_WIDTH > MQ_WIDTH ? MULT_WIDTH : MQ_WIDTH) + 1;
    localparam TDIV_WIDTH = T_WIDTH - Q_WIDTH;

    // =====================================================
    // Pipeline Registers
    // =====================================================

    reg [MULT_WIDTH-1:0] mult_s1;
    reg [DATA_WIDTH-1:0] a_s1;
    reg                  valid_s1;

    reg [Q_WIDTH-1:0]    m_s2;
    reg [MULT_WIDTH-1:0] mult_s2;
    reg [DATA_WIDTH-1:0] a_s2;
    reg                  valid_s2;

    reg [TDIV_WIDTH-1:0] t_s3;
    reg [DATA_WIDTH-1:0] a_s3;
    reg                  valid_s3;

    reg [DATA_WIDTH-1:0] bw_s4;
    reg [DATA_WIDTH-1:0] a_s4;
    reg                  valid_s4;

    // =====================================================
    // Combinational Logic / Intermediates
    // =====================================================

    wire [Q_WIDTH-1:0]    m_next    = mult_s1[Q_WIDTH-1:0] * Q_INV[Q_WIDTH-1:0];

    wire [MQ_WIDTH-1:0]   mq        = m_s2 * Q[DATA_WIDTH-1:0];
    wire [T_WIDTH-1:0]    t_next    = {{(T_WIDTH-MULT_WIDTH){1'b0}}, mult_s2} +
                                      {{(T_WIDTH-MQ_WIDTH){1'b0}}, mq};

    wire [TDIV_WIDTH-1:0] t_sub_q   = t_s3 - {{(TDIV_WIDTH-DATA_WIDTH){1'b0}}, Q[DATA_WIDTH-1:0]};
    wire [DATA_WIDTH-1:0] bw_next   = (t_s3 >= {{(TDIV_WIDTH-DATA_WIDTH){1'b0}}, Q[DATA_WIDTH-1:0]}) ?
                                      t_sub_q[DATA_WIDTH-1:0] :
                                      t_s3[DATA_WIDTH-1:0];

    wire [DATA_WIDTH:0]   add_temp  = {1'b0, a_s4} + {1'b0, bw_s4};
    wire [DATA_WIDTH:0]   add_sub_q = add_temp - {1'b0, Q[DATA_WIDTH-1:0]};
    wire [DATA_WIDTH:0]   sub_temp  = ({1'b0, a_s4} + {1'b0, Q[DATA_WIDTH-1:0]}) - {1'b0, bw_s4};

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
            m_s2    <= {Q_WIDTH{1'b0}};
            t_s3    <= {TDIV_WIDTH{1'b0}};

            a_s1 <= {DATA_WIDTH{1'b0}};
            a_s2 <= {DATA_WIDTH{1'b0}};
            a_s3 <= {DATA_WIDTH{1'b0}};
            a_s4 <= {DATA_WIDTH{1'b0}};

            bw_s4 <= {DATA_WIDTH{1'b0}};

            a_o <= {DATA_WIDTH{1'b0}};
            b_o <= {DATA_WIDTH{1'b0}};

        end
        else if (stall) begin
            valid_out <= valid_out;
        end
        else begin

            // =================================================
            // Stage 1: Multiply
            // =================================================

            valid_s1 <= valid_i;

            if (valid_i) begin
                mult_s1 <= b_i * w;
                a_s1    <= a_i;
            end

            // =================================================
            // Stage 2: m = (T * qinv) mod R
            // =================================================

            valid_s2 <= valid_s1;

            if (valid_s1) begin
                m_s2    <= m_next;
                mult_s2 <= mult_s1;
                a_s2    <= a_s1;
            end

            // =================================================
            // Stage 3: t = (T + m*q) / R
            // =================================================

            valid_s3 <= valid_s2;

            if (valid_s2) begin
                t_s3 <= t_next[T_WIDTH-1:Q_WIDTH];
                a_s3 <= a_s2;
            end

            // =================================================
            // Stage 4: bw = reduction mod Q
            // =================================================

            valid_s4 <= valid_s3;

            if (valid_s3) begin
                bw_s4 <= bw_next;
                a_s4  <= a_s3;
            end

            // =================================================
            // Output Butterfly
            // =================================================

            valid_out <= valid_s4;

            if (valid_s4) begin

                // A' = A + BW mod Q
                if (add_temp >= {1'b0, Q[DATA_WIDTH-1:0]})
                    a_o <= add_sub_q[DATA_WIDTH-1:0];
                else
                    a_o <= add_temp[DATA_WIDTH-1:0];

                // B' = A - BW mod Q
                if (a_s4 >= bw_s4)
                    b_o <= a_s4 - bw_s4;
                else
                    b_o <= sub_temp[DATA_WIDTH-1:0];

            end

        end

    end

endmodule
