#ifndef __c29_Mooventure2016_Rev5_h__
#define __c29_Mooventure2016_Rev5_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c29_setSimStateSideEffectsInfo;
  int32_T c29_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c29_isStable;
  uint8_T c29_doSetSimStateSideEffects;
  uint8_T c29_is_active_c29_Mooventure2016_Rev5;
  uint8_T c29_is_c29_Mooventure2016_Rev5;
  uint8_T c29_tp_ON;
  uint8_T c29_tp_Off;
  uint8_T c29_tp_RSM;
  uint8_T c29_tp_SetMinus;
  uint8_T c29_tp_SetPlus;
  uint8_T c29_tp_default;
  ChartInfoStruct chartInfo;
} SFc29_Mooventure2016_Rev5InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c29_Mooventure2016_Rev5_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c29_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
extern void c29_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
