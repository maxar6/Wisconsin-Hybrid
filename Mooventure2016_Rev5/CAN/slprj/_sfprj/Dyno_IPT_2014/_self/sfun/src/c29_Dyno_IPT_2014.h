#ifndef __c29_Dyno_IPT_2014_h__
#define __c29_Dyno_IPT_2014_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c29_setSimStateSideEffectsInfo;
  void *c29_testPointAddrMap[3];
  uint32_T c29_count;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c29_isStable;
  uint8_T c29_doSetSimStateSideEffects;
  uint8_T c29_is_active_c29_Dyno_IPT_2014;
  uint8_T c29_is_c29_Dyno_IPT_2014;
  uint8_T c29_tp_StandBy;
  uint8_T c29_tp_TempCheck;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c29_testPointMappingInfo;
} SFc29_Dyno_IPT_2014InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c29_Dyno_IPT_2014_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c29_Dyno_IPT_2014_get_check_sum(mxArray *plhs[]);
extern void c29_Dyno_IPT_2014_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
