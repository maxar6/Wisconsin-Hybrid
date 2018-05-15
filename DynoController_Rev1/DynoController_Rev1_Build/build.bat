
				@if exist .\rtwtypes.h del /Q /F .\rtwtypes.h > NUL
							@if ERRORLEVEL 1 exit junk
					
				@if "%MOTOCODER_DIR%" NEQ "" goto got_motocoder
					@setlocal
					@set MOTOCODER_DIR=c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\motocoder
					:got_motocoder
					
				@copy "LinkerDefinition_PROD.xml" "LinkerDefinition.xml" > NUL
							@if ERRORLEVEL 1 exit junk
					@copy "DynoController_Rev1_PROD.ld" "DynoController_Rev1.ld" > NUL
							@if ERRORLEVEL 1 exit junk
					
				
					@echo ### Generating MotoTune DLL
					@if exist .\TDB rmdir /Q /S .\TDB > NUL
							@if ERRORLEVEL 1 exit junk
					@mkdir .\TDB
							@if ERRORLEVEL 1 exit junk
					@copy "%MOTOCODER_DIR%\TDB\*.*" .\TDB > NUL
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\MotoParserXML.exe" /LIB /verbosity=7 /d="C:\Users\HYBRID\Documents\GitHub\Wisconsin-Hybrid\DynoController_Rev1\DynoController_Rev1_Build" /d="C:\ProgramData\MotoHawk\2011a_sp0_184\Toolchains\7_12_0\rtw_lib_single\API" /d="C:\ProgramData\MotoHawk\2011a_sp0_184\Toolchains\7_12_0\rtw_lib_single\API\MPC555" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\ControlCoreClassic\Framework\MultiTask\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\ControlCoreClassic\GlobalDefinitions\MotoTron" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\ControlCoreClassic\MotoTronProtocol\MultiTarget\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\ControlCoreClassic\ModuleDefinitions\Motorola" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\ControlCoreClassic\MotoTronSpecific\MultiTarget\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\ControlCoreClassic\FileSystem\smxFFS\API" /d="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\ControlCoreClassic\FileSystem\ucFS\API" TDB/ParsedVardecs.xml
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\Transform" -o TDB/ParsedAndCCVardecs.xml TDB/ParsedVardecs.xml "%MOTOCODER_DIR%\Transforms\VarDecs_Merge.xsl" AdditionalVardecsXML="c:\program files (x86)\woodward\mcs\motohawk\2011a_sp0.184\ControlCoreClassic\ControlCoreClassic_Vardecs.xml"
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\Transform" -o TDB/ParsedAndCombinedVardecs.xml TDB/ParsedAndCCVardecs.xml "%MOTOCODER_DIR%\Transforms\VarDecs_Merge.xsl" AdditionalVardecsXML="%cd%\MotoCoderVarDecs.xml"
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\Transform" -o TDB/DynoContr_011.xml TDB/ParsedAndCombinedVardecs.xml "%MOTOCODER_DIR%\Transforms\VarDecs_Reorder.xsl" application-url="%CD%\ApplicationDescriptor.xml" maxTableSize=65535
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\Transform" TDB/DynoContr_011.xml "%MOTOCODER_DIR%\Transforms\VarDecs_Transform.xsl" includeFiles="CommonInclude.h,DynoController_Rev1.h,TDB_Includes.h" GenDLL=1 GenTDB=1
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\nant\bin\nant.exe" -buildfile:TDB\Database.build -D:required.installdir="C:\Program Files (x86)\Woodward\DevelopmentTools\Toolchains\GCC\win32-pe\4_4_0" -D:database.basename=DynoContr_011 -q -nologo rebuild
							@if ERRORLEVEL 1 exit junk
					@echo ### Completed MotoTune DLL
							@if ERRORLEVEL 1 exit junk
					
				
					@echo ### Compiling and Linking
					@"%MOTOCODER_DIR%\bin\nant\bin\nant.exe" -buildfile:DynoController_Rev1.build -nologo rebuild
							@if ERRORLEVEL 1 exit junk
					
				
					@echo ### Call MotoConvert
					@"%MOTOCODER_DIR%\bin\MotoConvert.exe" -project=MPC5xx -map=.\Target\DynoController_Rev1.map -srec=.\Target\DynoController_Rev1.run -tdbver=1 -tdb=EriRequestTableList -crctable=g_pCRCBlockPtr -InitialisedRAM=.fixed_ramcals,.fixed_romcals -InitialisedRAM=.ramcals,.romcals -InitialisedRAM=.sdata,.romsdata -out=DynoController_Rev1.sr -TransformBetween=0x00400000-0x0041FFFF -TransformBetween=0x00000000-0x0006FFFF -toolchain=GCC -InitialisedRAM=.data,.romdata -encrypt=.\Target\DynoController_Rev1_011.srz
							@if ERRORLEVEL 1 exit junk
					
				
					@echo ### Creating Build Statistics
					@"%MOTOCODER_DIR%\bin\MotoElfParser.exe" -i "Target\DynoController_Rev1.elf" -o "Target\DynoController_Rev1_elf.xml"
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\Transform.exe" -o "Target\DynoController_Rev1_symbols.xml" "Target\DynoController_Rev1_elf.xml" "%MOTOCODER_DIR%\Transforms\BuildStats_IntermediateGenerate.xsl" LinkerDefinitionXML="%cd%\LinkerDefinition.xml"
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\Transform.exe" "Target\DynoController_Rev1_symbols.xml" "%MOTOCODER_DIR%\Transforms\BuildStats_Print.xsl" BuildStatsSymbolsXML="%cd%\BuildStatsSymbols.xml"
							@if ERRORLEVEL 1 exit junk
					
				
					@echo ### Copy DynoContr_011.dll and DynoController_Rev1_011.srz
					@if exist C:\ECUFiles\TDBDLL\\*.* copy /Y .\TDB\DynoContr_011.dll C:\ECUFiles\TDBDLL\ > NUL
							@if ERRORLEVEL 1 exit junk
					@if exist C:\ECUFiles\Programs\*.* copy /Y .\Target\DynoController_Rev1_011.srz C:\ECUFiles\Programs > NUL
							@if ERRORLEVEL 1 exit junk
					
				@"C:\Program Files (x86)\Woodward\DevelopmentTools\Toolchains\GCC\powerpc-eabi\4_4_0\\bin\nm.exe" -f sysv .\Target\DynoController_Rev1.elf > .\Target\DynoController_Rev1.sym
							@if ERRORLEVEL 1 exit junk
					
				@if exist "%MOTOCODER_DIR%\bin\ESTconvert.exe" "%MOTOCODER_DIR%\bin\ESTconvert.exe" .\Target\DynoController_Rev1.elf -b -c > NUL 2>&1
					
			
			@echo ### Successful Build with MotoCoder
		