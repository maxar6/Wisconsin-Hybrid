#ifndef __c1_BuckyWagon_01_h__
#define __c1_BuckyWagon_01_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  real_T c1_timer;
  SimStruct *S;
  const mxArray *c1_setSimStateSideEffectsInfo;
  void *c1_testPointAddrMap[9];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c1_isStable;
  uint8_T c1_doSetSimStateSideEffects;
  uint8_T c1_is_ButtonDebounce;
  uint8_T c1_is_ReverseLogic;
  uint8_T c1_is_active_ButtonDebounce;
  uint8_T c1_is_active_ReverseLogic;
  uint8_T c1_is_active_c1_BuckyWagon_01;
  uint8_T c1_is_c1_BuckyWagon_01;
  uint8_T c1_tp_ButtonDebounce;
  uint8_T c1_tp_Forward;
  uint8_T c1_tp_Main;
  uint8_T c1_tp_Reverse;
  uint8_T c1_tp_ReverseLogic;
  uint8_T c1_tp_TransistionOff;
  uint8_T c1_tp_TransistionOn;
  uint8_T c1_tp_waitRelease;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c1_testPointMappingInfo;
} SFc1_BuckyWagon_01InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_BuckyWagon_01_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c1_BuckyWagon_01_get_check_sum(mxArray *plhs[]);
extern void c1_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
