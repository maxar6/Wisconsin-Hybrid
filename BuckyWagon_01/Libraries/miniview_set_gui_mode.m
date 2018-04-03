function msg = miniview_set_gui_mode()

  msg.name                    = 'MiniView Set GUI Mode';
  msg.description             = 'MiniView Set GUI Mode';
  msg.protocol                = 'Dushek V1';
  msg.module                  = 'Gauge';
  msg.channel                 = evalin('caller',int2str(motohawk_get_param_ws(gcb,'bus')));

  msg.idext                   = 'STANDARD';
  msg.id                      = hex2dec('42A');
  msg.idmask                  = hex2dec('7ff');
  msg.idinherit               =  0;
  msg.payload_size            =  1;
  msg.payload_value           = [];
  msg.payload_mask            = [];
  msg.interval                = -1;

  i=1;
  msg.fields{i}.name          = 'mode';
  msg.fields{i}.units         = 'pixels';
  msg.fields{i}.start_bit     = 56;
  msg.fields{i}.bit_length    = 3;
  msg.fields{i}.byte_order    = 'BIG_ENDIAN';
  msg.fields{i}.data_type     = 'UNSIGNED';
  msg.fields{i}.scale         = 1;
  msg.fields{i}.offset        = 0;

%% end-of-file.
