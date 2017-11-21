function msg = CANTx_THROTTLE_7DF()
%% MOTOHAWK_CAN_EXAMPLE    MotoHawk CAN message definition example.
%%
%% In MotoHawk (versions 0.8.2 and later), the format of a CAN message is described using a MATLAB
%% struct (structure array) containing required and optional fields.  Optional field .idcontent{}
%% is a MATLAB cell array of structs used to describe/access bit fields within the message ID (such
%% as a Node ID in this example, or the Priority and Source Address fields of an SAE J1939 message).
%% Optional field .fields{} is a MATLAB cell array of structs used to describe/access fields within
%% the message payload.
%%
%% *** message name and description ***
%% .name           - name displayed on block                              (default:  empty string)
%% .description    - brief text used to document the message              (default:  empty string)
%% .protocol       - name of the protocol used                            (default:  empty string)
%% .module         - name of the source module                            (default:  empty string)
%% .channel        - number of the source CAN channel                     (default:  1)
%%
%% *** CAN ID setup ***
%% .id             - may be either 11 or 29 bits                          (if undefined, uses .idinherit = 1)
%% .idext          - either 'STANDARD' (11-bit) or 'EXTENDED' (29-bit)    (if undefined, uses .idinherit = 1)
%% .idmask         - indicates which bits are relevant for a receive slot (default:  0xffffffff)
%% .idinherit      - when set to 1, causes the message to use the ID of   (default:  0)
%%                   the previous message in a list of messages (only
%%                   applies for transmit messages)
%% .idcontent{}    - bit fields within message ID, as described below.    (optional)
%%                   describes individual fields within the ID.  may be
%%                   undefined or empty, if no ID content is defined.
%%
%% *** transmit interval, message size, and contents ***
%% .interval       - period in milliseconds, or -1 if sent asynchronously (default: -1)
%% .payload_size   - payload size may be from 0 to 8 bytes.               (default:  8)
%%                   transmit:   exact number of bytes to send.
%%                   receive:  minimum number of bytes required.
%% .payload_value  - just as an ID has a value and mask, so can the       (optional)
%%                   payload.  For receives, this will result in a software
%%                   filter requires the bits set in the payload mask to
%%                   be equal to those in the payload value.  For transmits,
%%                   any bits set in the payload mask will be hard-coded to
%%                   be the corresponding bits of the payload value, regardless
%%                   of any payload fields that may overlap it.
%%                   A typical use of this feature is to identify a specific
%%                   message by the first byte of the payload.
%%                   May be a vector of bytes, or a hex string.
%% .payload_mask   - indicates which bits of the payload are relevant for
%%                   a receive slot, or which bits will be hardcoded for
%%                   transmits.  If the number of bytes is less than the
%%                   size of the payload, the unset bytes are assumed to
%%                   be 0, meaning don't care.
%%                   May be a vector of bytes, or a hex string.
%% .fields{}       - fields within message payload, as described below.   (optional)
%%                   describes individual fields within the payload.  may
%%                   be undefined or empty, if no payload fields are defined.
%%
%%
%% Structs in the .idcontent{} and .fields{} cell arrays may contain the following fields:
%% .name           - name displayed on the block                          (default:  empty string)
%% .units          - units (of Simulink-model value) used in mask display (default:  empty string)
%% .start_bit      - indicates the least-significant bit of the field,    (required)
%%                   regardless of endian-ness
%% .bit_length     - number of bits in the field, may spill across bytes  (required)
%% .byte_order     - may be 'BIG_ENDIAN' or 'LITTLE_ENDIAN'.              (default:  'BIG_ENDIAN')
%%                   (only 'BIG_ENDIAN' is valid for .idcontent{} fields)
%% .data_type      - may be 'UNSIGNED', 'SIGNED', 'FLOAT32', or 'FLOAT64' (default:  'UNSIGNED')
%% .scale          - scale factor.  Since the same message description    (default:  1.0)
%%                   struct is used for both transmits and receives, the
%%                   scale factor should not be thought of as a gain.
%%                   Instead, think of it as the units of the signal in
%%                   the payload on the CAN communication wire, such as
%%                   1/100 of a degree, for a signed integer representing
%%                   degrees Kelvin, where 1245 (in the payload on the
%%                   CAN communication wire) represents 12.45 degK (in
%%                   Simulink-model units).  See equation below.
%% .offset         - offset applied to the field, in engineering units.   (default:  0.0)
%%                   This is sometimes used to represent high-resolution
%%                   values in a range far from zero.  To represent
%%                   Simulink-model values from 230 to 270 Kelvin, for
%%                   example, a range of +/  - 20.47 degC with 0.01 degC
%%                   resolution is available using a signed 12-bit value
%%                   in the payload on the CAN communication wire, with
%%                   an offset of 250 Kelvin.  See equation and example
%%                   below.
%% .minimum        - minimum signal value.  If the signal value on        (default: -inf)
%%                   transmit is less than this value, the minimum value
%%                   is sent instead.
%% .maximum        - maximum signal value.  If the signal value on        (default: inf)
%%                   transmit is greater than this value, the maximum value
%%                   is sent instead.
%%
%% Equation:  (CAN_msg_field_value) * scale + offset = (Simulink_model_value)
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

  msg.name                    = 'DIAG SID IC HS RespM';
  msg.description             = 'ID728 FORD DIAG SID IC HS RespM';
  msg.protocol                = '';
  msg.module                  = 'FORD';
  msg.channel                 = 1;

  msg.idext                   = 'STANDARD';
  msg.id                      = hex2dec('728');
  msg.idmask                  = hex2dec('ffffffff');
  msg.idinherit               =  0;
  msg.payload_size            =  8;
  msg.payload_value           = [];
  msg.payload_mask            = [];
  msg.interval                = 100;

