#ifndef __c16_cx06_MA_h__
#define __c16_cx06_MA_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c16_setSimStateSideEffectsInfo;
  void *c16_testPointAddrMap[4];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c16_isStable;
  uint8_T c16_doSetSimStateSideEffects;
  uint8_T c16_is_active_c16_cx06_MA;
  uint8_T c16_is_c16_cx06_MA;
  uint8_T c16_tp_About_to_Crank;
  uint8_T c16_tp_About_to_Idle;
  uint8_T c16_tp_Crank;
  uint8_T c16_tp_Idle;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c16_testPointMappingInfo;
} SFc16_cx06_MAInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c16_cx06_MA_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c16_cx06_MA_get_check_sum(mxArray *plhs[]);
extern void c16_cx06_MA_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
