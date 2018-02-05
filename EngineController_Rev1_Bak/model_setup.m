% This file is executed when the project model file is opened, and before every update (^D).
if isempty(bdroot) || strcmp(bdroot, 'simulink'), return; end


% This adds the current directory to the MATLAB path,
% along with directories for Images, CAN, and Simulink libraries.
% Add to this list as your project grows.
addpath(fileparts(which(bdroot)));
addpath(genpath([fileparts(which(bdroot)) filesep 'CAN']));
addpath(genpath([fileparts(which(bdroot)) filesep 'Images']));
addpath(genpath([fileparts(which(bdroot)) filesep 'Libraries']));


% This attempts to call the load cals script, if it exists,
% which will load any uploaded calibrations into the workspace struct.
evalin('base', [bdroot '_load_cals'], '');




