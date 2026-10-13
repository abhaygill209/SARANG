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
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars(0, NTT_engine_axis_wrapper);
    end

    // Active high reset for INTT_engine
    wire rst;
    assign rst = ~aresetn;

    // If m_axis_tready is low, we must stall the internal INTT pipeline.
    wire stall_i;
    assign stall_i = ~m_axis_tready;

    // We can accept data when not stalled
    assign s_axis_tready = ~stall_i; 

    // Data width mapping (from DesignParam.vh: DATA_WIDTH = 32)
    localparam DATA_WIDTH = 32; 

    wire [DATA_WIDTH-1:0] a_i;
    wire [DATA_WIDTH-1:0] b_i;
    wire [DATA_WIDTH-1:0] a_o;
    wire [DATA_WIDTH-1:0] b_o;

    // Split 64-bit input into two 32-bit operands
    assign a_i = s_axis_tdata[DATA_WIDTH-1:0];
    assign b_i = s_axis_tdata[2*DATA_WIDTH-1:DATA_WIDTH];

    // Combine two 32-bit outputs into 64-bit output
    assign m_axis_tdata = {b_o, a_o};

    // Instantiate the INTT engine
    NTT_engine ntt_inst (
        .clk(clk),
        .rst(rst),
        .valid_i(s_axis_tvalid),
        .stall_i(stall_i),
        .a_i(a_i),
        .b_i(b_i),
        .a_o(a_o),
        .b_o(b_o),
        .valid_o(m_axis_tvalid)
    );

    // tlast generation for output
    // INTT takes N/2 pairs per polynomial. For N=256, N/2 = 128.
    reg [7:0] out_cnt;
    always @(posedge clk) begin
        if (rst) begin
            out_cnt <= 8'd0;
        end else if (m_axis_tvalid && m_axis_tready) begin
            if (out_cnt == 8'd127)
                out_cnt <= 8'd0;
            else
                out_cnt <= out_cnt + 1;
        end
    end

    // Assert tlast on the 128th valid output of a block
    assign m_axis_tlast = (out_cnt == 8'd127) && m_axis_tvalid;

endmodule
