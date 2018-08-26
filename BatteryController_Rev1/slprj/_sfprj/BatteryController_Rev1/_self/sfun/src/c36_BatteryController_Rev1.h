#ifndef __c36_BatteryController_Rev1_h__
#define __c36_BatteryController_Rev1_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  real_T c36_count;
  SimStruct *S;
  const mxArray *c36_setSimStateSideEffectsInfo;
  int32_T c36_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c36_isStable;
  uint8_T c36_doSetSimStateSideEffects;
  uint8_T c36_is_active_c36_BatteryController_Rev1;
  uint8_T c36_is_c36_BatteryController_Rev1;
  uint8_T c36_tp_Clear;
  uint8_T c36_tp_Counting;
  uint8_T c36_tp_Init;
  uint8_T c36_tp_Write;
  ChartInfoStruct chartInfo;
} SFc36_BatteryController_Rev1InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c36_BatteryController_Rev1_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c36_BatteryController_Rev1_get_check_sum(mxArray *plhs[]);
extern void c36_BatteryController_Rev1_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
