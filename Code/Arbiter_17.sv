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

module Arbiter_17(
  input          io_in_0_valid,
  input  [2:0]   io_in_0_bits_tl_a_opcode,
                 io_in_0_bits_tl_a_param,
  input  [3:0]   io_in_0_bits_tl_a_size,
                 io_in_0_bits_tl_a_source,
  input  [31:0]  io_in_0_bits_tl_a_address,
  input  [15:0]  io_in_0_bits_tl_a_mask,
  input  [127:0] io_in_0_bits_tl_a_data,
  input          io_in_0_bits_tl_a_corrupt,
  input  [38:0]  io_in_0_bits_vaddr,
  input          io_in_0_bits_status_debug,
                 io_in_0_bits_status_cease,
                 io_in_0_bits_status_wfi,
  input  [31:0]  io_in_0_bits_status_isa,
  input  [1:0]   io_in_0_bits_status_dprv,
  input          io_in_0_bits_status_dv,
  input  [1:0]   io_in_0_bits_status_prv,
  input          io_in_0_bits_status_v,
                 io_in_0_bits_status_sd,
  input  [22:0]  io_in_0_bits_status_zero2,
  input          io_in_0_bits_status_mpv,
                 io_in_0_bits_status_gva,
                 io_in_0_bits_status_mbe,
                 io_in_0_bits_status_sbe,
  input  [1:0]   io_in_0_bits_status_sxl,
                 io_in_0_bits_status_uxl,
  input          io_in_0_bits_status_sd_rv32,
  input  [7:0]   io_in_0_bits_status_zero1,
  input          io_in_0_bits_status_tsr,
                 io_in_0_bits_status_tw,
                 io_in_0_bits_status_tvm,
                 io_in_0_bits_status_mxr,
                 io_in_0_bits_status_sum,
                 io_in_0_bits_status_mprv,
  input  [1:0]   io_in_0_bits_status_xs,
                 io_in_0_bits_status_fs,
                 io_in_0_bits_status_mpp,
                 io_in_0_bits_status_vs,
  input          io_in_0_bits_status_spp,
                 io_in_0_bits_status_mpie,
                 io_in_0_bits_status_ube,
                 io_in_0_bits_status_spie,
                 io_in_0_bits_status_upie,
                 io_in_0_bits_status_mie,
                 io_in_0_bits_status_hie,
                 io_in_0_bits_status_sie,
                 io_in_0_bits_status_uie,
                 io_in_1_valid,
  input  [2:0]   io_in_1_bits_tl_a_opcode,
                 io_in_1_bits_tl_a_param,
  input  [3:0]   io_in_1_bits_tl_a_size,
                 io_in_1_bits_tl_a_source,
  input  [31:0]  io_in_1_bits_tl_a_address,
  input  [15:0]  io_in_1_bits_tl_a_mask,
  input  [127:0] io_in_1_bits_tl_a_data,
  input          io_in_1_bits_tl_a_corrupt,
  input  [38:0]  io_in_1_bits_vaddr,
  input          io_in_1_bits_status_debug,
                 io_in_1_bits_status_cease,
                 io_in_1_bits_status_wfi,
  input  [31:0]  io_in_1_bits_status_isa,
  input  [1:0]   io_in_1_bits_status_dprv,
  input          io_in_1_bits_status_dv,
  input  [1:0]   io_in_1_bits_status_prv,
  input          io_in_1_bits_status_v,
                 io_in_1_bits_status_sd,
  input  [22:0]  io_in_1_bits_status_zero2,
  input          io_in_1_bits_status_mpv,
                 io_in_1_bits_status_gva,
                 io_in_1_bits_status_mbe,
                 io_in_1_bits_status_sbe,
  input  [1:0]   io_in_1_bits_status_sxl,
                 io_in_1_bits_status_uxl,
  input          io_in_1_bits_status_sd_rv32,
  input  [7:0]   io_in_1_bits_status_zero1,
  input          io_in_1_bits_status_tsr,
                 io_in_1_bits_status_tw,
                 io_in_1_bits_status_tvm,
                 io_in_1_bits_status_mxr,
                 io_in_1_bits_status_sum,
                 io_in_1_bits_status_mprv,
  input  [1:0]   io_in_1_bits_status_xs,
                 io_in_1_bits_status_fs,
                 io_in_1_bits_status_mpp,
                 io_in_1_bits_status_vs,
  input          io_in_1_bits_status_spp,
                 io_in_1_bits_status_mpie,
                 io_in_1_bits_status_ube,
                 io_in_1_bits_status_spie,
                 io_in_1_bits_status_upie,
                 io_in_1_bits_status_mie,
                 io_in_1_bits_status_hie,
                 io_in_1_bits_status_sie,
                 io_in_1_bits_status_uie,
                 io_in_2_valid,
  input  [2:0]   io_in_2_bits_tl_a_opcode,
  input  [3:0]   io_in_2_bits_tl_a_size,
                 io_in_2_bits_tl_a_source,
  input  [15:0]  io_in_2_bits_tl_a_mask,
  input  [127:0] io_in_2_bits_tl_a_data,
  input  [38:0]  io_in_2_bits_vaddr,
  input          io_in_2_bits_status_debug,
                 io_in_2_bits_status_cease,
                 io_in_2_bits_status_wfi,
  input  [31:0]  io_in_2_bits_status_isa,
  input  [1:0]   io_in_2_bits_status_dprv,
  input          io_in_2_bits_status_dv,
  input  [1:0]   io_in_2_bits_status_prv,
  input          io_in_2_bits_status_v,
                 io_in_2_bits_status_sd,
  input  [22:0]  io_in_2_bits_status_zero2,
  input          io_in_2_bits_status_mpv,
                 io_in_2_bits_status_gva,
                 io_in_2_bits_status_mbe,
                 io_in_2_bits_status_sbe,
  input  [1:0]   io_in_2_bits_status_sxl,
                 io_in_2_bits_status_uxl,
  input          io_in_2_bits_status_sd_rv32,
  input  [7:0]   io_in_2_bits_status_zero1,
  input          io_in_2_bits_status_tsr,
                 io_in_2_bits_status_tw,
                 io_in_2_bits_status_tvm,
                 io_in_2_bits_status_mxr,
                 io_in_2_bits_status_sum,
                 io_in_2_bits_status_mprv,
  input  [1:0]   io_in_2_bits_status_xs,
                 io_in_2_bits_status_fs,
                 io_in_2_bits_status_mpp,
                 io_in_2_bits_status_vs,
  input          io_in_2_bits_status_spp,
                 io_in_2_bits_status_mpie,
                 io_in_2_bits_status_ube,
                 io_in_2_bits_status_spie,
                 io_in_2_bits_status_upie,
                 io_in_2_bits_status_mie,
                 io_in_2_bits_status_hie,
                 io_in_2_bits_status_sie,
                 io_in_2_bits_status_uie,
                 io_out_ready,
  output         io_in_0_ready,
                 io_in_1_ready,
                 io_in_2_ready,
                 io_out_valid,
  output [2:0]   io_out_bits_tl_a_opcode,
                 io_out_bits_tl_a_param,
  output [3:0]   io_out_bits_tl_a_size,
                 io_out_bits_tl_a_source,
  output [31:0]  io_out_bits_tl_a_address,
  output [15:0]  io_out_bits_tl_a_mask,
  output [127:0] io_out_bits_tl_a_data,
  output         io_out_bits_tl_a_corrupt,
  output [38:0]  io_out_bits_vaddr,
  output         io_out_bits_status_debug,
                 io_out_bits_status_cease,
                 io_out_bits_status_wfi,
  output [31:0]  io_out_bits_status_isa,
  output [1:0]   io_out_bits_status_dprv,
  output         io_out_bits_status_dv,
  output [1:0]   io_out_bits_status_prv,
  output         io_out_bits_status_v,
                 io_out_bits_status_sd,
  output [22:0]  io_out_bits_status_zero2,
  output         io_out_bits_status_mpv,
                 io_out_bits_status_gva,
                 io_out_bits_status_mbe,
                 io_out_bits_status_sbe,
  output [1:0]   io_out_bits_status_sxl,
                 io_out_bits_status_uxl,
  output         io_out_bits_status_sd_rv32,
  output [7:0]   io_out_bits_status_zero1,
  output         io_out_bits_status_tsr,
                 io_out_bits_status_tw,
                 io_out_bits_status_tvm,
                 io_out_bits_status_mxr,
                 io_out_bits_status_sum,
                 io_out_bits_status_mprv,
  output [1:0]   io_out_bits_status_xs,
                 io_out_bits_status_fs,
                 io_out_bits_status_mpp,
                 io_out_bits_status_vs,
  output         io_out_bits_status_spp,
                 io_out_bits_status_mpie,
                 io_out_bits_status_ube,
                 io_out_bits_status_spie,
                 io_out_bits_status_upie,
                 io_out_bits_status_mie,
                 io_out_bits_status_hie,
                 io_out_bits_status_sie,
                 io_out_bits_status_uie
);

  wire _grant_T = io_in_0_valid | io_in_1_valid;	// @[Arbiter.scala:45:68]
  assign io_in_0_ready = io_out_ready;
  assign io_in_1_ready = ~io_in_0_valid & io_out_ready;	// @[Arbiter.scala:45:78, :146:19]
  assign io_in_2_ready = ~_grant_T & io_out_ready;	// @[Arbiter.scala:45:{68,78}, :146:19]
  assign io_out_valid = _grant_T | io_in_2_valid;	// @[Arbiter.scala:45:68, :147:31]
  assign io_out_bits_tl_a_opcode = io_in_0_valid ? io_in_0_bits_tl_a_opcode : io_in_1_valid ? io_in_1_bits_tl_a_opcode : io_in_2_bits_tl_a_opcode;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_tl_a_param = io_in_0_valid ? io_in_0_bits_tl_a_param : io_in_1_valid ? io_in_1_bits_tl_a_param : 3'h0;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_tl_a_size = io_in_0_valid ? io_in_0_bits_tl_a_size : io_in_1_valid ? io_in_1_bits_tl_a_size : io_in_2_bits_tl_a_size;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_tl_a_source = io_in_0_valid ? io_in_0_bits_tl_a_source : io_in_1_valid ? io_in_1_bits_tl_a_source : io_in_2_bits_tl_a_source;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_tl_a_address = io_in_0_valid ? io_in_0_bits_tl_a_address : io_in_1_valid ? io_in_1_bits_tl_a_address : 32'h0;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_tl_a_mask = io_in_0_valid ? io_in_0_bits_tl_a_mask : io_in_1_valid ? io_in_1_bits_tl_a_mask : io_in_2_bits_tl_a_mask;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_tl_a_data = io_in_0_valid ? io_in_0_bits_tl_a_data : io_in_1_valid ? io_in_1_bits_tl_a_data : io_in_2_bits_tl_a_data;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_tl_a_corrupt = io_in_0_valid ? io_in_0_bits_tl_a_corrupt : io_in_1_valid & io_in_1_bits_tl_a_corrupt;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_vaddr = io_in_0_valid ? io_in_0_bits_vaddr : io_in_1_valid ? io_in_1_bits_vaddr : io_in_2_bits_vaddr;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_debug = io_in_0_valid ? io_in_0_bits_status_debug : io_in_1_valid ? io_in_1_bits_status_debug : io_in_2_bits_status_debug;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_cease = io_in_0_valid ? io_in_0_bits_status_cease : io_in_1_valid ? io_in_1_bits_status_cease : io_in_2_bits_status_cease;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_wfi = io_in_0_valid ? io_in_0_bits_status_wfi : io_in_1_valid ? io_in_1_bits_status_wfi : io_in_2_bits_status_wfi;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_isa = io_in_0_valid ? io_in_0_bits_status_isa : io_in_1_valid ? io_in_1_bits_status_isa : io_in_2_bits_status_isa;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_dprv = io_in_0_valid ? io_in_0_bits_status_dprv : io_in_1_valid ? io_in_1_bits_status_dprv : io_in_2_bits_status_dprv;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_dv = io_in_0_valid ? io_in_0_bits_status_dv : io_in_1_valid ? io_in_1_bits_status_dv : io_in_2_bits_status_dv;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_prv = io_in_0_valid ? io_in_0_bits_status_prv : io_in_1_valid ? io_in_1_bits_status_prv : io_in_2_bits_status_prv;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_v = io_in_0_valid ? io_in_0_bits_status_v : io_in_1_valid ? io_in_1_bits_status_v : io_in_2_bits_status_v;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_sd = io_in_0_valid ? io_in_0_bits_status_sd : io_in_1_valid ? io_in_1_bits_status_sd : io_in_2_bits_status_sd;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_zero2 = io_in_0_valid ? io_in_0_bits_status_zero2 : io_in_1_valid ? io_in_1_bits_status_zero2 : io_in_2_bits_status_zero2;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_mpv = io_in_0_valid ? io_in_0_bits_status_mpv : io_in_1_valid ? io_in_1_bits_status_mpv : io_in_2_bits_status_mpv;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_gva = io_in_0_valid ? io_in_0_bits_status_gva : io_in_1_valid ? io_in_1_bits_status_gva : io_in_2_bits_status_gva;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_mbe = io_in_0_valid ? io_in_0_bits_status_mbe : io_in_1_valid ? io_in_1_bits_status_mbe : io_in_2_bits_status_mbe;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_sbe = io_in_0_valid ? io_in_0_bits_status_sbe : io_in_1_valid ? io_in_1_bits_status_sbe : io_in_2_bits_status_sbe;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_sxl = io_in_0_valid ? io_in_0_bits_status_sxl : io_in_1_valid ? io_in_1_bits_status_sxl : io_in_2_bits_status_sxl;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_uxl = io_in_0_valid ? io_in_0_bits_status_uxl : io_in_1_valid ? io_in_1_bits_status_uxl : io_in_2_bits_status_uxl;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_sd_rv32 = io_in_0_valid ? io_in_0_bits_status_sd_rv32 : io_in_1_valid ? io_in_1_bits_status_sd_rv32 : io_in_2_bits_status_sd_rv32;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_zero1 = io_in_0_valid ? io_in_0_bits_status_zero1 : io_in_1_valid ? io_in_1_bits_status_zero1 : io_in_2_bits_status_zero1;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_tsr = io_in_0_valid ? io_in_0_bits_status_tsr : io_in_1_valid ? io_in_1_bits_status_tsr : io_in_2_bits_status_tsr;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_tw = io_in_0_valid ? io_in_0_bits_status_tw : io_in_1_valid ? io_in_1_bits_status_tw : io_in_2_bits_status_tw;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_tvm = io_in_0_valid ? io_in_0_bits_status_tvm : io_in_1_valid ? io_in_1_bits_status_tvm : io_in_2_bits_status_tvm;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_mxr = io_in_0_valid ? io_in_0_bits_status_mxr : io_in_1_valid ? io_in_1_bits_status_mxr : io_in_2_bits_status_mxr;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_sum = io_in_0_valid ? io_in_0_bits_status_sum : io_in_1_valid ? io_in_1_bits_status_sum : io_in_2_bits_status_sum;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_mprv = io_in_0_valid ? io_in_0_bits_status_mprv : io_in_1_valid ? io_in_1_bits_status_mprv : io_in_2_bits_status_mprv;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_xs = io_in_0_valid ? io_in_0_bits_status_xs : io_in_1_valid ? io_in_1_bits_status_xs : io_in_2_bits_status_xs;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_fs = io_in_0_valid ? io_in_0_bits_status_fs : io_in_1_valid ? io_in_1_bits_status_fs : io_in_2_bits_status_fs;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_mpp = io_in_0_valid ? io_in_0_bits_status_mpp : io_in_1_valid ? io_in_1_bits_status_mpp : io_in_2_bits_status_mpp;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_vs = io_in_0_valid ? io_in_0_bits_status_vs : io_in_1_valid ? io_in_1_bits_status_vs : io_in_2_bits_status_vs;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_spp = io_in_0_valid ? io_in_0_bits_status_spp : io_in_1_valid ? io_in_1_bits_status_spp : io_in_2_bits_status_spp;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_mpie = io_in_0_valid ? io_in_0_bits_status_mpie : io_in_1_valid ? io_in_1_bits_status_mpie : io_in_2_bits_status_mpie;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_ube = io_in_0_valid ? io_in_0_bits_status_ube : io_in_1_valid ? io_in_1_bits_status_ube : io_in_2_bits_status_ube;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_spie = io_in_0_valid ? io_in_0_bits_status_spie : io_in_1_valid ? io_in_1_bits_status_spie : io_in_2_bits_status_spie;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_upie = io_in_0_valid ? io_in_0_bits_status_upie : io_in_1_valid ? io_in_1_bits_status_upie : io_in_2_bits_status_upie;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_mie = io_in_0_valid ? io_in_0_bits_status_mie : io_in_1_valid ? io_in_1_bits_status_mie : io_in_2_bits_status_mie;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_hie = io_in_0_valid ? io_in_0_bits_status_hie : io_in_1_valid ? io_in_1_bits_status_hie : io_in_2_bits_status_hie;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_sie = io_in_0_valid ? io_in_0_bits_status_sie : io_in_1_valid ? io_in_1_bits_status_sie : io_in_2_bits_status_sie;	// @[Arbiter.scala:136:15, :138:26, :140:19]
  assign io_out_bits_status_uie = io_in_0_valid ? io_in_0_bits_status_uie : io_in_1_valid ? io_in_1_bits_status_uie : io_in_2_bits_status_uie;	// @[Arbiter.scala:136:15, :138:26, :140:19]
endmodule

