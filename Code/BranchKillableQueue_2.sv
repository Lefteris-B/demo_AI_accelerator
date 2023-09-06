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

module BranchKillableQueue_2(
  input         clock,
                reset,
                io_enq_valid,
  input  [6:0]  io_enq_bits_uop_uopc,
  input  [31:0] io_enq_bits_uop_inst,
                io_enq_bits_uop_debug_inst,
  input         io_enq_bits_uop_is_rvc,
  input  [39:0] io_enq_bits_uop_debug_pc,
  input  [2:0]  io_enq_bits_uop_iq_type,
  input  [9:0]  io_enq_bits_uop_fu_code,
  input  [3:0]  io_enq_bits_uop_ctrl_br_type,
  input  [1:0]  io_enq_bits_uop_ctrl_op1_sel,
  input  [2:0]  io_enq_bits_uop_ctrl_op2_sel,
                io_enq_bits_uop_ctrl_imm_sel,
  input  [3:0]  io_enq_bits_uop_ctrl_op_fcn,
  input         io_enq_bits_uop_ctrl_fcn_dw,
  input  [2:0]  io_enq_bits_uop_ctrl_csr_cmd,
  input         io_enq_bits_uop_ctrl_is_load,
                io_enq_bits_uop_ctrl_is_sta,
                io_enq_bits_uop_ctrl_is_std,
  input  [1:0]  io_enq_bits_uop_iw_state,
  input         io_enq_bits_uop_iw_p1_poisoned,
                io_enq_bits_uop_iw_p2_poisoned,
                io_enq_bits_uop_is_br,
                io_enq_bits_uop_is_jalr,
                io_enq_bits_uop_is_jal,
                io_enq_bits_uop_is_sfb,
  input  [11:0] io_enq_bits_uop_br_mask,
  input  [3:0]  io_enq_bits_uop_br_tag,
  input  [4:0]  io_enq_bits_uop_ftq_idx,
  input         io_enq_bits_uop_edge_inst,
  input  [5:0]  io_enq_bits_uop_pc_lob,
  input         io_enq_bits_uop_taken,
  input  [19:0] io_enq_bits_uop_imm_packed,
  input  [11:0] io_enq_bits_uop_csr_addr,
  input  [5:0]  io_enq_bits_uop_rob_idx,
  input  [3:0]  io_enq_bits_uop_ldq_idx,
                io_enq_bits_uop_stq_idx,
  input  [1:0]  io_enq_bits_uop_rxq_idx,
  input  [6:0]  io_enq_bits_uop_pdst,
                io_enq_bits_uop_prs1,
                io_enq_bits_uop_prs2,
                io_enq_bits_uop_prs3,
  input  [4:0]  io_enq_bits_uop_ppred,
  input         io_enq_bits_uop_prs1_busy,
                io_enq_bits_uop_prs2_busy,
                io_enq_bits_uop_prs3_busy,
                io_enq_bits_uop_ppred_busy,
  input  [6:0]  io_enq_bits_uop_stale_pdst,
  input         io_enq_bits_uop_exception,
  input  [63:0] io_enq_bits_uop_exc_cause,
  input         io_enq_bits_uop_bypassable,
  input  [4:0]  io_enq_bits_uop_mem_cmd,
  input  [1:0]  io_enq_bits_uop_mem_size,
  input         io_enq_bits_uop_mem_signed,
                io_enq_bits_uop_is_fence,
                io_enq_bits_uop_is_fencei,
                io_enq_bits_uop_is_amo,
                io_enq_bits_uop_uses_ldq,
                io_enq_bits_uop_uses_stq,
                io_enq_bits_uop_is_sys_pc2epc,
                io_enq_bits_uop_is_unique,
                io_enq_bits_uop_flush_on_commit,
                io_enq_bits_uop_ldst_is_rs1,
  input  [5:0]  io_enq_bits_uop_ldst,
                io_enq_bits_uop_lrs1,
                io_enq_bits_uop_lrs2,
                io_enq_bits_uop_lrs3,
  input         io_enq_bits_uop_ldst_val,
  input  [1:0]  io_enq_bits_uop_dst_rtype,
                io_enq_bits_uop_lrs1_rtype,
                io_enq_bits_uop_lrs2_rtype,
  input         io_enq_bits_uop_frs3_en,
                io_enq_bits_uop_fp_val,
                io_enq_bits_uop_fp_single,
                io_enq_bits_uop_xcpt_pf_if,
                io_enq_bits_uop_xcpt_ae_if,
                io_enq_bits_uop_xcpt_ma_if,
                io_enq_bits_uop_bp_debug_if,
                io_enq_bits_uop_bp_xcpt_if,
  input  [1:0]  io_enq_bits_uop_debug_fsrc,
                io_enq_bits_uop_debug_tsrc,
  input  [63:0] io_enq_bits_data,
  input         io_enq_bits_is_hella,
                io_deq_ready,
  input  [11:0] io_brupdate_b1_resolve_mask,
                io_brupdate_b1_mispredict_mask,
  input         io_flush,
  output        io_enq_ready,
                io_deq_valid,
  output [11:0] io_deq_bits_uop_br_mask,
  output [3:0]  io_deq_bits_uop_ldq_idx,
                io_deq_bits_uop_stq_idx,
  output        io_deq_bits_uop_is_amo,
                io_deq_bits_uop_uses_ldq,
                io_deq_bits_uop_uses_stq,
  output [63:0] io_deq_bits_data,
  output        io_deq_bits_is_hella
);

  wire [467:0]     _ram_ext_R0_data;	// @[util.scala:464:20]
  reg              valids_0;	// @[util.scala:465:24]
  reg              valids_1;	// @[util.scala:465:24]
  reg              valids_2;	// @[util.scala:465:24]
  reg              valids_3;	// @[util.scala:465:24]
  reg  [11:0]      uops_0_br_mask;	// @[util.scala:466:20]
  reg  [3:0]       uops_0_ldq_idx;	// @[util.scala:466:20]
  reg  [3:0]       uops_0_stq_idx;	// @[util.scala:466:20]
  reg              uops_0_is_amo;	// @[util.scala:466:20]
  reg              uops_0_uses_ldq;	// @[util.scala:466:20]
  reg              uops_0_uses_stq;	// @[util.scala:466:20]
  reg  [11:0]      uops_1_br_mask;	// @[util.scala:466:20]
  reg  [3:0]       uops_1_ldq_idx;	// @[util.scala:466:20]
  reg  [3:0]       uops_1_stq_idx;	// @[util.scala:466:20]
  reg              uops_1_is_amo;	// @[util.scala:466:20]
  reg              uops_1_uses_ldq;	// @[util.scala:466:20]
  reg              uops_1_uses_stq;	// @[util.scala:466:20]
  reg  [11:0]      uops_2_br_mask;	// @[util.scala:466:20]
  reg  [3:0]       uops_2_ldq_idx;	// @[util.scala:466:20]
  reg  [3:0]       uops_2_stq_idx;	// @[util.scala:466:20]
  reg              uops_2_is_amo;	// @[util.scala:466:20]
  reg              uops_2_uses_ldq;	// @[util.scala:466:20]
  reg              uops_2_uses_stq;	// @[util.scala:466:20]
  reg  [11:0]      uops_3_br_mask;	// @[util.scala:466:20]
  reg  [3:0]       uops_3_ldq_idx;	// @[util.scala:466:20]
  reg  [3:0]       uops_3_stq_idx;	// @[util.scala:466:20]
  reg              uops_3_is_amo;	// @[util.scala:466:20]
  reg              uops_3_uses_ldq;	// @[util.scala:466:20]
  reg              uops_3_uses_stq;	// @[util.scala:466:20]
  reg  [1:0]       enq_ptr_value;	// @[Counter.scala:61:40]
  reg  [1:0]       deq_ptr_value;	// @[Counter.scala:61:40]
  reg              maybe_full;	// @[util.scala:470:27]
  wire             ptr_match = enq_ptr_value == deq_ptr_value;	// @[Counter.scala:61:40, util.scala:472:33]
  wire             _io_empty_T_1 = ptr_match & ~maybe_full;	// @[util.scala:470:27, :472:33, :473:{25,28}]
  wire             full = ptr_match & maybe_full;	// @[util.scala:470:27, :472:33, :474:24]
  wire             do_enq = ~full & io_enq_valid;	// @[Decoupled.scala:51:35, util.scala:474:24, :504:19]
  wire [3:0]       _GEN = {{valids_3}, {valids_2}, {valids_1}, {valids_0}};	// @[util.scala:465:24, :476:42]
  wire             _GEN_0 = _GEN[deq_ptr_value];	// @[Counter.scala:61:40, util.scala:476:42]
  wire [3:0][11:0] _GEN_1 = {{uops_3_br_mask}, {uops_2_br_mask}, {uops_1_br_mask}, {uops_0_br_mask}};	// @[util.scala:466:20, :508:19]
  wire [11:0]      out_uop_br_mask = _GEN_1[deq_ptr_value];	// @[Counter.scala:61:40, util.scala:508:19]
  wire [3:0][3:0]  _GEN_2 = {{uops_3_ldq_idx}, {uops_2_ldq_idx}, {uops_1_ldq_idx}, {uops_0_ldq_idx}};	// @[util.scala:466:20, :508:19]
  wire [3:0][3:0]  _GEN_3 = {{uops_3_stq_idx}, {uops_2_stq_idx}, {uops_1_stq_idx}, {uops_0_stq_idx}};	// @[util.scala:466:20, :508:19]
  wire [3:0]       _GEN_4 = {{uops_3_is_amo}, {uops_2_is_amo}, {uops_1_is_amo}, {uops_0_is_amo}};	// @[util.scala:466:20, :508:19]
  wire [3:0]       _GEN_5 = {{uops_3_uses_ldq}, {uops_2_uses_ldq}, {uops_1_uses_ldq}, {uops_0_uses_ldq}};	// @[util.scala:466:20, :508:19]
  wire             out_uop_uses_ldq = _GEN_5[deq_ptr_value];	// @[Counter.scala:61:40, util.scala:508:19]
  wire [3:0]       _GEN_6 = {{uops_3_uses_stq}, {uops_2_uses_stq}, {uops_1_uses_stq}, {uops_0_uses_stq}};	// @[util.scala:466:20, :508:19]
  wire             do_deq = (io_deq_ready | ~_GEN_0) & ~_io_empty_T_1;	// @[util.scala:473:25, :476:{39,42,66,69}]
  wire             _GEN_7 = enq_ptr_value == 2'h0;	// @[Counter.scala:61:40, util.scala:489:33]
  wire             _GEN_8 = do_enq & _GEN_7;	// @[Decoupled.scala:51:35, util.scala:481:16, :487:17, :489:33]
  wire             _GEN_9 = enq_ptr_value == 2'h1;	// @[Counter.scala:61:40, util.scala:489:33]
  wire             _GEN_10 = do_enq & _GEN_9;	// @[Decoupled.scala:51:35, util.scala:481:16, :487:17, :489:33]
  wire             _GEN_11 = enq_ptr_value == 2'h2;	// @[Counter.scala:61:40, util.scala:489:33]
  wire             _GEN_12 = do_enq & _GEN_11;	// @[Decoupled.scala:51:35, util.scala:481:16, :487:17, :489:33]
  wire             _GEN_13 = do_enq & (&enq_ptr_value);	// @[Counter.scala:61:40, Decoupled.scala:51:35, util.scala:481:16, :487:17, :489:33]
  wire [11:0]      _uops_br_mask_T_1 = io_enq_bits_uop_br_mask & ~io_brupdate_b1_resolve_mask;	// @[util.scala:85:{25,27}]
  always @(posedge clock) begin
    if (reset) begin
      valids_0 <= 1'h0;	// @[util.scala:465:24]
      valids_1 <= 1'h0;	// @[util.scala:465:24]
      valids_2 <= 1'h0;	// @[util.scala:465:24]
      valids_3 <= 1'h0;	// @[util.scala:465:24]
      enq_ptr_value <= 2'h0;	// @[Counter.scala:61:40]
      deq_ptr_value <= 2'h0;	// @[Counter.scala:61:40]
      maybe_full <= 1'h0;	// @[util.scala:470:27]
    end
    else begin
      valids_0 <= ~(do_deq & deq_ptr_value == 2'h0) & (_GEN_8 | valids_0 & (io_brupdate_b1_mispredict_mask & uops_0_br_mask) == 12'h0 & ~(io_flush & uops_0_uses_ldq));	// @[Counter.scala:61:40, util.scala:118:{51,59}, :465:24, :466:20, :476:66, :481:{16,69,72,83}, :487:17, :489:33, :495:17, :496:27]
      valids_1 <= ~(do_deq & deq_ptr_value == 2'h1) & (_GEN_10 | valids_1 & (io_brupdate_b1_mispredict_mask & uops_1_br_mask) == 12'h0 & ~(io_flush & uops_1_uses_ldq));	// @[Counter.scala:61:40, util.scala:118:{51,59}, :465:24, :466:20, :476:66, :481:{16,69,72,83}, :487:17, :489:33, :495:17, :496:27]
      valids_2 <= ~(do_deq & deq_ptr_value == 2'h2) & (_GEN_12 | valids_2 & (io_brupdate_b1_mispredict_mask & uops_2_br_mask) == 12'h0 & ~(io_flush & uops_2_uses_ldq));	// @[Counter.scala:61:40, util.scala:118:{51,59}, :465:24, :466:20, :476:66, :481:{16,69,72,83}, :487:17, :489:33, :495:17, :496:27]
      valids_3 <= ~(do_deq & (&deq_ptr_value)) & (_GEN_13 | valids_3 & (io_brupdate_b1_mispredict_mask & uops_3_br_mask) == 12'h0 & ~(io_flush & uops_3_uses_ldq));	// @[Counter.scala:61:40, util.scala:118:{51,59}, :465:24, :466:20, :476:66, :481:{16,69,72,83}, :487:17, :489:33, :495:17, :496:27]
      if (do_enq)	// @[Decoupled.scala:51:35]
        enq_ptr_value <= enq_ptr_value + 2'h1;	// @[Counter.scala:61:40, :77:24, util.scala:489:33]
      if (do_deq)	// @[util.scala:476:66]
        deq_ptr_value <= deq_ptr_value + 2'h1;	// @[Counter.scala:61:40, :77:24, util.scala:489:33]
      if (do_enq != do_deq)	// @[Decoupled.scala:51:35, util.scala:476:66, :500:16]
        maybe_full <= do_enq;	// @[Decoupled.scala:51:35, util.scala:470:27]
    end
    if (do_enq & _GEN_7)	// @[Decoupled.scala:51:35, util.scala:482:22, :487:17, :489:33, :491:33]
      uops_0_br_mask <= _uops_br_mask_T_1;	// @[util.scala:85:25, :466:20]
    else	// @[util.scala:482:22, :487:17, :491:33]
      uops_0_br_mask <= ({12{~valids_0}} | ~io_brupdate_b1_resolve_mask) & uops_0_br_mask;	// @[util.scala:89:23, :465:24, :466:20, :482:22, :483:23]
    if (_GEN_8) begin	// @[util.scala:481:16, :487:17, :489:33]
      uops_0_ldq_idx <= io_enq_bits_uop_ldq_idx;	// @[util.scala:466:20]
      uops_0_stq_idx <= io_enq_bits_uop_stq_idx;	// @[util.scala:466:20]
      uops_0_is_amo <= io_enq_bits_uop_is_amo;	// @[util.scala:466:20]
      uops_0_uses_ldq <= io_enq_bits_uop_uses_ldq;	// @[util.scala:466:20]
      uops_0_uses_stq <= io_enq_bits_uop_uses_stq;	// @[util.scala:466:20]
    end
    if (do_enq & _GEN_9)	// @[Decoupled.scala:51:35, util.scala:482:22, :487:17, :489:33, :491:33]
      uops_1_br_mask <= _uops_br_mask_T_1;	// @[util.scala:85:25, :466:20]
    else	// @[util.scala:482:22, :487:17, :491:33]
      uops_1_br_mask <= ({12{~valids_1}} | ~io_brupdate_b1_resolve_mask) & uops_1_br_mask;	// @[util.scala:89:23, :465:24, :466:20, :482:22, :483:23]
    if (_GEN_10) begin	// @[util.scala:481:16, :487:17, :489:33]
      uops_1_ldq_idx <= io_enq_bits_uop_ldq_idx;	// @[util.scala:466:20]
      uops_1_stq_idx <= io_enq_bits_uop_stq_idx;	// @[util.scala:466:20]
      uops_1_is_amo <= io_enq_bits_uop_is_amo;	// @[util.scala:466:20]
      uops_1_uses_ldq <= io_enq_bits_uop_uses_ldq;	// @[util.scala:466:20]
      uops_1_uses_stq <= io_enq_bits_uop_uses_stq;	// @[util.scala:466:20]
    end
    if (do_enq & _GEN_11)	// @[Decoupled.scala:51:35, util.scala:482:22, :487:17, :489:33, :491:33]
      uops_2_br_mask <= _uops_br_mask_T_1;	// @[util.scala:85:25, :466:20]
    else	// @[util.scala:482:22, :487:17, :491:33]
      uops_2_br_mask <= ({12{~valids_2}} | ~io_brupdate_b1_resolve_mask) & uops_2_br_mask;	// @[util.scala:89:23, :465:24, :466:20, :482:22, :483:23]
    if (_GEN_12) begin	// @[util.scala:481:16, :487:17, :489:33]
      uops_2_ldq_idx <= io_enq_bits_uop_ldq_idx;	// @[util.scala:466:20]
      uops_2_stq_idx <= io_enq_bits_uop_stq_idx;	// @[util.scala:466:20]
      uops_2_is_amo <= io_enq_bits_uop_is_amo;	// @[util.scala:466:20]
      uops_2_uses_ldq <= io_enq_bits_uop_uses_ldq;	// @[util.scala:466:20]
      uops_2_uses_stq <= io_enq_bits_uop_uses_stq;	// @[util.scala:466:20]
    end
    if (do_enq & (&enq_ptr_value))	// @[Counter.scala:61:40, Decoupled.scala:51:35, util.scala:482:22, :487:17, :489:33, :491:33]
      uops_3_br_mask <= _uops_br_mask_T_1;	// @[util.scala:85:25, :466:20]
    else	// @[util.scala:482:22, :487:17, :491:33]
      uops_3_br_mask <= ({12{~valids_3}} | ~io_brupdate_b1_resolve_mask) & uops_3_br_mask;	// @[util.scala:89:23, :465:24, :466:20, :482:22, :483:23]
    if (_GEN_13) begin	// @[util.scala:481:16, :487:17, :489:33]
      uops_3_ldq_idx <= io_enq_bits_uop_ldq_idx;	// @[util.scala:466:20]
      uops_3_stq_idx <= io_enq_bits_uop_stq_idx;	// @[util.scala:466:20]
      uops_3_is_amo <= io_enq_bits_uop_is_amo;	// @[util.scala:466:20]
      uops_3_uses_ldq <= io_enq_bits_uop_uses_ldq;	// @[util.scala:466:20]
      uops_3_uses_stq <= io_enq_bits_uop_uses_stq;	// @[util.scala:466:20]
    end
  end // always @(posedge)
  `ifndef SYNTHESIS
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM_0;
    logic [31:0] _RANDOM_1;
    logic [31:0] _RANDOM_2;
    logic [31:0] _RANDOM_3;
    logic [31:0] _RANDOM_4;
    logic [31:0] _RANDOM_5;
    logic [31:0] _RANDOM_6;
    logic [31:0] _RANDOM_7;
    logic [31:0] _RANDOM_8;
    logic [31:0] _RANDOM_9;
    logic [31:0] _RANDOM_10;
    logic [31:0] _RANDOM_11;
    logic [31:0] _RANDOM_12;
    logic [31:0] _RANDOM_13;
    logic [31:0] _RANDOM_14;
    logic [31:0] _RANDOM_15;
    logic [31:0] _RANDOM_16;
    logic [31:0] _RANDOM_17;
    logic [31:0] _RANDOM_18;
    logic [31:0] _RANDOM_19;
    logic [31:0] _RANDOM_20;
    logic [31:0] _RANDOM_21;
    logic [31:0] _RANDOM_22;
    logic [31:0] _RANDOM_23;
    logic [31:0] _RANDOM_24;
    logic [31:0] _RANDOM_25;
    logic [31:0] _RANDOM_26;
    logic [31:0] _RANDOM_27;
    logic [31:0] _RANDOM_28;
    logic [31:0] _RANDOM_29;
    logic [31:0] _RANDOM_30;
    logic [31:0] _RANDOM_31;
    logic [31:0] _RANDOM_32;
    logic [31:0] _RANDOM_33;
    logic [31:0] _RANDOM_34;
    logic [31:0] _RANDOM_35;
    logic [31:0] _RANDOM_36;
    logic [31:0] _RANDOM_37;
    logic [31:0] _RANDOM_38;
    logic [31:0] _RANDOM_39;
    logic [31:0] _RANDOM_40;
    logic [31:0] _RANDOM_41;
    logic [31:0] _RANDOM_42;
    logic [31:0] _RANDOM_43;
    logic [31:0] _RANDOM_44;
    logic [31:0] _RANDOM_45;
    logic [31:0] _RANDOM_46;
    logic [31:0] _RANDOM_47;
    logic [31:0] _RANDOM_48;
    logic [31:0] _RANDOM_49;
    logic [31:0] _RANDOM_50;
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        _RANDOM_0 = `RANDOM;
        _RANDOM_1 = `RANDOM;
        _RANDOM_2 = `RANDOM;
        _RANDOM_3 = `RANDOM;
        _RANDOM_4 = `RANDOM;
        _RANDOM_5 = `RANDOM;
        _RANDOM_6 = `RANDOM;
        _RANDOM_7 = `RANDOM;
        _RANDOM_8 = `RANDOM;
        _RANDOM_9 = `RANDOM;
        _RANDOM_10 = `RANDOM;
        _RANDOM_11 = `RANDOM;
        _RANDOM_12 = `RANDOM;
        _RANDOM_13 = `RANDOM;
        _RANDOM_14 = `RANDOM;
        _RANDOM_15 = `RANDOM;
        _RANDOM_16 = `RANDOM;
        _RANDOM_17 = `RANDOM;
        _RANDOM_18 = `RANDOM;
        _RANDOM_19 = `RANDOM;
        _RANDOM_20 = `RANDOM;
        _RANDOM_21 = `RANDOM;
        _RANDOM_22 = `RANDOM;
        _RANDOM_23 = `RANDOM;
        _RANDOM_24 = `RANDOM;
        _RANDOM_25 = `RANDOM;
        _RANDOM_26 = `RANDOM;
        _RANDOM_27 = `RANDOM;
        _RANDOM_28 = `RANDOM;
        _RANDOM_29 = `RANDOM;
        _RANDOM_30 = `RANDOM;
        _RANDOM_31 = `RANDOM;
        _RANDOM_32 = `RANDOM;
        _RANDOM_33 = `RANDOM;
        _RANDOM_34 = `RANDOM;
        _RANDOM_35 = `RANDOM;
        _RANDOM_36 = `RANDOM;
        _RANDOM_37 = `RANDOM;
        _RANDOM_38 = `RANDOM;
        _RANDOM_39 = `RANDOM;
        _RANDOM_40 = `RANDOM;
        _RANDOM_41 = `RANDOM;
        _RANDOM_42 = `RANDOM;
        _RANDOM_43 = `RANDOM;
        _RANDOM_44 = `RANDOM;
        _RANDOM_45 = `RANDOM;
        _RANDOM_46 = `RANDOM;
        _RANDOM_47 = `RANDOM;
        _RANDOM_48 = `RANDOM;
        _RANDOM_49 = `RANDOM;
        _RANDOM_50 = `RANDOM;
        valids_0 = _RANDOM_0[0];	// @[util.scala:465:24]
        valids_1 = _RANDOM_0[1];	// @[util.scala:465:24]
        valids_2 = _RANDOM_0[2];	// @[util.scala:465:24]
        valids_3 = _RANDOM_0[3];	// @[util.scala:465:24]
        uops_0_br_mask = _RANDOM_5[11:0];	// @[util.scala:466:20]
        uops_0_ldq_idx = _RANDOM_7[6:3];	// @[util.scala:466:20]
        uops_0_stq_idx = _RANDOM_7[10:7];	// @[util.scala:466:20]
        uops_0_is_amo = _RANDOM_11[5];	// @[util.scala:466:20]
        uops_0_uses_ldq = _RANDOM_11[6];	// @[util.scala:466:20]
        uops_0_uses_stq = _RANDOM_11[7];	// @[util.scala:466:20]
        uops_1_br_mask = _RANDOM_17[30:19];	// @[util.scala:466:20]
        uops_1_ldq_idx = _RANDOM_19[25:22];	// @[util.scala:466:20]
        uops_1_stq_idx = _RANDOM_19[29:26];	// @[util.scala:466:20]
        uops_1_is_amo = _RANDOM_23[24];	// @[util.scala:466:20]
        uops_1_uses_ldq = _RANDOM_23[25];	// @[util.scala:466:20]
        uops_1_uses_stq = _RANDOM_23[26];	// @[util.scala:466:20]
        uops_2_br_mask = _RANDOM_30[17:6];	// @[util.scala:466:20]
        uops_2_ldq_idx = _RANDOM_32[12:9];	// @[util.scala:466:20]
        uops_2_stq_idx = _RANDOM_32[16:13];	// @[util.scala:466:20]
        uops_2_is_amo = _RANDOM_36[11];	// @[util.scala:466:20]
        uops_2_uses_ldq = _RANDOM_36[12];	// @[util.scala:466:20]
        uops_2_uses_stq = _RANDOM_36[13];	// @[util.scala:466:20]
        uops_3_br_mask = {_RANDOM_42[31:25], _RANDOM_43[4:0]};	// @[util.scala:466:20]
        uops_3_ldq_idx = _RANDOM_44[31:28];	// @[util.scala:466:20]
        uops_3_stq_idx = _RANDOM_45[3:0];	// @[util.scala:466:20]
        uops_3_is_amo = _RANDOM_48[30];	// @[util.scala:466:20]
        uops_3_uses_ldq = _RANDOM_48[31];	// @[util.scala:466:20]
        uops_3_uses_stq = _RANDOM_49[0];	// @[util.scala:466:20]
        enq_ptr_value = _RANDOM_50[17:16];	// @[Counter.scala:61:40]
        deq_ptr_value = _RANDOM_50[19:18];	// @[Counter.scala:61:40]
        maybe_full = _RANDOM_50[20];	// @[Counter.scala:61:40, util.scala:470:27]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  ram_combMem_51 ram_ext (	// @[util.scala:464:20]
    .R0_addr (deq_ptr_value),	// @[Counter.scala:61:40]
    .R0_en   (1'h1),
    .R0_clk  (clock),
    .W0_addr (enq_ptr_value),	// @[Counter.scala:61:40]
    .W0_en   (do_enq),	// @[Decoupled.scala:51:35]
    .W0_clk  (clock),
    .W0_data
      ({io_enq_bits_is_hella,
        io_enq_bits_data,
        io_enq_bits_uop_debug_tsrc,
        io_enq_bits_uop_debug_fsrc,
        io_enq_bits_uop_bp_xcpt_if,
        io_enq_bits_uop_bp_debug_if,
        io_enq_bits_uop_xcpt_ma_if,
        io_enq_bits_uop_xcpt_ae_if,
        io_enq_bits_uop_xcpt_pf_if,
        io_enq_bits_uop_fp_single,
        io_enq_bits_uop_fp_val,
        io_enq_bits_uop_frs3_en,
        io_enq_bits_uop_lrs2_rtype,
        io_enq_bits_uop_lrs1_rtype,
        io_enq_bits_uop_dst_rtype,
        io_enq_bits_uop_ldst_val,
        io_enq_bits_uop_lrs3,
        io_enq_bits_uop_lrs2,
        io_enq_bits_uop_lrs1,
        io_enq_bits_uop_ldst,
        io_enq_bits_uop_ldst_is_rs1,
        io_enq_bits_uop_flush_on_commit,
        io_enq_bits_uop_is_unique,
        io_enq_bits_uop_is_sys_pc2epc,
        io_enq_bits_uop_uses_stq,
        io_enq_bits_uop_uses_ldq,
        io_enq_bits_uop_is_amo,
        io_enq_bits_uop_is_fencei,
        io_enq_bits_uop_is_fence,
        io_enq_bits_uop_mem_signed,
        io_enq_bits_uop_mem_size,
        io_enq_bits_uop_mem_cmd,
        io_enq_bits_uop_bypassable,
        io_enq_bits_uop_exc_cause,
        io_enq_bits_uop_exception,
        io_enq_bits_uop_stale_pdst,
        io_enq_bits_uop_ppred_busy,
        io_enq_bits_uop_prs3_busy,
        io_enq_bits_uop_prs2_busy,
        io_enq_bits_uop_prs1_busy,
        io_enq_bits_uop_ppred,
        io_enq_bits_uop_prs3,
        io_enq_bits_uop_prs2,
        io_enq_bits_uop_prs1,
        io_enq_bits_uop_pdst,
        io_enq_bits_uop_rxq_idx,
        io_enq_bits_uop_stq_idx,
        io_enq_bits_uop_ldq_idx,
        io_enq_bits_uop_rob_idx,
        io_enq_bits_uop_csr_addr,
        io_enq_bits_uop_imm_packed,
        io_enq_bits_uop_taken,
        io_enq_bits_uop_pc_lob,
        io_enq_bits_uop_edge_inst,
        io_enq_bits_uop_ftq_idx,
        io_enq_bits_uop_br_tag,
        io_enq_bits_uop_br_mask,
        io_enq_bits_uop_is_sfb,
        io_enq_bits_uop_is_jal,
        io_enq_bits_uop_is_jalr,
        io_enq_bits_uop_is_br,
        io_enq_bits_uop_iw_p2_poisoned,
        io_enq_bits_uop_iw_p1_poisoned,
        io_enq_bits_uop_iw_state,
        io_enq_bits_uop_ctrl_is_std,
        io_enq_bits_uop_ctrl_is_sta,
        io_enq_bits_uop_ctrl_is_load,
        io_enq_bits_uop_ctrl_csr_cmd,
        io_enq_bits_uop_ctrl_fcn_dw,
        io_enq_bits_uop_ctrl_op_fcn,
        io_enq_bits_uop_ctrl_imm_sel,
        io_enq_bits_uop_ctrl_op2_sel,
        io_enq_bits_uop_ctrl_op1_sel,
        io_enq_bits_uop_ctrl_br_type,
        io_enq_bits_uop_fu_code,
        io_enq_bits_uop_iq_type,
        io_enq_bits_uop_debug_pc,
        io_enq_bits_uop_is_rvc,
        io_enq_bits_uop_debug_inst,
        io_enq_bits_uop_inst,
        io_enq_bits_uop_uopc}),	// @[util.scala:464:20]
    .R0_data (_ram_ext_R0_data)
  );
  assign io_enq_ready = ~full;	// @[util.scala:474:24, :504:19]
  assign io_deq_valid = ~_io_empty_T_1 & _GEN_0 & (io_brupdate_b1_mispredict_mask & out_uop_br_mask) == 12'h0 & ~(io_flush & out_uop_uses_ldq);	// @[util.scala:118:{51,59}, :473:25, :476:{42,69}, :508:19, :509:{108,111,122}]
  assign io_deq_bits_uop_br_mask = out_uop_br_mask & ~io_brupdate_b1_resolve_mask;	// @[util.scala:85:{25,27}, :508:19]
  assign io_deq_bits_uop_ldq_idx = _GEN_2[deq_ptr_value];	// @[Counter.scala:61:40, util.scala:508:19]
  assign io_deq_bits_uop_stq_idx = _GEN_3[deq_ptr_value];	// @[Counter.scala:61:40, util.scala:508:19]
  assign io_deq_bits_uop_is_amo = _GEN_4[deq_ptr_value];	// @[Counter.scala:61:40, util.scala:508:19]
  assign io_deq_bits_uop_uses_ldq = out_uop_uses_ldq;	// @[util.scala:508:19]
  assign io_deq_bits_uop_uses_stq = _GEN_6[deq_ptr_value];	// @[Counter.scala:61:40, util.scala:508:19]
  assign io_deq_bits_data = _ram_ext_R0_data[466:403];	// @[util.scala:464:20]
  assign io_deq_bits_is_hella = _ram_ext_R0_data[467];	// @[util.scala:464:20]
endmodule

