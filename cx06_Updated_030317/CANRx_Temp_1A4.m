function msg = CANRx_Temp_1A4()
%% Payload:
%% [   B0   |   B1   |   B2   |   B3   |   B4   |   B5   |   B6   |   B7   ]
%%  63 .. 56 55 .. 48 47 .. 40 39 .. 32 31 .. 24 23 .. 16 15 ..  8 7  ..  0
%%
%% ID:
%%         [ 10 .. 0 ]  STANDARD
%% [ 28 ..      .. 0 ]  EXTENDED
%%

  msg.name                    = 'Thermocouple Reader';
  msg.description             = '0x1A4';
  msg.protocol                = '';
  msg.module                  = 'Temp';
  msg.channel                 = 1;

  msg.idext                   = 'STANDARD';
  msg.id                      = hex2dec('1A4');
  msg.idmask                  = hex2dec('ffffffff');
  msg.idinherit               =  0;
  msg.payload_size            =  8;
  msg.payload_value           = [];
  msg.payload_mask            = [];
  msg.interval                = 10;

%   msg.idcontent{1}.name       = 'Node ID';
%   msg.idcontent{1}.start_bit  = 0;
%   msg.idcontent{1}.bit_length = 4;

  msg.fields{1}.name          = 'Temp_1';
  msg.fields{1}.units         = 'C';
  msg.fields{1}.start_bit     = 48;
  msg.fields{1}.bit_length    = 16;
  msg.fields{1}.byte_order    = 'BIG_ENDIAN';
  msg.fields{1}.data_type     = 'SIGNED';
  msg.fields{1}.scale         = 0.0218204;
  msg.fields{1}.offset        = 655.011;

  msg.fields{2}.name          = 'Temp_2';
  msg.fields{2}.units         = 'C';
  msg.fields{2}.start_bit     = 32;
  msg.fields{2}.bit_length    = 16;
  msg.fields{2}.byte_order    = 'BIG_ENDIAN';
  msg.fields{2}.data_type     = 'SIGNED';
  msg.fields{2}.scale         = 0.0218204;
  msg.fields{2}.offset        = 655.011;

  msg.fields{3}.name          = 'Temp_3';
  msg.fields{3}.units         = 'C';
  msg.fields{3}.start_bit     = 16;
  msg.fields{3}.bit_length    = 16;
  msg.fields{3}.byte_order    = 'BIG_ENDIAN';
  msg.fields{3}.data_type     = 'SIGNED';
  msg.fields{3}.scale         = 0.0218204;
  msg.fields{3}.offset        = 655.011;

  msg.fields{4}.name          = 'Temp_4';
  msg.fields{4}.units         = 'C';
  msg.fields{4}.start_bit     = 0;
  msg.fields{4}.bit_length    = 16;
  msg.fields{4}.byte_order    = 'BIG_ENDIAN';
  msg.fields{4}.data_type     = 'SIGNED';
  msg.fields{4}.scale         = 0.0218204;
  msg.fields{4}.offset        = 655.011;
