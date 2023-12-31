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

module Queue_37(
  input          clock,
                 reset,
                 io_enq_valid,
  input  [39:0]  io_enq_bits_pc,
                 io_enq_bits_next_pc,
  input          io_enq_bits_edge_inst_0,
  input  [31:0]  io_enq_bits_insts_0,
                 io_enq_bits_insts_1,
                 io_enq_bits_insts_2,
                 io_enq_bits_insts_3,
                 io_enq_bits_exp_insts_0,
                 io_enq_bits_exp_insts_1,
                 io_enq_bits_exp_insts_2,
                 io_enq_bits_exp_insts_3,
  input          io_enq_bits_sfbs_0,
                 io_enq_bits_sfbs_1,
                 io_enq_bits_sfbs_2,
                 io_enq_bits_sfbs_3,
  input  [7:0]   io_enq_bits_sfb_masks_0,
                 io_enq_bits_sfb_masks_1,
                 io_enq_bits_sfb_masks_2,
                 io_enq_bits_sfb_masks_3,
  input  [3:0]   io_enq_bits_sfb_dests_0,
                 io_enq_bits_sfb_dests_1,
                 io_enq_bits_sfb_dests_2,
                 io_enq_bits_sfb_dests_3,
  input          io_enq_bits_shadowable_mask_0,
                 io_enq_bits_shadowable_mask_1,
                 io_enq_bits_shadowable_mask_2,
                 io_enq_bits_shadowable_mask_3,
                 io_enq_bits_cfi_idx_valid,
  input  [1:0]   io_enq_bits_cfi_idx_bits,
  input  [2:0]   io_enq_bits_cfi_type,
  input          io_enq_bits_cfi_is_call,
                 io_enq_bits_cfi_is_ret,
                 io_enq_bits_cfi_npc_plus4,
  input  [39:0]  io_enq_bits_ras_top,
  input  [3:0]   io_enq_bits_mask,
                 io_enq_bits_br_mask,
  input  [63:0]  io_enq_bits_ghist_old_history,
  input          io_enq_bits_ghist_current_saw_branch_not_taken,
                 io_enq_bits_ghist_new_saw_branch_not_taken,
                 io_enq_bits_ghist_new_saw_branch_taken,
  input  [4:0]   io_enq_bits_ghist_ras_idx,
  input          io_enq_bits_lhist_0,
                 io_enq_bits_xcpt_pf_if,
                 io_enq_bits_xcpt_ae_if,
                 io_enq_bits_end_half_valid,
  input  [15:0]  io_enq_bits_end_half_bits,
  input  [119:0] io_enq_bits_bpd_meta_0,
  input  [1:0]   io_enq_bits_fsrc,
                 io_enq_bits_tsrc,
  input          io_deq_ready,
  output         io_enq_ready,
                 io_deq_valid,
  output [39:0]  io_deq_bits_pc,
  output         io_deq_bits_edge_inst_0,
  output [31:0]  io_deq_bits_insts_0,
                 io_deq_bits_insts_1,
                 io_deq_bits_insts_2,
                 io_deq_bits_insts_3,
                 io_deq_bits_exp_insts_0,
                 io_deq_bits_exp_insts_1,
                 io_deq_bits_exp_insts_2,
                 io_deq_bits_exp_insts_3,
  output         io_deq_bits_sfbs_0,
                 io_deq_bits_sfbs_1,
                 io_deq_bits_sfbs_2,
                 io_deq_bits_sfbs_3,
                 io_deq_bits_shadowed_mask_0,
                 io_deq_bits_shadowed_mask_1,
                 io_deq_bits_shadowed_mask_2,
                 io_deq_bits_shadowed_mask_3,
                 io_deq_bits_cfi_idx_valid,
  output [1:0]   io_deq_bits_cfi_idx_bits,
  output [2:0]   io_deq_bits_cfi_type,
  output         io_deq_bits_cfi_is_call,
                 io_deq_bits_cfi_is_ret,
  output [39:0]  io_deq_bits_ras_top,
  output [3:0]   io_deq_bits_mask,
                 io_deq_bits_br_mask,
  output [63:0]  io_deq_bits_ghist_old_history,
  output         io_deq_bits_ghist_current_saw_branch_not_taken,
                 io_deq_bits_ghist_new_saw_branch_not_taken,
                 io_deq_bits_ghist_new_saw_branch_taken,
  output [4:0]   io_deq_bits_ghist_ras_idx,
  output         io_deq_bits_xcpt_pf_if,
                 io_deq_bits_xcpt_ae_if,
                 io_deq_bits_bp_debug_if_oh_0,
                 io_deq_bits_bp_debug_if_oh_1,
                 io_deq_bits_bp_debug_if_oh_2,
                 io_deq_bits_bp_debug_if_oh_3,
                 io_deq_bits_bp_xcpt_if_oh_0,
                 io_deq_bits_bp_xcpt_if_oh_1,
                 io_deq_bits_bp_xcpt_if_oh_2,
                 io_deq_bits_bp_xcpt_if_oh_3,
  output [119:0] io_deq_bits_bpd_meta_0,
  output [1:0]   io_deq_bits_fsrc
);

  wire         _io_enq_ready_output;	// @[Decoupled.scala:303:16, :323:{24,39}]
  wire [682:0] _ram_ext_R0_data;	// @[Decoupled.scala:273:95]
  reg          maybe_full;	// @[Decoupled.scala:276:27]
  wire         do_enq = _io_enq_ready_output & io_enq_valid;	// @[Decoupled.scala:51:35, :303:16, :323:{24,39}]
  assign _io_enq_ready_output = io_deq_ready | ~maybe_full;	// @[Decoupled.scala:276:27, :303:{16,19}, :323:{24,39}]
  always @(posedge clock) begin
    if (reset)
      maybe_full <= 1'h0;	// @[Decoupled.scala:276:27]
    else if (do_enq != (io_deq_ready & maybe_full))	// @[Decoupled.scala:51:35, :276:27, :293:15]
      maybe_full <= do_enq;	// @[Decoupled.scala:51:35, :276:27]
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
        maybe_full = _RANDOM_0[0];	// @[Decoupled.scala:276:27]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  ram_combMem_54 ram_ext (	// @[Decoupled.scala:273:95]
    .R0_addr (1'h0),
    .R0_en   (1'h1),
    .R0_clk  (clock),
    .W0_addr (1'h0),
    .W0_en   (do_enq),	// @[Decoupled.scala:51:35]
    .W0_clk  (clock),
    .W0_data ({io_enq_bits_tsrc, io_enq_bits_fsrc, io_enq_bits_bpd_meta_0, io_enq_bits_end_half_bits, io_enq_bits_end_half_valid, 8'h0, io_enq_bits_xcpt_ae_if, io_enq_bits_xcpt_pf_if, io_enq_bits_lhist_0, io_enq_bits_ghist_ras_idx, io_enq_bits_ghist_new_saw_branch_taken, io_enq_bits_ghist_new_saw_branch_not_taken, io_enq_bits_ghist_current_saw_branch_not_taken, io_enq_bits_ghist_old_history, io_enq_bits_br_mask, io_enq_bits_mask, 5'h0, io_enq_bits_ras_top, io_enq_bits_cfi_npc_plus4, io_enq_bits_cfi_is_ret, io_enq_bits_cfi_is_call, io_enq_bits_cfi_type, io_enq_bits_cfi_idx_bits, io_enq_bits_cfi_idx_valid, 4'h0, io_enq_bits_shadowable_mask_3, io_enq_bits_shadowable_mask_2, io_enq_bits_shadowable_mask_1, io_enq_bits_shadowable_mask_0, io_enq_bits_sfb_dests_3, io_enq_bits_sfb_dests_2, io_enq_bits_sfb_dests_1, io_enq_bits_sfb_dests_0, io_enq_bits_sfb_masks_3, io_enq_bits_sfb_masks_2, io_enq_bits_sfb_masks_1, io_enq_bits_sfb_masks_0, io_enq_bits_sfbs_3, io_enq_bits_sfbs_2, io_enq_bits_sfbs_1, io_enq_bits_sfbs_0, io_enq_bits_exp_insts_3, io_enq_bits_exp_insts_2, io_enq_bits_exp_insts_1, io_enq_bits_exp_insts_0, io_enq_bits_insts_3, io_enq_bits_insts_2, io_enq_bits_insts_1, io_enq_bits_insts_0, io_enq_bits_edge_inst_0, io_enq_bits_next_pc, io_enq_bits_pc}),	// @[Decoupled.scala:273:95]
    .R0_data (_ram_ext_R0_data)
  );
  assign io_enq_ready = _io_enq_ready_output;	// @[Decoupled.scala:303:16, :323:{24,39}]
  assign io_deq_valid = maybe_full;	// @[Decoupled.scala:276:27]
  assign io_deq_bits_pc = _ram_ext_R0_data[39:0];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_edge_inst_0 = _ram_ext_R0_data[80];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_insts_0 = _ram_ext_R0_data[112:81];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_insts_1 = _ram_ext_R0_data[144:113];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_insts_2 = _ram_ext_R0_data[176:145];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_insts_3 = _ram_ext_R0_data[208:177];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_exp_insts_0 = _ram_ext_R0_data[240:209];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_exp_insts_1 = _ram_ext_R0_data[272:241];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_exp_insts_2 = _ram_ext_R0_data[304:273];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_exp_insts_3 = _ram_ext_R0_data[336:305];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_sfbs_0 = _ram_ext_R0_data[337];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_sfbs_1 = _ram_ext_R0_data[338];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_sfbs_2 = _ram_ext_R0_data[339];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_sfbs_3 = _ram_ext_R0_data[340];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_shadowed_mask_0 = _ram_ext_R0_data[393];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_shadowed_mask_1 = _ram_ext_R0_data[394];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_shadowed_mask_2 = _ram_ext_R0_data[395];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_shadowed_mask_3 = _ram_ext_R0_data[396];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_cfi_idx_valid = _ram_ext_R0_data[397];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_cfi_idx_bits = _ram_ext_R0_data[399:398];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_cfi_type = _ram_ext_R0_data[402:400];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_cfi_is_call = _ram_ext_R0_data[403];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_cfi_is_ret = _ram_ext_R0_data[404];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_ras_top = _ram_ext_R0_data[445:406];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_mask = _ram_ext_R0_data[454:451];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_br_mask = _ram_ext_R0_data[458:455];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_ghist_old_history = _ram_ext_R0_data[522:459];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_ghist_current_saw_branch_not_taken = _ram_ext_R0_data[523];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_ghist_new_saw_branch_not_taken = _ram_ext_R0_data[524];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_ghist_new_saw_branch_taken = _ram_ext_R0_data[525];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_ghist_ras_idx = _ram_ext_R0_data[530:526];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_xcpt_pf_if = _ram_ext_R0_data[532];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_xcpt_ae_if = _ram_ext_R0_data[533];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_bp_debug_if_oh_0 = _ram_ext_R0_data[534];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_bp_debug_if_oh_1 = _ram_ext_R0_data[535];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_bp_debug_if_oh_2 = _ram_ext_R0_data[536];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_bp_debug_if_oh_3 = _ram_ext_R0_data[537];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_bp_xcpt_if_oh_0 = _ram_ext_R0_data[538];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_bp_xcpt_if_oh_1 = _ram_ext_R0_data[539];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_bp_xcpt_if_oh_2 = _ram_ext_R0_data[540];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_bp_xcpt_if_oh_3 = _ram_ext_R0_data[541];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_bpd_meta_0 = _ram_ext_R0_data[678:559];	// @[Decoupled.scala:273:95]
  assign io_deq_bits_fsrc = _ram_ext_R0_data[680:679];	// @[Decoupled.scala:273:95]
endmodule

