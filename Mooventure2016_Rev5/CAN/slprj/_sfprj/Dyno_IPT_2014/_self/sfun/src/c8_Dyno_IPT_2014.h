#ifndef __c8_Dyno_IPT_2014_h__
#define __c8_Dyno_IPT_2014_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c8_setSimStateSideEffectsInfo;
  void *c8_testPointAddrMap[2];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c8_isStable;
  uint8_T c8_doSetSimStateSideEffects;
  uint8_T c8_is_active_c8_Dyno_IPT_2014;
  uint8_T c8_is_c8_Dyno_IPT_2014;
  uint8_T c8_tp_standby;
  uint8_T c8_tp_turbo_needed;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c8_testPointMappingInfo;
} SFc8_Dyno_IPT_2014InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c8_Dyno_IPT_2014_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c8_Dyno_IPT_2014_get_check_sum(mxArray *plhs[]);
extern void c8_Dyno_IPT_2014_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
