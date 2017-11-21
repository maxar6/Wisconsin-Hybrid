#ifndef __c4_Mooventure2016_Rev5_h__
#define __c4_Mooventure2016_Rev5_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c4_setSimStateSideEffectsInfo;
  int32_T c4_motorcount;
  int32_T c4_sfEvent;
  uint32_T c4_elapsedTicks;
  uint32_T c4_presentTicks;
  uint32_T c4_previousTicks;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c4_isStable;
  uint8_T c4_doSetSimStateSideEffects;
  uint8_T c4_is_active_c4_Mooventure2016_Rev5;
  uint8_T c4_is_c4_Mooventure2016_Rev5;
  uint8_T c4_temporalCounter_i1;
  uint8_T c4_tp_IPTAwake;
  uint8_T c4_tp_IPTEnable;
  uint8_T c4_tp_Init;
  uint8_T c4_tp_MotorDisabled;
  uint8_T c4_tp_MotorEnabled;
  uint8_T c4_tp_TimerRunningOne;
  uint8_T c4_tp_TimerRunningTwo;
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
