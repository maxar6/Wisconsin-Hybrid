#ifndef __c6_BuckyWagon_01_h__
#define __c6_BuckyWagon_01_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c6_setSimStateSideEffectsInfo;
  void *c6_testPointAddrMap[6];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c6_isStable;
  uint8_T c6_doSetSimStateSideEffects;
  uint8_T c6_is_active_c6_BuckyWagon_01;
  uint8_T c6_is_c6_BuckyWagon_01;
  uint8_T c6_tp_CruiseDisabled;
  uint8_T c6_tp_CruiseOff;
  uint8_T c6_tp_CruiseOn;
  uint8_T c6_tp_PressOne;
  uint8_T c6_tp_PressTwo;
  uint8_T c6_tp_WaitOne;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c6_testPointMappingInfo;
} SFc6_BuckyWagon_01InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c6_BuckyWagon_01_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c6_BuckyWagon_01_get_check_sum(mxArray *plhs[]);
extern void c6_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
