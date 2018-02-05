% MotoTron Corporation
% Joseph Morbitzer
% Donaldson AutoDoc script

clear all; clc;
path = 'ExhSys';
libpath = 'ExhSys_lib';
dir = 'C:\Documents and Settings\joseph_morbitzer\My Documents\Project - Donaldson\ExhSys';

disp('1.  Create Word document with table of contents and appendix');
disp('2.  Number 1, plus print Simulink and Stateflow screen shots'); 
choice = input('Enter a number to choose one of the above.');


% --- Print Model Simulink Screens --- %
% ------------------------------------ %

blockpaths = find_system(path, 'LookUnderMasks', 'all', 'ReferenceBlock', 'ExhSys_lib/Documentation_Title_Block', 'pretty_print', 'on');

for i = 1:length(blockpaths)
    
    % Cell arrays
    paths(i,1) = get_param(blockpaths(i,1), 'Parent');
    docpaths(i,1) = get_param(blockpaths(i,1), 'doc_path');
    filenames(i,1) = cellstr(strcat(char(docpaths(i,1)), '.emf'));
    pathfilenames(i,1) = cellstr(strcat(dir, '\Figs\', char(filenames(i,1))));
   
    if choice == 2
        % Open, print, and close
        open_system(char(paths(i,1)));
        h = get_param(paths{i,1}, 'Handle');
        print(h, '-dmeta', char(pathfilenames(i,1)));
        if i > 1 & strcmp(char(paths(i,1)), path) ~= 1    
            close_system(char(paths(i,1)));
        end
    end
    
end


% --- Print Model Cals and Probes Pages --- %
% ----------------------------------------- %
cppaths = find_system(path, 'LookUnderMasks', 'all', 'ReferenceBlock', 'ExhSys_lib/Cals_and_Probes_Page');

for i = 1:length(cppaths)
    
    % Cell arrays
    cpparentpaths(i,1) = get_param(cppaths(i), 'Parent');
    cpparentdocpaths(i,1) = cellstr(get_param(strcat(char(cpparentpaths(i,1)), '/Documentation_Title_Block'), 'doc_path'));
    cpfilenames(i,1) = cellstr(strcat(char(cpparentdocpaths(i,1)), 'cp.emf'));
    cppathfilenames(i,1) = cellstr(strcat(dir, '\Figs\', char(cpfilenames(i,1))));
   
    if choice == 2
        % Open, print, and close
        open_system(char(cppaths(i,1)), 'force');
        h = get_param(cppaths{i,1}, 'Handle');
        print(h, '-dmeta', char(cppathfilenames(i,1)));    
        close_system(char(cppaths(i,1)));
    end
    
end


% --- Print Model Stateflow Screens --- %
% ------------------------------------- %

cd(strcat(dir, '\Figs'));
sfblockpaths_all = find_system(path, 'LookUnderMasks', 'all', 'MaskType','Stateflow');

% Delete from list if parent subsystem not included in documentation
sfblockpaths = num2cell([]);
i = 1;
for j = 1:length(sfblockpaths_all)
    sfpaths_all(j,1) = get_param(sfblockpaths_all(j), 'Parent');
    match = strmatch(sfpaths_all(j,1), paths, 'exact');
    if length(match) ~= 0
        sfblockpaths(i,1) = sfblockpaths_all(j,1);
        sffilenames(i,1) = cellstr(strcat(char(docpaths(match,1)), 'sf.emf'));
        i = i + 1;
    end    
end

if choice == 2
    % Open, print, and close
    for i = 1:length(sfblockpaths)
        open_system(char(sfblockpaths(i,1)));
        sfprint(char(sfblockpaths(i,1)), 'meta', char(sffilenames(i,1)));
        sfclose;
        close_system(get_param(sfblockpaths(i,1), 'Parent'));
    end
end

cd(dir)

% --- Print Library Simulink Screens --- %
% -------------------------------------- % 

% Find Paths
libblockpaths = find_system(libpath, 'LookUnderMasks', 'all', 'ReferenceBlock', 'ExhSys_lib/Documentation_Title_Block', 'doc_option', 'Library block: include in documentation appendix');
libblockpaths = [libblockpaths; find_system(libpath, 'LookUnderMasks', 'all', 'ReferenceBlock', 'ExhSys_lib/Documentation_Title_Block', 'doc_option', 'Library block: include in documentation appendix (no Objective or Description text)')];
j = 1;
k = 1;
for i = 1:length(libblockpaths)
    level = length(strfind(char(libblockpaths(i,1)), '/'));
    if level == 2
        libblockpathstl(j,1) = libblockpaths(i,1);
        j = j + 1;
    else
        libblockpathsll(k,1) = libblockpaths(i,1);
        k = k + 1;
    end
end
libblockpathstl = sort(libblockpathstl);
libblockpathsll = sort(libblockpathsll);

% Print Top Level Screens
for i = 1:length(libblockpathstl)
    
    % Filenames
    libpathstl(i,1) = get_param(libblockpathstl(i,1), 'Parent');
    if i < 10
        libfilenamestl(i,1) = cellstr(strcat('zzz0', num2str(i)));
    else
        libfilenamestl(i,1) = cellstr(strcat('zzz', num2str(i)));
    end
    libpathfilenamestl(i,1) = cellstr(strcat(dir, '\Figs\', char(libfilenamestl(i,1)), '.emf'));
    
    if choice == 2
        % Open, print, and close
        open_system(char(libpathstl(i,1)), 'force');
        h = get_param(libpathstl{i,1}, 'Handle');
        print(h, '-dmeta', char(libpathfilenamestl(i,1)));
        if i > 1 & strcmp(char(libpathstl(i,1)), libpath) ~= 1    
            close_system(char(libpathstl(i,1)));
        end
    end
    
end

% Print Lower Level Screens

% Top Level Matches
for i = 1:length(libblockpathsll)
    libpathsll(i,1) = get_param(libblockpathsll(i,1), 'Parent');
    libpathslltl(i,1) = get_param(libpathsll(i,1), 'Parent');
    index(i) = strmatch(libpathslltl(i,1), libpathstl, 'exact');
end

for i = 1:length(libblockpathsll)
    
    % Filenames
    num = length(find((index - index(i))));
    if num == (length(libblockpathsll) - 1)
        count = 1;
        libfilenamesll(i,1) = cellstr(strcat(char(libfilenamestl(index(i))), '.1'));
    else
        libfilenamesll(i,1) = cellstr(strcat(char(libfilenamestl(index(i))), '.', num2str(count)));
        count = count + 1;
    end
    libpathfilenamesll(i,1) = cellstr(strcat(dir, '\Figs\', char(libfilenamesll(i,1)), '.emf'));
    
    if choice == 2
        % Open, print, and close
        open_system(char(libpathsll(i,1)), 'force');
        h = get_param(libpathsll{i,1}, 'Handle');
        print(h, '-dmeta', char(libpathfilenamesll(i,1)));
        if i > 1 & strcmp(char(libpathsll(i,1)), libpath) ~= 1    
            close_system(char(libpathsll(i,1)));
        end
    end
    
end


% --- Print Library Stateflow Screens --- %
% --------------------------------------- %

cd(strcat(dir, '\Figs'));
libsfblockpaths_all = find_system(libpath, 'LookUnderMasks', 'all', 'MaskType','Stateflow');

for i = 1:length(libsfblockpaths_all)
    
    % Filenames
    libsfpaths_all(i,1) = get_param(libsfblockpaths_all(i,1), 'Parent');
    index_tl = strmatch(libsfpaths_all(i,1), libpathstl, 'exact');
    index_ll = strmatch(libsfpaths_all(i,1), libpathsll, 'exact');
    if  length(index_tl) ~= 0
        libsffilenames(i,1) = cellstr(strcat(char(libfilenamestl(index_tl)), 'sf.emf'));
    elseif length(index_ll) ~= 0
        libsffilenames(i,1) = cellstr(strcat(char(libfilenamesll(index_ll)), 'sf.emf'));
    end
    
    if choice == 2
        % Open, print, and close
        open_system(char(libsfblockpaths_all(i,1)));
        sfprint(char(libsfblockpaths_all(i,1)), 'meta', char(libsffilenames(i,1)));
        sfclose;
        close_system(get_param(libsfblockpaths_all(i,1), 'Parent'));
    end
     
end

cd(dir)


% --- Gather Fault Summary Data --- %
% --------------------------------- %

fltblockpaths = find_system(path, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'ReferenceBlock', 'ExhSys_lib/Persistent Fault Characterization');
funccollblockpaths = find_system(path, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'ReferenceBlock' ,'MotoHawk_lib/Extra Development Blocks/motohawk_function_collector');

% Alphabatize
for i = 1:length(fltblockpaths)
    fltname{i,1} = motohawk_get_param_ws(fltblockpaths{i,1}, 'nam');
end
[fltname fltindex] = sort(fltname);

for i = 1:length(fltname)
    
    % Mode
    fltmode(i,1) = get_param(cellstr(strcat(char(fltblockpaths(fltindex(i),1)), '/motohawk_fault_def')), 'mode');
    
    % Model path
    fltpath(i,1) = get_param(fltblockpaths(fltindex(i),1), 'Parent');
    fltpathtitleblockexist(i,1) = length(find_system(fltpath(i,1), 'SearchDepth', 1, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'ReferenceBlock', 'ExhSys_lib/Documentation_Title_Block'));
    if strcmp(path, fltpath(i,1)) == 1
        fltlibraryblock(i,1) = 0;
    else
        fltlibraryblock(i,1) = not(strcmp(get_param(fltpath(i,1), 'ReferenceBlock'), ''));
    end
        % Not a library block
    if fltlibraryblock(i,1) == 0
       fltpathtxt(i,1) = cellstr( [ get_param( strcat(char(fltpath(i,1)), '/Documentation_Title_Block'), 'doc_path'), ...
           '  ', char(fltpath(i,1)) ] ); 
       % Library block
    elseif fltlibraryblock(i,1) == 1
        found = 0;
        path2 = fltpath(i,1);
        while found == 0
           parent = get_param(path2, 'Parent');
           if strcmp(path, parent) == 1
               found = 1;
           else
               found = strcmp(get_param(parent, 'ReferenceBlock'), '');
           end
           path_des = path2;
           path2 = parent;
        end
        docpath_des = get_param(strcat(char(path2), '/Documentation_Title_Block'), 'doc_path');
        fltpathtxt(i,1) = cellstr([char(docpath_des) '  ' char(path_des) '  ' 'Library Block']);    
    else
       fltpathtxt(i,1) = cellstr(''); 
    end
    fltpathtxt(i,1) = cellstr(strrep(char(fltpathtxt(i,1)), '/', ' / '));
    
    % Sample period of fault
    fltdwnsmplcount(i,1) = motohawk_get_param_ws(fltblockpaths{fltindex(i),1}, 'count');
    fltsampperiod(i,1) = 0.005 * fltdwnsmplcount(i,1);
%     for j = 1:length(funccollblockpaths)
%         if strmatch(char(get_param(funccollblockpaths(j,1), 'Parent')), char(fltblockpaths(i,1))) == 1
%             fltsampperiod(i,1) = fltsampperiod(i,1) * motohawk_get_param_ws(funccollblockpaths{j,1}, 'count')
%         end
%         
%     end

    % SPN
    fltSPN(i,1) = get_param(cellstr(strcat(char(fltblockpaths(fltindex(i),1)), '/SPN')), 'data');

    % FMI Number
    fltFMInum(i,1) = get_param(cellstr(strcat(char(fltblockpaths(fltindex(i),1)), '/FMI')), 'data');
    
    % DTC
    fltDTCletter(i,1) = get_param(cellstr(strcat(char(fltblockpaths(fltindex(i),1)), '/DTCLetter')), 'data');
    fltDTCdigit1(i,1) = get_param(cellstr(strcat(char(fltblockpaths(fltindex(i),1)), '/DTCDigit1')), 'data');
    fltDTCdigit2(i,1) = get_param(cellstr(strcat(char(fltblockpaths(fltindex(i),1)), '/DTCDigit2')), 'data');
    fltDTCdigit3(i,1) = get_param(cellstr(strcat(char(fltblockpaths(fltindex(i),1)), '/DTCDigit3')), 'data');
    fltDTCdigit4(i,1) = get_param(cellstr(strcat(char(fltblockpaths(fltindex(i),1)), '/DTCDigit4')), 'data');

end


% --- Gather Calibration and Probe Summary Data --- %
% ------------------------------------------------- %

% Find calibration vardecs
calblockpaths_all = find_system(path, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'FunctionName', 'motohawk_sfun_calibration');
calblockpaths_all = [calblockpaths_all; find_system(path, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'FunctionName', 'motohawk_sfun_prelookup')];
calblockpaths_all = [calblockpaths_all; find_system(path, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'FunctionName', 'motohawk_sfun_interpolation_1d')];
calblockpaths_all = [calblockpaths_all; find_system(path, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'FunctionName', 'motohawk_sfun_interpolation_2d')];

% Find probe vardecs
prbblockpaths = find_system(path, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'FunctionName', 'motohawk_sfun_probe');

% Assign datadef vardecs to lists
datadefblockpaths = find_system(path, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'FunctionName', 'motohawk_sfun_data_def');
for i = 1:length(datadefblockpaths)
    if strcmp(get_param(datadefblockpaths(i), 'window'), 'Calibration') == 1 & ...
            strcmp(get_param(datadefblockpaths(i), 'use_vardec'), 'on') == 1
        calblockpaths_all = [calblockpaths_all; datadefblockpaths(i)];
    elseif strcmp(get_param(datadefblockpaths(i), 'window'), 'Display') == 1 & ...
            strcmp(get_param(datadefblockpaths(i), 'use_vardec'), 'on') == 1
        prbblockpaths = [prbblockpaths; datadefblockpaths(i)];
    end
end

% Eliminate SPN and Keyword 2000 from list
j = 0;
for i = 1:length(calblockpaths_all)
    if length(strfind(char(calblockpaths_all(i,1)), 'SPN')) == 0 & length(strfind(char(calblockpaths_all(i,1)), 'FMI')) == 0 & ...
        length(strfind(char(calblockpaths_all(i,1)), 'DTCGroup')) == 0 & length(strfind(char(calblockpaths_all(i,1)), 'DTCLetter')) == 0 & ...
        length(strfind(char(calblockpaths_all(i,1)), 'DTCDigit1')) == 0 & length(strfind(char(calblockpaths_all(i,1)), 'DTCDigit2')) == 0 & ...
        length(strfind(char(calblockpaths_all(i,1)), 'DTCDigit3')) == 0 & length(strfind(char(calblockpaths_all(i,1)), 'DTCDigit4')) == 0
        j = j + 1;
        calblockpaths(j,1) = calblockpaths_all(i,1);
    end
end

% Alphabatize
for i = 1:length(calblockpaths)
    calname{i,1} = motohawk_get_param_ws(calblockpaths{i,1}, 'nam');
end
[calname calindex] = sort(calname);
for i = 1:length(prbblockpaths)
    prbname{i,1} = motohawk_get_param_ws(prbblockpaths{i,1}, 'nam');
end
[prbname prbindex] = sort(prbname);

% Gather calibration data of interest
for i = 1:length(calname)
    
    % Adjust Name
    if strcmp(get_param(calblockpaths{calindex(i),1}, 'ReferenceBlock'), 'MotoHawk_lib/Lookup Tables/motohawk_prelookup') == 1
        calnam(i,1) = cellstr([motohawk_get_param_ws(calblockpaths{calindex(i),1}, 'nam') 'IdxArr']);
    elseif strcmp(get_param(calblockpaths{calindex(i),1}, 'ReferenceBlock'), 'MotoHawk_lib/Lookup Tables/motohawk_interpolation_1d') == 1   
        calnam(i,1) = cellstr([motohawk_get_param_ws(calblockpaths{calindex(i),1}, 'nam') 'Tbl']);
    elseif strcmp(get_param(calblockpaths{calindex(i),1}, 'ReferenceBlock'), 'MotoHawk_lib/Lookup Tables/motohawk_interpolation_2d') == 1   
        calnam(i,1) = cellstr([motohawk_get_param_ws(calblockpaths{calindex(i),1}, 'nam') 'Map']);
    else
        calnam(i,1) = cellstr(motohawk_get_param_ws(calblockpaths{calindex(i),1}, 'nam'));
    end
    
    % Units, help, and MotoTune group
    calunits{i,1} = motohawk_get_param_ws(calblockpaths{calindex(i),1}, 'units');
    calhelp{i,1} = motohawk_get_param_ws(calblockpaths{calindex(i),1}, 'help');
    calmototunegrp{i,1} = motohawk_get_param_ws(calblockpaths{calindex(i),1}, 'mototune_group');
    
    % Model path
    calpath(i,1) = get_param(calblockpaths(calindex(i),1), 'Parent');
    calpathtitleblockexist(i,1) = length(find_system(calpath(i,1), 'SearchDepth', 1, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'ReferenceBlock', 'ExhSys_lib/Documentation_Title_Block'));
    if strcmp(path, calpath(i,1)) == 1
        callibraryblock(i,1) = 0;
    else
        callibraryblock(i,1) = not(strcmp(get_param(calpath(i,1), 'ReferenceBlock'), ''));
    end
        % Not a library block
    if callibraryblock(i,1) == 0
       calpathtxt(i,1) = cellstr( [ get_param( strcat(char(calpath(i,1)), '/Documentation_Title_Block'), 'doc_path'), ...
           '  ', char(calpath(i,1)) ] ); 
       % Library block
    elseif callibraryblock(i,1) == 1
        found = 0;
        path2 = calpath(i,1);
        while found == 0
           parent = get_param(path2, 'Parent');
           if strcmp(path, parent) == 1
               found = 1;
           else
               found = strcmp(get_param(parent, 'ReferenceBlock'), '');
           end
           path_des = path2;
           path2 = parent;
        end
        docpath_des = get_param(strcat(char(path2), '/Documentation_Title_Block'), 'doc_path');
        calpathtxt(i,1) = cellstr([char(docpath_des) '  ' char(path_des) '  ' 'Library Block']);    
    else
       calpathtxt(i,1) = cellstr(''); 
    end
    calpathtxt(i,1) = cellstr(strrep(char(calpathtxt(i,1)), '/', ' / '));
    
end

% Gather probe data of interest
for i = 1:length(prbname)
    
    % Units, help, and MotoTune group
    prbunits{i,1} = motohawk_get_param_ws(prbblockpaths{prbindex(i),1}, 'units');
    prbhelp{i,1} = motohawk_get_param_ws(prbblockpaths{prbindex(i),1}, 'help');
    prbmototunegrp{i,1} = motohawk_get_param_ws(prbblockpaths{prbindex(i),1}, 'mototune_group');
    
    % Model path
    prbpath(i,1) = get_param(prbblockpaths(prbindex(i),1), 'Parent');
    prbpathtitleblockexist(i,1) = length(find_system(prbpath(i,1), 'SearchDepth', 1, 'LookUnderMasks', 'all', 'FollowLinks', 'on', 'ReferenceBlock', 'ExhSys_lib/Documentation_Title_Block'));
    if strcmp(path, prbpath(i,1)) == 1
        prblibraryblock(i,1) = 0;
    else
        prblibraryblock(i,1) = not(strcmp(get_param(prbpath(i,1), 'ReferenceBlock'), ''));
    end
        % Not a library block
    if prblibraryblock(i,1) == 0
       prbpathtxt(i,1) = cellstr( [ get_param( strcat(char(prbpath(i,1)), '/Documentation_Title_Block'), 'doc_path'), ...
           '  ', char(prbpath(i,1)) ] ); 
       % Library block
    elseif prblibraryblock(i,1) == 1
        found = 0;
        path2 = prbpath(i,1);
        while found == 0
           parent = get_param(path2, 'Parent');
           if strcmp(path, parent) == 1
               found = 1;
           else
               found = strcmp(get_param(parent, 'ReferenceBlock'), '');
           end
           path_des = path2;
           path2 = parent;
        end
        docpath_des = get_param(strcat(char(path2), '/Documentation_Title_Block'), 'doc_path');
        prbpathtxt(i,1) = cellstr([char(docpath_des) '  ' char(path_des) '  ' 'Library Block']);    
    else
       prbpathtxt(i,1) = cellstr(''); 
    end
    prbpathtxt(i,1) = cellstr(strrep(char(prbpathtxt(i,1)), '/', ' / '));
    
end

% --- Create Table of Contents and Appendix --- %
% --------------------------------------------- %

dotsnum = 120*ones(1,7) + 13*[5 4 3 2 1 0 -1];
for i = 1:length(dotsnum)
    disp = '';
    for j = 1:dotsnum(i)
        disp = strcat(disp, '.');
    end
    dots(i,1) = cellstr(disp);
end


fid = fopen('AutoDoc.doc', 'w+');
fprintf(fid, '%s\f', 'TITLE PAGE TEXT');
fprintf(fid, '%s\n\n', 'TABLE OF CONTENTS');
fprintf(fid, '%s\n%s   %s\n', '1.  System Summary', char(dots(1,1)), 'i');
fprintf(fid, '%s\n%s   %s\n', '2.  Control Strategy Summary', char(dots(1,1)), 'ii');
fprintf(fid, '%s\n%s   %s\n', '3.  Fault Manager Summary', char(dots(1,1)), 'iii');
fprintf(fid, '%s\n%s   %s\n', '4.  Table of Contents', char(dots(1,1)), 'iv');
fprintf(fid, '%s\n%s %3.0f\n', '5.  The Model', char(dots(1,1)), 1);


% Model table of contents
[toc_docpath, index] = sort(docpaths);
count = 2;
for i = 1:length(toc_docpath)
    
    % Find name
    toc_name(i,1) = get_param(get_param(blockpaths(index(i)), 'Parent'), 'Name');
    
    % Find page numbering (adjust if accompanying Stateflow diagram or Cals and Probes page present)
    toc_num(i) = count;
    sfmatch = strmatch(cellstr(strcat(char(docpaths(index(i))), 'sf.emf')), sffilenames);
    cpmatch = strmatch(cellstr(strcat(char(docpaths(index(i))), 'cp.emf')), cpfilenames);
    count = count + 1 + length(sfmatch) + length(cpmatch);
    
    % Print name and path
    if strncmp(char(toc_docpath(i,1)), '0', 1) == 1
        fprintf(fid, '\t%s\n', char(toc_name(i,1)));
    else
        toc_nameformat = '\t';
        for j = 1:length(strfind(char(toc_docpath(i,1)), '.'))
            toc_nameformat = strcat(toc_nameformat, '\t');
        end
        toc_nameformat = strcat(toc_nameformat, '%s  %s\n');
        fprintf(fid, toc_nameformat, char(toc_docpath(i,1)), char(toc_name(i,1)));
    end
    
    % Print page number
    toc_numformat = '';
    if strncmp(char(toc_docpath(i,1)), '0', 1) == 1
        dots_index = 2;
    else
        dots_index = length(strfind(char(toc_docpath(i,1)), '.')) + 2;
    end
    for j = 1:(dots_index - 1)
        toc_numformat = strcat(toc_numformat, '\t');
    end
    toc_numformat = strcat(toc_numformat, '%s %3.0f\n');
    fprintf(fid, toc_numformat, char(dots(dots_index,1)), toc_num(i));

end

% Appendix of library blocks table of contents

fprintf(fid, '%s\n%s %3.0f\n', 'Appendix A: Library Blocks', char(dots(1,1)), count);
count = count + 1;

for i = 1:length(libpathstl)
    
    % Find name
    libtoc_name(i,1) = get_param(libpathstl(i), 'Name');
    
    % Find page numbering (adjust if accompanying Stateflow diagram or Cals and Probes page present)
    libtoc_num(i) = count;
    libllmatch = strmatch(libfilenamestl(i), libfilenamesll);
    libsfmatch = strmatch(libfilenamestl(i), libsffilenames);
    count = count + 1 + length(libllmatch) + length(libsfmatch);
    
    % Print name and page number
    fprintf(fid, '\t%s\n\t%s %3.0f\n', char(libtoc_name(i,1)), char(dots(2,1)), libtoc_num(i)); 

end


fprintf(fid, '%s\n%s %3.0f\n', 'Appendix B: Simulink Block Descriptions', char(dots(1,1)), count);
fprintf(fid, '%s\n%s %3.0f\n', 'Appendix C: MotoHawk Block Descriptions', char(dots(1,1)), 999);
fprintf(fid, '%s\n%s %3.0f\n', 'Appendix D: Calibration Summary', char(dots(1,1)), 999);
fprintf(fid, '%s\n%s %3.0f\n', 'Appendix E: Probe Summary', char(dots(1,1)), 999);
fprintf(fid, '%s\n%s %3.0f\n', 'Appendix F: Fault Summary', char(dots(1,1)), 999);
fprintf(fid, '%s\n%s %3.0f\n', 'Appendix G: CAN Message Summary', char(dots(1,1)), 999);

fprintf(fid, '\f%s', 'THE MODEL');
fclose(fid);

% Fault summary
fn = 'AutoDoc';
xlswrite(fn, cellstr(''), 1, 'A1:G1000');
count = 0;
for i = 1:length(fltblockpaths)
    count = count + 1;
    flttxt(count,1) = cellstr(fltname(i,1));
    flttxt(count,2) = cellstr(fltmode(i,1));
    flttxt(count,3) = cellstr(num2str(fltsampperiod(i,1)));
    count = count + 1;
    flttxt(count,1) = cellstr(fltpathtxt(i,1));
    count = count + 1;
    flttxt(count,1) = cellstr(['FMI ' char(fltFMInum(i,1))]);
    flttxt(count,2) = cellstr(['SPN ' char(fltSPN(i,1))]);
    flttxt(count,3) = cellstr(['DTC ' char(fltDTCletter(i,1)) ' ' char(fltDTCdigit1(i,1)) ... 
        char(fltDTCdigit2(i,1)) char(fltDTCdigit3(i,1)) char(fltDTCdigit4(i,1)) ]);
end
xlswrite(fn, flttxt, 1, strcat('C6:E', num2str(count+5)));

% Calibration summary
xlswrite(fn, cellstr(''), 2, 'A1:G1000');
count = 0;
for i = 1:length(calname)
    count = count + 1;
    caltxt(count,1) = cellstr(calname(i,1));
    caltxt(count,2) = cellstr(calunits(i,1));
    caltxt(count,3) = cellstr(calmototunegrp(i,1));
    count = count + 1;
    caltxt(count,1) = cellstr(calhelp(i,1));
    count = count + 1;
    caltxt(count,1) = cellstr(calpathtxt(i,1));
end
xlswrite(fn, caltxt, 2, strcat('C6:E', num2str(count+5)));

% Probe summary
xlswrite(fn, cellstr(''), 3, 'A1:G1000');
count = 0;
for i = 1:length(prbname)
    count = count + 1;
    prbtxt(count,1) = cellstr(prbname(i,1));
    prbtxt(count,2) = cellstr(prbunits(i,1));
    prbtxt(count,3) = cellstr(prbmototunegrp(i,1));
    count = count + 1;
    prbtxt(count,1) = cellstr(prbhelp(i,1));
    count = count + 1;
    prbtxt(count,1) = cellstr(prbpathtxt(i,1));
end
xlswrite(fn, prbtxt, 3, strcat('C6:E', num2str(count+5)));