function msg = CANTx_FIAT_2F0()
%% MOTOHAWK_CAN_EXAMPLE    MotoHawk CAN message definition example.
%%
%% In MotoHawk (versions 0.8.2 and later), the format of a CAN message is described using a MATLAB
%% struct (structure array) containing required and optional fields.  Optional field .idcontent{}
%% is a MATLAB cell array of structs used to describe/access bit fields within the message ID (such
%% as a Node ID in this example, or the Priority and Source Address fields of an SAE J1939 message).
%% Optional field .fields{} is a MATLAB cell array of structs used to describe/access fields within
%% the message payload.
%%
%% *** message name and description ***
%% .name           - name displayed on block                              (default:  empty string)
%% .description    - brief text used to document the message              (default:  empty string)
%% .protocol       - name of the protocol used                            (default:  empty string)
%% .module         - name of the source module                            (default:  empty string)
%% .channel        - number of the source CAN channel                     (default:  1)
%%
%% *** CAN ID setup ***
%% .id             - may be either 11 or 29 bits                          (if undefined, uses .idinherit = 1)
%% .idext          - either 'STANDARD' (11-bit) or 'EXTENDED' (29-bit)    (if undefined, uses .idinherit = 1)
%% .idmask         - indicates which bits are relevant for a receive slot (default:  0xffffffff)
%% .idinherit      - when set to 1, causes the message to use the ID of   (default:  0)
%%                   the previous message in a list of messages (only
%%                   applies for transmit messages)
%% .idcontent{}    - bit fields within message ID, as described below.    (optional)
%%                   describes individual fields within the ID.  may be
%%                   undefined or empty, if no ID content is defined.
%%
%% *** transmit interval, message size, and contents ***
%% .interval       - period in milliseconds, or -1 if sent asynchronously (default: -1)
%% .payload_size   - payload size may be from 0 to 8 bytes.               (default:  8)
%%                   transmit:   exact number of bytes to send.
%%                   receive:  minimum number of bytes required.
%% .payload_value  - just as an ID has a value and mask, so can the       (optional)
%%                   payload.  For receives, this will result in a software
%%                   filter requires the bits set in the payload mask to
%%                   be equal to those in the payload value.  For transmits,
%%                   any bits set in the payload mask will be hard-coded to
%%                   be the corresponding bits of the payload value, regardless
%%                   of any payload fields that may overlap it.
%%                   A typical use of this feature is to identify a specific
%%                   message by the first byte of the payload.
%%                   May be a vector of bytes, or a hex string.
%% .payload_mask   - indicates which bits of the payload are relevant for
%%                   a receive slot, or which bits will be hardcoded for
%%                   transmits.  If the number of bytes is less than the
%%                   size of the payload, the unset bytes are assumed to
%%                   be 0, meaning don't care.
%%                   May be a vector of bytes, or a hex string.
%% .fields{}       - fields within message payload, as described below.   (optional)
%%                   describes individual fields within the payload.  may
%%                   be undefined or empty, if no payload fields are defined.
%%
%%
%% Structs in the .idcontent{} and .fields{} cell arrays may contain the following fields:
%% .name           - name displayed on the block                          (default:  empty string)
%% .units          - units (of Simulink-model value) used in mask display (default:  empty string)
%% .start_bit      - indicates the least-significant bit of the field,    (required)
%%                   regardless of endian-ness
%% .bit_length     - number of bits in the field, may spill across bytes  (required)
%% .byte_order     - may be 'BIG_ENDIAN' or 'LITTLE_ENDIAN'.              (default:  'BIG_ENDIAN')
%%                   (only 'BIG_ENDIAN' is valid for .idcontent{} fields)
%% .data_type      - may be 'UNSIGNED', 'SIGNED', 'FLOAT32', or 'FLOAT64' (default:  'UNSIGNED')
%% .scale          - scale factor.  Since the same message description    (default:  1.0)
%%                   struct is used for both transmits and receives, the
%%                   scale factor should not be thought of as a gain.
%%                   Instead, think of it as the units of the signal in
%%                   the payload on the CAN communication wire, such as
%%                   1/100 of a degree, for a signed integer representing
%%                   degrees Kelvin, where 1245 (in the payload on the
%%                   CAN communication wire) represents 12.45 degK (in
%%                   Simulink-model units).  See equation below.
%% .offset         - offset applied to the field, in engineering units.   (default:  0.0)
%%                   This is sometimes used to represent high-resolution
%%                   values in a range far from zero.  To represent
%%                   Simulink-model values from 230 to 270 Kelvin, for
%%                   example, a range of +/  - 20.47 degC with 0.01 degC
%%                   resolution is available using a signed 12-bit value
%%                   in the payload on the CAN communication wire, with
%%                   an offset of 250 Kelvin.  See equation and example
%%                   below.
%% .minimum        - minimum signal value.  If the signal value on        (default: -inf)
%%                   transmit is less than this value, the minimum value
%%                   is sent instead.
%% .maximum        - maximum signal value.  If the signal value on        (default: inf)
%%                   transmit is greater than this value, the maximum value
%%                   is sent instead.
%%
%% Equation:  (CAN_msg_field_value) * scale + offset = (Simulink_model_value)
%%
%%
%% Bit notation is as follows, regardless of the actual length of the message payload.  This
%% notation somewhat favors BIG_ENDIAN-format fields, but LITTLE_ENDIAN fields may be represented
%% without any problem.  The rule is, always set the start_bit to the LSB of the FIELD.  Using this
%% notation, the LSB of a LITTLE_ENDIAN field will appear to be in the 'middle' of the field.
%%
%% Payload:
%% [   B0   |   B1   |   B2   |   B3   |   B4   |   B5   |   B6   |   B7   ]
%%  63 .. 56 55 .. 48 47 .. 40 39 .. 32 31 .. 24 23 .. 16 15 ..  8 7  ..  0
%%
%% ID:
%%         [ 10 .. 0 ]  STANDARD
%% [ 28 ..      .. 0 ]  EXTENDED
%%

  msg.name                    = 'FIAT Antilock Brakes General Status';
  msg.description             = 'ID2F0 FIAT Antilock Brakes General Status';
  msg.protocol                = '';
  msg.module                  = 'FIAT';
  msg.channel                 = 1;

  msg.idext                   = 'STANDARD';
  msg.id                      = hex2dec('2F0');
  msg.idmask                  = hex2dec('ffffffff');
  msg.idinherit               =  0;
  msg.payload_size            =  4;
  msg.payload_value           = [];
  msg.payload_mask            = [];
  msg.interval                = 20;

