#ifndef __c13_cx06_MA_h__
#define __c13_cx06_MA_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c13_setSimStateSideEffectsInfo;
  void *c13_testPointAddrMap[6];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c13_isStable;
  uint8_T c13_doSetSimStateSideEffects;
  uint8_T c13_is_active_c13_cx06_MA;
  uint8_T c13_is_c13_cx06_MA;
  uint8_T c13_tp_Error;
  uint8_T c13_tp_Lean;
  uint8_T c13_tp_Lean2Rich;
  uint8_T c13_tp_Neutral;
  uint8_T c13_tp_Rich;
  uint8_T c13_tp_Rich2Lean;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c13_testPointMappingInfo;
} SFc13_cx06_MAInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c13_cx06_MA_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c13_cx06_MA_get_check_sum(mxArray *plhs[]);
extern void c13_cx06_MA_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
