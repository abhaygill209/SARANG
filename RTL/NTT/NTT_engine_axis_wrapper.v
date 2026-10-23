`timescale 1ns / 1ps

module NTT_engine_axis_wrapper #(
    parameter C_AXIS_TDATA_WIDTH = 64
) (
    input  wire clk,
    input  wire aresetn,

    // AXI STREAM INPUT
    input  wire [C_AXIS_TDATA_WIDTH-1:0] s_axis_tdata,
    input  wire s_axis_tvalid,
    output wire s_axis_tready,
    input  wire s_axis_tlast,

    // AXI STREAM OUTPUT
    output wire [C_AXIS_TDATA_WIDTH-1:0] m_axis_tdata,
    output wire m_axis_tvalid,
    input  wire m_axis_tready,
    output wire m_axis_tlast
);

`ifdef SIMULATION
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars(0, NTT_engine_axis_wrapper);
    end
`endif

    // Synchronous reset generation from active-low aresetn
    reg rst_sync_0, rst_sync_1;
    always @(posedge clk or negedge aresetn) begin
        if (!aresetn) begin
            rst_sync_0 <= 1'b1;
            rst_sync_1 <= 1'b1;
        end else begin
            rst_sync_0 <= 1'b0;
            rst_sync_1 <= rst_sync_0;
        end
    end
    wire rst = rst_sync_1;

    // Data width mapping (DATA_WIDTH = 32)
    localparam DATA_WIDTH = 32;

    wire [DATA_WIDTH-1:0] a_i;
    wire [DATA_WIDTH-1:0] b_i;
    wire [DATA_WIDTH-1:0] a_o;
    wire [DATA_WIDTH-1:0] b_o;
    wire core_valid_o;

    // Split 64-bit input into two 32-bit operands
    assign a_i = s_axis_tdata[DATA_WIDTH-1:0];
    assign b_i = s_axis_tdata[2*DATA_WIDTH-1:DATA_WIDTH];

    // Flow control & Occupancy Tracking
    // Track total words currently in flight (in NTT pipeline + in output FIFO)
    // Capacity = 512 words. Safe headroom = 130 words (1 full 128-word block + 2 margin).
    localparam FIFO_DEPTH = 512;
    localparam SAFE_THRESHOLD = FIFO_DEPTH - 130;

    reg [9:0] total_words_in_system;
    wire in_handshake  = s_axis_tvalid && s_axis_tready;
    wire out_handshake = m_axis_tvalid && m_axis_tready;

    always @(posedge clk) begin
        if (rst) begin
            total_words_in_system <= 10'd0;
        end else begin
            case ({in_handshake, out_handshake})
                2'b10: total_words_in_system <= total_words_in_system + 1'b1;
                2'b01: total_words_in_system <= total_words_in_system - 1'b1;
                default: ; // unchanged
            endcase
        end
    end

    // Input ready: asserted whenever the system has capacity for another full polynomial block
    assign s_axis_tready = (total_words_in_system <= SAFE_THRESHOLD);

    // Frame tracking for input s_axis_tlast (diagnostic / frame alignment)
    reg [6:0] in_word_cnt;
    always @(posedge clk) begin
        if (rst) begin
            in_word_cnt <= 7'd0;
        end else if (in_handshake) begin
            if (s_axis_tlast || (in_word_cnt == 7'd127))
                in_word_cnt <= 7'd0;
            else
                in_word_cnt <= in_word_cnt + 1'b1;
        end
    end

    // Instantiate the NTT engine core
    // stall_i is tied to 0 so core pipeline never drops valid beats internally
    NTT_engine ntt_inst (
        .clk(clk),
        .rst(rst),
        .valid_i(in_handshake),
        .stall_i(1'b0),
        .a_i(a_i),
        .b_i(b_i),
        .a_o(a_o),
        .b_o(b_o),
        .valid_o(core_valid_o)
    );

    // Track 128-word polynomial output block from core to generate tlast
    reg [6:0] core_out_cnt;
    always @(posedge clk) begin
        if (rst) begin
            core_out_cnt <= 7'd0;
        end else if (core_valid_o) begin
            if (core_out_cnt == 7'd127)
                core_out_cnt <= 7'd0;
            else
                core_out_cnt <= core_out_cnt + 1'b1;
        end
    end
    wire core_tlast = (core_out_cnt == 7'd127);

    // -------------------------------------------------------------
    // AXI-Stream Output FIFO (First-Word Fall-Through)
    // Buffers {core_tlast, b_o, a_o} (65 bits wide, 512 entries deep)
    // Guarantees compliant AXI handshaking & eliminates backpressure stalls
    // -------------------------------------------------------------
    reg [64:0] fifo_mem [0:FIFO_DEPTH-1];
    reg [8:0]  fifo_wr_ptr;
    reg [8:0]  fifo_rd_ptr;
    reg [9:0]  fifo_count;

    wire fifo_empty = (fifo_count == 10'd0);
    wire fifo_full  = (fifo_count == FIFO_DEPTH);

    // FIFO Write & Read logic
    always @(posedge clk) begin
        if (rst) begin
            fifo_wr_ptr <= 9'd0;
            fifo_rd_ptr <= 9'd0;
            fifo_count  <= 10'd0;
        end else begin
            case ({core_valid_o && !fifo_full, out_handshake})
                2'b10: begin
                    fifo_mem[fifo_wr_ptr] <= {core_tlast, b_o, a_o};
                    fifo_wr_ptr           <= fifo_wr_ptr + 1'b1;
                    fifo_count            <= fifo_count + 1'b1;
                end
                2'b01: begin
                    fifo_rd_ptr           <= fifo_rd_ptr + 1'b1;
                    fifo_count            <= fifo_count - 1'b1;
                end
                2'b11: begin
                    fifo_mem[fifo_wr_ptr] <= {core_tlast, b_o, a_o};
                    fifo_wr_ptr           <= fifo_wr_ptr + 1'b1;
                    fifo_rd_ptr           <= fifo_rd_ptr + 1'b1;
                end
                default: ; // unchanged
            endcase
        end
    end

    // FWFT Output data path
    wire [64:0] fifo_dout = fifo_mem[fifo_rd_ptr];

    // AXI4-Stream Master Outputs
    assign m_axis_tvalid = !fifo_empty;
    assign m_axis_tdata  = fifo_dout[63:0];
    assign m_axis_tlast  = fifo_dout[64] && m_axis_tvalid;

endmodule