%   msg.idcontent{1}.name       = 'Node ID';
%   msg.idcontent{1}.start_bit  = 0;
%   msg.idcontent{1}.bit_length = 4;

  msg.fields{1}.name          = 'Button_Pressed';
  msg.fields{1}.units         = '';
  msg.fields{1}.start_bit     = 24;
  msg.fields{1}.bit_length    = 8;
  msg.fields{1}.byte_order    = 'BIG_ENDIAN';
  msg.fields{1}.data_type     = 'UNSIGNED';
  msg.fields{1}.scale         = 1;
  msg.fields{1}.offset        = 0;
  
 
   
% Equation: (CAN_msg_field_value) * 1e-2 + 250.0 = (Simulink_model_value)
% example:             1245       * 1e-2 + 250.0 =     262.45 degK
% valid:  -(2^11-1) = -2047 to                         229.53 degK to
%          (2^11-1) =  2047                            270.47 degK
% 0xfff = -(2^11)   = -2048   = reserved (error flag)


% Template (for .idcontent{j} and .fields{k}, replace j and k with appropriate field numbers):
% msg.name                    = /** default: '' **/
% msg.description             = /** default: '' **/
% msg.id                      = /** required: hex2dec('???'), or if undefined, sets .idinherit = 1 (below) **/
% msg.idext                   = /** required: hex2dec('???'), or if undefined, sets .idinherit = 1 (below) **/
% msg.idmask                  = /** default: hex2dec('ffffffff') **/
% msg.idinherit               = /** default: 0, unless .id is undefined (prev) **/
% msg.payload_size            = /** default: 8 **/
% msg.interval                = /** default: -1 **/
% msg.idcontent{j}.name       = /** default: '' **/
% msg.idcontent{j}.units      = /** default: '' **/
% msg.idcontent{j}.start_bit  = /** required always **/
% msg.idcontent{j}.bit_length = /** required always **/
% msg.idcontent{j}.byte_order = /** default: 'BIG_ENDIAN' **/
% msg.idcontent{j}.data_type  = /** default: 'UNSIGNED',   also valid: 'SIGNED', 'FLOAT32', 'FLOAT64', 'BOOLEAN' **/
% msg.idcontent{j}.scale      = /** default: 1.0 **/
% msg.idcontent{j}.offset     = /** default: 0.0 **/
% msg.fields{k}.name          = /** default: '' **/
% msg.fields{k}.units         = /** default: '' **/
% msg.fields{k}.start_bit     = /** required always **/
% msg.fields{k}.bit_length    = /** required always **/
% msg.fields{k}.byte_order    = /** default: 'BIG_ENDIAN', also valid: 'LITTLE_ENDIAN' **/
% msg.fields{k}.data_type     = /** default: 'UNSIGNED',   also valid: 'SIGNED', 'FLOAT32', 'FLOAT64', 'BOOLEAN' **/
% msg.fields{k}.scale         = /** default: 1.0 **/
% msg.fields{k}.offset        = /** default: 0.0 **/

%% end-of-file.
