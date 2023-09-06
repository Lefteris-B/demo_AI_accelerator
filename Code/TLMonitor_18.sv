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

module TLMonitor_18(
  input        clock,
               reset,
               io_in_a_ready,
               io_in_a_valid,
  input [30:0] io_in_a_bits_address,
  input        io_in_d_valid,
  input [2:0]  io_in_d_bits_opcode,
  input [1:0]  io_in_d_bits_param,
  input [3:0]  io_in_d_bits_size,
  input        io_in_d_bits_sink,
               io_in_d_bits_denied,
               io_in_d_bits_corrupt
);

  wire [31:0] _plusarg_reader_1_out;	// @[PlusArg.scala:80:11]
  wire [31:0] _plusarg_reader_out;	// @[PlusArg.scala:80:11]
  wire        a_set = io_in_a_ready & io_in_a_valid;	// @[Decoupled.scala:51:35]
  reg  [8:0]  d_first_counter;	// @[Edges.scala:228:27]
  reg  [2:0]  opcode_1;	// @[Monitor.scala:535:22]
  reg  [1:0]  param_1;	// @[Monitor.scala:536:22]
  reg  [3:0]  size_1;	// @[Monitor.scala:537:22]
  reg         source_1;	// @[Monitor.scala:538:22]
  reg         sink;	// @[Monitor.scala:539:22]
  reg         denied;	// @[Monitor.scala:540:22]
  reg         inflight;	// @[Monitor.scala:611:27]
  reg  [3:0]  inflight_opcodes;	// @[Monitor.scala:613:35]
  reg  [7:0]  inflight_sizes;	// @[Monitor.scala:615:33]
  reg  [8:0]  d_first_counter_1;	// @[Edges.scala:228:27]
  wire        d_first_1 = d_first_counter_1 == 9'h0;	// @[Edges.scala:228:27, :230:25]
  wire        d_release_ack = io_in_d_bits_opcode == 3'h6;	// @[Monitor.scala:81:25, :670:46]
  reg  [31:0] watchdog;	// @[Monitor.scala:706:27]
  reg  [8:0]  d_first_counter_2;	// @[Edges.scala:228:27]
  wire        d_first_2 = d_first_counter_2 == 9'h0;	// @[Edges.scala:228:27, :230:25]
  wire [26:0] _GEN = {23'h0, io_in_d_bits_size};	// @[package.scala:235:71]
  wire [26:0] _d_first_beats1_decode_T_1 = 27'hFFF << _GEN;	// @[package.scala:235:71]
  wire [26:0] _d_first_beats1_decode_T_5 = 27'hFFF << _GEN;	// @[package.scala:235:71]
  wire [26:0] _d_first_beats1_decode_T_9 = 27'hFFF << _GEN;	// @[package.scala:235:71]
  wire        d_clr = io_in_d_valid & d_first_1 & ~d_release_ack;	// @[Edges.scala:230:25, Monitor.scala:670:46, :671:74, :675:72]
  wire        _T_1002 = io_in_d_valid & ~(|d_first_counter);	// @[Edges.scala:228:27, :230:25, Monitor.scala:549:20]
  always @(posedge clock) begin
    if (reset) begin
      d_first_counter <= 9'h0;	// @[Edges.scala:228:27]
      inflight <= 1'h0;	// @[Monitor.scala:611:27]
      inflight_opcodes <= 4'h0;	// @[Misc.scala:205:21, Monitor.scala:613:35, :657:77]
      inflight_sizes <= 8'h0;	// @[Monitor.scala:615:33, :745:35]
      d_first_counter_1 <= 9'h0;	// @[Edges.scala:228:27]
      watchdog <= 32'h0;	// @[Monitor.scala:706:27]
      d_first_counter_2 <= 9'h0;	// @[Edges.scala:228:27]
    end
    else begin
      if (io_in_d_valid) begin
        if (|d_first_counter)	// @[Edges.scala:228:27, :230:25]
          d_first_counter <= d_first_counter - 9'h1;	// @[Edges.scala:228:27, :229:28]
        else if (io_in_d_bits_opcode[0])	// @[Edges.scala:105:36]
          d_first_counter <= ~(_d_first_beats1_decode_T_1[11:3]);	// @[Edges.scala:228:27, package.scala:235:{46,71,76}]
        else	// @[Edges.scala:105:36]
          d_first_counter <= 9'h0;	// @[Edges.scala:228:27]
        if (d_first_1) begin	// @[Edges.scala:230:25]
          if (io_in_d_bits_opcode[0])	// @[Edges.scala:105:36]
            d_first_counter_1 <= ~(_d_first_beats1_decode_T_5[11:3]);	// @[Edges.scala:228:27, package.scala:235:{46,71,76}]
          else	// @[Edges.scala:105:36]
            d_first_counter_1 <= 9'h0;	// @[Edges.scala:228:27]
        end
        else	// @[Edges.scala:230:25]
          d_first_counter_1 <= d_first_counter_1 - 9'h1;	// @[Edges.scala:228:27, :229:28]
        if (d_first_2) begin	// @[Edges.scala:230:25]
          if (io_in_d_bits_opcode[0])	// @[Edges.scala:105:36]
            d_first_counter_2 <= ~(_d_first_beats1_decode_T_9[11:3]);	// @[Edges.scala:228:27, package.scala:235:{46,71,76}]
          else	// @[Edges.scala:105:36]
            d_first_counter_2 <= 9'h0;	// @[Edges.scala:228:27]
        end
        else	// @[Edges.scala:230:25]
          d_first_counter_2 <= d_first_counter_2 - 9'h1;	// @[Edges.scala:228:27, :229:28]
      end
      inflight <= (inflight | a_set) & ~d_clr;	// @[Decoupled.scala:51:35, Monitor.scala:611:27, :675:72, :702:{27,36,38}]
      inflight_opcodes <= (inflight_opcodes | (a_set ? {3'h0, a_set} : 4'h0)) & ~{4{d_clr}};	// @[Decoupled.scala:51:35, Misc.scala:205:21, Monitor.scala:613:35, :627:33, :652:72, :656:28, :657:77, :665:33, :675:{72,91}, :677:21, :703:{43,60,62}]
      inflight_sizes <= (inflight_sizes | (a_set ? {3'h0, a_set ? 5'h5 : 5'h0} : 8'h0)) & ~{8{d_clr}};	// @[Decoupled.scala:51:35, Monitor.scala:615:33, :629:31, :645:38, :652:72, :655:{28,59}, :657:28, :667:31, :675:{72,91}, :678:21, :704:{39,54,56}, :745:35]
      if (a_set | io_in_d_valid)	// @[Decoupled.scala:51:35, Monitor.scala:712:27]
        watchdog <= 32'h0;	// @[Monitor.scala:706:27]
      else	// @[Monitor.scala:712:27]
        watchdog <= watchdog + 32'h1;	// @[Monitor.scala:706:27, :711:26]
    end
    if (_T_1002) begin	// @[Monitor.scala:549:20]
      opcode_1 <= io_in_d_bits_opcode;	// @[Monitor.scala:535:22]
      param_1 <= io_in_d_bits_param;	// @[Monitor.scala:536:22]
      size_1 <= io_in_d_bits_size;	// @[Monitor.scala:537:22]
      sink <= io_in_d_bits_sink;	// @[Monitor.scala:539:22]
      denied <= io_in_d_bits_denied;	// @[Monitor.scala:540:22]
    end
    source_1 <= ~_T_1002 & source_1;	// @[Monitor.scala:538:22, :549:{20,32}, :553:15]
  end // always @(posedge)
  `ifndef SYNTHESIS
    wire  [7:0][2:0] _GEN_0 = '{3'h4, 3'h5, 3'h2, 3'h1, 3'h1, 3'h1, 3'h0, 3'h0};	// @[Monitor.scala:690:38]
    wire  [7:0][2:0] _GEN_1 = '{3'h4, 3'h4, 3'h2, 3'h1, 3'h1, 3'h1, 3'h0, 3'h0};	// @[Monitor.scala:689:38]
    wire             mask_eq_2 = ~(io_in_a_bits_address[2]) & ~(io_in_a_bits_address[1]);	// @[Misc.scala:209:26, :210:20, :213:27]
    wire             mask_eq_3 = ~(io_in_a_bits_address[2]) & io_in_a_bits_address[1];	// @[Misc.scala:209:26, :210:20, :213:27]
    wire             mask_eq_4 = io_in_a_bits_address[2] & ~(io_in_a_bits_address[1]);	// @[Misc.scala:209:26, :210:20, :213:27]
    wire             mask_eq_5 = io_in_a_bits_address[2] & io_in_a_bits_address[1];	// @[Misc.scala:209:26, :213:27]
    wire             _GEN_2 = io_in_d_valid & io_in_d_bits_opcode == 3'h6;	// @[Monitor.scala:81:25, :310:{25,52}]
    wire             _GEN_3 = io_in_d_bits_size < 4'h3;	// @[Monitor.scala:312:27]
    wire             _GEN_4 = io_in_d_valid & io_in_d_bits_opcode == 3'h4;	// @[Monitor.scala:104:25, :318:{25,47}]
    wire             _GEN_5 = io_in_d_bits_param == 2'h2;	// @[Bundles.scala:111:27, Monitor.scala:323:28]
    wire             _GEN_6 = io_in_d_valid & io_in_d_bits_opcode == 3'h5;	// @[Monitor.scala:146:25, :328:{25,51}]
    wire             _GEN_7 = io_in_d_valid & ~(|io_in_d_bits_opcode);	// @[Monitor.scala:338:{25,51}]
    wire             _GEN_8 = io_in_d_valid & io_in_d_bits_opcode == 3'h1;	// @[Misc.scala:201:81, Monitor.scala:346:{25,55}]
    wire             _GEN_9 = io_in_d_valid & io_in_d_bits_opcode == 3'h2;	// @[Monitor.scala:354:{25,49}, :640:42]
    wire             _T_976 = io_in_d_valid & (|d_first_counter);	// @[Edges.scala:228:27, :230:25, Monitor.scala:541:19]
    wire             _T_1055 = io_in_d_valid & d_first_1;	// @[Edges.scala:230:25, Monitor.scala:671:26]
    wire             _T_1026 = _T_1055 & ~d_release_ack;	// @[Monitor.scala:670:46, :671:{26,74}, :680:71]
    wire             _GEN_10 = _T_1026 & io_in_a_valid;	// @[Monitor.scala:680:71, :684:30]
    wire             _GEN_11 = _T_1026 & ~io_in_a_valid;	// @[Monitor.scala:680:71, :684:30]
    wire             _T_1112 = io_in_d_valid & d_first_2 & d_release_ack;	// @[Edges.scala:230:25, Monitor.scala:670:46, :791:71]
    always @(posedge clock) begin	// @[Monitor.scala:42:11]
      if (io_in_a_valid & ~reset & ~(io_in_a_bits_address[30:12] == 19'h3 | {io_in_a_bits_address[30:15], io_in_a_bits_address[13:12]} == 18'h0 | {io_in_a_bits_address[30:17] ^ 14'h8, io_in_a_bits_address[15:12]} == 18'h0 | io_in_a_bits_address[30:16] == 15'h200 | io_in_a_bits_address[30:12] == 19'h2010 | io_in_a_bits_address[30:26] == 5'h3 | io_in_a_bits_address[30:12] == 19'h54000)) begin	// @[Monitor.scala:42:11, :706:27, Parameters.scala:137:{31,45,65}, :672:30]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (io_in_a_valid & ~reset & (|(io_in_a_bits_address[1:0]))) begin	// @[Edges.scala:20:{16,24}, Monitor.scala:42:11]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (io_in_a_valid & ~reset & {io_in_a_bits_address[2] | mask_eq_5 & io_in_a_bits_address[0], io_in_a_bits_address[2] | mask_eq_5 & ~(io_in_a_bits_address[0]), io_in_a_bits_address[2] | mask_eq_4 & io_in_a_bits_address[0], io_in_a_bits_address[2] | mask_eq_4 & ~(io_in_a_bits_address[0]), ~(io_in_a_bits_address[2]) | mask_eq_3 & io_in_a_bits_address[0], ~(io_in_a_bits_address[2]) | mask_eq_3 & ~(io_in_a_bits_address[0]), ~(io_in_a_bits_address[2]) | mask_eq_2 & io_in_a_bits_address[0], ~(io_in_a_bits_address[2]) | mask_eq_2 & ~(io_in_a_bits_address[0])} != 8'hF) begin	// @[Cat.scala:33:92, Misc.scala:209:26, :210:20, :213:27, :214:29, Monitor.scala:42:11, :119:30]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (io_in_d_valid & ~reset & (&io_in_d_bits_opcode)) begin	// @[Bundles.scala:45:24, Monitor.scala:49:11]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel has invalid opcode (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_2 & ~reset & _GEN_3) begin	// @[Monitor.scala:49:11, :310:52, :312:27]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_2 & ~reset & (|io_in_d_bits_param)) begin	// @[Monitor.scala:49:11, :310:52, :313:28]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_2 & ~reset & io_in_d_bits_corrupt) begin	// @[Monitor.scala:49:11, :310:52]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_2 & ~reset & io_in_d_bits_denied) begin	// @[Monitor.scala:49:11, :310:52]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel ReleaseAck is denied (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_4 & ~reset) begin	// @[Monitor.scala:49:11, :318:47]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel Grant carries invalid sink ID (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_4 & ~reset & _GEN_3) begin	// @[Monitor.scala:49:11, :312:27, :318:47]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel Grant smaller than a beat (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_4 & ~reset & (&io_in_d_bits_param)) begin	// @[Bundles.scala:105:26, Monitor.scala:49:11, :318:47]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel Grant carries invalid cap param (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_4 & ~reset & _GEN_5) begin	// @[Monitor.scala:49:11, :318:47, :323:28]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel Grant carries toN param (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_4 & ~reset & io_in_d_bits_corrupt) begin	// @[Monitor.scala:49:11, :318:47]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel Grant is corrupt (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_6 & ~reset) begin	// @[Monitor.scala:49:11, :328:51]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_6 & ~reset & _GEN_3) begin	// @[Monitor.scala:49:11, :312:27, :328:51]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_6 & ~reset & (&io_in_d_bits_param)) begin	// @[Bundles.scala:105:26, Monitor.scala:49:11, :328:51]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel GrantData carries invalid cap param (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_6 & ~reset & _GEN_5) begin	// @[Monitor.scala:49:11, :323:28, :328:51]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel GrantData carries toN param (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_6 & ~reset & ~(~io_in_d_bits_denied | io_in_d_bits_corrupt)) begin	// @[Monitor.scala:49:11, :328:51, :334:{15,30}]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_7 & ~reset & (|io_in_d_bits_param)) begin	// @[Monitor.scala:49:11, :338:51, :341:28]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel AccessAck carries invalid param (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_7 & ~reset & io_in_d_bits_corrupt) begin	// @[Monitor.scala:49:11, :338:51]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel AccessAck is corrupt (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_8 & ~reset & (|io_in_d_bits_param)) begin	// @[Monitor.scala:49:11, :346:55, :349:28]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel AccessAckData carries invalid param (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_8 & ~reset & ~(~io_in_d_bits_denied | io_in_d_bits_corrupt)) begin	// @[Monitor.scala:49:11, :346:55, :350:{15,30}]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_9 & ~reset & (|io_in_d_bits_param)) begin	// @[Monitor.scala:49:11, :354:49, :357:28]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel HintAck carries invalid param (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_9 & ~reset & io_in_d_bits_corrupt) begin	// @[Monitor.scala:49:11, :354:49]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel HintAck is corrupt (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_T_976 & ~reset & io_in_d_bits_opcode != opcode_1) begin	// @[Monitor.scala:49:11, :535:22, :541:19, :542:29]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_T_976 & ~reset & io_in_d_bits_param != param_1) begin	// @[Monitor.scala:49:11, :536:22, :541:19, :543:29]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel param changed within multibeat operation (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_T_976 & ~reset & io_in_d_bits_size != size_1) begin	// @[Monitor.scala:49:11, :537:22, :541:19, :544:29]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel size changed within multibeat operation (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_T_976 & ~reset & source_1) begin	// @[Monitor.scala:49:11, :538:22, :541:19]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel source changed within multibeat operation (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_T_976 & ~reset & io_in_d_bits_sink != sink) begin	// @[Monitor.scala:49:11, :539:22, :541:19, :546:29]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_T_976 & ~reset & io_in_d_bits_denied != denied) begin	// @[Monitor.scala:49:11, :540:22, :541:19, :547:29]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (a_set & ~reset & inflight) begin	// @[Decoupled.scala:51:35, Monitor.scala:42:11, :611:27]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel re-used a source ID (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (_T_1026 & ~reset & ~(inflight | io_in_a_valid)) begin	// @[Monitor.scala:49:11, :611:27, :680:71, :682:49]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_10 & ~reset & ~(~(|io_in_d_bits_opcode) | ~(|io_in_d_bits_opcode))) begin	// @[Monitor.scala:49:11, :338:25, :684:30, :685:{38,77}, :686:39]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel contains improper opcode response (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_10 & ~reset & io_in_d_bits_size != 4'h2) begin	// @[Monitor.scala:49:11, :684:30, :687:36]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel contains improper response size (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_11 & ~reset & ~(io_in_d_bits_opcode == _GEN_1[inflight_opcodes[3:1]] | io_in_d_bits_opcode == _GEN_0[inflight_opcodes[3:1]])) begin	// @[Monitor.scala:42:11, :49:11, :613:35, :634:152, :684:30, :689:{38,72}, :690:38]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel contains improper opcode response (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_11 & ~reset & {4'h0, io_in_d_bits_size} != {1'h0, inflight_sizes[7:1]}) begin	// @[Misc.scala:205:21, Monitor.scala:42:11, :49:11, :615:33, :638:{19,144}, :657:77, :684:30, :691:36]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel contains improper response size (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_T_1055 & io_in_a_valid & ~d_release_ack & ~reset & ~io_in_a_ready) begin	// @[Monitor.scala:49:11, :670:46, :671:{26,74}]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (~reset & ~(io_in_a_valid != (_T_1055 & ~d_release_ack) | ~io_in_a_valid)) begin	// @[Monitor.scala:49:11, :670:46, :671:{26,71,74}, :699:{29,48,51}]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (~reset & ~(~inflight | _plusarg_reader_out == 32'h0 | watchdog < _plusarg_reader_out)) begin	// @[Monitor.scala:42:11, :611:27, :706:27, :709:{16,39,47,59}, PlusArg.scala:80:11]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (_T_1112 & ~reset) begin	// @[Monitor.scala:49:11, :791:71]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_T_1112 & ~reset & (|io_in_d_bits_size)) begin	// @[Monitor.scala:49:11, :791:71, :797:36]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel contains improper response size (connected at BusWrapper.scala:91:33)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
    end // always @(posedge)
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0]     _RANDOM_0;
    logic [31:0]     _RANDOM_1;
    logic [31:0]     _RANDOM_2;
    logic [31:0]     _RANDOM_3;
    logic [31:0]     _RANDOM_4;
    logic [31:0]     _RANDOM_5;
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
        d_first_counter = _RANDOM_1[27:19];	// @[Edges.scala:228:27]
        opcode_1 = _RANDOM_1[30:28];	// @[Edges.scala:228:27, Monitor.scala:535:22]
        param_1 = {_RANDOM_1[31], _RANDOM_2[0]};	// @[Edges.scala:228:27, Monitor.scala:536:22]
        size_1 = _RANDOM_2[4:1];	// @[Monitor.scala:536:22, :537:22]
        source_1 = _RANDOM_2[5];	// @[Monitor.scala:536:22, :538:22]
        sink = _RANDOM_2[6];	// @[Monitor.scala:536:22, :539:22]
        denied = _RANDOM_2[7];	// @[Monitor.scala:536:22, :540:22]
        inflight = _RANDOM_2[8];	// @[Monitor.scala:536:22, :611:27]
        inflight_opcodes = _RANDOM_2[12:9];	// @[Monitor.scala:536:22, :613:35]
        inflight_sizes = _RANDOM_2[20:13];	// @[Monitor.scala:536:22, :615:33]
        d_first_counter_1 = {_RANDOM_2[31:30], _RANDOM_3[6:0]};	// @[Edges.scala:228:27, Monitor.scala:536:22]
        watchdog = {_RANDOM_3[31:7], _RANDOM_4[6:0]};	// @[Edges.scala:228:27, Monitor.scala:706:27]
        d_first_counter_2 = {_RANDOM_4[31:29], _RANDOM_5[5:0]};	// @[Edges.scala:228:27, Monitor.scala:706:27]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  plusarg_reader #(
    .FORMAT("tilelink_timeout=%d"),
    .DEFAULT(0),
    .WIDTH(32)
  ) plusarg_reader (	// @[PlusArg.scala:80:11]
    .out (_plusarg_reader_out)
  );
  plusarg_reader #(
    .FORMAT("tilelink_timeout=%d"),
    .DEFAULT(0),
    .WIDTH(32)
  ) plusarg_reader_1 (	// @[PlusArg.scala:80:11]
    .out (_plusarg_reader_1_out)
  );
endmodule