%   msg.idcontent{1}.name       = 'Node ID';
%   msg.idcontent{1}.start_bit  = 0;
%   msg.idcontent{1}.bit_length = 4;

  msg.fields{1}.name          = 'Antilock_Brk_Sys_Fail';
  msg.fields{1}.units         = '';
  msg.fields{1}.start_bit     = 63;
  msg.fields{1}.bit_length    = 1;
  msg.fields{1}.byte_order    = 'BIG_ENDIAN';
  msg.fields{1}.data_type     = 'UNSIGNED';
  msg.fields{1}.scale         = 1;
  msg.fields{1}.offset        = 0;

  msg.fields{2}.name          = 'Anitlock_Brk_Sys_Active';
  msg.fields{2}.units         = '';
  msg.fields{2}.start_bit     = 62;
  msg.fields{2}.bit_length    = 1;
  msg.fields{2}.byte_order    = 'BIG_ENDIAN';
  msg.fields{2}.data_type     = 'UNSIGNED';
  msg.fields{2}.scale         = 1;
  msg.fields{2}.offset        = 0;

  msg.fields{3}.name          = 'Whl_Spd_Sense_Diag_Complete';
  msg.fields{3}.units         = '';
  msg.fields{3}.start_bit     = 61;
  msg.fields{3}.bit_length    = 1;
  msg.fields{3}.byte_order    = 'BIG_ENDIAN';
  msg.fields{3}.data_type     = 'UNSIGNED';
  msg.fields{3}.scale         = 1;
  msg.fields{3}.offset        = 0;

  msg.fields{4}.name          = 'Antilock_Brk_Sys_Indic_On';
  msg.fields{4}.units         = '';
  msg.fields{4}.start_bit     = 60;
  msg.fields{4}.bit_length    = 1;
  msg.fields{4}.byte_order    = 'BIG_ENDIAN';
  msg.fields{4}.data_type     = 'UNSIGNED';
  msg.fields{4}.scale         = 1;
  msg.fields{4}.offset        = 0;

  msg.fields{5}.name          = 'Trac_Cntrl_Sys_Present';
  msg.fields{5}.units         = '';
  msg.fields{5}.start_bit     = 59;
  msg.fields{5}.bit_length    = 1;
  msg.fields{5}.byte_order    = 'BIG_ENDIAN';
  msg.fields{5}.data_type     = 'UNSIGNED';
  msg.fields{5}.scale         = 1;
  msg.fields{5}.offset        = 0;

  msg.fields{6}.name          = 'Trac_Cntrl_Sys_Enabled';
  msg.fields{6}.units         = '';
  msg.fields{6}.start_bit     = 58;
  msg.fields{6}.bit_length    = 1;
  msg.fields{6}.byte_order    = 'BIG_ENDIAN';
  msg.fields{6}.data_type     = 'UNSIGNED';
  msg.fields{6}.scale         = 1;
  msg.fields{6}.offset        = 0;
  
  msg.fields{7}.name          = 'Trac_Cntrl_Sys_Fail';
  msg.fields{7}.units         = '';
  msg.fields{7}.start_bit     = 57;
  msg.fields{7}.bit_length    = 1;
  msg.fields{7}.byte_order    = 'BIG_ENDIAN';
  msg.fields{7}.data_type     = 'UNSIGNED';
  msg.fields{7}.scale         = 1;
  msg.fields{7}.offset        = 0;
  
  msg.fields{8}.name          = 'Trac_Cntrl_Sys_Active';
  msg.fields{8}.units         = '';
  msg.fields{8}.start_bit     = 56;
  msg.fields{8}.bit_length    = 1;
  msg.fields{8}.byte_order    = 'BIG_ENDIAN';
  msg.fields{8}.data_type     = 'UNSIGNED';
  msg.fields{8}.scale         = 1;
  msg.fields{8}.offset        = 0;
  
  msg.fields{9}.name          = 'Trac_Cntrl_Sys_Indic_Req';
  msg.fields{9}.units         = '';
  msg.fields{9}.start_bit     = 55;
  msg.fields{9}.bit_length    = 2;
  msg.fields{9}.byte_order    = 'BIG_ENDIAN';
  msg.fields{9}.data_type     = 'UNSIGNED';
  msg.fields{9}.scale         = 1;
  msg.fields{9}.offset        = 0;

  msg.fields{10}.name          = 'Dynamic_Rear_Porportion_Fail';
  msg.fields{10}.units         = '';
  msg.fields{10}.start_bit     = 53;
  msg.fields{10}.bit_length    = 1;
  msg.fields{10}.byte_order    = 'BIG_ENDIAN';
  msg.fields{10}.data_type     = 'UNSIGNED';
  msg.fields{10}.scale         = 1;
  msg.fields{10}.offset        = 0;

  msg.fields{11}.name          = 'Acc_Pwr_Supply_Fail';
  msg.fields{11}.units         = '';
  msg.fields{11}.start_bit     = 52;
  msg.fields{11}.bit_length    = 1;
  msg.fields{11}.byte_order    = 'BIG_ENDIAN';
  msg.fields{11}.data_type     = 'UNSIGNED';
  msg.fields{11}.scale         = 1;
  msg.fields{11}.offset        = 0;
  
  msg.fields{12}.name          = 'Accel_Long_Sensor_Self_Test_Req';
  msg.fields{12}.units         = '';
  msg.fields{12}.start_bit     = 51;
  msg.fields{12}.bit_length    = 1;
  msg.fields{12}.byte_order    = 'BIG_ENDIAN';
  msg.fields{12}.data_type     = 'UNSIGNED';
  msg.fields{12}.scale         = 1;
  msg.fields{12}.offset        = 0;
  
  msg.fields{13}.name          = 'Veh_Dynamics_Cntrl_Present';
  msg.fields{13}.units         = '';
  msg.fields{13}.start_bit     = 47;
  msg.fields{13}.bit_length    = 1;
  msg.fields{13}.byte_order    = 'BIG_ENDIAN';
  msg.fields{13}.data_type     = 'UNSIGNED';
  msg.fields{13}.scale         = 1;
  msg.fields{13}.offset        = 0;
  
  msg.fields{14}.name          = 'Veh_Dynamics_Cntrl_Enabled';
  msg.fields{14}.units         = '';
  msg.fields{14}.start_bit     = 46;
  msg.fields{14}.bit_length    = 1;
  msg.fields{14}.byte_order    = 'BIG_ENDIAN';
  msg.fields{14}.data_type     = 'UNSIGNED';
  msg.fields{14}.scale         = 1;
  msg.fields{14}.offset        = 0;
  
  msg.fields{15}.name          = 'Veh_Dynamics_Cntrl_Failed';
  msg.fields{15}.units         = '';
  msg.fields{15}.start_bit     = 45;
  msg.fields{15}.bit_length    = 1;
  msg.fields{15}.byte_order    = 'BIG_ENDIAN';
  msg.fields{15}.data_type     = 'UNSIGNED';
  msg.fields{15}.scale         = 1;
  msg.fields{15}.offset        = 0;
  
  msg.fields{16}.name          = 'Veh_Dynamics_Cntrl_Active';
  msg.fields{16}.units         = '';
  msg.fields{16}.start_bit     = 44;
  msg.fields{16}.bit_length    = 2;
  msg.fields{16}.byte_order    = 'BIG_ENDIAN';
  msg.fields{16}.data_type     = 'UNSIGNED';
  msg.fields{16}.scale         = 1;
  msg.fields{16}.offset        = 0;
  
  msg.fields{17}.name          = 'Steering_Whl_Angl_Sensor_Cal_Req';
  msg.fields{17}.units         = '';
  msg.fields{17}.start_bit     = 43;
  msg.fields{17}.bit_length    = 3;
  msg.fields{17}.byte_order    = 'BIG_ENDIAN';
  msg.fields{17}.data_type     = 'UNSIGNED';
  msg.fields{17}.scale         = 1;
  msg.fields{17}.offset        = 0;
  
  msg.fields{18}.name          = 'Lat_Accel_Sensor_Self_Test_Req';
  msg.fields{18}.units         = '';
  msg.fields{18}.start_bit     = 42;
  msg.fields{18}.bit_length    = 1;
  msg.fields{18}.byte_order    = 'BIG_ENDIAN';
  msg.fields{18}.data_type     = 'UNSIGNED';
  msg.fields{18}.scale         = 1;
  msg.fields{18}.offset        = 0;
  
  msg.fields{19}.name          = 'Yaw_Rate_Sensor_Self_Test_Req';
  msg.fields{19}.units         = '';
  msg.fields{19}.start_bit     = 41;
  msg.fields{19}.bit_length    = 1;
  msg.fields{19}.byte_order    = 'BIG_ENDIAN';
  msg.fields{19}.data_type     = 'UNSIGNED';
  msg.fields{19}.scale         = 1;
  msg.fields{19}.offset        = 0;
  
  msg.fields{20}.name          = 'Yaw_Rate_Sensor_Serial_Num_Req';
  msg.fields{20}.units         = '';
  msg.fields{20}.start_bit     = 40;
  msg.fields{20}.bit_length    = 1;
  msg.fields{20}.byte_order    = 'BIG_ENDIAN';
  msg.fields{20}.data_type     = 'UNSIGNED';
  msg.fields{20}.scale         = 1;
  msg.fields{20}.offset        = 0;
  
  msg.fields{21}.name          = 'Yaw_Rate_Sensor_Stop_Fxn_Mes_Trans_Req';
  msg.fields{21}.units         = '';
  msg.fields{21}.start_bit     = 39;
  msg.fields{21}.bit_length    = 1;
  msg.fields{21}.byte_order    = 'BIG_ENDIAN';
  msg.fields{21}.data_type     = 'UNSIGNED';
  msg.fields{21}.scale         = 1;
  msg.fields{21}.offset        = 0;
  
  msg.fields{22}.name          = 'Brk_Pres_Sensor_Diag_Complete';
  msg.fields{22}.units         = '';
  msg.fields{22}.start_bit     = 38;
  msg.fields{22}.bit_length    = 1;
  msg.fields{22}.byte_order    = 'BIG_ENDIAN';
  msg.fields{22}.data_type     = 'UNSIGNED';
  msg.fields{22}.scale         = 1;
  msg.fields{22}.offset        = 0;
  
  msg.fields{23}.name          = 'Adapt_Cruise_Cntrl_Brk_Lights_Req';
  msg.fields{23}.units         = '';
  msg.fields{23}.start_bit     = 37;
  msg.fields{23}.bit_length    = 1;
  msg.fields{23}.byte_order    = 'BIG_ENDIAN';
  msg.fields{23}.data_type     = 'UNSIGNED';
  msg.fields{23}.scale         = 1;
  msg.fields{23}.offset        = 0;
  
  msg.fields{24}.name          = 'Drv_Off_Assist_Indic_Req';
  msg.fields{24}.units         = '';
  msg.fields{24}.start_bit     = 36;
  msg.fields{24}.bit_length    = 2;
  msg.fields{24}.byte_order    = 'BIG_ENDIAN';
  msg.fields{24}.data_type     = 'UNSIGNED';
  msg.fields{24}.scale         = 1;
  msg.fields{24}.offset        = 0;
  
  msg.fields{25}.name          = 'Drv_Off_Assist_Present';
  msg.fields{25}.units         = '';
  msg.fields{25}.start_bit     = 34;
  msg.fields{25}.bit_length    = 1;
  msg.fields{25}.byte_order    = 'BIG_ENDIAN';
  msg.fields{25}.data_type     = 'UNSIGNED';
  msg.fields{25}.scale         = 1;
  msg.fields{25}.offset        = 0;
  
  msg.fields{26}.name          = 'Drv_Off_Assist_Status';
  msg.fields{26}.units         = '';
  msg.fields{26}.start_bit     = 33;
  msg.fields{26}.bit_length    = 2;
  msg.fields{26}.byte_order    = 'BIG_ENDIAN';
  msg.fields{26}.data_type     = 'UNSIGNED';
  msg.fields{26}.scale         = 1;
  msg.fields{26}.offset        = 0;