/*
 * File: BuckyWagon_01_Foreground.h
 *
 * Code generated for Simulink model 'BuckyWagon_01'.
 *
 * Model version                  : 1.1520
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Mon Apr 23 14:25:32 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BuckyWagon_01_Foreground_h_
#define RTW_HEADER_BuckyWagon_01_Foreground_h_
#ifndef BuckyWagon_01_COMMON_INCLUDES_
# define BuckyWagon_01_COMMON_INCLUDES_
#include <stddef.h>
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "Application.h"
#include "rt_nonfinite.h"
#endif                                 /* BuckyWagon_01_COMMON_INCLUDES_ */

#include "BuckyWagon_01_types.h"

/* Child system includes */
#include "BuckyWagon_01_MiniViewDisplay.h"

/* Block signals for system '<S147>/Downsapmle' */
typedef struct {
  real_T s148_Out_1;                   /* '<S147>/Downsapmle' */
  real_T s148_Out_2;                   /* '<S147>/Downsapmle' */
} rtB_Downsapmle_BuckyWagon_01;

/* Block states (auto storage) for system '<S147>/Downsapmle' */
typedef struct {
  real_T s148_count;                   /* '<S147>/Downsapmle' */
  real_T s148_Val1;                    /* '<S147>/Downsapmle' */
  real_T s148_Val2;                    /* '<S147>/Downsapmle' */
  uint8_T s148_is_active_c11_BuckyWagon_01;/* '<S147>/Downsapmle' */
  uint8_T s148_is_c11_BuckyWagon_01;   /* '<S147>/Downsapmle' */
} rtDW_Downsapmle_BuckyWagon_01;

/* Block signals for system '<S288>/Chart' */
typedef struct {
  boolean_T s290_pluggedIn;            /* '<S288>/Chart' */
} rtB_Chart_BuckyWagon_01;

/* Block states (auto storage) for system '<S288>/Chart' */
typedef struct {
  int16_T s290_timer;                  /* '<S288>/Chart' */
  uint8_T s290_is_active_c10_BuckyWagon_01;/* '<S288>/Chart' */
  uint8_T s290_is_c10_BuckyWagon_01;   /* '<S288>/Chart' */
} rtDW_Chart_BuckyWagon_01;

extern void BuckyWagon_01_Downsapmle_Init(rtB_Downsapmle_BuckyWagon_01 *localB,
  rtDW_Downsapmle_BuckyWagon_01 *localDW);
extern void BuckyWagon_01_Downsapmle(real_T rtu_Val_In, real_T rtu_numb_downsamp,
  rtB_Downsapmle_BuckyWagon_01 *localB, rtDW_Downsapmle_BuckyWagon_01 *localDW);
extern void BuckyWagon_01_Chart_Init(rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW);
extern void BuckyWagon_01_Chart(real_T rtu_histTime, boolean_T rtu_mainsOn,
  rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01 *localDW);
extern void BuckyWagon_01_IfActionSubsystem(real_T rtu_0, real_T *rty_Out);
extern void BuckyWagon_01_Foreground_Init(void);
extern void BuckyWagon_01_Foreground_Enable(void);
extern void BuckyWagon_01_Foreground_Start(void);
extern void BuckyWagon_01_Foreground_Disable(void);
extern void BuckyWagon_01_Foreground(void);

#endif                                 /* RTW_HEADER_BuckyWagon_01_Foreground_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
