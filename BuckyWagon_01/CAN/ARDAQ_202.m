function msg = ARDAQ_202()
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

  msg.name                    = 'ARDAQ 0x202';
  msg.description             = 'Vehicle Information';
  msg.protocol                = 'ARDAQ';
  msg.module                  = 'ARDAQ';
  msg.bus_name                = 'CAN_2';

  msg.idext                   = 'STANDARD';
  msg.id                      = hex2dec('202');
  msg.idmask                  = hex2dec('ffffffff');
  msg.idinherit               =  0;
  msg.payload_size            =  8;
  msg.payload_value           = [];
  msg.payload_mask            = [];
  msg.interval                = 100;

  field_ctr = 0;

  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'Accel';
  msg.fields{field_ctr}.units         = '%';
  msg.fields{field_ctr}.start_bit     = 56;
  msg.fields{field_ctr}.bit_length    = 8;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 1/255;
  msg.fields{field_ctr}.offset        = 0;
  
  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'BrakeSw';
  msg.fields{field_ctr}.units         = 'bool';
  msg.fields{field_ctr}.start_bit     = 48;
  msg.fields{field_ctr}.bit_length    = 1;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 1;
  msg.fields{field_ctr}.offset        = 0;
  
  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'ReverseSw';
  msg.fields{field_ctr}.units         = 'bool';
  msg.fields{field_ctr}.start_bit     = 49;
  msg.fields{field_ctr}.bit_length    = 1;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 1;
  msg.fields{field_ctr}.offset        = 0;
  
  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'ESTOPSw';
  msg.fields{field_ctr}.units         = 'bool';
  msg.fields{field_ctr}.start_bit     = 50;
  msg.fields{field_ctr}.bit_length    = 1;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 1;
  msg.fields{field_ctr}.offset        = 0;
  
  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'CruiseAtv';
  msg.fields{field_ctr}.units         = 'bool';
  msg.fields{field_ctr}.start_bit     = 51;
  msg.fields{field_ctr}.bit_length    = 1;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 1;
  msg.fields{field_ctr}.offset        = 0;
  
  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'ChargerPresent';
  msg.fields{field_ctr}.units         = 'bool';
  msg.fields{field_ctr}.start_bit     = 52;
  msg.fields{field_ctr}.bit_length    = 1;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 1;
  msg.fields{field_ctr}.offset        = 0;
    
  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'ChargeState';
  msg.fields{field_ctr}.units         = 'enum';
  msg.fields{field_ctr}.start_bit     = 53;
  msg.fields{field_ctr}.bit_length    = 3;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 1;
  msg.fields{field_ctr}.offset        = 0;
  
  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'BattCrntOvrl';
  msg.fields{field_ctr}.units         = 'A';
  msg.fields{field_ctr}.start_bit     = 32;
  msg.fields{field_ctr}.bit_length    = 16;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'SIGNED';
  msg.fields{field_ctr}.scale         = 0.02;
  msg.fields{field_ctr}.offset        = 0;
    
  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'BattCrntStr1';
  msg.fields{field_ctr}.units         = 'A';
  msg.fields{field_ctr}.start_bit     = 16;
  msg.fields{field_ctr}.bit_length    = 16;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'SIGNED';
  msg.fields{field_ctr}.scale         = 0.005;
  msg.fields{field_ctr}.offset        = 0;
    
  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'BattCrntStr2';
  msg.fields{field_ctr}.units         = 'A';
  msg.fields{field_ctr}.start_bit     = 0;
  msg.fields{field_ctr}.bit_length    = 16;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'SIGNED';
  msg.fields{field_ctr}.scale         = 0.005;
  msg.fields{field_ctr}.offset        = 0;
%% end-of-file.
