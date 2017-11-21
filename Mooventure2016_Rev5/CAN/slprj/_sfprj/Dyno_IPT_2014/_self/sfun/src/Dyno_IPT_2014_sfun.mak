# ------------------- Required for MSVC nmake ---------------------------------
# This file should be included at the top of a MAKEFILE as follows:


!include <ntwin32.mak>

MACHINE     = Dyno_IPT_2014
TARGET      = sfun
CHART_SRCS 	= \
     c1_Dyno_IPT_2014.c\
     c2_Dyno_IPT_2014.c\
     c3_Dyno_IPT_2014.c\
     c4_Dyno_IPT_2014.c\
     c8_Dyno_IPT_2014.c\
     c18_Dyno_IPT_2014.c\
     c20_Dyno_IPT_2014.c\
     c21_Dyno_IPT_2014.c\
     c23_Dyno_IPT_2014.c\
     c29_Dyno_IPT_2014.c
MACHINE_SRC	= Dyno_IPT_2014_sfun.c
MACHINE_REG = Dyno_IPT_2014_sfun_registry.c
MEX_WRAPPER =
MAKEFILE    = Dyno_IPT_2014_sfun.mak
MATLAB_ROOT	= c:\program files (x86)\matlab\r2010a
BUILDARGS   =

#--------------------------- Tool Specifications ------------------------------
#
#
MSVC_ROOT1 = $(MSDEVDIR:SharedIDE=vc)
MSVC_ROOT2 = $(MSVC_ROOT1:SHAREDIDE=vc)
MSVC_ROOT  = $(MSVC_ROOT2:sharedide=vc)

# Compiler tool locations, CC, LD, LIBCMD:
CC     = cl.exe
LD     = link.exe
LIBCMD = lib.exe
#------------------------------ Include/Lib Path ------------------------------

USER_INCLUDES   = 
AUX_INCLUDES   = 
ML_INCLUDES     = /I "$(MATLAB_ROOT)\extern\include"
SL_INCLUDES     = /I "$(MATLAB_ROOT)\simulink\include"
SF_INCLUDES     = /I "c:\program files (x86)\matlab\r2010a\stateflow\c\mex\include" /I "c:\program files (x86)\matlab\r2010a\stateflow\c\debugger\include"

DSP_INCLUDES    =

COMPILER_INCLUDES = /I "$(MSVC_ROOT)\include"

INCLUDE_PATH = $(USER_INCLUDES) $(AUX_INCLUDES) $(ML_INCLUDES) $(SL_INCLUDES) $(SF_INCLUDES) $(DSP_INCLUDES)
LIB_PATH     = "$(MSVC_ROOT)\lib"

CFLAGS = $(COMPFLAGS) /MD
LDFLAGS = /nologo /dll /OPT:NOREF /export:mexFunction
AUXLDFLAGS = 

#----------------------------- Source Files -----------------------------------

REQ_SRCS  = $(MACHINE_SRC) $(MACHINE_REG) $(MEX_WRAPPER) $(CHART_SRCS)

USER_ABS_OBJS =

AUX_ABS_OBJS =

REQ_OBJS = $(REQ_SRCS:.cpp=.obj)
REQ_OBJS2 = $(REQ_OBJS:.c=.obj)
OBJS = $(REQ_OBJS2) $(USER_ABS_OBJS) $(AUX_ABS_OBJS)
OBJLIST_FILE = Dyno_IPT_2014_sfun.mol
SFCLIB = "c:\program files (x86)\matlab\r2010a\stateflow\c\mex\lib\win32\sfc_mexmsvc80.lib" "c:\program files (x86)\matlab\r2010a\stateflow\c\debugger\lib\win32\sfc_debugmsvc80.lib"
AUX_LNK_OBJS =
USER_LIBS =
LINK_MACHINE_LIBS =

DSP_LIBS    =
BLAS_LIBS   = "c:\program files (x86)\matlab\r2010a\extern\lib\win32\microsoft\libmwblascompat32.lib"

#--------------------------------- Rules --------------------------------------

MEX_FILE_NAME_WO_EXT = $(MACHINE)_$(TARGET)
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw32
MEX_FILE_CSF =
all : $(MEX_FILE_NAME) $(MEX_FILE_CSF)

MEXLIB = "C:\Program Files (x86)\MATLAB\R2010a\extern\lib\win32\microsoft\libmx.lib" "C:\Program Files (x86)\MATLAB\R2010a\extern\lib\win32\microsoft\libmex.lib" "C:\Program Files (x86)\MATLAB\R2010a\extern\lib\win32\microsoft\libmat.lib" "C:\Program Files (x86)\MATLAB\R2010a\extern\lib\win32\microsoft\libfixedpoint.lib" "C:\Program Files (x86)\MATLAB\R2010a\extern\lib\win32\microsoft\libut.lib" "C:\Program Files (x86)\MATLAB\R2010a\extern\lib\win32\microsoft\libmwmathutil.lib" "C:\Program Files (x86)\MATLAB\R2010a\extern\lib\win32\microsoft\libemlrt.lib" "c:\program files (x86)\matlab\r2010a\lib\win32\libippmwipt.lib"

$(MEX_FILE_NAME) : $(MAKEFILE) $(OBJS) $(SFCLIB) $(AUX_LNK_OBJS) $(USER_LIBS)
	@echo ### Linking ...
	$(LD) $(LDFLAGS) $(AUXLDFLAGS) /OUT:$(MEX_FILE_NAME) /map:"$(MEX_FILE_NAME_WO_EXT).map" $(USER_LIBS) $(SFCLIB) $(AUX_LNK_OBJS) $(MEXLIB) $(LINK_MACHINE_LIBS) $(DSP_LIBS) $(BLAS_LIBS) @$(OBJLIST_FILE)
     mt -outputresource:"$(MEX_FILE_NAME);2" -manifest "$(MEX_FILE_NAME).manifest"
	@echo ### Created $@

.c.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

.cpp.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

