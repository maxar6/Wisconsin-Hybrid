/*
 * File: Mooventure2016_Rev5_Foreground.h
 *
 * Code generated for Simulink model 'Mooventure2016_Rev5'.
 *
 * Model version                  : 1.2141
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sat Aug 25 21:19:10 2018
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

/* Block signals for system '<S113>/Brake Pedal Scaling' */
typedef struct {
  real_T s123_brakeOut;                /* '<S113>/Brake Pedal Scaling' */
} rtB_BrakePedalScaling_Mooventure2016_Rev5;

/* Block signals for system '<S113>/Chart' */
typedef struct {
  real_T s124_driveTorque;             /* '<S113>/Chart' */
  real_T s124_regenTorque;             /* '<S113>/Chart' */
} rtB_Chart_Mooventure2016_Rev5;

/* Block states (auto storage) for system '<S113>/Chart' */
typedef struct {
  uint8_T s124_is_active_c20_Mooventure2016_Rev5;/* '<S113>/Chart' */
  uint8_T s124_is_c20_Mooventure2016_Rev5;/* '<S113>/Chart' */
} rtDW_Chart_Mooventure2016_Rev5;

/* Block signals for system '<S113>/Gas Pedal Scaling' */
typedef struct {
  real_T s125_throttleOut;             /* '<S113>/Gas Pedal Scaling' */
} rtB_GasPedalScaling_Mooventure2016_Rev5;

/* Block signals for system '<S184>/ABS Chart' */
typedef struct {
  real_T s187_TorqueOut;               /* '<S184>/ABS Chart' */
} rtB_ABSChart_Mooventure2016_Rev5;

/* Block states (auto storage) for system '<S184>/ABS Chart' */
typedef struct {
  real_T s187_lastTorque;              /* '<S184>/ABS Chart' */
  uint8_T s187_is_active_c12_Mooventure2016_Rev5;/* '<S184>/ABS Chart' */
  uint8_T s187_is_c12_Mooventure2016_Rev5;/* '<S184>/ABS Chart' */
} rtDW_ABSChart_Mooventure2016_Rev5;

/* Block signals for system '<S538>/Heater Core Motion Control' */
typedef struct {
  real_T s588_motorEnable;             /* '<S538>/Heater Core Motion Control' */
  real_T s588_motorDirection;          /* '<S538>/Heater Core Motion Control' */
} rtB_HeaterCoreMotionControl_Mooventure2016_Rev5;

/* Exported functions */
extern void Mooventure2016_Rev5_DataCorrectionMotorFault(real_T rtu_torqueIn,
  rtB_DataCorrectionMotorFault_Mooventure2016_Rev5 *localB);
extern void Mooventure2016_Rev5_BrakePedalScaling(real_T rtu_brakeIn, boolean_T
  rtu_inReverse, rtB_BrakePedalScaling_Mooventure2016_Rev5 *localB);
extern void Mooventure2016_Rev5_Chart_Init(rtB_Chart_Mooventure2016_Rev5 *localB,
  rtDW_Chart_Mooventure2016_Rev5 *localDW);
extern void Mooventure2016_Rev5_Chart(real_T rtu_accel, real_T rtu_brake, real_T
  rtu_speed, real_T rtu_accelStart, real_T rtu_accelEnd, real_T rtu_brakeStart,
  real_T rtu_brakeEnd, real_T rtu_regenStart, real_T rtu_regenEnd, real_T
  rtu_dragTorque, rtB_Chart_Mooventure2016_Rev5 *localB,
  rtDW_Chart_Mooventure2016_Rev5 *localDW);
extern void Mooventure2016_Rev5_GasPedalScaling(real_T rtu_throttleIn,
  rtB_GasPedalScaling_Mooventure2016_Rev5 *localB);
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
