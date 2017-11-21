#ifndef __c3_Dyno_IPT_2014_h__
#define __c3_Dyno_IPT_2014_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  real_T c3_count;
  real_T c3_target_SOC;
  real_T c3_wascharging;
  SimStruct *S;
  const mxArray *c3_setSimStateSideEffectsInfo;
  void *c3_testPointAddrMap[17];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c3_isStable;
  uint8_T c3_b_tp_charge;
  uint8_T c3_b_tp_enter;
  uint8_T c3_b_tp_standby;
  uint8_T c3_c_tp_charge;
  uint8_T c3_c_tp_standby;
  uint8_T c3_doSetSimStateSideEffects;
  uint8_T c3_is_active_c3_Dyno_IPT_2014;
  uint8_T c3_is_c3_Dyno_IPT_2014;
  uint8_T c3_is_fill;
  uint8_T c3_is_standard;
  uint8_T c3_is_sustain;
  uint8_T c3_tp_Locked_target;
  uint8_T c3_tp_charge;
  uint8_T c3_tp_enter;
  uint8_T c3_tp_fill;
  uint8_T c3_tp_init;
  uint8_T c3_tp_set_target;
  uint8_T c3_tp_standard;
  uint8_T c3_tp_standby;
  uint8_T c3_tp_sustain;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c3_testPointMappingInfo;
} SFc3_Dyno_IPT_2014InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c3_Dyno_IPT_2014_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_Dyno_IPT_2014_get_check_sum(mxArray *plhs[]);
extern void c3_Dyno_IPT_2014_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
