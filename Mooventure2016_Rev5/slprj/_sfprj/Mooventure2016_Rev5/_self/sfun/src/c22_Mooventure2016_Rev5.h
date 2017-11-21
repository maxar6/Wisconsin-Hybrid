#ifndef __c22_Mooventure2016_Rev5_h__
#define __c22_Mooventure2016_Rev5_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c22_setSimStateSideEffectsInfo;
  int32_T c22_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c22_isStable;
  uint8_T c22_doSetSimStateSideEffects;
  uint8_T c22_is_active_c22_Mooventure2016_Rev5;
  uint8_T c22_is_c22_Mooventure2016_Rev5;
  uint8_T c22_tp_FlashOff;
  uint8_T c22_tp_FlashOn;
  uint8_T c22_tp_Normal;
  uint8_T c22_tp_Solid;
  uint8_T c22_tp_Wait;
  ChartInfoStruct chartInfo;
} SFc22_Mooventure2016_Rev5InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c22_Mooventure2016_Rev5_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c22_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
extern void c22_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
