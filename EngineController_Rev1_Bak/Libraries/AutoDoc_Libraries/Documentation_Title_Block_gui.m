function varargout = Documentation_Title_Block_gui(varargin)
%DOCUMENTATION_TITLE_BLOCK_GUI M-file for Documentation_Title_Block_gui.fig
%      DOCUMENTATION_TITLE_BLOCK_GUI, by itself, creates a new DOCUMENTATION_TITLE_BLOCK_GUI or raises the existing
%      singleton*.
%
%      H = DOCUMENTATION_TITLE_BLOCK_GUI returns the handle to a new DOCUMENTATION_TITLE_BLOCK_GUI or the handle to
%      the existing singleton*.
%
%      DOCUMENTATION_TITLE_BLOCK_GUI('Property','Value',...) creates a new DOCUMENTATION_TITLE_BLOCK_GUI using the
%      given property value pairs. Unrecognized properties are passed via
%      varargin to Documentation_Title_Block_gui_OpeningFcn.  This calling syntax produces a
%      warning when there is an existing singleton*.
%
%      DOCUMENTATION_TITLE_BLOCK_GUI('CALLBACK') and DOCUMENTATION_TITLE_BLOCK_GUI('CALLBACK',hObject,...) call the
%      local function named CALLBACK in DOCUMENTATION_TITLE_BLOCK_GUI.M with the given input
%      arguments.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help Documentation_Title_Block_gui

% Last Modified by GUIDE v2.5 10-Jul-2006 13:11:10

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @Documentation_Title_Block_gui_OpeningFcn, ...
                   'gui_OutputFcn',  @Documentation_Title_Block_gui_OutputFcn, ...
                   'gui_LayoutFcn',  [], ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
   gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before Documentation_Title_Block_gui is made visible.
function Documentation_Title_Block_gui_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   unrecognized PropertyName/PropertyValue pairs from the
%            command line (see VARARGIN)

handles.block = gcb;
handles.system = gcs;

% --- Retrieves Data from UserData and Sets into GUI
UserData = get_param(handles.block, 'UserData');

if isempty(UserData) == 1
    set(handles.DocOption, 'Value', 1)
    set(handles.Layout, 'Value', 1)
    set(handles.LowLevelPos, 'String', num2str(0))
    set(handles.ObjCheck, 'Value', 1)
    set(handles.ObjText, 'String', 'Write objectives and requirements here.')
    set(handles.DescCheck, 'Value', 1)
    set(handles.DescText, 'String', 'Write description here.')
    set(handles.EqnCheck, 'Value', 0)
    set(handles.EqnText, 'String', 'Write equations here.')
else
    set(handles.DocOption, 'Value', UserData.DocOption)
    set(handles.Layout, 'Value', UserData.Layout)
    set(handles.LowLevelPos, 'String', num2str(UserData.LowLevelPos))
    set(handles.ObjCheck, 'Value', UserData.ObjCheck)
    set(handles.ObjText, 'String', UserData.ObjText)
    set(handles.DescCheck, 'Value', UserData.DescCheck)
    set(handles.DescText, 'String', UserData.DescText)
    set(handles.EqnCheck, 'Value', UserData.EqnCheck)
    set(handles.EqnText, 'String', UserData.EqnText)
end

Disable_Order_Input(handles);
Disable_Text(handles);

