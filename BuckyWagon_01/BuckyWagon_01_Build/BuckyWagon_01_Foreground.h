/*
 * File: BuckyWagon_01_Foreground.h
 *
 * Code generated for Simulink model 'BuckyWagon_01'.
 *
 * Model version                  : 1.1596
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sat Sep 07 17:36:03 2019
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

/* Block signals for system '<S127>/Downsapmle' */
typedef struct {
  real_T s128_Out_1;                   /* '<S127>/Downsapmle' */
  real_T s128_Out_2;                   /* '<S127>/Downsapmle' */
} rtB_Downsapmle_BuckyWagon_01;

/* Block states (auto storage) for system '<S127>/Downsapmle' */
typedef struct {
  real_T s128_count;                   /* '<S127>/Downsapmle' */
  real_T s128_Val1;                    /* '<S127>/Downsapmle' */
  real_T s128_Val2;                    /* '<S127>/Downsapmle' */
  uint8_T s128_is_active_c11_BuckyWagon_01;/* '<S127>/Downsapmle' */
  uint8_T s128_is_c11_BuckyWagon_01;   /* '<S127>/Downsapmle' */
} rtDW_Downsapmle_BuckyWagon_01;

extern void BuckyWagon_01_Downsapmle_Init(rtB_Downsapmle_BuckyWagon_01 *localB,
  rtDW_Downsapmle_BuckyWagon_01 *localDW);
extern void BuckyWagon_01_Downsapmle(real_T rtu_Val_In, real_T rtu_numb_downsamp,
  rtB_Downsapmle_BuckyWagon_01 *localB, rtDW_Downsapmle_BuckyWagon_01 *localDW);
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
