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

module TLRAM(
  input         clock,
                reset,
                auto_in_a_valid,
  input  [2:0]  auto_in_a_bits_opcode,
                auto_in_a_bits_param,
  input  [1:0]  auto_in_a_bits_size,
  input  [7:0]  auto_in_a_bits_source,
  input  [28:0] auto_in_a_bits_address,
  input  [7:0]  auto_in_a_bits_mask,
  input  [63:0] auto_in_a_bits_data,
  input         auto_in_a_bits_corrupt,
                auto_in_d_ready,
  output        auto_in_a_ready,
                auto_in_d_valid,
  output [2:0]  auto_in_d_bits_opcode,
  output [1:0]  auto_in_d_bits_size,
  output [7:0]  auto_in_d_bits_source,
  output [63:0] auto_in_d_bits_data
);

  wire [7:0]  r_raw_data_7;	// @[package.scala:80:42]
  wire [7:0]  r_raw_data_6;	// @[package.scala:80:42]
  wire [7:0]  r_raw_data_5;	// @[package.scala:80:42]
  wire [7:0]  r_raw_data_4;	// @[package.scala:80:42]
  wire [7:0]  r_raw_data_3;	// @[package.scala:80:42]
  wire [7:0]  r_raw_data_2;	// @[package.scala:80:42]
  wire [7:0]  r_raw_data_1;	// @[package.scala:80:42]
  wire [7:0]  r_raw_data_0;	// @[package.scala:80:42]
  wire [7:0]  coded_7;	// @[SRAM.scala:300:21]
  wire [7:0]  coded_6;	// @[SRAM.scala:300:21]
  wire [7:0]  coded_5;	// @[SRAM.scala:300:21]
  wire [7:0]  coded_4;	// @[SRAM.scala:300:21]
  wire [7:0]  coded_3;	// @[SRAM.scala:300:21]
  wire [7:0]  coded_2;	// @[SRAM.scala:300:21]
  wire [7:0]  coded_1;	// @[SRAM.scala:300:21]
  wire [7:0]  coded_0;	// @[SRAM.scala:300:21]
  wire        mem_MPORT_en;	// @[SRAM.scala:296:20]
  wire        mem_MPORT_1_en;	// @[SRAM.scala:295:20]
  wire [63:0] _mem_RW0_rdata;	// @[DescribedSRAM.scala:17:26]
  reg         d_full;	// @[SRAM.scala:104:30]
  reg         d_respond;	// @[SRAM.scala:105:26]
  reg  [1:0]  d_size;	// @[SRAM.scala:108:26]
  reg  [7:0]  d_source;	// @[SRAM.scala:109:26]
  reg         d_read;	// @[SRAM.scala:110:26]
  reg         d_atomic;	// @[SRAM.scala:111:26]
  reg         d_sublane;	// @[SRAM.scala:112:26]
  reg  [28:0] d_address;	// @[SRAM.scala:113:26]
  reg  [7:0]  d_mask;	// @[SRAM.scala:114:26]
  reg  [63:0] d_rmw_data;	// @[SRAM.scala:115:26]
  reg  [7:0]  d_raw_data_0;	// @[SRAM.scala:117:26]
  reg  [7:0]  d_raw_data_1;	// @[SRAM.scala:117:26]
  reg  [7:0]  d_raw_data_2;	// @[SRAM.scala:117:26]
  reg  [7:0]  d_raw_data_3;	// @[SRAM.scala:117:26]
  reg  [7:0]  d_raw_data_4;	// @[SRAM.scala:117:26]
  reg  [7:0]  d_raw_data_5;	// @[SRAM.scala:117:26]
  reg  [7:0]  d_raw_data_6;	// @[SRAM.scala:117:26]
  reg  [7:0]  d_raw_data_7;	// @[SRAM.scala:117:26]
  reg         r_full;	// @[SRAM.scala:120:30]
  reg  [1:0]  r_size;	// @[SRAM.scala:123:26]
  reg  [7:0]  r_source;	// @[SRAM.scala:124:26]
  reg         r_read;	// @[SRAM.scala:125:26]
  reg         r_atomic;	// @[SRAM.scala:126:26]
  reg         r_sublane;	// @[SRAM.scala:127:26]
  reg  [28:0] r_address;	// @[SRAM.scala:128:26]
  reg  [7:0]  r_mask;	// @[SRAM.scala:129:26]
  reg  [63:0] r_rmw_data;	// @[SRAM.scala:130:26]
  wire        d_mux = d_full & d_respond;	// @[SRAM.scala:104:30, :105:26, :192:24]
  wire [2:0]  in_d_bits_opcode = {2'h0, d_mux ? d_read | d_atomic : r_read | r_atomic};	// @[SRAM.scala:110:26, :111:26, :125:26, :126:26, :192:24, :194:{22,37,57}, :195:23]
  wire [1:0]  in_d_bits_size = d_mux ? d_size : r_size;	// @[SRAM.scala:108:26, :123:26, :192:24, :197:29]
  wire [7:0]  in_d_bits_source = d_mux ? d_source : r_source;	// @[SRAM.scala:109:26, :124:26, :192:24, :198:29]
  wire        d_wb = d_full & (d_sublane | d_atomic);	// @[SRAM.scala:104:30, :111:26, :112:26, :215:{23,37}]
  wire        in_d_valid = d_mux | r_full & ~d_wb;	// @[SRAM.scala:120:30, :192:24, :215:23, :226:{41,65,68}]
  wire        d_ready = ~d_respond | auto_in_d_ready;	// @[SRAM.scala:105:26, :227:{19,30}]
  wire        r_ready = ~d_wb & (~d_full | d_ready) & ~d_mux & auto_in_d_ready;	// @[SRAM.scala:104:30, :192:24, :215:23, :226:68, :227:30, :228:{42,50,62,81}]
  wire        in_a_ready = ~(d_full & d_wb) & (~r_full | r_ready) & (~r_full | ~(r_atomic | r_sublane));	// @[SRAM.scala:104:30, :120:30, :126:26, :127:26, :215:23, :228:62, :229:{19,28,41,49,61,73,76,87}]
  wire        a_read = auto_in_a_bits_opcode == 3'h4;	// @[SRAM.scala:237:35]
  wire        a_fire = in_a_ready & auto_in_a_valid;	// @[Decoupled.scala:51:35, SRAM.scala:229:61]
  assign mem_MPORT_1_en = d_wb | a_fire & ~a_read;	// @[Decoupled.scala:51:35, SRAM.scala:215:23, :237:35, :295:{20,52,55}]
  assign mem_MPORT_en = ~mem_MPORT_1_en & a_fire;	// @[Decoupled.scala:51:35, SRAM.scala:295:20, :296:{15,20}]
  assign coded_0 = d_wb ? (d_mask[0] & ~d_read ? d_rmw_data[7:0] : d_raw_data_0) : auto_in_a_bits_data[7:0];	// @[SRAM.scala:110:26, :114:26, :115:26, :117:26, :141:64, :184:{29,32}, :185:30, :187:12, :215:23, :277:67, :300:21]
  assign coded_1 = d_wb ? (d_mask[1] & ~d_read ? d_rmw_data[15:8] : d_raw_data_1) : auto_in_a_bits_data[15:8];	// @[SRAM.scala:110:26, :114:26, :115:26, :117:26, :141:64, :184:{29,32}, :185:30, :187:12, :215:23, :277:67, :300:21]
  assign coded_2 = d_wb ? (d_mask[2] & ~d_read ? d_rmw_data[23:16] : d_raw_data_2) : auto_in_a_bits_data[23:16];	// @[SRAM.scala:110:26, :114:26, :115:26, :117:26, :141:64, :184:{29,32}, :185:30, :187:12, :215:23, :277:67, :300:21]
  assign coded_3 = d_wb ? (d_mask[3] & ~d_read ? d_rmw_data[31:24] : d_raw_data_3) : auto_in_a_bits_data[31:24];	// @[SRAM.scala:110:26, :114:26, :115:26, :117:26, :141:64, :184:{29,32}, :185:30, :187:12, :215:23, :277:67, :300:21]
  assign coded_4 = d_wb ? (d_mask[4] & ~d_read ? d_rmw_data[39:32] : d_raw_data_4) : auto_in_a_bits_data[39:32];	// @[SRAM.scala:110:26, :114:26, :115:26, :117:26, :141:64, :184:{29,32}, :185:30, :187:12, :215:23, :277:67, :300:21]
  assign coded_5 = d_wb ? (d_mask[5] & ~d_read ? d_rmw_data[47:40] : d_raw_data_5) : auto_in_a_bits_data[47:40];	// @[SRAM.scala:110:26, :114:26, :115:26, :117:26, :141:64, :184:{29,32}, :185:30, :187:12, :215:23, :277:67, :300:21]
  assign coded_6 = d_wb ? (d_mask[6] & ~d_read ? d_rmw_data[55:48] : d_raw_data_6) : auto_in_a_bits_data[55:48];	// @[SRAM.scala:110:26, :114:26, :115:26, :117:26, :141:64, :184:{29,32}, :185:30, :187:12, :215:23, :277:67, :300:21]
  assign coded_7 = d_wb ? (d_mask[7] & ~d_read ? d_rmw_data[63:56] : d_raw_data_7) : auto_in_a_bits_data[63:56];	// @[SRAM.scala:110:26, :114:26, :115:26, :117:26, :141:64, :184:{29,32}, :185:30, :187:12, :215:23, :277:67, :300:21]
  reg         REG;	// @[SRAM.scala:307:58]
  reg  [7:0]  r_0;	// @[Reg.scala:19:16]
  reg  [7:0]  r_1;	// @[Reg.scala:19:16]
  reg  [7:0]  r_2;	// @[Reg.scala:19:16]
  reg  [7:0]  r_3;	// @[Reg.scala:19:16]
  reg  [7:0]  r_4;	// @[Reg.scala:19:16]
  reg  [7:0]  r_5;	// @[Reg.scala:19:16]
  reg  [7:0]  r_6;	// @[Reg.scala:19:16]
  reg  [7:0]  r_7;	// @[Reg.scala:19:16]
  assign r_raw_data_0 = REG ? _mem_RW0_rdata[7:0] : r_0;	// @[DescribedSRAM.scala:17:26, Reg.scala:19:16, SRAM.scala:307:58, package.scala:80:42]
  assign r_raw_data_1 = REG ? _mem_RW0_rdata[15:8] : r_1;	// @[DescribedSRAM.scala:17:26, Reg.scala:19:16, SRAM.scala:307:58, package.scala:80:42]
  assign r_raw_data_2 = REG ? _mem_RW0_rdata[23:16] : r_2;	// @[DescribedSRAM.scala:17:26, Reg.scala:19:16, SRAM.scala:307:58, package.scala:80:42]
  assign r_raw_data_3 = REG ? _mem_RW0_rdata[31:24] : r_3;	// @[DescribedSRAM.scala:17:26, Reg.scala:19:16, SRAM.scala:307:58, package.scala:80:42]
  assign r_raw_data_4 = REG ? _mem_RW0_rdata[39:32] : r_4;	// @[DescribedSRAM.scala:17:26, Reg.scala:19:16, SRAM.scala:307:58, package.scala:80:42]
  assign r_raw_data_5 = REG ? _mem_RW0_rdata[47:40] : r_5;	// @[DescribedSRAM.scala:17:26, Reg.scala:19:16, SRAM.scala:307:58, package.scala:80:42]
  assign r_raw_data_6 = REG ? _mem_RW0_rdata[55:48] : r_6;	// @[DescribedSRAM.scala:17:26, Reg.scala:19:16, SRAM.scala:307:58, package.scala:80:42]
  assign r_raw_data_7 = REG ? _mem_RW0_rdata[63:56] : r_7;	// @[DescribedSRAM.scala:17:26, Reg.scala:19:16, SRAM.scala:307:58, package.scala:80:42]
  wire        _T_17 = r_full & r_ready;	// @[SRAM.scala:120:30, :228:62, :241:18]
  always @(posedge clock) begin
    if (reset) begin
      d_full <= 1'h0;	// @[SRAM.scala:104:30]
      r_full <= 1'h0;	// @[SRAM.scala:120:30]
    end
    else begin
      d_full <= _T_17 | ~d_ready & d_full;	// @[SRAM.scala:104:30, :227:30, :240:{20,29}, :241:{18,30}, :242:18]
      r_full <= a_fire | ~r_ready & r_full;	// @[Decoupled.scala:51:35, SRAM.scala:120:30, :228:62, :259:{20,29}, :260:24, :261:18]
    end
    d_respond <= ~_T_17 & d_respond;	// @[SRAM.scala:105:26, :241:{18,30}, :243:18]
    if (_T_17) begin	// @[SRAM.scala:241:18]
      d_size <= r_size;	// @[SRAM.scala:108:26, :123:26]
      d_source <= r_source;	// @[SRAM.scala:109:26, :124:26]
      d_read <= r_read;	// @[SRAM.scala:110:26, :125:26]
      d_atomic <= r_atomic;	// @[SRAM.scala:111:26, :126:26]
      d_sublane <= r_sublane;	// @[SRAM.scala:112:26, :127:26]
      d_address <= r_address;	// @[SRAM.scala:113:26, :128:26]
      d_mask <= r_mask;	// @[SRAM.scala:114:26, :129:26]
      d_rmw_data <= r_rmw_data;	// @[SRAM.scala:115:26, :130:26]
      if (REG) begin	// @[SRAM.scala:307:58]
        d_raw_data_0 <= _mem_RW0_rdata[7:0];	// @[DescribedSRAM.scala:17:26, SRAM.scala:117:26]
        d_raw_data_1 <= _mem_RW0_rdata[15:8];	// @[DescribedSRAM.scala:17:26, SRAM.scala:117:26]
        d_raw_data_2 <= _mem_RW0_rdata[23:16];	// @[DescribedSRAM.scala:17:26, SRAM.scala:117:26]
        d_raw_data_3 <= _mem_RW0_rdata[31:24];	// @[DescribedSRAM.scala:17:26, SRAM.scala:117:26]
        d_raw_data_4 <= _mem_RW0_rdata[39:32];	// @[DescribedSRAM.scala:17:26, SRAM.scala:117:26]
        d_raw_data_5 <= _mem_RW0_rdata[47:40];	// @[DescribedSRAM.scala:17:26, SRAM.scala:117:26]
        d_raw_data_6 <= _mem_RW0_rdata[55:48];	// @[DescribedSRAM.scala:17:26, SRAM.scala:117:26]
        d_raw_data_7 <= _mem_RW0_rdata[63:56];	// @[DescribedSRAM.scala:17:26, SRAM.scala:117:26]
      end
      else begin	// @[SRAM.scala:307:58]
        d_raw_data_0 <= r_0;	// @[Reg.scala:19:16, SRAM.scala:117:26]
        d_raw_data_1 <= r_1;	// @[Reg.scala:19:16, SRAM.scala:117:26]
        d_raw_data_2 <= r_2;	// @[Reg.scala:19:16, SRAM.scala:117:26]
        d_raw_data_3 <= r_3;	// @[Reg.scala:19:16, SRAM.scala:117:26]
        d_raw_data_4 <= r_4;	// @[Reg.scala:19:16, SRAM.scala:117:26]
        d_raw_data_5 <= r_5;	// @[Reg.scala:19:16, SRAM.scala:117:26]
        d_raw_data_6 <= r_6;	// @[Reg.scala:19:16, SRAM.scala:117:26]
        d_raw_data_7 <= r_7;	// @[Reg.scala:19:16, SRAM.scala:117:26]
      end
    end
    if (a_fire) begin	// @[Decoupled.scala:51:35]
      r_size <= auto_in_a_bits_size;	// @[SRAM.scala:123:26]
      r_source <= auto_in_a_bits_source;	// @[SRAM.scala:124:26]
      r_read <= a_read;	// @[SRAM.scala:125:26, :237:35]
      r_address <= auto_in_a_bits_address;	// @[SRAM.scala:128:26]
      r_mask <= auto_in_a_bits_mask;	// @[SRAM.scala:129:26]
    end
    r_atomic <= ~a_fire & r_atomic;	// @[Decoupled.scala:51:35, SRAM.scala:126:26, :260:24, :268:18]
    r_sublane <= ~a_fire & r_sublane;	// @[Decoupled.scala:51:35, SRAM.scala:126:26, :127:26, :260:24, :268:18, :269:18]
    if (a_fire & ~a_read)	// @[Decoupled.scala:51:35, SRAM.scala:130:26, :237:35, :260:24, :273:{13,22,35}]
      r_rmw_data <= auto_in_a_bits_data;	// @[SRAM.scala:130:26]
    REG <= mem_MPORT_en;	// @[SRAM.scala:296:20, :307:58]
    if (REG) begin	// @[SRAM.scala:307:58]
      r_0 <= _mem_RW0_rdata[7:0];	// @[DescribedSRAM.scala:17:26, Reg.scala:19:16]
      r_1 <= _mem_RW0_rdata[15:8];	// @[DescribedSRAM.scala:17:26, Reg.scala:19:16]
      r_2 <= _mem_RW0_rdata[23:16];	// @[DescribedSRAM.scala:17:26, Reg.scala:19:16]
      r_3 <= _mem_RW0_rdata[31:24];	// @[DescribedSRAM.scala:17:26, Reg.scala:19:16]
      r_4 <= _mem_RW0_rdata[39:32];	// @[DescribedSRAM.scala:17:26, Reg.scala:19:16]
      r_5 <= _mem_RW0_rdata[47:40];	// @[DescribedSRAM.scala:17:26, Reg.scala:19:16]
      r_6 <= _mem_RW0_rdata[55:48];	// @[DescribedSRAM.scala:17:26, Reg.scala:19:16]
      r_7 <= _mem_RW0_rdata[63:56];	// @[DescribedSRAM.scala:17:26, Reg.scala:19:16]
    end
  end // always @(posedge)
  `ifndef SYNTHESIS
    always @(posedge clock) begin	// @[SRAM.scala:223:12]
      if (~reset & r_full & d_wb) begin	// @[SRAM.scala:120:30, :215:23, :223:12]
        if (`ASSERT_VERBOSE_COND_)	// @[SRAM.scala:223:12]
          $error("Assertion failed\n    at SRAM.scala:223 assert (!(r_full && d_wb) || (d_full && d_read && d_need_fix))\n");	// @[SRAM.scala:223:12]
        if (`STOP_COND_)	// @[SRAM.scala:223:12]
          $fatal;	// @[SRAM.scala:223:12]
      end
    end // always @(posedge)
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
        d_full = _RANDOM_0[0];	// @[SRAM.scala:104:30]
        d_respond = _RANDOM_0[1];	// @[SRAM.scala:104:30, :105:26]
        d_size = _RANDOM_0[9:8];	// @[SRAM.scala:104:30, :108:26]
        d_source = _RANDOM_0[17:10];	// @[SRAM.scala:104:30, :109:26]
        d_read = _RANDOM_0[18];	// @[SRAM.scala:104:30, :110:26]
        d_atomic = _RANDOM_0[19];	// @[SRAM.scala:104:30, :111:26]
        d_sublane = _RANDOM_0[20];	// @[SRAM.scala:104:30, :112:26]
        d_address = {_RANDOM_0[31:21], _RANDOM_1[17:0]};	// @[SRAM.scala:104:30, :113:26]
        d_mask = _RANDOM_1[25:18];	// @[SRAM.scala:113:26, :114:26]
        d_rmw_data = {_RANDOM_1[31:26], _RANDOM_2, _RANDOM_3[25:0]};	// @[SRAM.scala:113:26, :115:26]
        d_raw_data_0 = {_RANDOM_3[31:27], _RANDOM_4[2:0]};	// @[SRAM.scala:115:26, :117:26]
        d_raw_data_1 = _RANDOM_4[10:3];	// @[SRAM.scala:117:26]
        d_raw_data_2 = _RANDOM_4[18:11];	// @[SRAM.scala:117:26]
        d_raw_data_3 = _RANDOM_4[26:19];	// @[SRAM.scala:117:26]
        d_raw_data_4 = {_RANDOM_4[31:27], _RANDOM_5[2:0]};	// @[SRAM.scala:117:26]
        d_raw_data_5 = _RANDOM_5[10:3];	// @[SRAM.scala:117:26]
        d_raw_data_6 = _RANDOM_5[18:11];	// @[SRAM.scala:117:26]
        d_raw_data_7 = _RANDOM_5[26:19];	// @[SRAM.scala:117:26]
        r_full = _RANDOM_5[27];	// @[SRAM.scala:117:26, :120:30]
        r_size = _RANDOM_6[3:2];	// @[SRAM.scala:123:26]
        r_source = _RANDOM_6[11:4];	// @[SRAM.scala:123:26, :124:26]
        r_read = _RANDOM_6[12];	// @[SRAM.scala:123:26, :125:26]
        r_atomic = _RANDOM_6[13];	// @[SRAM.scala:123:26, :126:26]
        r_sublane = _RANDOM_6[14];	// @[SRAM.scala:123:26, :127:26]
        r_address = {_RANDOM_6[31:15], _RANDOM_7[11:0]};	// @[SRAM.scala:123:26, :128:26]
        r_mask = _RANDOM_7[19:12];	// @[SRAM.scala:128:26, :129:26]
        r_rmw_data = {_RANDOM_7[31:20], _RANDOM_8, _RANDOM_9[19:0]};	// @[SRAM.scala:128:26, :130:26]
        REG = _RANDOM_9[22];	// @[SRAM.scala:130:26, :307:58]
        r_0 = _RANDOM_9[30:23];	// @[Reg.scala:19:16, SRAM.scala:130:26]
        r_1 = {_RANDOM_9[31], _RANDOM_10[6:0]};	// @[Reg.scala:19:16, SRAM.scala:130:26]
        r_2 = _RANDOM_10[14:7];	// @[Reg.scala:19:16]
        r_3 = _RANDOM_10[22:15];	// @[Reg.scala:19:16]
        r_4 = _RANDOM_10[30:23];	// @[Reg.scala:19:16]
        r_5 = {_RANDOM_10[31], _RANDOM_11[6:0]};	// @[Reg.scala:19:16]
        r_6 = _RANDOM_11[14:7];	// @[Reg.scala:19:16]
        r_7 = _RANDOM_11[22:15];	// @[Reg.scala:19:16]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  TLMonitor_70 monitor (	// @[Nodes.scala:24:25]
    .clock                (clock),
    .reset                (reset),
    .io_in_a_ready        (in_a_ready),	// @[SRAM.scala:229:61]
    .io_in_a_valid        (auto_in_a_valid),
    .io_in_a_bits_opcode  (auto_in_a_bits_opcode),
    .io_in_a_bits_param   (auto_in_a_bits_param),
    .io_in_a_bits_size    (auto_in_a_bits_size),
    .io_in_a_bits_source  (auto_in_a_bits_source),
    .io_in_a_bits_address (auto_in_a_bits_address),
    .io_in_a_bits_mask    (auto_in_a_bits_mask),
    .io_in_a_bits_corrupt (auto_in_a_bits_corrupt),
    .io_in_d_ready        (auto_in_d_ready),
    .io_in_d_valid        (in_d_valid),	// @[SRAM.scala:226:41]
    .io_in_d_bits_opcode  (in_d_bits_opcode),	// @[SRAM.scala:195:23]
    .io_in_d_bits_size    (in_d_bits_size),	// @[SRAM.scala:197:29]
    .io_in_d_bits_source  (in_d_bits_source)	// @[SRAM.scala:198:29]
  );
  mem_1 mem (	// @[DescribedSRAM.scala:17:26]
    .RW0_addr  (d_wb ? d_address[11:3] : auto_in_a_bits_address[11:3]),	// @[SRAM.scala:113:26, :215:23, :298:21]
    .RW0_en    (mem_MPORT_en | mem_MPORT_1_en),	// @[DescribedSRAM.scala:17:26, SRAM.scala:295:20, :296:20]
    .RW0_clk   (clock),
    .RW0_wmode (mem_MPORT_1_en),	// @[SRAM.scala:295:20]
    .RW0_wdata ({coded_7, coded_6, coded_5, coded_4, coded_3, coded_2, coded_1, coded_0}),	// @[DescribedSRAM.scala:17:26, SRAM.scala:300:21]
    .RW0_wmask (d_wb ? d_mask : auto_in_a_bits_mask),	// @[SRAM.scala:114:26, :215:23, :299:21]
    .RW0_rdata (_mem_RW0_rdata)
  );
  assign auto_in_a_ready = in_a_ready;	// @[SRAM.scala:229:61]
  assign auto_in_d_valid = in_d_valid;	// @[SRAM.scala:226:41]
  assign auto_in_d_bits_opcode = in_d_bits_opcode;	// @[SRAM.scala:195:23]
  assign auto_in_d_bits_size = in_d_bits_size;	// @[SRAM.scala:197:29]
  assign auto_in_d_bits_source = in_d_bits_source;	// @[SRAM.scala:198:29]
  assign auto_in_d_bits_data = d_mux ? {d_raw_data_7, d_raw_data_6, d_raw_data_5, d_raw_data_4, d_raw_data_3, d_raw_data_2, d_raw_data_1, d_raw_data_0} : {r_raw_data_7, r_raw_data_6, r_raw_data_5, r_raw_data_4, r_raw_data_3, r_raw_data_2, r_raw_data_1, r_raw_data_0};	// @[Cat.scala:33:92, SRAM.scala:117:26, :192:24, :201:29, package.scala:80:42]
endmodule

