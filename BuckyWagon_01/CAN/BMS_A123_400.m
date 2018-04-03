function msg = BMS_A123_400()
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

  msg.name                    = 'BCM Request';
  msg.description             = 'Request for BCM';
  msg.protocol                = 'A123';
  msg.module                  = 'A123';
  msg.bus_name                = 'CAN_2';

  msg.idext                   = 'STANDARD';
  msg.id                      = hex2dec('400');
  msg.idmask                  = hex2dec('ffffffff');
  msg.idinherit               =  0;
  msg.payload_size            =  4;
  msg.payload_value           = [];
  msg.payload_mask            = [];
  msg.interval                = 50;

  field_ctr = 0;

  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'hsc_bcm_enable';
  msg.fields{field_ctr}.units         = '';
  msg.fields{field_ctr}.start_bit     = 56;
  msg.fields{field_ctr}.bit_length    = 1;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 1;
  msg.fields{field_ctr}.offset        = 0;
  
  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'hsc_bcm_epo';
  msg.fields{field_ctr}.units         = '';
  msg.fields{field_ctr}.start_bit     = 57;
  msg.fields{field_ctr}.bit_length    = 1;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 1;
  msg.fields{field_ctr}.offset        = 0;
  
  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'hsc_bcm_leakage_ena';
  msg.fields{field_ctr}.units         = '';
  msg.fields{field_ctr}.start_bit     = 59;
  msg.fields{field_ctr}.bit_length    = 1;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 1;
  msg.fields{field_ctr}.offset        = 0;
  
  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'hsc_mainc_close';
  msg.fields{field_ctr}.units         = '';
  msg.fields{field_ctr}.start_bit     = 58;
  msg.fields{field_ctr}.bit_length    = 1;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 1;
  msg.fields{field_ctr}.offset        = 0;
%% end-of-file.
