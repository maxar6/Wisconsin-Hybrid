#ifndef __c28_Mooventure2016_Rev5_h__
#define __c28_Mooventure2016_Rev5_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c28_setSimStateSideEffectsInfo;
  int32_T c28_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c28_isStable;
  uint8_T c28_doSetSimStateSideEffects;
  uint8_T c28_is_active_c28_Mooventure2016_Rev5;
  uint8_T c28_is_c28_Mooventure2016_Rev5;
  uint8_T c28_tp_INIT;
  uint8_T c28_tp_MotorRunning;
  uint8_T c28_tp_PowerSteeringOff;
  uint8_T c28_tp_PowerSteeringOn;
  ChartInfoStruct chartInfo;
} SFc28_Mooventure2016_Rev5InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c28_Mooventure2016_Rev5_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c28_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
extern void c28_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
