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

module TLMonitor_56(
  input       clock,
              reset,
              io_in_a_ready,
              io_in_a_valid,
  input [2:0] io_in_a_bits_opcode,
  input [8:0] io_in_a_bits_address,
  input       io_in_d_ready,
              io_in_d_valid,
  input [2:0] io_in_d_bits_opcode,
  input [1:0] io_in_d_bits_param,
              io_in_d_bits_size,
  input       io_in_d_bits_denied,
              io_in_d_bits_corrupt
);

  wire [31:0] _plusarg_reader_1_out;	// @[PlusArg.scala:80:11]
  wire [31:0] _plusarg_reader_out;	// @[PlusArg.scala:80:11]
  wire        a_set = io_in_a_ready & io_in_a_valid;	// @[Decoupled.scala:51:35]
  reg         inflight;	// @[Monitor.scala:611:27]
  reg  [3:0]  inflight_opcodes;	// @[Monitor.scala:613:35]
  reg  [3:0]  inflight_sizes;	// @[Monitor.scala:615:33]
  wire        d_release_ack = io_in_d_bits_opcode == 3'h6;	// @[Monitor.scala:81:25, :670:46]
  reg  [31:0] watchdog;	// @[Monitor.scala:706:27]
  wire        d_first_done = io_in_d_ready & io_in_d_valid;	// @[Decoupled.scala:51:35]
  wire        d_clr = d_first_done & ~d_release_ack;	// @[Decoupled.scala:51:35, Monitor.scala:670:46, :671:74, :675:72]
  wire [3:0]  d_sizes_clr = {4{d_clr}};	// @[Monitor.scala:665:33, :675:{72,91}, :677:21]
  always @(posedge clock) begin
    if (reset) begin
      inflight <= 1'h0;	// @[Monitor.scala:611:27]
      inflight_opcodes <= 4'h0;	// @[Monitor.scala:613:35, :745:35]
      inflight_sizes <= 4'h0;	// @[Monitor.scala:615:33, :745:35]
      watchdog <= 32'h0;	// @[Bundles.scala:259:74, Monitor.scala:706:27]
    end
    else begin
      inflight <= (inflight | a_set) & ~d_clr;	// @[Decoupled.scala:51:35, Monitor.scala:611:27, :675:72, :702:{27,36,38}]
      inflight_opcodes <= (inflight_opcodes | (a_set ? {io_in_a_bits_opcode, 1'h1} : 4'h0)) & ~d_sizes_clr;	// @[Decoupled.scala:51:35, Monitor.scala:42:11, :613:35, :627:33, :652:72, :654:53, :656:28, :665:33, :675:91, :677:21, :703:{43,60,62}, :745:35]
      inflight_sizes <= (inflight_sizes | (a_set ? {1'h0, a_set ? 3'h5 : 3'h0} : 4'h0)) & ~d_sizes_clr;	// @[Decoupled.scala:51:35, Monitor.scala:615:33, :629:31, :645:38, :652:72, :655:{28,59}, :657:28, :665:33, :675:91, :677:21, :704:{39,54,56}, :745:35]
      if (a_set | d_first_done)	// @[Decoupled.scala:51:35, Monitor.scala:712:27]
        watchdog <= 32'h0;	// @[Bundles.scala:259:74, Monitor.scala:706:27]
      else	// @[Monitor.scala:712:27]
        watchdog <= watchdog + 32'h1;	// @[Monitor.scala:706:27, :711:26]
    end
  end // always @(posedge)
  `ifndef SYNTHESIS
    wire  [7:0][2:0] _GEN = '{3'h4, 3'h5, 3'h2, 3'h1, 3'h1, 3'h1, 3'h0, 3'h0};	// @[Monitor.scala:686:39]
    wire  [7:0][2:0] _GEN_0 = '{3'h4, 3'h4, 3'h2, 3'h1, 3'h1, 3'h1, 3'h0, 3'h0};	// @[Monitor.scala:685:38]
    wire             _GEN_1 = io_in_a_valid & io_in_a_bits_opcode == 3'h6;	// @[Monitor.scala:81:{25,54}]
    wire             _GEN_2 = io_in_a_valid & (&io_in_a_bits_opcode);	// @[Monitor.scala:92:{25,53}]
    wire             _GEN_3 = io_in_a_valid & io_in_a_bits_opcode == 3'h1;	// @[Monitor.scala:122:{25,56}, :640:42]
    wire             _GEN_4 = io_in_a_valid & io_in_a_bits_opcode == 3'h2;	// @[Monitor.scala:130:{25,56}, :640:42]
    wire             _GEN_5 = io_in_a_valid & io_in_a_bits_opcode == 3'h3;	// @[Monitor.scala:138:{25,53}]
    wire             _GEN_6 = io_in_a_valid & io_in_a_bits_opcode == 3'h5;	// @[Monitor.scala:146:{25,46}, :655:59]
    wire             _GEN_7 = io_in_d_valid & io_in_d_bits_opcode == 3'h6;	// @[Monitor.scala:81:25, :310:{25,52}]
    wire             _GEN_8 = io_in_d_valid & io_in_d_bits_opcode == 3'h4;	// @[Monitor.scala:104:25, :318:{25,47}]
    wire             _GEN_9 = io_in_d_bits_param == 2'h2;	// @[Monitor.scala:323:28]
    wire             _GEN_10 = io_in_d_valid & io_in_d_bits_opcode == 3'h5;	// @[Monitor.scala:328:{25,51}, :655:59]
    wire             _GEN_11 = io_in_d_valid & io_in_d_bits_opcode == 3'h0;	// @[Monitor.scala:338:{25,51}]
    wire             _GEN_12 = io_in_d_valid & io_in_d_bits_opcode == 3'h1;	// @[Monitor.scala:346:{25,55}, :640:42]
    wire             _GEN_13 = io_in_d_valid & io_in_d_bits_opcode == 3'h2;	// @[Monitor.scala:354:{25,49}, :640:42]
    wire             _T_550 = io_in_d_valid & ~d_release_ack;	// @[Monitor.scala:670:46, :671:74, :680:71]
    wire             _GEN_14 = _T_550 & io_in_a_valid;	// @[Monitor.scala:680:71, :684:30]
    wire             _GEN_15 = _T_550 & ~io_in_a_valid;	// @[Monitor.scala:680:71, :684:30]
    wire             _T_629 = io_in_d_valid & d_release_ack;	// @[Monitor.scala:670:46, :791:71]
    always @(posedge clock) begin	// @[Monitor.scala:42:11]
      if (_GEN_1 & ~reset) begin	// @[Monitor.scala:42:11, :81:54]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at Debug.scala:671:18)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (_GEN_1 & ~reset) begin	// @[Monitor.scala:42:11, :81:54]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Debug.scala:671:18)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (_GEN_1 & ~reset & (|(io_in_a_bits_address[1:0]))) begin	// @[Edges.scala:20:{16,24}, Monitor.scala:42:11, :81:54]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Debug.scala:671:18)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (_GEN_2 & ~reset) begin	// @[Monitor.scala:42:11, :92:53]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at Debug.scala:671:18)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (_GEN_2 & ~reset) begin	// @[Monitor.scala:42:11, :92:53]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Debug.scala:671:18)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (_GEN_2 & ~reset & (|(io_in_a_bits_address[1:0]))) begin	// @[Edges.scala:20:{16,24}, Monitor.scala:42:11, :92:53]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Debug.scala:671:18)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (_GEN_2 & ~reset) begin	// @[Monitor.scala:42:11, :92:53]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Debug.scala:671:18)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (io_in_a_valid & io_in_a_bits_opcode == 3'h4 & ~reset & (|(io_in_a_bits_address[1:0]))) begin	// @[Edges.scala:20:{16,24}, Monitor.scala:42:11, :104:25]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel Get address not aligned to size (connected at Debug.scala:671:18)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (io_in_a_valid & io_in_a_bits_opcode == 3'h0 & ~reset & (|(io_in_a_bits_address[1:0]))) begin	// @[Edges.scala:20:{16,24}, Monitor.scala:42:11, :114:25]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel PutFull address not aligned to size (connected at Debug.scala:671:18)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (_GEN_3 & ~reset) begin	// @[Monitor.scala:42:11, :122:56]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at Debug.scala:671:18)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (_GEN_3 & ~reset & (|(io_in_a_bits_address[1:0]))) begin	// @[Edges.scala:20:{16,24}, Monitor.scala:42:11, :122:56]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Debug.scala:671:18)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (_GEN_4 & ~reset) begin	// @[Monitor.scala:42:11, :130:56]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at Debug.scala:671:18)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (_GEN_4 & ~reset & (|(io_in_a_bits_address[1:0]))) begin	// @[Edges.scala:20:{16,24}, Monitor.scala:42:11, :130:56]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Debug.scala:671:18)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (_GEN_5 & ~reset) begin	// @[Monitor.scala:42:11, :138:53]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at Debug.scala:671:18)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (_GEN_5 & ~reset & (|(io_in_a_bits_address[1:0]))) begin	// @[Edges.scala:20:{16,24}, Monitor.scala:42:11, :138:53]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel Logical address not aligned to size (connected at Debug.scala:671:18)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (_GEN_6 & ~reset) begin	// @[Monitor.scala:42:11, :146:46]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at Debug.scala:671:18)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (_GEN_6 & ~reset & (|(io_in_a_bits_address[1:0]))) begin	// @[Edges.scala:20:{16,24}, Monitor.scala:42:11, :146:46]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel Hint address not aligned to size (connected at Debug.scala:671:18)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (io_in_d_valid & ~reset & (&io_in_d_bits_opcode)) begin	// @[Bundles.scala:45:24, Monitor.scala:49:11]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel has invalid opcode (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_7 & ~reset & ~(io_in_d_bits_size[1])) begin	// @[Monitor.scala:49:11, :310:52, :312:27]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_7 & ~reset & (|io_in_d_bits_param)) begin	// @[Monitor.scala:49:11, :310:52, :313:28]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_7 & ~reset & io_in_d_bits_corrupt) begin	// @[Monitor.scala:49:11, :310:52]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel ReleaseAck is corrupt (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_7 & ~reset & io_in_d_bits_denied) begin	// @[Monitor.scala:49:11, :310:52]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel ReleaseAck is denied (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_8 & ~reset) begin	// @[Monitor.scala:49:11, :318:47]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel Grant carries invalid sink ID (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_8 & ~reset & ~(io_in_d_bits_size[1])) begin	// @[Monitor.scala:49:11, :318:47, :321:27]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel Grant smaller than a beat (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_8 & ~reset & (&io_in_d_bits_param)) begin	// @[Bundles.scala:105:26, Monitor.scala:49:11, :318:47]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel Grant carries invalid cap param (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_8 & ~reset & _GEN_9) begin	// @[Monitor.scala:49:11, :318:47, :323:28]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel Grant carries toN param (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_8 & ~reset & io_in_d_bits_corrupt) begin	// @[Monitor.scala:49:11, :318:47]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel Grant is corrupt (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_10 & ~reset) begin	// @[Monitor.scala:49:11, :328:51]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_10 & ~reset & ~(io_in_d_bits_size[1])) begin	// @[Monitor.scala:49:11, :328:51, :331:27]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel GrantData smaller than a beat (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_10 & ~reset & (&io_in_d_bits_param)) begin	// @[Bundles.scala:105:26, Monitor.scala:49:11, :328:51]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel GrantData carries invalid cap param (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_10 & ~reset & _GEN_9) begin	// @[Monitor.scala:49:11, :323:28, :328:51]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel GrantData carries toN param (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_10 & ~reset & ~(~io_in_d_bits_denied | io_in_d_bits_corrupt)) begin	// @[Monitor.scala:49:11, :328:51, :334:{15,30}]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_11 & ~reset & (|io_in_d_bits_param)) begin	// @[Monitor.scala:49:11, :338:51, :341:28]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel AccessAck carries invalid param (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_11 & ~reset & io_in_d_bits_corrupt) begin	// @[Monitor.scala:49:11, :338:51]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel AccessAck is corrupt (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_12 & ~reset & (|io_in_d_bits_param)) begin	// @[Monitor.scala:49:11, :346:55, :349:28]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel AccessAckData carries invalid param (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_12 & ~reset & ~(~io_in_d_bits_denied | io_in_d_bits_corrupt)) begin	// @[Monitor.scala:49:11, :346:55, :350:{15,30}]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_13 & ~reset & (|io_in_d_bits_param)) begin	// @[Monitor.scala:49:11, :354:49, :357:28]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel HintAck carries invalid param (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_13 & ~reset & io_in_d_bits_corrupt) begin	// @[Monitor.scala:49:11, :354:49]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel HintAck is corrupt (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (a_set & ~reset & inflight) begin	// @[Decoupled.scala:51:35, Monitor.scala:42:11, :611:27]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: 'A' channel re-used a source ID (connected at Debug.scala:671:18)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (_T_550 & ~reset & ~(inflight | io_in_a_valid)) begin	// @[Monitor.scala:49:11, :611:27, :680:71, :682:49]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_14 & ~reset & ~(io_in_d_bits_opcode == _GEN_0[io_in_a_bits_opcode] | io_in_d_bits_opcode == _GEN[io_in_a_bits_opcode])) begin	// @[Monitor.scala:49:11, :684:30, :685:{38,77}, :686:39]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel contains improper opcode response (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_14 & ~reset & io_in_d_bits_size != 2'h2) begin	// @[Monitor.scala:49:11, :684:30, :687:36]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel contains improper response size (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_15 & ~reset & ~(io_in_d_bits_opcode == _GEN_0[inflight_opcodes[3:1]] | io_in_d_bits_opcode == _GEN[inflight_opcodes[3:1]])) begin	// @[Monitor.scala:42:11, :49:11, :613:35, :634:152, :684:30, :685:38, :686:39, :689:{38,72}, :690:38]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel contains improper opcode response (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_GEN_15 & ~reset & {2'h0, io_in_d_bits_size} != {1'h0, inflight_sizes[3:1]}) begin	// @[Monitor.scala:42:11, :49:11, :122:25, :615:33, :638:{19,144}, :684:30, :691:36]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel contains improper response size (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (io_in_d_valid & io_in_a_valid & ~d_release_ack & ~reset & ~(~io_in_d_ready | io_in_a_ready)) begin	// @[Monitor.scala:49:11, :670:46, :671:74, :695:{15,32}]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (~reset & ~(~inflight | _plusarg_reader_out == 32'h0 | watchdog < _plusarg_reader_out)) begin	// @[Bundles.scala:259:74, Monitor.scala:42:11, :611:27, :706:27, :709:{16,39,47,59}, PlusArg.scala:80:11]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:42:11]
          $error("Assertion failed: TileLink timeout expired (connected at Debug.scala:671:18)\n    at Monitor.scala:42 assert(cond, message)\n");	// @[Monitor.scala:42:11]
        if (`STOP_COND_)	// @[Monitor.scala:42:11]
          $fatal;	// @[Monitor.scala:42:11]
      end
      if (_T_629 & ~reset) begin	// @[Monitor.scala:49:11, :791:71]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
        if (`STOP_COND_)	// @[Monitor.scala:49:11]
          $fatal;	// @[Monitor.scala:49:11]
      end
      if (_T_629 & ~reset & (|io_in_d_bits_size)) begin	// @[Monitor.scala:49:11, :791:71, :797:36]
        if (`ASSERT_VERBOSE_COND_)	// @[Monitor.scala:49:11]
          $error("Assertion failed: 'D' channel contains improper response size (connected at Debug.scala:671:18)\n    at Monitor.scala:49 assert(cond, message)\n");	// @[Monitor.scala:49:11]
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
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        _RANDOM_0 = `RANDOM;
        _RANDOM_1 = `RANDOM;
        _RANDOM_2 = `RANDOM;
        inflight = _RANDOM_0[30];	// @[Monitor.scala:611:27]
        inflight_opcodes = {_RANDOM_0[31], _RANDOM_1[2:0]};	// @[Monitor.scala:611:27, :613:35]
        inflight_sizes = _RANDOM_1[6:3];	// @[Monitor.scala:613:35, :615:33]
        watchdog = {_RANDOM_1[31:9], _RANDOM_2[8:0]};	// @[Monitor.scala:613:35, :706:27]
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

