function msg = miniview_draw_rectangle()

  msg.name                    = 'MiniView Draw Rectangle';
  msg.description             = 'MiniView Draw Rectangle';
  msg.protocol                = 'Dushek V1';
  msg.module                  = 'Gauge';
  msg.channel                 = evalin('caller',int2str(motohawk_get_param_ws(gcb,'bus')));

  msg.idext                   = 'STANDARD';
  msg.id                      = hex2dec('427');
  msg.idmask                  = hex2dec('7ff');
  msg.idinherit               =  0;
  msg.payload_size            =  8;
  msg.payload_value           = [0 0 0 0 hex2dec('01') hex2dec('e3') 0 0];
  msg.payload_mask            = [0 0 0 0 hex2dec('ff') hex2dec('ff') 0 0];
  msg.interval                = -1;

  i=1;
  msg.fields{i}.name          = 'rect x0';
  msg.fields{i}.units         = 'pixels';
  msg.fields{i}.start_bit     = 56;
  msg.fields{i}.bit_length    = 8;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

  i=i+1;  
  msg.fields{i}.name          = 'rect x1';
  msg.fields{i}.units         = 'pixels';
  msg.fields{i}.start_bit     = 48;
  msg.fields{i}.bit_length    = 8;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

  i=i+1;  
  msg.fields{i}.name          = 'rect y0';
  msg.fields{i}.units         = 'pixels';
  msg.fields{i}.start_bit     = 40;
  msg.fields{i}.bit_length    = 8;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

  i=i+1;  
  msg.fields{i}.name          = 'rect y1';
  msg.fields{i}.units         = 'pixels';
  msg.fields{i}.start_bit     = 32;
  msg.fields{i}.bit_length    = 8;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

  i=i+1;  
  msg.fields{i}.name          = 'line color';
  msg.fields{i}.units         = '';
  msg.fields{i}.start_bit     = 8;
  msg.fields{i}.bit_length    = 1;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

  i=i+1;  
  msg.fields{i}.name          = 'fill color';
  msg.fields{i}.units         = '';
  msg.fields{i}.start_bit     = 0;
  msg.fields{i}.bit_length    = 1;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

%% end-of-file.
