function msg = CANRx_UQM_08EFrrss()
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

  msg.name                    = 'System_Status_Message';
  msg.description             = '';
  msg.protocol                = '';
  msg.module                  = 'Inverter';
  msg.channel                 = 1;

  msg.idext                   = 'EXTENDED';
  msg.id                      = hex2dec('08EF0102');
  msg.idmask                  = hex2dec('ffffffff');
  msg.idinherit               =  0;
  msg.payload_size            =  8;
  msg.payload_value           = [];
  msg.payload_mask            = [];
  msg.interval                = 500;

%   msg.idcontent{1}.name       = 'Node ID';
%   msg.idcontent{1}.start_bit  = 0;
%   msg.idcontent{1}.bit_length = 4;

  msg.fields{1}.name          = 'Not_Enabled';
  msg.fields{1}.units         = 'bool';
  msg.fields{1}.start_bit     = 0;
  msg.fields{1}.bit_length    = 1;
  msg.fields{1}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{1}.data_type     = 'UNSIGNED';
  msg.fields{1}.scale         = 1;
  msg.fields{1}.offset        = 0;

  msg.fields{2}.name          = 'Not_Enabled_Histroy';
  msg.fields{2}.units         = 'bool';
  msg.fields{2}.start_bit     = 16;
  msg.fields{2}.bit_length    = 1;
  msg.fields{2}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{2}.data_type     = 'UNSIGNED';
  msg.fields{2}.scale         = 1;
  msg.fields{2}.offset        = 0;
  
  msg.fields{3}.name          = 'Over_Leg_Current';
  msg.fields{3}.units         = 'bool';
  msg.fields{3}.start_bit     = 1;
  msg.fields{3}.bit_length    = 1;
  msg.fields{3}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{3}.data_type     = 'UNSIGNED';
  msg.fields{3}.scale         = 1;
  msg.fields{3}.offset        = 0;
  
  msg.fields{4}.name          = 'Over_Leg_Current_History';
  msg.fields{4}.units         = 'bool';
  msg.fields{4}.start_bit     = 17;
  msg.fields{4}.bit_length    = 1;
  msg.fields{4}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{4}.data_type     = 'UNSIGNED';
  msg.fields{4}.scale         = 1;
  msg.fields{4}.offset        = 0;
  
  msg.fields{5}.name          = 'Over_Bus_Current';
  msg.fields{5}.units         = 'bool';
  msg.fields{5}.start_bit     = 2;
  msg.fields{5}.bit_length    = 1;
  msg.fields{5}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{5}.data_type     = 'UNSIGNED';
  msg.fields{5}.scale         = 1;
  msg.fields{5}.offset        = 0;
  
  msg.fields{6}.name          = 'Over_Bus_Current_History';
  msg.fields{6}.units         = 'bool';
  msg.fields{6}.start_bit     = 18;
  msg.fields{6}.bit_length    = 1;
  msg.fields{6}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{6}.data_type     = 'UNSIGNED';
  msg.fields{6}.scale         = 1;
  msg.fields{6}.offset        = 0;
  
  msg.fields{7}.name          = 'Over_Phase_Advance';
  msg.fields{7}.units         = 'bool';
  msg.fields{7}.start_bit     = 3;
  msg.fields{7}.bit_length    = 1;
  msg.fields{7}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{7}.data_type     = 'UNSIGNED';
  msg.fields{7}.scale         = 1;
  msg.fields{7}.offset        = 0;
  
  msg.fields{8}.name          = 'Over_Phase_Advance_History';
  msg.fields{8}.units         = 'bool';
  msg.fields{8}.start_bit     = 19;
  msg.fields{8}.bit_length    = 1;
  msg.fields{8}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{8}.data_type     = 'UNSIGNED';
  msg.fields{8}.scale         = 1;
  msg.fields{8}.offset        = 0;
  
  msg.fields{9}.name          = 'Under_Voltage_Warning';
  msg.fields{9}.units         = 'bool';
  msg.fields{9}.start_bit     = 4;
  msg.fields{9}.bit_length    = 1;
  msg.fields{9}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{9}.data_type     = 'UNSIGNED';
  msg.fields{9}.scale         = 1;
  msg.fields{9}.offset        = 0;
  
  msg.fields{10}.name          = 'Under_Voltage_Warning_History';
  msg.fields{10}.units         = 'bool';
  msg.fields{10}.start_bit     = 20;
  msg.fields{10}.bit_length    = 1;
  msg.fields{10}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{10}.data_type     = 'UNSIGNED';
  msg.fields{10}.scale         = 1;
  msg.fields{10}.offset        = 0;
  
  msg.fields{11}.name          = 'Rotor_Over_Temperature';
  msg.fields{11}.units         = 'bool';
  msg.fields{11}.start_bit     = 5;
  msg.fields{11}.bit_length    = 1;
  msg.fields{11}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{11}.data_type     = 'UNSIGNED';
  msg.fields{11}.scale         = 1;
  msg.fields{11}.offset        = 0;
  
  msg.fields{12}.name          = 'Rotor_Over_Temperature_History';
  msg.fields{12}.units         = 'bool';
  msg.fields{12}.start_bit     = 21;
  msg.fields{12}.bit_length    = 1;
  msg.fields{12}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{12}.data_type     = 'UNSIGNED';
  msg.fields{12}.scale         = 1;
  msg.fields{12}.offset        = 0;
  
  msg.fields{13}.name          = 'Stator_Over_Temperature';
  msg.fields{13}.units         = 'bool';
  msg.fields{13}.start_bit     = 6;
  msg.fields{13}.bit_length    = 1;
  msg.fields{13}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{13}.data_type     = 'UNSIGNED';
  msg.fields{13}.scale         = 1;
  msg.fields{13}.offset        = 0;
  
  msg.fields{14}.name          = 'Stator_Over_Temperature_History';
  msg.fields{14}.units         = 'bool';
  msg.fields{14}.start_bit     = 22;
  msg.fields{14}.bit_length    = 1;
  msg.fields{14}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{14}.data_type     = 'UNSIGNED';
  msg.fields{14}.scale         = 1;
  msg.fields{14}.offset        = 0;
  
  msg.fields{15}.name          = 'Inverter_Over_Temperature';
  msg.fields{15}.units         = 'bool';
  msg.fields{15}.start_bit     = 7;
  msg.fields{15}.bit_length    = 1;
  msg.fields{15}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{15}.data_type     = 'UNSIGNED';
  msg.fields{15}.scale         = 1;
  msg.fields{15}.offset        = 0;
  
  msg.fields{16}.name          = 'Inverter_Over_Temperature_History';
  msg.fields{16}.units         = 'bool';
  msg.fields{16}.start_bit     = 23;
  msg.fields{16}.bit_length    = 1;
  msg.fields{16}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{16}.data_type     = 'UNSIGNED';
  msg.fields{16}.scale         = 1;
  msg.fields{16}.offset        = 0;
  
  msg.fields{17}.name          = 'Over_Speed_Warning';
  msg.fields{17}.units         = 'bool';
  msg.fields{17}.start_bit     = 8;
  msg.fields{17}.bit_length    = 1;
  msg.fields{17}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{17}.data_type     = 'UNSIGNED';
  msg.fields{17}.scale         = 1;
  msg.fields{17}.offset        = 0;
  
  msg.fields{18}.name          = 'Over_Speed_Warning_History';
  msg.fields{18}.units         = 'bool';
  msg.fields{18}.start_bit     = 24;
  msg.fields{18}.bit_length    = 1;
  msg.fields{18}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{18}.data_type     = 'UNSIGNED';
  msg.fields{18}.scale         = 1;
  msg.fields{18}.offset        = 0;
  
  msg.fields{19}.name          = 'Over_Voltage_Warning';
  msg.fields{19}.units         = 'bool';
  msg.fields{19}.start_bit     = 9;
  msg.fields{19}.bit_length    = 1;
  msg.fields{19}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{19}.data_type     = 'UNSIGNED';
  msg.fields{19}.scale         = 1;
  msg.fields{19}.offset        = 0;
  
  msg.fields{20}.name          = 'Over_Voltage_Warning_History';
  msg.fields{20}.units         = 'bool';
  msg.fields{20}.start_bit     = 25;
  msg.fields{20}.bit_length    = 1;
  msg.fields{20}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{20}.data_type     = 'UNSIGNED';
  msg.fields{20}.scale         = 1;
  msg.fields{20}.offset        = 0;
  
  msg.fields{21}.name          = 'Over_Speed_Alarm';
  msg.fields{21}.units         = 'bool';
  msg.fields{21}.start_bit     = 10;
  msg.fields{21}.bit_length    = 1;
  msg.fields{21}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{21}.data_type     = 'UNSIGNED';
  msg.fields{21}.scale         = 1;
  msg.fields{21}.offset        = 0;
  
  msg.fields{22}.name          = 'Over_Speed_Alarm_History';
  msg.fields{22}.units         = 'bool';
  msg.fields{22}.start_bit     = 26;
  msg.fields{22}.bit_length    = 1;
  msg.fields{22}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{22}.data_type     = 'UNSIGNED';
  msg.fields{22}.scale         = 1;
  msg.fields{22}.offset        = 0;
  
  msg.fields{23}.name          = 'Over_Voltage_Alarm';
  msg.fields{23}.units         = 'bool';
  msg.fields{23}.start_bit     = 11;
  msg.fields{23}.bit_length    = 1;
  msg.fields{23}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{23}.data_type     = 'UNSIGNED';
  msg.fields{23}.scale         = 1;
  msg.fields{23}.offset        = 0;
  
  msg.fields{24}.name          = 'Over_Voltage_Alarm_History';
  msg.fields{24}.units         = 'bool';
  msg.fields{24}.start_bit     = 27;
  msg.fields{24}.bit_length    = 1;
  msg.fields{24}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{24}.data_type     = 'UNSIGNED';
  msg.fields{24}.scale         = 1;
  msg.fields{24}.offset        = 0;
  
  msg.fields{25}.name          = 'ADC_Calibration_Problem';
  msg.fields{25}.units         = 'bool';
  msg.fields{25}.start_bit     = 12;
  msg.fields{25}.bit_length    = 1;
  msg.fields{25}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{25}.data_type     = 'UNSIGNED';
  msg.fields{25}.scale         = 1;
  msg.fields{25}.offset        = 0;
  
  msg.fields{26}.name          = 'ADC_Calibration_Problem_History';
  msg.fields{26}.units         = 'bool';
  msg.fields{26}.start_bit     = 28;
  msg.fields{26}.bit_length    = 1;
  msg.fields{26}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{26}.data_type     = 'UNSIGNED';
  msg.fields{26}.scale         = 1;
  msg.fields{26}.offset        = 0;
  
  msg.fields{27}.name          = 'Limp_Home_Mode';
  msg.fields{27}.units         = 'bool';
  msg.fields{27}.start_bit     = 13;
  msg.fields{27}.bit_length    = 1;
  msg.fields{27}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{27}.data_type     = 'UNSIGNED';
  msg.fields{27}.scale         = 1;
  msg.fields{27}.offset        = 0;
  
  msg.fields{28}.name          = 'Limp_Home_Mode_History';
  msg.fields{28}.units         = 'bool';
  msg.fields{28}.start_bit     = 29;
  msg.fields{28}.bit_length    = 1;
  msg.fields{28}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{28}.data_type     = 'UNSIGNED';
  msg.fields{28}.scale         = 1;
  msg.fields{28}.offset        = 0;
  
  msg.fields{29}.name          = 'Inverter_Fault_Occured';
  msg.fields{29}.units         = 'bool';
  msg.fields{29}.start_bit     = 14;
  msg.fields{29}.bit_length    = 1;
  msg.fields{29}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{29}.data_type     = 'UNSIGNED';
  msg.fields{29}.scale         = 1;
  msg.fields{29}.offset        = 0;
  
  msg.fields{30}.name          = 'Iverter_Fault_Occured_History';
  msg.fields{30}.units         = 'bool';
  msg.fields{30}.start_bit     = 30;
  msg.fields{30}.bit_length    = 1;
  msg.fields{30}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{30}.data_type     = 'UNSIGNED';
  msg.fields{30}.scale         = 1;
  msg.fields{30}.offset        = 0;
  
  msg.fields{31}.name          = 'Inverter_Fault';
  msg.fields{31}.units         = 'bool';
  msg.fields{31}.start_bit     = 15;
  msg.fields{31}.bit_length    = 1;
  msg.fields{31}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{31}.data_type     = 'UNSIGNED';
  msg.fields{31}.scale         = 1;
  msg.fields{31}.offset        = 0;
  
  msg.fields{32}.name          = 'Inverter_Fault_History';
  msg.fields{32}.units         = 'bool';
  msg.fields{32}.start_bit     = 31;
  msg.fields{32}.bit_length    = 1;
  msg.fields{32}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{32}.data_type     = 'UNSIGNED';
  msg.fields{32}.scale         = 1;
  msg.fields{32}.offset        = 0;
  
  msg.fields{33}.name          = 'Forced_Voltage_Control';
  msg.fields{33}.units         = 'bool';
  msg.fields{33}.start_bit     = 48;
  msg.fields{33}.bit_length    = 1;
  msg.fields{33}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{33}.data_type     = 'UNSIGNED';
  msg.fields{33}.scale         = 1;
  msg.fields{33}.offset        = 0;
  
  msg.fields{34}.name          = 'CAN_Limits_In_Effect';
  msg.fields{34}.units         = 'bool';
  msg.fields{34}.start_bit     = 49;
  msg.fields{34}.bit_length    = 1;
  msg.fields{34}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{34}.data_type     = 'UNSIGNED';
  msg.fields{34}.scale         = 1;
  msg.fields{34}.offset        = 0;
  
  msg.fields{35}.name          = 'System_Disabled_In_Motion';
  msg.fields{35}.units         = 'bool';
  msg.fields{35}.start_bit     = 50;
  msg.fields{35}.bit_length    = 1;
  msg.fields{35}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{35}.data_type     = 'UNSIGNED';
  msg.fields{35}.scale         = 1;
  msg.fields{35}.offset        = 0;
  
  msg.fields{36}.name          = 'ABC_Phase_Order';
  msg.fields{36}.units         = 'bool';
  msg.fields{36}.start_bit     = 51;
  msg.fields{36}.bit_length    = 1;
  msg.fields{36}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{36}.data_type     = 'UNSIGNED';
  msg.fields{36}.scale         = 1;
  msg.fields{36}.offset        = 0;
  
  msg.fields{37}.name          = 'Regen_Switch_Open';
  msg.fields{37}.units         = 'bool';
  msg.fields{37}.start_bit     = 52;
  msg.fields{37}.bit_length    = 1;
  msg.fields{37}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{37}.data_type     = 'UNSIGNED';
  msg.fields{37}.scale         = 1;
  msg.fields{37}.offset        = 0;
  
  msg.fields{38}.name          = 'Current_Transducer_Fault_Ibus/Ileg';
  msg.fields{38}.units         = 'bool';
  msg.fields{38}.start_bit     = 53;
  msg.fields{38}.bit_length    = 1;
  msg.fields{38}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{38}.data_type     = 'UNSIGNED';
  msg.fields{38}.scale         = 1;
  msg.fields{38}.offset        = 0;
  
  msg.fields{39}.name          = 'Acceleration_Limited';
  msg.fields{39}.units         = 'bool';
  msg.fields{39}.start_bit     = 54;
  msg.fields{39}.bit_length    = 1;
  msg.fields{39}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{39}.data_type     = 'UNSIGNED';
  msg.fields{39}.scale         = 1;
  msg.fields{39}.offset        = 0;
  
  msg.fields{40}.name          = 'Using_Raw_Speed';
  msg.fields{40}.units         = 'bool';
  msg.fields{40}.start_bit     = 55;
  msg.fields{40}.bit_length    = 1;
  msg.fields{40}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{40}.data_type     = 'UNSIGNED';
  msg.fields{40}.scale         = 1;
  msg.fields{40}.offset        = 0;
  
  msg.fields{41}.name          = 'Turbo_Mode';
  msg.fields{41}.units         = 'bool';
  msg.fields{41}.start_bit     = 56;
  msg.fields{41}.bit_length    = 1;
  msg.fields{41}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{41}.data_type     = 'UNSIGNED';
  msg.fields{41}.scale         = 1;
  msg.fields{41}.offset        = 0;
  
  msg.fields{42}.name          = 'Forced_Open_Loop';
  msg.fields{42}.units         = 'bool';
  msg.fields{42}.start_bit     = 57;
  msg.fields{42}.bit_length    = 1;
  msg.fields{42}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{42}.data_type     = 'UNSIGNED';
  msg.fields{42}.scale         = 1;
  msg.fields{42}.offset        = 0;
  
  msg.fields{43}.name          = 'Motor_Stalled';
  msg.fields{43}.units         = 'bool';
  msg.fields{43}.start_bit     = 58;
  msg.fields{43}.bit_length    = 1;
  msg.fields{43}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{43}.data_type     = 'UNSIGNED';
  msg.fields{43}.scale         = 1;
  msg.fields{43}.offset        = 0;
  
  msg.fields{44}.name          = 'Phase_Current_Sensor_Error';
  msg.fields{44}.units         = 'bool';
  msg.fields{44}.start_bit     = 59;
  msg.fields{44}.bit_length    = 1;
  msg.fields{44}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{44}.data_type     = 'UNSIGNED';
  msg.fields{44}.scale         = 1;
  msg.fields{44}.offset        = 0;
  
  msg.fields{45}.name          = 'Bad_Position_Signal';
  msg.fields{45}.units         = 'bool';
  msg.fields{45}.start_bit     = 60;
  msg.fields{45}.bit_length    = 1;
  msg.fields{45}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{45}.data_type     = 'UNSIGNED';
  msg.fields{45}.scale         = 1;
  msg.fields{45}.offset        = 0;
  
  msg.fields{46}.name          = 'Bad_Switch';
  msg.fields{46}.units         = 'bool';
  msg.fields{46}.start_bit     = 61;
  msg.fields{46}.bit_length    = 1;
  msg.fields{46}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{46}.data_type     = 'UNSIGNED';
  msg.fields{46}.scale         = 1;
  msg.fields{46}.offset        = 0;
  
  msg.fields{47}.name          = 'Invalid_Power_Supply';
  msg.fields{47}.units         = 'bool';
  msg.fields{47}.start_bit     = 62;
  msg.fields{47}.bit_length    = 1;
  msg.fields{47}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{47}.data_type     = 'UNSIGNED';
  msg.fields{47}.scale         = 1;
  msg.fields{47}.offset        = 0;
  
  msg.fields{48}.name          = 'Power_Switches_Off';
  msg.fields{48}.units         = 'bool';
  msg.fields{48}.start_bit     = 63;
  msg.fields{48}.bit_length    = 1;
  msg.fields{48}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{48}.data_type     = 'UNSIGNED';
  msg.fields{48}.scale         = 1;
  msg.fields{48}.offset        = 0;
  
