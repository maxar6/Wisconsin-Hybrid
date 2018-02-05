function msg = miniview_draw_string()

  msg.name                    = 'MiniView Draw String';
  msg.description             = 'MiniView Draw String';
  msg.protocol                = 'Dushek V1';
  msg.module                  = 'Gauge';
  msg.channel                 = evalin('caller',int2str(motohawk_get_param_ws(gcb,'bus')));

  msg.idext                   = 'STANDARD';
  msg.id                      = hex2dec('425');
  msg.idmask                  = hex2dec('7ff');
  msg.idinherit               =  0;
  msg.payload_size            =  8;
  %%%%%%%%%%%%%%%%%%%%%%%%%%% = %%%%%%%%%%%%%%%%%% ------SY            YXXWCCFL
  %%%%%%%%%%%%%%%%%%%%%%%%%%% = %%%%%%%%%%%%%%%%%% ------im            mmmREEII
  %%%%%%%%%%%%%%%%%%%%%%%%%%% = %%%%%%%%%%%%%%%%%% ------da            iaiANNLN
  %%%%%%%%%%%%%%%%%%%%%%%%%%% = %%%%%%%%%%%%%%%%%% ------xx            nxnPVHLE
  msg.payload_value           = [ 0 0 0 0 bin2dec('00000000') bin2dec('00000001') 0 0 ];
  msg.payload_mask            = [ 0 0 0 0 bin2dec('11111111') bin2dec('11100001') 0 0 ];
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
  msg.fields{i}.name          = 'string x';
  msg.fields{i}.units         = 'pixels';
  msg.fields{i}.start_bit     = 48;
  msg.fields{i}.bit_length    = 8;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

  i=i+1;  
  msg.fields{i}.name          = 'string y';
  msg.fields{i}.units         = 'pixels';
  msg.fields{i}.start_bit     = 40;
  msg.fields{i}.bit_length    = 8;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

  i=i+1;  
  msg.fields{i}.name          = 'font';
  msg.fields{i}.units         = '';
  msg.fields{i}.start_bit     = 32;
  msg.fields{i}.bit_length    = 2;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

  i=i+1;  
  msg.fields{i}.name          = 'horiz center';
  msg.fields{i}.units         = '';
  msg.fields{i}.start_bit     = 18;
  msg.fields{i}.bit_length    = 1;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

  i=i+1;  
  msg.fields{i}.name          = 'vert center';
  msg.fields{i}.units         = '';
  msg.fields{i}.start_bit     = 19;
  msg.fields{i}.bit_length    = 1;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

  i=i+1;  
  msg.fields{i}.name          = 'wrap';
  msg.fields{i}.units         = '';
  msg.fields{i}.start_bit     = 20;
  msg.fields{i}.bit_length    = 1;
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
  msg.fields{i}.name          = 'fill color';  % ignored?
  msg.fields{i}.units         = '';
  msg.fields{i}.start_bit     = 0;
  msg.fields{i}.bit_length    = 1;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

%% end-of-file.
