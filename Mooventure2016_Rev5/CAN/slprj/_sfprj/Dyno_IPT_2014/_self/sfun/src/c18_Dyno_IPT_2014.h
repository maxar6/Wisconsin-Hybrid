#ifndef __c18_Dyno_IPT_2014_h__
#define __c18_Dyno_IPT_2014_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  real_T c18_count;
  SimStruct *S;
  const mxArray *c18_setSimStateSideEffectsInfo;
  void *c18_testPointAddrMap[10];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c18_isStable;
  uint8_T c18_doSetSimStateSideEffects;
  uint8_T c18_is_Running;
  uint8_T c18_is_active_c18_Dyno_IPT_2014;
  uint8_T c18_is_c18_Dyno_IPT_2014;
  uint8_T c18_tp_Crank1;
  uint8_T c18_tp_Diesel;
  uint8_T c18_tp_Disabled;
  uint8_T c18_tp_Motoring;
  uint8_T c18_tp_RCCI;
  uint8_T c18_tp_Running;
  uint8_T c18_tp_Warmup;
  uint8_T c18_tp_crank_timeout;
  uint8_T c18_tp_switch;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c18_testPointMappingInfo;
} SFc18_Dyno_IPT_2014InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c18_Dyno_IPT_2014_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c18_Dyno_IPT_2014_get_check_sum(mxArray *plhs[]);
extern void c18_Dyno_IPT_2014_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
