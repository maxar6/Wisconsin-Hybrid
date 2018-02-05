#---------------------------------------------------------
# 
# Copyright (c) 2002-2009, Woodward
# All Rights Reserved
#
#-------------------------------------------------------%/
#
# File    : BaseEngineController_A02.mk   
#
# 	This makefile attempts to conform to the guidelines specified in the
# 	IEEE Std 1003.2-1992 (POSIX) standard. It is designed to be used
#       with GNU Make (gmake) which is located in matlabroot/rtw/bin/win32.
#
# 	Note that this template is automatically customized by the Real-Time
#	Workshop build procedure to create "<model>.mk"
#
#       file that contains 'rtwgensettings.BuildDirSuffix' see grt.tlc
#------------------------ Macros read by make_rtw ------------------------------
#
# The following macros are read by the Real-Time Workshop build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the Real-Time Workshop build procedure
#                    (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.

MAKECMD         = "%GMAKE_DIR%/gmake"
HOST            = PC
BUILD           = yes
SYS_TARGET_FILE = motohawk_ert_rtw.tlc
SHELL           = cmd

#---------------------- Tokens expanded by make_rtw ----------------------------
#
# The following tokens, when wrapped with "|>" and "|<" are expanded by the
# Real-Time Workshop build procedure.
#
#  MODEL_NAME      - Name of the Simulink block diagram
#  MODEL_MODULES   - Any additional generated source modules
#  MAKEFILE_NAME   - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT     - Path to were MATLAB is installed.
#  MATLAB_BIN      - Path to MATLAB executable.
#  S_FUNCTIONS     - List of S-functions.
#  S_FUNCTIONS_LIB - List of S-functions libraries to link. 
#  SOLVER          - Solver source file name
#  NUMST           - Number of sample times
#  TID01EQ         - yes (1) or no (0): Are sampling rates of continuous task
#                    (tid=0) and 1st discrete task equal.
#  NCSTATES        - Number of continuous states
#  BUILDARGS       - Options passed in at the command line.
#  MULTITASKING    - yes (1) or no (0): Is solver mode multitasking
#  EXT_MODE        - yes (1) or no (0): Build for external mode


MODEL           = BaseEngineController_A02
MODULES         = AppMonitor.c Application.c ApplicationSecurity.c BaseEngineController_A02_IdleStateMachine.c BaseEngineController_A02_data.c CANReceiveDispatcher.c EncoderCallback.c FaultManager.c Foreground.c IOCallbacks.c InjectorSequenceCallback_41.c MotoHawk_CAN.c MotoHawk_DataStores.c MotoHawk_IO.c TableLookupFunctions.c Trigger_BGND_BASE_PERIODIC_9474p0004.c Trigger_BGND_BASEx20_PERIODIC_6201p0004.c Trigger_CAN_RX_BusCAN_1_Buf1.c Trigger_CAN_RX_BusCAN_2_Buf14.c Trigger_Encoder_Fault_31.c Trigger_FGND_5XRTI_PERIODIC_1407p0004.c Trigger_FGND_5XRTI_PERIODIC_1408p0004.c Trigger_FGND_5XRTI_PERIODIC_4476p0004.c Trigger_FGND_5XRTI_PERIODIC_8397p0001.c Trigger_FGND_5XRTI_PERIODIC_9202p0004.c Trigger_FGND_MID_TDC_EVENT_8214p0001.c Trigger_FGND_RTI_PERIODIC_9480p0004.c Trigger_FGND_TDC1_EVENT_1155p0004.c Trigger_FGND_TDC_EVENT_7320p0004.c Trigger_FGND_TDC_EVENT_8688p0001.c Trigger_STARTUP_EVENT_8213p0001.c VarDecs.c rt_zcfcn.c 
MAKEFILE        = BaseEngineController_A02.mk
MATLAB_ROOT     = C:\Program Files (x86)\MATLAB\R2011a
S_FUNCTIONS     = 
S_FUNCTIONS_LIB = 
SOLVER          = 
NUMST           = 1
TID01EQ         = 0
NCSTATES        = 0
COMPUTER        = PCWIN
BUILDARGS       = ENABLE_BUILD=1 GENERATE_REPORT=0 INCLUDE_MDL_TERMINATE_FCN=1 COMBINE_OUTPUT_UPDATE_FCNS=1 MAT_FILE=0 MULTI_INSTANCE_CODE=0 INTEGER_CODE=0 PORTABLE_WORDSIZES=0 GENERATE_ERT_S_FUNCTION=0 EXT_MODE=0 EXTMODE_STATIC_ALLOC=0 EXTMODE_STATIC_ALLOC_SIZE=1000000 EXTMODE_TRANSPORT=0 TMW_EXTMODE_TESTING=0 MODELLIB=BaseEngineController_A02lib.lib RELATIVE_PATH_TO_ANCHOR=.. MODELREF_TARGET_TYPE=NONE
MULTITASKING    = 0
GENERATE_ASAP2	= 0

#-------------------- Parameters from motohawk_make_rtw ------------------------
# ENABLE_BUILD

#-------------------------- Directories and Files ------------------------------
TARGET =	.\Target\$(MODEL)
BUILD_SCRIPT =	build.bat

#----------------------------- Source Files ------------------------------------

APP_SRC =	$(MODEL).c \
			$(MODULES) \
			$(S_FUNCTIONS) \
    		$(SOLVER) \
			$(EXT_SRC)

export		# make all variables available to sub-makes

#--------------------------------- Rules ---------------------------------------

.PHONY:	BAD_TARGET_OPTION

###  Primary Target  ###
TARGET_UX =	$(subst \,/,$(TARGET))
.PHONY: $(TARGET_UX).srz
$(TARGET_UX).srz:
	@echo ### Created Code and Build Scripts.  Ready to Build ###


# EOF: BaseEngineController_A02.mk

