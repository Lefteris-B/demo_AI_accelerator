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

module DebugTransportModuleJTAG(
  input         io_jtag_clock,
                io_jtag_reset,
                io_dmi_req_ready,
                io_dmi_resp_valid,
  input  [31:0] io_dmi_resp_bits_data,
  input  [1:0]  io_dmi_resp_bits_resp,
  input         io_jtag_TMS,
                io_jtag_TDI,
  output        io_dmi_req_valid,
  output [6:0]  io_dmi_req_bits_addr,
  output [31:0] io_dmi_req_bits_data,
  output [1:0]  io_dmi_req_bits_op,
  output        io_dmi_resp_ready,
                io_jtag_TDO_data
);

  wire        _tapIO_bypassChain_io_chainOut_data;	// @[JtagTap.scala:207:29]
  wire [4:0]  _tapIO_controllerInternal_io_output_instruction;	// @[JtagTap.scala:199:36]
  wire        _tapIO_controllerInternal_io_output_tapIsInTestLogicReset;	// @[JtagTap.scala:199:36]
  wire        _tapIO_controllerInternal_io_dataChainOut_shift;	// @[JtagTap.scala:199:36]
  wire        _tapIO_controllerInternal_io_dataChainOut_data;	// @[JtagTap.scala:199:36]
  wire        _tapIO_controllerInternal_io_dataChainOut_capture;	// @[JtagTap.scala:199:36]
  wire        _tapIO_controllerInternal_io_dataChainOut_update;	// @[JtagTap.scala:199:36]
  wire        _tapIO_idcodeChain_io_chainOut_data;	// @[JtagTap.scala:181:33]
  wire        _dmiAccessChain_io_chainOut_data;	// @[DebugTransport.scala:134:31]
  wire        _dmiAccessChain_io_capture_capture;	// @[DebugTransport.scala:134:31]
  wire        _dmiAccessChain_io_update_valid;	// @[DebugTransport.scala:134:31]
  wire [6:0]  _dmiAccessChain_io_update_bits_addr;	// @[DebugTransport.scala:134:31]
  wire [31:0] _dmiAccessChain_io_update_bits_data;	// @[DebugTransport.scala:134:31]
  wire [1:0]  _dmiAccessChain_io_update_bits_op;	// @[DebugTransport.scala:134:31]
  wire        _dtmInfoChain_io_chainOut_data;	// @[DebugTransport.scala:128:29]
  wire        _dtmInfoChain_io_update_valid;	// @[DebugTransport.scala:128:29]
  wire        _dtmInfoChain_io_update_bits_dmireset;	// @[DebugTransport.scala:128:29]
  reg         busyReg;	// @[DebugTransport.scala:96:24]
  reg         stickyBusyReg;	// @[DebugTransport.scala:97:30]
  reg         stickyNonzeroRespReg;	// @[DebugTransport.scala:98:37]
  reg         downgradeOpReg;	// @[DebugTransport.scala:100:31]
  reg  [6:0]  dmiReqReg_addr;	// @[DebugTransport.scala:110:23]
  reg  [31:0] dmiReqReg_data;	// @[DebugTransport.scala:110:23]
  reg  [1:0]  dmiReqReg_op;	// @[DebugTransport.scala:110:23]
  reg         dmiReqValidReg;	// @[DebugTransport.scala:111:31]
  wire        _busy_T_1 = busyReg & ~io_dmi_resp_valid;	// @[DebugTransport.scala:96:24, :155:{20,22}]
  wire        busy = _busy_T_1 | stickyBusyReg;	// @[DebugTransport.scala:97:30, :155:{20,42}]
  wire        _nonzeroResp_T_1 = io_dmi_resp_valid & (|io_dmi_resp_bits_resp);	// @[DebugTransport.scala:178:{60,85}]
  wire        _GEN = busy | ~io_dmi_resp_valid;	// @[DebugTransport.scala:155:42, :197:40]
  wire        _T_12 = io_dmi_req_ready & dmiReqValidReg;	// @[DebugTransport.scala:111:31, Decoupled.scala:51:35]
  wire        _T_11 = downgradeOpReg | _dmiAccessChain_io_update_bits_op == 2'h0;	// @[DebugTransport.scala:100:31, :134:31, :191:16, :208:{32,69}]
  wire        _GEN_0 = stickyBusyReg | _T_11;	// @[DebugTransport.scala:97:30, :111:31, :206:26, :208:{32,97}, :215:22]
  wire        _io_dmi_resp_ready_output = dmiReqReg_op == 2'h2 ? io_dmi_resp_valid : _dmiAccessChain_io_capture_capture & ~busy;	// @[DebugTransport.scala:110:23, :134:31, :155:42, :224:27, :225:18, :229:{41,43}]
  wire        tapIO_icodeSelects_0 = _tapIO_controllerInternal_io_output_instruction == 5'h1;	// @[JtagTap.scala:199:36, :223:82]
  wire        tapIO_icodeSelects_0_1 = _tapIO_controllerInternal_io_output_instruction == 5'h10;	// @[JtagTap.scala:199:36, :223:82]
  wire        tapIO_icodeSelects_0_2 = _tapIO_controllerInternal_io_output_instruction == 5'h11;	// @[JtagTap.scala:199:36, :223:82]
  wire        _GEN_1 = _tapIO_controllerInternal_io_output_tapIsInTestLogicReset | _dtmInfoChain_io_update_valid & _dtmInfoChain_io_update_bits_dmireset;	// @[DebugTransport.scala:128:29, :163:44, :168:39, :169:49, :170:28, :171:21, :269:45, :271:19, JtagTap.scala:199:36]
  always @(posedge io_jtag_clock or posedge io_jtag_reset) begin
    if (io_jtag_reset) begin
      busyReg <= 1'h0;	// @[DebugTransport.scala:96:24]
      stickyBusyReg <= 1'h0;	// @[DebugTransport.scala:96:24, :97:30]
      stickyNonzeroRespReg <= 1'h0;	// @[DebugTransport.scala:96:24, :98:37]
      downgradeOpReg <= 1'h0;	// @[DebugTransport.scala:96:24, :100:31]
      dmiReqValidReg <= 1'h0;	// @[DebugTransport.scala:96:24, :111:31]
    end
    else begin
      busyReg <= ~(_tapIO_controllerInternal_io_output_tapIsInTestLogicReset | _io_dmi_resp_ready_output & io_dmi_resp_valid) & (dmiReqValidReg | busyReg);	// @[DebugTransport.scala:96:24, :111:31, :143:27, :144:13, :146:29, :147:13, :224:27, :269:45, :270:13, Decoupled.scala:51:35, JtagTap.scala:199:36]
      stickyBusyReg <= ~_GEN_1 & (_dmiAccessChain_io_capture_capture & _busy_T_1 | stickyBusyReg);	// @[DebugTransport.scala:97:30, :134:31, :155:20, :163:44, :165:19, :168:39, :169:49, :171:21, :269:45, :271:19]
      stickyNonzeroRespReg <= ~_GEN_1 & (_dmiAccessChain_io_capture_capture & _nonzeroResp_T_1 | stickyNonzeroRespReg);	// @[DebugTransport.scala:98:37, :134:31, :163:44, :166:26, :168:39, :169:49, :170:28, :171:21, :178:60, :269:45, :271:19, :272:26]
      downgradeOpReg <= ~_tapIO_controllerInternal_io_output_tapIsInTestLogicReset & (_dmiAccessChain_io_capture_capture ? ~busy & (stickyNonzeroRespReg | _nonzeroResp_T_1) : ~_dmiAccessChain_io_update_valid & downgradeOpReg);	// @[DebugTransport.scala:98:37, :100:31, :134:31, :155:42, :160:41, :161:20, :163:44, :164:{20,24,30}, :178:{39,60}, :269:45, :273:20, JtagTap.scala:199:36]
      dmiReqValidReg <= ~(_tapIO_controllerInternal_io_output_tapIsInTestLogicReset | _T_12) & (_dmiAccessChain_io_update_valid & ~_GEN_0 | dmiReqValidReg);	// @[DebugTransport.scala:111:31, :134:31, :205:41, :206:26, :208:97, :215:22, :220:28, :221:20, :269:45, :274:20, Decoupled.scala:51:35, JtagTap.scala:199:36]
    end
  end // always @(posedge, posedge)
  always @(posedge io_jtag_clock) begin
    if (~_dmiAccessChain_io_update_valid | stickyBusyReg) begin	// @[DebugTransport.scala:97:30, :100:31, :110:23, :134:31, :160:41, :161:20, :205:41, :206:26]
    end
    else if (_T_11) begin	// @[DebugTransport.scala:208:32]
      dmiReqReg_addr <= 7'h0;	// @[DebugTransport.scala:110:23, :182:18]
      dmiReqReg_data <= 32'h0;	// @[DebugTransport.scala:110:23, :184:18]
      dmiReqReg_op <= 2'h0;	// @[DebugTransport.scala:110:23, :191:16]
    end
    else begin	// @[DebugTransport.scala:208:32]
      dmiReqReg_addr <= _dmiAccessChain_io_update_bits_addr;	// @[DebugTransport.scala:110:23, :134:31]
      dmiReqReg_data <= _dmiAccessChain_io_update_bits_data;	// @[DebugTransport.scala:110:23, :134:31]
      dmiReqReg_op <= _dmiAccessChain_io_update_bits_op;	// @[DebugTransport.scala:110:23, :134:31]
    end
  end // always @(posedge)
  `ifndef SYNTHESIS
    always @(posedge io_jtag_clock) begin	// @[DebugTransport.scala:203:9]
      if (~io_jtag_reset & _dmiAccessChain_io_update_valid & ~_GEN_0 & _T_12) begin	// @[DebugTransport.scala:111:31, :134:31, :202:34, :203:9, :206:26, :208:97, :215:22, :216:24, Decoupled.scala:51:35]
        if (`ASSERT_VERBOSE_COND_)	// @[DebugTransport.scala:203:9]
          $error("Assertion failed: Conflicting updates for dmiReqValidReg, should not happen.\n    at DebugTransport.scala:203 assert(!(dmiReqValidCheck && io.dmi.req.fire()), \"Conflicting updates for dmiReqValidReg, should not happen.\");\n");	// @[DebugTransport.scala:203:9]
        if (`STOP_COND_)	// @[DebugTransport.scala:203:9]
          $fatal;	// @[DebugTransport.scala:203:9]
      end
    end // always @(posedge)
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM_0;
    logic [31:0] _RANDOM_1;
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        _RANDOM_0 = `RANDOM;
        _RANDOM_1 = `RANDOM;
        busyReg = _RANDOM_0[0];	// @[DebugTransport.scala:96:24]
        stickyBusyReg = _RANDOM_0[1];	// @[DebugTransport.scala:96:24, :97:30]
        stickyNonzeroRespReg = _RANDOM_0[2];	// @[DebugTransport.scala:96:24, :98:37]
        downgradeOpReg = _RANDOM_0[3];	// @[DebugTransport.scala:96:24, :100:31]
        dmiReqReg_addr = _RANDOM_0[10:4];	// @[DebugTransport.scala:96:24, :110:23]
        dmiReqReg_data = {_RANDOM_0[31:11], _RANDOM_1[10:0]};	// @[DebugTransport.scala:96:24, :110:23]
        dmiReqReg_op = _RANDOM_1[12:11];	// @[DebugTransport.scala:110:23]
        dmiReqValidReg = _RANDOM_1[13];	// @[DebugTransport.scala:110:23, :111:31]
      `endif // RANDOMIZE_REG_INIT
      `ifdef RANDOMIZE
        if (io_jtag_reset) begin
          busyReg = 1'h0;	// @[DebugTransport.scala:96:24]
          stickyBusyReg = 1'h0;	// @[DebugTransport.scala:96:24, :97:30]
          stickyNonzeroRespReg = 1'h0;	// @[DebugTransport.scala:96:24, :98:37]
          downgradeOpReg = 1'h0;	// @[DebugTransport.scala:96:24, :100:31]
          dmiReqValidReg = 1'h0;	// @[DebugTransport.scala:96:24, :111:31]
        end
      `endif // RANDOMIZE
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  CaptureUpdateChain dtmInfoChain (	// @[DebugTransport.scala:128:29]
    .clock                     (io_jtag_clock),
    .reset                     (io_jtag_reset),
    .io_chainIn_shift          (tapIO_icodeSelects_0_1 & _tapIO_controllerInternal_io_dataChainOut_shift),	// @[JtagTap.scala:199:36, :223:82, :245:21, :246:26, :248:26]
    .io_chainIn_data           (tapIO_icodeSelects_0_1 & _tapIO_controllerInternal_io_dataChainOut_data),	// @[JtagTap.scala:199:36, :223:82, :245:21, :246:26, :248:26]
    .io_chainIn_capture        (tapIO_icodeSelects_0_1 & _tapIO_controllerInternal_io_dataChainOut_capture),	// @[JtagTap.scala:199:36, :223:82, :245:21, :246:26, :248:26]
    .io_chainIn_update         (tapIO_icodeSelects_0_1 & _tapIO_controllerInternal_io_dataChainOut_update),	// @[JtagTap.scala:199:36, :223:82, :245:21, :246:26, :248:26]
    .io_capture_bits_dmiStatus ({stickyNonzeroRespReg, stickyNonzeroRespReg | stickyBusyReg}),	// @[Cat.scala:33:92, DebugTransport.scala:97:30, :98:37, :118:63]
    .io_chainOut_data          (_dtmInfoChain_io_chainOut_data),
    .io_update_valid           (_dtmInfoChain_io_update_valid),
    .io_update_bits_dmireset   (_dtmInfoChain_io_update_bits_dmireset)
  );
  CaptureUpdateChain_1 dmiAccessChain (	// @[DebugTransport.scala:134:31]
    .clock                (io_jtag_clock),
    .reset                (io_jtag_reset),
    .io_chainIn_shift     (tapIO_icodeSelects_0_2 & _tapIO_controllerInternal_io_dataChainOut_shift),	// @[JtagTap.scala:199:36, :223:82, :245:21, :246:26, :248:26]
    .io_chainIn_data      (tapIO_icodeSelects_0_2 & _tapIO_controllerInternal_io_dataChainOut_data),	// @[JtagTap.scala:199:36, :223:82, :245:21, :246:26, :248:26]
    .io_chainIn_capture   (tapIO_icodeSelects_0_2 & _tapIO_controllerInternal_io_dataChainOut_capture),	// @[JtagTap.scala:199:36, :223:82, :245:21, :246:26, :248:26]
    .io_chainIn_update    (tapIO_icodeSelects_0_2 & _tapIO_controllerInternal_io_dataChainOut_update),	// @[JtagTap.scala:199:36, :223:82, :245:21, :246:26, :248:26]
    .io_capture_bits_addr (_GEN ? 7'h0 : dmiReqReg_addr),	// @[DebugTransport.scala:110:23, :182:18, :197:40]
    .io_capture_bits_data (_GEN ? 32'h0 : io_dmi_resp_bits_data),	// @[DebugTransport.scala:184:18, :197:40]
    .io_capture_bits_resp (busy ? 2'h3 : io_dmi_resp_valid ? io_dmi_resp_bits_resp : 2'h0),	// @[DebugTransport.scala:155:42, :183:21, :191:16, :197:{40,60}]
    .io_chainOut_data     (_dmiAccessChain_io_chainOut_data),
    .io_capture_capture   (_dmiAccessChain_io_capture_capture),
    .io_update_valid      (_dmiAccessChain_io_update_valid),
    .io_update_bits_addr  (_dmiAccessChain_io_update_bits_addr),
    .io_update_bits_data  (_dmiAccessChain_io_update_bits_data),
    .io_update_bits_op    (_dmiAccessChain_io_update_bits_op)
  );
  CaptureChain tapIO_idcodeChain (	// @[JtagTap.scala:181:33]
    .clock              (io_jtag_clock),
    .reset              (io_jtag_reset),
    .io_chainIn_shift   (tapIO_icodeSelects_0 & _tapIO_controllerInternal_io_dataChainOut_shift),	// @[JtagTap.scala:199:36, :223:82, :245:21, :246:26, :248:26]
    .io_chainIn_data    (tapIO_icodeSelects_0 & _tapIO_controllerInternal_io_dataChainOut_data),	// @[JtagTap.scala:199:36, :223:82, :245:21, :246:26, :248:26]
    .io_chainIn_capture (tapIO_icodeSelects_0 & _tapIO_controllerInternal_io_dataChainOut_capture),	// @[JtagTap.scala:199:36, :223:82, :245:21, :246:26, :248:26]
    .io_chainIn_update  (tapIO_icodeSelects_0 & _tapIO_controllerInternal_io_dataChainOut_update),	// @[JtagTap.scala:199:36, :223:82, :245:21, :246:26, :248:26]
    .io_chainOut_data   (_tapIO_idcodeChain_io_chainOut_data)
  );
  JtagTapController tapIO_controllerInternal (	// @[JtagTap.scala:199:36]
    .clock                           (io_jtag_clock),
    .reset                           (io_jtag_reset),
    .io_jtag_TMS                     (io_jtag_TMS),
    .io_jtag_TDI                     (io_jtag_TDI),
    .io_control_jtag_reset           (io_jtag_reset),
    .io_dataChainIn_data             (tapIO_icodeSelects_0 ? _tapIO_idcodeChain_io_chainOut_data : tapIO_icodeSelects_0_1 ? _dtmInfoChain_io_chainOut_data : tapIO_icodeSelects_0_2 ? _dmiAccessChain_io_chainOut_data : _tapIO_bypassChain_io_chainOut_data),	// @[DebugTransport.scala:128:29, :134:31, JtagTap.scala:181:33, :207:29, :223:82, :233:28, :234:43, :240:41]
    .io_jtag_TDO_data                (io_jtag_TDO_data),
    .io_output_instruction           (_tapIO_controllerInternal_io_output_instruction),
    .io_output_tapIsInTestLogicReset (_tapIO_controllerInternal_io_output_tapIsInTestLogicReset),
    .io_dataChainOut_shift           (_tapIO_controllerInternal_io_dataChainOut_shift),
    .io_dataChainOut_data            (_tapIO_controllerInternal_io_dataChainOut_data),
    .io_dataChainOut_capture         (_tapIO_controllerInternal_io_dataChainOut_capture),
    .io_dataChainOut_update          (_tapIO_controllerInternal_io_dataChainOut_update)
  );
  JtagBypassChain tapIO_bypassChain (	// @[JtagTap.scala:207:29]
    .clock              (io_jtag_clock),
    .reset              (io_jtag_reset),
    .io_chainIn_shift   (_tapIO_controllerInternal_io_dataChainOut_shift),	// @[JtagTap.scala:199:36]
    .io_chainIn_data    (_tapIO_controllerInternal_io_dataChainOut_data),	// @[JtagTap.scala:199:36]
    .io_chainIn_capture (_tapIO_controllerInternal_io_dataChainOut_capture),	// @[JtagTap.scala:199:36]
    .io_chainIn_update  (_tapIO_controllerInternal_io_dataChainOut_update),	// @[JtagTap.scala:199:36]
    .io_chainOut_data   (_tapIO_bypassChain_io_chainOut_data)
  );
  assign io_dmi_req_valid = dmiReqValidReg;	// @[DebugTransport.scala:111:31]
  assign io_dmi_req_bits_addr = dmiReqReg_addr;	// @[DebugTransport.scala:110:23]
  assign io_dmi_req_bits_data = dmiReqReg_data;	// @[DebugTransport.scala:110:23]
  assign io_dmi_req_bits_op = dmiReqReg_op;	// @[DebugTransport.scala:110:23]
  assign io_dmi_resp_ready = _io_dmi_resp_ready_output;	// @[DebugTransport.scala:224:27]
endmodule
