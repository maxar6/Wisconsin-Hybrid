/*
 * File: BuckyWagon_01_Foreground.h
 *
 * Real-Time Workshop code generated for Simulink model BuckyWagon_01.
 *
 * Model version                        : 1.1518
 * Real-Time Workshop file version      : 7.5  (R2010a)  25-Jan-2010
 * Real-Time Workshop file generated on : Sun Jan 21 12:54:58 2018
 * TLC version                          : 7.5 (Jan 19 2010)
 * C/C++ source code generated on       : Sun Jan 21 12:55:01 2018
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
#include "rt_MAX.h"
#include "rt_MAXd_snf.h"
#include "rt_MIN.h"
#include "rt_MINd_snf.h"
#include "rt_SATURATE.h"
#include "rt_nonfinite.h"
#endif                                 /* BuckyWagon_01_COMMON_INCLUDES_ */

#include "BuckyWagon_01_types.h"

/* Child system includes */
#include "BuckyWagon_01_MiniViewDisplay.h"

/* Block signals for system '<S144>/Downsapmle' */
typedef struct {
  real_T s145_Out_1;                   /* '<S144>/Downsapmle' */
  real_T s145_Out_2;                   /* '<S144>/Downsapmle' */
} rtB_Downsapmle_BuckyWagon_01;

/* Block states (auto storage) for system '<S144>/Downsapmle' */
typedef struct {
  real_T s145_count;                   /* '<S144>/Downsapmle' */
  real_T s145_Val1;                    /* '<S144>/Downsapmle' */
  real_T s145_Val2;                    /* '<S144>/Downsapmle' */
  uint8_T s145_is_active_c11_BuckyWagon_01;/* '<S144>/Downsapmle' */
  uint8_T s145_is_c11_BuckyWagon_01;   /* '<S144>/Downsapmle' */
} rtDW_Downsapmle_BuckyWagon_01;

/* Block signals for system '<S285>/Chart' */
typedef struct {
  boolean_T s287_pluggedIn;            /* '<S285>/Chart' */
} rtB_Chart_BuckyWagon_01;

/* Block states (auto storage) for system '<S285>/Chart' */
typedef struct {
  int16_T s287_timer;                  /* '<S285>/Chart' */
  uint8_T s287_is_active_c10_BuckyWagon_01;/* '<S285>/Chart' */
  uint8_T s287_is_c10_BuckyWagon_01;   /* '<S285>/Chart' */
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
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
