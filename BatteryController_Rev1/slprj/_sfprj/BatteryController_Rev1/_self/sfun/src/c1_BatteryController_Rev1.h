#ifndef __c1_BatteryController_Rev1_h__
#define __c1_BatteryController_Rev1_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  real_T c1_Freq;
  SimStruct *S;
  const mxArray *c1_setSimStateSideEffectsInfo;
  int32_T c1_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c1_isStable;
  uint8_T c1_doSetSimStateSideEffects;
  uint8_T c1_is_active_c1_BatteryController_Rev1;
  uint8_T c1_is_c1_BatteryController_Rev1;
  uint8_T c1_tp_BatteryDisabled;
  uint8_T c1_tp_BatteryOn;
  uint8_T c1_tp_PreChargeEntry;
  uint8_T c1_tp_PreChargeNeg;
  uint8_T c1_tp_PreChargePos;
  ChartInfoStruct chartInfo;
} SFc1_BatteryController_Rev1InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c1_BatteryController_Rev1_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c1_BatteryController_Rev1_get_check_sum(mxArray *plhs[]);
extern void c1_BatteryController_Rev1_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
