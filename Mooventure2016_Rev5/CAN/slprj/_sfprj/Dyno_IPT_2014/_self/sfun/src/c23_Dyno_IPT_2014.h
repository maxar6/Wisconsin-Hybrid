#ifndef __c23_Dyno_IPT_2014_h__
#define __c23_Dyno_IPT_2014_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c23_setSimStateSideEffectsInfo;
  void *c23_testPointAddrMap[2];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c23_isStable;
  uint8_T c23_doSetSimStateSideEffects;
  uint8_T c23_is_active_c23_Dyno_IPT_2014;
  uint8_T c23_is_c23_Dyno_IPT_2014;
  uint8_T c23_tp_standby;
  uint8_T c23_tp_turbo_needed;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c23_testPointMappingInfo;
} SFc23_Dyno_IPT_2014InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c23_Dyno_IPT_2014_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c23_Dyno_IPT_2014_get_check_sum(mxArray *plhs[]);
extern void c23_Dyno_IPT_2014_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
