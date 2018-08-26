#ifndef __c4_BatteryController_Rev1_h__
#define __c4_BatteryController_Rev1_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  real_T c4_tick;
  SimStruct *S;
  const mxArray *c4_setSimStateSideEffectsInfo;
  int32_T c4_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c4_isStable;
  uint8_T c4_doSetSimStateSideEffects;
  uint8_T c4_is_active_c4_BatteryController_Rev1;
  uint8_T c4_is_c4_BatteryController_Rev1;
  uint8_T c4_tp_Counting;
  uint8_T c4_tp_HighAmpearge;
  uint8_T c4_tp_LowAmperage;
  ChartInfoStruct chartInfo;
} SFc4_BatteryController_Rev1InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c4_BatteryController_Rev1_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c4_BatteryController_Rev1_get_check_sum(mxArray *plhs[]);
extern void c4_BatteryController_Rev1_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
