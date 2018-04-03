function msg = ARDAQ_cX_431()
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

  msg.name                    = 'ARDAQ 0x431';
  msg.description             = 'Vehicle Information';
  msg.protocol                = 'ARDAQ';
  msg.module                  = 'ARDAQ';
%  msg.bus_name                = 'CAN_1';

  msg.idext                   = 'STANDARD';
  msg.id                      = hex2dec('431');
  msg.idmask                  = hex2dec('ffffffff');
  msg.idinherit               =  0;
  msg.payload_size            =  8;
  msg.payload_value           = [];
  msg.payload_mask            = [];
  msg.interval                = 100;

  field_ctr = 0;

  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'H2_Tank_Pres';
  msg.fields{field_ctr}.units         = 'psi';
  msg.fields{field_ctr}.start_bit     = 32;
  msg.fields{field_ctr}.bit_length    = 32;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 0.01;
  msg.fields{field_ctr}.offset        = 0;

  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'H2_Tank_Temp';
  msg.fields{field_ctr}.units         = 'C';
  msg.fields{field_ctr}.start_bit     = 16;
  msg.fields{field_ctr}.bit_length    = 16;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 0.01;
  msg.fields{field_ctr}.offset        = 0;

  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'Liquid_Fuel_Used';
  msg.fields{field_ctr}.units         = 'l';
  msg.fields{field_ctr}.start_bit     = 0;
  msg.fields{field_ctr}.bit_length    = 16;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 3.0518e-5;
  msg.fields{field_ctr}.offset        = 0;

%% end-of-file.
