#ifndef __c4_Mooventure2016_Rev5_h__
#define __c4_Mooventure2016_Rev5_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  real_T c4_count;
  real_T c4_maxVal;
  real_T c4_minVal;
  SimStruct *S;
  const mxArray *c4_setSimStateSideEffectsInfo;
  int32_T c4_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c4_isStable;
  uint8_T c4_b_tp_Closed;
  uint8_T c4_b_tp_Off;
  uint8_T c4_b_tp_On;
  uint8_T c4_b_tp_Open;
  uint8_T c4_doSetSimStateSideEffects;
  uint8_T c4_is_CoreBlend;
  uint8_T c4_is_CorePump;
  uint8_T c4_is_Fan;
  uint8_T c4_is_Heater;
  uint8_T c4_is_RadBlend;
  uint8_T c4_is_RadPump;
  uint8_T c4_is_System_Cold;
  uint8_T c4_is_Use_Wants_Heat;
  uint8_T c4_is_active_CoreBlend;
  uint8_T c4_is_active_CorePump;
  uint8_T c4_is_active_Fan;
  uint8_T c4_is_active_Heater;
  uint8_T c4_is_active_RadBlend;
  uint8_T c4_is_active_RadPump;
  uint8_T c4_is_active_c4_Mooventure2016_Rev5;
  uint8_T c4_is_c4_Mooventure2016_Rev5;
  uint8_T c4_tp_Closed;
  uint8_T c4_tp_CoreBlend;
  uint8_T c4_tp_CorePump;
  uint8_T c4_tp_Fan;
  uint8_T c4_tp_FanHigh;
  uint8_T c4_tp_FanLow;
  uint8_T c4_tp_FanMed;
  uint8_T c4_tp_FanOff;
  uint8_T c4_tp_Heat_0;
  uint8_T c4_tp_Heat_1;
  uint8_T c4_tp_Heat_1H;
  uint8_T c4_tp_Heat_2;
  uint8_T c4_tp_Heat_2H;
  uint8_T c4_tp_Heat_3;
  uint8_T c4_tp_Heat_3H;
  uint8_T c4_tp_Heat_4;
  uint8_T c4_tp_Heat_4H;
  uint8_T c4_tp_Heater;
  uint8_T c4_tp_Master;
  uint8_T c4_tp_Off;
  uint8_T c4_tp_On;
  uint8_T c4_tp_Open;
  uint8_T c4_tp_RadBlend;
  uint8_T c4_tp_RadPump;
  uint8_T c4_tp_System_Cold;
  uint8_T c4_tp_Use_Wants_Heat;
  uint8_T c4_tp_initialize_done;
  uint8_T c4_tp_initialize_off;
  uint8_T c4_tp_initialize_on;
  ChartInfoStruct chartInfo;
} SFc4_Mooventure2016_Rev5InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c4_Mooventure2016_Rev5_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c4_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
extern void c4_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
