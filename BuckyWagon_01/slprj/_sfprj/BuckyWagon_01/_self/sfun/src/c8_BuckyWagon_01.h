#ifndef __c8_BuckyWagon_01_h__
#define __c8_BuckyWagon_01_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c8_setSimStateSideEffectsInfo;
  int32_T c8_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c8_isStable;
  uint8_T c8_doSetSimStateSideEffects;
  uint8_T c8_is_active_c8_BuckyWagon_01;
  uint8_T c8_is_c8_BuckyWagon_01;
  uint8_T c8_tp_Complete;
  uint8_T c8_tp_ConstantVoltageCharge;
  uint8_T c8_tp_StartupDelay;
  uint8_T c8_tp_Wait;
  uint8_T c8_tp_waitEnd;
  ChartInfoStruct chartInfo;
} SFc8_BuckyWagon_01InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c8_BuckyWagon_01_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c8_BuckyWagon_01_get_check_sum(mxArray *plhs[]);
extern void c8_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
