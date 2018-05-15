#ifndef __c10_BuckyWagon_01_h__
#define __c10_BuckyWagon_01_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c10_setSimStateSideEffectsInfo;
  int32_T c10_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int16_T c10_timer;
  boolean_T c10_isStable;
  uint8_T c10_doSetSimStateSideEffects;
  uint8_T c10_is_active_c10_BuckyWagon_01;
  uint8_T c10_is_c10_BuckyWagon_01;
  uint8_T c10_tp_CountDown;
  uint8_T c10_tp_Off;
  uint8_T c10_tp_On;
  uint8_T c10_tp_countUp;
  ChartInfoStruct chartInfo;
} SFc10_BuckyWagon_01InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c10_BuckyWagon_01_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c10_BuckyWagon_01_get_check_sum(mxArray *plhs[]);
extern void c10_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
