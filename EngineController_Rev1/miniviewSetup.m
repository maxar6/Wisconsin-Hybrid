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
% info.fmtString[1,2,4] - sprintf format specifier in each display mode 
%                         maximum length is 8 characters
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

index = index+1;
info(index).name = 'Eng RPM';
info(index).nameline1 = 'Eng';
info(index).nameline2 = 'RPM';
info(index).barGraphMode = 0;
info(index).barMax = 7000;
info(index).barMin = 0;
info(index).formatStr1 = '%4.0f';
info(index).formatStr2 = '%4.0f';
info(index).formatStr4 = '%4.0f';

index = index+1;
info(index).name = 'OilP';
info(index).nameline1 = 'Oil';
info(index).nameline2 = 'Pres';
info(index).barGraphMode = 0;
info(index).barMax = 80;
info(index).barMin = 0;
info(index).formatStr1 = '%4.0f';
info(index).formatStr2 = '%4.0f';
info(index).formatStr4 = '%4.0f';


index = index+1;
info(index).name = 'ECT';
info(index).nameline1 = 'Eng';
info(index).nameline2 = 'Temp';
info(index).barGraphMode = 0;
info(index).barMax = 100;
info(index).barMin = 0;
info(index).formatStr1 = '%4.0f';
info(index).formatStr2 = '%4.0f';
info(index).formatStr4 = '%4.0f';

index = index+1;
info(index).name = 'IAT';
info(index).nameline1 = 'Inlet';
info(index).nameline2 = 'Temp';
info(index).barGraphMode = 0;
info(index).barMax = 100;
info(index).barMin = 0;
info(index).formatStr1 = '%4.0f';
info(index).formatStr2 = '%4.0f';
info(index).formatStr4 = '%4.0f';

index = index+1;
info(index).name = 'BoostP';
info(index).nameline1 = 'Boost';
info(index).nameline2 = 'Pres';
info(index).barGraphMode = 0;
info(index).barMax = 2;
info(index).barMin = 0;
info(index).formatStr1 = '%4.2f';
info(index).formatStr2 = '%4.2f';
info(index).formatStr4 = '%4.2f';

index = index+1;
info(index).name = 'BoostTgt';
info(index).nameline1 = 'Boost';
info(index).nameline2 = 'Target';
info(index).barGraphMode = 0;
info(index).barMax = 2;
info(index).barMin = 0;
info(index).formatStr1 = '%4.2f';
info(index).formatStr2 = '%4.2f';
info(index).formatStr4 = '%4.2f';

index = index+1;
info(index).name = 'MAP';
info(index).nameline1 = 'Manf';
info(index).nameline2 = 'Pres';
info(index).barGraphMode = 0;
info(index).barMax = 2;
info(index).barMin = 0;
info(index).formatStr1 = '%4.2f';
info(index).formatStr2 = '%4.2f';
info(index).formatStr4 = '%4.2f';

index = index+1;
info(index).name = 'FuelPres';
info(index).nameline1 = 'Fuel';
info(index).nameline2 = 'Pres';
info(index).barGraphMode = 0;
info(index).barMax = 500;
info(index).barMin = 0;
info(index).formatStr1 = '%4.0f';
info(index).formatStr2 = '%4.0f';
info(index).formatStr4 = '%4.0f';

index = index+1;
info(index).name = 'FInjPres';
info(index).nameline1 = 'FInj';
info(index).nameline2 = 'Pres';
info(index).barGraphMode = 0;
info(index).barMax = 400;
info(index).barMin = 200;
info(index).formatStr1 = '%4.0f';
info(index).formatStr2 = '%4.0f';
info(index).formatStr4 = '%4.0f';

index = index+1;
info(index).name = 'FuelSens';
info(index).nameline1 = 'Fuel';
info(index).nameline2 = 'Sens';
info(index).barGraphMode = 0;
info(index).barMax = 500;
info(index).barMin = 0;
info(index).formatStr1 = '%04.1f';
info(index).formatStr2 = 'E%02.0f';
info(index).formatStr4 = '%04.1f';

index = index+1;
info(index).name = 'APP';
info(index).nameline1 = 'Accel';
info(index).nameline2 = 'In';
info(index).barGraphMode = 0;
info(index).barMax = 1;
info(index).barMin = 0;
info(index).formatStr1 = '%4.1f';
info(index).formatStr2 = '%4.1f';
info(index).formatStr4 = '%4.1f';

