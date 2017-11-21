#ifndef __c7_Mooventure2016_Rev5_h__
#define __c7_Mooventure2016_Rev5_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c7_setSimStateSideEffectsInfo;
  int32_T c7_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c7_isStable;
  uint8_T c7_doSetSimStateSideEffects;
  uint8_T c7_is_active_c7_Mooventure2016_Rev5;
  uint8_T c7_is_c7_Mooventure2016_Rev5;
  uint8_T c7_tp_Driving;
  uint8_T c7_tp_Nuetral;
  uint8_T c7_tp_RegenBrake;
  uint8_T c7_tp_RegenDrag;
  ChartInfoStruct chartInfo;
} SFc7_Mooventure2016_Rev5InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c7_Mooventure2016_Rev5_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c7_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
extern void c7_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
