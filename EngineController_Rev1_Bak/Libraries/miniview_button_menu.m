function msg = miniview_button_menu()

  msg.name                    = 'MiniView Button Menu';
  msg.description             = 'MiniView Button Menu';
  msg.protocol                = 'Dushek V1';
  msg.module                  = 'Gauge';
  msg.channel                 = evalin('caller',int2str(motohawk_get_param_ws(gcb,'bus')));

  msg.idext                   = 'STANDARD';
  msg.id                      = hex2dec('42f');
  msg.idmask                  = hex2dec('7ff');
  msg.idinherit               =  0;
  msg.payload_size            =  3;
  msg.payload_value           = [3];
  msg.payload_mask            = [255];
  msg.interval                = -1;

  msg.fields{1}.name          = 'menu asserted';
  msg.fields{1}.units         = 'bool';
  msg.fields{1}.start_bit     = 48;
  msg.fields{1}.bit_length    = 1;
  msg.fields{1}.byte_order    = 'BIG_ENDIAN';
  msg.fields{1}.data_type     = 'UNSIGNED';
  msg.fields{1}.scale         = 1;
  msg.fields{1}.offset        = 0;

  msg.fields{2}.name          = 'menu count';
  msg.fields{2}.units         = 'cnt';
  msg.fields{2}.start_bit     = 40;
  msg.fields{2}.bit_length    = 8;
  msg.fields{2}.byte_order    = 'BIG_ENDIAN';
  msg.fields{2}.data_type     = 'UNSIGNED';
  msg.fields{2}.scale         = 1;
  msg.fields{2}.offset        = 0;

%% end-of-file.
