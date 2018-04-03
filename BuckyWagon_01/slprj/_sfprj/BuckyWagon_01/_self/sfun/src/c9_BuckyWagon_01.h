#ifndef __c9_BuckyWagon_01_h__
#define __c9_BuckyWagon_01_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  real_T c9_brakeCounts;
  SimStruct *S;
  const mxArray *c9_setSimStateSideEffectsInfo;
  void *c9_testPointAddrMap[13];
  uint32_T c9_counts;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c9_isStable;
  uint8_T c9_doSetSimStateSideEffects;
  uint8_T c9_is_LowSpeedManeuvering;
  uint8_T c9_is_NormalDriving;
  uint8_T c9_is_active_c9_BuckyWagon_01;
  uint8_T c9_is_c9_BuckyWagon_01;
  uint8_T c9_tp_Braking;
  uint8_T c9_tp_Creeping;
  uint8_T c9_tp_Driving;
  uint8_T c9_tp_DrivingAndBrake;
  uint8_T c9_tp_Idle;
  uint8_T c9_tp_KeyUp;
  uint8_T c9_tp_LowSpeedManeuvering;
  uint8_T c9_tp_NormalDriving;
  uint8_T c9_tp_Reversing;
  uint8_T c9_tp_SlowingDown;
  uint8_T c9_tp_Stopping;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c9_testPointMappingInfo;
} SFc9_BuckyWagon_01InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c9_BuckyWagon_01_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c9_BuckyWagon_01_get_check_sum(mxArray *plhs[]);
extern void c9_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
