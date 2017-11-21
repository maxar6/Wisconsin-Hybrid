function msg = miniview_clear_screen()

  msg.name                    = 'MiniView Clear Screen';
  msg.description             = 'MiniView Clear Screen';
  msg.protocol                = 'Dushek V1';
  msg.module                  = 'Gauge';
  msg.channel                 = evalin('caller',int2str(motohawk_get_param_ws(gcb,'bus')));

  msg.idext                   = 'STANDARD';
  msg.id                      = hex2dec('426');
  msg.idmask                  = hex2dec('7ff');
  msg.idinherit               =  0;
  msg.payload_size            =  0;
  msg.payload_value           = [];
  msg.payload_mask            = [];
  msg.interval                = -1;

%% end-of-file.
