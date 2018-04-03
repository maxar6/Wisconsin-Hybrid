#ifndef __c18_cx06_MA_h__
#define __c18_cx06_MA_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c18_setSimStateSideEffectsInfo;
  void *c18_testPointAddrMap[6];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c18_isStable;
  uint8_T c18_doSetSimStateSideEffects;
  uint8_T c18_is_active_c18_cx06_MA;
  uint8_T c18_is_c18_cx06_MA;
  uint8_T c18_tp_Idle;
  uint8_T c18_tp_Kill;
  uint8_T c18_tp_KillDelay;
  uint8_T c18_tp_Start;
  uint8_T c18_tp_StartDelay;
  uint8_T c18_tp_StartRetry;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c18_testPointMappingInfo;
} SFc18_cx06_MAInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c18_cx06_MA_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c18_cx06_MA_get_check_sum(mxArray *plhs[]);
extern void c18_cx06_MA_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
