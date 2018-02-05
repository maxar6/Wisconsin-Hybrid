#define S_FUNCTION_NAME motohawk_sfun_mototune_protocol
#define NUM_PARAMS	1
#define NUM_INPUTS	9
#define NUM_OUTPUTS	0
#undef FUNCTION_TRIGGER
#define EXTRA_INIT
#define NO_MDL_OUTPUTS
#define NO_INCLUDE_SIMULINK

#include "motohawk_mex_template.c"
#include "motohawk_mex_util_lib.c"

static void extraInit(SimStruct *S)
{
	int8_T i;
	ssSetInputPortDataType(S,0,SS_BOOLEAN);
	ssSetInputPortDataType(S,1,SS_UINT32);
	ssSetInputPortDataType(S,2,SS_BOOLEAN);
	ssSetInputPortDataType(S,3,SS_UINT32);
	ssSetInputPortDataType(S,4,SS_UINT8);
	ssSetInputPortDataType(S,5,SS_UINT8);
	ssSetInputPortWidth(S,5,8);
	ssSetInputPortDataType(S,6,SS_BOOLEAN);
	ssSetInputPortDataType(S,7,SS_UINT32);
	ssSetInputPortDataType(S,8,SS_UINT8);

	/* These inputs can't be automatic */	
	ssSetInputPortOverWritable(S, 6, 0);
	ssSetInputPortReusable(S, 6, 0);
	ssSetInputPortOverWritable(S, 7, 0);
	ssSetInputPortReusable(S, 7, 0);
	ssSetInputPortOverWritable(S, 8, 0);
	ssSetInputPortReusable(S, 8, 0);

}



static void mdlOutputs(SimStruct *S, int_T tid)
{
}


#include "motohawk_mex_template_end.c"
