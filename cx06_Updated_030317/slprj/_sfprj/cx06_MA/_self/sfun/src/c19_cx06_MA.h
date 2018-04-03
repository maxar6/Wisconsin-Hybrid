#ifndef __c19_cx06_MA_h__
#define __c19_cx06_MA_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c19_setSimStateSideEffectsInfo;
  void *c19_testPointAddrMap[2];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c19_isStable;
  uint8_T c19_doSetSimStateSideEffects;
  uint8_T c19_is_active_c19_cx06_MA;
  uint8_T c19_is_c19_cx06_MA;
  uint8_T c19_tp_Active;
  uint8_T c19_tp_Passthrough;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c19_testPointMappingInfo;
} SFc19_cx06_MAInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c19_cx06_MA_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c19_cx06_MA_get_check_sum(mxArray *plhs[]);
extern void c19_cx06_MA_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
