#ifndef __c8_BatteryController_Rev1_h__
#define __c8_BatteryController_Rev1_h__

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
  uint8_T c8_is_active_c8_BatteryController_Rev1;
  uint8_T c8_is_c8_BatteryController_Rev1;
  uint8_T c8_tp_Delay3;
  uint8_T c8_tp_Delay51;
  uint8_T c8_tp_Delay52;
  uint8_T c8_tp_Failed;
  uint8_T c8_tp_Init;
  uint8_T c8_tp_Precharging;
  uint8_T c8_tp_Successful;
  uint8_T c8_tp_Wait1;
  uint8_T c8_tp_Wait2;
  uint8_T c8_tp_Wait3;
  ChartInfoStruct chartInfo;
} SFc8_BatteryController_Rev1InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c8_BatteryController_Rev1_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c8_BatteryController_Rev1_get_check_sum(mxArray *plhs[]);
extern void c8_BatteryController_Rev1_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
