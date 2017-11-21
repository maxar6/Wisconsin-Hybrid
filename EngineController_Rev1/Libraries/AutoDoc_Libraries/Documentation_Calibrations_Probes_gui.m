function varargout = Documentation_Calibrations_Probes_gui(varargin)
% DOCUMENTATION_CALIBRATIONS_PROBES_GUI M-file for Documentation_Calibrations_Probes_gui.fig
%      DOCUMENTATION_CALIBRATIONS_PROBES_GUI, by itself, creates a new DOCUMENTATION_CALIBRATIONS_PROBES_GUI or raises the existing
%      singleton*.
%
%      H = DOCUMENTATION_CALIBRATIONS_PROBES_GUI returns the handle to a new DOCUMENTATION_CALIBRATIONS_PROBES_GUI or the handle to
%      the existing singleton*.
%
%      DOCUMENTATION_CALIBRATIONS_PROBES_GUI('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in DOCUMENTATION_CALIBRATIONS_PROBES_GUI.M with the given input arguments.
%
%      DOCUMENTATION_CALIBRATIONS_PROBES_GUI('Property','Value',...) creates a new DOCUMENTATION_CALIBRATIONS_PROBES_GUI or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before Documentation_Calibrations_Probes_gui_OpeningFunction gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to Documentation_Calibrations_Probes_gui_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help Documentation_Calibrations_Probes_gui

% Last Modified by GUIDE v2.5 10-Jul-2006 13:00:09

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @Documentation_Calibrations_Probes_gui_OpeningFcn, ...
                   'gui_OutputFcn',  @Documentation_Calibrations_Probes_gui_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
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


% --- Executes just before Documentation_Calibrations_Probes_gui is made visible.
function Documentation_Calibrations_Probes_gui_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to Documentation_Calibrations_Probes_gui (see VARARGIN)

handles.block = gcb;
handles.system = gcs;

% --- Retrieves Data from UserData and Sets into GUI
UserData = get_param(handles.block, 'UserData');

if isempty(UserData) == 1
    set(handles.DocOption, 'Value', 1)
    set(handles.Layout, 'Value', 1)
else
    set(handles.DocOption, 'Value', UserData.DocOption)
    set(handles.Layout, 'Value', UserData.Layout)
end

% Choose default command line output for Documentation_Calibrations_Probes_gui
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes Documentation_Calibrations_Probes_gui wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = Documentation_Calibrations_Probes_gui_OutputFcn(hObject, eventdata, handles) 
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


% --- Creates UserData and Stores GUI Data back into Mask
function store_data(handles)

if get(handles.Layout, 'Value') == 1
    verpos = 1450;
    horpos = 1060;
else
    verpos = 1060;
    horpos = 1450;
end
if get(handles.Layout, 'Value') == 1
    lengthlines = 518;
else
    lengthlines = 714;
end
lines = '.';
for i = 1:lengthlines
    lines = strcat(lines, '.');
end

% --- Find Calibrations and Displays
path = get_param(handles.block, 'Parent');
lstcals = find_system(path, 'SearchDepth', 1, 'LookUnderMasks', 'all', 'FunctionName', 'motohawk_sfun_calibration');
lstcals = [lstcals; find_system(path, 'SearchDepth', 1, 'LookUnderMasks', 'all', 'FunctionName', 'motohawk_sfun_prelookup')];
lstcals = [lstcals; find_system(path, 'SearchDepth', 1, 'LookUnderMasks', 'all', 'FunctionName', 'motohawk_sfun_interpolation_1d')];
lstcals = [lstcals; find_system(path, 'SearchDepth', 1, 'LookUnderMasks', 'all', 'FunctionName', 'motohawk_sfun_interpolation_2d')];
lstprbs = find_system(path, 'SearchDepth', 1, 'LookUnderMasks', 'all', 'FunctionName', 'motohawk_sfun_probe');
datadef = find_system(path, 'SearchDepth', 1, 'LookUnderMasks', 'all', 'FunctionName', 'motohawk_sfun_data_def', 'use_vardec', 'on');
for i = 1:length(datadef)
    if strcmp(char(get_param(datadef(i), 'window')), 'Calibration') == 1
        lstcals = [lstcals; datadef(i)];
    elseif strcmp(char(get_param(datadef(i), 'window')), 'Display') == 1
        lstprbs = [lstprbs; datadef(i)];
    end
end
struct = find_system(path, 'SearchDepth', 1, 'LookUnderMasks', 'all', 'FunctionName', 'motohawk_sfun_struct_vardec');
for i = 1:length(struct)
    if strcmp(char(get_param(struct(i), 'window')), 'Calibration') == 1
        lstcals = [lstcals; struct(i)];
    elseif strcmp(char(get_param(struct(i), 'window')), 'Display') == 1
        lstprbs = [lstprbs; struct(i)];
    end
end

% --- Alphabetize
calnames = {};
for i = 1:length(lstcals)
    if strcmp(get_param(lstcals{i,1}, 'ReferenceBlock'), 'MotoHawk_lib/Lookup Tables/motohawk_prelookup') == 1
        calnames{i,1} = [motohawk_get_param_ws(lstcals{i,1}, 'nam') 'IdxArr'];
    elseif strcmp(get_param(lstcals{i,1}, 'ReferenceBlock'), 'MotoHawk_lib/Lookup Tables/motohawk_interpolation_1d') == 1   
        calnames{i,1} = [motohawk_get_param_ws(lstcals{i,1}, 'nam') 'Tbl'];
    elseif strcmp(get_param(lstcals{i,1}, 'ReferenceBlock'), 'MotoHawk_lib/Lookup Tables/motohawk_interpolation_2d') == 1   
        calnames{i,1} = [motohawk_get_param_ws(lstcals{i,1}, 'nam') 'Map'];
    elseif strcmp(get_param(lstcals{i,1}, 'ReferenceBlock'), 'MotoHawk_lib/Data Storage Blocks/motohawk_struct_vardec') == 1   
        calnames{i,1} = motohawk_get_param_ws(lstcals{i,1}, 'struct_nam');
    else
        calnames{i,1} = motohawk_get_param_ws(lstcals{i,1}, 'nam');
    end
end
[calnames calindex] = sort(calnames);
prbnames = {};
for i = 1:length(lstprbs)
    if strcmp(get_param(lstprbs(i), 'FunctionName'), 'motohawk_sfun_struct_vardec') == 1
        prbnames{i,1} = motohawk_get_param_ws(lstprbs{i,1}, 'struct_nam');
    else
        prbnames{i,1} = motohawk_get_param_ws(lstprbs{i,1}, 'nam');
    end
end
if length(prbnames) > 0
    [prbnames prbindex] = sort(prbnames);
end

% --- Display Data
numcals = length(calnames);
numprbs = length(prbnames);
calstitle = '\fontsize{20}\fontname{Bitstream Vera Sans Mono}\bf\itCalibrations';
prbstitle = '\fontsize{20}\fontname{Bitstream Vera Sans Mono}\bf\itProbes';
displines = strcat('\fontsize{8}', lines, '\fontsize{14}\newline');
blanklines = strcat('\fontsize{8}', '', '\fontsize{14}\newline');
if numcals ~= 0
    DispName = strcat(calstitle, '\fontsize{12}\rm\newline\fontname{Arial}', displines);
    DispUnit = strcat('\fontsize{20}\fontname{Bitstream Vera Sans Mono}\bf \fontsize{12}\rm\newline', blanklines);
    DispHelp = strcat('\fontsize{20}\fontname{Bitstream Vera Sans Mono}\bf \fontsize{12}\rm\newline', blanklines);
    DispPath = strcat('\fontsize{20}\fontname{Bitstream Vera Sans Mono}\bf \fontsize{12}\rm\newline', blanklines);
    for i = 1:numcals
        nam = char(calnames(i,1));
        nam = strrep(char(nam), '_', '\_');
        unt = strrep(char(motohawk_get_param_ws(lstcals{calindex(i),1}, 'units')), '_', '\_');
        if strcmp(unt, '') == 1
            unt = '-';
        end
        hlp = strrep(char(motohawk_get_param_ws(lstcals{calindex(i),1}, 'help')), '_', '\_');
        if strcmp(hlp, '') == 1
            hlp = '-';
        end
        pth = strrep(char(motohawk_get_param_ws(lstcals{calindex(i),1}, 'mototune_group')), '_', '\_');
        if i == numcals & numprbs == 0
            DispName = strcat(DispName, '\fontname{Bitstream Vera Sans Mono}', nam, '\newline\newline', blanklines);
        else
            DispName = strcat(DispName, '\fontname{Bitstream Vera Sans Mono}\fontsize{14}', nam, '\newline\newline\fontname{Arial}', displines);
        end
        DispUnit = strcat(DispUnit, unt, '\newline\newline', blanklines);
        DispHelp = strcat(DispHelp, hlp, '\newline', 'MotoTune Path:', '\newline', blanklines);
        DispPath = strcat(DispPath, '', '\newline', pth, '\newline', blanklines);
    end
else
    DispName = '';
    DispUnit = '';
    DispHelp = '';
    DispPath = '';
end
if numprbs ~= 0
    DispName = strcat(DispName, '\fontsize{6}\newline', prbstitle, '\fontsize{12}\rm\newline\fontname{Arial}', displines);
    DispUnit = strcat(DispUnit, '\fontsize{6}\newline\fontsize{20}\fontname{Bitstream Vera Sans Mono}\bf \fontsize{12}\rm\newline', blanklines);
    DispHelp = strcat(DispHelp, '\fontsize{6}\newline\fontsize{20}\fontname{Bitstream Vera Sans Mono}\bf \fontsize{12}\rm\newline', blanklines);
    DispPath = strcat(DispPath, '\fontsize{6}\newline\fontsize{20}\fontname{Bitstream Vera Sans Mono}\bf \fontsize{12}\rm\newline', blanklines);
    for i = 1:numprbs
        if strcmp(get_param(lstprbs{prbindex(i),1}, 'ReferenceBlock'), 'MotoHawk_lib/Data Storage Blocks/motohawk_struct_vardec') == 1   
            nam = motohawk_get_param_ws(lstprbs{prbindex(i),1}, 'struct_nam');
        else
            nam = strrep(char(motohawk_get_param_ws(lstprbs{prbindex(i),1}, 'nam')), '_', '\_');
        end
        unt = strrep(char(motohawk_get_param_ws(lstprbs{prbindex(i),1}, 'units')), '_', '\_');
        if strcmp(unt, '') == 1
            unt = '-';
        end
        hlp = strrep(char(motohawk_get_param_ws(lstprbs{prbindex(i),1}, 'help')), '_', '\_');
        if strcmp(hlp, '') == 1
            hlp = '-';
        end
        pth = strrep(char(motohawk_get_param_ws(lstprbs{prbindex(i),1}, 'mototune_group')), '_', '\_');
        if i == numprbs
            DispName = strcat(DispName, '\fontname{Bitstream Vera Sans Mono}', nam, '\newline\newline', blanklines);
        else
            DispName = strcat(DispName, '\fontname{Bitstream Vera Sans Mono}', nam, '\newline\newline\fontname{Arial}', displines);
        end
        DispUnit = strcat(DispUnit, unt, '\newline\newline', blanklines);
        DispHelp = strcat(DispHelp, hlp, '\newline', 'MotoTune Path:', '\newline', blanklines);
        DispPath = strcat(DispPath, '', '\newline', pth, '\newline', blanklines);
    end
end

% --- Size
if get(handles.DocOption, 'Value') == 1
    ht = 58 * (numcals + numprbs);
    if numcals == 0
        calht = 0;
    else
        calht = 42;
    end
    if numprbs == 0
        prbht = 0;
    else
        prbht = 42;
    end
    set_param(handles.block, 'Position', [0 (verpos-calht-prbht-ht) horpos verpos]);
else
    set_param(handles.block, 'Position', [0 (verpos-20) horpos verpos]);
end

% --- Border Boundaries
p = get_param(handles.block, 'Position');
ht = p(4) - p(2);
wd = p(3) - p(1);

% --- Save GUI Parameters into UserData
UserData.DocOption = get(handles.DocOption, 'Value');
UserData.Layout = get(handles.Layout, 'Value');

UserData.DispName = DispName;
UserData.DispUnit = DispUnit;
UserData.DispHelp = DispHelp;
UserData.DispPath = DispPath;
UserData.Wds = [0 0 wd wd 0];
UserData.Hts = [0 ht ht 0 0];

set_param(handles.block, 'UserDataPersistent', 'on')
set_param(handles.block, 'UserData', UserData)