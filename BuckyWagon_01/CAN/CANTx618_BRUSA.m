function msg = CANTx618_BRUSA()
%% Brusa NLG5 Control Message
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

  msg.name                    = 'NLG5 Control';
  msg.description             = 'NLG5 Control';
  msg.protocol                = 'Brusa';
  msg.module                  = 'VCU->NLG5';
  msg.channel                 = 1;

  msg.idext                   = 'STANDARD';
  msg.id                      = hex2dec('618');
  msg.idmask                  = hex2dec('ffffffff');
  msg.idinherit               =  0;
  msg.payload_size            =  7;
  msg.payload_value           = [];
  msg.payload_mask            = [];
  msg.interval                = 100;

  msg.fields{1}.name          = 'CAN_Enable';
  msg.fields{1}.units         = 'bool';
  msg.fields{1}.start_bit     = 63;
  msg.fields{1}.bit_length    = 1;
  msg.fields{1}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{1}.data_type     = 'UNSIGNED';
  msg.fields{1}.scale         = 1;
  msg.fields{1}.offset        = 0;

  msg.fields{2}.name          = 'ClearErrorLtch';
  msg.fields{2}.units         = 'bool';
  msg.fields{2}.start_bit     = 62;
  msg.fields{2}.bit_length    = 1;
  msg.fields{2}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{2}.data_type     = 'UNSIGNED';
  msg.fields{2}.scale         = 1;
  msg.fields{2}.offset        = 0;

  msg.fields{3}.name          = 'CntrlPltVentReq';
  msg.fields{3}.units         = 'bool';
  msg.fields{3}.start_bit     = 61;
  msg.fields{3}.bit_length    = 1;
  msg.fields{3}.byte_order    = 'BIG_ENDIAN';
  msg.fields{3}.data_type     = 'UNSIGNED';
  msg.fields{3}.scale         = 1;
  msg.fields{3}.offset        = 0;

  msg.fields{4}.name          = 'MaxMainsCrnt';
  msg.fields{4}.units         = 'A';
  msg.fields{4}.start_bit     = 40;
  msg.fields{4}.bit_length    = 16;
  msg.fields{4}.byte_order    = 'BIG_ENDIAN';
  msg.fields{4}.data_type     = 'UNSIGNED';
  msg.fields{4}.scale         = 0.1;
  msg.fields{4}.offset        = 0;

  msg.fields{5}.name          = 'OutVoltCmd';
  msg.fields{5}.units         = 'V';
  msg.fields{5}.start_bit     = 24;
  msg.fields{5}.bit_length    = 16;
  msg.fields{5}.byte_order    = 'BIG_ENDIAN';
  msg.fields{5}.data_type     = 'UNSIGNED';
  msg.fields{5}.scale         = 0.1;
  msg.fields{5}.offset        = 0;

  msg.fields{6}.name          = 'OutCrntCmd';
  msg.fields{6}.units         = 'A';
  msg.fields{6}.start_bit     = 8;
  msg.fields{6}.bit_length    = 16;
  msg.fields{6}.byte_order    = 'BIG_ENDIAN';
  msg.fields{6}.data_type     = 'UNSIGNED';
  msg.fields{6}.scale         = 0.1;
  msg.fields{6}.offset        = 0;

%% end-of-file.
