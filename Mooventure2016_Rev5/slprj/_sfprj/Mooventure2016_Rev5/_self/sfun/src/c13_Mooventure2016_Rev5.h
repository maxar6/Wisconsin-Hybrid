#ifndef __c13_Mooventure2016_Rev5_h__
#define __c13_Mooventure2016_Rev5_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c13_setSimStateSideEffectsInfo;
  int32_T c13_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c13_isStable;
  uint8_T c13_doSetSimStateSideEffects;
  uint8_T c13_is_active_c13_Mooventure2016_Rev5;
  uint8_T c13_is_c13_Mooventure2016_Rev5;
  uint8_T c13_tp_Driving;
  uint8_T c13_tp_Nuetral;
  uint8_T c13_tp_RegenBrake;
  uint8_T c13_tp_RegenDrag;
  ChartInfoStruct chartInfo;
} SFc13_Mooventure2016_Rev5InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c13_Mooventure2016_Rev5_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c13_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
extern void c13_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
