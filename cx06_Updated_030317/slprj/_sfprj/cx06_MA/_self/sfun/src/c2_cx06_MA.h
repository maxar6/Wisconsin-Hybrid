#ifndef __c2_cx06_MA_h__
#define __c2_cx06_MA_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c2_setSimStateSideEffectsInfo;
  void *c2_testPointAddrMap[5];
  uint32_T c2_PowerDownEventCounter;
  uint32_T c2_PowerUpEventCounter;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c2_isStable;
  uint8_T c2_doSetSimStateSideEffects;
  uint8_T c2_is_active_c2_cx06_MA;
  uint8_T c2_is_c2_cx06_MA;
  uint8_T c2_tp_Estop;
  uint8_T c2_tp_On;
  uint8_T c2_tp_PowerDown;
  uint8_T c2_tp_PowerUp;
  uint8_T c2_tp_ShutDown;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c2_testPointMappingInfo;
} SFc2_cx06_MAInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c2_cx06_MA_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_cx06_MA_get_check_sum(mxArray *plhs[]);
extern void c2_cx06_MA_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
