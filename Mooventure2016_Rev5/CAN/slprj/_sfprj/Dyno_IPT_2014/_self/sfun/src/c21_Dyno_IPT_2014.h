#ifndef __c21_Dyno_IPT_2014_h__
#define __c21_Dyno_IPT_2014_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  real_T c21_count;
  SimStruct *S;
  const mxArray *c21_setSimStateSideEffectsInfo;
  void *c21_testPointAddrMap[4];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c21_isStable;
  uint8_T c21_doSetSimStateSideEffects;
  uint8_T c21_is_active_c21_Dyno_IPT_2014;
  uint8_T c21_is_c21_Dyno_IPT_2014;
  uint8_T c21_tp_regen_induced_genset_disable;
  uint8_T c21_tp_reset_regen_engine_lockout_timer;
  uint8_T c21_tp_standby;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c21_testPointMappingInfo;
} SFc21_Dyno_IPT_2014InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c21_Dyno_IPT_2014_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c21_Dyno_IPT_2014_get_check_sum(mxArray *plhs[]);
extern void c21_Dyno_IPT_2014_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
