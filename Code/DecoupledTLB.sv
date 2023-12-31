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

module DecoupledTLB(
  input         clock,
                reset,
                io_req_valid,
  input  [39:0] io_req_bits_tlb_req_vaddr,
  input         io_req_bits_tlb_req_passthrough,
  input  [2:0]  io_req_bits_tlb_req_size,
  input  [4:0]  io_req_bits_tlb_req_cmd,
  input  [1:0]  io_req_bits_tlb_req_prv,
  input         io_req_bits_status_debug,
                io_req_bits_status_mxr,
                io_req_bits_status_sum,
                io_exp_flush_retry,
                io_exp_flush_skip,
  output [31:0] io_resp_paddr,
  output        io_exp_interrupt,
                io_counter_event_signal_16,
                io_counter_event_signal_17
);

  wire _tlb_io_resp_pf_ld;	// @[FrontendTLB.scala:46:19]
  wire _tlb_io_resp_pf_st;	// @[FrontendTLB.scala:46:19]
  wire _tlb_io_resp_ae_ld;	// @[FrontendTLB.scala:46:19]
  wire _tlb_io_resp_ae_st;	// @[FrontendTLB.scala:46:19]
  reg  interrupt;	// @[FrontendTLB.scala:43:26]
  always @(posedge clock) begin
    if (reset)
      interrupt <= 1'h0;	// @[FrontendTLB.scala:43:26]
    else
      interrupt <= ~(interrupt & (io_exp_flush_retry | io_exp_flush_skip)) & (io_req_valid & (io_req_bits_tlb_req_cmd == 5'h0 ? _tlb_io_resp_pf_ld | _tlb_io_resp_ae_ld : _tlb_io_resp_pf_st | _tlb_io_resp_ae_st) | interrupt);	// @[FrontendTLB.scala:25:49, :43:26, :46:19, :62:{32,38,63,92,132}, :63:{20,32}, :64:{19,42}, :65:15]
  end // always @(posedge)
  `ifndef SYNTHESIS
    always @(posedge clock) begin	// @[FrontendTLB.scala:68:9]
      if (~reset & ~(~io_exp_flush_retry | ~io_exp_flush_skip)) begin	// @[FrontendTLB.scala:68:{9,10,30,33}]
        if (`ASSERT_VERBOSE_COND_)	// @[FrontendTLB.scala:68:9]
          $error("Assertion failed: TLB: flushing with both retry and skip at same time\n    at FrontendTLB.scala:68 assert(!io.exp.flush_retry || !io.exp.flush_skip, \"TLB: flushing with both retry and skip at same time\")\n");	// @[FrontendTLB.scala:68:9]
        if (`STOP_COND_)	// @[FrontendTLB.scala:68:9]
          $fatal;	// @[FrontendTLB.scala:68:9]
      end
    end // always @(posedge)
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM_0;
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        _RANDOM_0 = `RANDOM;
        interrupt = _RANDOM_0[0];	// @[FrontendTLB.scala:43:26]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  TLB_1 tlb (	// @[FrontendTLB.scala:46:19]
    .io_req_bits_vaddr       (io_req_bits_tlb_req_vaddr),
    .io_req_bits_passthrough (io_req_bits_tlb_req_passthrough),
    .io_req_bits_size        (io_req_bits_tlb_req_size),
    .io_req_bits_cmd         (io_req_bits_tlb_req_cmd),
    .io_req_bits_prv         (io_req_bits_tlb_req_prv),
    .io_ptw_status_debug     (io_req_bits_status_debug),
    .io_ptw_status_mxr       (io_req_bits_status_mxr),
    .io_ptw_status_sum       (io_req_bits_status_sum),
    .io_resp_paddr           (io_resp_paddr),
    .io_resp_pf_ld           (_tlb_io_resp_pf_ld),
    .io_resp_pf_st           (_tlb_io_resp_pf_st),
    .io_resp_ae_ld           (_tlb_io_resp_ae_ld),
    .io_resp_ae_st           (_tlb_io_resp_ae_st)
  );
  assign io_exp_interrupt = interrupt;	// @[FrontendTLB.scala:43:26]
  assign io_counter_event_signal_16 = io_req_valid;
  assign io_counter_event_signal_17 = io_req_valid;
endmodule