index = index+1;
info(index).name = 'ETCReq';
info(index).nameline1 = 'ETC';
info(index).nameline2 = 'Request';
info(index).barGraphMode = 0;
info(index).barMax = 1;
info(index).barMin = 0;
info(index).formatStr1 = '%4.1f';
info(index).formatStr2 = '%4.1f';
info(index).formatStr4 = '%4.1f';

index = index+1;
info(index).name = 'TPS';
info(index).nameline1 = 'TPS';
info(index).nameline2 = '';
info(index).barGraphMode = 0;
info(index).barMax = 1;
info(index).barMin = 0;
info(index).formatStr1 = '%4.1f';
info(index).formatStr2 = '%4.1f';
info(index).formatStr4 = '%4.1f';

index = index+1;
info(index).name = 'WG_Duty';
info(index).nameline1 = 'Waste';
info(index).nameline2 = 'gate';
info(index).barGraphMode = 0;
info(index).barMax = 100;
info(index).barMin = 0;
info(index).formatStr1 = '%4.0f';
info(index).formatStr2 = '%4.0f';
info(index).formatStr4 = '%4.0f';

index = index+1;
info(index).name = 'O2Sense';
info(index).nameline1 = 'O2';
info(index).nameline2 = 'equiv';
info(index).barGraphMode = 2;
info(index).barMax = 1.2;
info(index).barMin = 0.8;
info(index).formatStr1 = '%4.2f';
info(index).formatStr2 = '%4.2f';
info(index).formatStr4 = '%4.2f';

index = index+1;
info(index).name = 'O2Target';
info(index).nameline1 = 'O2Tgt';
info(index).nameline2 = 'equiv';
info(index).barGraphMode = 2;
info(index).barMax = 1.2;
info(index).barMin = 0.8;
info(index).formatStr1 = '%4.2f';
info(index).formatStr2 = '%4.2f';
info(index).formatStr4 = '%4.2f';

index = index+1;
info(index).name = 'FuelMult';
info(index).nameline1 = 'Fuel';
info(index).nameline2 = 'Mult';
info(index).barGraphMode = 2;
info(index).barMax = 1.2;
info(index).barMin = 0.8;
info(index).formatStr1 = '%4.2f';
info(index).formatStr2 = '%4.2f';
info(index).formatStr4 = '%4.2f';

index = index+1;
info(index).name = 'VehSpeed';
info(index).nameline1 = 'Sled';
info(index).nameline2 = 'Speed';
info(index).barGraphMode = 0;
info(index).barMax = 0;
info(index).barMin = 100;
info(index).formatStr1 = '%4.1f';
info(index).formatStr2 = '%4.1f';
info(index).formatStr4 = '%4.1f';

index = index+1;
info(index).name = 'SysVolt';
info(index).nameline1 = 'Sys';
info(index).nameline2 = 'V';
info(index).barGraphMode = 0;
info(index).barMax = 14;
info(index).barMin = 10;
info(index).formatStr1 = '%4.1f';
info(index).formatStr2 = '%4.1f';
info(index).formatStr4 = '%4.1f';

index = index+1;
info(index).name = 'SensVolt';
info(index).nameline1 = 'Sens';
info(index).nameline2 = 'V';
info(index).barGraphMode = 0;
info(index).barMax = 4.8;
info(index).barMin = 5.2;
info(index).formatStr1 = '%4.2f';
info(index).formatStr2 = '%4.2f';
info(index).formatStr4 = '%4.2f';

%% manipulate the data into the setup structure

setup.names = [];
setup.namesline1 = [];
setup.namesline2 = [];
setup.formatStr1 = [];
setup.formatStr2 = [];
setup.formatStr4 = [];
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
    
   if(length(info(i).formatStr1) > 9)
        info(i).formatStr1 = info(i).formatStr1(1:9);
   end
    setup.formatStr1 = [setup.formatStr1 info(i).formatStr1 zeros(1, 10-length(info(i).formatStr1))];

   if(length(info(i).formatStr2) > 9)
        info(i).formatStr2 = info(i).formatStr2(1:9);
   end
     setup.formatStr2 = [setup.formatStr2 info(i).formatStr2 zeros(1, 10-length(info(i).formatStr2))];

   if(length(info(i).formatStr4) > 9)
        info(i).formatStr4 = info(i).formatStr4(1:9);
   end
    setup.formatStr4 = [setup.formatStr4 info(i).formatStr4 zeros(1, 10-length(info(i).formatStr4))];
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

    case 'formatStr1'
        output = setup.formatStr1;
    case 'formatStr2'
        output = setup.formatStr2;
    case 'formatStr4'
        output = setup.formatStr4;
end

