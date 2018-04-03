function msg = BMS_A123_430()
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

  msg.name                    = 'BCM Data1';
  msg.description             = 'Data from BCM';
  msg.protocol                = 'A123';
  msg.module                  = 'A123';
  msg.bus_name                = 'CAN_2';

  msg.idext                   = 'STANDARD';
  msg.id                      = hex2dec('430');
  msg.idmask                  = hex2dec('ffffffff');
  msg.idinherit               =  0;
  msg.payload_size            =  8;
  msg.payload_value           = [];
  msg.payload_mask            = [];
  msg.interval                = 100;

  field_ctr = 0;

  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'bcm_cell_tmax';
  msg.fields{field_ctr}.units         = 'C';
  msg.fields{field_ctr}.start_bit     = 24;
  msg.fields{field_ctr}.bit_length    = 8;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 0.5;
  msg.fields{field_ctr}.offset        = -40;
  
  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'bcm_cell_tmin';
  msg.fields{field_ctr}.units         = 'C';
  msg.fields{field_ctr}.start_bit     = 16;
  msg.fields{field_ctr}.bit_length    = 8;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 0.5;
  msg.fields{field_ctr}.offset        = -40;
  
  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'bcm_cell_vmax';
  msg.fields{field_ctr}.units         = 'V';
  msg.fields{field_ctr}.start_bit     = 48;
  msg.fields{field_ctr}.bit_length    = 12;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 0.001;
  msg.fields{field_ctr}.offset        = 0;
  
  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'bcm_cell_vmin';
  msg.fields{field_ctr}.units         = 'V';
  msg.fields{field_ctr}.start_bit     = 32;
  msg.fields{field_ctr}.bit_length    = 12;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 0.001;
  msg.fields{field_ctr}.offset        = 0;
  
  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'bcm_chga_ena';
  msg.fields{field_ctr}.units         = '';
  msg.fields{field_ctr}.start_bit     = 63;
  msg.fields{field_ctr}.bit_length    = 1;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 1;
  msg.fields{field_ctr}.offset        = 0;
  
  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'bcm_chga_mon';
  msg.fields{field_ctr}.units         = '';
  msg.fields{field_ctr}.start_bit     = 46;
  msg.fields{field_ctr}.bit_length    = 1;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 1;
  msg.fields{field_ctr}.offset        = 0;
  
  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'bcm_lvbat';
  msg.fields{field_ctr}.units         = 'V';
  msg.fields{field_ctr}.start_bit     = 0;
  msg.fields{field_ctr}.bit_length    = 8;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 0.1;
  msg.fields{field_ctr}.offset        = 0;
  
  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'bcm_mod_ena';
  msg.fields{field_ctr}.units         = '';
  msg.fields{field_ctr}.start_bit     = 47;
  msg.fields{field_ctr}.bit_length    = 1;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 1;
  msg.fields{field_ctr}.offset        = 0;
  
  field_ctr = field_ctr + 1;
  msg.fields{field_ctr}.name          = 'bcm_veh_mon';
  msg.fields{field_ctr}.units         = '';
  msg.fields{field_ctr}.start_bit     = 45;
  msg.fields{field_ctr}.bit_length    = 1;
  msg.fields{field_ctr}.byte_order    = 'BIG_ENDIAN';
  msg.fields{field_ctr}.data_type     = 'UNSIGNED';
  msg.fields{field_ctr}.scale         = 1;
  msg.fields{field_ctr}.offset        = 0;
  
  %% end-of-file.
