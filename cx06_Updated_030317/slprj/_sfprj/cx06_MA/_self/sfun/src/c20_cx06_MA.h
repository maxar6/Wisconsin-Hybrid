#ifndef __c20_cx06_MA_h__
#define __c20_cx06_MA_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c20_setSimStateSideEffectsInfo;
  void *c20_testPointAddrMap[7];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c20_isStable;
  uint8_T c20_doSetSimStateSideEffects;
  uint8_T c20_is_active_c20_cx06_MA;
  uint8_T c20_is_c20_cx06_MA;
  uint8_T c20_tp_FalseStart;
  uint8_T c20_tp_Idle;
  uint8_T c20_tp_Kill;
  uint8_T c20_tp_KillDelay;
  uint8_T c20_tp_Start;
  uint8_T c20_tp_StartDelay;
  uint8_T c20_tp_StartRetry;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c20_testPointMappingInfo;
} SFc20_cx06_MAInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c20_cx06_MA_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c20_cx06_MA_get_check_sum(mxArray *plhs[]);
extern void c20_cx06_MA_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
