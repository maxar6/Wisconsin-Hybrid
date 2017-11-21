function msg = miniview_draw_bitmap()

  msg.name                    = 'MiniView Draw Bitmap';
  msg.description             = 'MiniView Draw Bitmap';
  msg.protocol                = 'Dushek V1';
  msg.module                  = 'Gauge';
  msg.channel                 = evalin('caller',int2str(motohawk_get_param_ws(gcb,'bus')));

  msg.idext                   = 'STANDARD';
  msg.id                      = hex2dec('42b');
  msg.idmask                  = hex2dec('7ff');
  msg.idinherit               =  0;
  msg.payload_size            =  7;
  msg.payload_value           = [0 0 0 hex2dec('00') hex2dec('a3') 0 0];
  msg.payload_mask            = [0 0 0 hex2dec('ff') hex2dec('ff') 0 0];
  msg.interval                = -1;

  i=1;
  msg.fields{i}.name          = 'bitmap #';
  msg.fields{i}.units         = '0=dialog, 1=arrow, 2=large arrow, 3=dn arrow, 4=up arrow';
  msg.fields{i}.start_bit     = 56;
  msg.fields{i}.bit_length    = 3;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

  i=i+1;  
  msg.fields{i}.name          = 'bitmap x';
  msg.fields{i}.units         = 'pixels';
  msg.fields{i}.start_bit     = 48;
  msg.fields{i}.bit_length    = 8;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

  i=i+1;  
  msg.fields{i}.name          = 'bitmap y';
  msg.fields{i}.units         = 'pixels';
  msg.fields{i}.start_bit     = 40;
  msg.fields{i}.bit_length    = 8;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

  i=i+1;  
  msg.fields{i}.name          = 'line color';
  msg.fields{i}.units         = '';
  msg.fields{i}.start_bit     = 16;
  msg.fields{i}.bit_length    = 1;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

  i=i+1;  
  msg.fields{i}.name          = 'fill color';
  msg.fields{i}.units         = '';
  msg.fields{i}.start_bit     = 8;
  msg.fields{i}.bit_length    = 1;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

%% end-of-file.
