#ifndef __c1_Mooventure2016_Rev5_h__
#define __c1_Mooventure2016_Rev5_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  real_T c1_count;
  SimStruct *S;
  const mxArray *c1_setSimStateSideEffectsInfo;
  int32_T c1_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c1_isStable;
  uint8_T c1_doSetSimStateSideEffects;
  uint8_T c1_is_active_c1_Mooventure2016_Rev5;
  uint8_T c1_is_c1_Mooventure2016_Rev5;
  uint8_T c1_tp_Batterybootup;
  uint8_T c1_tp_Charging_and_Temp;
  uint8_T c1_tp_Counting;
  uint8_T c1_tp_Initial;
  uint8_T c1_tp_Kill_Component_Keyed;
  uint8_T c1_tp_Normal_Operation;
  uint8_T c1_tp_Shutdown_Sequence;
  ChartInfoStruct chartInfo;
} SFc1_Mooventure2016_Rev5InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_Mooventure2016_Rev5_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c1_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
extern void c1_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
