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

module ForwardingAgeLogic(
  input  [15:0] io_addr_matches,
  input  [3:0]  io_youngest_st_idx,
  output [3:0]  io_forwarding_idx
);

  wire [14:0] _GEN = io_addr_matches[14:0] & {&io_youngest_st_idx, &(io_youngest_st_idx[3:1]), io_youngest_st_idx > 4'hC, &(io_youngest_st_idx[3:2]), io_youngest_st_idx > 4'hA, io_youngest_st_idx > 4'h9, io_youngest_st_idx > 4'h8, io_youngest_st_idx[3], io_youngest_st_idx > 4'h6, io_youngest_st_idx > 4'h5, io_youngest_st_idx > 4'h4, |(io_youngest_st_idx[3:2]), io_youngest_st_idx > 4'h2, |(io_youngest_st_idx[3:1]), |io_youngest_st_idx};	// @[lsu.scala:1693:17, :1701:{35,46}, :1714:28]
  assign io_forwarding_idx = _GEN[14] ? 4'hE : _GEN[13] ? 4'hD : _GEN[12] ? 4'hC : _GEN[11] ? 4'hB : _GEN[10] ? 4'hA : _GEN[9] ? 4'h9 : _GEN[8] ? 4'h8 : _GEN[7] ? 4'h7 : _GEN[6] ? 4'h6 : _GEN[5] ? 4'h5 : _GEN[4] ? 4'h4 : _GEN[3] ? 4'h3 : _GEN[2] ? 4'h2 : _GEN[1] ? 4'h1 : _GEN[0] ? 4'h0 : io_addr_matches[15] ? 4'hF : io_addr_matches[14] ? 4'hE : io_addr_matches[13] ? 4'hD : io_addr_matches[12] ? 4'hC : io_addr_matches[11] ? 4'hB : io_addr_matches[10] ? 4'hA : io_addr_matches[9] ? 4'h9 : io_addr_matches[8] ? 4'h8 : io_addr_matches[7] ? 4'h7 : io_addr_matches[6] ? 4'h6 : io_addr_matches[5] ? 4'h5 : io_addr_matches[4] ? 4'h4 : io_addr_matches[3] ? 4'h3 : io_addr_matches[2] ? 4'h2 : {3'h0, io_addr_matches[1]};	// @[lsu.scala:1693:17, :1701:35, :1706:22, :1711:20, :1712:7, :1714:28]
endmodule

