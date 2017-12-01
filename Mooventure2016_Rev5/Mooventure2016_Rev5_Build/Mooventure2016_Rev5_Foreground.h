/*
 * File: Mooventure2016_Rev5_Foreground.h
 *
 * Code generated for Simulink model 'Mooventure2016_Rev5'.
 *
 * Model version                  : 1.2026
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Wed Nov 29 16:58:34 2017
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

/* Block signals for system '<S55>/Data Correction Motor Fault' */
typedef struct {
  real_T s66_torqueOut;                /* '<S55>/Data Correction Motor Fault' */
} rtB_DataCorrectionMotorFault_Mooventure2016_Rev5;

/* Block signals for system '<S72>/Brake Pedal Scaling' */
typedef struct {
  real_T s82_brakeOut;                 /* '<S72>/Brake Pedal Scaling' */
} rtB_BrakePedalScaling_Mooventure2016_Rev5;

/* Block signals for system '<S72>/Chart' */
typedef struct {
  real_T s83_driveTorque;              /* '<S72>/Chart' */
  real_T s83_regenTorque;              /* '<S72>/Chart' */
} rtB_Chart_Mooventure2016_Rev5;

/* Block states (auto storage) for system '<S72>/Chart' */
typedef struct {
  uint8_T s83_is_active_c20_Mooventure2016_Rev5;/* '<S72>/Chart' */
  uint8_T s83_is_c20_Mooventure2016_Rev5;/* '<S72>/Chart' */
} rtDW_Chart_Mooventure2016_Rev5;

/* Block signals for system '<S72>/Gas Pedal Scaling' */
typedef struct {
  real_T s84_throttleOut;              /* '<S72>/Gas Pedal Scaling' */
} rtB_GasPedalScaling_Mooventure2016_Rev5;

/* Block signals for system '<S170>/Chart' */
typedef struct {
  boolean_T s173_write;                /* '<S170>/Chart' */
} rtB_Chart_Mooventure2016_Rev5_d;

/* Block states (auto storage) for system '<S170>/Chart' */
typedef struct {
  real_T s173_count;                   /* '<S170>/Chart' */
  uint8_T s173_is_active_c34_Mooventure2016_Rev5;/* '<S170>/Chart' */
  uint8_T s173_is_c34_Mooventure2016_Rev5;/* '<S170>/Chart' */
} rtDW_Chart_Mooventure2016_Rev5_o;

/* Block signals for system '<S150>/Color1' */
typedef struct {
  real_T s180_color;                   /* '<S150>/Color1' */
} rtB_Color1_Mooventure2016_Rev5;

/* Block signals for system '<S368>/Heater Core Motion Control' */
typedef struct {
  real_T s412_motorEnable;             /* '<S368>/Heater Core Motion Control' */
  real_T s412_motorDirection;          /* '<S368>/Heater Core Motion Control' */
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
extern void Mooventure2016_Rev5_Chart_o_Init(rtB_Chart_Mooventure2016_Rev5_d
  *localB, rtDW_Chart_Mooventure2016_Rev5_o *localDW);
extern void Mooventure2016_Rev5_Chart_a(real_T rtu_delay,
  rtB_Chart_Mooventure2016_Rev5_d *localB, rtDW_Chart_Mooventure2016_Rev5_o
  *localDW);
extern void Mooventure2016_Rev5_Color1(real_T rtu_threshold, const real_T
  rtu_MPGe[15], rtB_Color1_Mooventure2016_Rev5 *localB);
extern void Mooventure2016_Rev5_HeaterCoreMotionControl(real_T rtu_currPos,
  real_T rtu_posRequest, real_T rtu_hyst,
  rtB_HeaterCoreMotionControl_Mooventure2016_Rev5 *localB);
extern void Mooventure2016_Rev5_Foreground_Init(void);
extern void Mooventure2016_Rev5_Foreground_Enable(void);
extern void Mooventure2016_Rev5_Foreground_Start(void);
extern void Mooventure2016_Rev5_Foreground_Disable(void);
extern void Mooventure2016_Rev5_Foreground(void);
extern void Mooventure2016_Rev5_Foreground_Term(void);

#endif                                 /* RTW_HEADER_Mooventure2016_Rev5_Foreground_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
