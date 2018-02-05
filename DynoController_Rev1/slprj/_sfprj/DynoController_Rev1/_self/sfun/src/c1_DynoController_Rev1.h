#ifndef __c1_DynoController_Rev1_h__
#define __c1_DynoController_Rev1_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c1_setSimStateSideEffectsInfo;
  int32_T c1_sfEvent;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c1_isStable;
  uint8_T c1_doSetSimStateSideEffects;
  uint8_T c1_is_active_c1_DynoController_Rev1;
  uint8_T c1_is_c1_DynoController_Rev1;
  uint8_T c1_tp_Batterybootup;
  uint8_T c1_tp_Charging_and_Temp;
  uint8_T c1_tp_Initial;
  uint8_T c1_tp_Kill_Component_Keyed;
  uint8_T c1_tp_Normal_Operation;
  uint8_T c1_tp_Shutdown_Sequence;
  ChartInfoStruct chartInfo;
} SFc1_DynoController_Rev1InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_DynoController_Rev1_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c1_DynoController_Rev1_get_check_sum(mxArray *plhs[]);
extern void c1_DynoController_Rev1_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