% Equation: (CAN_msg_field_value) * 1e-2 + 250.0 = (Simulink_model_value)
% example:             1245       * 1e-2 + 250.0 =     262.45 degK
% valid:  -(2^11-1) = -2047 to                         229.53 degK to
%          (2^11-1) =  2047                            270.47 degK
% 0xfff = -(2^11)   = -2048   = reserved (error flag)


% Template (for .idcontent{j} and .fields{k}, replace j and k with appropriate field numbers):
% msg.name                    = /** default: '' **/
% msg.description             = /** default: '' **/
% msg.id                      = /** required: hex2dec('???'), or if undefined, sets .idinherit = 1 (below) **/
% msg.idext                   = /** required: hex2dec('???'), or if undefined, sets .idinherit = 1 (below) **/
% msg.idmask                  = /** default: hex2dec('ffffffff') **/
% msg.idinherit               = /** default: 0, unless .id is undefined (prev) **/
% msg.payload_size            = /** default: 8 **/
% msg.interval                = /** default: -1 **/
% msg.idcontent{j}.name       = /** default: '' **/
% msg.idcontent{j}.units      = /** default: '' **/
% msg.idcontent{j}.start_bit  = /** required always **/
% msg.idcontent{j}.bit_length = /** required always **/
% msg.idcontent{j}.byte_order = /** default: 'BIG_ENDIAN' **/
% msg.idcontent{j}.data_type  = /** default: 'UNSIGNED',   also valid: 'SIGNED', 'FLOAT32', 'FLOAT64', 'BOOLEAN' **/
% msg.idcontent{j}.scale      = /** default: 1.0 **/
% msg.idcontent{j}.offset     = /** default: 0.0 **/
% msg.fields{k}.name          = /** default: '' **/
% msg.fields{k}.units         = /** default: '' **/
% msg.fields{k}.start_bit     = /** required always **/
% msg.fields{k}.bit_length    = /** required always **/
% msg.fields{k}.byte_order    = /** default: 'BIG_ENDIAN', also valid: 'LITTLE_ENDIAN' **/
% msg.fields{k}.data_type     = /** default: 'UNSIGNED',   also valid: 'SIGNED', 'FLOAT32', 'FLOAT64', 'BOOLEAN' **/
% msg.fields{k}.scale         = /** default: 1.0 **/
% msg.fields{k}.offset        = /** default: 0.0 **/

%% end-of-file.
