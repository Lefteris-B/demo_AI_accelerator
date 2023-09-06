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

module CounterFile(
  input         clock,
                reset,
                io_counter_reset,
                io_snapshot,
                io_snapshot_reset,
  input  [2:0]  io_addr,
  input         io_config_address_valid,
  input  [5:0]  io_config_address_bits,
  input         io_external,
                io_event_io_event_signal_1,
                io_event_io_event_signal_2,
                io_event_io_event_signal_3,
                io_event_io_event_signal_4,
                io_event_io_event_signal_5,
                io_event_io_event_signal_6,
                io_event_io_event_signal_7,
                io_event_io_event_signal_8,
                io_event_io_event_signal_9,
                io_event_io_event_signal_10,
                io_event_io_event_signal_11,
                io_event_io_event_signal_12,
                io_event_io_event_signal_13,
                io_event_io_event_signal_14,
                io_event_io_event_signal_16,
                io_event_io_event_signal_17,
                io_event_io_event_signal_18,
                io_event_io_event_signal_19,
                io_event_io_event_signal_20,
                io_event_io_event_signal_21,
                io_event_io_event_signal_22,
                io_event_io_event_signal_23,
                io_event_io_event_signal_24,
                io_event_io_event_signal_25,
                io_event_io_event_signal_26,
                io_event_io_event_signal_27,
                io_event_io_event_signal_28,
                io_event_io_event_signal_29,
                io_event_io_event_signal_30,
                io_event_io_event_signal_31,
                io_event_io_event_signal_32,
                io_event_io_event_signal_33,
                io_event_io_event_signal_34,
                io_event_io_event_signal_35,
                io_event_io_event_signal_36,
                io_event_io_event_signal_37,
                io_event_io_event_signal_41,
                io_event_io_event_signal_42,
                io_event_io_event_signal_43,
  input  [31:0] io_event_io_external_values_1,
                io_event_io_external_values_2,
                io_event_io_external_values_3,
                io_event_io_external_values_4,
                io_event_io_external_values_5,
                io_event_io_external_values_6,
                io_event_io_external_values_7,
  output [63:0] io_data,
  output        io_event_io_external_reset
);

  reg  [6:0]       counter_config_0;	// @[CounterFile.scala:164:31]
  reg  [6:0]       counter_config_1;	// @[CounterFile.scala:164:31]
  reg  [6:0]       counter_config_2;	// @[CounterFile.scala:164:31]
  reg  [6:0]       counter_config_3;	// @[CounterFile.scala:164:31]
  reg  [6:0]       counter_config_4;	// @[CounterFile.scala:164:31]
  reg  [6:0]       counter_config_5;	// @[CounterFile.scala:164:31]
  reg  [6:0]       counter_config_6;	// @[CounterFile.scala:164:31]
  reg  [6:0]       counter_config_7;	// @[CounterFile.scala:164:31]
  reg              counter_is_external_0;	// @[CounterFile.scala:165:32]
  reg              counter_is_external_1;	// @[CounterFile.scala:165:32]
  reg              counter_is_external_2;	// @[CounterFile.scala:165:32]
  reg              counter_is_external_3;	// @[CounterFile.scala:165:32]
  reg              counter_is_external_4;	// @[CounterFile.scala:165:32]
  reg              counter_is_external_5;	// @[CounterFile.scala:165:32]
  reg              counter_is_external_6;	// @[CounterFile.scala:165:32]
  reg              counter_is_external_7;	// @[CounterFile.scala:165:32]
  reg  [63:0]      counter_snapshot_0;	// @[CounterFile.scala:169:35]
  reg  [63:0]      counter_snapshot_1;	// @[CounterFile.scala:169:35]
  reg  [63:0]      counter_snapshot_2;	// @[CounterFile.scala:169:35]
  reg  [63:0]      counter_snapshot_3;	// @[CounterFile.scala:169:35]
  reg  [63:0]      counter_snapshot_4;	// @[CounterFile.scala:169:35]
  reg  [63:0]      counter_snapshot_5;	// @[CounterFile.scala:169:35]
  reg  [63:0]      counter_snapshot_6;	// @[CounterFile.scala:169:35]
  reg  [63:0]      counter_snapshot_7;	// @[CounterFile.scala:169:35]
  reg  [63:0]      counters_0;	// @[CounterFile.scala:170:27]
  reg  [63:0]      counters_1;	// @[CounterFile.scala:170:27]
  reg  [63:0]      counters_2;	// @[CounterFile.scala:170:27]
  reg  [63:0]      counters_3;	// @[CounterFile.scala:170:27]
  reg  [63:0]      counters_4;	// @[CounterFile.scala:170:27]
  reg  [63:0]      counters_5;	// @[CounterFile.scala:170:27]
  reg  [63:0]      counters_6;	// @[CounterFile.scala:170:27]
  reg  [63:0]      counters_7;	// @[CounterFile.scala:170:27]
  reg              snapshot_enable;	// @[CounterFile.scala:171:34]
  wire [7:0]       _GEN = {{counter_is_external_7}, {counter_is_external_6}, {counter_is_external_5}, {counter_is_external_4}, {counter_is_external_3}, {counter_is_external_2}, {counter_is_external_1}, {counter_is_external_0}};	// @[CounterFile.scala:165:32, :181:10]
  wire             _GEN_0 = _GEN[io_addr];	// @[CounterFile.scala:181:10]
  wire [7:0][31:0] _GEN_1 = {{io_event_io_external_values_7}, {io_event_io_external_values_6}, {io_event_io_external_values_5}, {io_event_io_external_values_4}, {io_event_io_external_values_3}, {io_event_io_external_values_2}, {io_event_io_external_values_1}, {32'h0}};	// @[CounterFile.scala:181:10]
  wire [7:0][6:0]  _GEN_2 = {{counter_config_7}, {counter_config_6}, {counter_config_5}, {counter_config_4}, {counter_config_3}, {counter_config_2}, {counter_config_1}, {counter_config_0}};	// @[CounterFile.scala:164:31]
  wire [7:0][63:0] _GEN_3 = {{counters_7}, {counters_6}, {counters_5}, {counters_4}, {counters_3}, {counters_2}, {counters_1}, {counters_0}};	// @[CounterFile.scala:170:27, :181:10]
  wire [7:0][63:0] _GEN_4 = {{counter_snapshot_7}, {counter_snapshot_6}, {counter_snapshot_5}, {counter_snapshot_4}, {counter_snapshot_3}, {counter_snapshot_2}, {counter_snapshot_1}, {counter_snapshot_0}};	// @[CounterFile.scala:169:35, :198:19]
  wire [6:0]       _GEN_5 = {1'h0, io_config_address_bits};	// @[CounterFile.scala:202:31]
  wire [18:0]      _GEN_6 = '{1'h0, 1'h0, 1'h0, 1'h0, 1'h0, 1'h0, 1'h0, 1'h0, 1'h0, 1'h0, 1'h0, 1'h0, 1'h0, 1'h0, 1'h0, 1'h0, 1'h0, 1'h0, 1'h0};	// @[CounterFile.scala:209:47]
  wire [63:0]      _GEN_7 = {_GEN_6, {{1'h0}, {io_event_io_event_signal_43}, {io_event_io_event_signal_42}, {io_event_io_event_signal_41}, {1'h0}, {1'h0}, {1'h0}, {io_event_io_event_signal_37}, {io_event_io_event_signal_36}, {io_event_io_event_signal_35}, {io_event_io_event_signal_34}, {io_event_io_event_signal_33}, {io_event_io_event_signal_32}, {io_event_io_event_signal_31}, {io_event_io_event_signal_30}, {io_event_io_event_signal_29}, {io_event_io_event_signal_28}, {io_event_io_event_signal_27}, {io_event_io_event_signal_26}, {io_event_io_event_signal_25}, {io_event_io_event_signal_24}, {io_event_io_event_signal_23}, {io_event_io_event_signal_22}, {io_event_io_event_signal_21}, {io_event_io_event_signal_20}, {io_event_io_event_signal_19}, {io_event_io_event_signal_18}, {io_event_io_event_signal_17}, {io_event_io_event_signal_16}, {1'h0}, {io_event_io_event_signal_14}, {io_event_io_event_signal_13}, {io_event_io_event_signal_12}, {io_event_io_event_signal_11}, {io_event_io_event_signal_10}, {io_event_io_event_signal_9}, {io_event_io_event_signal_8}, {io_event_io_event_signal_7}, {io_event_io_event_signal_6}, {io_event_io_event_signal_5}, {io_event_io_event_signal_4}, {io_event_io_event_signal_3}, {io_event_io_event_signal_2}, {io_event_io_event_signal_1}, {1'h0}}};	// @[CounterFile.scala:209:47]
  wire             _GEN_8 = io_config_address_valid & ~(|io_addr);	// @[CounterFile.scala:164:31, :201:36, :202:31]
  wire             _GEN_9 = io_config_address_valid & io_addr == 3'h1;	// @[CounterFile.scala:164:31, :201:36, :202:31]
  wire             _GEN_10 = io_config_address_valid & io_addr == 3'h2;	// @[CounterFile.scala:164:31, :201:36, :202:31]
  wire             _GEN_11 = io_config_address_valid & io_addr == 3'h3;	// @[CounterFile.scala:164:31, :201:36, :202:31]
  wire             _GEN_12 = io_config_address_valid & io_addr == 3'h4;	// @[CounterFile.scala:164:31, :201:36, :202:31]
  wire             _GEN_13 = io_config_address_valid & io_addr == 3'h5;	// @[CounterFile.scala:164:31, :201:36, :202:31]
  wire             _GEN_14 = io_config_address_valid & io_addr == 3'h6;	// @[CounterFile.scala:164:31, :201:36, :202:31]
  wire             _GEN_15 = io_config_address_valid & (&io_addr);	// @[CounterFile.scala:164:31, :201:36, :202:31]
  always @(posedge clock) begin
    if (reset) begin
      counter_config_0 <= 7'h0;	// @[CounterFile.scala:164:{31,62}]
      counter_config_1 <= 7'h0;	// @[CounterFile.scala:164:{31,62}]
      counter_config_2 <= 7'h0;	// @[CounterFile.scala:164:{31,62}]
      counter_config_3 <= 7'h0;	// @[CounterFile.scala:164:{31,62}]
      counter_config_4 <= 7'h0;	// @[CounterFile.scala:164:{31,62}]
      counter_config_5 <= 7'h0;	// @[CounterFile.scala:164:{31,62}]
      counter_config_6 <= 7'h0;	// @[CounterFile.scala:164:{31,62}]
      counter_config_7 <= 7'h0;	// @[CounterFile.scala:164:{31,62}]
    end
    else begin
      if (_GEN_8)	// @[CounterFile.scala:164:31, :201:36, :202:31]
        counter_config_0 <= _GEN_5;	// @[CounterFile.scala:164:31, :202:31]
      if (_GEN_9)	// @[CounterFile.scala:164:31, :201:36, :202:31]
        counter_config_1 <= _GEN_5;	// @[CounterFile.scala:164:31, :202:31]
      if (_GEN_10)	// @[CounterFile.scala:164:31, :201:36, :202:31]
        counter_config_2 <= _GEN_5;	// @[CounterFile.scala:164:31, :202:31]
      if (_GEN_11)	// @[CounterFile.scala:164:31, :201:36, :202:31]
        counter_config_3 <= _GEN_5;	// @[CounterFile.scala:164:31, :202:31]
      if (_GEN_12)	// @[CounterFile.scala:164:31, :201:36, :202:31]
        counter_config_4 <= _GEN_5;	// @[CounterFile.scala:164:31, :202:31]
      if (_GEN_13)	// @[CounterFile.scala:164:31, :201:36, :202:31]
        counter_config_5 <= _GEN_5;	// @[CounterFile.scala:164:31, :202:31]
      if (_GEN_14)	// @[CounterFile.scala:164:31, :201:36, :202:31]
        counter_config_6 <= _GEN_5;	// @[CounterFile.scala:164:31, :202:31]
      if (_GEN_15)	// @[CounterFile.scala:164:31, :201:36, :202:31]
        counter_config_7 <= _GEN_5;	// @[CounterFile.scala:164:31, :202:31]
    end
    if (_GEN_8)	// @[CounterFile.scala:164:31, :201:36, :202:31]
      counter_is_external_0 <= io_external;	// @[CounterFile.scala:165:32]
    if (_GEN_9)	// @[CounterFile.scala:164:31, :201:36, :202:31]
      counter_is_external_1 <= io_external;	// @[CounterFile.scala:165:32]
    if (_GEN_10)	// @[CounterFile.scala:164:31, :201:36, :202:31]
      counter_is_external_2 <= io_external;	// @[CounterFile.scala:165:32]
    if (_GEN_11)	// @[CounterFile.scala:164:31, :201:36, :202:31]
      counter_is_external_3 <= io_external;	// @[CounterFile.scala:165:32]
    if (_GEN_12)	// @[CounterFile.scala:164:31, :201:36, :202:31]
      counter_is_external_4 <= io_external;	// @[CounterFile.scala:165:32]
    if (_GEN_13)	// @[CounterFile.scala:164:31, :201:36, :202:31]
      counter_is_external_5 <= io_external;	// @[CounterFile.scala:165:32]
    if (_GEN_14)	// @[CounterFile.scala:164:31, :201:36, :202:31]
      counter_is_external_6 <= io_external;	// @[CounterFile.scala:165:32]
    if (_GEN_15)	// @[CounterFile.scala:164:31, :201:36, :202:31]
      counter_is_external_7 <= io_external;	// @[CounterFile.scala:165:32]
    if (reset | io_counter_reset) begin	// @[CounterFile.scala:168:26]
      counter_snapshot_0 <= 64'h0;	// @[CounterFile.scala:169:{35,66}]
      counter_snapshot_1 <= 64'h0;	// @[CounterFile.scala:169:{35,66}]
      counter_snapshot_2 <= 64'h0;	// @[CounterFile.scala:169:{35,66}]
      counter_snapshot_3 <= 64'h0;	// @[CounterFile.scala:169:{35,66}]
      counter_snapshot_4 <= 64'h0;	// @[CounterFile.scala:169:{35,66}]
      counter_snapshot_5 <= 64'h0;	// @[CounterFile.scala:169:{35,66}]
      counter_snapshot_6 <= 64'h0;	// @[CounterFile.scala:169:{35,66}]
      counter_snapshot_7 <= 64'h0;	// @[CounterFile.scala:169:{35,66}]
      counters_0 <= 64'h0;	// @[CounterFile.scala:169:66, :170:27]
      counters_1 <= 64'h0;	// @[CounterFile.scala:169:66, :170:27]
      counters_2 <= 64'h0;	// @[CounterFile.scala:169:66, :170:27]
      counters_3 <= 64'h0;	// @[CounterFile.scala:169:66, :170:27]
      counters_4 <= 64'h0;	// @[CounterFile.scala:169:66, :170:27]
      counters_5 <= 64'h0;	// @[CounterFile.scala:169:66, :170:27]
      counters_6 <= 64'h0;	// @[CounterFile.scala:169:66, :170:27]
      counters_7 <= 64'h0;	// @[CounterFile.scala:169:66, :170:27]
      snapshot_enable <= 1'h0;	// @[CounterFile.scala:171:34]
    end
    else begin
      if (io_snapshot_reset | ~io_snapshot) begin	// @[CounterFile.scala:169:35, :187:30, :189:31]
      end
      else if (_GEN_0) begin	// @[CounterFile.scala:181:10]
        counter_snapshot_0 <= {32'h0, _GEN_1[counter_config_0[2:0]]};	// @[CounterFile.scala:164:31, :169:35, :181:10]
        counter_snapshot_1 <= {32'h0, _GEN_1[counter_config_1[2:0]]};	// @[CounterFile.scala:164:31, :169:35, :181:10]
        counter_snapshot_2 <= {32'h0, _GEN_1[counter_config_2[2:0]]};	// @[CounterFile.scala:164:31, :169:35, :181:10]
        counter_snapshot_3 <= {32'h0, _GEN_1[counter_config_3[2:0]]};	// @[CounterFile.scala:164:31, :169:35, :181:10]
        counter_snapshot_4 <= {32'h0, _GEN_1[counter_config_4[2:0]]};	// @[CounterFile.scala:164:31, :169:35, :181:10]
        counter_snapshot_5 <= {32'h0, _GEN_1[counter_config_5[2:0]]};	// @[CounterFile.scala:164:31, :169:35, :181:10]
        counter_snapshot_6 <= {32'h0, _GEN_1[counter_config_6[2:0]]};	// @[CounterFile.scala:164:31, :169:35, :181:10]
        counter_snapshot_7 <= {32'h0, _GEN_1[counter_config_7[2:0]]};	// @[CounterFile.scala:164:31, :169:35, :181:10]
      end
      else begin	// @[CounterFile.scala:181:10]
        counter_snapshot_0 <= counters_0;	// @[CounterFile.scala:169:35, :170:27]
        counter_snapshot_1 <= counters_1;	// @[CounterFile.scala:169:35, :170:27]
        counter_snapshot_2 <= counters_2;	// @[CounterFile.scala:169:35, :170:27]
        counter_snapshot_3 <= counters_3;	// @[CounterFile.scala:169:35, :170:27]
        counter_snapshot_4 <= counters_4;	// @[CounterFile.scala:169:35, :170:27]
        counter_snapshot_5 <= counters_5;	// @[CounterFile.scala:169:35, :170:27]
        counter_snapshot_6 <= counters_6;	// @[CounterFile.scala:169:35, :170:27]
        counter_snapshot_7 <= counters_7;	// @[CounterFile.scala:169:35, :170:27]
      end
      if (_GEN_7[counter_config_0[5:0]] & ~(io_config_address_valid & ~(|io_addr)))	// @[CounterFile.scala:164:31, :201:36, :202:31, :209:47, :210:{15,41,52,64}, :211:19]
        counters_0 <= counters_0 + 64'h1;	// @[CounterFile.scala:170:27, :211:30]
      else if (_GEN_8)	// @[CounterFile.scala:164:31, :201:36, :202:31]
        counters_0 <= 64'h0;	// @[CounterFile.scala:169:66, :170:27]
      if (_GEN_7[counter_config_1[5:0]] & ~(io_config_address_valid & io_addr == 3'h1))	// @[CounterFile.scala:164:31, :201:36, :202:31, :209:47, :210:{15,41,52,64}, :211:19]
        counters_1 <= counters_1 + 64'h1;	// @[CounterFile.scala:170:27, :211:30]
      else if (_GEN_9)	// @[CounterFile.scala:164:31, :201:36, :202:31]
        counters_1 <= 64'h0;	// @[CounterFile.scala:169:66, :170:27]
      if (_GEN_7[counter_config_2[5:0]] & ~(io_config_address_valid & io_addr == 3'h2))	// @[CounterFile.scala:164:31, :201:36, :202:31, :209:47, :210:{15,41,52,64}, :211:19]
        counters_2 <= counters_2 + 64'h1;	// @[CounterFile.scala:170:27, :211:30]
      else if (_GEN_10)	// @[CounterFile.scala:164:31, :201:36, :202:31]
        counters_2 <= 64'h0;	// @[CounterFile.scala:169:66, :170:27]
      if (_GEN_7[counter_config_3[5:0]] & ~(io_config_address_valid & io_addr == 3'h3))	// @[CounterFile.scala:164:31, :201:36, :202:31, :209:47, :210:{15,41,52,64}, :211:19]
        counters_3 <= counters_3 + 64'h1;	// @[CounterFile.scala:170:27, :211:30]
      else if (_GEN_11)	// @[CounterFile.scala:164:31, :201:36, :202:31]
        counters_3 <= 64'h0;	// @[CounterFile.scala:169:66, :170:27]
      if (_GEN_7[counter_config_4[5:0]] & ~(io_config_address_valid & io_addr == 3'h4))	// @[CounterFile.scala:164:31, :201:36, :202:31, :209:47, :210:{15,41,52,64}, :211:19]
        counters_4 <= counters_4 + 64'h1;	// @[CounterFile.scala:170:27, :211:30]
      else if (_GEN_12)	// @[CounterFile.scala:164:31, :201:36, :202:31]
        counters_4 <= 64'h0;	// @[CounterFile.scala:169:66, :170:27]
      if (_GEN_7[counter_config_5[5:0]] & ~(io_config_address_valid & io_addr == 3'h5))	// @[CounterFile.scala:164:31, :201:36, :202:31, :209:47, :210:{15,41,52,64}, :211:19]
        counters_5 <= counters_5 + 64'h1;	// @[CounterFile.scala:170:27, :211:30]
      else if (_GEN_13)	// @[CounterFile.scala:164:31, :201:36, :202:31]
        counters_5 <= 64'h0;	// @[CounterFile.scala:169:66, :170:27]
      if (_GEN_7[counter_config_6[5:0]] & ~(io_config_address_valid & io_addr == 3'h6))	// @[CounterFile.scala:164:31, :201:36, :202:31, :209:47, :210:{15,41,52,64}, :211:19]
        counters_6 <= counters_6 + 64'h1;	// @[CounterFile.scala:170:27, :211:30]
      else if (_GEN_14)	// @[CounterFile.scala:164:31, :201:36, :202:31]
        counters_6 <= 64'h0;	// @[CounterFile.scala:169:66, :170:27]
      if (_GEN_7[counter_config_7[5:0]] & ~(io_config_address_valid & (&io_addr)))	// @[CounterFile.scala:164:31, :201:36, :209:47, :210:{15,41,52,64}, :211:19]
        counters_7 <= counters_7 + 64'h1;	// @[CounterFile.scala:170:27, :211:30]
      else if (_GEN_15)	// @[CounterFile.scala:164:31, :201:36, :202:31]
        counters_7 <= 64'h0;	// @[CounterFile.scala:169:66, :170:27]
      snapshot_enable <= ~io_snapshot_reset & (io_snapshot | snapshot_enable);	// @[CounterFile.scala:171:34, :187:30, :188:23, :189:31, :190:23]
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
        counter_config_0 = _RANDOM_0[6:0];	// @[CounterFile.scala:164:31]
        counter_config_1 = _RANDOM_0[13:7];	// @[CounterFile.scala:164:31]
        counter_config_2 = _RANDOM_0[20:14];	// @[CounterFile.scala:164:31]
        counter_config_3 = _RANDOM_0[27:21];	// @[CounterFile.scala:164:31]
        counter_config_4 = {_RANDOM_0[31:28], _RANDOM_1[2:0]};	// @[CounterFile.scala:164:31]
        counter_config_5 = _RANDOM_1[9:3];	// @[CounterFile.scala:164:31]
        counter_config_6 = _RANDOM_1[16:10];	// @[CounterFile.scala:164:31]
        counter_config_7 = _RANDOM_1[23:17];	// @[CounterFile.scala:164:31]
        counter_is_external_0 = _RANDOM_1[24];	// @[CounterFile.scala:164:31, :165:32]
        counter_is_external_1 = _RANDOM_1[25];	// @[CounterFile.scala:164:31, :165:32]
        counter_is_external_2 = _RANDOM_1[26];	// @[CounterFile.scala:164:31, :165:32]
        counter_is_external_3 = _RANDOM_1[27];	// @[CounterFile.scala:164:31, :165:32]
        counter_is_external_4 = _RANDOM_1[28];	// @[CounterFile.scala:164:31, :165:32]
        counter_is_external_5 = _RANDOM_1[29];	// @[CounterFile.scala:164:31, :165:32]
        counter_is_external_6 = _RANDOM_1[30];	// @[CounterFile.scala:164:31, :165:32]
        counter_is_external_7 = _RANDOM_1[31];	// @[CounterFile.scala:164:31, :165:32]
        counter_snapshot_0 = {_RANDOM_2, _RANDOM_3};	// @[CounterFile.scala:169:35]
        counter_snapshot_1 = {_RANDOM_4, _RANDOM_5};	// @[CounterFile.scala:169:35]
        counter_snapshot_2 = {_RANDOM_6, _RANDOM_7};	// @[CounterFile.scala:169:35]
        counter_snapshot_3 = {_RANDOM_8, _RANDOM_9};	// @[CounterFile.scala:169:35]
        counter_snapshot_4 = {_RANDOM_10, _RANDOM_11};	// @[CounterFile.scala:169:35]
        counter_snapshot_5 = {_RANDOM_12, _RANDOM_13};	// @[CounterFile.scala:169:35]
        counter_snapshot_6 = {_RANDOM_14, _RANDOM_15};	// @[CounterFile.scala:169:35]
        counter_snapshot_7 = {_RANDOM_16, _RANDOM_17};	// @[CounterFile.scala:169:35]
        counters_0 = {_RANDOM_18, _RANDOM_19};	// @[CounterFile.scala:170:27]
        counters_1 = {_RANDOM_20, _RANDOM_21};	// @[CounterFile.scala:170:27]
        counters_2 = {_RANDOM_22, _RANDOM_23};	// @[CounterFile.scala:170:27]
        counters_3 = {_RANDOM_24, _RANDOM_25};	// @[CounterFile.scala:170:27]
        counters_4 = {_RANDOM_26, _RANDOM_27};	// @[CounterFile.scala:170:27]
        counters_5 = {_RANDOM_28, _RANDOM_29};	// @[CounterFile.scala:170:27]
        counters_6 = {_RANDOM_30, _RANDOM_31};	// @[CounterFile.scala:170:27]
        counters_7 = {_RANDOM_32, _RANDOM_33};	// @[CounterFile.scala:170:27]
        snapshot_enable = _RANDOM_34[0];	// @[CounterFile.scala:171:34]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  assign io_data = snapshot_enable ? _GEN_4[io_addr] : _GEN_0 ? {32'h0, _GEN_1[_GEN_2[io_addr][2:0]]} : _GEN_3[io_addr];	// @[CounterFile.scala:171:34, :181:10, :198:19]
  assign io_event_io_external_reset = io_counter_reset;
endmodule

