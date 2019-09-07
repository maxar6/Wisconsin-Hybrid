
				@if exist .\rtwtypes.h del /Q /F .\rtwtypes.h > NUL
							@if ERRORLEVEL 1 exit junk
					
				@if "%MOTOCODER_DIR%" NEQ "" goto got_motocoder
					@setlocal
					@set MOTOCODER_DIR=c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder
					:got_motocoder
					
				@copy "LinkerDefinition_DEV.xml" "LinkerDefinition.xml" > NUL
							@if ERRORLEVEL 1 exit junk
					@copy "BuckyWagon_01_DEV.ld" "BuckyWagon_01.ld" > NUL
							@if ERRORLEVEL 1 exit junk
					
				
					@echo ### Generating MotoTune DLL
					@if exist .\TDB rmdir /Q /S .\TDB > NUL
							@if ERRORLEVEL 1 exit junk
					@mkdir .\TDB
							@if ERRORLEVEL 1 exit junk
					@copy "%MOTOCODER_DIR%\TDB\*.*" .\TDB > NUL
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\MotoParserXML.exe" /LIB /verbosity=7 /d="C:\Users\maxar\Documents\GitHub\Wisconsin-Hybrid\BuckyWagon_01\BuckyWagon_01_Build" /d="C:\ProgramData\MotoHawk\2011a_sp0_184\Toolchains\7_12_0\rtw_lib_single\API" /d="C:\ProgramData\MotoHawk\2011a_sp0_184\Toolchains\7_12_0\rtw_lib_single\API\MPC565" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\ControlCoreClassic\Framework\MultiTask\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\ControlCoreClassic\GlobalDefinitions\MotoTron" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\ControlCoreClassic\MotoTronProtocol\MultiTarget\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\ControlCoreClassic\ModuleDefinitions\Motorola" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\ControlCoreClassic\MotoTronSpecific\MultiTarget\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\ControlCoreClassic\FileSystem\smxFFS\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\ControlCoreClassic\FileSystem\ucFS\API" TDB/ParsedVardecs.xml
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\Transform" -o TDB/ParsedAndCCVardecs.xml TDB/ParsedVardecs.xml "%MOTOCODER_DIR%\Transforms\VarDecs_Merge.xsl" AdditionalVardecsXML="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\ControlCoreClassic\ControlCoreClassic_Vardecs.xml"
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\Transform" -o TDB/ParsedAndCombinedVardecs.xml TDB/ParsedAndCCVardecs.xml "%MOTOCODER_DIR%\Transforms\VarDecs_Merge.xsl" AdditionalVardecsXML="%cd%\MotoCoderVarDecs.xml"
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\Transform" -o TDB/BuckyWago_190.xml TDB/ParsedAndCombinedVardecs.xml "%MOTOCODER_DIR%\Transforms\VarDecs_Reorder.xsl" application-url="%CD%\ApplicationDescriptor.xml" maxTableSize=65535
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\Transform" TDB/BuckyWago_190.xml "%MOTOCODER_DIR%\Transforms\VarDecs_Transform.xsl" includeFiles="CommonInclude.h,BuckyWagon_01.h,TDB_Includes.h" GenDLL=1 GenTDB=1
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\nant\bin\nant.exe" -buildfile:TDB\Database.build -D:required.installdir="C:\Program Files (x86)\Woodward\DevelopmentTools\Toolchains\GCC\win32-pe\4_4_0" -D:database.basename=BuckyWago_190 -q -nologo rebuild
							@if ERRORLEVEL 1 exit junk
					@echo ### Completed MotoTune DLL
							@if ERRORLEVEL 1 exit junk
					
				
					@echo ### Compiling and Linking
					@"%MOTOCODER_DIR%\bin\nant\bin\nant.exe" -buildfile:BuckyWagon_01.build -nologo rebuild
							@if ERRORLEVEL 1 exit junk
					
				
					@echo ### Call MotoConvert
					@"%MOTOCODER_DIR%\bin\MotoConvert.exe" -project=MPC5xx -map=.\Target\BuckyWagon_01.map -srec=.\Target\BuckyWagon_01.run -tdbver=1 -tdb=EriRequestTableList -crctable=g_pCRCBlockPtr -InitialisedRAM=.fixed_ramcals,.fixed_romcals -InitialisedRAM=.ramcals,.romcals -InitialisedRAM=.sdata,.romsdata -out=BuckyWagon_01.sr -TransformBetween=0x00400000-0x0041FFFF -TransformBetween=0x00000000-0x000FFFFF -toolchain=GCC -InitialisedRAM=.data,.romdata -encrypt=.\Target\BuckyWagon_01_190.srz
							@if ERRORLEVEL 1 exit junk
					
				
					@echo ### Creating Build Statistics
					@"%MOTOCODER_DIR%\bin\MotoElfParser.exe" -i "Target\BuckyWagon_01.elf" -o "Target\BuckyWagon_01_elf.xml"
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\Transform.exe" -o "Target\BuckyWagon_01_symbols.xml" "Target\BuckyWagon_01_elf.xml" "%MOTOCODER_DIR%\Transforms\BuildStats_IntermediateGenerate.xsl" LinkerDefinitionXML="%cd%\LinkerDefinition.xml"
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\Transform.exe" "Target\BuckyWagon_01_symbols.xml" "%MOTOCODER_DIR%\Transforms\BuildStats_Print.xsl" BuildStatsSymbolsXML="%cd%\BuildStatsSymbols.xml"
							@if ERRORLEVEL 1 exit junk
					
				
					@echo ### Copy BuckyWago_190.dll and BuckyWagon_01_190.srz
					@if exist C:\ECUFiles\TDBDLL\\*.* copy /Y .\TDB\BuckyWago_190.dll C:\ECUFiles\TDBDLL\ > NUL
							@if ERRORLEVEL 1 exit junk
					@if exist C:\ECUFiles\Programs\*.* copy /Y .\Target\BuckyWagon_01_190.srz C:\ECUFiles\Programs > NUL
							@if ERRORLEVEL 1 exit junk
					
				@"C:\Program Files (x86)\Woodward\DevelopmentTools\Toolchains\GCC\powerpc-eabi\4_4_0\\bin\nm.exe" -f sysv .\Target\BuckyWagon_01.elf > .\Target\BuckyWagon_01.sym
							@if ERRORLEVEL 1 exit junk
					
				@if exist "%MOTOCODER_DIR%\bin\ESTconvert.exe" "%MOTOCODER_DIR%\bin\ESTconvert.exe" .\Target\BuckyWagon_01.elf -b -c > NUL 2>&1
					
				
					@echo ### Dumping DLL to XML
					@"C:\PROGRA~2\Woodward\MCS\MotoHawk\2011A_~1.184\Bin\motohawk_dumpdll.exe" -xml "C:\Users\maxar\Documents\GitHub\Wisconsin-Hybrid\BuckyWagon_01\BuckyWagon_01_Build\TDB\BuckyWago_190.dll" > "C:\Users\maxar\Documents\GitHub\Wisconsin-Hybrid\BuckyWagon_01\BuckyWagon_01_Build\TDB\BuckyWago_190.xml"
							@if ERRORLEVEL 1 exit junk
					
				
					@echo ### Generating ASAP2 file
					@"C:\PROGRA~2\Woodward\MCS\MotoHawk\2011A_~1.184\Bin\ASAP2.exe" -m "C:\Users\maxar\Documents\GitHub\Wisconsin-Hybrid\BuckyWagon_01\BuckyWagon_01_Build\TDB\BuckyWago_190.xml" -o "C:\Users\maxar\Documents\GitHub\Wisconsin-Hybrid\BuckyWagon_01\BuckyWagon_01_Build\TDB\BuckyWago_190.a2l" -u VirtualCalSpace -asap1b "C:\Users\maxar\Documents\GitHub\Wisconsin-Hybrid\BuckyWagon_01\BuckyWagon_01_Build\mh_asap1b_ccp_CCP1.xml"
							@if ERRORLEVEL 1 exit junk
					
				
					@echo ### Installing ASAP2 file in C:\ECUFiles\TDBDLL\
					@copy "C:\Users\maxar\Documents\GitHub\Wisconsin-Hybrid\BuckyWagon_01\BuckyWagon_01_Build\TDB\BuckyWago_190.a2l" "C:\ECUFiles\TDBDLL\" > NUL
							@if ERRORLEVEL 1 exit junk
					
			
			@echo ### Successful Build with MotoCoder
		