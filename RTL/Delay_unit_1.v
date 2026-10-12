
module Delay_Unit #(
    parameter DATA_WIDTH = 16,
    parameter STAGE      = 1,
    parameter DEPTH      = 6,
    parameter N          = 256
)(
    input                       clk_i,
    input                       rst_i,
    input                       valid_i,
    input                       stall_i,

    output reg                  valid_o,

    input      [DATA_WIDTH-1:0] a_i,
    input      [DATA_WIDTH-1:0] b_i,

    output     [DATA_WIDTH-1:0] a_o,
    output     [DATA_WIDTH-1:0] b_o
);

    // --------------------------------------------------
    // FIFO signals
    // --------------------------------------------------

    wire [DATA_WIDTH-1:0] f1_dout, f2_dout;
    wire [DATA_WIDTH-1:0] f3_dout, f4_dout;

    wire f1_empty, f2_empty, f3_empty, f4_empty;
    wire f1_full,  f2_full,  f3_full,  f4_full;

    reg state;
    reg [STAGE:0] counter;

    localparam SWITCH_COUNT = (1 << (STAGE - 1));

    wire write_fifo_1_2 = valid_i && !stall_i && !state && !f1_full;
        
    wire write_fifo_3_4 = valid_i && !stall_i && state  && !f3_full;

    wire input_accept = write_fifo_1_2 || write_fifo_3_4;

    // --------------------------------------------------
    // Output read control
    // --------------------------------------------------
    // Path 1: FIFO 1 + FIFO 3
    // Path 2: FIFO 2 + FIFO 4
    //

    // Read only when both FIFOs in a pair have data.
    wire fifo_1_3_available = !f3_empty;
    wire fifo_2_4_available = !f4_empty;

    // Path 1 has priority.
    wire read_pair1 = !stall_i && fifo_1_3_available;
    wire read_pair2 = !stall_i && !fifo_1_3_available && fifo_2_4_available;

    wire f1_rd_en = read_pair1;
    wire f3_rd_en = read_pair1;

    wire f2_rd_en = read_pair2;
    wire f4_rd_en = read_pair2;

    wire read_enable = read_pair1 || read_pair2;

    // --------------------------------------------------
    // FIFO 1: stores a_i, path 1
    // --------------------------------------------------

    FIFO #(
        .DATA_WIDTH(DATA_WIDTH),
        .DEPTH(DEPTH)
    ) buffer_1 (
        .clk     (clk_i),
        .rst     (rst_i),
        .wr_en   (write_fifo_1_2),
        .din     (a_i),
        .rd_en   (f1_rd_en),
        .dout    (f1_dout),
        .full    (f1_full),
        .empty   (f1_empty)
    );

    // --------------------------------------------------
    // FIFO 2: stores a_i, path 2
    // --------------------------------------------------

    FIFO #(
        .DATA_WIDTH(DATA_WIDTH),
        .DEPTH(DEPTH)
    ) buffer_2 (
        .clk     (clk_i),
        .rst     (rst_i),
        .wr_en   (write_fifo_1_2),
        .din     (b_i),
        .rd_en   (f2_rd_en),
        .dout    (f2_dout),
        .full    (f2_full),
        .empty   (f2_empty)
    );

    // --------------------------------------------------
    // FIFO 3: stores b_i, path 1
    // --------------------------------------------------

    FIFO #(
        .DATA_WIDTH(DATA_WIDTH),
        .DEPTH(DEPTH)
    ) buffer_3 (
        .clk     (clk_i),
        .rst     (rst_i),
        .wr_en   (write_fifo_3_4),
        .din     (a_i),
        .rd_en   (f3_rd_en),
        .dout    (f3_dout),
        .full    (f3_full),
        .empty   (f3_empty)
    );

    // --------------------------------------------------
    // FIFO 4: stores b_i, path 2
    // --------------------------------------------------

    FIFO #(
        .DATA_WIDTH(DATA_WIDTH),
        .DEPTH(DEPTH)
    ) buffer_4 (
        .clk     (clk_i),
        .rst     (rst_i),
        .wr_en   (write_fifo_3_4),
        .din     (b_i),
        .rd_en   (f4_rd_en),
        .dout    (f4_dout),
        .full    (f4_full),
        .empty   (f4_empty)
    );

    // --------------------------------------------------
    // Alternating write-state control
    // --------------------------------------------------

    always @(posedge clk_i) begin
        if (rst_i) begin
            state   <= 1'b0;
            counter <= 0;
        end
        else if (input_accept) begin
            if (counter == SWITCH_COUNT - 1) begin
                counter <= 0;
                state   <= ~state;
            end
            else begin
                counter <= counter + 1'b1;
            end
        end
    end

    // --------------------------------------------------
    // Registered read selection
    // --------------------------------------------------
    // Assumes DU_FIFO updates rd_data on the read
    // clock edge. Register the selected path so the
    // output mux follows the FIFO output latency.

    reg read_pair1_q;

    always @(posedge clk_i) begin
        if (rst_i) begin
            valid_o      <= 1'b0;
            read_pair1_q <= 1'b0;
        end
        else begin
            valid_o <= read_enable;

            if (read_enable)
                read_pair1_q <= read_pair1;
        end
    end

    assign a_o = read_pair1_q ? f1_dout : f2_dout;
    assign b_o = read_pair1_q ? f3_dout : f4_dout;

endmodule
