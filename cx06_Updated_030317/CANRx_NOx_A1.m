function msg = CANRx_NOx_A1()
%% Payload:
%% [   B0   |   B1   |   B2   |   B3   |   B4   |   B5   |   B6   |   B7   ]
%%  63 .. 56 55 .. 48 47 .. 40 39 .. 32 31 .. 24 23 .. 16 15 ..  8 7  ..  0
%%
%% ID:
%%         [ 10 .. 0 ]  STANDARD
%% [ 28 ..      .. 0 ]  EXTENDED
%%

  msg.name                    = 'NOx Sensor Error';
  msg.description             = '0x80 + NID';
  msg.protocol                = '';
  msg.module                  = 'NOx';
  msg.channel                 = 1;

  msg.idext                   = 'STANDARD';
  msg.id                      = hex2dec('A1');
  msg.idmask                  = hex2dec('ffffffff');
  msg.idinherit               =  0;
  msg.payload_size            =  8;
  msg.payload_value           = [];
  msg.payload_mask            = [];
  msg.interval                = 10;

%   msg.idcontent{1}.name       = 'Node ID';
%   msg.idcontent{1}.start_bit  = 0;
%   msg.idcontent{1}.bit_length = 4;

  msg.fields{1}.name          = 'CANOpen_Er_Code';
  msg.fields{1}.units         = 'enum';
  msg.fields{1}.start_bit     = 56;
  msg.fields{1}.bit_length    = 16;
  msg.fields{1}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{1}.data_type     = 'UNSIGNED';
  msg.fields{1}.scale         = 1;
  msg.fields{1}.offset        = 0;

  msg.fields{2}.name          = 'CANOpen_Er_Reg';
  msg.fields{2}.units         = '';
  msg.fields{2}.start_bit     = 40;
  msg.fields{2}.bit_length    = 8;
  msg.fields{2}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{2}.data_type     = 'UNSIGNED';
  msg.fields{2}.scale         = 1;
  msg.fields{2}.offset        = 0;

  msg.fields{3}.name          = 'ECM_Er_Code';
  msg.fields{3}.units         = '';
  msg.fields{3}.start_bit     = 32;
  msg.fields{3}.bit_length    = 8;
  msg.fields{3}.byte_order    = 'LITTLE_ENDIAN';
  msg.fields{3}.data_type     = 'UNSIGNED';
  msg.fields{3}.scale         = 1;
  msg.fields{3}.offset        = 0;