% Choose default command line output for Documentation_Title_Block_gui
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes Documentation_Title_Block_gui wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = Documentation_Title_Block_gui_OutputFcn(hObject, eventdata, handles)
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on selection change in DocOption.
function DocOption_Callback(hObject, eventdata, handles)
% hObject    handle to DocOption (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = get(hObject,'String') returns DocOption contents as cell array
%        contents{get(hObject,'Value')} returns selected item from DocOption
Disable_Order_Input(handles);


% --- Executes during object creation, after setting all properties.
function DocOption_CreateFcn(hObject, eventdata, handles)
% hObject    handle to DocOption (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on selection change in Layout.
function Layout_Callback(hObject, eventdata, handles)
% hObject    handle to Layout (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = get(hObject,'String') returns Layout contents as cell array
%        contents{get(hObject,'Value')} returns selected item from Layout


% --- Executes during object creation, after setting all properties.
function Layout_CreateFcn(hObject, eventdata, handles)
% hObject    handle to Layout (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


function LowLevelPos_Callback(hObject, eventdata, handles)
% hObject    handle to LowLevelPos (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of LowLevelPos as text
%        str2double(get(hObject,'String')) returns contents of LowLevelPos as a double


% --- Executes during object creation, after setting all properties.
function LowLevelPos_CreateFcn(hObject, eventdata, handles)
% hObject    handle to LowLevelPos (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in okButton.
function okButton_Callback(hObject, eventdata, handles)
% hObject    handle to okButton (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
store_data(handles);
delete(handles.figure1);


% --- Executes on button press in cancelButton.
function cancelButton_Callback(hObject, eventdata, handles)
% hObject    handle to cancelButton (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
delete(handles.figure1);


% --- Executes on button press in applyButton.
function applyButton_Callback(hObject, eventdata, handles)
% hObject    handle to applyButton (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
store_data(handles);


function ObjText_Callback(hObject, eventdata, handles)
% hObject    handle to ObjText (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of ObjText as text
%        str2double(get(hObject,'String')) returns contents of ObjText as a double


% --- Executes during object creation, after setting all properties.
function ObjText_CreateFcn(hObject, eventdata, handles)
% hObject    handle to ObjText (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


function DescText_Callback(hObject, eventdata, handles)
% hObject    handle to DescText (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of DescText as text
%        str2double(get(hObject,'String')) returns contents of DescText as a double


% --- Executes during object creation, after setting all properties.
function DescText_CreateFcn(hObject, eventdata, handles)
% hObject    handle to DescText (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


function EqnText_Callback(hObject, eventdata, handles)
% hObject    handle to EqnText (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of EqnText as text
%        str2double(get(hObject,'String')) returns contents of EqnText as a double


% --- Executes during object creation, after setting all properties.
function EqnText_CreateFcn(hObject, eventdata, handles)
% hObject    handle to EqnText (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in ObjCheck.
function ObjCheck_Callback(hObject, eventdata, handles)
% hObject    handle to ObjCheck (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
Disable_Text(handles);

% Hint: get(hObject,'Value') returns toggle state of ObjCheck


% --- Executes on button press in DescCheck.
function DescCheck_Callback(hObject, eventdata, handles)
% hObject    handle to DescCheck (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
Disable_Text(handles);

% Hint: get(hObject,'Value') returns toggle state of DescCheck


% --- Executes on button press in EqnCheck.
function EqnCheck_Callback(hObject, eventdata, handles)
% hObject    handle to EqnCheck (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
Disable_Text(handles);

% Hint: get(hObject,'Value') returns toggle state of EqnCheck


% --- Stores GUI Data to UserData
function store_data(handles)

% --- Label Text, Sizing, and Positioning
FirstLbl = '';
FirstTxt = '';
SecondLbl = '';
SecondTxt = '';
objnl = 0;
descnl = 0;
lblnl = 0;
if get(handles.ObjCheck, 'Value') == 1
    FirstLbl = 'Objective';
    FirstTxt = Text_Spacing(handles, get(handles.ObjText, 'String'));
    objnl = 1 + length(strfind(char(FirstTxt), '\newline'));
    lblnl = lblnl + 1;
end
if get(handles.DescCheck, 'Value') == 1
    if get(handles.EqnCheck, 'Value') == 1
        DescriptionTxt = [Text_Spacing(handles, get(handles.DescText, 'String')) '\newline\newline' get(handles.EqnText, 'String')];
    else
        DescriptionTxt = Text_Spacing(handles, get(handles.DescText, 'String'));
    end
    descnl = 1 + length(strfind(char(DescriptionTxt), '\newline'));
    lblnl = lblnl + 1;
    if get(handles.ObjCheck, 'Value') == 0
        FirstLbl = 'Description';
        FirstTxt = DescriptionTxt;
    elseif get(handles.ObjCheck, 'Value') == 1
        SecondLbl = 'Description';
        SecondTxt = DescriptionTxt;
    end
end
numnl = objnl + descnl;
ht = 68 + 42*lblnl + 19*numnl;
if get(handles.Layout, 'Value') == 1
    set_param(handles.block, 'Position', [0 0 1060 ht]);
else
    set_param(handles.block, 'Position', [0 0 1450 ht]);
end

% --- Line and Text Display
if get(handles.Layout, 'Value') == 1
    lengthlines = 518;
else
    lengthlines = 714;
end
lines = '.';
for i = 1:lengthlines
    lines = strcat(lines, '.');
end
p = get_param(handles.block, 'Position');
wd = p(3) - p(1);

% --- Save GUI Parameters into UserData
UserData.DocOption = get(handles.DocOption, 'Value');
UserData.Layout = get(handles.Layout, 'Value');
UserData.LowLevelPos = str2num(get(handles.LowLevelPos, 'String'));
UserData.ObjCheck = get(handles.ObjCheck, 'Value');
UserData.ObjText = get(handles.ObjText, 'String');
UserData.DescCheck = get(handles.DescCheck, 'Value');
UserData.DescText = get(handles.DescText, 'String');
UserData.EqnCheck = get(handles.EqnCheck, 'Value');
UserData.EqnText = get(handles.EqnText, 'String');

UserData.FirstLbl = FirstLbl;
UserData.FirstTxt = FirstTxt;
UserData.SecondLbl = SecondLbl;
UserData.SecondTxt = SecondTxt;
UserData.DispLines = strcat('\fontsize{8}', lines, '\fontsize{12}\newline');
UserData.Wds = [0 0 wd wd 0];
UserData.Hts = [0 ht ht 0 0];

set_param(handles.block, 'UserDataPersistent', 'on')
set_param(handles.block, 'UserData', UserData)


% --- Disable Order Input on GUI
function Disable_Order_Input(handles);
val = get(handles.DocOption, 'Value');
if val == 2
    set(handles.LowLevelPos, 'Enable', 'off')
else
    set(handles.LowLevelPos, 'Enable', 'on')
end


% --- Disable Text on GUI
function Disable_Text(handles);
val = get(handles.ObjCheck, 'Value');
if val == 0
    set(handles.ObjText, 'Enable', 'off')
else
    set(handles.ObjText, 'Enable', 'on')
end
val = get(handles.DescCheck, 'Value');
if val == 0
    set(handles.DescText, 'Enable', 'off')
else
    set(handles.DescText, 'Enable', 'on')
end
val = get(handles.EqnCheck, 'Value');
if val == 0
    set(handles.EqnText, 'Enable', 'off')
else
    set(handles.EqnText, 'Enable', 'on')
end


% --- Text Spacing
function spacedtext = Text_Spacing(handles, txt)
if get(handles.Layout, 'Value') == 1
    scrnlength = 130;
else
    scrnlength = 180;
end
% Eliminate current \newline
txt = strrep(txt, '\newline', '');
% Find blanks
blanks_all = [];
blanks_all = strfind(txt, ' ');
% Eliminate double blank at end of sentance from blank list
blanks_minus_dbl_blnk = [];
count = 0;
for i = 1:(length(blanks_all) - 1)
    if blanks_all(i) ~= (blanks_all(i+1) - 1)
        count = count + 1;
        blanks_minus_dbl_blnk(count) = blanks_all(i);
    end
end
blanks_minus_dbl_blnk = [blanks_minus_dbl_blnk blanks_all(i+1)];
% Eliminate blanks between {} from blank list
blanks_minus_it = [];
blanks = [];
itbegin = strfind(txt, '{\it');
itend = strfind(txt, '}');
count = 0;
for i = 1:length(blanks_minus_dbl_blnk)
    count2 = 0;
    for j = 1:length(itbegin)
        if blanks_minus_dbl_blnk(i) < itbegin(j) | blanks_minus_dbl_blnk(i) > itend(j)
            count2 = count2 + 1;
        end
    end
    if count2 == length(itbegin)
        count = count + 1;
        blanks_minus_it(count) = blanks_minus_dbl_blnk(i);
    end
end
blanks = blanks_minus_it;
% Modify blanks bases on italics
it_mod = [];
blanks_mod = [];
for i = 1:length(blanks_minus_it)
    it_mod(i) = 5*length(find(itend < blanks_minus_it(i)));
end
blanks_mod = blanks_minus_it - it_mod;
% Find \newline indicies
if length(txt) <= scrnlength
    stop = 1;
else
    stop = 0;
end
newlineloc = [];
count = 0;
while stop == 0
    count = count + 1;
    if count == 1
        newlineloc(count) = blanks_mod(max(find(blanks_mod < scrnlength)));
    else
        newlineloc(count) = blanks_mod(max(find(blanks_mod < (scrnlength + newlineloc(count - 1)))));
    end
    if max(newlineloc) + scrnlength > (length(txt) - length(itend)*5)
        stop = 1;
    end
end
% Adjust
for i = 1:length(newlineloc)
   newlineloc(i) = blanks(find(blanks_mod == newlineloc(i))); 
end
% Create text string
for i = 1:length(newlineloc)
    txt = [txt(1:newlineloc(i) + 8*(i-1)) '\newline' txt(newlineloc(i) + 1 + 8*(i-1):length(txt))];
end
spacedtext = txt;