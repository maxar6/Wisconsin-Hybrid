function msg = miniview_string_xfer_page0()

  msg.name                    = 'MiniView String Transfer Page 0';
  msg.description             = 'MiniView String Transfer Page 0';
  msg.protocol                = 'Dushek V1';
  msg.module                  = 'Gauge';
  msg.channel                 = evalin('caller',int2str(motohawk_get_param_ws(gcb,'bus')));

  msg.idext                   = 'STANDARD';
  msg.id                      = hex2dec('424');
  msg.idmask                  = hex2dec('7ff');
  msg.idinherit               =  0;
  msg.payload_size            =  8;
  msg.payload_value           = [hex2dec('00')];
  msg.payload_mask            = [hex2dec('f0')];
  msg.interval                = -1;

  i=1;
  msg.fields{i}.name          = 'string #';
  msg.fields{i}.units         = '';
  msg.fields{i}.start_bit     = 56;
  msg.fields{i}.bit_length    = 4;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

  i=i+1;  
  msg.fields{i}.name          = 'b0';
  msg.fields{i}.units         = 'pixels';
  msg.fields{i}.start_bit     = 48;
  msg.fields{i}.bit_length    = 8;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

  i=i+1;  
  msg.fields{i}.name          = 'b1';
  msg.fields{i}.units         = 'pixels';
  msg.fields{i}.start_bit     = 40;
  msg.fields{i}.bit_length    = 8;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

  i=i+1;  
  msg.fields{i}.name          = 'b2';
  msg.fields{i}.units         = 'pixels';
  msg.fields{i}.start_bit     = 32;
  msg.fields{i}.bit_length    = 8;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

  i=i+1;  
  msg.fields{i}.name          = 'b3';
  msg.fields{i}.units         = 'pixels';
  msg.fields{i}.start_bit     = 24;
  msg.fields{i}.bit_length    = 8;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

  i=i+1;  
  msg.fields{i}.name          = 'b4';
  msg.fields{i}.units         = 'pixels';
  msg.fields{i}.start_bit     = 16;
  msg.fields{i}.bit_length    = 8;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

  i=i+1;  
  msg.fields{i}.name          = 'b5';
  msg.fields{i}.units         = 'pixels';
  msg.fields{i}.start_bit     = 8;
  msg.fields{i}.bit_length    = 8;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

  i=i+1;  
  msg.fields{i}.name          = 'b6';
  msg.fields{i}.units         = 'pixels';
  msg.fields{i}.start_bit     = 0;
  msg.fields{i}.bit_length    = 8;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

%% end-of-file.
