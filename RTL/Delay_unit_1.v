module Delay_Unit #(
    parameter DATA_WIDTH = 16,
    parameter STAGE      = 1,
    parameter DEPTH      = 64,
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
    // Parameters
    // --------------------------------------------------

    // Number of output pairs in each burst.
    localparam OUTPUT_BURST = (1 << (STAGE - 1));

    // FIFO occupancy counter width.
    localparam COUNT_WIDTH = $clog2(DEPTH + 1);

    // --------------------------------------------------
    // FIFO signals
    // --------------------------------------------------

    wire [DATA_WIDTH-1:0] f1_dout, f2_dout;
    wire [DATA_WIDTH-1:0] f3_dout, f4_dout;

    wire f1_empty, f2_empty, f3_empty, f4_empty;
    wire f1_full,  f2_full,  f3_full,  f4_full;

    // --------------------------------------------------
    // Input write control
    // --------------------------------------------------

    reg state;
    reg [STAGE:0] counter;

    localparam SWITCH_COUNT = (1 << (STAGE - 1));

    // Pair 1: FIFO 1 and FIFO 2.
    // Pair 2: FIFO 3 and FIFO 4.
    //
    // Both FIFOs in a pair must have space before writing.

    wire write_fifo_1_2 =
        valid_i && !stall_i && !state &&
        !f1_full && !f2_full;

    wire write_fifo_3_4 =
        valid_i && !stall_i && state &&
        !f3_full && !f4_full;

    wire input_accept = write_fifo_1_2 || write_fifo_3_4;

    // --------------------------------------------------
    // FIFO instantiations
    // --------------------------------------------------

    // FIFO 1: Stores a_i during the first write phase.

    FIFO #(
        .DATA_WIDTH(DATA_WIDTH),
        .DEPTH(DEPTH)
    ) buffer_1 (
        .clk   (clk_i),
        .rst   (rst_i),
        .wr_en (write_fifo_1_2),
        .din   (a_i),
        .rd_en (f1_rd_en),
        .dout  (f1_dout),
        .full  (f1_full),
        .empty (f1_empty)
    );

    // FIFO 2: Stores b_i during the first write phase.

    FIFO #(
        .DATA_WIDTH(DATA_WIDTH),
        .DEPTH(DEPTH)
    ) buffer_2 (
        .clk   (clk_i),
        .rst   (rst_i),
        .wr_en (write_fifo_1_2),
        .din   (b_i),
        .rd_en (f2_rd_en),
        .dout  (f2_dout),
        .full  (f2_full),
        .empty (f2_empty)
    );

    // FIFO 3: Stores a_i during the second write phase.

    FIFO #(
        .DATA_WIDTH(DATA_WIDTH),
        .DEPTH(DEPTH)
    ) buffer_3 (
        .clk   (clk_i),
        .rst   (rst_i),
        .wr_en (write_fifo_3_4),
        .din   (a_i),
        .rd_en (f3_rd_en),
        .dout  (f3_dout),
        .full  (f3_full),
        .empty (f3_empty)
    );

    // FIFO 4: Stores b_i during the second write phase.

    FIFO #(
        .DATA_WIDTH(DATA_WIDTH),
        .DEPTH(DEPTH)
    ) buffer_4 (
        .clk   (clk_i),
        .rst   (rst_i),
        .wr_en (write_fifo_3_4),
        .din   (b_i),
        .rd_en (f4_rd_en),
        .dout  (f4_dout),
        .full  (f4_full),
        .empty (f4_empty)
    );

    // --------------------------------------------------
    // Write-state control
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
    // Output burst control
    // --------------------------------------------------

    // output_state:
    //   0 -> Read FIFO 1 and FIFO 3.
    //   1 -> Read FIFO 2 and FIFO 4.
    //
    // burst_active:
    //   0 -> Wait until a complete burst is buffered.
    //   1 -> Continue reading the current burst.
    //
    // output_counter:
    //   Counts successful reads within the current burst.

    reg output_state;
    reg burst_active;

    reg [COUNT_WIDTH-1:0] fifo_pair1_count;
    reg [COUNT_WIDTH-1:0] fifo_pair2_count;

    reg [COUNT_WIDTH-1:0] output_counter;

    // --------------------------------------------------
    // FIFO pair availability
    // --------------------------------------------------

    wire fifo_pair1_has_data =
        !f1_empty && !f3_empty;

    wire fifo_pair2_has_data =
        !f2_empty && !f4_empty;

    // Start a burst only when the selected pair contains
    // OUTPUT_BURST complete data pairs.
    //
    // Once a burst starts, continue until it is complete.
    // Since the entire burst was buffered beforehand, the
    // data needed for that burst is already available.

    wire pair1_ready =
        burst_active
        ? (fifo_pair1_count != 0 && fifo_pair1_has_data)
        : (fifo_pair1_count >= OUTPUT_BURST &&
           fifo_pair1_has_data);

    wire pair2_ready =
        burst_active
        ? (fifo_pair2_count != 0 && fifo_pair2_has_data)
        : (fifo_pair2_count >= OUTPUT_BURST &&
           fifo_pair2_has_data);

    // --------------------------------------------------
    // Read control
    // --------------------------------------------------

    wire read_pair1 =
        !stall_i &&
        !output_state &&
        pair1_ready;

    wire read_pair2 =
        !stall_i &&
        output_state &&
        pair2_ready;

    wire f1_rd_en = read_pair1;
    wire f3_rd_en = read_pair1;

    wire f2_rd_en = read_pair2;
    wire f4_rd_en = read_pair2;

    wire read_enable = read_pair1 || read_pair2;

    // --------------------------------------------------
    // FIFO occupancy tracking
    // --------------------------------------------------

    // Count accepted writes and successful reads for each
    // FIFO pair.
    //
    // Simultaneous write and read leaves the occupancy
    // unchanged.

    always @(posedge clk_i) begin
        if (rst_i) begin
            fifo_pair1_count <= 0;
            fifo_pair2_count <= 0;
        end
        else begin

            // ------------------------------------------
            // FIFO 1 + FIFO 3 occupancy
            // ------------------------------------------

            case ({write_fifo_1_2, read_pair1})

                2'b10: begin
                    fifo_pair1_count <= fifo_pair1_count + 1'b1;
                end

                2'b01: begin
                    fifo_pair1_count <= fifo_pair1_count - 1'b1;
                end

                default: begin
                    fifo_pair1_count <= fifo_pair1_count;
                end

            endcase

            // ------------------------------------------
            // FIFO 2 + FIFO 4 occupancy
            // ------------------------------------------

            case ({write_fifo_3_4, read_pair2})

                2'b10: begin
                    fifo_pair2_count <= fifo_pair2_count + 1'b1;
                end

                2'b01: begin
                    fifo_pair2_count <= fifo_pair2_count - 1'b1;
                end

                default: begin
                    fifo_pair2_count <= fifo_pair2_count;
                end

            endcase

        end
    end

    // --------------------------------------------------
    // Burst counter and pair switching
    // --------------------------------------------------

    always @(posedge clk_i) begin
        if (rst_i) begin
            output_state   <= 1'b0;
            burst_active   <= 1'b0;
            output_counter <= 0;
        end
        else if (read_enable) begin

            // The current read completes the burst.
            if (output_counter == OUTPUT_BURST - 1) begin

                output_counter <= 0;

                // End the current burst.
                burst_active <= 1'b0;

                // Switch to the other FIFO pair.
                output_state <= ~output_state;

            end
            else begin

                // Continue the current burst.
                output_counter <= output_counter + 1'b1;

                burst_active <= 1'b1;

            end

        end
    end

    // --------------------------------------------------
    // Registered output selection
    // --------------------------------------------------

    // Register the pair selected for the current read.
    // This assumes the FIFO output data is updated on
    // the read clock edge.

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

    // --------------------------------------------------
    // Output multiplexers
    // --------------------------------------------------

    assign a_o = read_pair1_q ? f1_dout : f2_dout;
    assign b_o = read_pair1_q ? f3_dout : f4_dout;

endmodule