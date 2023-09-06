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

module Queue_70(
  input         clock,
                reset,
                io_enq_valid,
  input  [6:0]  io_enq_bits_uopc,
  input  [31:0] io_enq_bits_inst,
                io_enq_bits_debug_inst,
  input         io_enq_bits_is_rvc,
  input  [39:0] io_enq_bits_debug_pc,
  input  [2:0]  io_enq_bits_iq_type,
  input  [9:0]  io_enq_bits_fu_code,
  input  [3:0]  io_enq_bits_ctrl_br_type,
  input  [1:0]  io_enq_bits_ctrl_op1_sel,
  input  [2:0]  io_enq_bits_ctrl_op2_sel,
                io_enq_bits_ctrl_imm_sel,
  input  [3:0]  io_enq_bits_ctrl_op_fcn,
  input         io_enq_bits_ctrl_fcn_dw,
  input  [2:0]  io_enq_bits_ctrl_csr_cmd,
  input         io_enq_bits_ctrl_is_load,
                io_enq_bits_ctrl_is_sta,
                io_enq_bits_ctrl_is_std,
  input  [1:0]  io_enq_bits_iw_state,
  input         io_enq_bits_iw_p1_poisoned,
                io_enq_bits_iw_p2_poisoned,
                io_enq_bits_is_br,
                io_enq_bits_is_jalr,
                io_enq_bits_is_jal,
                io_enq_bits_is_sfb,
  input  [11:0] io_enq_bits_br_mask,
  input  [3:0]  io_enq_bits_br_tag,
  input  [4:0]  io_enq_bits_ftq_idx,
  input         io_enq_bits_edge_inst,
  input  [5:0]  io_enq_bits_pc_lob,
  input         io_enq_bits_taken,
  input  [19:0] io_enq_bits_imm_packed,
  input  [11:0] io_enq_bits_csr_addr,
  input  [5:0]  io_enq_bits_rob_idx,
  input  [3:0]  io_enq_bits_ldq_idx,
                io_enq_bits_stq_idx,
  input  [1:0]  io_enq_bits_rxq_idx,
  input  [6:0]  io_enq_bits_pdst,
                io_enq_bits_prs1,
                io_enq_bits_prs2,
                io_enq_bits_prs3,
  input  [4:0]  io_enq_bits_ppred,
  input         io_enq_bits_prs1_busy,
                io_enq_bits_prs2_busy,
                io_enq_bits_prs3_busy,
                io_enq_bits_ppred_busy,
  input  [6:0]  io_enq_bits_stale_pdst,
  input         io_enq_bits_exception,
  input  [63:0] io_enq_bits_exc_cause,
  input         io_enq_bits_bypassable,
  input  [4:0]  io_enq_bits_mem_cmd,
  input  [1:0]  io_enq_bits_mem_size,
  input         io_enq_bits_mem_signed,
                io_enq_bits_is_fence,
                io_enq_bits_is_fencei,
                io_enq_bits_is_amo,
                io_enq_bits_uses_ldq,
                io_enq_bits_uses_stq,
                io_enq_bits_is_sys_pc2epc,
                io_enq_bits_is_unique,
                io_enq_bits_flush_on_commit,
                io_enq_bits_ldst_is_rs1,
  input  [5:0]  io_enq_bits_ldst,
                io_enq_bits_lrs1,
                io_enq_bits_lrs2,
                io_enq_bits_lrs3,
  input         io_enq_bits_ldst_val,
  input  [1:0]  io_enq_bits_dst_rtype,
                io_enq_bits_lrs1_rtype,
                io_enq_bits_lrs2_rtype,
  input         io_enq_bits_frs3_en,
                io_enq_bits_fp_val,
                io_enq_bits_fp_single,
                io_enq_bits_xcpt_pf_if,
                io_enq_bits_xcpt_ae_if,
                io_enq_bits_xcpt_ma_if,
                io_enq_bits_bp_debug_if,
                io_enq_bits_bp_xcpt_if,
  input  [1:0]  io_enq_bits_debug_fsrc,
                io_enq_bits_debug_tsrc,
  input         io_deq_ready,
  output        io_enq_ready,
                io_deq_valid,
  output [5:0]  io_deq_bits_rob_idx,
  output [6:0]  io_deq_bits_pdst,
  output        io_deq_bits_is_amo,
                io_deq_bits_uses_stq,
  output [5:0]  io_deq_bits_ldst,
  output [1:0]  io_deq_bits_dst_rtype
);

  wire [402:0] _ram_ext_R0_data;	// @[Decoupled.scala:273:95]
  reg  [2:0]   enq_ptr_value;	// @[Counter.scala:61:40]
  reg  [2:0]   deq_ptr_value;	// @[Counter.scala:61:40]
  reg          maybe_full;	// @[Decoupled.scala:276:27]
  wire         ptr_match = enq_ptr_value == deq_ptr_value;	// @[Counter.scala:61:40, Decoupled.scala:277:33]
  wire         empty = ptr_match & ~maybe_full;	// @[Decoupled.scala:276:27, :277:33, :278:{25,28}]
  wire         full = ptr_match & maybe_full;	// @[Decoupled.scala:276:27, :277:33, :279:24]
  wire         do_enq = ~full & io_enq_valid;	// @[Decoupled.scala:51:35, :279:24, :303:19]
  wire         do_deq = io_deq_ready & ~empty;	// @[Decoupled.scala:51:35, :278:25, :302:19]
  always @(posedge clock) begin
    if (reset) begin
      enq_ptr_value <= 3'h0;	// @[Counter.scala:61:40]
      deq_ptr_value <= 3'h0;	// @[Counter.scala:61:40]
      maybe_full <= 1'h0;	// @[Decoupled.scala:276:27]
    end
    else begin
      if (do_enq)	// @[Decoupled.scala:51:35]
        enq_ptr_value <= enq_ptr_value + 3'h1;	// @[Counter.scala:61:40, :77:24]
      if (do_deq)	// @[Decoupled.scala:51:35]
        deq_ptr_value <= deq_ptr_value + 3'h1;	// @[Counter.scala:61:40, :77:24]
      if (do_enq != do_deq)	// @[Decoupled.scala:51:35, :293:15]
        maybe_full <= do_enq;	// @[Decoupled.scala:51:35, :276:27]
    end
  end // always @(posedge)
  `ifndef SYNTHESIS
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
        enq_ptr_value = _RANDOM_0[2:0];	// @[Counter.scala:61:40]
        deq_ptr_value = _RANDOM_0[5:3];	// @[Counter.scala:61:40]
        maybe_full = _RANDOM_0[6];	// @[Counter.scala:61:40, Decoupled.scala:276:27]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  ram_combMem_50 ram_ext (	// @[Decoupled.scala:273:95]
    .R0_addr (deq_ptr_value),	// @[Counter.scala:61:40]
    .R0_en   (1'h1),
    .R0_clk  (clock),
    .W0_addr (enq_ptr_value),	// @[Counter.scala:61:40]
    .W0_en   (do_enq),	// @[Decoupled.scala:51:35]
    .W0_clk  (clock),
    .W0_data ({io_enq_bits_debug_tsrc, io_enq_bits_debug_fsrc, io_enq_bits_bp_xcpt_if, io_enq_bits_bp_debug_if, io_enq_bits_xcpt_ma_if, io_enq_bits_xcpt_ae_if, io_enq_bits_xcpt_pf_if, io_enq_bits_fp_single, io_enq_bits_fp_val, io_enq_bits_frs3_en, io_enq_bits_lrs2_rtype, io_enq_bits_lrs1_rtype, io_enq_bits_dst_rtype, io_enq_bits_ldst_val, io_enq_bits_lrs3, io_enq_bits_lrs2, io_enq_bits_lrs1, io_enq_bits_ldst, io_enq_bits_ldst_is_rs1, io_enq_bits_flush_on_commit, io_enq_bits_is_unique, io_enq_bits_is_sys_pc2epc, io_enq_bits_uses_stq, io_enq_bits_uses_ldq, io_enq_bits_is_amo, io_enq_bits_is_fencei, io_enq_bits_is_fence, io_enq_bits_mem_signed, io_enq_bits_mem_size, io_enq_bits_mem_cmd, io_enq_bits_bypassable, io_enq_bits_exc_cause, io_enq_bits_exception, io_enq_bits_stale_pdst, io_enq_bits_ppred_busy, io_enq_bits_prs3_busy, io_enq_bits_prs2_busy, io_enq_bits_prs1_busy, io_enq_bits_ppred, io_enq_bits_prs3, io_enq_bits_prs2, io_enq_bits_prs1, io_enq_bits_pdst, io_enq_bits_rxq_idx, io_enq_bits_stq_idx, io_enq_bits_ldq_idx, io_enq_bits_rob_idx, io_enq_bits_csr_addr, io_enq_bits_imm_packed, io_enq_bits_taken, io_enq_bits_pc_lob, io_enq_bits_edge_inst, io_enq_bits_ftq_idx, io_enq_bits_br_tag, io_enq_bits_br_mask, io_enq_bits_is_sfb, io_enq_bits_is_jal, io_enq_bits_is_jalr, io_enq_bits_is_br, io_enq_bits_iw_p2_poisoned, io_enq_bits_iw_p1_poisoned, io_enq_bits_iw_state, io_enq_bits_ctrl_is_std, io_enq_bits_ctrl_is_sta, io_enq_bits_ctrl_is_load, io_enq_bits_ctrl_csr_cmd, io_enq_bits_ctrl_fcn_dw, io_enq_bits_ctrl_op_fcn, io_enq_bits_ctrl_imm_sel, io_enq_bits_ctrl_op2_sel, io_enq_bits_ctrl_op1_sel, io_enq_bits_ctrl_br_type, io_enq_bits_fu_code, io_enq_bits_iq_type, io_enq_bits_debug_pc, io_enq_bits_is_rvc, io_enq_bits_debug_inst, io_enq_bits_inst, io_enq_bits_uopc}),	// @[Decoupled.scala:273:95]
    .R0_data (_ram_ext_R0_data)
  );
  assign io_enq_ready = ~full;	// @[Decoupled.scala:279:24, :303:19]
  assign io_deq_valid = ~empty;	// @[Decoupled.scala:278:25, :302:19]
  assign io_deq_bits_rob_idx = _ram_ext_R0_data[222:217];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_pdst = _ram_ext_R0_data[239:233];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_is_amo = _ram_ext_R0_data[353];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_uses_stq = _ram_ext_R0_data[355];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_ldst = _ram_ext_R0_data[365:360];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_dst_rtype = _ram_ext_R0_data[386:385];	// @[Decoupled.scala:273:95]
endmodule

