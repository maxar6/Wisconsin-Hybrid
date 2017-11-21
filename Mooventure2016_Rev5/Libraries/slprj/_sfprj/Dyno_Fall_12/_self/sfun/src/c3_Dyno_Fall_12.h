#ifndef __c3_Dyno_Fall_12_h__
#define __c3_Dyno_Fall_12_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c3_setSimStateSideEffectsInfo;
  void *c3_testPointAddrMap[4];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c3_isStable;
  uint8_T c3_doSetSimStateSideEffects;
  uint8_T c3_is_active_c3_Dyno_Fall_12;
  uint8_T c3_is_c3_Dyno_Fall_12;
  uint8_T c3_tp_Crank;
  uint8_T c3_tp_Genset_Disabled;
  uint8_T c3_tp_MotoringMode;
  uint8_T c3_tp_NormalRun;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c3_testPointMappingInfo;
} SFc3_Dyno_Fall_12InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c3_Dyno_Fall_12_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_Dyno_Fall_12_get_check_sum(mxArray *plhs[]);
extern void c3_Dyno_Fall_12_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
