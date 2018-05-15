#ifndef __c2_BuckyWagon_01_h__
#define __c2_BuckyWagon_01_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c2_setSimStateSideEffectsInfo;
  int32_T c2_sfEvent;
  int32_T c2_temp;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int16_T c2_oldData[6];
  uint16_T c2_UPDATE_TIME;
  uint16_T c2_timer;
  boolean_T c2_isStable;
  uint8_T c2_BLACK;
  uint8_T c2_FONT4x6;
  uint8_T c2_FONT6x8;
  uint8_T c2_FONT8x15;
  uint8_T c2_SETUP_TIME;
  uint8_T c2_WHITE;
  uint8_T c2_b_tp_List_Idle;
  uint8_T c2_c_tp_List_Idle;
  uint8_T c2_doSetSimStateSideEffects;
  uint8_T c2_is_Dual;
  uint8_T c2_is_List;
  uint8_T c2_is_Quad;
  uint8_T c2_is_Setup;
  uint8_T c2_is_Single;
  uint8_T c2_is_active_c2_BuckyWagon_01;
  uint8_T c2_is_c2_BuckyWagon_01;
  uint8_T c2_is_select_var;
  uint8_T c2_selectIndex;
  uint8_T c2_selectVIndex;
  uint8_T c2_setupIndex;
  uint8_T c2_setupVIndex;
  uint8_T c2_tp_Dual;
  uint8_T c2_tp_Dual_Init;
  uint8_T c2_tp_List;
  uint8_T c2_tp_List_Idle;
  uint8_T c2_tp_List_Init;
  uint8_T c2_tp_List_Wait;
  uint8_T c2_tp_List_Wait2;
  uint8_T c2_tp_PowerupDelay;
  uint8_T c2_tp_Quad;
  uint8_T c2_tp_Quad_Idle;
  uint8_T c2_tp_Quad_Init;
  uint8_T c2_tp_Quad_Names;
  uint8_T c2_tp_Select_Init;
  uint8_T c2_tp_Setup;
  uint8_T c2_tp_Setup_Init;
  uint8_T c2_tp_Single;
  uint8_T c2_tp_Single_Init;
  uint8_T c2_tp_dualNames;
  uint8_T c2_tp_select_Idle;
  uint8_T c2_tp_select_Wait;
  uint8_T c2_tp_select_var;
  uint8_T c2_tp_setup_Idle;
  uint8_T c2_tp_setup_Wait;
  uint8_T c2_tp_singleNames;
  uint8_T c2_tp_wait;
  uint8_T c2_tp_wait1;
  uint8_T c2_tp_wait2;
  uint8_T c2_tp_wait3;
  uint8_T c2_tp_wait4;
  ChartInfoStruct chartInfo;
} SFc2_BuckyWagon_01InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c2_BuckyWagon_01_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_BuckyWagon_01_get_check_sum(mxArray *plhs[]);
extern void c2_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
