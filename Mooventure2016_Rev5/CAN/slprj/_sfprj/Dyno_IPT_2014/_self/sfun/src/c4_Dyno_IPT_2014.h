#ifndef __c4_Dyno_IPT_2014_h__
#define __c4_Dyno_IPT_2014_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c4_setSimStateSideEffectsInfo;
  void *c4_testPointAddrMap[9];
  int32_T c4_cnt;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c4_isStable;
  uint8_T c4_doSetSimStateSideEffects;
  uint8_T c4_is_active_c4_Dyno_IPT_2014;
  uint8_T c4_is_c4_Dyno_IPT_2014;
  uint8_T c4_tp_All_on;
  uint8_T c4_tp_PrcFault;
  uint8_T c4_tp_RunTime;
  uint8_T c4_tp_ShutDownFinal;
  uint8_T c4_tp_ShutdownOne;
  uint8_T c4_tp_StandBy;
  uint8_T c4_tp_StartUpFull;
  uint8_T c4_tp_StartUpPre;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c4_testPointMappingInfo;
} SFc4_Dyno_IPT_2014InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c4_Dyno_IPT_2014_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c4_Dyno_IPT_2014_get_check_sum(mxArray *plhs[]);
extern void c4_Dyno_IPT_2014_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
