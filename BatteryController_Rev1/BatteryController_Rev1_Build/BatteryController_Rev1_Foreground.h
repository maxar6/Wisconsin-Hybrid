/*
 * File: BatteryController_Rev1_Foreground.h
 *
 * Code generated for Simulink model 'BatteryController_Rev1'.
 *
 * Model version                  : 1.586
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sat Aug 25 20:25:04 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BatteryController_Rev1_Foreground_h_
#define RTW_HEADER_BatteryController_Rev1_Foreground_h_
#ifndef BatteryController_Rev1_COMMON_INCLUDES_
# define BatteryController_Rev1_COMMON_INCLUDES_
#include <stddef.h>
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "Application.h"
#include "rt_nonfinite.h"
#include "rt_zcfcn.h"
#endif                                 /* BatteryController_Rev1_COMMON_INCLUDES_ */

#include "BatteryController_Rev1_types.h"

/* Block signals for system '<S17>/Delay 3 Chart' */
typedef struct {
  boolean_T s24_write;                 /* '<S17>/Delay 3 Chart' */
} rtB_Delay3Chart_BatteryController_Rev1;

/* Block states (auto storage) for system '<S17>/Delay 3 Chart' */
typedef struct {
  real_T s24_count;                    /* '<S17>/Delay 3 Chart' */
  uint8_T s24_is_active_c36_BatteryController_Rev1;/* '<S17>/Delay 3 Chart' */
  uint8_T s24_is_c36_BatteryController_Rev1;/* '<S17>/Delay 3 Chart' */
} rtDW_Delay3Chart_BatteryController_Rev1;

extern void BatteryController_Rev1_Delay3Chart_Init
  (rtB_Delay3Chart_BatteryController_Rev1 *localB,
   rtDW_Delay3Chart_BatteryController_Rev1 *localDW);
extern void BatteryController_Rev1_Delay3Chart(real_T rtu_delay,
  rtB_Delay3Chart_BatteryController_Rev1 *localB,
  rtDW_Delay3Chart_BatteryController_Rev1 *localDW);
extern void BatteryController_Rev1_Foreground_Init(void);
extern void BatteryController_Rev1_Foreground_Start(void);
extern void BatteryController_Rev1_Foreground(void);

#endif                                 /* RTW_HEADER_BatteryController_Rev1_Foreground_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
