`include "DesignParam.vh"

module PointwiseMul #(
    parameter integer DATA_WIDTH = `DATA_WIDTH,
    parameter integer Q_WIDTH    = `Q_WIDTH,

    parameter [Q_WIDTH-1:0] Q     = `Q,
    parameter [Q_WIDTH-1:0] Q_INV = `Q_INV
)(
    input  wire                     clk_i,
    input  wire                     rst_i,

    input  wire [DATA_WIDTH-1:0]    a1_i,
    input  wire [DATA_WIDTH-1:0]    a2_i,
    input  wire [DATA_WIDTH-1:0]    b1_i,
    input  wire [DATA_WIDTH-1:0]    b2_i,

    input  wire                     valid_i,

    output reg                      valid_o,
    output reg  [DATA_WIDTH-1:0]    a_o,
    output reg  [DATA_WIDTH-1:0]    b_o
);

    // ========================================================
    // Stage 1: Operand multiplication
    //
    // T = a1 * a2
    // ========================================================

    reg [2*DATA_WIDTH-1:0] prod_a_s1;
    reg [2*DATA_WIDTH-1:0] prod_b_s1;

    reg valid_s1;

    always @(posedge clk_i) begin
        if (rst_i) begin
            prod_a_s1 <= {2*DATA_WIDTH{1'b0}};
            prod_b_s1 <= {2*DATA_WIDTH{1'b0}};
            valid_s1  <= 1'b0;
        end
        else begin
            valid_s1 <= valid_i;

            if (valid_i) begin
                prod_a_s1 <= a1_i * a2_i;
                prod_b_s1 <= b1_i * b2_i;
            end
        end
    end


    // ========================================================
    // Stage 2: Montgomery correction factor
    //
    // m = (T * Q_INV) mod R
    //
    // R = 2^DATA_WIDTH
    // Only the lower DATA_WIDTH bits of T*Q_INV are needed.
    // ========================================================

    reg [2*DATA_WIDTH-1:0] prod_a_s2;
    reg [2*DATA_WIDTH-1:0] prod_b_s2;

    reg [DATA_WIDTH-1:0] m_a_s2;
    reg [DATA_WIDTH-1:0] m_b_s2;

    reg valid_s2;

    always @(posedge clk_i) begin
        if (rst_i) begin
            prod_a_s2 <= {2*DATA_WIDTH{1'b0}};
            prod_b_s2 <= {2*DATA_WIDTH{1'b0}};

            m_a_s2    <= {DATA_WIDTH{1'b0}};
            m_b_s2    <= {DATA_WIDTH{1'b0}};

            valid_s2  <= 1'b0;
        end
        else begin
            valid_s2 <= valid_s1;

            if (valid_s1) begin
                prod_a_s2 <= prod_a_s1;
                prod_b_s2 <= prod_b_s1;

                m_a_s2 <=
                    (prod_a_s1 * Q_INV);

                m_b_s2 <=
                    (prod_b_s1 * Q_INV);
            end
        end
    end


    // ========================================================
    // Stage 3: Correction multiplication
    //
    // C = m * Q
    // ========================================================

    reg [2*DATA_WIDTH-1:0] prod_a_s3;
    reg [2*DATA_WIDTH-1:0] prod_b_s3;

    reg [DATA_WIDTH+Q_WIDTH-1:0] corr_a_s3;
    reg [DATA_WIDTH+Q_WIDTH-1:0] corr_b_s3;

    reg valid_s3;

    always @(posedge clk_i) begin
        if (rst_i) begin
            prod_a_s3 <= {2*DATA_WIDTH{1'b0}};
            prod_b_s3 <= {2*DATA_WIDTH{1'b0}};

            corr_a_s3 <= {(DATA_WIDTH+Q_WIDTH){1'b0}};
            corr_b_s3 <= {(DATA_WIDTH+Q_WIDTH){1'b0}};

            valid_s3  <= 1'b0;
        end
        else begin
            valid_s3 <= valid_s2;

            if (valid_s2) begin
                prod_a_s3 <= prod_a_s2;
                prod_b_s3 <= prod_b_s2;

                corr_a_s3 <= m_a_s2 * Q;
                corr_b_s3 <= m_b_s2 * Q;
            end
        end
    end


    // ========================================================
    // Stage 4: Montgomery addition and division by R
    //
    // U = (T + m*Q) / R
    //
    // R = 2^DATA_WIDTH
    // ========================================================

    reg [2*DATA_WIDTH:0] sum_a_s4;
    reg [2*DATA_WIDTH:0] sum_b_s4;

    reg valid_s4;

    always @(posedge clk_i) begin
        if (rst_i) begin
            sum_a_s4 <= {(2*DATA_WIDTH+1){1'b0}};
            sum_b_s4 <= {(2*DATA_WIDTH+1){1'b0}};

            valid_s4 <= 1'b0;
        end
        else begin
            valid_s4 <= valid_s3;

            if (valid_s3) begin
                sum_a_s4 <=
                    {1'b0, prod_a_s3}
                    + {1'b0, corr_a_s3};

                sum_b_s4 <=
                    {1'b0, prod_b_s3}
                    + {1'b0, corr_b_s3};
            end
        end
    end


    // ========================================================
    // Stage 5: Final modular reduction
    //
    // U = sum >> DATA_WIDTH
    //
    // Remainder is reduced modulo Q.
    // ========================================================

    wire [DATA_WIDTH:0] mont_a_s5;
    wire [DATA_WIDTH:0] mont_b_s5;

    assign mont_a_s5 = sum_a_s4 >> `Q_WIDTH;
    assign mont_b_s5 = sum_b_s4 >> `Q_WIDTH;

    wire [DATA_WIDTH:0] q_extended;

    assign q_extended = {1'b0, Q};

    wire [DATA_WIDTH:0] reduced_a_s5;
    wire [DATA_WIDTH:0] reduced_b_s5;

    assign reduced_a_s5 =
        (mont_a_s5 >= q_extended)
        ? mont_a_s5 - q_extended
        : mont_a_s5;

    assign reduced_b_s5 =
        (mont_b_s5 >= q_extended)
        ? mont_b_s5 - q_extended
        : mont_b_s5;

    reg valid_s5;

    always @(posedge clk_i) begin
        if (rst_i) begin
            a_o     <= {DATA_WIDTH{1'b0}};
            b_o     <= {DATA_WIDTH{1'b0}};
            valid_o <= 1'b0;

            valid_s5 <= 1'b0;
        end
        else begin
            valid_s5 <= valid_s4;
            valid_o  <= valid_s4;

            if (valid_s4) begin
                a_o <= reduced_a_s5[DATA_WIDTH-1:0];
                b_o <= reduced_b_s5[DATA_WIDTH-1:0];
            end
        end
    end

endmodule