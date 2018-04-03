#ifndef __c11_cx06_MA_h__
#define __c11_cx06_MA_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c11_setSimStateSideEffectsInfo;
  void *c11_testPointAddrMap[2];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c11_isStable;
  uint8_T c11_doSetSimStateSideEffects;
  uint8_T c11_is_active_c11_cx06_MA;
  uint8_T c11_is_c11_cx06_MA;
  uint8_T c11_tp_Off;
  uint8_T c11_tp_On;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c11_testPointMappingInfo;
} SFc11_cx06_MAInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c11_cx06_MA_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c11_cx06_MA_get_check_sum(mxArray *plhs[]);
extern void c11_cx06_MA_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
