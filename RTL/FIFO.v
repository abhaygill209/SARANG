
module FIFO #(
    parameter DATA_WIDTH = 32,
    parameter DEPTH      = 256
)(
    input                       clk,
    input                       rst,       // Synchronous, active-high reset

    input                       wr_en,
    input      [DATA_WIDTH-1:0] din,

    input                       rd_en,
    output reg [DATA_WIDTH-1:0] dout,

    output                      full,
    output                      empty
);

    // Calculate pointer width and counter width
    localparam PTR_WIDTH = (DEPTH <= 1) ? 1 : $clog2(DEPTH);
    localparam CNT_WIDTH = $clog2(DEPTH + 1);

    // FIFO storage
    reg [DATA_WIDTH-1:0] mem [0:DEPTH-1];

    // Read and write pointers
    reg [PTR_WIDTH-1:0] wr_ptr;
    reg [PTR_WIDTH-1:0] rd_ptr;

    // Number of elements currently stored
    reg [CNT_WIDTH-1:0] count;

    // Status flags
    assign full  = (count == DEPTH);
    assign empty = (count == 0);

    // FIFO operation
    always @(posedge clk) begin
        if (rst) begin
            wr_ptr <= 0;
            rd_ptr <= 0;
            count  <= 0;
            dout   <= 0;
        end
        else begin

            // Write operation
            if (wr_en && !full) begin
                mem[wr_ptr] <= din;

                if (wr_ptr == DEPTH - 1)
                    wr_ptr <= 0;
                else
                    wr_ptr <= wr_ptr + 1'b1;
            end

            // Read operation
            if (rd_en && !empty) begin
                dout <= mem[rd_ptr];

                if (rd_ptr == DEPTH - 1)
                    rd_ptr <= 0;
                else
                    rd_ptr <= rd_ptr + 1'b1;
            end

            // Update element count
            case ({wr_en && !full, rd_en && !empty})
                2'b10: count <= count + 1'b1;
                2'b01: count <= count - 1'b1;
                default: count <= count;
            endcase
        end
    end

endmodule
