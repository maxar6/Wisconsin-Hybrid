function msg = can_BRUSA_612()
%% Brusa NLG5 Actual Values 2
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

  msg.name                    = 'NLG5 Actual Values 2';
  msg.description             = 'NLG5 Actual Values 2';
  msg.protocol                = 'Brusa';
  msg.module                  = 'NLG5->VCU';
  msg.channel                 = 1;

  msg.idext                   = 'STANDARD';
  msg.id                      = hex2dec('612');
  msg.idmask                  = hex2dec('ffffffff');
  msg.idinherit               =  0;
  msg.payload_size            =  8;
  msg.payload_value           = [];
  msg.payload_mask            = [];
  msg.interval                = 100;

  msg.fields{1}.name          = 'MainsCrntByCntrlPlt';
  msg.fields{1}.units         = 'A';
  msg.fields{1}.start_bit     = 48;
  msg.fields{1}.bit_length    = 16;
  msg.fields{1}.byte_order    = 'BIG_ENDIAN';
  msg.fields{1}.data_type     = 'UNSIGNED';
  msg.fields{1}.scale         = 0.1;
  msg.fields{1}.offset        = 0;

  msg.fields{2}.name          = 'MainsCrntByPwrInd';
  msg.fields{2}.units         = 'A';
  msg.fields{2}.start_bit     = 40;
  msg.fields{2}.bit_length    = 8;
  msg.fields{2}.byte_order    = 'BIG_ENDIAN';
  msg.fields{2}.data_type     = 'UNSIGNED';
  msg.fields{2}.scale         = 0.1;
  msg.fields{2}.offset        = 0;

  msg.fields{3}.name          = 'AuxBattVlt';
  msg.fields{3}.units         = 'V';
  msg.fields{3}.start_bit     = 32;
  msg.fields{3}.bit_length    = 8;
  msg.fields{3}.byte_order    = 'BIG_ENDIAN';
  msg.fields{3}.data_type     = 'UNSIGNED';
  msg.fields{3}.scale         = 0.1;
  msg.fields{3}.offset        = 0;

  msg.fields{4}.name          = 'AhrsByExtShnt';
  msg.fields{4}.units         = 'Ah';
  msg.fields{4}.start_bit     = 16;
  msg.fields{4}.bit_length    = 16;
  msg.fields{4}.byte_order    = 'BIG_ENDIAN';
  msg.fields{4}.data_type     = 'SIGNED';
  msg.fields{4}.scale         = 0.01;
  msg.fields{4}.offset        = 0;

  msg.fields{5}.name          = 'OutptCrntByBstr';
  msg.fields{5}.units         = 'A';
  msg.fields{5}.start_bit     = 0;
  msg.fields{5}.bit_length    = 16;
  msg.fields{5}.byte_order    = 'BIG_ENDIAN';
  msg.fields{5}.data_type     = 'UNSIGNED';
  msg.fields{5}.scale         = 0.01;
  msg.fields{5}.offset        = 0;
  
%% end-of-file.
