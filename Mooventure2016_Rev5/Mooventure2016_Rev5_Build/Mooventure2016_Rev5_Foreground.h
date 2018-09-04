/*
 * File: Mooventure2016_Rev5_Foreground.h
 *
 * Code generated for Simulink model 'Mooventure2016_Rev5'.
 *
 * Model version                  : 1.2150
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Tue Sep 04 13:37:31 2018
 *
 * Target selection: motohawk_motocoder_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Mooventure2016_Rev5_Foreground_h_
#define RTW_HEADER_Mooventure2016_Rev5_Foreground_h_
#ifndef Mooventure2016_Rev5_COMMON_INCLUDES_
# define Mooventure2016_Rev5_COMMON_INCLUDES_
#include <math.h>
#include <stddef.h>
#include <string.h>
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "Application.h"
#endif                                 /* Mooventure2016_Rev5_COMMON_INCLUDES_ */

#include "Mooventure2016_Rev5_types.h"

/* Block signals for system '<S100>/Data Correction Motor Fault' */
typedef struct {
  real_T s111_torqueOut;               /* '<S100>/Data Correction Motor Fault' */
} rtB_DataCorrectionMotorFault_Mooventure2016_Rev5;

/* Block signals for system '<S113>/Chart' */
typedef struct {
  real_T s123_driveTorque;             /* '<S113>/Chart' */
  real_T s123_regenTorque;             /* '<S113>/Chart' */
} rtB_Chart_Mooventure2016_Rev5;

/* Block states (auto storage) for system '<S113>/Chart' */
typedef struct {
  uint8_T s123_is_active_c20_Mooventure2016_Rev5;/* '<S113>/Chart' */
  uint8_T s123_is_c20_Mooventure2016_Rev5;/* '<S113>/Chart' */
} rtDW_Chart_Mooventure2016_Rev5;

/* Block signals for system '<S178>/ABS Chart' */
typedef struct {
  real_T s181_TorqueOut;               /* '<S178>/ABS Chart' */
} rtB_ABSChart_Mooventure2016_Rev5;

/* Block states (auto storage) for system '<S178>/ABS Chart' */
typedef struct {
  real_T s181_lastTorque;              /* '<S178>/ABS Chart' */
  uint8_T s181_is_active_c12_Mooventure2016_Rev5;/* '<S178>/ABS Chart' */
  uint8_T s181_is_c12_Mooventure2016_Rev5;/* '<S178>/ABS Chart' */
} rtDW_ABSChart_Mooventure2016_Rev5;

/* Block signals for system '<S532>/Heater Core Motion Control' */
typedef struct {
  real_T s582_motorEnable;             /* '<S532>/Heater Core Motion Control' */
  real_T s582_motorDirection;          /* '<S532>/Heater Core Motion Control' */
} rtB_HeaterCoreMotionControl_Mooventure2016_Rev5;

/* Exported functions */
extern void Mooventure2016_Rev5_DataCorrectionMotorFault(real_T rtu_torqueIn,
  rtB_DataCorrectionMotorFault_Mooventure2016_Rev5 *localB);
extern void Mooventure2016_Rev5_Chart_Init(rtB_Chart_Mooventure2016_Rev5 *localB,
  rtDW_Chart_Mooventure2016_Rev5 *localDW);
extern void Mooventure2016_Rev5_Chart(real_T rtu_accel, real_T rtu_brake, real_T
  rtu_speed, real_T rtu_accelStart, real_T rtu_accelEnd, real_T rtu_brakeStart,
  real_T rtu_brakeEnd, real_T rtu_regenStart, real_T rtu_regenEnd, real_T
  rtu_dragTorque, rtB_Chart_Mooventure2016_Rev5 *localB,
  rtDW_Chart_Mooventure2016_Rev5 *localDW);
extern void Mooventure2016_Rev5_ABSChart_Init(rtB_ABSChart_Mooventure2016_Rev5
  *localB, rtDW_ABSChart_Mooventure2016_Rev5 *localDW);
extern void Mooventure2016_Rev5_ABSChart(real_T rtu_Activate, real_T
  rtu_TorqueIn, real_T rtu_RampOut, real_T rtu_RampIn, real_T rtu_MinTorque,
  rtB_ABSChart_Mooventure2016_Rev5 *localB, rtDW_ABSChart_Mooventure2016_Rev5
  *localDW);
extern void Mooventure2016_Rev5_HeaterCoreMotionControl(real_T rtu_currPos,
  real_T rtu_posRequest, real_T rtu_hyst,
  rtB_HeaterCoreMotionControl_Mooventure2016_Rev5 *localB);
extern void Mooventure2016_Rev5_Foreground_Init(void);
extern void Mooventure2016_Rev5_Foreground_Start(void);
extern void Mooventure2016_Rev5_Foreground_Disable(void);
extern void Mooventure2016_Rev5_Foreground(void);

#endif                                 /* RTW_HEADER_Mooventure2016_Rev5_Foreground_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
