
@if exist .\rtwtypes.h del /Q /F .\rtwtypes.h > NUL
@if ERRORLEVEL 1 exit junk


@echo ### Parsing VarDecs in Source Code
@if exist .\TDB rmdir /Q /S .\TDB > NUL
@if ERRORLEVEL 1 exit junk
@mkdir .\TDB
@if ERRORLEVEL 1 exit junk
@"c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Bin\MotoParserXML" /LIB /verbosity=7 /d="C:\Users\HYBRID\Documents\GitHub\Wisconsin-Hybrid\Mooventure2016_Rev5\Mooventure2016_Rev5_Build" /d="C:\ProgramData\MotoHawk\2011a_sp0_184\Toolchains\7_12_0\rtw_lib_single\API" /d="C:\ProgramData\MotoHawk\2011a_sp0_184\Toolchains\7_12_0\rtw_lib_single\API\MPC5554" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\GlobalDefinitions\MotoTron" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\GlobalDefinitions\ProcessorDefinitions" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\GlobalDefinitions\ModuleDefinitions" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\ControlCore\Processor\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\ControlCore\Processor\MPC55xx\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\ControlCore\Processor\MPC55xx\API\RegisterFiles" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\ControlCore\DeviceDrivers\BootMailBox\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\ControlCore\DeviceDrivers\Generic\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\ControlCore\DeviceDrivers\MPC55xxFlash\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\ControlCore\eTPU\Generic\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\ControlCore\ModuleSupport\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\ControlCore\ModuleSupport\Pcm09xx\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\Protocols\KeySuite\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\Protocols\KeySuite\Server\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\Protocols\KeySuite\Server\Key\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\Protocols\KeySuite\Server\ERI\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\Protocols\KeySuite\Server\CANKing\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\Protocols\KeySuite\Server\MotProg\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\Protocols\KeySuite\Server\Crypto\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\Controllers\SharedComponents\Security\DefaultSecurity\API" TDB/ParsedVardecs.xml
@if ERRORLEVEL 1 exit junk
@"c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Bin\Transform" -o TDB/ParsedAndCombinedVardecs.xml TDB/ParsedVardecs.xml "c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Transforms\VarDecs_Merge.xsl" AdditionalVardecsXML="file:///C:/Users/HYBRID/Documents/GitHub/Wisconsin-Hybrid/Mooventure2016_Rev5/Mooventure2016_Rev5_Build/MotoCoderVarDecs.xml"
@if ERRORLEVEL 1 exit junk
@"c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Bin\Transform" -o TDB/Mooventur_209.xml TDB/ParsedAndCombinedVardecs.xml "c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Transforms\VarDecs_Reorder.xsl" intermediate-url="file:///C:/Users/HYBRID/Documents/GitHub/Wisconsin-Hybrid/Mooventure2016_Rev5/Mooventure2016_Rev5_Build/MotoCoder_Intermediate.xml" maxTableSize=65535
@if ERRORLEVEL 1 exit junk
@"c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Bin\Transform" TDB/Mooventur_209.xml "c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Transforms\VarDecs_Transform.xsl" includeFiles="CommonInclude.h,Mooventure2016_Rev5.h,TaskKernel_GenAPI.h,ERIRequestTables_GenAPI.h,MotoCoder.h" GenDLL=1 GenTDB=1
@if ERRORLEVEL 1 exit junk


@echo ### Generating MotoTune DLL
@copy "c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\TDB\*.*" .\TDB > NUL
@if ERRORLEVEL 1 exit junk
@"c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\bin\nant\bin\nant" -buildfile:TDB\Database.build -D:required.installdir="C:\Program Files (x86)\Woodward\DevelopmentTools\Toolchains\GCC\win32-pe\4_4_0" -D:database.basename=Mooventur_209 -q -nologo rebuild
@if ERRORLEVEL 1 exit junk


@echo ### Compiling and Linking
@"c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Bin\nant\bin\nant.exe" -buildfile:Mooventure2016_Rev5.build -nologo rebuild
@if ERRORLEVEL 1 exit junk


@echo ### Generating Symbol file and Processing Map file
@"c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Bin\MotoConvert.exe" -project=MPC55xx -toolchain=GCC -TransformBetween=0x00040000-0x002FFFFF -InitialisedRAM=.cals,.flashcals -InitialisedRAM=.fixed_ramcals,.fixed_romcals -InitialisedRAM=.ramcals,.romcals -map=Target\Mooventure2016_Rev5.map -srec=Target\Mooventure2016_Rev5.run -out=Target\Mooventure2016_Rev5.sr -encrypt=Target\Mooventure2016_Rev5.srz -tdbver=1 -tdb=EriRequestTableList -crctable=g_pCRCBlockPtr
@if ERRORLEVEL 1 exit junk


@echo ### Copy Mooventur_209.dll and Mooventure2016_Rev5_209.srz
@if exist C:\ECUFiles\TDBDLL\*.* copy /Y .\TDB\Mooventur_209.dll C:\ECUFiles\TDBDLL > NUL
@if ERRORLEVEL 1 exit junk
@if exist C:\ECUFiles\Programs\*.* copy /Y .\Target\Mooventure2016_Rev5.srz C:\ECUFiles\Programs\Mooventure2016_Rev5_209.srz > NUL
@if ERRORLEVEL 1 exit junk


@echo ### Creating Build Statistics
@"c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Bin\MotoElfParser.exe" -i "Target\Mooventure2016_Rev5.elf" -o "Target\Mooventure2016_Rev5_elf.xml"
@if ERRORLEVEL 1 exit junk
@"c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Bin\Transform" -o "Target\Mooventure2016_Rev5_symbols.xml" "Target\Mooventure2016_Rev5_elf.xml" "c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Transforms\BuildStats_IntermediateGenerate.xsl" LinkerDefinitionXML="file:///C:/Users/HYBRID/Documents/GitHub/Wisconsin-Hybrid/Mooventure2016_Rev5/Mooventure2016_Rev5_Build/LinkerDefinition.xml"
@if ERRORLEVEL 1 exit junk
@"c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Bin\Transform" "Target\Mooventure2016_Rev5_symbols.xml" "c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder\Transforms\BuildStats_Print.xsl" BuildStatsSymbolsXML="file:///C:/Users/HYBRID/Documents/GitHub/Wisconsin-Hybrid/Mooventure2016_Rev5/Mooventure2016_Rev5_Build/BuildStatsSymbols.xml"
@if ERRORLEVEL 1 exit junk


@echo ### Successful Build with MotoCoder
