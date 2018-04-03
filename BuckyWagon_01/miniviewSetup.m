function output = miniviewSetup(param_name)
% This function defines all the necessary strings to make the miniview
% display work. Information is input in the info array, and is processed 
% into the setup structure for use in simulink.
%
% INPUT
% info.name - This is the name used anywhere the variable name is one line.
%             Maxmimum length is 8 characters.
% info.nameline1 - This is the name used for the upper line anywhere the
%                  variable name is two lines.  Maximum length is 5
%                  characters.
% info.nameline2 - This is the name used for the lower line anywhere the
%                  variable name is two lines.  Maximum length is 5
%                  characters.
% info.barGraphMode - Specifies the bargraph mode for the single variable
%                     display.  0:Filled bar from left, 1:Filled bar from
%                     right, 2:Filled bar from center; 3:Tick mark.
% info.barMax - Engineering value of variable at right end of graph.
% info.barMin - Engineering value of variable at left end of graph.
%
% PARAMNAME
% name - single string with all variable names, each string is 10
%        characters long.
% nameline1 - single string with all variable names, each string is 7
%             characters long.
% nameline2 - single string with all variable names, each string is 7
%             characters long.
% namecount - number of variables.
% barGraphMode - array of bar graph modes.
% barMax - array of bar max values.
% barMin - array of bar min values.

index = 0;
%% Input the informtation

% xx: times 100
index = index+1;
info(index).name = 'Bat SOC';
info(index).nameline1 = 'Batt';
info(index).nameline2 = 'SOC';
info(index).barGraphMode = 0;
info(index).barMax = 100;
info(index).barMin = 0;

index = index+1;
info(index).name = 'Bat V';
info(index).nameline1 = 'Bat';
info(index).nameline2 = 'Volts';
info(index).barGraphMode = 0;
info(index).barMax = 350;
info(index).barMin = 250;

index = index+1;
info(index).name = 'Bat I';
info(index).nameline1 = 'Bat';
info(index).nameline2 = 'Amps';
info(index).barGraphMode = 2;
info(index).barMax = 150;
info(index).barMin = -150;

index = index+1;
info(index).name = 'Bat Temp';
info(index).nameline1 = 'Bat';
info(index).nameline2 = 'Temp';
info(index).barGraphMode = 0;
info(index).barMax = 50;
info(index).barMin = -40;

index = index+1;
info(index).name = 'Mot RPM';
info(index).nameline1 = 'Motor';
info(index).nameline2 = 'RPM';
info(index).barGraphMode = 2;
info(index).barMax = 5000;
info(index).barMin = -1000;

index = index+1;
info(index).name = 'TorqCmd';
info(index).nameline1 = 'Torq';
info(index).nameline2 = 'Cmd';
info(index).barGraphMode = 0;
info(index).barMax = 0;
info(index).barMin = 240;

index = index+1;
info(index).name = 'TorqAct';
info(index).nameline1 = 'Torq';
info(index).nameline2 = 'Act';
info(index).barGraphMode = 2;
info(index).barMax = 240;
info(index).barMin = 0;

index = index+1;
info(index).name = 'ElecPwr';
info(index).nameline1 = 'Elec';
info(index).nameline2 = 'Pwr';
info(index).barGraphMode = 0;
info(index).barMax = 100;
info(index).barMin = 0;

index = index+1;
info(index).name = 'MechPwr';
info(index).nameline1 = 'Mech';
info(index).nameline2 = 'Pwr';
info(index).barGraphMode = 0;
info(index).barMax = 100;
info(index).barMin = 0;

index = index+1;
info(index).name = 'Effic';
info(index).nameline1 = 'Effc';
info(index).nameline2 = 'ncy';
info(index).barGraphMode = 0;
info(index).barMax = 100;
info(index).barMin = 0;

index = index+1;
info(index).name = 'MC Temp';
info(index).nameline1 = 'MC';
info(index).nameline2 = 'Temp';
info(index).barGraphMode = 0;
info(index).barMax = 75;
info(index).barMin = -40;

index = index+1;
info(index).name = 'CoolantP';
info(index).nameline1 = 'Coolant';
info(index).nameline2 = 'Pump';
info(index).barGraphMode = 0;
info(index).barMax = 100;
info(index).barMin = 0;

index = index+1;
info(index).name = 'Aux V';
info(index).nameline1 = 'Aux';
info(index).nameline2 = 'V';
info(index).barGraphMode = 3;
info(index).barMax = 15000;
info(index).barMin = 9000;

index = index+1;
info(index).name = 'AccelIn';
info(index).nameline1 = 'Accel';
info(index).nameline2 = 'In';
info(index).barGraphMode = 0;
info(index).barMax = 100;
info(index).barMin = 0;

index = index+1;
info(index).name = 'BrakeIn';
info(index).nameline1 = 'Brake';
info(index).nameline2 = 'In';
info(index).barGraphMode = 0;
info(index).barMax = 100;
info(index).barMin = 0;

index = index+1;
info(index).name = 'RevIn';
info(index).nameline1 = 'RevSw';
info(index).nameline2 = 'In';
info(index).barGraphMode = 0;
info(index).barMax = 1;
info(index).barMin = 0;

index = index+1;
info(index).name = 'RevOut';
info(index).nameline1 = 'Rev';
info(index).nameline2 = 'Out';
info(index).barGraphMode = 0;
info(index).barMax = 1;
info(index).barMin = 0;

index = index+1;
info(index).name = 'ESTOP';
info(index).nameline1 = 'ESTOP';
info(index).nameline2 = '';
info(index).barGraphMode = 1;
info(index).barMax = 1;
info(index).barMin = 0;

%% manipulate the data into the setup structure

setup.names = [];
setup.namesline1 = [];
setup.namesline2 = [];
setup.namescount = length(info);

for i = 1:1:length(info)
    if(length(info(i).name) > 9)
        info(i).name = info(i).name(1:9);
    end
    setup.names = [setup.names info(i).name zeros(1, 10-length(info(i).name))];

    if(length(info(i).nameline1) > 6)
        info(i).nameline1 = info(i).nameline1(1:6);
    end
    setup.namesline1 = [setup.namesline1 info(i).nameline1 zeros(1, 7-length(info(i).nameline1))];

   if(length(info(i).nameline2) > 6)
        info(i).nameline2 = info(i).nameline2(1:6);
   end
    setup.namesline2 = [setup.namesline2 info(i).nameline2 zeros(1, 7-length(info(i).nameline2))];

    setup.barGraphMode(i) = info(i).barGraphMode;
    setup.barMax(i) = info(i).barMax;
    setup.barMin(i) = info(i).barMin;
end

switch(param_name)
    case 'names'
        output = setup.names;
    case 'namesline1'
        output = setup.namesline1;
    case 'namesline2'
        output = setup.namesline2;
    case 'namescount'
        output = setup.namescount;
    case 'barGraphMode'
        output = setup.barGraphMode;
    case 'barMin'
        output = setup.barMin;
    case 'barMax'
        output = setup.barMax;
end

