
				@if exist .\rtwtypes.h del /Q /F .\rtwtypes.h > NUL
							@if ERRORLEVEL 1 exit junk
					
				@if "%MOTOCODER_DIR%" NEQ "" goto got_motocoder
					@setlocal
					@set MOTOCODER_DIR=C:\PROGRA~2\Woodward\MCS\MotoHawk\2010A_~1.49\MOTOCO~1
					:got_motocoder
					
				@copy "LinkerDefinition_DEV.xml" "LinkerDefinition.xml" > NUL
							@if ERRORLEVEL 1 exit junk
					@copy "BaseEngineController_A02_DEV.ld" "BaseEngineController_A02.ld" > NUL
							@if ERRORLEVEL 1 exit junk
					
				
					@echo ### Generating MotoTune DLL
					@if exist .\TDB rmdir /Q /S .\TDB > NUL
							@if ERRORLEVEL 1 exit junk
					@mkdir .\TDB
							@if ERRORLEVEL 1 exit junk
					@copy "%MOTOCODER_DIR%\TDB\*.*" .\TDB > NUL
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\MotoParserXML.exe" /LIB /verbosity=7 /d="E:\Box\Box Sync\Wisconsin Hybrid\Mooventure\Mooventure Code\EngineController_Rev1\BaseEngineController_A02_Build" /d="C:\ProgramData\MotoHawk\2010a_sp1_49\Toolchains\7_10_0\rtw_lib_single\API" /d="C:\ProgramData\MotoHawk\2010a_sp1_49\Toolchains\7_10_0\rtw_lib_single\API\MPC555" /d="C:\PROGRA~2\Woodward\MCS\MotoHawk\2010A_~1.49\ControlCoreClassic\Framework\MultiTask\API" /d="C:\PROGRA~2\Woodward\MCS\MotoHawk\2010A_~1.49\ControlCoreClassic\GlobalDefinitions\MotoTron" /d="C:\PROGRA~2\Woodward\MCS\MotoHawk\2010A_~1.49\ControlCoreClassic\MotoTronProtocol\MultiTarget\API" /d="C:\PROGRA~2\Woodward\MCS\MotoHawk\2010A_~1.49\ControlCoreClassic\ModuleDefinitions\Motorola" /d="C:\PROGRA~2\Woodward\MCS\MotoHawk\2010A_~1.49\ControlCoreClassic\MotoTronSpecific\MultiTarget\API" /d="C:\PROGRA~2\Woodward\MCS\MotoHawk\2010A_~1.49\ControlCoreClassic\FileSystem\smxFFS\API" /d="C:\PROGRA~2\Woodward\MCS\MotoHawk\2010A_~1.49\ControlCoreClassic\FileSystem\ucFS\API" TDB/ParsedVardecs.xml
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\Transform" -o TDB/ParsedAndCCVardecs.xml TDB/ParsedVardecs.xml "%MOTOCODER_DIR%\Transforms\VarDecs_Merge.xsl" AdditionalVardecsXML="C:\PROGRA~2\Woodward\MCS\MotoHawk\2010A_~1.49\ControlCoreClassic\ControlCoreClassic_Vardecs.xml"
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\Transform" -o TDB/ParsedAndCombinedVardecs.xml TDB/ParsedAndCCVardecs.xml "%MOTOCODER_DIR%\Transforms\VarDecs_Merge.xsl" AdditionalVardecsXML="%cd%\MotoCoderVarDecs.xml"
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\Transform" -o TDB/BaseEngin_111.xml TDB/ParsedAndCombinedVardecs.xml "%MOTOCODER_DIR%\Transforms\VarDecs_Reorder.xsl" application-url="%CD%\ApplicationDescriptor.xml" maxTableSize=65535
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\Transform" TDB/BaseEngin_111.xml "%MOTOCODER_DIR%\Transforms\VarDecs_Transform.xsl" includeFiles="CommonInclude.h,BaseEngineController_A02.h,TDB_Includes.h" GenDLL=1 GenTDB=1
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\nant\bin\nant.exe" -buildfile:TDB\Database.build -D:required.installdir="C:\Program Files (x86)\Woodward\DevelopmentTools\Toolchains\GCC\win32-pe\4_4_0" -D:database.basename=BaseEngin_111 -q -nologo rebuild
							@if ERRORLEVEL 1 exit junk
					@echo ### Completed MotoTune DLL
							@if ERRORLEVEL 1 exit junk
					
				
					@echo ### Compiling and Linking
					@"%MOTOCODER_DIR%\bin\nant\bin\nant.exe" -buildfile:BaseEngineController_A02.build -nologo rebuild
							@if ERRORLEVEL 1 exit junk
					
				
					@echo ### Call MotoConvert
					@"%MOTOCODER_DIR%\bin\MotoConvert.exe" -project=MPC5xx -map=.\Target\BaseEngineController_A02.map -srec=.\Target\BaseEngineController_A02.run -tdbver=1 -tdb=EriRequestTableList -crctable=g_pCRCBlockPtr -InitialisedRAM=.fixed_ramcals,.fixed_romcals -InitialisedRAM=.ramcals,.romcals -InitialisedRAM=.sdata,.romsdata -out=BaseEngineController_A02.sr -TransformBetween=0x00400000-0x0041FFFF -TransformBetween=0x00000000-0x0006FFFF -toolchain=GCC -InitialisedRAM=.data,.romdata -encrypt=.\Target\BaseEngineController_A02_111.srz
							@if ERRORLEVEL 1 exit junk
					
				
					@echo ### Creating Build Statistics
					@"%MOTOCODER_DIR%\bin\MotoElfParser.exe" -i "Target\BaseEngineController_A02.elf" -o "Target\BaseEngineController_A02_elf.xml"
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\Transform.exe" -o "Target\BaseEngineController_A02_symbols.xml" "Target\BaseEngineController_A02_elf.xml" "%MOTOCODER_DIR%\Transforms\BuildStats_IntermediateGenerate.xsl" LinkerDefinitionXML="%cd%\LinkerDefinition.xml"
							@if ERRORLEVEL 1 exit junk
					@"%MOTOCODER_DIR%\bin\Transform.exe" "Target\BaseEngineController_A02_symbols.xml" "%MOTOCODER_DIR%\Transforms\BuildStats_Print.xsl" BuildStatsSymbolsXML="%cd%\BuildStatsSymbols.xml"
							@if ERRORLEVEL 1 exit junk
					
				
					@echo ### Copy BaseEngin_111.dll and BaseEngineController_A02_111.srz
					@if exist C:\ECUFiles\TDBDLL\\*.* copy /Y .\TDB\BaseEngin_111.dll C:\ECUFiles\TDBDLL\ > NUL
							@if ERRORLEVEL 1 exit junk
					@if exist C:\ECUFiles\Programs\*.* copy /Y .\Target\BaseEngineController_A02_111.srz C:\ECUFiles\Programs > NUL
							@if ERRORLEVEL 1 exit junk
					
				@"C:\Program Files (x86)\Woodward\DevelopmentTools\Toolchains\GCC\powerpc-eabi\4_4_0\\bin\nm.exe" -f sysv .\Target\BaseEngineController_A02.elf > .\Target\BaseEngineController_A02.sym
							@if ERRORLEVEL 1 exit junk
					
				@if exist "%MOTOCODER_DIR%\bin\ESTconvert.exe" "%MOTOCODER_DIR%\bin\ESTconvert.exe" .\Target\BaseEngineController_A02.elf -b -c > NUL 2>&1
					
			
			@echo ### Successful Build with MotoCoder
		