#ifndef __c32_BuckyWagon_01_h__
#define __c32_BuckyWagon_01_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c32_setSimStateSideEffectsInfo;
  void *c32_testPointAddrMap[5];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int16_T c32_timer;
  boolean_T c32_isStable;
  uint8_T c32_doSetSimStateSideEffects;
  uint8_T c32_is_active_c32_BuckyWagon_01;
  uint8_T c32_is_c32_BuckyWagon_01;
  uint8_T c32_tp_CountDown;
  uint8_T c32_tp_Off;
  uint8_T c32_tp_On;
  uint8_T c32_tp_countUp;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c32_testPointMappingInfo;
} SFc32_BuckyWagon_01InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c32_BuckyWagon_01_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c32_BuckyWagon_01_get_check_sum(mxArray *plhs[]);
extern void c32_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
