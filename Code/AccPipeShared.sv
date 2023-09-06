// Generated by CIRCT unknown git version
// Standard header to adapt well known macros to our needs.
`ifndef RANDOMIZE
  `ifdef RANDOMIZE_REG_INIT
    `define RANDOMIZE
  `endif // RANDOMIZE_REG_INIT
`endif // not def RANDOMIZE
`ifndef RANDOMIZE
  `ifdef RANDOMIZE_MEM_INIT
    `define RANDOMIZE
  `endif // RANDOMIZE_MEM_INIT
`endif // not def RANDOMIZE

// RANDOM may be set to an expression that produces a 32-bit random unsigned value.
`ifndef RANDOM
  `define RANDOM $random
`endif // not def RANDOM

// Users can define 'PRINTF_COND' to add an extra gate to prints.
`ifndef PRINTF_COND_
  `ifdef PRINTF_COND
    `define PRINTF_COND_ (`PRINTF_COND)
  `else  // PRINTF_COND
    `define PRINTF_COND_ 1
  `endif // PRINTF_COND
`endif // not def PRINTF_COND_

// Users can define 'ASSERT_VERBOSE_COND' to add an extra gate to assert error printing.
`ifndef ASSERT_VERBOSE_COND_
  `ifdef ASSERT_VERBOSE_COND
    `define ASSERT_VERBOSE_COND_ (`ASSERT_VERBOSE_COND)
  `else  // ASSERT_VERBOSE_COND
    `define ASSERT_VERBOSE_COND_ 1
  `endif // ASSERT_VERBOSE_COND
`endif // not def ASSERT_VERBOSE_COND_

// Users can define 'STOP_COND' to add an extra gate to stop conditions.
`ifndef STOP_COND_
  `ifdef STOP_COND
    `define STOP_COND_ (`STOP_COND)
  `else  // STOP_COND
    `define STOP_COND_ 1
  `endif // STOP_COND
`endif // not def STOP_COND_

// Users can define INIT_RANDOM as general code that gets injected into the
// initializer block for modules with registers.
`ifndef INIT_RANDOM
  `define INIT_RANDOM
`endif // not def INIT_RANDOM

// If using random initialization, you can also define RANDOMIZE_DELAY to
// customize the delay used, otherwise 0.002 is used.
`ifndef RANDOMIZE_DELAY
  `define RANDOMIZE_DELAY 0.002
`endif // not def RANDOMIZE_DELAY

// Define INIT_RANDOM_PROLOG_ for use in our modules below.
`ifndef INIT_RANDOM_PROLOG_
  `ifdef RANDOMIZE
    `ifdef VERILATOR
      `define INIT_RANDOM_PROLOG_ `INIT_RANDOM
    `else  // VERILATOR
      `define INIT_RANDOM_PROLOG_ `INIT_RANDOM #`RANDOMIZE_DELAY begin end
    `endif // VERILATOR
  `else  // RANDOMIZE
    `define INIT_RANDOM_PROLOG_
  `endif // RANDOMIZE
`endif // not def INIT_RANDOM_PROLOG_

module AccPipeShared(
  input         clock,
                io_in_sel_0,
                io_in_sel_1,
  input  [31:0] io_ina_0_0_0,
                io_ina_0_1_0,
                io_ina_0_2_0,
                io_ina_0_3_0,
                io_ina_0_4_0,
                io_ina_0_5_0,
                io_ina_0_6_0,
                io_ina_0_7_0,
                io_ina_0_8_0,
                io_ina_0_9_0,
                io_ina_0_10_0,
                io_ina_0_11_0,
                io_ina_0_12_0,
                io_ina_0_13_0,
                io_ina_0_14_0,
                io_ina_0_15_0,
                io_ina_1_0_0,
                io_ina_1_1_0,
                io_ina_1_2_0,
                io_ina_1_3_0,
                io_ina_1_4_0,
                io_ina_1_5_0,
                io_ina_1_6_0,
                io_ina_1_7_0,
                io_ina_1_8_0,
                io_ina_1_9_0,
                io_ina_1_10_0,
                io_ina_1_11_0,
                io_ina_1_12_0,
                io_ina_1_13_0,
                io_ina_1_14_0,
                io_ina_1_15_0,
                io_inb_0_0_0,
                io_inb_0_1_0,
                io_inb_0_2_0,
                io_inb_0_3_0,
                io_inb_0_4_0,
                io_inb_0_5_0,
                io_inb_0_6_0,
                io_inb_0_7_0,
                io_inb_0_8_0,
                io_inb_0_9_0,
                io_inb_0_10_0,
                io_inb_0_11_0,
                io_inb_0_12_0,
                io_inb_0_13_0,
                io_inb_0_14_0,
                io_inb_0_15_0,
                io_inb_1_0_0,
                io_inb_1_1_0,
                io_inb_1_2_0,
                io_inb_1_3_0,
                io_inb_1_4_0,
                io_inb_1_5_0,
                io_inb_1_6_0,
                io_inb_1_7_0,
                io_inb_1_8_0,
                io_inb_1_9_0,
                io_inb_1_10_0,
                io_inb_1_11_0,
                io_inb_1_12_0,
                io_inb_1_13_0,
                io_inb_1_14_0,
                io_inb_1_15_0,
  output [31:0] io_out_0_0,
                io_out_1_0,
                io_out_2_0,
                io_out_3_0,
                io_out_4_0,
                io_out_5_0,
                io_out_6_0,
                io_out_7_0,
                io_out_8_0,
                io_out_9_0,
                io_out_10_0,
                io_out_11_0,
                io_out_12_0,
                io_out_13_0,
                io_out_14_0,
                io_out_15_0
);

  AccPipe m (	// @[AccumulatorMem.scala:84:21]
    .clock  (clock),
    .io_op1 ((io_in_sel_0 ? io_ina_0_0_0 : 32'h0) | (io_in_sel_1 ? io_ina_1_0_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_op2 ((io_in_sel_0 ? io_inb_0_0_0 : 32'h0) | (io_in_sel_1 ? io_inb_1_0_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_sum (io_out_0_0)
  );
  AccPipe m_1 (	// @[AccumulatorMem.scala:84:21]
    .clock  (clock),
    .io_op1 ((io_in_sel_0 ? io_ina_0_1_0 : 32'h0) | (io_in_sel_1 ? io_ina_1_1_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_op2 ((io_in_sel_0 ? io_inb_0_1_0 : 32'h0) | (io_in_sel_1 ? io_inb_1_1_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_sum (io_out_1_0)
  );
  AccPipe m_2 (	// @[AccumulatorMem.scala:84:21]
    .clock  (clock),
    .io_op1 ((io_in_sel_0 ? io_ina_0_2_0 : 32'h0) | (io_in_sel_1 ? io_ina_1_2_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_op2 ((io_in_sel_0 ? io_inb_0_2_0 : 32'h0) | (io_in_sel_1 ? io_inb_1_2_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_sum (io_out_2_0)
  );
  AccPipe m_3 (	// @[AccumulatorMem.scala:84:21]
    .clock  (clock),
    .io_op1 ((io_in_sel_0 ? io_ina_0_3_0 : 32'h0) | (io_in_sel_1 ? io_ina_1_3_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_op2 ((io_in_sel_0 ? io_inb_0_3_0 : 32'h0) | (io_in_sel_1 ? io_inb_1_3_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_sum (io_out_3_0)
  );
  AccPipe m_4 (	// @[AccumulatorMem.scala:84:21]
    .clock  (clock),
    .io_op1 ((io_in_sel_0 ? io_ina_0_4_0 : 32'h0) | (io_in_sel_1 ? io_ina_1_4_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_op2 ((io_in_sel_0 ? io_inb_0_4_0 : 32'h0) | (io_in_sel_1 ? io_inb_1_4_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_sum (io_out_4_0)
  );
  AccPipe m_5 (	// @[AccumulatorMem.scala:84:21]
    .clock  (clock),
    .io_op1 ((io_in_sel_0 ? io_ina_0_5_0 : 32'h0) | (io_in_sel_1 ? io_ina_1_5_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_op2 ((io_in_sel_0 ? io_inb_0_5_0 : 32'h0) | (io_in_sel_1 ? io_inb_1_5_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_sum (io_out_5_0)
  );
  AccPipe m_6 (	// @[AccumulatorMem.scala:84:21]
    .clock  (clock),
    .io_op1 ((io_in_sel_0 ? io_ina_0_6_0 : 32'h0) | (io_in_sel_1 ? io_ina_1_6_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_op2 ((io_in_sel_0 ? io_inb_0_6_0 : 32'h0) | (io_in_sel_1 ? io_inb_1_6_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_sum (io_out_6_0)
  );
  AccPipe m_7 (	// @[AccumulatorMem.scala:84:21]
    .clock  (clock),
    .io_op1 ((io_in_sel_0 ? io_ina_0_7_0 : 32'h0) | (io_in_sel_1 ? io_ina_1_7_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_op2 ((io_in_sel_0 ? io_inb_0_7_0 : 32'h0) | (io_in_sel_1 ? io_inb_1_7_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_sum (io_out_7_0)
  );
  AccPipe m_8 (	// @[AccumulatorMem.scala:84:21]
    .clock  (clock),
    .io_op1 ((io_in_sel_0 ? io_ina_0_8_0 : 32'h0) | (io_in_sel_1 ? io_ina_1_8_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_op2 ((io_in_sel_0 ? io_inb_0_8_0 : 32'h0) | (io_in_sel_1 ? io_inb_1_8_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_sum (io_out_8_0)
  );
  AccPipe m_9 (	// @[AccumulatorMem.scala:84:21]
    .clock  (clock),
    .io_op1 ((io_in_sel_0 ? io_ina_0_9_0 : 32'h0) | (io_in_sel_1 ? io_ina_1_9_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_op2 ((io_in_sel_0 ? io_inb_0_9_0 : 32'h0) | (io_in_sel_1 ? io_inb_1_9_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_sum (io_out_9_0)
  );
  AccPipe m_10 (	// @[AccumulatorMem.scala:84:21]
    .clock  (clock),
    .io_op1 ((io_in_sel_0 ? io_ina_0_10_0 : 32'h0) | (io_in_sel_1 ? io_ina_1_10_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_op2 ((io_in_sel_0 ? io_inb_0_10_0 : 32'h0) | (io_in_sel_1 ? io_inb_1_10_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_sum (io_out_10_0)
  );
  AccPipe m_11 (	// @[AccumulatorMem.scala:84:21]
    .clock  (clock),
    .io_op1 ((io_in_sel_0 ? io_ina_0_11_0 : 32'h0) | (io_in_sel_1 ? io_ina_1_11_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_op2 ((io_in_sel_0 ? io_inb_0_11_0 : 32'h0) | (io_in_sel_1 ? io_inb_1_11_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_sum (io_out_11_0)
  );
  AccPipe m_12 (	// @[AccumulatorMem.scala:84:21]
    .clock  (clock),
    .io_op1 ((io_in_sel_0 ? io_ina_0_12_0 : 32'h0) | (io_in_sel_1 ? io_ina_1_12_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_op2 ((io_in_sel_0 ? io_inb_0_12_0 : 32'h0) | (io_in_sel_1 ? io_inb_1_12_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_sum (io_out_12_0)
  );
  AccPipe m_13 (	// @[AccumulatorMem.scala:84:21]
    .clock  (clock),
    .io_op1 ((io_in_sel_0 ? io_ina_0_13_0 : 32'h0) | (io_in_sel_1 ? io_ina_1_13_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_op2 ((io_in_sel_0 ? io_inb_0_13_0 : 32'h0) | (io_in_sel_1 ? io_inb_1_13_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_sum (io_out_13_0)
  );
  AccPipe m_14 (	// @[AccumulatorMem.scala:84:21]
    .clock  (clock),
    .io_op1 ((io_in_sel_0 ? io_ina_0_14_0 : 32'h0) | (io_in_sel_1 ? io_ina_1_14_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_op2 ((io_in_sel_0 ? io_inb_0_14_0 : 32'h0) | (io_in_sel_1 ? io_inb_1_14_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_sum (io_out_14_0)
  );
  AccPipe m_15 (	// @[AccumulatorMem.scala:84:21]
    .clock  (clock),
    .io_op1 ((io_in_sel_0 ? io_ina_0_15_0 : 32'h0) | (io_in_sel_1 ? io_ina_1_15_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_op2 ((io_in_sel_0 ? io_inb_0_15_0 : 32'h0) | (io_in_sel_1 ? io_inb_1_15_0 : 32'h0)),	// @[Mux.scala:27:73]
    .io_sum (io_out_15_0)
  );
endmodule

