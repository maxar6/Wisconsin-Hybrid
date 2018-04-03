#ifndef __c17_cx06_MA_h__
#define __c17_cx06_MA_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c17_setSimStateSideEffectsInfo;
  void *c17_testPointAddrMap[2];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c17_isStable;
  uint8_T c17_doSetSimStateSideEffects;
  uint8_T c17_is_active_c17_cx06_MA;
  uint8_T c17_is_c17_cx06_MA;
  uint8_T c17_tp_NotRunning;
  uint8_T c17_tp_Running;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c17_testPointMappingInfo;
} SFc17_cx06_MAInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c17_cx06_MA_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c17_cx06_MA_get_check_sum(mxArray *plhs[]);
extern void c17_cx06_MA_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
