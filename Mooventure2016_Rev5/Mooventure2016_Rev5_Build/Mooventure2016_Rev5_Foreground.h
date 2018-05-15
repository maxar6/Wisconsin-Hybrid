/*
 * File: Mooventure2016_Rev5_Foreground.h
 *
 * Code generated for Simulink model 'Mooventure2016_Rev5'.
 *
 * Model version                  : 1.2069
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sun Apr 08 00:47:19 2018
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
#include <string.h>
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "Application.h"
#endif                                 /* Mooventure2016_Rev5_COMMON_INCLUDES_ */

#include "Mooventure2016_Rev5_types.h"

/* Block signals for system '<S76>/Data Correction Motor Fault' */
typedef struct {
  real_T s87_torqueOut;                /* '<S76>/Data Correction Motor Fault' */
} rtB_DataCorrectionMotorFault_Mooventure2016_Rev5;

/* Block signals for system '<S93>/Brake Pedal Scaling' */
typedef struct {
  real_T s103_brakeOut;                /* '<S93>/Brake Pedal Scaling' */
} rtB_BrakePedalScaling_Mooventure2016_Rev5;

/* Block signals for system '<S93>/Chart' */
typedef struct {
  real_T s104_driveTorque;             /* '<S93>/Chart' */
  real_T s104_regenTorque;             /* '<S93>/Chart' */
} rtB_Chart_Mooventure2016_Rev5;

/* Block states (auto storage) for system '<S93>/Chart' */
typedef struct {
  uint8_T s104_is_active_c20_Mooventure2016_Rev5;/* '<S93>/Chart' */
  uint8_T s104_is_c20_Mooventure2016_Rev5;/* '<S93>/Chart' */
} rtDW_Chart_Mooventure2016_Rev5;

/* Block signals for system '<S93>/Gas Pedal Scaling' */
typedef struct {
  real_T s105_throttleOut;             /* '<S93>/Gas Pedal Scaling' */
} rtB_GasPedalScaling_Mooventure2016_Rev5;

/* Block signals for system '<S345>/Heater Core Motion Control' */
typedef struct {
  real_T s389_motorEnable;             /* '<S345>/Heater Core Motion Control' */
  real_T s389_motorDirection;          /* '<S345>/Heater Core Motion Control' */
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
extern void Mooventure2016_Rev5_HeaterCoreMotionControl(real_T rtu_currPos,
  real_T rtu_posRequest, real_T rtu_hyst,
  rtB_HeaterCoreMotionControl_Mooventure2016_Rev5 *localB);
extern void Mooventure2016_Rev5_Foreground_Init(void);
extern void Mooventure2016_Rev5_Foreground_Enable(void);
extern void Mooventure2016_Rev5_Foreground_Start(void);
extern void Mooventure2016_Rev5_Foreground_Disable(void);
extern void Mooventure2016_Rev5_Foreground(void);

#endif                                 /* RTW_HEADER_Mooventure2016_Rev5_Foreground_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
