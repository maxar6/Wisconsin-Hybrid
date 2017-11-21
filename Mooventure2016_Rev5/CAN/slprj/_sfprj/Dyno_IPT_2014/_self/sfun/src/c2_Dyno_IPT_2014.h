#ifndef __c2_Dyno_IPT_2014_h__
#define __c2_Dyno_IPT_2014_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  real_T c2_count;
  real_T c2_timeouts;
  SimStruct *S;
  const mxArray *c2_setSimStateSideEffectsInfo;
  void *c2_testPointAddrMap[7];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c2_isStable;
  uint8_T c2_doSetSimStateSideEffects;
  uint8_T c2_is_active_c2_Dyno_IPT_2014;
  uint8_T c2_is_c2_Dyno_IPT_2014;
  uint8_T c2_tp_genset_standingby;
  uint8_T c2_tp_init;
  uint8_T c2_tp_successful_start;
  uint8_T c2_tp_timed_out;
  uint8_T c2_tp_too_many_timeouts;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c2_testPointMappingInfo;
} SFc2_Dyno_IPT_2014InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c2_Dyno_IPT_2014_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_Dyno_IPT_2014_get_check_sum(mxArray *plhs[]);
extern void c2_Dyno_IPT_2014_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
