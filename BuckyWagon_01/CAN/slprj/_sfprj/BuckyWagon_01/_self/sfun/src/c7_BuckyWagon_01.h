#ifndef __c7_BuckyWagon_01_h__
#define __c7_BuckyWagon_01_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c7_setSimStateSideEffectsInfo;
  void *c7_testPointAddrMap[6];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint16_T c7_timer;
  boolean_T c7_isStable;
  uint8_T c7_doSetSimStateSideEffects;
  uint8_T c7_is_active_c7_BuckyWagon_01;
  uint8_T c7_is_c7_BuckyWagon_01;
  uint8_T c7_tp_FlashOne;
  uint8_T c7_tp_FlashTwo;
  uint8_T c7_tp_Off;
  uint8_T c7_tp_OffOne;
  uint8_T c7_tp_OffTwo;
  ChartInfoStruct chartInfo;
  rtwCAPI_ModelMappingInfo c7_testPointMappingInfo;
} SFc7_BuckyWagon_01InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c7_BuckyWagon_01_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c7_BuckyWagon_01_get_check_sum(mxArray *plhs[]);
extern void c7_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
