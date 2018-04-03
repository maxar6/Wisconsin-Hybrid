function msg = can_BRUSA_610()
%% Brusa NLG5 Status Message
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

  msg.name                    = 'NLG5 Status';
  msg.description             = 'NLG5 Status';
  msg.protocol                = 'Brusa';
  msg.module                  = 'NLG5->VCU';
  msg.channel                 = 1;

  msg.idext                   = 'STANDARD';
  msg.id                      = hex2dec('610');
  msg.idmask                  = hex2dec('ffffffff');
  msg.idinherit               =  0;
  msg.payload_size            =  8;
  msg.payload_value           = [];
  msg.payload_mask            = [];
  msg.interval                = 100;

  msg.fields{1}.name          = 'NLG5PwrEn';
  msg.fields{1}.units         = 'bool';
  msg.fields{1}.start_bit     = 63;
  msg.fields{1}.bit_length    = 1;
  msg.fields{1}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{1}.data_type     = 'UNSIGNED';
  msg.fields{1}.scale         = 1;
  msg.fields{1}.offset        = 0;

  msg.fields{2}.name          = 'NLG5GenErrLtch';
  msg.fields{2}.units         = 'bool';
  msg.fields{2}.start_bit     = 62;
  msg.fields{2}.bit_length    = 1;
  msg.fields{2}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{2}.data_type     = 'UNSIGNED';
  msg.fields{2}.scale         = 1;
  msg.fields{2}.offset        = 0;

  msg.fields{3}.name          = 'NLG5GenLimWrng';
  msg.fields{3}.units         = 'bool';
  msg.fields{3}.start_bit     = 61;
  msg.fields{3}.bit_length    = 1;
  msg.fields{3}.byte_order    = 'BIG_ENDIAN';
  msg.fields{3}.data_type     = 'UNSIGNED';
  msg.fields{3}.scale         = 1;
  msg.fields{3}.offset        = 0;

  msg.fields{4}.name          = 'NLG5FanActv';
  msg.fields{4}.units         = 'bool';
  msg.fields{4}.start_bit     = 60;
  msg.fields{4}.bit_length    = 1;
  msg.fields{4}.byte_order    = 'BIG_ENDIAN';
  msg.fields{4}.data_type     = 'UNSIGNED';
  msg.fields{4}.scale         = 1;
  msg.fields{4}.offset        = 0;

  msg.fields{5}.name          = 'EuropeMains';
  msg.fields{5}.units         = 'bool';
  msg.fields{5}.start_bit     = 59;
  msg.fields{5}.bit_length    = 1;
  msg.fields{5}.byte_order    = 'BIG_ENDIAN';
  msg.fields{5}.data_type     = 'UNSIGNED';
  msg.fields{5}.scale         = 1;
  msg.fields{5}.offset        = 0;

  msg.fields{6}.name          = 'USAMainsL1';
  msg.fields{6}.units         = 'bool';
  msg.fields{6}.start_bit     = 58;
  msg.fields{6}.bit_length    = 1;
  msg.fields{6}.byte_order    = 'BIG_ENDIAN';
  msg.fields{6}.data_type     = 'UNSIGNED';
  msg.fields{6}.scale         = 1;
  msg.fields{6}.offset        = 0;

  msg.fields{7}.name          = 'USAMainsL2';
  msg.fields{7}.units         = 'bool';
  msg.fields{7}.start_bit     = 57;
  msg.fields{7}.bit_length    = 1;
  msg.fields{7}.byte_order    = 'BIG_ENDIAN';
  msg.fields{7}.data_type     = 'UNSIGNED';
  msg.fields{7}.scale         = 1;
  msg.fields{7}.offset        = 0;

  msg.fields{8}.name          = 'CntrlPltDet';
  msg.fields{8}.units         = 'bool';
  msg.fields{8}.start_bit     = 56;
  msg.fields{8}.bit_length    = 1;
  msg.fields{8}.byte_order    = 'BIG_ENDIAN';
  msg.fields{8}.data_type     = 'UNSIGNED';
  msg.fields{8}.scale         = 1;
  msg.fields{8}.offset        = 0;

  msg.fields{9}.name          = 'BypassDet';
  msg.fields{9}.units         = 'enum';
  msg.fields{9}.start_bit     = 54;
  msg.fields{9}.bit_length    = 2;
  msg.fields{9}.byte_order    = 'BIG_ENDIAN';
  msg.fields{9}.data_type     = 'UNSIGNED';
  msg.fields{9}.scale         = 1;
  msg.fields{9}.offset        = 0;

  msg.fields{10}.name          = 'LimByOutVlt';
  msg.fields{10}.units         = 'bool';
  msg.fields{10}.start_bit     = 53;
  msg.fields{10}.bit_length    = 1;
  msg.fields{10}.byte_order    = 'BIG_ENDIAN';
  msg.fields{10}.data_type     = 'UNSIGNED';
  msg.fields{10}.scale         = 1;
  msg.fields{10}.offset        = 0;

  msg.fields{11}.name          = 'LimByOutCrnt';
  msg.fields{11}.units         = 'bool';
  msg.fields{11}.start_bit     = 52;
  msg.fields{11}.bit_length    = 1;
  msg.fields{11}.byte_order    = 'BIG_ENDIAN';
  msg.fields{11}.data_type     = 'UNSIGNED';
  msg.fields{11}.scale         = 1;
  msg.fields{11}.offset        = 0;

  msg.fields{12}.name          = 'LimByMainCrnt';
  msg.fields{12}.units         = 'bool';
  msg.fields{12}.start_bit     = 51;
  msg.fields{12}.bit_length    = 1;
  msg.fields{12}.byte_order    = 'BIG_ENDIAN';
  msg.fields{12}.data_type     = 'UNSIGNED';
  msg.fields{12}.scale         = 1;
  msg.fields{12}.offset        = 0;

  msg.fields{13}.name          = 'LimByPwrInd';
  msg.fields{13}.units         = 'bool';
  msg.fields{13}.start_bit     = 50;
  msg.fields{13}.bit_length    = 1;
  msg.fields{13}.byte_order    = 'BIG_ENDIAN';
  msg.fields{13}.data_type     = 'UNSIGNED';
  msg.fields{13}.scale         = 1;
  msg.fields{13}.offset        = 0;

  msg.fields{14}.name          = 'LimByCntrlPlt';
  msg.fields{14}.units         = 'bool';
  msg.fields{14}.start_bit     = 49;
  msg.fields{14}.bit_length    = 1;
  msg.fields{14}.byte_order    = 'BIG_ENDIAN';
  msg.fields{14}.data_type     = 'UNSIGNED';
  msg.fields{14}.scale         = 1;
  msg.fields{14}.offset        = 0;

  msg.fields{15}.name          = 'LimByNLG5MaxPwr';
  msg.fields{15}.units         = 'bool';
  msg.fields{15}.start_bit     = 48;
  msg.fields{15}.bit_length    = 1;
  msg.fields{15}.byte_order    = 'BIG_ENDIAN';
  msg.fields{15}.data_type     = 'UNSIGNED';
  msg.fields{15}.scale         = 1;
  msg.fields{15}.offset        = 0;

  msg.fields{16}.name          = 'LimByNLG5MaxMainsCrnt';
  msg.fields{16}.units         = 'bool';
  msg.fields{16}.start_bit     = 47;
  msg.fields{16}.bit_length    = 1;
  msg.fields{16}.byte_order    = 'BIG_ENDIAN';
  msg.fields{16}.data_type     = 'UNSIGNED';
  msg.fields{16}.scale         = 1;
  msg.fields{16}.offset        = 0;

  msg.fields{17}.name          = 'LimByNLG5MaxOutCrnt';
  msg.fields{17}.units         = 'bool';
  msg.fields{17}.start_bit     = 46;
  msg.fields{17}.bit_length    = 1;
  msg.fields{17}.byte_order    = 'BIG_ENDIAN';
  msg.fields{17}.data_type     = 'UNSIGNED';
  msg.fields{17}.scale         = 1;
  msg.fields{17}.offset        = 0;

  msg.fields{18}.name          = 'LimByNLG5MaxOutVlt';
  msg.fields{18}.units         = 'bool';
  msg.fields{18}.start_bit     = 45;
  msg.fields{18}.bit_length    = 1;
  msg.fields{18}.byte_order    = 'BIG_ENDIAN';
  msg.fields{18}.data_type     = 'UNSIGNED';
  msg.fields{18}.scale         = 1;
  msg.fields{18}.offset        = 0;

  msg.fields{19}.name          = 'LimByTempCap';
  msg.fields{19}.units         = 'bool';
  msg.fields{19}.start_bit     = 44;
  msg.fields{19}.bit_length    = 1;
  msg.fields{19}.byte_order    = 'BIG_ENDIAN';
  msg.fields{19}.data_type     = 'UNSIGNED';
  msg.fields{19}.scale         = 1;
  msg.fields{19}.offset        = 0;

  msg.fields{20}.name          = 'LimByTempPwrStg';
  msg.fields{20}.units         = 'bool';
  msg.fields{20}.start_bit     = 43;
  msg.fields{20}.bit_length    = 1;
  msg.fields{20}.byte_order    = 'BIG_ENDIAN';
  msg.fields{20}.data_type     = 'UNSIGNED';
  msg.fields{20}.scale         = 1;
  msg.fields{20}.offset        = 0;

  msg.fields{21}.name          = 'LimByTempDiode';
  msg.fields{21}.units         = 'bool';
  msg.fields{21}.start_bit     = 42;
  msg.fields{21}.bit_length    = 1;
  msg.fields{21}.byte_order    = 'BIG_ENDIAN';
  msg.fields{21}.data_type     = 'UNSIGNED';
  msg.fields{21}.scale         = 1;
  msg.fields{21}.offset        = 0;

  msg.fields{22}.name          = 'LimByTempXfrmr';
  msg.fields{22}.units         = 'bool';
  msg.fields{22}.start_bit     = 41;
  msg.fields{22}.bit_length    = 1;
  msg.fields{22}.byte_order    = 'BIG_ENDIAN';
  msg.fields{22}.data_type     = 'UNSIGNED';
  msg.fields{22}.scale         = 1;
  msg.fields{22}.offset        = 0;

  msg.fields{23}.name          = 'LimByBattTemp';
  msg.fields{23}.units         = 'bool';
  msg.fields{23}.start_bit     = 40;
  msg.fields{23}.bit_length    = 1;
  msg.fields{23}.byte_order    = 'BIG_ENDIAN';
  msg.fields{23}.data_type     = 'UNSIGNED';
  msg.fields{23}.scale         = 1;
  msg.fields{23}.offset        = 0;

%% end-of-file.
