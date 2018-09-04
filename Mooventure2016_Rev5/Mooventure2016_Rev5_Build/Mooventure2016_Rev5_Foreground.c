/*
 * File: Mooventure2016_Rev5_Foreground.c
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

#include "Mooventure2016_Rev5_Foreground.h"

/* Include model header file for global data */
#include "Mooventure2016_Rev5.h"
#include "Mooventure2016_Rev5_private.h"

/* Named constants for Stateflow: '<S113>/Chart' */
#define Mooventure2016_Rev5_IN_Driving (1U)
#define Mooventure2016_Rev5_IN_Nuetral (2U)
#define Mooventure2016_Rev5_IN_RegenBrake (3U)
#define Mooventure2016_Rev5_IN_RegenDrag (4U)

/* Named constants for Stateflow: '<S178>/ABS Chart' */
#define Mooventure2016_Rev5_IN_Default (1U)
#define Mooventure2016_Rev5_IN_RampIn  (2U)
#define Mooventure2016_Rev5_IN_RampOut (3U)
#define Mooventure2016_Rev5_IN_Saturated (4U)

/* Named constants for Stateflow: '<S15>/Chart' */
#define Mooventure2016_Rev5_IN_Closed  (1U)
#define Mooventure2016_Rev5_IN_FanHigh (1U)
#define Mooventure2016_Rev5_IN_FanLow  (2U)
#define Mooventure2016_Rev5_IN_FanMed  (3U)
#define Mooventure2016_Rev5_IN_FanOff  (4U)
#define Mooventure2016_Rev5_IN_Heat_0  (1U)
#define Mooventure2016_Rev5_IN_Heat_1  (1U)
#define Mooventure2016_Rev5_IN_Heat_1H (1U)
#define Mooventure2016_Rev5_IN_Heat_2  (2U)
#define Mooventure2016_Rev5_IN_Heat_2H (2U)
#define Mooventure2016_Rev5_IN_Heat_3  (3U)
#define Mooventure2016_Rev5_IN_Heat_3H (3U)
#define Mooventure2016_Rev5_IN_Heat_4  (4U)
#define Mooventure2016_Rev5_IN_Heat_4H (4U)
#define Mooventure2016_Rev5_IN_Master  (1U)
#define Mooventure2016_Rev5_IN_NO_ACTIVE_CHILD_j (0U)
#define Mooventure2016_Rev5_IN_Off     (1U)
#define Mooventure2016_Rev5_IN_On      (2U)
#define Mooventure2016_Rev5_IN_Open    (2U)
#define Mooventure2016_Rev5_IN_System_Cold (2U)
#define Mooventure2016_Rev5_IN_Use_Wants_Heat (3U)
#define Mooventure2016_Rev5_IN_initialize_done (2U)
#define Mooventure2016_Rev5_IN_initialize_off (3U)
#define Mooventure2016_Rev5_IN_initialize_on (4U)

/* Named constants for Stateflow: '<S16>/Chart' */
#define Mooventure2016_Rev5_IN_Running (1U)
#define Mooventure2016_Rev5_IN_Shutdown (2U)
#define Mooventure2016_Rev5_IN_Startup (3U)
#define Mooventure2016_Rev5_IN_default (4U)
#define Mooventure2016_Rev5_IN_default_gen (1U)
#define Mooventure2016_Rev5_IN_high_gen (2U)
#define Mooventure2016_Rev5_IN_low_gen (3U)
#define Mooventure2016_Rev5_IN_medium_gen (4U)

/* Named constants for Stateflow: '<S19>/Chart' */
#define Mooventure2016_Rev5_IN_Batterybootup (1U)
#define Mooventure2016_Rev5_IN_Charging_and_Temp (2U)
#define Mooventure2016_Rev5_IN_Counting (3U)
#define Mooventure2016_Rev5_IN_Initial (4U)
#define Mooventure2016_Rev5_IN_Kill_Component_Keyed (5U)
#define Mooventure2016_Rev5_IN_Normal_Operation (6U)
#define Mooventure2016_Rev5_IN_Shutdown_Sequence (7U)

/* Named constants for Stateflow: '<S192>/Chart' */
#define Mooventure2016_Rev5_IN_ON      (1U)
#define Mooventure2016_Rev5_IN_Off_g   (2U)
#define Mooventure2016_Rev5_IN_RSM     (3U)
#define Mooventure2016_Rev5_IN_SetMinus (4U)
#define Mooventure2016_Rev5_IN_SetPlus (5U)
#define Mooventure2016_Rev5_IN_default_g (6U)

/* Named constants for Stateflow: '<S533>/Coil1State' */
#define Mooventure2016_Rev5_IN_Coil1Disabled (1U)
#define Mooventure2016_Rev5_IN_Coil1Enabled (2U)

/* Named constants for Stateflow: '<S533>/Coil2State' */
#define Mooventure2016_Rev5_IN_Coil2Disabled (1U)
#define Mooventure2016_Rev5_IN_Coil2Enabled (2U)

/* Named constants for Stateflow: '<S533>/Coil2State1' */
#define Mooventure2016_Rev5_IN_Coil3Disabled (1U)
#define Mooventure2016_Rev5_IN_Coil3Enabled (2U)

/* Named constants for Stateflow: '<S534>/Chart' */
#define Mooventure2016_Rev5_IN_FlashOff (1U)
#define Mooventure2016_Rev5_IN_FlashOn (2U)
#define Mooventure2016_Rev5_IN_Normal  (3U)
#define Mooventure2016_Rev5_IN_Solid   (4U)
#define Mooventure2016_Rev5_IN_Wait    (5U)

/* Named constants for Stateflow: '<S534>/PowerSteering' */
#define Mooventure2016_Rev5_IN_INIT    (1U)
#define Mooventure2016_Rev5_IN_MotorRunning (2U)
#define Mooventure2016_Rev5_IN_PowerSteeringOff (3U)
#define Mooventure2016_Rev5_IN_PowerSteeringOn (4U)

/* Forward declaration for local functions */
static void Mooventure2016_Rev5_Master(void);

/*
 * Output and update for atomic system:
 *    '<S100>/Data Correction Motor Fault'
 *    '<S105>/Data Correction'
 *    '<S529>/Data Correction Motor ABS'
 */
void Mooventure2016_Rev5_DataCorrectionMotorFault(real_T rtu_torqueIn,
  rtB_DataCorrectionMotorFault_Mooventure2016_Rev5 *localB)
{
  /* MATLAB Function 'Foreground/Control/Faults/Power Train/Electric Motor/Data Correction Motor Fault': '<S111>:1' */
  if (rtu_torqueIn > 0.0) {
    /* '<S111>:1:3' */
    /* '<S111>:1:4' */
    localB->s111_torqueOut = -(4000.0 - rtu_torqueIn);
  } else if (rtu_torqueIn < 0.0) {
    /* '<S111>:1:5' */
    /* '<S111>:1:6' */
    localB->s111_torqueOut = -(-4000.0 - rtu_torqueIn);
  } else {
    /* '<S111>:1:8' */
    localB->s111_torqueOut = 0.0;
  }
}

/*
 * Initial conditions for atomic system:
 *    '<S113>/Chart'
 *    '<S115>/Chart'
 *    '<S119>/Chart'
 */
void Mooventure2016_Rev5_Chart_Init(rtB_Chart_Mooventure2016_Rev5 *localB,
  rtDW_Chart_Mooventure2016_Rev5 *localDW)
{
  localDW->s123_is_active_c20_Mooventure2016_Rev5 = 0U;
  localDW->s123_is_c20_Mooventure2016_Rev5 = 0U;
  localB->s123_driveTorque = 0.0;
  localB->s123_regenTorque = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S113>/Chart'
 *    '<S115>/Chart'
 *    '<S119>/Chart'
 */
void Mooventure2016_Rev5_Chart(real_T rtu_accel, real_T rtu_brake, real_T
  rtu_speed, real_T rtu_accelStart, real_T rtu_accelEnd, real_T rtu_brakeStart,
  real_T rtu_brakeEnd, real_T rtu_regenStart, real_T rtu_regenEnd, real_T
  rtu_dragTorque, rtB_Chart_Mooventure2016_Rev5 *localB,
  rtDW_Chart_Mooventure2016_Rev5 *localDW)
{
  /* Gateway: Foreground/Control/Hybrid Control Code/CrawlHomeMode/Chart */
  /* During: Foreground/Control/Hybrid Control Code/CrawlHomeMode/Chart */
  if (localDW->s123_is_active_c20_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Hybrid Control Code/CrawlHomeMode/Chart */
    localDW->s123_is_active_c20_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S123>:2' */
    localDW->s123_is_c20_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Nuetral;
  } else {
    switch (localDW->s123_is_c20_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Driving:
      /* During 'Driving': '<S123>:3' */
      if ((rtu_accel <= rtu_accelEnd) && (rtu_speed >= rtu_regenStart)) {
        /* Transition: '<S123>:13' */
        localDW->s123_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RegenDrag;
      } else {
        localB->s123_driveTorque = rtu_accel;
        localB->s123_regenTorque = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Nuetral:
      /* During 'Nuetral': '<S123>:1' */
      if (rtu_accel >= rtu_accelStart) {
        /* Transition: '<S123>:11' */
        localDW->s123_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Driving;
      } else {
        localB->s123_driveTorque = 0.0;
        localB->s123_regenTorque = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_RegenBrake:
      /* During 'RegenBrake': '<S123>:10' */
      if (rtu_speed <= rtu_regenEnd) {
        /* Transition: '<S123>:15' */
        localDW->s123_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Nuetral;
      } else if (rtu_brake <= rtu_brakeEnd) {
        /* Transition: '<S123>:18' */
        localDW->s123_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RegenDrag;
      } else {
        localB->s123_regenTorque = rtu_brake + rtu_dragTorque;
        localB->s123_driveTorque = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_RegenDrag:
      /* During 'RegenDrag': '<S123>:4' */
      if (rtu_speed <= rtu_regenEnd) {
        /* Transition: '<S123>:14' */
        localDW->s123_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Nuetral;
      } else if (rtu_brake >= rtu_brakeStart) {
        /* Transition: '<S123>:16' */
        localDW->s123_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RegenBrake;
      } else if (rtu_accel >= rtu_accelStart) {
        /* Transition: '<S123>:17' */
        localDW->s123_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Driving;
      } else {
        localB->s123_regenTorque = rtu_dragTorque;
        localB->s123_driveTorque = 0.0;
      }
      break;

     default:
      /* Transition: '<S123>:2' */
      localDW->s123_is_c20_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Nuetral;
      break;
    }
  }
}

/*
 * Initial conditions for atomic system:
 *    '<S178>/ABS Chart'
 *    '<S179>/CALC Chart'
 */
void Mooventure2016_Rev5_ABSChart_Init(rtB_ABSChart_Mooventure2016_Rev5 *localB,
  rtDW_ABSChart_Mooventure2016_Rev5 *localDW)
{
  localDW->s181_is_active_c12_Mooventure2016_Rev5 = 0U;
  localDW->s181_is_c12_Mooventure2016_Rev5 = 0U;
  localDW->s181_lastTorque = 0.0;
  localB->s181_TorqueOut = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S178>/ABS Chart'
 *    '<S179>/CALC Chart'
 */
void Mooventure2016_Rev5_ABSChart(real_T rtu_Activate, real_T rtu_TorqueIn,
  real_T rtu_RampOut, real_T rtu_RampIn, real_T rtu_MinTorque,
  rtB_ABSChart_Mooventure2016_Rev5 *localB, rtDW_ABSChart_Mooventure2016_Rev5
  *localDW)
{
  /* Gateway: Foreground/Control/Hybrid Control Code/Traction Control/ABS Ramp Control/ABS Chart */
  /* During: Foreground/Control/Hybrid Control Code/Traction Control/ABS Ramp Control/ABS Chart */
  if (localDW->s181_is_active_c12_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Hybrid Control Code/Traction Control/ABS Ramp Control/ABS Chart */
    localDW->s181_is_active_c12_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S181>:8' */
    localDW->s181_is_c12_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Default;
  } else {
    switch (localDW->s181_is_c12_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Default:
      /* During 'Default': '<S181>:7' */
      if (rtu_Activate != 0.0) {
        /* Transition: '<S181>:10' */
        localDW->s181_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RampOut;

        /* Entry 'RampOut': '<S181>:9' */
        localDW->s181_lastTorque = rtu_TorqueIn;
      } else {
        localB->s181_TorqueOut = rtu_TorqueIn;
      }
      break;

     case Mooventure2016_Rev5_IN_RampIn:
      /* During 'RampIn': '<S181>:13' */
      if (localB->s181_TorqueOut >= rtu_TorqueIn) {
        /* Transition: '<S181>:15' */
        localDW->s181_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Default;
      } else {
        localB->s181_TorqueOut = localDW->s181_lastTorque;
        localDW->s181_lastTorque = localDW->s181_lastTorque + rtu_RampIn;
      }
      break;

     case Mooventure2016_Rev5_IN_RampOut:
      /* During 'RampOut': '<S181>:9' */
      if (localB->s181_TorqueOut <= rtu_MinTorque) {
        /* Transition: '<S181>:18' */
        localDW->s181_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Saturated;
      } else if (!(rtu_Activate != 0.0)) {
        /* Transition: '<S181>:20' */
        localDW->s181_is_c12_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_RampIn;
      } else {
        localB->s181_TorqueOut = localDW->s181_lastTorque;
        localDW->s181_lastTorque = localDW->s181_lastTorque - rtu_RampOut;
      }
      break;

     case Mooventure2016_Rev5_IN_Saturated:
      /* During 'Saturated': '<S181>:16' */
      if (!(rtu_Activate != 0.0)) {
        /* Transition: '<S181>:21' */
        localDW->s181_is_c12_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_RampIn;
      } else {
        localB->s181_TorqueOut = rtu_MinTorque;
      }
      break;

     default:
      /* Transition: '<S181>:8' */
      localDW->s181_is_c12_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Default;
      break;
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S532>/Heater Core Motion Control'
 *    '<S532>/Radiator Motion Control'
 */
void Mooventure2016_Rev5_HeaterCoreMotionControl(real_T rtu_currPos, real_T
  rtu_posRequest, real_T rtu_hyst,
  rtB_HeaterCoreMotionControl_Mooventure2016_Rev5 *localB)
{
  /* MATLAB Function 'Foreground/Outputs/Coolant Outputs/Heater Core Motion Control': '<S582>:1' */
  if ((rtu_currPos <= rtu_posRequest + rtu_hyst) && (rtu_currPos >=
       rtu_posRequest - rtu_hyst)) {
    /* '<S582>:1:3' */
    /* '<S582>:1:4' */
    localB->s582_motorEnable = 0.0;

    /* '<S582>:1:5' */
    localB->s582_motorDirection = 0.0;
  } else if (rtu_currPos < rtu_posRequest) {
    /* '<S582>:1:6' */
    /* '<S582>:1:7' */
    localB->s582_motorEnable = 1.0;

    /* '<S582>:1:8' */
    localB->s582_motorDirection = 0.0;
  } else if (rtu_currPos > rtu_posRequest) {
    /* '<S582>:1:9' */
    /* '<S582>:1:10' */
    localB->s582_motorEnable = 1.0;

    /* '<S582>:1:11' */
    localB->s582_motorDirection = 1.0;
  } else {
    /* '<S582>:1:13' */
    localB->s582_motorEnable = 0.0;

    /* '<S582>:1:14' */
    localB->s582_motorDirection = 0.0;
  }
}

/* Function for Stateflow: '<S15>/Chart' */
static void Mooventure2016_Rev5_Master(void)
{
  real_T u;

  /* During 'Master': '<S28>:82' */
  /* Simulink Function 'calc_max': '<S28>:138' */
  Mooventure2016_Rev5_B.s28_u1 = Mooventure2016_Rev5_B.s367_Merge;
  Mooventure2016_Rev5_B.s28_u2 = Mooventure2016_Rev5_B.s452_Merge;
  Mooventure2016_Rev5_B.s28_u3 = Mooventure2016_Rev5_B.s189_MinCellTemperature;
  Mooventure2016_Rev5_B.s28_u4 = Mooventure2016_Rev5_B.s189_MaxCellTemperature;
  Mooventure2016_Rev5_B.s28_u5 = Mooventure2016_Rev5_B.s399_Merge +
    (Engine_Fan_Offset_DataStore());
  Mooventure2016_Rev5_B.s28_u6 = Mooventure2016_Rev5_B.s404_Merge;
  Mooventure2016_Rev5_B.s28_u7 = Mooventure2016_Rev5_B.s15_DataTypeConversion;

  /* Outputs for Function Call SubSystem: '<S28>/Master.calc_max' */
  /* Switch: '<S38>/Switch' */
  if (Mooventure2016_Rev5_B.s28_u7 > 0.0) {
    /* MinMax: '<S38>/MinMax' */
    u = (Mooventure2016_Rev5_B.s28_u1 >= Mooventure2016_Rev5_B.s28_u2) ||
      rtIsNaN(Mooventure2016_Rev5_B.s28_u2) ? Mooventure2016_Rev5_B.s28_u1 :
      Mooventure2016_Rev5_B.s28_u2;
    u = (u >= Mooventure2016_Rev5_B.s28_u3) || rtIsNaN
      (Mooventure2016_Rev5_B.s28_u3) ? u : Mooventure2016_Rev5_B.s28_u3;
    u = (u >= Mooventure2016_Rev5_B.s28_u4) || rtIsNaN
      (Mooventure2016_Rev5_B.s28_u4) ? u : Mooventure2016_Rev5_B.s28_u4;
    u = (u >= Mooventure2016_Rev5_B.s28_u5) || rtIsNaN
      (Mooventure2016_Rev5_B.s28_u5) ? u : Mooventure2016_Rev5_B.s28_u5;
    Mooventure2016_Rev5_B.s38_Switch = (u >= Mooventure2016_Rev5_B.s28_u6) ||
      rtIsNaN(Mooventure2016_Rev5_B.s28_u6) ? u : Mooventure2016_Rev5_B.s28_u6;
  } else {
    /* MinMax: '<S38>/MinMax1' */
    u = (Mooventure2016_Rev5_B.s28_u2 >= Mooventure2016_Rev5_B.s28_u3) ||
      rtIsNaN(Mooventure2016_Rev5_B.s28_u3) ? Mooventure2016_Rev5_B.s28_u2 :
      Mooventure2016_Rev5_B.s28_u3;
    u = (u >= Mooventure2016_Rev5_B.s28_u4) || rtIsNaN
      (Mooventure2016_Rev5_B.s28_u4) ? u : Mooventure2016_Rev5_B.s28_u4;
    u = (u >= Mooventure2016_Rev5_B.s28_u5) || rtIsNaN
      (Mooventure2016_Rev5_B.s28_u5) ? u : Mooventure2016_Rev5_B.s28_u5;
    Mooventure2016_Rev5_B.s38_Switch = (u >= Mooventure2016_Rev5_B.s28_u6) ||
      rtIsNaN(Mooventure2016_Rev5_B.s28_u6) ? u : Mooventure2016_Rev5_B.s28_u6;
  }

  /* End of Switch: '<S38>/Switch' */
  /* End of Outputs for SubSystem: '<S28>/Master.calc_max' */
  /* Simulink Function 'calc_min': '<S28>:173' */
  Mooventure2016_Rev5_B.s28_u1_a = Mooventure2016_Rev5_B.s367_Merge;
  Mooventure2016_Rev5_B.s28_u2_e = Mooventure2016_Rev5_B.s452_Merge;
  Mooventure2016_Rev5_B.s28_u3_f = Mooventure2016_Rev5_B.s189_MinCellTemperature;
  Mooventure2016_Rev5_B.s28_u4_d = Mooventure2016_Rev5_B.s189_MaxCellTemperature;
  Mooventure2016_Rev5_B.s28_u5_h = Mooventure2016_Rev5_B.s399_Merge +
    (Engine_Fan_Offset_DataStore());
  Mooventure2016_Rev5_B.s28_u6_k = Mooventure2016_Rev5_B.s404_Merge;
  Mooventure2016_Rev5_B.s28_u7_a = Mooventure2016_Rev5_B.s15_DataTypeConversion;

  /* Outputs for Function Call SubSystem: '<S28>/Master.calc_min' */
  /* Switch: '<S39>/Switch' */
  if (Mooventure2016_Rev5_B.s28_u7_a > 0.0) {
    /* MinMax: '<S39>/MinMax' */
    u = (Mooventure2016_Rev5_B.s28_u1_a <= Mooventure2016_Rev5_B.s28_u2_e) ||
      rtIsNaN(Mooventure2016_Rev5_B.s28_u2_e) ? Mooventure2016_Rev5_B.s28_u1_a :
      Mooventure2016_Rev5_B.s28_u2_e;
    u = (u <= Mooventure2016_Rev5_B.s28_u3_f) || rtIsNaN
      (Mooventure2016_Rev5_B.s28_u3_f) ? u : Mooventure2016_Rev5_B.s28_u3_f;
    u = (u <= Mooventure2016_Rev5_B.s28_u4_d) || rtIsNaN
      (Mooventure2016_Rev5_B.s28_u4_d) ? u : Mooventure2016_Rev5_B.s28_u4_d;
    u = (u <= Mooventure2016_Rev5_B.s28_u5_h) || rtIsNaN
      (Mooventure2016_Rev5_B.s28_u5_h) ? u : Mooventure2016_Rev5_B.s28_u5_h;
    Mooventure2016_Rev5_B.s39_Switch = (u <= Mooventure2016_Rev5_B.s28_u6_k) ||
      rtIsNaN(Mooventure2016_Rev5_B.s28_u6_k) ? u :
      Mooventure2016_Rev5_B.s28_u6_k;
  } else {
    /* MinMax: '<S39>/MinMax1' */
    u = (Mooventure2016_Rev5_B.s28_u2_e <= Mooventure2016_Rev5_B.s28_u3_f) ||
      rtIsNaN(Mooventure2016_Rev5_B.s28_u3_f) ? Mooventure2016_Rev5_B.s28_u2_e :
      Mooventure2016_Rev5_B.s28_u3_f;
    u = (u <= Mooventure2016_Rev5_B.s28_u4_d) || rtIsNaN
      (Mooventure2016_Rev5_B.s28_u4_d) ? u : Mooventure2016_Rev5_B.s28_u4_d;
    u = (u <= Mooventure2016_Rev5_B.s28_u5_h) || rtIsNaN
      (Mooventure2016_Rev5_B.s28_u5_h) ? u : Mooventure2016_Rev5_B.s28_u5_h;
    Mooventure2016_Rev5_B.s39_Switch = (u <= Mooventure2016_Rev5_B.s28_u6_k) ||
      rtIsNaN(Mooventure2016_Rev5_B.s28_u6_k) ? u :
      Mooventure2016_Rev5_B.s28_u6_k;
  }

  /* End of Switch: '<S39>/Switch' */
  /* End of Outputs for SubSystem: '<S28>/Master.calc_min' */
  /* During 'Fan': '<S28>:83' */
  switch (Mooventure2016_Rev5_DWork.s28_is_Fan) {
   case Mooventure2016_Rev5_IN_FanHigh:
    /* During 'FanHigh': '<S28>:93' */
    if ((!(Mooventure2016_Rev5_B.s15_DataTypeConversion3 != 0.0)) &&
        (!(Mooventure2016_Rev5_B.s279_Merge != 0.0)) &&
        (!(Mooventure2016_Rev5_B.s280_Merge != 0.0)) &&
        (Mooventure2016_Rev5_B.s38_Switch < (Low_Threshold_DataStore()) - 1.0))
    {
      /* Transition: '<S28>:103' */
      Mooventure2016_Rev5_DWork.s28_is_Fan = Mooventure2016_Rev5_IN_FanOff;
    } else if ((!(Mooventure2016_Rev5_B.s15_DataTypeConversion3 != 0.0)) &&
               (!(Mooventure2016_Rev5_B.s279_Merge != 0.0)) &&
               (!(Mooventure2016_Rev5_B.s280_Merge != 0.0)) &&
               (Mooventure2016_Rev5_B.s38_Switch < (High_Threshold_DataStore())
                - 1.0)) {
      /* Transition: '<S28>:104' */
      Mooventure2016_Rev5_DWork.s28_is_Fan = Mooventure2016_Rev5_IN_FanMed;
    } else {
      Mooventure2016_Rev5_B.s28_fan = 3.0;
    }
    break;

   case Mooventure2016_Rev5_IN_FanLow:
    /* During 'FanLow': '<S28>:91' */
    if ((Mooventure2016_Rev5_B.s15_DataTypeConversion3 != 0.0) ||
        (Mooventure2016_Rev5_B.s279_Merge != 0.0) ||
        (Mooventure2016_Rev5_B.s280_Merge != 0.0)) {
      /* Transition: '<S28>:96' */
      Mooventure2016_Rev5_DWork.s28_is_Fan = Mooventure2016_Rev5_IN_FanHigh;
    } else if (Mooventure2016_Rev5_B.s38_Switch < (Low_Threshold_DataStore()) -
               1.0) {
      /* Transition: '<S28>:100' */
      Mooventure2016_Rev5_DWork.s28_is_Fan = Mooventure2016_Rev5_IN_FanOff;
    } else if (Mooventure2016_Rev5_B.s38_Switch > (Medium_Threshold_DataStore())
               + 1.0) {
      /* Transition: '<S28>:101' */
      Mooventure2016_Rev5_DWork.s28_is_Fan = Mooventure2016_Rev5_IN_FanMed;
    } else {
      Mooventure2016_Rev5_B.s28_fan = 1.0;
    }
    break;

   case Mooventure2016_Rev5_IN_FanMed:
    /* During 'FanMed': '<S28>:92' */
    if ((Mooventure2016_Rev5_B.s15_DataTypeConversion3 != 0.0) ||
        (Mooventure2016_Rev5_B.s279_Merge != 0.0) ||
        (Mooventure2016_Rev5_B.s280_Merge != 0.0) ||
        (Mooventure2016_Rev5_B.s38_Switch > (High_Threshold_DataStore()) + 1.0))
    {
      /* Transition: '<S28>:97' */
      Mooventure2016_Rev5_DWork.s28_is_Fan = Mooventure2016_Rev5_IN_FanHigh;
    } else if (Mooventure2016_Rev5_B.s38_Switch < (Medium_Threshold_DataStore())
               - 1.0) {
      /* Transition: '<S28>:102' */
      Mooventure2016_Rev5_DWork.s28_is_Fan = Mooventure2016_Rev5_IN_FanLow;
    } else {
      Mooventure2016_Rev5_B.s28_fan = 2.0;
    }
    break;

   case Mooventure2016_Rev5_IN_FanOff:
    /* During 'FanOff': '<S28>:90' */
    if ((Mooventure2016_Rev5_B.s15_DataTypeConversion3 != 0.0) ||
        (Mooventure2016_Rev5_B.s279_Merge != 0.0) ||
        (Mooventure2016_Rev5_B.s280_Merge != 0.0)) {
      /* Transition: '<S28>:95' */
      Mooventure2016_Rev5_DWork.s28_is_Fan = Mooventure2016_Rev5_IN_FanHigh;
    } else if (Mooventure2016_Rev5_B.s38_Switch > (Low_Threshold_DataStore()) +
               1.0) {
      /* Transition: '<S28>:99' */
      Mooventure2016_Rev5_DWork.s28_is_Fan = Mooventure2016_Rev5_IN_FanLow;
    } else {
      Mooventure2016_Rev5_B.s28_fan = 0.0;
    }
    break;

   default:
    /* Transition: '<S28>:183' */
    Mooventure2016_Rev5_DWork.s28_is_Fan = Mooventure2016_Rev5_IN_FanOff;
    break;
  }

  /* During 'RadBlend': '<S28>:176' */
  switch (Mooventure2016_Rev5_DWork.s28_is_RadBlend) {
   case Mooventure2016_Rev5_IN_Closed:
    /* During 'Closed': '<S28>:241' */
    if ((Mooventure2016_Rev5_B.s38_Switch > (Pump_On_Temp_DataStore())) &&
        (!(Mooventure2016_Rev5_B.s39_Switch < (Heat1_Threshold_DataStore()) -
           1.0))) {
      /* Transition: '<S28>:244' */
      Mooventure2016_Rev5_DWork.s28_is_RadBlend = Mooventure2016_Rev5_IN_Open;
    } else {
      Mooventure2016_Rev5_B.s28_RadBlendOut = 231.0;
    }
    break;

   case Mooventure2016_Rev5_IN_Open:
    /* During 'Open': '<S28>:242' */
    if (Mooventure2016_Rev5_B.s38_Switch < (Pump_Off_Temp_DataStore())) {
      /* Transition: '<S28>:245' */
      Mooventure2016_Rev5_DWork.s28_is_RadBlend = Mooventure2016_Rev5_IN_Closed;
    } else {
      Mooventure2016_Rev5_B.s28_RadBlendOut = 20.0;
    }
    break;

   default:
    /* Transition: '<S28>:265' */
    Mooventure2016_Rev5_DWork.s28_is_RadBlend = Mooventure2016_Rev5_IN_Closed;
    break;
  }

  /* During 'CoreBlend': '<S28>:178' */
  switch (Mooventure2016_Rev5_DWork.s28_is_CoreBlend) {
   case Mooventure2016_Rev5_IN_Closed:
    /* During 'Closed': '<S28>:246' */
    if (Mooventure2016_Rev5_B.s39_Switch < (Heat1_Threshold_DataStore()) - 1.0)
    {
      /* Transition: '<S28>:252' */
      Mooventure2016_Rev5_DWork.s28_is_CoreBlend = Mooventure2016_Rev5_IN_Open;
    } else {
      Mooventure2016_Rev5_B.s28_CoreBlendOut = 20.0;
    }
    break;

   case Mooventure2016_Rev5_IN_Open:
    /* During 'Open': '<S28>:248' */
    if (Mooventure2016_Rev5_B.s39_Switch > (Heat1_Threshold_DataStore()) + 1.0)
    {
      /* Transition: '<S28>:251' */
      Mooventure2016_Rev5_DWork.s28_is_CoreBlend = Mooventure2016_Rev5_IN_Closed;
    } else {
      Mooventure2016_Rev5_B.s28_CoreBlendOut = 231.0;
    }
    break;

   default:
    /* Transition: '<S28>:266' */
    Mooventure2016_Rev5_DWork.s28_is_CoreBlend = Mooventure2016_Rev5_IN_Closed;
    break;
  }

  /* During 'RadPump': '<S28>:174' */
  switch (Mooventure2016_Rev5_DWork.s28_is_RadPump) {
   case Mooventure2016_Rev5_IN_Off:
    /* During 'Off': '<S28>:254' */
    if ((Mooventure2016_Rev5_B.s38_Switch > (Pump_On_Temp_DataStore())) ||
        (Mooventure2016_Rev5_B.s39_Switch < (Heat1_Threshold_DataStore()) - 1.0))
    {
      /* Transition: '<S28>:260' */
      Mooventure2016_Rev5_DWork.s28_is_RadPump = Mooventure2016_Rev5_IN_On;
    } else {
      Mooventure2016_Rev5_B.s28_RadPump = 0.0;
    }
    break;

   case Mooventure2016_Rev5_IN_On:
    /* During 'On': '<S28>:257' */
    if ((Mooventure2016_Rev5_B.s38_Switch < (Pump_Off_Temp_DataStore())) &&
        (Mooventure2016_Rev5_B.s39_Switch > (Heat1_Threshold_DataStore()) + 1.0))
    {
      /* Transition: '<S28>:261' */
      Mooventure2016_Rev5_DWork.s28_is_RadPump = Mooventure2016_Rev5_IN_Off;
    } else {
      Mooventure2016_Rev5_B.s28_RadPump = 1.0;
    }
    break;

   default:
    /* Transition: '<S28>:267' */
    Mooventure2016_Rev5_DWork.s28_is_RadPump = Mooventure2016_Rev5_IN_Off;
    break;
  }

  /* During 'Heater': '<S28>:89' */
  switch (Mooventure2016_Rev5_DWork.s28_is_Heater) {
   case Mooventure2016_Rev5_IN_Heat_0:
    /* During 'Heat_0': '<S28>:182' */
    if ((Mooventure2016_Rev5_B.s333_Merge < (Heat_On_Driver_Threshold_DataStore()))
        || (Mooventure2016_Rev5_B.s235_temp_reading >
            (Heater_Core_Threshold_DataStore()) + 2.0)) {
      /* Transition: '<S28>:236' */
      Mooventure2016_Rev5_DWork.s28_is_Heater =
        Mooventure2016_Rev5_IN_Use_Wants_Heat;

      /* Transition: '<S28>:235' */
      Mooventure2016_Rev5_DWork.s28_is_Use_Wants_Heat =
        Mooventure2016_Rev5_IN_Heat_1H;
    } else if (Mooventure2016_Rev5_B.s39_Switch < (Heat1_Threshold_DataStore())
               - 1.0) {
      /* Transition: '<S28>:238' */
      Mooventure2016_Rev5_DWork.s28_is_Heater =
        Mooventure2016_Rev5_IN_System_Cold;

      /* Transition: '<S28>:234' */
      Mooventure2016_Rev5_DWork.s28_is_System_Cold =
        Mooventure2016_Rev5_IN_Heat_1;
    } else {
      Mooventure2016_Rev5_B.s28_Heat1 = 0.0;
      Mooventure2016_Rev5_B.s28_Heat2 = 0.0;
      Mooventure2016_Rev5_B.s28_Heat3 = 0.0;
      Mooventure2016_Rev5_B.s28_Heat4 = 0.0;
    }
    break;

   case Mooventure2016_Rev5_IN_System_Cold:
    /* During 'System_Cold': '<S28>:217' */
    if (Mooventure2016_Rev5_B.s39_Switch > (Heat1_Threshold_DataStore()) + 1.0)
    {
      /* Transition: '<S28>:239' */
      Mooventure2016_Rev5_DWork.s28_is_System_Cold = (uint8_T)
        Mooventure2016_Rev5_IN_NO_ACTIVE_CHILD_j;
      Mooventure2016_Rev5_DWork.s28_is_Heater = Mooventure2016_Rev5_IN_Heat_0;
    } else {
      switch (Mooventure2016_Rev5_DWork.s28_is_System_Cold) {
       case Mooventure2016_Rev5_IN_Heat_1:
        /* During 'Heat_1': '<S28>:193' */
        if (Mooventure2016_Rev5_B.s39_Switch < (Heat2_Threshold_DataStore()) -
            1.0) {
          /* Transition: '<S28>:210' */
          Mooventure2016_Rev5_DWork.s28_is_System_Cold =
            Mooventure2016_Rev5_IN_Heat_2;
        } else {
          Mooventure2016_Rev5_B.s28_Heat1 = 1.0;
          Mooventure2016_Rev5_B.s28_Heat2 = 0.0;
          Mooventure2016_Rev5_B.s28_Heat3 = 0.0;
          Mooventure2016_Rev5_B.s28_Heat4 = 0.0;
        }
        break;

       case Mooventure2016_Rev5_IN_Heat_2:
        /* During 'Heat_2': '<S28>:195' */
        if (Mooventure2016_Rev5_B.s39_Switch < (Heat3_Threshold_DataStore()) -
            1.0) {
          /* Transition: '<S28>:211' */
          Mooventure2016_Rev5_DWork.s28_is_System_Cold =
            Mooventure2016_Rev5_IN_Heat_3;
        } else if (Mooventure2016_Rev5_B.s39_Switch > (Heat2_Threshold_DataStore
                    ()) + 1.0) {
          /* Transition: '<S28>:215' */
          Mooventure2016_Rev5_DWork.s28_is_System_Cold =
            Mooventure2016_Rev5_IN_Heat_1;
        } else {
          Mooventure2016_Rev5_B.s28_Heat1 = 1.0;
          Mooventure2016_Rev5_B.s28_Heat2 = 1.0;
          Mooventure2016_Rev5_B.s28_Heat3 = 0.0;
          Mooventure2016_Rev5_B.s28_Heat4 = 0.0;
        }
        break;

       case Mooventure2016_Rev5_IN_Heat_3:
        /* During 'Heat_3': '<S28>:196' */
        if (Mooventure2016_Rev5_B.s39_Switch < (Heat4_Threshold_DataStore()) -
            1.0) {
          /* Transition: '<S28>:212' */
          Mooventure2016_Rev5_DWork.s28_is_System_Cold =
            Mooventure2016_Rev5_IN_Heat_4;
        } else if (Mooventure2016_Rev5_B.s39_Switch > (Heat3_Threshold_DataStore
                    ()) + 1.0) {
          /* Transition: '<S28>:214' */
          Mooventure2016_Rev5_DWork.s28_is_System_Cold =
            Mooventure2016_Rev5_IN_Heat_2;
        } else {
          Mooventure2016_Rev5_B.s28_Heat1 = 1.0;
          Mooventure2016_Rev5_B.s28_Heat2 = 1.0;
          Mooventure2016_Rev5_B.s28_Heat3 = 1.0;
          Mooventure2016_Rev5_B.s28_Heat4 = 0.0;
        }
        break;

       case Mooventure2016_Rev5_IN_Heat_4:
        /* During 'Heat_4': '<S28>:197' */
        if (Mooventure2016_Rev5_B.s39_Switch > (Heat4_Threshold_DataStore()) +
            1.0) {
          /* Transition: '<S28>:213' */
          Mooventure2016_Rev5_DWork.s28_is_System_Cold =
            Mooventure2016_Rev5_IN_Heat_3;
        } else {
          Mooventure2016_Rev5_B.s28_Heat1 = 1.0;
          Mooventure2016_Rev5_B.s28_Heat2 = 1.0;
          Mooventure2016_Rev5_B.s28_Heat3 = 1.0;
          Mooventure2016_Rev5_B.s28_Heat4 = 1.0;
        }
        break;

       default:
        /* Transition: '<S28>:234' */
        Mooventure2016_Rev5_DWork.s28_is_System_Cold =
          Mooventure2016_Rev5_IN_Heat_1;
        break;
      }
    }
    break;

   case Mooventure2016_Rev5_IN_Use_Wants_Heat:
    /* During 'Use_Wants_Heat': '<S28>:218' */
    if ((Mooventure2016_Rev5_B.s333_Merge >= (Heat_On_Driver_Threshold_DataStore
          ())) && (Mooventure2016_Rev5_B.s235_temp_reading <
                   (Heater_Core_Threshold_DataStore()) - 2.0)) {
      /* Transition: '<S28>:237' */
      Mooventure2016_Rev5_DWork.s28_is_Use_Wants_Heat = (uint8_T)
        Mooventure2016_Rev5_IN_NO_ACTIVE_CHILD_j;
      Mooventure2016_Rev5_DWork.s28_is_Heater = Mooventure2016_Rev5_IN_Heat_0;
    } else if (Mooventure2016_Rev5_B.s39_Switch < (Heat1_Threshold_DataStore())
               - 1.0) {
      /* Transition: '<S28>:240' */
      Mooventure2016_Rev5_DWork.s28_is_Use_Wants_Heat = (uint8_T)
        Mooventure2016_Rev5_IN_NO_ACTIVE_CHILD_j;
      Mooventure2016_Rev5_DWork.s28_is_Heater =
        Mooventure2016_Rev5_IN_System_Cold;

      /* Transition: '<S28>:234' */
      Mooventure2016_Rev5_DWork.s28_is_System_Cold =
        Mooventure2016_Rev5_IN_Heat_1;
    } else {
      switch (Mooventure2016_Rev5_DWork.s28_is_Use_Wants_Heat) {
       case Mooventure2016_Rev5_IN_Heat_1H:
        /* During 'Heat_1H': '<S28>:221' */
        if (Mooventure2016_Rev5_B.s235_temp_reading <
            (Heater_Core_Threshold_DataStore()) - 4.0) {
          /* Transition: '<S28>:228' */
          Mooventure2016_Rev5_DWork.s28_is_Use_Wants_Heat =
            Mooventure2016_Rev5_IN_Heat_2H;
        } else {
          Mooventure2016_Rev5_B.s28_Heat1 = 1.0;
          Mooventure2016_Rev5_B.s28_Heat2 = 0.0;
          Mooventure2016_Rev5_B.s28_Heat3 = 0.0;
          Mooventure2016_Rev5_B.s28_Heat4 = 0.0;
        }
        break;

       case Mooventure2016_Rev5_IN_Heat_2H:
        /* During 'Heat_2H': '<S28>:223' */
        if (Mooventure2016_Rev5_B.s235_temp_reading <
            (Heater_Core_Threshold_DataStore()) - 8.0) {
          /* Transition: '<S28>:229' */
          Mooventure2016_Rev5_DWork.s28_is_Use_Wants_Heat =
            Mooventure2016_Rev5_IN_Heat_3H;
        } else if (Mooventure2016_Rev5_B.s235_temp_reading >
                   (Heater_Core_Threshold_DataStore())) {
          /* Transition: '<S28>:233' */
          Mooventure2016_Rev5_DWork.s28_is_Use_Wants_Heat =
            Mooventure2016_Rev5_IN_Heat_1H;
        } else {
          Mooventure2016_Rev5_B.s28_Heat1 = 1.0;
          Mooventure2016_Rev5_B.s28_Heat2 = 1.0;
          Mooventure2016_Rev5_B.s28_Heat3 = 0.0;
          Mooventure2016_Rev5_B.s28_Heat4 = 0.0;
        }
        break;

       case Mooventure2016_Rev5_IN_Heat_3H:
        /* During 'Heat_3H': '<S28>:226' */
        if (Mooventure2016_Rev5_B.s235_temp_reading <
            (Heater_Core_Threshold_DataStore()) - 10.0) {
          /* Transition: '<S28>:230' */
          Mooventure2016_Rev5_DWork.s28_is_Use_Wants_Heat =
            Mooventure2016_Rev5_IN_Heat_4H;
        } else if (Mooventure2016_Rev5_B.s235_temp_reading >
                   (Heater_Core_Threshold_DataStore()) - 4.0) {
          /* Transition: '<S28>:232' */
          Mooventure2016_Rev5_DWork.s28_is_Use_Wants_Heat =
            Mooventure2016_Rev5_IN_Heat_2H;
        } else {
          Mooventure2016_Rev5_B.s28_Heat1 = 1.0;
          Mooventure2016_Rev5_B.s28_Heat2 = 1.0;
          Mooventure2016_Rev5_B.s28_Heat3 = 1.0;
          Mooventure2016_Rev5_B.s28_Heat4 = 0.0;
        }
        break;

       case Mooventure2016_Rev5_IN_Heat_4H:
        /* During 'Heat_4H': '<S28>:227' */
        if (Mooventure2016_Rev5_B.s235_temp_reading >
            (Heater_Core_Threshold_DataStore()) - 8.0) {
          /* Transition: '<S28>:231' */
          Mooventure2016_Rev5_DWork.s28_is_Use_Wants_Heat =
            Mooventure2016_Rev5_IN_Heat_3H;
        } else {
          Mooventure2016_Rev5_B.s28_Heat1 = 1.0;
          Mooventure2016_Rev5_B.s28_Heat2 = 1.0;
          Mooventure2016_Rev5_B.s28_Heat3 = 1.0;
          Mooventure2016_Rev5_B.s28_Heat4 = 1.0;
        }
        break;

       default:
        /* Transition: '<S28>:235' */
        Mooventure2016_Rev5_DWork.s28_is_Use_Wants_Heat =
          Mooventure2016_Rev5_IN_Heat_1H;
        break;
      }
    }
    break;

   default:
    /* Transition: '<S28>:184' */
    Mooventure2016_Rev5_DWork.s28_is_Heater = Mooventure2016_Rev5_IN_Heat_0;
    break;
  }

  /* During 'CorePump': '<S28>:175' */
  switch (Mooventure2016_Rev5_DWork.s28_is_CorePump) {
   case Mooventure2016_Rev5_IN_Off:
    /* During 'Off': '<S28>:255' */
    if ((Mooventure2016_Rev5_B.s39_Switch < (Heat1_Threshold_DataStore()) - 1.0)
        || (Mooventure2016_Rev5_B.s333_Merge >=
            (Heat_On_Driver_Threshold_DataStore()))) {
      /* Transition: '<S28>:262' */
      Mooventure2016_Rev5_DWork.s28_is_CorePump = Mooventure2016_Rev5_IN_On;
    } else {
      Mooventure2016_Rev5_B.s28_CorePump = 0.0;
    }
    break;

   case Mooventure2016_Rev5_IN_On:
    /* During 'On': '<S28>:259' */
    if ((Mooventure2016_Rev5_B.s39_Switch > (Heat1_Threshold_DataStore()) + 1.0)
        && (Mooventure2016_Rev5_B.s333_Merge <
            (Heat_On_Driver_Threshold_DataStore()))) {
      /* Transition: '<S28>:263' */
      Mooventure2016_Rev5_DWork.s28_is_CorePump = Mooventure2016_Rev5_IN_Off;
    } else {
      Mooventure2016_Rev5_B.s28_CorePump = 1.0;
    }
    break;

   default:
    /* Transition: '<S28>:268' */
    Mooventure2016_Rev5_DWork.s28_is_CorePump = Mooventure2016_Rev5_IN_Off;
    break;
  }
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = (rtNaN);
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* Initial conditions for function-call system: '<Root>/Foreground' */
void Mooventure2016_Rev5_Foreground_Init(void)
{
  /* InitializeConditions for Stateflow: '<S192>/Chart' */
  Mooventure2016_Rev5_DWork.s290_is_active_c29_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s290_is_c29_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s290_Out = 0.0;

  /* S-Function Block: <S302>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s302_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S306>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s306_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S114>/SystemState' */
  Mooventure2016_Rev5_DWork.s130_is_active_c30_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s130_is_c30_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s130_System = FALSE;

  /* S-Function Block: <S160>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s160_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S156>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s156_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S178>/ABS Chart' */
  Mooventure2016_Rev5_ABSChart_Init(&Mooventure2016_Rev5_B.s178_sf_ABSChart,
    &Mooventure2016_Rev5_DWork.s178_sf_ABSChart);

  /* S-Function Block: <S183>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s183_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S179>/CALC Chart' */
  Mooventure2016_Rev5_ABSChart_Init(&Mooventure2016_Rev5_B.s179_sf_CALCChart,
    &Mooventure2016_Rev5_DWork.s179_sf_CALCChart);

  /* S-Function Block: <S24>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s24_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S23>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s23_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S237>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s237_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S236>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s236_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S15>/Chart' */
  Mooventure2016_Rev5_DWork.s28_is_active_CoreBlend = 0U;
  Mooventure2016_Rev5_DWork.s28_is_CoreBlend = 0U;
  Mooventure2016_Rev5_DWork.s28_is_active_CorePump = 0U;
  Mooventure2016_Rev5_DWork.s28_is_CorePump = 0U;
  Mooventure2016_Rev5_DWork.s28_is_active_Fan = 0U;
  Mooventure2016_Rev5_DWork.s28_is_Fan = 0U;
  Mooventure2016_Rev5_DWork.s28_is_active_Heater = 0U;
  Mooventure2016_Rev5_DWork.s28_is_Heater = 0U;
  Mooventure2016_Rev5_DWork.s28_is_System_Cold = 0U;
  Mooventure2016_Rev5_DWork.s28_is_Use_Wants_Heat = 0U;
  Mooventure2016_Rev5_DWork.s28_is_active_RadBlend = 0U;
  Mooventure2016_Rev5_DWork.s28_is_RadBlend = 0U;
  Mooventure2016_Rev5_DWork.s28_is_active_RadPump = 0U;
  Mooventure2016_Rev5_DWork.s28_is_RadPump = 0U;
  Mooventure2016_Rev5_DWork.s28_is_active_c4_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s28_is_c4_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s28_count = 0.0;
  Mooventure2016_Rev5_B.s28_RadPump = 0.0;
  Mooventure2016_Rev5_B.s28_CorePump = 0.0;
  Mooventure2016_Rev5_B.s28_fan = 0.0;
  Mooventure2016_Rev5_B.s28_RadBlendOut = 0.0;
  Mooventure2016_Rev5_B.s28_CoreBlendOut = 0.0;
  Mooventure2016_Rev5_B.s28_Heat1 = 0.0;
  Mooventure2016_Rev5_B.s28_Heat2 = 0.0;
  Mooventure2016_Rev5_B.s28_Heat3 = 0.0;
  Mooventure2016_Rev5_B.s28_Heat4 = 0.0;

  /* S-Function Block: <S602>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s602_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S599>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s599_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S600>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s600_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S601>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s601_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S19>/Chart' */
  Mooventure2016_Rev5_DWork.s186_is_active_c1_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s186_is_c1_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s186_count = 0.0;
  Mooventure2016_Rev5_B.s186_Vehicle_Enable = FALSE;
  Mooventure2016_Rev5_B.s186_Vehicle_Ready = FALSE;
  Mooventure2016_Rev5_B.s186_Torque_Enable = FALSE;
  Mooventure2016_Rev5_B.s186_Keyed_Relay = FALSE;

  /* InitializeConditions for Stateflow: '<S533>/Coil1State' */
  Mooventure2016_Rev5_DWork.s633_is_active_c8_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s633_is_c8_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s633_Coil1State = FALSE;

  /* InitializeConditions for Stateflow: '<S533>/Coil2State' */
  Mooventure2016_Rev5_DWork.s634_is_active_c9_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s634_is_c9_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s634_Coil2State = FALSE;

  /* InitializeConditions for Stateflow: '<S533>/Coil2State1' */
  Mooventure2016_Rev5_DWork.s635_is_active_c10_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s635_is_c10_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s635_Coil3State = FALSE;

  /* InitializeConditions for Stateflow: '<S534>/PowerSteering' */
  Mooventure2016_Rev5_DWork.s662_is_active_c28_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s662_is_c28_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s662_VehicleReadyOutput = FALSE;

  /* InitializeConditions for Stateflow: '<S534>/Chart' */
  Mooventure2016_Rev5_DWork.s655_is_active_c22_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s655_is_c22_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s655_count = 0.0;
  Mooventure2016_Rev5_B.s655_engTemp = 0.0;
  Mooventure2016_Rev5_B.s655_transTemp = 0.0;

  /* S-Function Block: <S660>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s660_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S67>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s67_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S68>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s68_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S69>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s69_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S70>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s70_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S71>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s71_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S66>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s66_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S16>/Chart' */
  Mooventure2016_Rev5_DWork.s58_is_Running = 0U;
  Mooventure2016_Rev5_DWork.s58_is_active_c33_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s58_is_c33_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s58_Genset_Enable = 0.0;
  Mooventure2016_Rev5_B.s58_Genset_Load = 0.0;
  Mooventure2016_Rev5_B.s58_Genset_RPM = 0.0;
  Mooventure2016_Rev5_B.s58_Genset_Throttle = 0.0;

  /* S-Function Block: <S823>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s823_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S842>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s842_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S841>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s841_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S89>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s89_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S90>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s90_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S303>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s303_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S304>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s304_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S305>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s305_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for S-Function (motohawk_sfun_fault_def): '<S101>/motohawk_fault_def2' */
  /* Reset Fault Downsample Counter: Pedal_Position_Sensor_A_Circuit_Intermittent */
  {
    Mooventure2016_Rev5_DWork.s101_motohawk_fault_def2_DWORK1 = 0;
  }

  /* S-Function Block: <S25>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s25_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S143>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s143_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S165>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s165_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }
}

/* Disable for function-call system: '<Root>/Foreground' */
void Mooventure2016_Rev5_Foreground_Disable(void)
{
  /* Disable for Enabled SubSystem: '<S118>/Drive' */
  /* Disable for Outport: '<S155>/IPT_Torque' */
  Mooventure2016_Rev5_B.s118_Torque_Direction = 0.0;
  Mooventure2016_Rev5_DWork.s118_Drive_MODE = FALSE;

  /* End of Disable for SubSystem: '<S118>/Drive' */

  /* Disable for Enabled SubSystem: '<S118>/Reverse' */
  Mooventure2016_Rev5_DWork.s118_Reverse_MODE = FALSE;

  /* End of Disable for SubSystem: '<S118>/Reverse' */
}

/* Start for function-call system: '<Root>/Foreground' */
void Mooventure2016_Rev5_Foreground_Start(void)
{
  /* Start for IfAction SubSystem: '<S18>/CrawlHomeMode' */

  /* InitializeConditions for Stateflow: '<S113>/Chart' */
  Mooventure2016_Rev5_Chart_Init(&Mooventure2016_Rev5_B.s113_sf_Chart,
    &Mooventure2016_Rev5_DWork.s113_sf_Chart);

  /* End of Start for SubSystem: '<S18>/CrawlHomeMode' */

  /* Start for IfAction SubSystem: '<S18>/EcoMode' */

  /* InitializeConditions for Stateflow: '<S115>/Chart' */
  Mooventure2016_Rev5_Chart_Init(&Mooventure2016_Rev5_B.s115_sf_Chart,
    &Mooventure2016_Rev5_DWork.s115_sf_Chart);

  /* End of Start for SubSystem: '<S18>/EcoMode' */

  /* Start for IfAction SubSystem: '<S18>/SUVMode' */

  /* InitializeConditions for Stateflow: '<S119>/Chart' */
  Mooventure2016_Rev5_Chart_Init(&Mooventure2016_Rev5_B.s119_sf_Chart,
    &Mooventure2016_Rev5_DWork.s119_sf_Chart);

  /* End of Start for SubSystem: '<S18>/SUVMode' */

  /* S-Function (motohawk_sfun_probe): '<S533>/motohawk_probe10' */
  (Coil5_AuxCoil_Probe_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S533>/motohawk_probe9' */
  (Coil4_MaleOrangeConnector_Probe_DataStore()) = 0.0;
}

/* Output and update for function-call system: '<Root>/Foreground' */
void Mooventure2016_Rev5_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_motohawk_delta_time;
  real_T rtb_motohawk_delta_time_k;
  real_T rtb_motohawk_delta_time_p;
  real_T rtb_motohawk_delta_time_m;
  real_T rtb_motohawk_delta_time_pj;
  real_T rtb_motohawk_interpolation_1d;
  real_T rtb_Merge_o;
  real_T rtb_Abs;
  real_T rtb_Merge_m;
  real_T rtb_motohawk_delta_time_ka;
  real_T rtb_DataTypeConversion_j;
  real_T rtb_Abs_f;
  real_T rtb_Merge_ci;
  real_T rtb_Merge_lu;
  real_T rtb_Merge_ny;
  real_T rtb_Merge_e;
  real_T rtb_Merge_nz;
  real_T rtb_Merge_og;
  real_T rtb_Merge_er;
  real_T rtb_Merge_a;
  real_T rtb_motohawk_delta_time_c;
  real_T rtb_motohawk_delta_time_n;
  real_T rtb_Merge_lm;
  real_T rtb_Merge_b;
  real_T rtb_Merge_iy;
  real_T rtb_motohawk_delta_time_b;
  real_T rtb_Merge_ox;
  real_T rtb_motohawk_delta_time_i;
  real_T rtb_motohawk_delta_time_g;
  real_T rtb_motohawk_delta_time_a;
  real_T rtb_Saturation;
  real_T rtb_Saturation_i;
  real_T rtb_Saturation_l;
  real_T rtb_Saturation_f;
  real_T rtb_Merge_cu;
  real_T rtb_Merge_nyh;
  real_T rtb_Merge_m1;
  real_T rtb_Merge_kt;
  real_T rtb_Merge_e3;
  real_T rtb_Merge_ofx;
  real_T rtb_motohawk_delta_time_kay;
  real_T rtb_Add;
  real_T rtb_Merge_iz;
  real_T rtb_Merge_gv;
  real_T rtb_Merge_mf;
  real_T rtb_Merge_pb;
  real_T rtb_Merge_ogk;
  real_T rtb_Merge_d;
  real_T rtb_Merge_ho;
  real_T rtb_Merge_mb;
  real_T rtb_Merge_fj;
  real_T rtb_Merge_ah;
  real_T rtb_Merge_koh;
  real_T rtb_Merge_pj;
  real_T rtb_Merge_cd;
  real_T rtb_Merge_ca;
  real_T rtb_Merge_mw;
  real_T rtb_Merge_bm;
  real_T rtb_Merge_dh;
  real_T rtb_Merge_jb;
  real_T rtb_Merge_izg;
  real_T rtb_Merge_dv;
  real_T rtb_Merge_hod;
  real_T rtb_Merge_ov;
  real_T rtb_Merge_k2;
  real_T rtb_Merge_md;
  real_T rtb_Merge_gp;
  real_T rtb_Merge_mt;
  real_T rtb_Merge_kq;
  real_T rtb_Merge_jo;
  real_T rtb_Merge_kz;
  real_T rtb_Merge_m4;
  real_T rtb_Merge_aq;
  real_T rtb_motohawk_delta_time_e;
  real_T rtb_motohawk_delta_time_my;
  real_T rtb_motohawk_delta_time_j;
  real_T rtb_motohawk_delta_time_kg;
  real_T rtb_motohawk_delta_time_p0;
  real_T rtb_motohawk_delta_time_o;
  real_T rtb_Merge_ogr;
  real_T rtb_Merge_ou;
  real_T rtb_Merge_ai;
  real_T rtb_Merge_fw;
  real_T rtb_motohawk_delta_time_l;
  real_T rtb_Merge_kv;
  real_T rtb_Merge_kf;
  real_T rtb_Merge_cz;
  real_T rtb_Merge_nzb;
  real_T rtb_Merge_go;
  real_T rtb_Merge_il;
  real_T rtb_motohawk_delta_time_gp;
  real_T rtb_motohawk_delta_time_md;
  real_T rtb_Merge_e2;
  real_T rtb_Merge_ee;
  real_T rtb_Merge_pi;
  real_T rtb_Merge_bi;
  real_T rtb_Saturation_lh;
  real_T rtb_Saturation_j;
  real_T rtb_Saturation_c;
  real_T rtb_Merge_je;
  real_T rtb_motohawk_delta_time_iy;
  real_T rtb_Saturation_o;
  real_T rtb_motohawk_delta_time_o5;
  real_T rtb_Saturation_d;
  real_T rtb_Merge_jk;
  real_T rtb_motohawk_delta_time_p1;
  real_T rtb_motohawk_delta_time_cz;
  real_T rtb_motohawk_delta_time_f;
  real_T rtb_motohawk_delta_time_ey;
  real_T rtb_Saturation_im;
  real_T rtb_Saturation_ds;
  real_T rtb_Saturation_b;
  real_T rtb_Saturation_a;
  real_T rtb_Saturation_k;
  real_T rtb_Saturation_m;
  real_T rtb_Saturation_br;
  real_T rtb_Saturation_e;
  real_T rtb_Saturation_in;
  real_T rtb_Product1_h;
  real_T rtb_motohawk_delta_time_ok;
  real_T rtb_motohawk_delta_time_kf;
  real_T rtb_Saturation_mr;
  real_T rtb_Saturation_ib;
  real_T rtb_Saturation_kw;
  real_T rtb_Saturation_ij;
  real_T rtb_Saturation_df;
  real_T rtb_Saturation_ig;
  real_T rtb_reset;
  real_T rtb_ODO_out;
  real_T rtb_motohawk_interpolation_1d_c;
  real_T rtb_motohawk_interpolation_1d1;
  real_T rtb_Product_dp;
  real_T rtb_motohawk_interpolation_1d_n;
  real_T rtb_motohawk_interpolation_1d1_p;
  real_T rtb_Product_le;
  real_T rtb_motohawk_interpolation_1d_d;
  real_T rtb_motohawk_interpolation_1d1_n;
  real_T rtb_Product_j;
  real_T rtb_motohawk_interpolation_1d_e;
  real_T rtb_Add_e;
  real_T rtb_Add_l;
  real_T rtb_Switch_d;
  real_T rtb_Switch_e;
  real_T rtb_Switch_jf;
  real_T rtb_Switch_mf;
  real_T rtb_Switch_pn;
  int32_T rtb_DataTypeConversion1_g;
  uint32_T rtb_DataTypeConversion2_n;
  int16_T rtb_DataTypeConversion1_o;
  uint16_T rtb_motohawk_ain;
  index_T rtb_motohawk_prelookup;
  index_T rtb_motohawk_prelookup_i;
  index_T rtb_motohawk_prelookup1;
  index_T rtb_motohawk_prelookup_h;
  index_T rtb_motohawk_prelookup1_o;
  index_T rtb_motohawk_prelookup_f;
  index_T rtb_motohawk_prelookup1_p;
  index_T rtb_motohawk_prelookup_m;
  index_T rtb_motohawk_prelookup1_oo;
  index_T rtb_motohawk_prelookup_k;
  int8_T rtb_Merge_iq;
  boolean_T rtb_Ignition;
  boolean_T rtb_Merge_kj;
  boolean_T rtb_DataTypeConversion_gi;
  boolean_T rtb_DataTypeConversion3_i;
  boolean_T rtb_DataTypeConversion6;
  boolean_T rtb_Merge_gd;
  boolean_T rtb_Merge_dm;
  boolean_T rtb_Merge_ay5;
  boolean_T rtb_Merge_lq;
  boolean_T rtb_Merge_pi3;
  boolean_T rtb_Merge_of1;
  boolean_T rtb_Merge_ln;
  boolean_T rtb_Merge_oqt;
  boolean_T rtb_Merge_cg;
  boolean_T rtb_Merge_l1;
  boolean_T rtb_motohawk_din;
  boolean_T rtb_Eaton_Charging;
  boolean_T rtb_Merge_ef;
  boolean_T rtb_Merge_nv;
  boolean_T rtb_Merge_iu;
  boolean_T rtb_DataTypeConversion6_c;
  boolean_T rtb_DataTypeConversion5;
  boolean_T rtb_DataTypeConversion8;
  boolean_T rtb_Merge_kn;
  boolean_T rtb_Merge_pl;
  boolean_T rtb_Merge_e4;
  boolean_T rtb_Merge_br;
  boolean_T rtb_Merge_gn;
  boolean_T rtb_Merge_en;
  boolean_T rtb_Merge_opu;
  boolean_T rtb_Merge_oz;
  boolean_T rtb_Merge_ib;
  boolean_T rtb_RelationalOperator2_l;
  boolean_T rtb_Merge_ik;
  boolean_T rtb_Merge_e0;
  boolean_T rtb_Merge_m3;
  boolean_T rtb_Merge_nrr;
  boolean_T rtb_Merge_hz;
  boolean_T rtb_RelationalOperator1_c;
  boolean_T rtb_RelationalOperator5_g;
  boolean_T rtb_RelationalOperator2_mu;
  boolean_T rtb_RelationalOperator3_ih;
  boolean_T rtb_RelationalOperator4;
  boolean_T rtb_RelationalOperator6;
  boolean_T rtb_LogicalOperator_o;
  boolean_T rtb_LogicalOperator1_m;
  boolean_T rtb_motohawk_data_read_mb;
  boolean_T rtb_Merge_ck;
  boolean_T rtb_LogicalOperator2_p;
  boolean_T rtb_RelationalOperator1_p;
  boolean_T rtb_RelationalOperator2_d;
  boolean_T rtb_RelationalOperator3_h;
  boolean_T rtb_RelationalOperator4_m;
  boolean_T rtb_RelationalOperator1_cg;
  boolean_T rtb_RelationalOperator5_a;
  boolean_T rtb_LogicalOperator_a;
  boolean_T rtb_RelationalOperator2_la;
  boolean_T rtb_RelationalOperator6_i;
  boolean_T rtb_RelationalOperator2_cc;
  boolean_T rtb_LogicalOperator_oh;
  boolean_T rtb_RelationalOperator2_lg;
  boolean_T rtb_LogicalOperator1_aw;
  boolean_T rtb_RelationalOperator1_pt;
  boolean_T rtb_LogicalOperator_h;
  boolean_T rtb_RelationalOperator3_a;
  boolean_T rtb_RelationalOperator_l1;
  boolean_T rtb_RelationalOperator2_da;
  boolean_T rtb_RelationalOperator4_l;
  boolean_T rtb_RelationalOperator1_f;
  boolean_T rtb_RelationalOperator2_j;
  boolean_T rtb_LogicalOperator2_i;
  boolean_T rtb_RelationalOperator3_i3;
  boolean_T rtb_RelationalOperator12;
  boolean_T rtb_RelationalOperator1_ad;
  boolean_T rtb_RelationalOperator4_d;
  boolean_T rtb_RelationalOperator2_e;
  boolean_T rtb_RelationalOperator5_k;
  boolean_T rtb_LogicalOperator_j;
  boolean_T rtb_RelationalOperator8;
  boolean_T rtb_LogicalOperator1_j;
  boolean_T rtb_RelationalOperator11;
  boolean_T rtb_RelationalOperator3_lz;
  boolean_T rtb_RelationalOperator_m;
  boolean_T rtb_RelationalOperator2_h5;
  boolean_T rtb_RelationalOperator3_f;
  boolean_T rtb_LogicalOperator1_ax;
  boolean_T rtb_LogicalOperator2_m;
  boolean_T rtb_LogicalOperator4_p;
  boolean_T rtb_LogicalOperator1_hq;
  boolean_T rtb_RelationalOperator_ox;
  boolean_T rtb_LogicalOperator_f;
  boolean_T rtb_LogicalOperator2_ax;
  boolean_T rtb_LogicalOperator2_k;
  boolean_T rtb_RelationalOperator1_e;
  boolean_T rtb_LogicalOperator_pw;
  boolean_T rtb_LogicalOperator4_j;
  boolean_T rtb_LogicalOperator_d;
  boolean_T rtb_RelationalOperator1_j;
  boolean_T rtb_RelationalOperator12_h;
  boolean_T rtb_RelationalOperator11_l;
  boolean_T rtb_RelationalOperator2_i;
  boolean_T rtb_RelationalOperator3_jh;
  boolean_T rtb_LogicalOperator_hw;
  boolean_T rtb_RelationalOperator_lk;
  boolean_T rtb_LogicalOperator1_lt;
  boolean_T rtb_RelationalOperator8_e;
  boolean_T rtb_RelationalOperator9_k;
  boolean_T rtb_RelationalOperator10_b;
  boolean_T rtb_RelationalOperator2_id;
  boolean_T rtb_LogicalOperator2_c;
  boolean_T rtb_RelationalOperator_jg;
  boolean_T rtb_Eaton_Plugged_In;
  boolean_T rtb_Compare_nd;
  real_T rtb_UnitDelay_m;
  real_T rtb_UnitDelay_o;
  real_T rtb_Product;
  real_T rtb_Product5;
  real_T rtb_Product3;
  real_T rtb_Product4;
  uint8_T rtb_Compare;
  boolean_T rtb_LogicalOperator5;
  real_T rtb_Switch_m;
  real_T rtb_Switch_n;
  uint16_T rtb_Merge_c1;
  boolean_T rtb_LogicalOperator5_c;
  real_T rtb_Merge_l;
  real_T rtb_Sum1_j;
  real_T rtb_Merge_f;
  real_T rtb_Merge_ns;
  real_T rtb_Merge_o0;
  real_T rtb_Switch_h;
  int32_T rtb_Heater_Temp_Raw;
  int32_T rtb_Merge_gg;
  real_T rtb_Merge_cq;
  real_T rtb_Switch_fi;
  real_T rtb_Merge_bg;
  real_T rtb_Switch_c;
  real_T rtb_Merge_ko;
  real_T rtb_Merge_b0;
  real_T rtb_Sum1;
  real_T rtb_Merge_lf;
  real_T rtb_Merge_hn;
  real_T rtb_Switch_f;
  real_T rtb_DataTypeConversion3;
  real_T rtb_DataTypeConversion4;
  real_T rtb_Switch_ja;
  uint32_T rtb_Merge_nu;
  uint32_T rtb_Merge_mw2;
  boolean_T rtb_Merge_caz;
  boolean_T rtb_Merge_eh;
  boolean_T rtb_Merge_oi;
  boolean_T rtb_Merge_nl;
  boolean_T rtb_Merge_dr;
  real_T rtb_Sum1_c;

  /* UnitDelay: '<S140>/Unit Delay' */
  rtb_UnitDelay_m = Mooventure2016_Rev5_DWork.s140_UnitDelay_DSTATE;

  /* UnitDelay: '<S141>/Unit Delay' */
  rtb_UnitDelay_o = Mooventure2016_Rev5_DWork.s141_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_read_canmsg): '<S196>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4066p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4066p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s196_AgeCount + 1) >
        Mooventure2016_Rev5_B.s196_AgeCount)
      Mooventure2016_Rev5_B.s196_AgeCount++;
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint16_T tmp3 = 0;
      uint8_T tmp4 = 0;
      uint8_T tmp5 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[6])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[7])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[4])) ;
      ((uint8_T *)(&tmp1))[1] = ((msg_data[5])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[2] & 0x0000007F)) ;
      ((uint8_T *)(&tmp2))[1] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp3))[0] = ((msg_data[1] & 0x00000080) >> 7) | ((msg_data[0]
        & 0x0000000F) << 1) ;
      ((uint8_T *)(&tmp3))[1] = ((msg_data[2] & 0x00000080) >> 7) | ((msg_data[1]
        & 0x0000007F) << 1) ;
      ((uint8_T *)(&tmp4))[0] = ((msg_data[0] & 0x00000010) >> 4) ;
      ((uint8_T *)(&tmp5))[0] = ((msg_data[0] & 0x00000020) >> 5) ;
      Mooventure2016_Rev5_B.s196_IPT_CurrentUsed = (((real_T) tmp0) / ((real_T)
        10)) + ((real_T) -600);
      Mooventure2016_Rev5_B.s196_IPT_CurrentRequest = (((real_T) tmp1) /
        ((real_T) 10)) + ((real_T) -600);
      Mooventure2016_Rev5_B.s196_IPT_MotorSpeed = ((real_T) tmp2) + ((real_T)
        -15000);
      Mooventure2016_Rev5_B.s196_IPT_WheelTorqueDelivered = ((real_T) tmp3) +
        ((real_T) -4000);
      Mooventure2016_Rev5_B.s196_IPT_CurrentLimit = (real_T) tmp4;
      Mooventure2016_Rev5_B.s196_IPT_Antishudder = (real_T) tmp5;
      Mooventure2016_Rev5_B.s196_AgeCount = 0;
    }
  }

  /* If: '<S447>/If' incorporates:
   *  Inport: '<S505>/In1'
   *  Inport: '<S506>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S447>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S447>/override_enable'
   */
  if ((IPT_Motor_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S447>/NewValue' incorporates:
     *  ActionPort: '<S505>/Action Port'
     */
    Mooventure2016_Rev5_B.s447_Merge = (IPT_Motor_Speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S505>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(220);
    }

    /* End of Outputs for SubSystem: '<S447>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S447>/OldValue' incorporates:
     *  ActionPort: '<S506>/Action Port'
     */
    Mooventure2016_Rev5_B.s447_Merge = Mooventure2016_Rev5_B.s196_IPT_MotorSpeed;

    /* S-Function (motohawk_sfun_code_cover): '<S506>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(221);
    }

    /* End of Outputs for SubSystem: '<S447>/OldValue' */
  }

  /* End of If: '<S447>/If' */

  /* Product: '<S114>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration7'
   */
  rtb_Product = Mooventure2016_Rev5_B.s447_Merge * (MPH_Conversion_DataStore());

  /* S-Function Block: <S141>/motohawk_delta_time */
  rtb_motohawk_delta_time = 0.005;

  /* Switch: '<S138>/Switch' incorporates:
   *  Constant: '<S138>/Constant'
   *  Product: '<S141>/Product'
   *  RelationalOperator: '<S138>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S136>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S136>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_delta_time): '<S141>/motohawk_delta_time'
   *  Sum: '<S141>/Sum2'
   */
  if ((rtb_Product - rtb_UnitDelay_o) / rtb_motohawk_delta_time > 0.0) {
    rtb_Product5 = (ETC_DampGainUp_DataStore());
  } else {
    rtb_Product5 = (ETC_DampGainDown_DataStore());
  }

  /* End of Switch: '<S138>/Switch' */

  /* Product: '<S138>/Product3' */
  rtb_Product3 = rtb_Product5 * rtb_Product;

  /* S-Function Block: <S140>/motohawk_delta_time */
  rtb_motohawk_delta_time_k = 0.005;

  /* Product: '<S140>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S140>/motohawk_delta_time'
   *  Sum: '<S140>/Sum2'
   */
  Mooventure2016_Rev5_B.s140_Product = (rtb_Product3 - rtb_UnitDelay_m) /
    rtb_motohawk_delta_time_k;

  /* UnitDelay: '<S142>/Unit Delay' */
  rtb_UnitDelay_o = Mooventure2016_Rev5_DWork.s142_UnitDelay_DSTATE;

  /* Sum: '<S138>/Sum2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S114>/motohawk_data_read2'
   */
  Mooventure2016_Rev5_B.s138_Sum2 = CruiseSpeed_DataStore() - rtb_Product;

  /* Product: '<S138>/Product5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S136>/motohawk_calibration6'
   */
  rtb_Product5 = Mooventure2016_Rev5_B.s138_Sum2 * (ETC_ErrorGain_DataStore());

  /* Product: '<S138>/Product4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S136>/motohawk_calibration1'
   */
  rtb_Product4 = (ETC_DGain_DataStore()) * rtb_Product5;

  /* S-Function Block: <S142>/motohawk_delta_time */
  rtb_motohawk_delta_time_p = 0.005;

  /* Product: '<S142>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S142>/motohawk_delta_time'
   *  Sum: '<S142>/Sum2'
   */
  Mooventure2016_Rev5_B.s142_Product = (rtb_Product4 - rtb_UnitDelay_o) /
    rtb_motohawk_delta_time_p;

  /* Product: '<S138>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S136>/motohawk_calibration'
   */
  Mooventure2016_Rev5_B.s138_Product2 = (ETC_PGain_DataStore()) * rtb_Product5;

  /* RelationalOperator: '<S137>/Compare' incorporates:
   *  Constant: '<S137>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S127>/motohawk_data_read1'
   */
  rtb_Compare = CruiseOn_DataStore();

  /* Switch: '<S143>/Switch1' incorporates:
   *  RelationalOperator: '<S135>/FixPt Relational Operator'
   *  UnitDelay: '<S135>/Delay Input1'
   *  UnitDelay: '<S143>/Unit Delay'
   */
  if (rtb_Compare > Mooventure2016_Rev5_DWork.s135_DelayInput1_DSTATE) {
    Mooventure2016_Rev5_B.s143_Switch1 = 0.0;
  } else {
    Mooventure2016_Rev5_B.s143_Switch1 =
      Mooventure2016_Rev5_DWork.s143_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S143>/Switch1' */

  /* Sum: '<S136>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S136>/motohawk_calibration5'
   *  Sum: '<S138>/Sum'
   */
  rtb_Switch_m = (((Mooventure2016_Rev5_B.s142_Product -
                    Mooventure2016_Rev5_B.s140_Product) +
                   Mooventure2016_Rev5_B.s138_Product2) +
                  Mooventure2016_Rev5_B.s143_Switch1) + (ETC_DCOffset_DataStore());

  /* MinMax: '<S145>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S139>/motohawk_calibration'
   */
  rtb_UnitDelay_o = (rtb_Switch_m >= (ETC_LwrLim_DataStore())) || rtIsNaN
    ((ETC_LwrLim_DataStore())) ? rtb_Switch_m : (ETC_LwrLim_DataStore());

  /* MinMax: '<S145>/MinMax1' incorporates:
   *  MinMax: '<S145>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S139>/motohawk_calibration1'
   */
  Mooventure2016_Rev5_B.s145_MinMax1 = (rtb_UnitDelay_o <= (ETC_UprLim_DataStore
    ())) || rtIsNaN((ETC_UprLim_DataStore())) ? rtb_UnitDelay_o :
    (ETC_UprLim_DataStore());

  /* Logic: '<S114>/Logical Operator5' incorporates:
   *  Logic: '<S114>/Logical Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration'
   *  S-Function (motohawk_sfun_fault_action): '<S114>/motohawk_fault_action3'
   */
  rtb_LogicalOperator5 = (((Cruise_Control_Enable_DataStore()) != 0.0) &&
    (!GetFaultActionStatus(6)));

  /* S-Function Block: <S232>/motohawk_ain4 Resource: Cruise_Control */
  Mooventure2016_Rev5_B.s232_motohawk_ain4_o1 = Cruise_Control_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S249>/If' incorporates:
   *  Inport: '<S250>/In1'
   *  Inport: '<S251>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S249>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S249>/override_enable'
   */
  if ((Cruise_Control_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S249>/NewValue' incorporates:
     *  ActionPort: '<S250>/Action Port'
     */
    Mooventure2016_Rev5_B.s249_Merge = ((uint16_T)
      (Cruise_Control_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S250>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Cruise Control In/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(70);
    }

    /* End of Outputs for SubSystem: '<S249>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S249>/OldValue' incorporates:
     *  ActionPort: '<S251>/Action Port'
     */
    Mooventure2016_Rev5_B.s249_Merge =
      Mooventure2016_Rev5_B.s232_motohawk_ain4_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S251>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Cruise Control In/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(71);
    }

    /* End of Outputs for SubSystem: '<S249>/OldValue' */
  }

  /* End of If: '<S249>/If' */

  /* DataTypeConversion: '<S192>/Data Type Conversion' */
  rtb_UnitDelay_o = (real_T)Mooventure2016_Rev5_B.s249_Merge;

  /* Stateflow: '<S192>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration6'
   */

  /* Gateway: Foreground/Inputs/Cruise Control/Chart */
  /* During: Foreground/Inputs/Cruise Control/Chart */
  if (Mooventure2016_Rev5_DWork.s290_is_active_c29_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Inputs/Cruise Control/Chart */
    Mooventure2016_Rev5_DWork.s290_is_active_c29_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S290>:10' */
    Mooventure2016_Rev5_DWork.s290_is_c29_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_default_g;
  } else {
    switch (Mooventure2016_Rev5_DWork.s290_is_c29_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_ON:
      /* During 'ON': '<S290>:16' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S290>:34' */
        Mooventure2016_Rev5_DWork.s290_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default_g;
      } else {
        Mooventure2016_Rev5_B.s290_Out = 5.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Off_g:
      /* During 'Off': '<S290>:12' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S290>:35' */
        Mooventure2016_Rev5_DWork.s290_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default_g;
      } else {
        Mooventure2016_Rev5_B.s290_Out = 1.0;
      }
      break;

     case Mooventure2016_Rev5_IN_RSM:
      /* During 'RSM': '<S290>:15' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S290>:32' */
        Mooventure2016_Rev5_DWork.s290_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default_g;
      } else {
        Mooventure2016_Rev5_B.s290_Out = 4.0;
      }
      break;

     case Mooventure2016_Rev5_IN_SetMinus:
      /* During 'SetMinus': '<S290>:13' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S290>:26' */
        Mooventure2016_Rev5_DWork.s290_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default_g;
      } else {
        Mooventure2016_Rev5_B.s290_Out = 2.0;
      }
      break;

     case Mooventure2016_Rev5_IN_SetPlus:
      /* During 'SetPlus': '<S290>:14' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S290>:30' */
        Mooventure2016_Rev5_DWork.s290_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default_g;
      } else {
        Mooventure2016_Rev5_B.s290_Out = 3.0;
      }
      break;

     case Mooventure2016_Rev5_IN_default_g:
      /* During 'default': '<S290>:9' */
      if ((rtb_UnitDelay_o < (Off_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (Off_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S290>:22' */
        Mooventure2016_Rev5_DWork.s290_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Off_g;
      } else if ((rtb_UnitDelay_o < (SetPlus_DataStore()) + (HYST_DataStore())) &&
                 (rtb_UnitDelay_o > (SetPlus_DataStore()) - (HYST_DataStore())))
      {
        /* Transition: '<S290>:29' */
        Mooventure2016_Rev5_DWork.s290_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SetPlus;
      } else if ((rtb_UnitDelay_o < (RSM_DataStore()) + (HYST_DataStore())) &&
                 (rtb_UnitDelay_o > (RSM_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S290>:31' */
        Mooventure2016_Rev5_DWork.s290_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RSM;
      } else if ((rtb_UnitDelay_o < (ON_DataStore()) + (HYST_DataStore())) &&
                 (rtb_UnitDelay_o > (ON_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S290>:33' */
        Mooventure2016_Rev5_DWork.s290_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_ON;
      } else if ((rtb_UnitDelay_o < (SetMinus_DataStore()) + (HYST_DataStore()))
                 && (rtb_UnitDelay_o > (SetMinus_DataStore()) - (HYST_DataStore())))
      {
        /* Transition: '<S290>:38' */
        Mooventure2016_Rev5_DWork.s290_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SetMinus;
      } else {
        Mooventure2016_Rev5_B.s290_Out = 0.0;
      }
      break;

     default:
      /* Transition: '<S290>:10' */
      Mooventure2016_Rev5_DWork.s290_is_c29_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_default_g;
      break;
    }
  }

  /* End of Stateflow: '<S192>/Chart' */

  /* RelationalOperator: '<S291>/Compare' incorporates:
   *  Constant: '<S291>/Constant'
   */
  rtb_LogicalOperator2_c = (Mooventure2016_Rev5_B.s290_Out == 1.0);

  /* S-Function Block: <S302>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s302_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_m = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S302>/Switch' incorporates:
   *  Constant: '<S302>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S302>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S302>/motohawk_delta_time'
   *  Sum: '<S302>/Sum'
   */
  if (rtb_LogicalOperator2_c) {
    rtb_Switch_m = rtb_motohawk_delta_time_m + ButtonDelay1_DataStore();
  } else {
    rtb_Switch_m = 0.0;
  }

  /* End of Switch: '<S302>/Switch' */
  /* Logic: '<S285>/Logical Operator' incorporates:
   *  RelationalOperator: '<S285>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration7'
   */
  Mooventure2016_Rev5_B.s285_LogicalOperator = ((rtb_LogicalOperator2_c &&
    (rtb_Switch_m >= (Delay_DataStore()))));

  /* If: '<S296>/If' incorporates:
   *  Inport: '<S307>/In1'
   *  Inport: '<S308>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S296>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S296>/override_enable'
   */
  if ((Cruise_Control_Off_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S296>/NewValue' incorporates:
     *  ActionPort: '<S307>/Action Port'
     */
    rtb_Merge_caz = (Cruise_Control_Off_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S307>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(90);
    }

    /* End of Outputs for SubSystem: '<S296>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S296>/OldValue' incorporates:
     *  ActionPort: '<S308>/Action Port'
     */
    rtb_Merge_caz = Mooventure2016_Rev5_B.s285_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S308>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(91);
    }

    /* End of Outputs for SubSystem: '<S296>/OldValue' */
  }

  /* End of If: '<S296>/If' */

  /* RelationalOperator: '<S295>/Compare' incorporates:
   *  Constant: '<S295>/Constant'
   */
  rtb_LogicalOperator2_c = (Mooventure2016_Rev5_B.s290_Out == 5.0);

  /* S-Function Block: <S306>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s306_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_pj = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S306>/Switch' incorporates:
   *  Constant: '<S306>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S306>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S306>/motohawk_delta_time'
   *  Sum: '<S306>/Sum'
   */
  if (rtb_LogicalOperator2_c) {
    rtb_Switch_n = rtb_motohawk_delta_time_pj + ButtonDelay5_DataStore();
  } else {
    rtb_Switch_n = 0.0;
  }

  /* End of Switch: '<S306>/Switch' */

  /* Logic: '<S289>/Logical Operator' incorporates:
   *  RelationalOperator: '<S289>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration7'
   */
  Mooventure2016_Rev5_B.s289_LogicalOperator = ((rtb_LogicalOperator2_c &&
    (rtb_Switch_n >= (Delay_DataStore()))));

  /* If: '<S301>/If' incorporates:
   *  Inport: '<S317>/In1'
   *  Inport: '<S318>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S301>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S301>/override_enable'
   */
  if ((Cruise_Control_ON_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S301>/NewValue' incorporates:
     *  ActionPort: '<S317>/Action Port'
     */
    rtb_Merge_nl = (Cruise_Control_ON_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S317>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(100);
    }

    /* End of Outputs for SubSystem: '<S301>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S301>/OldValue' incorporates:
     *  ActionPort: '<S318>/Action Port'
     */
    rtb_Merge_nl = Mooventure2016_Rev5_B.s289_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S318>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(101);
    }

    /* End of Outputs for SubSystem: '<S301>/OldValue' */
  }

  /* End of If: '<S301>/If' */

  /* Stateflow: '<S114>/SystemState' */

  /* Gateway: Foreground/Control/Hybrid Control Code/Cruise Control/SystemState */
  /* During: Foreground/Control/Hybrid Control Code/Cruise Control/SystemState */
  if (Mooventure2016_Rev5_DWork.s130_is_active_c30_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Hybrid Control Code/Cruise Control/SystemState */
    Mooventure2016_Rev5_DWork.s130_is_active_c30_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S130>:4' */
    Mooventure2016_Rev5_DWork.s130_is_c30_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Off;
  } else {
    switch (Mooventure2016_Rev5_DWork.s130_is_c30_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Off:
      /* During 'Off': '<S130>:1' */
      if ((rtb_Merge_nl == TRUE) && (rtb_LogicalOperator5 == TRUE)) {
        /* Transition: '<S130>:5' */
        Mooventure2016_Rev5_DWork.s130_is_c30_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_On;
      } else {
        Mooventure2016_Rev5_B.s130_System = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_On:
      /* During 'On': '<S130>:2' */
      if ((rtb_Merge_caz == TRUE) || (rtb_LogicalOperator5 == FALSE)) {
        /* Transition: '<S130>:6' */
        Mooventure2016_Rev5_DWork.s130_is_c30_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Off;
      } else {
        Mooventure2016_Rev5_B.s130_System = TRUE;
      }
      break;

     default:
      /* Transition: '<S130>:4' */
      Mooventure2016_Rev5_DWork.s130_is_c30_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Off;
      break;
    }
  }

  /* End of Stateflow: '<S114>/SystemState' */

  /* Logic: '<S114>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S114>/motohawk_data_read1'
   */
  rtb_LogicalOperator5 = (CruiseOn_DataStore() &&
    Mooventure2016_Rev5_B.s130_System);

  /* Switch: '<S165>/Switch1' incorporates:
   *  Constant: '<S161>/Constant2'
   *  UnitDelay: '<S165>/Unit Delay'
   */
  if (Mooventure2016_Rev5_ConstB.s165_DataTypeConversion) {
    Mooventure2016_Rev5_B.s165_Switch1 = 0.0;
  } else {
    Mooventure2016_Rev5_B.s165_Switch1 =
      Mooventure2016_Rev5_DWork.s165_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S165>/Switch1' */
  /* S-Function Block: <S162>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ModifiedAmpSecIn_DataStore()) = Mooventure2016_Rev5_B.s165_Switch1;
    (ModifiedAmpSecIdx_DataStore()) = TablePrelookup_real_T
      (Mooventure2016_Rev5_B.s165_Switch1, (ModifiedAmpSecIdxArr_DataStore()), 4,
       (ModifiedAmpSecIdx_DataStore()));
    rtb_motohawk_prelookup = (ModifiedAmpSecIdx_DataStore());
  }

  /* S-Function Block: <S162>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup, (real_T *) ((TorqueLimMultiplierTbl_DataStore())),
       4);
    (TorqueLimMultiplier_DataStore()) = rtb_motohawk_interpolation_1d;
  }

  /* S-Function Block: <S160>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s160_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_mf = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S160>/Product' incorporates:
   *  MinMax: '<S160>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S160>/motohawk_calibration'
   */
  rtb_Switch_mf /= (rtb_Switch_mf >= (Overcurrent_Tq_Lim_Filter_DataStore())) ||
    rtIsNaN((Overcurrent_Tq_Lim_Filter_DataStore())) ? rtb_Switch_mf :
    (Overcurrent_Tq_Lim_Filter_DataStore());

  /* Sum: '<S163>/Sum1' incorporates:
   *  Constant: '<S163>/Constant'
   *  Product: '<S163>/Product'
   *  Product: '<S163>/Product1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S162>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S162>/motohawk_prelookup'
   *  Sum: '<S163>/Sum'
   *  UnitDelay: '<S163>/Unit Delay'
   */
  Mooventure2016_Rev5_B.s163_Sum1 = (1.0 - rtb_Switch_mf) *
    Mooventure2016_Rev5_DWork.s163_UnitDelay_DSTATE +
    rtb_motohawk_interpolation_1d * rtb_Switch_mf;

  /* Switch: '<S118>/Switch1' incorporates:
   *  Constant: '<S118>/Constant1'
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration1'
   */
  if ((CurrentLimitingEnabled_DataStore()) != 0.0) {
    rtb_Switch_mf = Mooventure2016_Rev5_B.s163_Sum1;
  } else {
    rtb_Switch_mf = 1.0;
  }

  /* End of Switch: '<S118>/Switch1' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S193>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3801p0004_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3801p0004_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s193_AgeCount + 1) >
        Mooventure2016_Rev5_B.s193_AgeCount)
      Mooventure2016_Rev5_B.s193_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0] & 0x0000000F)) ;
      Mooventure2016_Rev5_B.s193_Shift_Position = (real_T) tmp0;
      Mooventure2016_Rev5_B.s193_AgeCount = 0;
    }
  }

  /* If: '<S329>/If' incorporates:
   *  Inport: '<S349>/In1'
   *  Inport: '<S350>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S329>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S329>/override_enable'
   */
  if ((Shift_Position_Raw_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S329>/NewValue' incorporates:
     *  ActionPort: '<S349>/Action Port'
     */
    rtb_UnitDelay_o = (Shift_Position_Raw_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S349>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(116);
    }

    /* End of Outputs for SubSystem: '<S329>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S329>/OldValue' incorporates:
     *  ActionPort: '<S350>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s193_Shift_Position;

    /* S-Function (motohawk_sfun_code_cover): '<S350>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(117);
    }

    /* End of Outputs for SubSystem: '<S329>/OldValue' */
  }

  /* End of If: '<S329>/If' */

  /* MATLAB Function Block: '<S193>/Transmission Translator' */

  /* MATLAB Function 'Foreground/Inputs/Driver Inputs/Transmission Translator': '<S321>:1' */
  /*  Park, Reverse, Drive, Low */
  if (rtb_UnitDelay_o == 12.0) {
    /* '<S321>:1:4' */
    /* '<S321>:1:5' */
    Mooventure2016_Rev5_B.s321_posOut = 1.0;

    /*  in reverse */
    /* '<S321>:1:6' */
    Mooventure2016_Rev5_B.s321_ecoModeOut = 0.0;
  } else if (rtb_UnitDelay_o == 8.0) {
    /* '<S321>:1:7' */
    /* '<S321>:1:8' */
    Mooventure2016_Rev5_B.s321_posOut = 3.0;

    /*  in drive */
    /* '<S321>:1:9' */
    Mooventure2016_Rev5_B.s321_ecoModeOut = 0.0;
  } else if (rtb_UnitDelay_o == 4.0) {
    /* '<S321>:1:10' */
    /* '<S321>:1:11' */
    Mooventure2016_Rev5_B.s321_posOut = 3.0;

    /*  in ecoMode drive */
    /* '<S321>:1:12' */
    Mooventure2016_Rev5_B.s321_ecoModeOut = 1.0;
  } else {
    /* '<S321>:1:14' */
    Mooventure2016_Rev5_B.s321_posOut = 2.0;

    /*  in neutral */
    /* '<S321>:1:15' */
    Mooventure2016_Rev5_B.s321_ecoModeOut = 0.0;
  }

  /* End of MATLAB Function Block: '<S193>/Transmission Translator' */

  /* Outputs for Enabled SubSystem: '<S118>/Neutral' incorporates:
   *  EnablePort: '<S157>/Enable'
   */
  /* RelationalOperator: '<S151>/Compare' incorporates:
   *  Constant: '<S151>/Constant'
   *  Constant: '<S157>/Constant'
   */
  if (Mooventure2016_Rev5_B.s321_posOut == 2.0) {
    Mooventure2016_Rev5_B.s118_Torque_Direction = 0.0;
  }

  /* End of RelationalOperator: '<S151>/Compare' */
  /* End of Outputs for SubSystem: '<S118>/Neutral' */

  /* Outputs for Enabled SubSystem: '<S118>/Drive' incorporates:
   *  EnablePort: '<S155>/Enable'
   */
  /* RelationalOperator: '<S152>/Compare' incorporates:
   *  Constant: '<S152>/Constant'
   */
  if (Mooventure2016_Rev5_B.s321_posOut == 3.0) {
    if (!Mooventure2016_Rev5_DWork.s118_Drive_MODE) {
      Mooventure2016_Rev5_DWork.s118_Drive_MODE = TRUE;
    }

    /* If: '<S168>/If' incorporates:
     *  Constant: '<S155>/Constant1'
     *  Inport: '<S169>/In1'
     *  Inport: '<S170>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S168>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S168>/override_enable'
     */
    if ((Torque_Reverse_Override_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S168>/NewValue' incorporates:
       *  ActionPort: '<S169>/Action Port'
       */
      Mooventure2016_Rev5_B.s118_Torque_Direction =
        (Torque_Reverse_Override_new_DataStore());

      /* S-Function (motohawk_sfun_code_cover): '<S169>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(34);
      }

      /* End of Outputs for SubSystem: '<S168>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S168>/OldValue' incorporates:
       *  ActionPort: '<S170>/Action Port'
       */
      Mooventure2016_Rev5_B.s118_Torque_Direction = 1.0;

      /* S-Function (motohawk_sfun_code_cover): '<S170>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(35);
      }

      /* End of Outputs for SubSystem: '<S168>/OldValue' */
    }

    /* End of If: '<S168>/If' */
  } else {
    if (Mooventure2016_Rev5_DWork.s118_Drive_MODE) {
      /* Disable for Outport: '<S155>/IPT_Torque' */
      Mooventure2016_Rev5_B.s118_Torque_Direction = 0.0;
      Mooventure2016_Rev5_DWork.s118_Drive_MODE = FALSE;
    }
  }

  /* End of RelationalOperator: '<S152>/Compare' */
  /* End of Outputs for SubSystem: '<S118>/Drive' */

  /* Outputs for Enabled SubSystem: '<S118>/Reverse' incorporates:
   *  EnablePort: '<S158>/Enable'
   */
  /* RelationalOperator: '<S153>/Compare' incorporates:
   *  Constant: '<S153>/Constant'
   */
  if (Mooventure2016_Rev5_B.s321_posOut == 1.0) {
    if (!Mooventure2016_Rev5_DWork.s118_Reverse_MODE) {
      Mooventure2016_Rev5_DWork.s118_Reverse_MODE = TRUE;
    }

    /* If: '<S172>/If' incorporates:
     *  Constant: '<S158>/Constant1'
     *  Inport: '<S173>/In1'
     *  Inport: '<S174>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S172>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S172>/override_enable'
     */
    if ((Torque_Reverse_Override69_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S172>/NewValue' incorporates:
       *  ActionPort: '<S173>/Action Port'
       */
      Mooventure2016_Rev5_B.s118_Torque_Direction =
        (Torque_Reverse_Override69_new_DataStore());

      /* S-Function (motohawk_sfun_code_cover): '<S173>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(36);
      }

      /* End of Outputs for SubSystem: '<S172>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S172>/OldValue' incorporates:
       *  ActionPort: '<S174>/Action Port'
       */
      Mooventure2016_Rev5_B.s118_Torque_Direction = -1.0;

      /* S-Function (motohawk_sfun_code_cover): '<S174>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(37);
      }

      /* End of Outputs for SubSystem: '<S172>/OldValue' */
    }

    /* End of If: '<S172>/If' */
  } else {
    if (Mooventure2016_Rev5_DWork.s118_Reverse_MODE) {
      /* Disable for Outport: '<S158>/IPT_Torque' */
      Mooventure2016_Rev5_B.s118_Torque_Direction = 0.0;
      Mooventure2016_Rev5_DWork.s118_Reverse_MODE = FALSE;
    }
  }

  /* End of RelationalOperator: '<S153>/Compare' */
  /* End of Outputs for SubSystem: '<S118>/Reverse' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S193>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3802p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3802p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s193_AgeCount_j + 1) >
        Mooventure2016_Rev5_B.s193_AgeCount_j)
      Mooventure2016_Rev5_B.s193_AgeCount_j++;
    if (msg_valid) {
      uint16_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      Mooventure2016_Rev5_B.s193_Brake_Position = ((real_T) tmp0) + ((real_T)
        -32767);
      Mooventure2016_Rev5_B.s193_AgeCount_j = 0;
    }
  }

  /* If: '<S322>/If' incorporates:
   *  Inport: '<S335>/In1'
   *  Inport: '<S336>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S322>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S322>/override_enable'
   */
  if ((Brake_Position_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S322>/NewValue' incorporates:
     *  ActionPort: '<S335>/Action Port'
     */
    rtb_Merge_o = (Brake_Position_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S335>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(102);
    }

    /* End of Outputs for SubSystem: '<S322>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S322>/OldValue' incorporates:
     *  ActionPort: '<S336>/Action Port'
     */
    rtb_Merge_o = Mooventure2016_Rev5_B.s193_Brake_Position;

    /* S-Function (motohawk_sfun_code_cover): '<S336>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(103);
    }

    /* End of Outputs for SubSystem: '<S322>/OldValue' */
  }

  /* End of If: '<S322>/If' */

  /* S-Function Block: <S193>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (Brake_Position_PreIn_DataStore()) = rtb_Merge_o;
    (Brake_Position_PreIdx_DataStore()) = TablePrelookup_real_T(rtb_Merge_o,
      (Brake_Position_PreIdxArr_DataStore()), 21,
      (Brake_Position_PreIdx_DataStore()));
    rtb_motohawk_prelookup_i = (Brake_Position_PreIdx_DataStore());
  }

  /* S-Function Block: <S193>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    Mooventure2016_Rev5_B.s193_Brake_Position_l = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup_i, (real_T *) ((Brake_Position_TblTbl_DataStore())),
       21);
    (Brake_Position_Tbl_DataStore()) =
      Mooventure2016_Rev5_B.s193_Brake_Position_l;
  }

  /* S-Function Block: <S234>/motohawk_ain4 Resource: Throttle_Position */
  Mooventure2016_Rev5_B.s234_motohawk_ain4_o1 =
    Throttle_Position_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S255>/If' incorporates:
   *  Inport: '<S256>/In1'
   *  Inport: '<S257>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S255>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S255>/override_enable'
   */
  if ((Throttle_Position_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S255>/NewValue' incorporates:
     *  ActionPort: '<S256>/Action Port'
     */
    rtb_Merge_c1 = ((uint16_T)(Throttle_Position_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S256>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Throttle Position/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(74);
    }

    /* End of Outputs for SubSystem: '<S255>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S255>/OldValue' incorporates:
     *  ActionPort: '<S257>/Action Port'
     */
    rtb_Merge_c1 = Mooventure2016_Rev5_B.s234_motohawk_ain4_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S257>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Throttle Position/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(75);
    }

    /* End of Outputs for SubSystem: '<S255>/OldValue' */
  }

  /* End of If: '<S255>/If' */

  /* DataTypeConversion: '<S234>/Data Type Conversion' */
  Mooventure2016_Rev5_B.s234_DataTypeConversion = (real_T)rtb_Merge_c1;

  /* S-Function (motohawk_sfun_read_canmsg): '<S189>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3348p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3348p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s189_AgeCount + 1) >
        Mooventure2016_Rev5_B.s189_AgeCount)
      Mooventure2016_Rev5_B.s189_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint8_T tmp4 = 0;
      uint8_T tmp5 = 0;
      uint8_T tmp6 = 0;
      uint8_T tmp7 = 0;
      uint8_T tmp8 = 0;
      uint8_T tmp9 = 0;
      uint8_T tmp10 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[1] & 0x0000000F)) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[1] & 0x00000070) >> 4) ;
      ((uint8_T *)(&tmp3))[0] = ((msg_data[2] & 0x00000003)) ;
      ((uint8_T *)(&tmp4))[0] = ((msg_data[2] & 0x0000000C) >> 2) ;
      ((uint8_T *)(&tmp5))[0] = ((msg_data[2] & 0x00000030) >> 4) ;
      ((uint8_T *)(&tmp6))[0] = ((msg_data[2] & 0x000000C0) >> 6) ;
      ((uint8_T *)(&tmp7))[0] = ((msg_data[3] & 0x00000003)) ;
      ((uint8_T *)(&tmp8))[0] = ((msg_data[3] & 0x0000001C) >> 2) ;
      ((uint8_T *)(&tmp9))[0] = ((msg_data[6])) ;
      ((uint8_T *)(&tmp10))[0] = ((msg_data[7])) ;
      Mooventure2016_Rev5_B.s189_JCS_PackIdentifier = (real_T) tmp0;
      Mooventure2016_Rev5_B.s189_PackState = (real_T) tmp1;
      Mooventure2016_Rev5_B.s189_PrechargeState = (real_T) tmp2;
      Mooventure2016_Rev5_B.s189_HVIL_Status = (real_T) tmp3;
      Mooventure2016_Rev5_B.s189_IsolationStatus = (real_T) tmp4;
      Mooventure2016_Rev5_B.s189_WakeSignal = (real_T) tmp5;
      Mooventure2016_Rev5_B.s189_SleepInhibited = (real_T) tmp6;
      Mooventure2016_Rev5_B.s189_CellBalanceingActive = (boolean_T) tmp7;
      Mooventure2016_Rev5_B.s189_MILState = (real_T) tmp8;
      Mooventure2016_Rev5_B.s189_StateOfCharge = ((real_T) tmp9) / ((real_T) 2);
      Mooventure2016_Rev5_B.s189_PS_RollingCounter = (real_T) tmp10;
      Mooventure2016_Rev5_B.s189_AgeCount = 0;
    }
  }

  /* S-Function Block: <S265>/motohawk_delta_time */
  rtb_Switch_jf = 10.0;

  /* Product: '<S265>/Product' incorporates:
   *  MinMax: '<S265>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S265>/motohawk_calibration'
   */
  rtb_Switch_jf /= (rtb_Switch_jf >= (SOCFilt_DataStore())) || rtIsNaN
    ((SOCFilt_DataStore())) ? rtb_Switch_jf : (SOCFilt_DataStore());

  /* Sum: '<S266>/Sum1' incorporates:
   *  Constant: '<S266>/Constant'
   *  Product: '<S266>/Product'
   *  Product: '<S266>/Product1'
   *  Sum: '<S266>/Sum'
   *  UnitDelay: '<S266>/Unit Delay'
   */
  rtb_Sum1 = (1.0 - rtb_Switch_jf) *
    Mooventure2016_Rev5_DWork.s266_UnitDelay_DSTATE +
    Mooventure2016_Rev5_B.s189_StateOfCharge * rtb_Switch_jf;

  /* Logic: '<S117>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S117>/motohawk_data_read'
   */
  rtb_LogicalOperator5_c = !Torque_Enable_DataStore();

  /* If: '<S330>/If' incorporates:
   *  Inport: '<S351>/In1'
   *  Inport: '<S352>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S330>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S330>/override_enable'
   */
  if ((ecoMode_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S330>/NewValue' incorporates:
     *  ActionPort: '<S351>/Action Port'
     */
    rtb_UnitDelay_o = (ecoMode_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S351>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(118);
    }

    /* End of Outputs for SubSystem: '<S330>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S330>/OldValue' incorporates:
     *  ActionPort: '<S352>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s321_ecoModeOut;

    /* S-Function (motohawk_sfun_code_cover): '<S352>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(119);
    }

    /* End of Outputs for SubSystem: '<S330>/OldValue' */
  }

  /* End of If: '<S330>/If' */

  /* Outputs for Atomic SubSystem: '<S117>/Embedded MATLAB Function' */
  /* MATLAB Function Block: '<S149>/Embedded MATLAB Function' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S117>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S117>/motohawk_calibration2'
   */

  /* MATLAB Function 'Foreground/Control/Hybrid Control Code/Hybrid state limits1/Embedded MATLAB Function/Embedded MATLAB Function': '<S150>:1' */
  if (rtb_LogicalOperator5_c || (rtb_Sum1 <= (SafetyModeEnterSOC_DataStore())))
  {
    /* '<S150>:1:2' */
    /* '<S150>:1:3' */
    rtb_UnitDelay_o = 0.0;
  } else if ((rtb_Sum1 > (SafetyModeEnterSOC_DataStore())) && (rtb_Sum1 <=
              (CrawlHomeEnterSOC_DataStore()))) {
    /* '<S150>:1:4' */
    /* '<S150>:1:5' */
    rtb_UnitDelay_o = 1.0;
  } else if ((rtb_UnitDelay_o == 1.0) && (rtb_Sum1 >
              (CrawlHomeEnterSOC_DataStore()))) {
    /* '<S150>:1:6' */
    /* '<S150>:1:7' */
    rtb_UnitDelay_o = 2.0;
  } else {
    /* '<S150>:1:9' */
    rtb_UnitDelay_o = 3.0;
  }

  /* End of MATLAB Function Block: '<S149>/Embedded MATLAB Function' */
  /* End of Outputs for SubSystem: '<S117>/Embedded MATLAB Function' */

  /* MATLAB Function Block: '<S18>/Embedded MATLAB Function' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S18>/motohawk_fault_action'
   */

  /* MATLAB Function 'Foreground/Control/Hybrid Control Code/Embedded MATLAB Function': '<S116>:1' */
  if (GetFaultActionStatus(12)) {
    /* '<S116>:1:2' */
    /* '<S116>:1:3' */
    Mooventure2016_Rev5_B.s116_state = 1.0;
  } else {
    /* '<S116>:1:5' */
    Mooventure2016_Rev5_B.s116_state = rtb_UnitDelay_o;
  }

  /* End of MATLAB Function Block: '<S18>/Embedded MATLAB Function' */
  /* If: '<S122>/If' incorporates:
   *  Inport: '<S184>/In1'
   *  Inport: '<S185>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S122>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S122>/override_enable'
   */
  if ((HybridStateOverride_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S122>/NewValue' incorporates:
     *  ActionPort: '<S184>/Action Port'
     */
    rtb_Merge_l = (HybridStateOverride_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S184>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(40);
    }

    /* End of Outputs for SubSystem: '<S122>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S122>/OldValue' incorporates:
     *  ActionPort: '<S185>/Action Port'
     */
    rtb_Merge_l = Mooventure2016_Rev5_B.s116_state;

    /* S-Function (motohawk_sfun_code_cover): '<S185>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(41);
    }

    /* End of Outputs for SubSystem: '<S122>/OldValue' */
  }

  /* End of If: '<S122>/If' */

  /* SwitchCase: '<S18>/Switch Case1' incorporates:
   *  Constant: '<S113>/Constant'
   *  Constant: '<S115>/Constant'
   *  Constant: '<S119>/Constant'
   *  Constant: '<S120>/Constant'
   *  Constant: '<S120>/Constant2'
   */
  switch ((int32_T)rtb_Merge_l) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S18>/Safety' incorporates:
     *  ActionPort: '<S120>/Action Port'
     */
    Mooventure2016_Rev5_B.s18_motor_Torque = 0.0;
    Mooventure2016_Rev5_B.s18_motor_Enable = 0.0;

    /* End of Outputs for SubSystem: '<S18>/Safety' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S18>/CrawlHomeMode' incorporates:
     *  ActionPort: '<S113>/Action Port'
     */

    /* S-Function Block: <S113>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (safetyMode_AccelIn_DataStore()) =
        Mooventure2016_Rev5_B.s234_DataTypeConversion;
      (safetyMode_AccelIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s234_DataTypeConversion,
         (safetyMode_AccelIdxArr_DataStore()), 21,
         (safetyMode_AccelIdx_DataStore()));
      rtb_motohawk_prelookup_m = (safetyMode_AccelIdx_DataStore());
    }

    /* S-Function Block: <S113>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_d = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_m, (real_T *)
         ((safetyMode_Accel_MapTbl_DataStore())), 21);
      (safetyMode_Accel_Map_DataStore()) = rtb_motohawk_interpolation_1d_d;
    }

    /* S-Function Block: <S113>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (safetyMode_BrakeIn_DataStore()) =
        Mooventure2016_Rev5_B.s193_Brake_Position_l;
      (safetyMode_BrakeIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s193_Brake_Position_l,
         (safetyMode_BrakeIdxArr_DataStore()), 21,
         (safetyMode_BrakeIdx_DataStore()));
      rtb_motohawk_prelookup1_oo = (safetyMode_BrakeIdx_DataStore());
    }

    /* S-Function Block: <S113>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_n = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_oo, (real_T *)
         ((safetyMode_Brake_MapTbl_DataStore())), 21);
      (safetyMode_Brake_Map_DataStore()) = rtb_motohawk_interpolation_1d1_n;
    }

    /* Product: '<S113>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration7'
     */
    rtb_Product_j = (RPM_to_Wheel_Speed_Multiplier_safetyMode_DataStore()) *
      Mooventure2016_Rev5_B.s447_Merge;

    /* Stateflow: '<S113>/Chart' */
    Mooventure2016_Rev5_Chart(rtb_motohawk_interpolation_1d_d,
      rtb_motohawk_interpolation_1d1_n, rtb_Product_j,
      (accelStart_Pedal_safetyMode_DataStore()),
      (accelEnd_Pedal_safetyMode_DataStore()),
      (brakeStart_Pedal_safetyMode_DataStore()),
      (brakeEnd_Pedal_safetyMode_DataStore()),
      (regenStart_Speed_safetyMode_DataStore()),
      (regenEnd_Speed_safetyMode_DataStore()), (dragTorque_safetyMode_DataStore()),
      &Mooventure2016_Rev5_B.s113_sf_Chart,
      &Mooventure2016_Rev5_DWork.s113_sf_Chart);

    /* Product: '<S113>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration8'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s113_sf_Chart.s123_driveTorque *
      (driveMaxTorque_safetyMode_DataStore());

    /* Sum: '<S124>/Add' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S117>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S117>/motohawk_calibration2'
     */
    rtb_UnitDelay_m = (CrawlHomeEnterSOC_DataStore()) -
      (SafetyModeEnterSOC_DataStore());

    /* Product: '<S124>/Divide' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S117>/motohawk_calibration1'
     *  Sum: '<S124>/Sum'
     */
    rtb_UnitDelay_m = ((rtb_Sum1 - (CrawlHomeEnterSOC_DataStore())) +
                       rtb_UnitDelay_m) / rtb_UnitDelay_m;

    /* Product: '<S124>/Product' incorporates:
     *  Product: '<S113>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration9'
     *  Saturate: '<S124>/Saturation'
     *  Sum: '<S113>/Sum'
     */
    Mooventure2016_Rev5_B.s18_motor_Torque =
      (Mooventure2016_Rev5_B.s113_sf_Chart.s123_regenTorque *
       (regenMaxTorque_safetyMode_DataStore()) + rtb_UnitDelay_o) *
      (rtb_UnitDelay_m >= 1.0 ? 1.0 : rtb_UnitDelay_m <= 0.0 ? 0.0 :
       rtb_UnitDelay_m);
    Mooventure2016_Rev5_B.s18_motor_Enable = 1.0;

    /* End of Outputs for SubSystem: '<S18>/CrawlHomeMode' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S18>/EcoMode' incorporates:
     *  ActionPort: '<S115>/Action Port'
     */

    /* S-Function Block: <S115>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (EcoMode_AccelIn_DataStore()) =
        Mooventure2016_Rev5_B.s234_DataTypeConversion;
      (EcoMode_AccelIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s234_DataTypeConversion,
         (EcoMode_AccelIdxArr_DataStore()), 21, (EcoMode_AccelIdx_DataStore()));
      rtb_motohawk_prelookup_f = (EcoMode_AccelIdx_DataStore());
    }

    /* S-Function Block: <S115>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_n = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_f, (real_T *) ((EcoMode_Accel_MapTbl_DataStore())),
         21);
      (EcoMode_Accel_Map_DataStore()) = rtb_motohawk_interpolation_1d_n;
    }

    /* S-Function Block: <S115>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (EcoMode_BrakeIn_DataStore()) =
        Mooventure2016_Rev5_B.s193_Brake_Position_l;
      (EcoMode_BrakeIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s193_Brake_Position_l,
         (EcoMode_BrakeIdxArr_DataStore()), 21, (EcoMode_BrakeIdx_DataStore()));
      rtb_motohawk_prelookup1_p = (EcoMode_BrakeIdx_DataStore());
    }

    /* S-Function Block: <S115>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_p = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_p, (real_T *) ((EcoMode_Brake_MapTbl_DataStore())),
         21);
      (EcoMode_Brake_Map_DataStore()) = rtb_motohawk_interpolation_1d1_p;
    }

    /* Product: '<S115>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration7'
     */
    rtb_Product_le = (RPM_to_Wheel_Speed_Multiplier_ecoMode_DataStore()) *
      Mooventure2016_Rev5_B.s447_Merge;

    /* Stateflow: '<S115>/Chart' */
    Mooventure2016_Rev5_Chart(rtb_motohawk_interpolation_1d_n,
      rtb_motohawk_interpolation_1d1_p, rtb_Product_le,
      (accelStart_Pedal_ecoMode_DataStore()), (accelEnd_Pedal_ecoMode_DataStore()),
                              (brakeStart_Pedal_ecoMode_DataStore()),
      (brakeEnd_Pedal_ecoMode_DataStore()), (regenStart_Speed_ecoMode_DataStore()),
                              (regenEnd_Speed_ecoMode_DataStore()),
      (dragTorque_ecoMode_DataStore()), &Mooventure2016_Rev5_B.s115_sf_Chart,
      &Mooventure2016_Rev5_DWork.s115_sf_Chart);

    /* Product: '<S115>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration8'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s115_sf_Chart.s123_driveTorque *
      (driveMaxTorque_ecoMode_DataStore());

    /* Sum: '<S115>/Sum' incorporates:
     *  Product: '<S115>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration9'
     */
    Mooventure2016_Rev5_B.s18_motor_Torque =
      Mooventure2016_Rev5_B.s115_sf_Chart.s123_regenTorque *
      (regenMaxTorque_ecoMode_DataStore()) + rtb_UnitDelay_o;
    Mooventure2016_Rev5_B.s18_motor_Enable = 1.0;

    /* End of Outputs for SubSystem: '<S18>/EcoMode' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S18>/SUVMode' incorporates:
     *  ActionPort: '<S119>/Action Port'
     */

    /* S-Function Block: <S119>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (SUVMode_AccelIn_DataStore()) =
        Mooventure2016_Rev5_B.s234_DataTypeConversion;
      (SUVMode_AccelIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s234_DataTypeConversion,
         (SUVMode_AccelIdxArr_DataStore()), 21, (SUVMode_AccelIdx_DataStore()));
      rtb_motohawk_prelookup_h = (SUVMode_AccelIdx_DataStore());
    }

    /* S-Function Block: <S119>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_c = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_h, (real_T *) ((SUVMode_Accel_MapTbl_DataStore())),
         21);
      (SUVMode_Accel_Map_DataStore()) = rtb_motohawk_interpolation_1d_c;
    }

    /* S-Function Block: <S119>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (SUVMode_BrakeIn_DataStore()) =
        Mooventure2016_Rev5_B.s193_Brake_Position_l;
      (SUVMode_BrakeIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s193_Brake_Position_l,
         (SUVMode_BrakeIdxArr_DataStore()), 21, (SUVMode_BrakeIdx_DataStore()));
      rtb_motohawk_prelookup1_o = (SUVMode_BrakeIdx_DataStore());
    }

    /* S-Function Block: <S119>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_o, (real_T *) ((SUVMode_Brake_MapTbl_DataStore())),
         21);
      (SUVMode_Brake_Map_DataStore()) = rtb_motohawk_interpolation_1d1;
    }

    /* Product: '<S119>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration7'
     */
    rtb_Product_dp = (RPM_to_Wheel_Speed_Multiplier_SUVMode_DataStore()) *
      Mooventure2016_Rev5_B.s447_Merge;

    /* Stateflow: '<S119>/Chart' */
    Mooventure2016_Rev5_Chart(rtb_motohawk_interpolation_1d_c,
      rtb_motohawk_interpolation_1d1, rtb_Product_dp,
      (accelStart_Pedal_SUVMode_DataStore()), (accelEnd_Pedal_SUVMode_DataStore()),
                              (brakeStart_Pedal_SUVMode_DataStore()),
      (brakeEnd_Pedal_SUVMode_DataStore()), (regenStart_Speed_SUVMode_DataStore()),
                              (regenEnd_Speed_SUVMode_DataStore()),
      (dragTorque_SUVMode_DataStore()), &Mooventure2016_Rev5_B.s119_sf_Chart,
      &Mooventure2016_Rev5_DWork.s119_sf_Chart);

    /* Product: '<S119>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration8'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s119_sf_Chart.s123_driveTorque *
      (driveMaxTorque_SUVMode_DataStore());

    /* Sum: '<S119>/Sum' incorporates:
     *  Product: '<S119>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration9'
     */
    Mooventure2016_Rev5_B.s18_motor_Torque =
      Mooventure2016_Rev5_B.s119_sf_Chart.s123_regenTorque *
      (regenMaxTorque_SUVMode_DataStore()) + rtb_UnitDelay_o;
    Mooventure2016_Rev5_B.s18_motor_Enable = 1.0;

    /* End of Outputs for SubSystem: '<S18>/SUVMode' */
    break;
  }

  /* End of SwitchCase: '<S18>/Switch Case1' */

  /* Product: '<S118>/Product' */
  Mooventure2016_Rev5_B.s118_IPT_Torque_Request = rtb_Switch_mf *
    Mooventure2016_Rev5_B.s118_Torque_Direction *
    Mooventure2016_Rev5_B.s18_motor_Torque;

  /* S-Function Block: <S156>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s156_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_jf = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S156>/Product' incorporates:
   *  MinMax: '<S156>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S156>/motohawk_calibration'
   */
  rtb_Switch_jf /= (rtb_Switch_jf >= (FiltConst_DataStore())) || rtIsNaN
    ((FiltConst_DataStore())) ? rtb_Switch_jf : (FiltConst_DataStore());

  /* Sum: '<S171>/Sum1' incorporates:
   *  Constant: '<S171>/Constant'
   *  Product: '<S171>/Product'
   *  Product: '<S171>/Product1'
   *  Sum: '<S171>/Sum'
   *  UnitDelay: '<S171>/Unit Delay'
   */
  rtb_Sum1_j = (1.0 - rtb_Switch_jf) *
    Mooventure2016_Rev5_DWork.s171_UnitDelay_DSTATE +
    Mooventure2016_Rev5_B.s118_IPT_Torque_Request * rtb_Switch_jf;

  /* Saturate: '<S118>/Saturation' */
  Mooventure2016_Rev5_B.s118_Saturation = rtb_Sum1_j >= 2500.0 ? 2500.0 :
    rtb_Sum1_j <= -2500.0 ? -2500.0 : rtb_Sum1_j;

  /* If: '<S159>/If' incorporates:
   *  Inport: '<S175>/In1'
   *  Inport: '<S176>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S159>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S159>/override_enable'
   */
  if ((Torque_Request_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S159>/NewValue' incorporates:
     *  ActionPort: '<S175>/Action Port'
     */
    rtb_UnitDelay_o = (Torque_Request_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S175>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(38);
    }

    /* End of Outputs for SubSystem: '<S159>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S159>/OldValue' incorporates:
     *  ActionPort: '<S176>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s118_Saturation;

    /* S-Function (motohawk_sfun_code_cover): '<S176>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(39);
    }

    /* End of Outputs for SubSystem: '<S159>/OldValue' */
  }

  /* End of If: '<S159>/If' */

  /* Switch: '<S127>/Switch' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S127>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S127>/motohawk_prelookup'
   */
  if (rtb_LogicalOperator5) {
    /* S-Function Block: <S127>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (Cruise_Control_PreIn_DataStore()) = Mooventure2016_Rev5_B.s145_MinMax1;
      (Cruise_Control_PreIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s145_MinMax1, (Cruise_Control_PreIdxArr_DataStore
          ()), 121, (Cruise_Control_PreIdx_DataStore()));
      rtb_motohawk_prelookup_k = (Cruise_Control_PreIdx_DataStore());
    }

    /* S-Function Block: <S127>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_e = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_k, (real_T *) ((Cruise_Control_MapTbl_DataStore())),
         121);
      (Cruise_Control_Map_DataStore()) = rtb_motohawk_interpolation_1d_e;
    }

    rtb_UnitDelay_o = rtb_motohawk_interpolation_1d_e;
  }

  /* End of Switch: '<S127>/Switch' */

  /* Abs: '<S178>/Abs' */
  rtb_Abs = fabs(rtb_UnitDelay_o);

  /* S-Function (motohawk_sfun_read_canmsg): '<S187>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3142p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3142p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s187_AgeCount + 1) >
        Mooventure2016_Rev5_B.s187_AgeCount)
      Mooventure2016_Rev5_B.s187_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0] & 0x00000008) >> 3) ;
      Mooventure2016_Rev5_B.s187_TCS_ENG_EVNT_IN_PROGRESS = (real_T) tmp0;
      Mooventure2016_Rev5_B.s187_AgeCount = 0;
    }
  }

  /* If: '<S199>/If' incorporates:
   *  Inport: '<S211>/In1'
   *  Inport: '<S212>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S199>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S199>/override_enable'
   */
  if ((TCS_ENG_EVNT_IN_PROGRESS_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S199>/NewValue' incorporates:
     *  ActionPort: '<S211>/Action Port'
     */
    rtb_Merge_m = (TCS_ENG_EVNT_IN_PROGRESS_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S211>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(44);
    }

    /* End of Outputs for SubSystem: '<S199>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S199>/OldValue' incorporates:
     *  ActionPort: '<S212>/Action Port'
     */
    rtb_Merge_m = Mooventure2016_Rev5_B.s187_TCS_ENG_EVNT_IN_PROGRESS;

    /* S-Function (motohawk_sfun_code_cover): '<S212>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(45);
    }

    /* End of Outputs for SubSystem: '<S199>/OldValue' */
  }

  /* End of If: '<S199>/If' */

  /* Stateflow: '<S178>/ABS Chart' */
  Mooventure2016_Rev5_ABSChart(rtb_Merge_m, rtb_Abs,
    (Ramp_Out_Rate_ABS_DataStore()), (Ramp_In_Rate_ABS_DataStore()),
    (Min_Torque_ABS_DataStore()), &Mooventure2016_Rev5_B.s178_sf_ABSChart,
    &Mooventure2016_Rev5_DWork.s178_sf_ABSChart);

  /* Product: '<S178>/Product' incorporates:
   *  Signum: '<S178>/Sign'
   */
  Mooventure2016_Rev5_B.s178_Product = (rtb_UnitDelay_o < 0.0 ? -1.0 :
    rtb_UnitDelay_o > 0.0 ? 1.0 : rtb_UnitDelay_o == 0.0 ? 0.0 : rtb_UnitDelay_o)
    * Mooventure2016_Rev5_B.s178_sf_ABSChart.s181_TorqueOut;

  /* S-Function Block: <S183>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s183_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ka = ((real_T) delta) * 0.000001;
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S187>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3141p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3141p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s187_AgeCount_n + 1) >
        Mooventure2016_Rev5_B.s187_AgeCount_n)
      Mooventure2016_Rev5_B.s187_AgeCount_n++;
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint16_T tmp3 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[6])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[7])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[4])) ;
      ((uint8_T *)(&tmp1))[1] = ((msg_data[5])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp2))[1] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp3))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp3))[1] = ((msg_data[1])) ;
      Mooventure2016_Rev5_B.s187_Front_left_whl_speed = (((real_T) tmp0) /
        ((real_T) 100)) + ((real_T) -1000);
      Mooventure2016_Rev5_B.s187_Front_right_whl_speed = (((real_T) tmp1) /
        ((real_T) 100)) + ((real_T) -1000);
      Mooventure2016_Rev5_B.s187_Rear_left_whl_speed = (((real_T) tmp2) /
        ((real_T) 100)) + ((real_T) -1000);
      Mooventure2016_Rev5_B.s187_Rear_right_whl_speed = (((real_T) tmp3) /
        ((real_T) 100)) + ((real_T) -1000);
      Mooventure2016_Rev5_B.s187_AgeCount_n = 0;
    }
  }

  /* If: '<S207>/If' incorporates:
   *  Inport: '<S227>/In1'
   *  Inport: '<S228>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S207>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S207>/override_enable'
   */
  if ((Front_left_whl_speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S207>/NewValue' incorporates:
     *  ActionPort: '<S227>/Action Port'
     */
    rtb_Merge_f = (Front_left_whl_speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S227>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(60);
    }

    /* End of Outputs for SubSystem: '<S207>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S207>/OldValue' incorporates:
     *  ActionPort: '<S228>/Action Port'
     */
    rtb_Merge_f = Mooventure2016_Rev5_B.s187_Front_left_whl_speed;

    /* S-Function (motohawk_sfun_code_cover): '<S228>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(61);
    }

    /* End of Outputs for SubSystem: '<S207>/OldValue' */
  }

  /* End of If: '<S207>/If' */

  /* Abs: '<S180>/Abs' */
  rtb_Switch_jf = fabs(rtb_Merge_f);

  /* If: '<S203>/If' incorporates:
   *  Inport: '<S219>/In1'
   *  Inport: '<S220>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S203>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S203>/override_enable'
   */
  if ((Front_right_whl_speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S203>/NewValue' incorporates:
     *  ActionPort: '<S219>/Action Port'
     */
    rtb_Merge_ns = (Front_right_whl_speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S219>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(52);
    }

    /* End of Outputs for SubSystem: '<S203>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S203>/OldValue' incorporates:
     *  ActionPort: '<S220>/Action Port'
     */
    rtb_Merge_ns = Mooventure2016_Rev5_B.s187_Front_right_whl_speed;

    /* S-Function (motohawk_sfun_code_cover): '<S220>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(53);
    }

    /* End of Outputs for SubSystem: '<S203>/OldValue' */
  }

  /* End of If: '<S203>/If' */

  /* Abs: '<S180>/Abs1' */
  rtb_Switch_mf = fabs(rtb_Merge_ns);

  /* Sum: '<S180>/Sum' */
  rtb_Switch_jf -= rtb_Switch_mf;

  /* Abs: '<S180>/Abs2' */
  Mooventure2016_Rev5_B.s180_Abs2 = fabs(rtb_Switch_jf);

  /* RelationalOperator: '<S180>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration'
   */
  rtb_LogicalOperator2_c = (Mooventure2016_Rev5_B.s180_Abs2 >=
    (TC_Wheel_Speed_Diff_DataStore()));

  /* Switch: '<S183>/Switch' incorporates:
   *  Constant: '<S183>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S183>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S183>/motohawk_delta_time'
   *  Sum: '<S183>/Sum'
   */
  if (rtb_LogicalOperator2_c) {
    rtb_Switch_jf = rtb_motohawk_delta_time_ka + TC_Event_Timer_DataStore();
  } else {
    rtb_Switch_jf = 0.0;
  }

  /* End of Switch: '<S183>/Switch' */
  /* RelationalOperator: '<S180>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration1'
   */
  rtb_RelationalOperator2_id = (rtb_Switch_jf >= (TC_Event_Time_DataStore()));

  /* Logic: '<S180>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S180>/motohawk_fault_status'
   */
  rtb_RelationalOperator_jg = !IsFaultActive(87);

  /* Logic: '<S180>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S180>/motohawk_fault_status1'
   */
  rtb_Eaton_Plugged_In = !IsFaultActive(89);

  /* Product: '<S180>/Product' */
  Mooventure2016_Rev5_B.s180_Product = (uint16_T)(rtb_Eaton_Plugged_In ?
    rtb_RelationalOperator_jg ? rtb_RelationalOperator2_id ?
    rtb_LogicalOperator2_c : 0 : 0 : 0);

  /* DataTypeConversion: '<S179>/Data Type Conversion' */
  rtb_DataTypeConversion_j = (real_T)Mooventure2016_Rev5_B.s180_Product;

  /* Abs: '<S179>/Abs' */
  rtb_Abs_f = fabs(rtb_UnitDelay_o);

  /* Stateflow: '<S179>/CALC Chart' */
  Mooventure2016_Rev5_ABSChart(rtb_DataTypeConversion_j, rtb_Abs_f,
    (Ramp_Out_Rate_CALC_DataStore()), (Ramp_In_Rate_CALC_DataStore()),
    (Min_Torque_CALC_DataStore()), &Mooventure2016_Rev5_B.s179_sf_CALCChart,
    &Mooventure2016_Rev5_DWork.s179_sf_CALCChart);

  /* Product: '<S179>/Product' incorporates:
   *  Signum: '<S179>/Sign'
   */
  Mooventure2016_Rev5_B.s179_Product = (rtb_UnitDelay_o < 0.0 ? -1.0 :
    rtb_UnitDelay_o > 0.0 ? 1.0 : rtb_UnitDelay_o == 0.0 ? 0.0 : rtb_UnitDelay_o)
    * Mooventure2016_Rev5_B.s179_sf_CALCChart.s181_TorqueOut;

  /* MultiPortSwitch: '<S121>/Multiport Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration3'
   */
  switch (((int8_T)(Traction_Control_Model_DataStore()))) {
   case 0:
    Mooventure2016_Rev5_B.s121_MultiportSwitch =
      Mooventure2016_Rev5_B.s178_Product;
    break;

   case 1:
    Mooventure2016_Rev5_B.s121_MultiportSwitch =
      Mooventure2016_Rev5_B.s179_Product;
    break;

   default:
    Mooventure2016_Rev5_B.s121_MultiportSwitch = rtb_UnitDelay_o;
    break;
  }

  /* End of MultiPortSwitch: '<S121>/Multiport Switch' */
  /* If: '<S540>/If' incorporates:
   *  Inport: '<S548>/In1'
   *  Inport: '<S549>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S540>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S540>/override_enable'
   */
  if ((ACC_torq_rqstd_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S540>/NewValue' incorporates:
     *  ActionPort: '<S548>/Action Port'
     */
    rtb_Merge_ci = (ACC_torq_rqstd_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S548>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(240);
    }

    /* End of Outputs for SubSystem: '<S540>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S540>/OldValue' incorporates:
     *  ActionPort: '<S549>/Action Port'
     */
    rtb_Merge_ci = Mooventure2016_Rev5_B.s121_MultiportSwitch;

    /* S-Function (motohawk_sfun_code_cover): '<S549>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(241);
    }

    /* End of Outputs for SubSystem: '<S540>/OldValue' */
  }

  /* End of If: '<S540>/If' */

  /* Abs: '<S529>/Abs' */
  rtb_Switch_mf = fabs(Mooventure2016_Rev5_B.s121_MultiportSwitch);

  /* Product: '<S529>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S529>/motohawk_calibration'
   */
  Mooventure2016_Rev5_B.s529_Pct_whl_trq_desired = rtb_Switch_mf /
    (Max_Motor_Torque_DataStore());

  /* If: '<S541>/If' incorporates:
   *  Inport: '<S550>/In1'
   *  Inport: '<S551>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S541>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S541>/override_enable'
   */
  if ((Pct_whl_trq_desired_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S541>/NewValue' incorporates:
     *  ActionPort: '<S550>/Action Port'
     */
    rtb_Merge_lu = (Pct_whl_trq_desired_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S550>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(242);
    }

    /* End of Outputs for SubSystem: '<S541>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S541>/OldValue' incorporates:
     *  ActionPort: '<S551>/Action Port'
     */
    rtb_Merge_lu = Mooventure2016_Rev5_B.s529_Pct_whl_trq_desired;

    /* S-Function (motohawk_sfun_code_cover): '<S551>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(243);
    }

    /* End of Outputs for SubSystem: '<S541>/OldValue' */
  }

  /* End of If: '<S541>/If' */

  /* If: '<S448>/If' incorporates:
   *  Inport: '<S507>/In1'
   *  Inport: '<S508>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S448>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S448>/override_enable'
   */
  if ((IPT_Wheel_Torque_Delivered_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S448>/NewValue' incorporates:
     *  ActionPort: '<S507>/Action Port'
     */
    Mooventure2016_Rev5_B.s448_Merge =
      (IPT_Wheel_Torque_Delivered_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S507>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(222);
    }

    /* End of Outputs for SubSystem: '<S448>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S448>/OldValue' incorporates:
     *  ActionPort: '<S508>/Action Port'
     */
    Mooventure2016_Rev5_B.s448_Merge =
      Mooventure2016_Rev5_B.s196_IPT_WheelTorqueDelivered;

    /* S-Function (motohawk_sfun_code_cover): '<S508>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(223);
    }

    /* End of Outputs for SubSystem: '<S448>/OldValue' */
  }

  /* End of If: '<S448>/If' */

  /* MATLAB Function Block: '<S529>/Data Correction Motor ABS' */
  Mooventure2016_Rev5_DataCorrectionMotorFault(Mooventure2016_Rev5_B.s448_Merge,
    &Mooventure2016_Rev5_B.s529_sf_DataCorrectionMotorABS);

  /* If: '<S542>/If' incorporates:
   *  Inport: '<S552>/In1'
   *  Inport: '<S553>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S542>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S542>/override_enable'
   */
  if ((Power_train_torq_actual_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S542>/NewValue' incorporates:
     *  ActionPort: '<S552>/Action Port'
     */
    rtb_Merge_ny = (Power_train_torq_actual_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S552>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(244);
    }

    /* End of Outputs for SubSystem: '<S542>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S542>/OldValue' incorporates:
     *  ActionPort: '<S553>/Action Port'
     */
    rtb_Merge_ny =
      Mooventure2016_Rev5_B.s529_sf_DataCorrectionMotorABS.s111_torqueOut;

    /* S-Function (motohawk_sfun_code_cover): '<S553>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(245);
    }

    /* End of Outputs for SubSystem: '<S542>/OldValue' */
  }

  /* End of If: '<S542>/If' */

  /* MATLAB Function Block: '<S529>/Shift Position Conditioner' */

  /* MATLAB Function 'Foreground/Outputs/ABS Outputs/Shift Position Conditioner': '<S539>:1' */
  if (Mooventure2016_Rev5_B.s321_posOut == 1.0) {
    /* '<S539>:1:3' */
    /* '<S539>:1:4' */
    Mooventure2016_Rev5_B.s539_dirOut = 0.0;
  } else {
    /* '<S539>:1:6' */
    Mooventure2016_Rev5_B.s539_dirOut = 1.0;
  }

  /* End of MATLAB Function Block: '<S529>/Shift Position Conditioner' */
  /* If: '<S543>/If' incorporates:
   *  Inport: '<S554>/In1'
   *  Inport: '<S555>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S543>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S543>/override_enable'
   */
  if ((prndl_dir_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S543>/NewValue' incorporates:
     *  ActionPort: '<S554>/Action Port'
     */
    rtb_Merge_e = (prndl_dir_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S554>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(246);
    }

    /* End of Outputs for SubSystem: '<S543>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S543>/OldValue' incorporates:
     *  ActionPort: '<S555>/Action Port'
     */
    rtb_Merge_e = Mooventure2016_Rev5_B.s539_dirOut;

    /* S-Function (motohawk_sfun_code_cover): '<S555>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(247);
    }

    /* End of Outputs for SubSystem: '<S543>/OldValue' */
  }

  /* End of If: '<S543>/If' */

  /* If: '<S544>/If' incorporates:
   *  Inport: '<S556>/In1'
   *  Inport: '<S557>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S529>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S544>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S544>/override_enable'
   */
  if ((regen_torq_limit_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S544>/NewValue' incorporates:
     *  ActionPort: '<S556>/Action Port'
     */
    rtb_Merge_nz = (regen_torq_limit_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S556>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(248);
    }

    /* End of Outputs for SubSystem: '<S544>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S544>/OldValue' incorporates:
     *  ActionPort: '<S557>/Action Port'
     */
    rtb_Merge_nz = (Max_Regen_Torque_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S557>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(249);
    }

    /* End of Outputs for SubSystem: '<S544>/OldValue' */
  }

  /* End of If: '<S544>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S529>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x332 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        uint8_T tmp1;
        uint16_T tmp2;
        uint16_T tmp3;
        uint16_T tmp4;
        if (rtb_Merge_ci < -32767.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Merge_ci > 32768.0000000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(rtb_Merge_ci - (-32767.0000000000F));
        }

        if (rtb_Merge_lu < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_lu > 127.5000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_lu * (2.0000000000F));
        }

        if (rtb_Merge_ny < -32767.0000000000F) {
          tmp2 = (uint16_T)(0U);
        } else if (rtb_Merge_ny > 32768.0000000000F) {
          tmp2 = (uint16_T)(65535U);
        } else {
          tmp2 = (uint16_T)(rtb_Merge_ny - (-32767.0000000000F));
        }

        if (rtb_Merge_e < 0.0000000000F) {
          tmp3 = (uint16_T)(0U);
        } else if (rtb_Merge_e > 2047.0000000000F) {
          tmp3 = (uint16_T)(2047U);
        } else {
          tmp3 = (uint16_T)(rtb_Merge_e);
        }

        if (rtb_Merge_nz < -32767.0000000000F) {
          tmp4 = (uint16_T)(0U);
        } else if (rtb_Merge_nz > 32768.0000000000F) {
          tmp4 = (uint16_T)(65535U);
        } else {
          tmp4 = (uint16_T)(rtb_Merge_nz - (-32767.0000000000F));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[2] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp2))[1])) ;
        msg_data[4] = ((((uint8_T *)(&tmp4))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp3))[0] & 0x00000004) >> 2) |
          ((((uint8_T *)(&tmp4))[1])) ;
        msg_data[6] = ((((uint8_T *)(&tmp1))[0])) | ((((uint8_T *)(&tmp3))[1] &
          0x000000FC) >> 2) | ((((uint8_T *)(&tmp3))[0] & 0x00000003) << 6) ;
        msg_data[7] = ((((uint8_T *)(&tmp3))[1] & 0x00000003) << 6) ;
        CAN_1_Transmit(0, 0x332UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S546>/If' incorporates:
   *  Inport: '<S560>/In1'
   *  Inport: '<S561>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S529>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S546>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S546>/override_enable'
   */
  if ((Commanded_gen_torq_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S546>/NewValue' incorporates:
     *  ActionPort: '<S560>/Action Port'
     */
    rtb_Merge_og = (Commanded_gen_torq_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S560>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(252);
    }

    /* End of Outputs for SubSystem: '<S546>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S546>/OldValue' incorporates:
     *  ActionPort: '<S561>/Action Port'
     */
    rtb_Merge_og = (Commanded_gen_trq_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S561>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(253);
    }

    /* End of Outputs for SubSystem: '<S546>/OldValue' */
  }

  /* End of If: '<S546>/If' */

  /* Product: '<S529>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S529>/motohawk_calibration4'
   */
  Mooventure2016_Rev5_B.s529_Commanded_mot_torq =
    Mooventure2016_Rev5_B.s121_MultiportSwitch /
    (Commanded_motor_trq_div_DataStore());

  /* If: '<S547>/If' incorporates:
   *  Inport: '<S562>/In1'
   *  Inport: '<S563>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S547>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S547>/override_enable'
   */
  if ((Commanded_motor_torq_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S547>/NewValue' incorporates:
     *  ActionPort: '<S562>/Action Port'
     */
    rtb_Merge_er = (Commanded_motor_torq_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S562>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(254);
    }

    /* End of Outputs for SubSystem: '<S547>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S547>/OldValue' incorporates:
     *  ActionPort: '<S563>/Action Port'
     */
    rtb_Merge_er = Mooventure2016_Rev5_B.s529_Commanded_mot_torq;

    /* S-Function (motohawk_sfun_code_cover): '<S563>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(255);
    }

    /* End of Outputs for SubSystem: '<S547>/OldValue' */
  }

  /* End of If: '<S547>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S529>/Send CAN Messages2' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x420 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        uint16_T tmp1;
        if (rtb_Merge_og < -110.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Merge_og > 6443.5000000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)((rtb_Merge_og - (-110.0000000000F)) *
                            (10.0000000000F));
        }

        if (rtb_Merge_er < -256.0000000000F) {
          tmp1 = (uint16_T)(0U);
        } else if (rtb_Merge_er > 6297.5000000000F) {
          tmp1 = (uint16_T)(65535U);
        } else {
          tmp1 = (uint16_T)((rtb_Merge_er - (-256.0000000000F)) *
                            (10.0000000000F));
        }

        msg_data[0] = 0 ;
        msg_data[1] = 0 ;
        msg_data[2] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp1))[1])) ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[7] = ((((uint8_T *)(&tmp0))[1])) ;
        CAN_1_Transmit(0, 0x420UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_probe): '<S529>/motohawk_probe4' */
  (regen_torq_limit_prb_DataStore()) = (Max_Regen_Torque_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S529>/motohawk_probe6' */
  (Commanded_gen_torq_Prb_DataStore()) = (Commanded_gen_trq_DataStore());

  /* If: '<S545>/If' incorporates:
   *  Inport: '<S558>/In1'
   *  Inport: '<S559>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S529>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S545>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S545>/override_enable'
   */
  if ((Engine_On_ABS_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S545>/NewValue' incorporates:
     *  ActionPort: '<S558>/Action Port'
     */
    rtb_Merge_a = (Engine_On_ABS_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S558>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(250);
    }

    /* End of Outputs for SubSystem: '<S545>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S545>/OldValue' incorporates:
     *  ActionPort: '<S559>/Action Port'
     */
    rtb_Merge_a = (Engine_On_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S559>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(251);
    }

    /* End of Outputs for SubSystem: '<S545>/OldValue' */
  }

  /* End of If: '<S545>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S529>/Send CAN Messages1' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x170 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        if (rtb_Merge_a < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_a > 1.0000000000F) {
          tmp0 = (uint8_T)(1U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_a != 0);
        }

        msg_data[0] = 0 ;
        msg_data[1] = 0 ;
        msg_data[2] = 0 ;
        msg_data[3] = 0 ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = ((((uint8_T *)(&tmp0))[0] & 0x00000001) << 3) ;
        CAN_1_Transmit(0, 0x170UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_probe): '<S529>/motohawk_probe5' */
  (Engine_On_ABS_Prb_DataStore()) = (Engine_On_DataStore());

  /* Logic: '<S530>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S530>/motohawk_calibration1'
   */
  rtb_Ignition = !((Batt_Ign_Cal_DataStore()) != 0.0);

  /* S-Function Block: <S24>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s24_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_c = ((real_T) delta) * 0.000001;
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S189>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3351p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3351p0001_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint8_T tmp3 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[4])) ;
      ((uint8_T *)(&tmp2))[1] = ((msg_data[5])) ;
      ((uint8_T *)(&tmp3))[0] = ((msg_data[7])) ;
      Mooventure2016_Rev5_B.s189_BatteryVoltage = ((real_T) tmp0) / ((real_T) 10);
      Mooventure2016_Rev5_B.s189_BatteryCurrent = (((real_T) tmp1) / ((real_T)
        10)) + ((real_T) -500);
      Mooventure2016_Rev5_B.s189_BusVoltage = ((real_T) tmp2) / ((real_T) 10);
      Mooventure2016_Rev5_B.s189_PVC_RollingCounter = (real_T) tmp3;
    }
  }

  /* S-Function Block: <S267>/motohawk_delta_time */
  rtb_Switch_mf = 10.0;

  /* Product: '<S267>/Product' incorporates:
   *  MinMax: '<S267>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S267>/motohawk_calibration'
   */
  rtb_Switch_mf /= (rtb_Switch_mf >= (VFilt_DataStore())) || rtIsNaN
    ((VFilt_DataStore())) ? rtb_Switch_mf : (VFilt_DataStore());

  /* Sum: '<S268>/Sum1' incorporates:
   *  Constant: '<S268>/Constant'
   *  Product: '<S268>/Product'
   *  Product: '<S268>/Product1'
   *  Sum: '<S268>/Sum'
   *  UnitDelay: '<S268>/Unit Delay'
   */
  rtb_Sum1_c = (1.0 - rtb_Switch_mf) *
    Mooventure2016_Rev5_DWork.s268_UnitDelay_DSTATE +
    Mooventure2016_Rev5_B.s189_BatteryVoltage * rtb_Switch_mf;

  /* If: '<S264>/If' incorporates:
   *  Inport: '<S277>/In1'
   *  Inport: '<S278>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S264>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S264>/override_enable'
   */
  if ((Battery_Voltage_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S264>/NewValue' incorporates:
     *  ActionPort: '<S277>/Action Port'
     */
    rtb_Merge_o0 = (Battery_Voltage_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S277>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(84);
    }

    /* End of Outputs for SubSystem: '<S264>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S264>/OldValue' incorporates:
     *  ActionPort: '<S278>/Action Port'
     */
    rtb_Merge_o0 = rtb_Sum1_c;

    /* S-Function (motohawk_sfun_code_cover): '<S278>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(85);
    }

    /* End of Outputs for SubSystem: '<S264>/OldValue' */
  }

  /* End of If: '<S264>/If' */

  /* Logic: '<S14>/Logical Operator2' incorporates:
   *  Constant: '<S14>/Constant'
   *  RelationalOperator: '<S14>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S14>/motohawk_calibration'
   */
  rtb_Eaton_Plugged_In = ((Automatic_Battery_Bootup_DataStore()) &&
    (rtb_Merge_o0 > 50.0));

  /* Switch: '<S24>/Switch' incorporates:
   *  Constant: '<S24>/Constant'
   *  Logic: '<S21>/Logical Operator7'
   *  S-Function (motohawk_sfun_data_read): '<S24>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S24>/motohawk_delta_time'
   *  Sum: '<S24>/Sum'
   */
  if (!rtb_Eaton_Plugged_In) {
    rtb_Switch_mf = rtb_motohawk_delta_time_c + Voltage_Filt_DataStore();
  } else {
    rtb_Switch_mf = 0.0;
  }

  /* End of Switch: '<S24>/Switch' */
  /* Logic: '<S21>/Logical Operator8' incorporates:
   *  Logic: '<S21>/Logical Operator1'
   *  RelationalOperator: '<S21>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S21>/motohawk_calibration2'
   */
  rtb_LogicalOperator5_c = ((!(rtb_Switch_mf >= (Voltage_Filt_Cal_DataStore())))
    || rtb_Eaton_Plugged_In);

  /* S-Function Block: <S23>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s23_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_n = ((real_T) delta) * 0.000001;
  }

  /* Logic: '<S14>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S14>/motohawk_data_read1'
   */
  rtb_LogicalOperator5 = !Vehicle_Enable_DataStore();

  /* Logic: '<S14>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S14>/motohawk_data_read3'
   *  S-Function (motohawk_sfun_fault_action): '<S14>/motohawk_fault_action'
   */
  Mooventure2016_Rev5_B.s14_LogicalOperator = ((GetFaultActionStatus(1) ||
    rtb_LogicalOperator5 || Shutdown_Req_DataStore()));

  /* If: '<S22>/If' incorporates:
   *  Inport: '<S26>/In1'
   *  Inport: '<S27>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S22>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S22>/override_enable'
   */
  if ((Shutdown_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S22>/NewValue' incorporates:
     *  ActionPort: '<S26>/Action Port'
     */
    rtb_Merge_dr = (Shutdown_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S26>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Battery/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(6);
    }

    /* End of Outputs for SubSystem: '<S22>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S22>/OldValue' incorporates:
     *  ActionPort: '<S27>/Action Port'
     */
    rtb_Merge_dr = Mooventure2016_Rev5_B.s14_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S27>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Battery/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(7);
    }

    /* End of Outputs for SubSystem: '<S22>/OldValue' */
  }

  /* End of If: '<S22>/If' */

  /* Switch: '<S23>/Switch' incorporates:
   *  Constant: '<S23>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S23>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S23>/motohawk_delta_time'
   *  Sum: '<S23>/Sum'
   */
  if (rtb_Merge_dr) {
    rtb_Switch_h = rtb_motohawk_delta_time_n + Contactor_Disable_Timer_DataStore
      ();
  } else {
    rtb_Switch_h = 0.0;
  }

  /* End of Switch: '<S23>/Switch' */
  /* Logic: '<S21>/Logical Operator2' incorporates:
   *  Logic: '<S21>/Logical Operator6'
   *  RelationalOperator: '<S21>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S21>/motohawk_calibration'
   */
  Mooventure2016_Rev5_B.s21_LogicalOperator2 = ((rtb_LogicalOperator5_c &&
    (!(rtb_Switch_h >= (Contactor_Disable_Delay_DataStore())))));

  /* DataTypeConversion: '<S530>/Data Type Conversion' */
  Mooventure2016_Rev5_B.s530_ConnectCommand = (int8_T)
    Mooventure2016_Rev5_B.s21_LogicalOperator2;

  /* If: '<S564>/If' incorporates:
   *  Inport: '<S566>/In1'
   *  Inport: '<S567>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S564>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S564>/override_enable'
   */
  if ((Batt_Connect_Cmd_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S564>/NewValue' incorporates:
     *  ActionPort: '<S566>/Action Port'
     */
    rtb_Merge_iq = ((int8_T)(Batt_Connect_Cmd_ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S566>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(256);
    }

    /* End of Outputs for SubSystem: '<S564>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S564>/OldValue' incorporates:
     *  ActionPort: '<S567>/Action Port'
     */
    rtb_Merge_iq = Mooventure2016_Rev5_B.s530_ConnectCommand;

    /* S-Function (motohawk_sfun_code_cover): '<S567>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(257);
    }

    /* End of Outputs for SubSystem: '<S564>/OldValue' */
  }

  /* End of If: '<S564>/If' */

  /* Logic: '<S530>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S530>/motohawk_calibration'
   */
  Mooventure2016_Rev5_B.s530_IsolationMeasurementEnable =
    !((Batt_Isolation_det_Cal_DataStore()) != 0.0);

  /* If: '<S565>/If' incorporates:
   *  Inport: '<S568>/In1'
   *  Inport: '<S569>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S565>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S565>/override_enable'
   */
  if ((Isolation_Measure_Enable_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S565>/NewValue' incorporates:
     *  ActionPort: '<S568>/Action Port'
     */
    rtb_Merge_kj = (Isolation_Measure_Enable_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S568>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(258);
    }

    /* End of Outputs for SubSystem: '<S565>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S565>/OldValue' incorporates:
     *  ActionPort: '<S569>/Action Port'
     */
    rtb_Merge_kj = Mooventure2016_Rev5_B.s530_IsolationMeasurementEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S569>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(259);
    }

    /* End of Outputs for SubSystem: '<S565>/OldValue' */
  }

  /* End of If: '<S565>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S530>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (1000.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (999500U)
         )) {
      /* 0x2f0 */
      {
        extern boolean_T CAN_3_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint32_T tmp3;
        uint8_T tmp4;
        if (rtb_Merge_iq < 0) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_iq > 3) {
          tmp0 = (uint8_T)(3U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_iq);
        }

        tmp1 = (uint8_T)(rtb_Merge_kj);
        tmp2 = (uint8_T)(rtb_Ignition);
        if (Mooventure2016_Rev5_ConstB.s530_OdometerValue < 0.0000000000F) {
          tmp3 = (uint32_T)(0UL);
        } else if (Mooventure2016_Rev5_ConstB.s530_OdometerValue >
                   1677721.5000000000F) {
          tmp3 = (uint32_T)(16777215UL);
        } else {
          tmp3 = (uint32_T)(Mooventure2016_Rev5_ConstB.s530_OdometerValue *
                            (10.0000000000F));
        }

        tmp4 = (uint8_T)(255U);
        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x00000003)) | ((((uint8_T *)(
          &tmp1))[0] & 0x00000003) << 2) | ((((uint8_T *)(&tmp2))[0] &
          0x00000003) << 6) | ((((uint8_T *)(&tmp3))[0] & 0x00000000)) ;
        msg_data[1] = ((((uint8_T *)(&tmp3))[1])) ;
        msg_data[2] = ((((uint8_T *)(&tmp3))[2])) ;
        msg_data[3] = ((((uint8_T *)(&tmp3))[3])) ;
        msg_data[4] = 0 ;
        msg_data[5] = ((((uint8_T *)(&tmp4))[0])) ;
        CAN_3_Transmit(0, 0x2f0UL, 6, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S190>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3564p0004_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3564p0004_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[7] & 0x00000001)) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[6] & 0x00000008) >> 3) ;
      Mooventure2016_Rev5_B.s190_HEV_CC_Defrost_Mode = (real_T) tmp0;
      Mooventure2016_Rev5_B.s190_AC_Engaged_CMD = (real_T) tmp1;
    }
  }

  /* If: '<S279>/If' incorporates:
   *  Inport: '<S281>/In1'
   *  Inport: '<S282>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S279>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S279>/override_enable'
   */
  if ((AC_Cmd_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S279>/NewValue' incorporates:
     *  ActionPort: '<S281>/Action Port'
     */
    Mooventure2016_Rev5_B.s279_Merge = (AC_Cmd_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S281>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(86);
    }

    /* End of Outputs for SubSystem: '<S279>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S279>/OldValue' incorporates:
     *  ActionPort: '<S282>/Action Port'
     */
    Mooventure2016_Rev5_B.s279_Merge = Mooventure2016_Rev5_B.s190_AC_Engaged_CMD;

    /* S-Function (motohawk_sfun_code_cover): '<S282>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(87);
    }

    /* End of Outputs for SubSystem: '<S279>/OldValue' */
  }

  /* End of If: '<S279>/If' */

  /* If: '<S570>/If' incorporates:
   *  Inport: '<S572>/In1'
   *  Inport: '<S573>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S570>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S570>/override_enable'
   */
  if ((AC_Command_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S570>/NewValue' incorporates:
     *  ActionPort: '<S572>/Action Port'
     */
    rtb_Merge_lm = (AC_Command_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S572>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(260);
    }

    /* End of Outputs for SubSystem: '<S570>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S570>/OldValue' incorporates:
     *  ActionPort: '<S573>/Action Port'
     */
    rtb_Merge_lm = Mooventure2016_Rev5_B.s279_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S573>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(261);
    }

    /* End of Outputs for SubSystem: '<S570>/OldValue' */
  }

  /* End of If: '<S570>/If' */

  /* If: '<S280>/If' incorporates:
   *  Inport: '<S283>/In1'
   *  Inport: '<S284>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S280>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S280>/override_enable'
   */
  if ((Defrost_Mode_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S280>/NewValue' incorporates:
     *  ActionPort: '<S283>/Action Port'
     */
    Mooventure2016_Rev5_B.s280_Merge = (Defrost_Mode_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S283>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(88);
    }

    /* End of Outputs for SubSystem: '<S280>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S280>/OldValue' incorporates:
     *  ActionPort: '<S284>/Action Port'
     */
    Mooventure2016_Rev5_B.s280_Merge =
      Mooventure2016_Rev5_B.s190_HEV_CC_Defrost_Mode;

    /* S-Function (motohawk_sfun_code_cover): '<S284>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(89);
    }

    /* End of Outputs for SubSystem: '<S280>/OldValue' */
  }

  /* End of If: '<S280>/If' */

  /* If: '<S571>/If' incorporates:
   *  Inport: '<S574>/In1'
   *  Inport: '<S575>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S571>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S571>/override_enable'
   */
  if ((Defrost_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S571>/NewValue' incorporates:
     *  ActionPort: '<S574>/Action Port'
     */
    rtb_Merge_b = (Defrost_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S574>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(262);
    }

    /* End of Outputs for SubSystem: '<S571>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S571>/OldValue' incorporates:
     *  ActionPort: '<S575>/Action Port'
     */
    rtb_Merge_b = Mooventure2016_Rev5_B.s280_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S575>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(263);
    }

    /* End of Outputs for SubSystem: '<S571>/OldValue' */
  }

  /* End of If: '<S571>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S531>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x430 */
      {
        extern boolean_T CAN_3_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        if (rtb_Merge_b < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_b > 1.0000000000F) {
          tmp0 = (uint8_T)(1U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_b != 0);
        }

        if (rtb_Merge_lm < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_lm > 1.0000000000F) {
          tmp1 = (uint8_T)(1U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_lm != 0);
        }

        msg_data[0] = 0 ;
        msg_data[1] = 0 ;
        msg_data[2] = 0 ;
        msg_data[3] = 0 ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = ((((uint8_T *)(&tmp1))[0] & 0x00000001) << 3) ;
        msg_data[7] = ((((uint8_T *)(&tmp0))[0] & 0x00000001)) ;
        CAN_3_Transmit(0, 0x430UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function Block: <S231>/motohawk_ain2 Resource: Radiator_Blend_Position */
  Mooventure2016_Rev5_B.s231_motohawk_ain2_o1 =
    Radiator_Blend_Position_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S238>/If' incorporates:
   *  Inport: '<S243>/In1'
   *  Inport: '<S244>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S238>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S238>/override_enable'
   */
  if ((Radiator_Blend_Valve_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S238>/NewValue' incorporates:
     *  ActionPort: '<S243>/Action Port'
     */
    rtb_Merge_c1 = ((uint16_T)(Radiator_Blend_Valve_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S243>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(64);
    }

    /* End of Outputs for SubSystem: '<S238>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S238>/OldValue' incorporates:
     *  ActionPort: '<S244>/Action Port'
     */
    rtb_Merge_c1 = Mooventure2016_Rev5_B.s231_motohawk_ain2_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S244>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(65);
    }

    /* End of Outputs for SubSystem: '<S238>/OldValue' */
  }

  /* End of If: '<S238>/If' */

  /* DataTypeConversion: '<S231>/Data Type Conversion1' */
  rtb_Switch_e = (real_T)rtb_Merge_c1;

  /* S-Function Block: <S237>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s237_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_d = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S237>/Product' incorporates:
   *  MinMax: '<S237>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S237>/motohawk_calibration'
   */
  rtb_Switch_d /= (rtb_Switch_d >= (RadLowPass_DataStore())) || rtIsNaN
    ((RadLowPass_DataStore())) ? rtb_Switch_d : (RadLowPass_DataStore());

  /* Sum: '<S242>/Sum1' incorporates:
   *  Constant: '<S242>/Constant'
   *  Product: '<S242>/Product'
   *  Product: '<S242>/Product1'
   *  Sum: '<S242>/Sum'
   *  UnitDelay: '<S242>/Unit Delay'
   */
  Mooventure2016_Rev5_B.s242_Sum1 = (1.0 - rtb_Switch_d) *
    Mooventure2016_Rev5_DWork.s242_UnitDelay_DSTATE + rtb_Switch_e *
    rtb_Switch_d;

  /* S-Function (motohawk_sfun_read_canmsg): '<S189>/Read CAN Message4' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3352p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3352p0001_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint8_T tmp4 = 0;
      uint8_T tmp5 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[4])) ;
      ((uint8_T *)(&tmp3))[0] = ((msg_data[5])) ;
      ((uint8_T *)(&tmp4))[0] = ((msg_data[6])) ;
      ((uint8_T *)(&tmp5))[0] = ((msg_data[7])) ;
      Mooventure2016_Rev5_B.s189_MaxCellVoltage = ((real_T) tmp0) / ((real_T)
        1000);
      Mooventure2016_Rev5_B.s189_MinCellVoltage = ((real_T) tmp1) / ((real_T)
        1000);
      Mooventure2016_Rev5_B.s189_MaxCellTemperature = (((real_T) tmp2) /
        ((real_T) 2)) + ((real_T) -40);
      Mooventure2016_Rev5_B.s189_MinCellTemperature = (((real_T) tmp3) /
        ((real_T) 2)) + ((real_T) -40);
      Mooventure2016_Rev5_B.s189_CoolantTemperature = (((real_T) tmp4) /
        ((real_T) 2)) + ((real_T) -40);
      Mooventure2016_Rev5_B.s189_DPI_RollingCounter = (real_T) tmp5;
    }
  }

  /* S-Function Block: <S231>/motohawk_ain4 Resource: Heater_Temp */
  Mooventure2016_Rev5_B.s231_motohawk_ain4_o1 = Heater_Temp_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S239>/If' incorporates:
   *  Inport: '<S245>/In1'
   *  Inport: '<S246>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S239>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S239>/override_enable'
   */
  if ((Heater_Temp_Raw_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S239>/NewValue' incorporates:
     *  ActionPort: '<S245>/Action Port'
     */
    rtb_Merge_c1 = ((uint16_T)(Heater_Temp_Raw_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S245>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(66);
    }

    /* End of Outputs for SubSystem: '<S239>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S239>/OldValue' incorporates:
     *  ActionPort: '<S246>/Action Port'
     */
    rtb_Merge_c1 = Mooventure2016_Rev5_B.s231_motohawk_ain4_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S246>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(67);
    }

    /* End of Outputs for SubSystem: '<S239>/OldValue' */
  }

  /* End of If: '<S239>/If' */

  /* DataTypeConversion: '<S231>/Data Type Conversion2' */
  rtb_Heater_Temp_Raw = rtb_Merge_c1;

  /* MATLAB Function Block: '<S231>/Embedded MATLAB Function' */

  /* MATLAB Function 'Foreground/Inputs/Analog Inputs/Coolant/Embedded MATLAB Function': '<S235>:1' */
  /* '<S235>:1:3' */
  Mooventure2016_Rev5_B.s235_temp_reading = 0.4254 * (real_T)rtb_Heater_Temp_Raw
    - 31.404;

  /* S-Function Block: <S231>/motohawk_ain1 Resource: Heater_Core_Blend_Position */
  Mooventure2016_Rev5_B.s231_motohawk_ain1_o1 =
    Heater_Core_Blend_Position_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S240>/If' incorporates:
   *  Inport: '<S247>/In1'
   *  Inport: '<S248>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S240>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S240>/override_enable'
   */
  if ((Heater_Core_Blend_Valve_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S240>/NewValue' incorporates:
     *  ActionPort: '<S247>/Action Port'
     */
    rtb_Merge_gg = (Heater_Core_Blend_Valve_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S247>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(68);
    }

    /* End of Outputs for SubSystem: '<S240>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S240>/OldValue' incorporates:
     *  ActionPort: '<S248>/Action Port'
     */
    rtb_Merge_gg = Mooventure2016_Rev5_B.s231_motohawk_ain1_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S248>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(69);
    }

    /* End of Outputs for SubSystem: '<S240>/OldValue' */
  }

  /* End of If: '<S240>/If' */

  /* DataTypeConversion: '<S231>/Data Type Conversion' */
  rtb_Switch_d = (real_T)rtb_Merge_gg;

  /* S-Function Block: <S236>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s236_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S236>/Product' incorporates:
   *  MinMax: '<S236>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S236>/motohawk_calibration'
   */
  rtb_Switch_e /= (rtb_Switch_e >= (HtrCoreLowPass_DataStore())) || rtIsNaN
    ((HtrCoreLowPass_DataStore())) ? rtb_Switch_e : (HtrCoreLowPass_DataStore());

  /* Sum: '<S241>/Sum1' incorporates:
   *  Constant: '<S241>/Constant'
   *  Product: '<S241>/Product'
   *  Product: '<S241>/Product1'
   *  Sum: '<S241>/Sum'
   *  UnitDelay: '<S241>/Unit Delay'
   */
  Mooventure2016_Rev5_B.s241_Sum1 = (1.0 - rtb_Switch_e) *
    Mooventure2016_Rev5_DWork.s241_UnitDelay_DSTATE + rtb_Switch_d *
    rtb_Switch_e;

  /* S-Function (motohawk_sfun_data_read): '<S15>/motohawk_data_read2' */
  rtb_Eaton_Plugged_In = Eaton_Plugged_In_DataStore();

  /* DataTypeConversion: '<S15>/Data Type Conversion' */
  Mooventure2016_Rev5_B.s15_DataTypeConversion = (real_T)rtb_Eaton_Plugged_In;

  /* S-Function (motohawk_sfun_fault_action): '<S15>/motohawk_fault_action1'
   *
   * Regarding '<S15>/motohawk_fault_action1':
     Get Fault Action Status: Pump_On
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_Eaton_Plugged_In = GetFaultActionStatus(10);
  }

  /* DataTypeConversion: '<S15>/Data Type Conversion2' */
  Mooventure2016_Rev5_B.s15_DataTypeConversion2 = (real_T)rtb_Eaton_Plugged_In;

  /* S-Function (motohawk_sfun_fault_action): '<S15>/motohawk_fault_action5'
   *
   * Regarding '<S15>/motohawk_fault_action5':
     Get Fault Action Status: Cooling_Max
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_Eaton_Plugged_In = GetFaultActionStatus(5);
  }

  /* DataTypeConversion: '<S15>/Data Type Conversion3' */
  Mooventure2016_Rev5_B.s15_DataTypeConversion3 = (real_T)rtb_Eaton_Plugged_In;

  /* S-Function (motohawk_sfun_read_canmsg): '<S193>/Read CAN Message6' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3804p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3804p0001_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[1] & 0x0000000F)) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[0] & 0x0000000F)) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[3] & 0x0000000F)) ;
      ((uint8_T *)(&tmp3))[0] = ((msg_data[2] & 0x0000000F)) ;
      Mooventure2016_Rev5_B.s193_DRIVER_1 = (real_T) tmp0;
      Mooventure2016_Rev5_B.s193_DRIVER_10 = (real_T) tmp1;
      Mooventure2016_Rev5_B.s193_PASSENGER_1 = (real_T) tmp2;
      Mooventure2016_Rev5_B.s193_PASSENGER_10 = (real_T) tmp3;
    }
  }

  /* If: '<S323>/If' incorporates:
   *  Inport: '<S337>/In1'
   *  Inport: '<S338>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S323>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S323>/override_enable'
   */
  if ((Driver_10_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S323>/NewValue' incorporates:
     *  ActionPort: '<S337>/Action Port'
     */
    rtb_UnitDelay_o = (Driver_10_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S337>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(104);
    }

    /* End of Outputs for SubSystem: '<S323>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S323>/OldValue' incorporates:
     *  ActionPort: '<S338>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s193_DRIVER_10;

    /* S-Function (motohawk_sfun_code_cover): '<S338>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(105);
    }

    /* End of Outputs for SubSystem: '<S323>/OldValue' */
  }

  /* End of If: '<S323>/If' */

  /* If: '<S334>/If' incorporates:
   *  Inport: '<S359>/In1'
   *  Inport: '<S360>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S334>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S334>/override_enable'
   */
  if ((Driver_1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S334>/NewValue' incorporates:
     *  ActionPort: '<S359>/Action Port'
     */
    rtb_UnitDelay_m = (Driver_1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S359>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(126);
    }

    /* End of Outputs for SubSystem: '<S334>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S334>/OldValue' incorporates:
     *  ActionPort: '<S360>/Action Port'
     */
    rtb_UnitDelay_m = Mooventure2016_Rev5_B.s193_DRIVER_1;

    /* S-Function (motohawk_sfun_code_cover): '<S360>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(127);
    }

    /* End of Outputs for SubSystem: '<S334>/OldValue' */
  }

  /* End of If: '<S334>/If' */

  /* MATLAB Function Block: '<S193>/Embedded MATLAB Function1' */

  /* MATLAB Function 'Foreground/Inputs/Driver Inputs/Embedded MATLAB Function1': '<S319>:1' */
  /* '<S319>:1:3' */
  Mooventure2016_Rev5_B.s319_driverTemp = rtb_UnitDelay_o * 10.0 +
    rtb_UnitDelay_m;

  /* If: '<S333>/If' incorporates:
   *  Inport: '<S357>/In1'
   *  Inport: '<S358>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S333>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S333>/override_enable'
   */
  if ((Driver_Temp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S333>/NewValue' incorporates:
     *  ActionPort: '<S357>/Action Port'
     */
    Mooventure2016_Rev5_B.s333_Merge = (Driver_Temp_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S357>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(124);
    }

    /* End of Outputs for SubSystem: '<S333>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S333>/OldValue' incorporates:
     *  ActionPort: '<S358>/Action Port'
     */
    Mooventure2016_Rev5_B.s333_Merge = Mooventure2016_Rev5_B.s319_driverTemp;

    /* S-Function (motohawk_sfun_code_cover): '<S358>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(125);
    }

    /* End of Outputs for SubSystem: '<S333>/OldValue' */
  }

  /* End of If: '<S333>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S194>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3910p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3910p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s194_AgeCount + 1) >
        Mooventure2016_Rev5_B.s194_AgeCount)
      Mooventure2016_Rev5_B.s194_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint8_T tmp4 = 0;
      int8_T tmp5 = 0;
      uint8_T tmp6 = 0;
      uint8_T tmp7 = 0;
      uint8_T tmp8 = 0;
      uint8_T tmp9 = 0;
      uint8_T tmp10 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp3))[0] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp4))[0] = ((msg_data[4])) ;
      ((uint8_T *)(&tmp5))[0] = ((msg_data[5])) ;
      ((uint8_T *)(&tmp6))[0] = ((msg_data[6] & 0x00000003)) ;
      ((uint8_T *)(&tmp7))[0] = ((msg_data[6] & 0x0000001C) >> 2) ;
      ((uint8_T *)(&tmp8))[0] = ((msg_data[6] & 0x000000E0) >> 5) ;
      ((uint8_T *)(&tmp9))[0] = ((msg_data[7] & 0x0000000F)) ;
      ((uint8_T *)(&tmp10))[0] = ((msg_data[7] & 0x000000F0) >> 4) ;
      Mooventure2016_Rev5_B.s194_InputVoltage = ((real_T) tmp0) * ((real_T) 2);
      Mooventure2016_Rev5_B.s194_OutputVoltage = ((real_T) tmp1) * ((real_T) 2);
      Mooventure2016_Rev5_B.s194_InputCurrentLimitMax = ((real_T) tmp2) /
        ((real_T) 2);
      Mooventure2016_Rev5_B.s194_InputCurrent = ((real_T) tmp3) / ((real_T) 2);
      Mooventure2016_Rev5_B.s194_OutputCurrent = ((real_T) tmp4) / ((real_T) 2);
      Mooventure2016_Rev5_B.s194_Eaton_HV_Charger_Temperature = ((real_T) tmp5)
        + ((real_T) -40);
      Mooventure2016_Rev5_B.s194_IgnitionStatus = (boolean_T) tmp6;
      Mooventure2016_Rev5_B.s194_ChargerState = (real_T) tmp7;
      Mooventure2016_Rev5_B.s194_FaultSeverityIndicator = (boolean_T) tmp8;
      Mooventure2016_Rev5_B.s194_MessageCounter = (real_T) tmp9;
      Mooventure2016_Rev5_B.s194_MessageChecksum = (real_T) tmp10;
      Mooventure2016_Rev5_B.s194_AgeCount = 0;
    }
  }

  /* If: '<S367>/If' incorporates:
   *  Inport: '<S385>/In1'
   *  Inport: '<S386>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S367>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S367>/override_enable'
   */
  if ((Eaton_HV_Charger_Temperature_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S367>/NewValue' incorporates:
     *  ActionPort: '<S385>/Action Port'
     */
    Mooventure2016_Rev5_B.s367_Merge =
      (Eaton_HV_Charger_Temperature_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S385>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(140);
    }

    /* End of Outputs for SubSystem: '<S367>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S367>/OldValue' incorporates:
     *  ActionPort: '<S386>/Action Port'
     */
    Mooventure2016_Rev5_B.s367_Merge =
      Mooventure2016_Rev5_B.s194_Eaton_HV_Charger_Temperature;

    /* S-Function (motohawk_sfun_code_cover): '<S386>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(141);
    }

    /* End of Outputs for SubSystem: '<S367>/OldValue' */
  }

  /* End of If: '<S367>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S195>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4007p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4007p0001_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint8_T tmp4 = 0;
      uint8_T tmp5 = 0;
      uint8_T tmp6 = 0;
      uint8_T tmp7 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0] & 0x000000C0) >> 6) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1] & 0x000000C0) >> 6) | ((msg_data[0]
        & 0x0000003F) << 2) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[2] & 0x000000C0) >> 6) | ((msg_data[1]
        & 0x0000003F) << 2) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[3] & 0x000000C0) >> 6) | ((msg_data[2]
        & 0x0000003F) << 2) ;
      ((uint8_T *)(&tmp3))[0] = ((msg_data[3] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp4))[0] = ((msg_data[3] & 0x00000010) >> 4) ;
      ((uint8_T *)(&tmp5))[0] = ((msg_data[3] & 0x00000008) >> 3) ;
      ((uint8_T *)(&tmp6))[0] = ((msg_data[3] & 0x00000006) >> 1) ;
      ((uint8_T *)(&tmp7))[0] = ((msg_data[4] & 0x000000FE) >> 1) | ((msg_data[3]
        & 0x00000001) << 7) ;
      Mooventure2016_Rev5_B.s195_ReadCANMessage_o1 = ((real_T) tmp0) * ((real_T)
        10);
      Mooventure2016_Rev5_B.s195_ReadCANMessage_o2 = (real_T) tmp1;
      Mooventure2016_Rev5_B.s195_ReadCANMessage_o3 = ((real_T) tmp2) + ((real_T)
        -40);
      Mooventure2016_Rev5_B.s195_ReadCANMessage_o4 = (real_T) tmp3;
      Mooventure2016_Rev5_B.s195_ReadCANMessage_o5 = (real_T) tmp4;
      Mooventure2016_Rev5_B.s195_ReadCANMessage_o6 = (real_T) tmp5;
      Mooventure2016_Rev5_B.s195_ReadCANMessage_o7 = (real_T) tmp6;
      Mooventure2016_Rev5_B.s195_ReadCANMessage_o8 = ((real_T) tmp7) + ((real_T)
        -40);
    }
  }

  /* If: '<S399>/If' incorporates:
   *  Inport: '<S409>/In1'
   *  Inport: '<S410>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S399>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S399>/override_enable'
   */
  if ((Temp_Guage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S399>/NewValue' incorporates:
     *  ActionPort: '<S409>/Action Port'
     */
    Mooventure2016_Rev5_B.s399_Merge = (Temp_Guage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S409>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(156);
    }

    /* End of Outputs for SubSystem: '<S399>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S399>/OldValue' incorporates:
     *  ActionPort: '<S410>/Action Port'
     */
    Mooventure2016_Rev5_B.s399_Merge =
      Mooventure2016_Rev5_B.s195_ReadCANMessage_o3;

    /* S-Function (motohawk_sfun_code_cover): '<S410>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(157);
    }

    /* End of Outputs for SubSystem: '<S399>/OldValue' */
  }

  /* End of If: '<S399>/If' */

  /* If: '<S404>/If' incorporates:
   *  Inport: '<S419>/In1'
   *  Inport: '<S420>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S404>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S404>/override_enable'
   */
  if ((Inv_Temp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S404>/NewValue' incorporates:
     *  ActionPort: '<S419>/Action Port'
     */
    Mooventure2016_Rev5_B.s404_Merge = (Inv_Temp_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S419>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(166);
    }

    /* End of Outputs for SubSystem: '<S404>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S404>/OldValue' incorporates:
     *  ActionPort: '<S420>/Action Port'
     */
    Mooventure2016_Rev5_B.s404_Merge =
      Mooventure2016_Rev5_B.s195_ReadCANMessage_o8;

    /* S-Function (motohawk_sfun_code_cover): '<S420>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(167);
    }

    /* End of Outputs for SubSystem: '<S404>/OldValue' */
  }

  /* End of If: '<S404>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S196>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4064p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4064p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s196_AgeCount_m + 1) >
        Mooventure2016_Rev5_B.s196_AgeCount_m)
      Mooventure2016_Rev5_B.s196_AgeCount_m++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint16_T tmp3 = 0;
      uint16_T tmp4 = 0;
      uint8_T tmp5 = 0;
      uint8_T tmp6 = 0;
      uint8_T tmp7 = 0;
      uint8_T tmp8 = 0;
      uint8_T tmp9 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[7])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[6])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[4] & 0x0000000F)) ;
      ((uint8_T *)(&tmp2))[1] = ((msg_data[5])) ;
      ((uint8_T *)(&tmp3))[0] = ((msg_data[3] & 0x000000F0) >> 4) ;
      ((uint8_T *)(&tmp3))[1] = ((msg_data[4] & 0x000000F0) >> 4) | ((msg_data[3]
        & 0x0000000F) << 4) ;
      ((uint8_T *)(&tmp4))[0] = ((msg_data[1] & 0x00000001)) ;
      ((uint8_T *)(&tmp4))[1] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp5))[0] = ((msg_data[1] & 0x000000F0) >> 4) ;
      ((uint8_T *)(&tmp6))[0] = ((msg_data[1] & 0x00000008) >> 3) ;
      ((uint8_T *)(&tmp7))[0] = ((msg_data[1] & 0x00000004) >> 2) ;
      ((uint8_T *)(&tmp8))[0] = ((msg_data[1] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp9))[0] = ((msg_data[0])) ;
      Mooventure2016_Rev5_B.s196_IPT_InverterTemperature = ((real_T) tmp0) +
        ((real_T) -40);
      Mooventure2016_Rev5_B.s196_IPT_MotorTemperature = ((real_T) tmp1) +
        ((real_T) -40);
      Mooventure2016_Rev5_B.s196_IPT_MaxTorqueAvailGen = (real_T) tmp2;
      Mooventure2016_Rev5_B.s196_IPT_MaxTorqueAvailMotor = (real_T) tmp3;
      Mooventure2016_Rev5_B.s196_IPT_HVDCVoltage = (real_T) tmp4;
      Mooventure2016_Rev5_B.s196_IPT_ErrorCategory = (real_T) tmp5;
      Mooventure2016_Rev5_B.s196_IPT_IPTReady = (real_T) tmp6;
      Mooventure2016_Rev5_B.s196_IPT_IPTAwake = (real_T) tmp7;
      Mooventure2016_Rev5_B.s196_IPT_MotorReady = (boolean_T) tmp8;
      Mooventure2016_Rev5_B.s196_IPT_MaxWasteAvailable = ((real_T) tmp9) *
        ((real_T) 50);
      Mooventure2016_Rev5_B.s196_AgeCount_m = 0;
    }
  }

  /* If: '<S452>/If' incorporates:
   *  Inport: '<S515>/In1'
   *  Inport: '<S516>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S452>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S452>/override_enable'
   */
  if ((IPT_Inverter_Temperature_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S452>/NewValue' incorporates:
     *  ActionPort: '<S515>/Action Port'
     */
    Mooventure2016_Rev5_B.s452_Merge =
      (IPT_Inverter_Temperature_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S515>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(230);
    }

    /* End of Outputs for SubSystem: '<S452>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S452>/OldValue' incorporates:
     *  ActionPort: '<S516>/Action Port'
     */
    Mooventure2016_Rev5_B.s452_Merge =
      Mooventure2016_Rev5_B.s196_IPT_InverterTemperature;

    /* S-Function (motohawk_sfun_code_cover): '<S516>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(231);
    }

    /* End of Outputs for SubSystem: '<S452>/OldValue' */
  }

  /* End of If: '<S452>/If' */

  /* Stateflow: '<S15>/Chart' */

  /* Gateway: Foreground/Control/Coolant Control/Chart */
  /* During: Foreground/Control/Coolant Control/Chart */
  if (Mooventure2016_Rev5_DWork.s28_is_active_c4_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Coolant Control/Chart */
    Mooventure2016_Rev5_DWork.s28_is_active_c4_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S28>:44' */
    Mooventure2016_Rev5_DWork.s28_is_c4_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_initialize_off;
  } else {
    switch (Mooventure2016_Rev5_DWork.s28_is_c4_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Master:
      Mooventure2016_Rev5_Master();
      break;

     case Mooventure2016_Rev5_IN_initialize_done:
      /* During 'initialize_done': '<S28>:51' */
      if (Mooventure2016_Rev5_B.s28_RadPump == 0.0) {
        /* Transition: '<S28>:87' */
        Mooventure2016_Rev5_DWork.s28_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Master;

        /* Entry 'Master': '<S28>:82' */
        Mooventure2016_Rev5_DWork.s28_is_active_Fan = 1U;

        /* Transition: '<S28>:183' */
        Mooventure2016_Rev5_DWork.s28_is_Fan = Mooventure2016_Rev5_IN_FanOff;
        Mooventure2016_Rev5_DWork.s28_is_active_RadBlend = 1U;

        /* Transition: '<S28>:265' */
        Mooventure2016_Rev5_DWork.s28_is_RadBlend =
          Mooventure2016_Rev5_IN_Closed;
        Mooventure2016_Rev5_DWork.s28_is_active_CoreBlend = 1U;

        /* Transition: '<S28>:266' */
        Mooventure2016_Rev5_DWork.s28_is_CoreBlend =
          Mooventure2016_Rev5_IN_Closed;
        Mooventure2016_Rev5_DWork.s28_is_active_RadPump = 1U;

        /* Transition: '<S28>:267' */
        Mooventure2016_Rev5_DWork.s28_is_RadPump = Mooventure2016_Rev5_IN_Off;
        Mooventure2016_Rev5_DWork.s28_is_active_Heater = 1U;

        /* Transition: '<S28>:184' */
        Mooventure2016_Rev5_DWork.s28_is_Heater = Mooventure2016_Rev5_IN_Heat_0;
        Mooventure2016_Rev5_DWork.s28_is_active_CorePump = 1U;

        /* Transition: '<S28>:268' */
        Mooventure2016_Rev5_DWork.s28_is_CorePump = Mooventure2016_Rev5_IN_Off;
      } else {
        Mooventure2016_Rev5_B.s28_RadPump = 0.0;
        Mooventure2016_Rev5_B.s28_CorePump = 0.0;
        Mooventure2016_Rev5_B.s28_fan = 0.0;
        Mooventure2016_Rev5_B.s28_RadBlendOut = 20.0;
        Mooventure2016_Rev5_B.s28_CoreBlendOut = 20.0;
        Mooventure2016_Rev5_B.s28_Heat1 = 0.0;
        Mooventure2016_Rev5_B.s28_Heat2 = 0.0;
        Mooventure2016_Rev5_B.s28_Heat3 = 0.0;
        Mooventure2016_Rev5_B.s28_Heat4 = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_initialize_off:
      /* During 'initialize_off': '<S28>:41' */
      if (Mooventure2016_Rev5_B.s28_RadPump == 0.0) {
        /* Transition: '<S28>:50' */
        Mooventure2016_Rev5_DWork.s28_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_initialize_on;

        /* Entry 'initialize_on': '<S28>:48' */
        Mooventure2016_Rev5_DWork.s28_count = 0.0;
      } else {
        Mooventure2016_Rev5_B.s28_RadPump = 0.0;
        Mooventure2016_Rev5_B.s28_CorePump = 0.0;
        Mooventure2016_Rev5_B.s28_fan = 0.0;
        Mooventure2016_Rev5_B.s28_RadBlendOut = 20.0;
        Mooventure2016_Rev5_B.s28_CoreBlendOut = 20.0;
        Mooventure2016_Rev5_B.s28_Heat1 = 0.0;
        Mooventure2016_Rev5_B.s28_Heat2 = 0.0;
        Mooventure2016_Rev5_B.s28_Heat3 = 0.0;
        Mooventure2016_Rev5_B.s28_Heat4 = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_initialize_on:
      /* During 'initialize_on': '<S28>:48' */
      if (Mooventure2016_Rev5_DWork.s28_count >= 600.0) {
        /* Transition: '<S28>:53' */
        Mooventure2016_Rev5_DWork.s28_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_initialize_done;
      } else {
        Mooventure2016_Rev5_B.s28_RadPump = 1.0;
        Mooventure2016_Rev5_B.s28_CorePump = 1.0;
        Mooventure2016_Rev5_B.s28_fan = 3.0;
        Mooventure2016_Rev5_DWork.s28_count =
          Mooventure2016_Rev5_DWork.s28_count + 1.0;
      }
      break;

     default:
      /* Transition: '<S28>:44' */
      Mooventure2016_Rev5_DWork.s28_is_c4_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_initialize_off;
      break;
    }
  }

  /* End of Stateflow: '<S15>/Chart' */
  /* If: '<S32>/If' incorporates:
   *  Inport: '<S46>/In1'
   *  Inport: '<S47>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S32>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S32>/override_enable'
   */
  if ((Radiator_Blend_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S32>/NewValue' incorporates:
     *  ActionPort: '<S46>/Action Port'
     */
    Mooventure2016_Rev5_B.s32_Merge = (Radiator_Blend_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S46>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(14);
    }

    /* End of Outputs for SubSystem: '<S32>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S32>/OldValue' incorporates:
     *  ActionPort: '<S47>/Action Port'
     */
    Mooventure2016_Rev5_B.s32_Merge = Mooventure2016_Rev5_B.s28_RadBlendOut;

    /* S-Function (motohawk_sfun_code_cover): '<S47>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(15);
    }

    /* End of Outputs for SubSystem: '<S32>/OldValue' */
  }

  /* End of If: '<S32>/If' */

  /* If: '<S594>/If' incorporates:
   *  Inport: '<S623>/In1'
   *  Inport: '<S624>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S594>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S594>/override_enable'
   */
  if ((Radiator_Pos_Request_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S594>/NewValue' incorporates:
     *  ActionPort: '<S623>/Action Port'
     */
    rtb_Merge_iy = (Radiator_Pos_Request_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S623>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(284);
    }

    /* End of Outputs for SubSystem: '<S594>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S594>/OldValue' incorporates:
     *  ActionPort: '<S624>/Action Port'
     */
    rtb_Merge_iy = Mooventure2016_Rev5_B.s32_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S624>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(285);
    }

    /* End of Outputs for SubSystem: '<S594>/OldValue' */
  }

  /* End of If: '<S594>/If' */

  /* MATLAB Function Block: '<S532>/Radiator Motion Control' */
  Mooventure2016_Rev5_HeaterCoreMotionControl(Mooventure2016_Rev5_B.s242_Sum1,
    rtb_Merge_iy, (Coolant_Hyst_DataStore()),
    &Mooventure2016_Rev5_B.s532_sf_RadiatorMotionControl);

  /* DataTypeConversion: '<S532>/Data Type Conversion5' */
  Mooventure2016_Rev5_B.s532_DataTypeConversion5 =
    ((Mooventure2016_Rev5_B.s532_sf_RadiatorMotionControl.s582_motorEnable !=
      0.0));

  /* Logic: '<S532>/Logical Operator' incorporates:
   *  Constant: '<S576>/Constant'
   *  RelationalOperator: '<S576>/Compare'
   *  S-Function (motohawk_sfun_data_read): '<S532>/motohawk_data_read1'
   *  S-Function (motohawk_sfun_data_read): '<S532>/motohawk_data_read2'
   */
  rtb_Eaton_Plugged_In = (Eaton_Plugged_In_DataStore() ||
    (Hybrid_State_DataStore() >= 2));

  /* S-Function Block: <S602>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s602_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_b = ((real_T) delta) * 0.000001;
  }

  /* If: '<S37>/If' incorporates:
   *  Inport: '<S56>/In1'
   *  Inport: '<S57>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S37>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S37>/override_enable'
   */
  if ((Heat_4_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S37>/NewValue' incorporates:
     *  ActionPort: '<S56>/Action Port'
     */
    rtb_Merge_cq = (Heat_4_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S56>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(24);
    }

    /* End of Outputs for SubSystem: '<S37>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S37>/OldValue' incorporates:
     *  ActionPort: '<S57>/Action Port'
     */
    rtb_Merge_cq = Mooventure2016_Rev5_B.s28_Heat4;

    /* S-Function (motohawk_sfun_code_cover): '<S57>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(25);
    }

    /* End of Outputs for SubSystem: '<S37>/OldValue' */
  }

  /* End of If: '<S37>/If' */

  /* Switch: '<S602>/Switch' incorporates:
   *  Constant: '<S602>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S602>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S602>/motohawk_delta_time'
   *  Sum: '<S602>/Sum'
   */
  if (rtb_Merge_cq >= 1.0) {
    rtb_Switch_d = rtb_motohawk_delta_time_b + Heat4Timer_DataStore();
  } else {
    rtb_Switch_d = 0.0;
  }

  /* End of Switch: '<S602>/Switch' */
  /* Logic: '<S580>/Logical Operator' incorporates:
   *  RelationalOperator: '<S580>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S532>/motohawk_calibration'
   */
  rtb_RelationalOperator_jg = ((rtb_Switch_d >= (Startup_Delay_DataStore())) &&
                               (rtb_Merge_cq != 0.0));

  /* Logic: '<S532>/Logical Operator8' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S532>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s532_LogicalOperator8 = ((Vehicle_Ready_DataStore() &&
    rtb_Eaton_Plugged_In && rtb_RelationalOperator_jg));

  /* If: '<S30>/If' incorporates:
   *  Inport: '<S42>/In1'
   *  Inport: '<S43>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S30>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S30>/override_enable'
   */
  if ((Cooling_Pump_Radiator_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S30>/NewValue' incorporates:
     *  ActionPort: '<S42>/Action Port'
     */
    rtb_UnitDelay_o = (Cooling_Pump_Radiator_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S42>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(10);
    }

    /* End of Outputs for SubSystem: '<S30>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S30>/OldValue' incorporates:
     *  ActionPort: '<S43>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s28_RadPump;

    /* S-Function (motohawk_sfun_code_cover): '<S43>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(11);
    }

    /* End of Outputs for SubSystem: '<S30>/OldValue' */
  }

  /* End of If: '<S30>/If' */

  /* DataTypeConversion: '<S15>/Data Type Conversion8' */
  Mooventure2016_Rev5_B.s15_Cooling_Pump_Radiator = ((rtb_UnitDelay_o != 0.0));

  /* If: '<S29>/If' incorporates:
   *  Inport: '<S40>/In1'
   *  Inport: '<S41>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S29>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S29>/override_enable'
   */
  if ((Cooling_Pump_Heater_Core_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S29>/NewValue' incorporates:
     *  ActionPort: '<S40>/Action Port'
     */
    rtb_UnitDelay_o = (Cooling_Pump_Heater_Core_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S40>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(8);
    }

    /* End of Outputs for SubSystem: '<S29>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S29>/OldValue' incorporates:
     *  ActionPort: '<S41>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s28_CorePump;

    /* S-Function (motohawk_sfun_code_cover): '<S41>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(9);
    }

    /* End of Outputs for SubSystem: '<S29>/OldValue' */
  }

  /* End of If: '<S29>/If' */

  /* DataTypeConversion: '<S15>/Data Type Conversion1' */
  Mooventure2016_Rev5_B.s15_Cooling_Pump_Heater_Core = ((rtb_UnitDelay_o != 0.0));

  /* If: '<S31>/If' incorporates:
   *  Inport: '<S44>/In1'
   *  Inport: '<S45>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S31>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S31>/override_enable'
   */
  if ((Radiator_Fan_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S31>/NewValue' incorporates:
     *  ActionPort: '<S44>/Action Port'
     */
    rtb_UnitDelay_o = (Radiator_Fan_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S44>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(12);
    }

    /* End of Outputs for SubSystem: '<S31>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S31>/OldValue' incorporates:
     *  ActionPort: '<S45>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s28_fan;

    /* S-Function (motohawk_sfun_code_cover): '<S45>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(13);
    }

    /* End of Outputs for SubSystem: '<S31>/OldValue' */
  }

  /* End of If: '<S31>/If' */

  /* MATLAB Function Block: '<S532>/Fan Adapter' */

  /* MATLAB Function 'Foreground/Outputs/Coolant Outputs/Fan Adapter': '<S581>:1' */
  if (rtb_UnitDelay_o == 1.0) {
    /* '<S581>:1:3' */
    /* '<S581>:1:4' */
    Mooventure2016_Rev5_B.s581_fan1 = 1.0;

    /* '<S581>:1:5' */
    Mooventure2016_Rev5_B.s581_fan2 = 0.0;

    /* '<S581>:1:6' */
    Mooventure2016_Rev5_B.s581_fan3 = 0.0;
  } else if (rtb_UnitDelay_o == 2.0) {
    /* '<S581>:1:7' */
    /* '<S581>:1:8' */
    Mooventure2016_Rev5_B.s581_fan1 = 0.0;

    /* '<S581>:1:9' */
    Mooventure2016_Rev5_B.s581_fan2 = 1.0;

    /* '<S581>:1:10' */
    Mooventure2016_Rev5_B.s581_fan3 = 0.0;
  } else if (rtb_UnitDelay_o == 3.0) {
    /* '<S581>:1:11' */
    /* '<S581>:1:12' */
    Mooventure2016_Rev5_B.s581_fan1 = 0.0;

    /* '<S581>:1:13' */
    Mooventure2016_Rev5_B.s581_fan2 = 1.0;

    /* '<S581>:1:14' */
    Mooventure2016_Rev5_B.s581_fan3 = 1.0;
  } else {
    /* '<S581>:1:16' */
    Mooventure2016_Rev5_B.s581_fan1 = 0.0;

    /* '<S581>:1:17' */
    Mooventure2016_Rev5_B.s581_fan2 = 0.0;

    /* '<S581>:1:18' */
    Mooventure2016_Rev5_B.s581_fan3 = 0.0;
  }

  /* End of MATLAB Function Block: '<S532>/Fan Adapter' */

  /* DataTypeConversion: '<S532>/Data Type Conversion4' */
  Mooventure2016_Rev5_B.s532_DataTypeConversion4 =
    ((Mooventure2016_Rev5_B.s532_sf_RadiatorMotionControl.s582_motorDirection !=
      0.0));

  /* If: '<S33>/If' incorporates:
   *  Inport: '<S48>/In1'
   *  Inport: '<S49>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S33>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S33>/override_enable'
   */
  if ((Heater_Core_Blend_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S33>/NewValue' incorporates:
     *  ActionPort: '<S48>/Action Port'
     */
    Mooventure2016_Rev5_B.s33_Merge = (Heater_Core_Blend_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S48>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(16);
    }

    /* End of Outputs for SubSystem: '<S33>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S33>/OldValue' incorporates:
     *  ActionPort: '<S49>/Action Port'
     */
    Mooventure2016_Rev5_B.s33_Merge = Mooventure2016_Rev5_B.s28_CoreBlendOut;

    /* S-Function (motohawk_sfun_code_cover): '<S49>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(17);
    }

    /* End of Outputs for SubSystem: '<S33>/OldValue' */
  }

  /* End of If: '<S33>/If' */

  /* If: '<S595>/If' incorporates:
   *  Inport: '<S625>/In1'
   *  Inport: '<S626>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S595>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S595>/override_enable'
   */
  if ((Heater_Core_Pos_Request_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S595>/NewValue' incorporates:
     *  ActionPort: '<S625>/Action Port'
     */
    rtb_Merge_ox = (Heater_Core_Pos_Request_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S625>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(286);
    }

    /* End of Outputs for SubSystem: '<S595>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S595>/OldValue' incorporates:
     *  ActionPort: '<S626>/Action Port'
     */
    rtb_Merge_ox = Mooventure2016_Rev5_B.s33_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S626>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(287);
    }

    /* End of Outputs for SubSystem: '<S595>/OldValue' */
  }

  /* End of If: '<S595>/If' */

  /* MATLAB Function Block: '<S532>/Heater Core Motion Control' */
  Mooventure2016_Rev5_HeaterCoreMotionControl(Mooventure2016_Rev5_B.s241_Sum1,
    rtb_Merge_ox, (Coolant_Hyst_DataStore()),
    &Mooventure2016_Rev5_B.s532_sf_HeaterCoreMotionControl);

  /* DataTypeConversion: '<S532>/Data Type Conversion1' */
  Mooventure2016_Rev5_B.s532_DataTypeConversion1 =
    ((Mooventure2016_Rev5_B.s532_sf_HeaterCoreMotionControl.s582_motorEnable !=
      0.0));

  /* DataTypeConversion: '<S532>/Data Type Conversion2' */
  Mooventure2016_Rev5_B.s532_DataTypeConversion2 =
    ((Mooventure2016_Rev5_B.s532_sf_HeaterCoreMotionControl.s582_motorDirection
      != 0.0));

  /* S-Function Block: <S599>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s599_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_i = ((real_T) delta) * 0.000001;
  }

  /* If: '<S34>/If' incorporates:
   *  Inport: '<S50>/In1'
   *  Inport: '<S51>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S34>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S34>/override_enable'
   */
  if ((Heat_1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S34>/NewValue' incorporates:
     *  ActionPort: '<S50>/Action Port'
     */
    rtb_UnitDelay_m = (Heat_1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S50>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(18);
    }

    /* End of Outputs for SubSystem: '<S34>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S34>/OldValue' incorporates:
     *  ActionPort: '<S51>/Action Port'
     */
    rtb_UnitDelay_m = Mooventure2016_Rev5_B.s28_Heat1;

    /* S-Function (motohawk_sfun_code_cover): '<S51>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(19);
    }

    /* End of Outputs for SubSystem: '<S34>/OldValue' */
  }

  /* End of If: '<S34>/If' */

  /* Switch: '<S599>/Switch' incorporates:
   *  Constant: '<S599>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S599>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S599>/motohawk_delta_time'
   *  Sum: '<S599>/Sum'
   */
  if (rtb_UnitDelay_m >= 1.0) {
    rtb_Switch_e = rtb_motohawk_delta_time_i + Heat1Timer_DataStore();
  } else {
    rtb_Switch_e = 0.0;
  }

  /* End of Switch: '<S599>/Switch' */

  /* Logic: '<S577>/Logical Operator' incorporates:
   *  RelationalOperator: '<S577>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S532>/motohawk_calibration'
   */
  rtb_RelationalOperator2_id = ((rtb_Switch_e >= (Startup_Delay_DataStore())) &&
                                (rtb_UnitDelay_m != 0.0));

  /* Logic: '<S532>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S532>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s532_LogicalOperator5 = ((Vehicle_Ready_DataStore() &&
    rtb_Eaton_Plugged_In && rtb_RelationalOperator2_id));

  /* S-Function Block: <S600>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s600_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_g = ((real_T) delta) * 0.000001;
  }

  /* If: '<S35>/If' incorporates:
   *  Inport: '<S52>/In1'
   *  Inport: '<S53>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S35>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S35>/override_enable'
   */
  if ((Heat_2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S35>/NewValue' incorporates:
     *  ActionPort: '<S52>/Action Port'
     */
    rtb_Merge_bg = (Heat_2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S52>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(20);
    }

    /* End of Outputs for SubSystem: '<S35>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S35>/OldValue' incorporates:
     *  ActionPort: '<S53>/Action Port'
     */
    rtb_Merge_bg = Mooventure2016_Rev5_B.s28_Heat2;

    /* S-Function (motohawk_sfun_code_cover): '<S53>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(21);
    }

    /* End of Outputs for SubSystem: '<S35>/OldValue' */
  }

  /* End of If: '<S35>/If' */

  /* Switch: '<S600>/Switch' incorporates:
   *  Constant: '<S600>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S600>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S600>/motohawk_delta_time'
   *  Sum: '<S600>/Sum'
   */
  if (rtb_Merge_bg >= 1.0) {
    rtb_Switch_fi = rtb_motohawk_delta_time_g + Heat2Timer_DataStore();
  } else {
    rtb_Switch_fi = 0.0;
  }

  /* End of Switch: '<S600>/Switch' */

  /* Logic: '<S578>/Logical Operator' incorporates:
   *  RelationalOperator: '<S578>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S532>/motohawk_calibration'
   */
  rtb_LogicalOperator2_c = ((rtb_Switch_fi >= (Startup_Delay_DataStore())) &&
    (rtb_Merge_bg != 0.0));

  /* Logic: '<S532>/Logical Operator6' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S532>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s532_LogicalOperator6 = ((Vehicle_Ready_DataStore() &&
    rtb_Eaton_Plugged_In && rtb_LogicalOperator2_c));

  /* S-Function Block: <S601>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s601_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_a = ((real_T) delta) * 0.000001;
  }

  /* If: '<S36>/If' incorporates:
   *  Inport: '<S54>/In1'
   *  Inport: '<S55>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S36>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S36>/override_enable'
   */
  if ((Heat_3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S36>/NewValue' incorporates:
     *  ActionPort: '<S54>/Action Port'
     */
    rtb_Merge_ko = (Heat_3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S54>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(22);
    }

    /* End of Outputs for SubSystem: '<S36>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S36>/OldValue' incorporates:
     *  ActionPort: '<S55>/Action Port'
     */
    rtb_Merge_ko = Mooventure2016_Rev5_B.s28_Heat3;

    /* S-Function (motohawk_sfun_code_cover): '<S55>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(23);
    }

    /* End of Outputs for SubSystem: '<S36>/OldValue' */
  }

  /* End of If: '<S36>/If' */

  /* Switch: '<S601>/Switch' incorporates:
   *  Constant: '<S601>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S601>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S601>/motohawk_delta_time'
   *  Sum: '<S601>/Sum'
   */
  if (rtb_Merge_ko >= 1.0) {
    rtb_Switch_c = rtb_motohawk_delta_time_a + Heat3Timer_DataStore();
  } else {
    rtb_Switch_c = 0.0;
  }

  /* End of Switch: '<S601>/Switch' */

  /* Logic: '<S579>/Logical Operator' incorporates:
   *  RelationalOperator: '<S579>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S532>/motohawk_calibration'
   */
  rtb_Compare_nd = ((rtb_Switch_c >= (Startup_Delay_DataStore())) &&
                    (rtb_Merge_ko != 0.0));

  /* Logic: '<S532>/Logical Operator7' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S532>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s532_LogicalOperator7 = ((Vehicle_Ready_DataStore() &&
    rtb_Eaton_Plugged_In && rtb_Compare_nd));

  /* If: '<S589>/If' incorporates:
   *  Inport: '<S613>/In1'
   *  Inport: '<S614>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S589>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S589>/override_enable'
   */
  if ((Fan2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S589>/NewValue' incorporates:
     *  ActionPort: '<S613>/Action Port'
     */
    rtb_UnitDelay_o = (Fan2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S613>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(274);
    }

    /* End of Outputs for SubSystem: '<S589>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S589>/OldValue' incorporates:
     *  ActionPort: '<S614>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s581_fan2;

    /* S-Function (motohawk_sfun_code_cover): '<S614>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(275);
    }

    /* End of Outputs for SubSystem: '<S589>/OldValue' */
  }

  /* End of If: '<S589>/If' */

  /* DataTypeConversion: '<S532>/Data Type Conversion' */
  rtb_DataTypeConversion_gi = (rtb_UnitDelay_o != 0.0);

  /* If: '<S590>/If' incorporates:
   *  Inport: '<S615>/In1'
   *  Inport: '<S616>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S590>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S590>/override_enable'
   */
  if ((Fan3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S590>/NewValue' incorporates:
     *  ActionPort: '<S615>/Action Port'
     */
    rtb_UnitDelay_o = (Fan3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S615>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(276);
    }

    /* End of Outputs for SubSystem: '<S590>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S590>/OldValue' incorporates:
     *  ActionPort: '<S616>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s581_fan3;

    /* S-Function (motohawk_sfun_code_cover): '<S616>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(277);
    }

    /* End of Outputs for SubSystem: '<S590>/OldValue' */
  }

  /* End of If: '<S590>/If' */

  /* DataTypeConversion: '<S532>/Data Type Conversion3' */
  rtb_DataTypeConversion3_i = (rtb_UnitDelay_o != 0.0);

  /* If: '<S588>/If' incorporates:
   *  Inport: '<S611>/In1'
   *  Inport: '<S612>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S588>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S588>/override_enable'
   */
  if ((Fan1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S588>/NewValue' incorporates:
     *  ActionPort: '<S611>/Action Port'
     */
    rtb_UnitDelay_o = (Fan1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S611>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(272);
    }

    /* End of Outputs for SubSystem: '<S588>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S588>/OldValue' incorporates:
     *  ActionPort: '<S612>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s581_fan1;

    /* S-Function (motohawk_sfun_code_cover): '<S612>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(273);
    }

    /* End of Outputs for SubSystem: '<S588>/OldValue' */
  }

  /* End of If: '<S588>/If' */

  /* DataTypeConversion: '<S532>/Data Type Conversion6' */
  rtb_DataTypeConversion6 = (rtb_UnitDelay_o != 0.0);

  /* Saturate: '<S599>/Saturation' */
  rtb_Saturation = rtb_Switch_e >= 86400.0 ? 86400.0 : rtb_Switch_e <= 0.0 ? 0.0
    : rtb_Switch_e;

  /* S-Function (motohawk_sfun_data_write): '<S599>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Heat1Timer */
  {
    Heat1Timer_DataStore() = rtb_Saturation;
  }

  /* Saturate: '<S600>/Saturation' */
  rtb_Saturation_i = rtb_Switch_fi >= 86400.0 ? 86400.0 : rtb_Switch_fi <= 0.0 ?
    0.0 : rtb_Switch_fi;

  /* S-Function (motohawk_sfun_data_write): '<S600>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Heat2Timer */
  {
    Heat2Timer_DataStore() = rtb_Saturation_i;
  }

  /* Saturate: '<S601>/Saturation' */
  rtb_Saturation_l = rtb_Switch_c >= 86400.0 ? 86400.0 : rtb_Switch_c <= 0.0 ?
    0.0 : rtb_Switch_c;

  /* S-Function (motohawk_sfun_data_write): '<S601>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Heat3Timer */
  {
    Heat3Timer_DataStore() = rtb_Saturation_l;
  }

  /* Saturate: '<S602>/Saturation' */
  rtb_Saturation_f = rtb_Switch_d >= 86400.0 ? 86400.0 : rtb_Switch_d <= 0.0 ?
    0.0 : rtb_Switch_d;

  /* S-Function (motohawk_sfun_data_write): '<S602>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Heat4Timer */
  {
    Heat4Timer_DataStore() = rtb_Saturation_f;
  }

  /* If: '<S584>/If' incorporates:
   *  Inport: '<S603>/In1'
   *  Inport: '<S604>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S584>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S584>/override_enable'
   */
  if ((Radiator_Motor_Enable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S584>/NewValue' incorporates:
     *  ActionPort: '<S603>/Action Port'
     */
    rtb_Merge_gd = (Radiator_Motor_Enable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S603>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(264);
    }

    /* End of Outputs for SubSystem: '<S584>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S584>/OldValue' incorporates:
     *  ActionPort: '<S604>/Action Port'
     */
    rtb_Merge_gd = Mooventure2016_Rev5_B.s532_DataTypeConversion5;

    /* S-Function (motohawk_sfun_code_cover): '<S604>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(265);
    }

    /* End of Outputs for SubSystem: '<S584>/OldValue' */
  }

  /* End of If: '<S584>/If' */

  /* If: '<S585>/If' incorporates:
   *  Inport: '<S605>/In1'
   *  Inport: '<S606>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S585>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S585>/override_enable'
   */
  if ((Heat4_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S585>/NewValue' incorporates:
     *  ActionPort: '<S605>/Action Port'
     */
    rtb_Merge_dm = (Heat4_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S605>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(266);
    }

    /* End of Outputs for SubSystem: '<S585>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S585>/OldValue' incorporates:
     *  ActionPort: '<S606>/Action Port'
     */
    rtb_Merge_dm = Mooventure2016_Rev5_B.s532_LogicalOperator8;

    /* S-Function (motohawk_sfun_code_cover): '<S606>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(267);
    }

    /* End of Outputs for SubSystem: '<S585>/OldValue' */
  }

  /* End of If: '<S585>/If' */

  /* If: '<S586>/If' incorporates:
   *  Inport: '<S607>/In1'
   *  Inport: '<S608>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S586>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S586>/override_enable'
   */
  if ((Radiator_Pump_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S586>/NewValue' incorporates:
     *  ActionPort: '<S607>/Action Port'
     */
    rtb_Merge_ay5 = (Radiator_Pump_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S607>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(268);
    }

    /* End of Outputs for SubSystem: '<S586>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S586>/OldValue' incorporates:
     *  ActionPort: '<S608>/Action Port'
     */
    rtb_Merge_ay5 = Mooventure2016_Rev5_B.s15_Cooling_Pump_Radiator;

    /* S-Function (motohawk_sfun_code_cover): '<S608>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(269);
    }

    /* End of Outputs for SubSystem: '<S586>/OldValue' */
  }

  /* End of If: '<S586>/If' */

  /* If: '<S587>/If' incorporates:
   *  Inport: '<S609>/In1'
   *  Inport: '<S610>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S587>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S587>/override_enable'
   */
  if ((Heater_Core_Pump_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S587>/NewValue' incorporates:
     *  ActionPort: '<S609>/Action Port'
     */
    rtb_Merge_lq = (Heater_Core_Pump_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S609>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(270);
    }

    /* End of Outputs for SubSystem: '<S587>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S587>/OldValue' incorporates:
     *  ActionPort: '<S610>/Action Port'
     */
    rtb_Merge_lq = Mooventure2016_Rev5_B.s15_Cooling_Pump_Heater_Core;

    /* S-Function (motohawk_sfun_code_cover): '<S610>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(271);
    }

    /* End of Outputs for SubSystem: '<S587>/OldValue' */
  }

  /* End of If: '<S587>/If' */

  /* If: '<S591>/If' incorporates:
   *  Inport: '<S617>/In1'
   *  Inport: '<S618>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S591>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S591>/override_enable'
   */
  if ((Radiator_Motor_Direction_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S591>/NewValue' incorporates:
     *  ActionPort: '<S617>/Action Port'
     */
    rtb_Merge_pi3 = (Radiator_Motor_Direction_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S617>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(278);
    }

    /* End of Outputs for SubSystem: '<S591>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S591>/OldValue' incorporates:
     *  ActionPort: '<S618>/Action Port'
     */
    rtb_Merge_pi3 = Mooventure2016_Rev5_B.s532_DataTypeConversion4;

    /* S-Function (motohawk_sfun_code_cover): '<S618>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(279);
    }

    /* End of Outputs for SubSystem: '<S591>/OldValue' */
  }

  /* End of If: '<S591>/If' */

  /* If: '<S592>/If' incorporates:
   *  Inport: '<S619>/In1'
   *  Inport: '<S620>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S592>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S592>/override_enable'
   */
  if ((Heater_Core_Motor_Enable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S592>/NewValue' incorporates:
     *  ActionPort: '<S619>/Action Port'
     */
    rtb_Merge_of1 = (Heater_Core_Motor_Enable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S619>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(280);
    }

    /* End of Outputs for SubSystem: '<S592>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S592>/OldValue' incorporates:
     *  ActionPort: '<S620>/Action Port'
     */
    rtb_Merge_of1 = Mooventure2016_Rev5_B.s532_DataTypeConversion1;

    /* S-Function (motohawk_sfun_code_cover): '<S620>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(281);
    }

    /* End of Outputs for SubSystem: '<S592>/OldValue' */
  }

  /* End of If: '<S592>/If' */

  /* If: '<S593>/If' incorporates:
   *  Inport: '<S621>/In1'
   *  Inport: '<S622>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S593>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S593>/override_enable'
   */
  if ((Heater_Core_Motor_Direction_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S593>/NewValue' incorporates:
     *  ActionPort: '<S621>/Action Port'
     */
    rtb_Merge_ln = (Heater_Core_Motor_Direction_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S621>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(282);
    }

    /* End of Outputs for SubSystem: '<S593>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S593>/OldValue' incorporates:
     *  ActionPort: '<S622>/Action Port'
     */
    rtb_Merge_ln = Mooventure2016_Rev5_B.s532_DataTypeConversion2;

    /* S-Function (motohawk_sfun_code_cover): '<S622>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(283);
    }

    /* End of Outputs for SubSystem: '<S593>/OldValue' */
  }

  /* End of If: '<S593>/If' */

  /* If: '<S596>/If' incorporates:
   *  Inport: '<S627>/In1'
   *  Inport: '<S628>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S596>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S596>/override_enable'
   */
  if ((Heat1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S596>/NewValue' incorporates:
     *  ActionPort: '<S627>/Action Port'
     */
    rtb_Merge_oqt = (Heat1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S627>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(288);
    }

    /* End of Outputs for SubSystem: '<S596>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S596>/OldValue' incorporates:
     *  ActionPort: '<S628>/Action Port'
     */
    rtb_Merge_oqt = Mooventure2016_Rev5_B.s532_LogicalOperator5;

    /* S-Function (motohawk_sfun_code_cover): '<S628>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(289);
    }

    /* End of Outputs for SubSystem: '<S596>/OldValue' */
  }

  /* End of If: '<S596>/If' */

  /* If: '<S597>/If' incorporates:
   *  Inport: '<S629>/In1'
   *  Inport: '<S630>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S597>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S597>/override_enable'
   */
  if ((Heat2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S597>/NewValue' incorporates:
     *  ActionPort: '<S629>/Action Port'
     */
    rtb_Merge_cg = (Heat2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S629>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(290);
    }

    /* End of Outputs for SubSystem: '<S597>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S597>/OldValue' incorporates:
     *  ActionPort: '<S630>/Action Port'
     */
    rtb_Merge_cg = Mooventure2016_Rev5_B.s532_LogicalOperator6;

    /* S-Function (motohawk_sfun_code_cover): '<S630>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(291);
    }

    /* End of Outputs for SubSystem: '<S597>/OldValue' */
  }

  /* End of If: '<S597>/If' */

  /* If: '<S598>/If' incorporates:
   *  Inport: '<S631>/In1'
   *  Inport: '<S632>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S598>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S598>/override_enable'
   */
  if ((Heat3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S598>/NewValue' incorporates:
     *  ActionPort: '<S631>/Action Port'
     */
    rtb_Merge_l1 = (Heat3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S631>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(292);
    }

    /* End of Outputs for SubSystem: '<S598>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S598>/OldValue' incorporates:
     *  ActionPort: '<S632>/Action Port'
     */
    rtb_Merge_l1 = Mooventure2016_Rev5_B.s532_LogicalOperator7;

    /* S-Function (motohawk_sfun_code_cover): '<S632>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(293);
    }

    /* End of Outputs for SubSystem: '<S598>/OldValue' */
  }

  /* End of If: '<S598>/If' */

  /* S-Function Block: <S19>/motohawk_din Resource: ESTOP2 */

  /* Logic: '<S19>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_din): '<S19>/motohawk_din'
   */
  rtb_LogicalOperator5 = !rtb_motohawk_din;

  /* Logic: '<S19>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S19>/motohawk_data_read1'
   *  S-Function (motohawk_sfun_fault_action): '<S19>/motohawk_fault_action'
   */
  rtb_LogicalOperator5 = (rtb_LogicalOperator5 || GetFaultActionStatus(7) ||
    Shutdown_Req_DataStore());

  /* Logic: '<S19>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S19>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S19>/motohawk_data_read'
   */
  rtb_LogicalOperator5_c = (Batt_Load_Enable_DataStore() ||
    ((Auto_Battery_Startup_DataStore()) != 0.0));

  /* If: '<S365>/If' incorporates:
   *  Inport: '<S381>/In1'
   *  Inport: '<S382>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S365>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S365>/override_enable'
   */
  if ((Charger_State_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S365>/NewValue' incorporates:
     *  ActionPort: '<S381>/Action Port'
     */
    rtb_Merge_b0 = (Charger_State_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S381>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(136);
    }

    /* End of Outputs for SubSystem: '<S365>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S365>/OldValue' incorporates:
     *  ActionPort: '<S382>/Action Port'
     */
    rtb_Merge_b0 = Mooventure2016_Rev5_B.s194_ChargerState;

    /* S-Function (motohawk_sfun_code_cover): '<S382>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(137);
    }

    /* End of Outputs for SubSystem: '<S365>/OldValue' */
  }

  /* End of If: '<S365>/If' */

  /* RelationalOperator: '<S194>/Relational Operator1' incorporates:
   *  Constant: '<S194>/Constant1'
   */
  rtb_Eaton_Charging = (rtb_Merge_b0 >= 2.0);

  /* Stateflow: '<S19>/Chart' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S19>/motohawk_data_read2'
   */

  /* Gateway: Foreground/Control/Vehicle Run/Stop Determination/Chart */
  /* During: Foreground/Control/Vehicle Run/Stop Determination/Chart */
  if (Mooventure2016_Rev5_DWork.s186_is_active_c1_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Vehicle Run/Stop Determination/Chart */
    Mooventure2016_Rev5_DWork.s186_is_active_c1_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S186>:10' */
    Mooventure2016_Rev5_DWork.s186_is_c1_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Initial;
  } else {
    switch (Mooventure2016_Rev5_DWork.s186_is_c1_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Batterybootup:
      /* During 'Batterybootup': '<S186>:13' */
      if (rtb_LogicalOperator5) {
        /* Transition: '<S186>:22' */
        Mooventure2016_Rev5_DWork.s186_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Shutdown_Sequence;
      } else if (rtb_LogicalOperator5_c) {
        /* Transition: '<S186>:37' */
        Mooventure2016_Rev5_DWork.s186_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Charging_and_Temp;
      } else {
        Mooventure2016_Rev5_B.s186_Vehicle_Enable = TRUE;
        Mooventure2016_Rev5_B.s186_Vehicle_Ready = FALSE;
        Mooventure2016_Rev5_B.s186_Torque_Enable = FALSE;
        Mooventure2016_Rev5_B.s186_Keyed_Relay = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_Charging_and_Temp:
      /* During 'Charging_and_Temp': '<S186>:15' */
      if (!rtb_Eaton_Charging) {
        /* Transition: '<S186>:20' */
        Mooventure2016_Rev5_DWork.s186_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal_Operation;
      } else if (rtb_LogicalOperator5) {
        /* Transition: '<S186>:40' */
        Mooventure2016_Rev5_DWork.s186_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Counting;

        /* Entry 'Counting': '<S186>:39' */
        Mooventure2016_Rev5_DWork.s186_count = 0.0;
      } else {
        Mooventure2016_Rev5_B.s186_Vehicle_Enable = TRUE;
        Mooventure2016_Rev5_B.s186_Vehicle_Ready = TRUE;
        Mooventure2016_Rev5_B.s186_Torque_Enable = FALSE;
        Mooventure2016_Rev5_B.s186_Keyed_Relay = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_Counting:
      /* During 'Counting': '<S186>:39' */
      if (Mooventure2016_Rev5_DWork.s186_count >= 200.0) {
        /* Transition: '<S186>:42' */
        Mooventure2016_Rev5_DWork.s186_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Shutdown_Sequence;
      } else if (!rtb_LogicalOperator5) {
        /* Transition: '<S186>:43' */
        Mooventure2016_Rev5_DWork.s186_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal_Operation;
      } else {
        Mooventure2016_Rev5_DWork.s186_count =
          Mooventure2016_Rev5_DWork.s186_count + 1.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Initial:
      /* During 'Initial': '<S186>:9' */
      if (!rtb_LogicalOperator5) {
        /* Transition: '<S186>:14' */
        Mooventure2016_Rev5_DWork.s186_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Batterybootup;
      } else {
        /* Transition: '<S186>:30' */
        Mooventure2016_Rev5_DWork.s186_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Shutdown_Sequence;
      }
      break;

     case Mooventure2016_Rev5_IN_Kill_Component_Keyed:
      /* During 'Kill_Component_Keyed': '<S186>:26' */
      Mooventure2016_Rev5_B.s186_Vehicle_Enable = FALSE;
      Mooventure2016_Rev5_B.s186_Vehicle_Ready = FALSE;
      Mooventure2016_Rev5_B.s186_Torque_Enable = FALSE;
      Mooventure2016_Rev5_B.s186_Keyed_Relay = FALSE;
      break;

     case Mooventure2016_Rev5_IN_Normal_Operation:
      /* During 'Normal_Operation': '<S186>:18' */
      if (rtb_Eaton_Charging) {
        /* Transition: '<S186>:25' */
        Mooventure2016_Rev5_DWork.s186_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Charging_and_Temp;
      } else if (rtb_LogicalOperator5) {
        /* Transition: '<S186>:41' */
        Mooventure2016_Rev5_DWork.s186_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Counting;

        /* Entry 'Counting': '<S186>:39' */
        Mooventure2016_Rev5_DWork.s186_count = 0.0;
      } else {
        Mooventure2016_Rev5_B.s186_Vehicle_Enable = TRUE;
        Mooventure2016_Rev5_B.s186_Vehicle_Ready = TRUE;
        Mooventure2016_Rev5_B.s186_Torque_Enable = TRUE;
        Mooventure2016_Rev5_B.s186_Keyed_Relay = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_Shutdown_Sequence:
      /* During 'Shutdown_Sequence': '<S186>:21' */
      if (!Batt_Contactor_Status_DataStore()) {
        /* Transition: '<S186>:27' */
        Mooventure2016_Rev5_DWork.s186_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Kill_Component_Keyed;
      } else {
        Mooventure2016_Rev5_B.s186_Vehicle_Enable = FALSE;
        Mooventure2016_Rev5_B.s186_Vehicle_Ready = FALSE;
        Mooventure2016_Rev5_B.s186_Torque_Enable = FALSE;
        Mooventure2016_Rev5_B.s186_Keyed_Relay = TRUE;
      }
      break;

     default:
      /* Transition: '<S186>:10' */
      Mooventure2016_Rev5_DWork.s186_is_c1_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Initial;
      break;
    }
  }

  /* End of Stateflow: '<S19>/Chart' */

  /* Stateflow: '<S533>/Coil1State' */

  /* Gateway: Foreground/Outputs/DistributionBox/Coil1State */
  /* During: Foreground/Outputs/DistributionBox/Coil1State */
  if (Mooventure2016_Rev5_DWork.s633_is_active_c8_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/DistributionBox/Coil1State */
    Mooventure2016_Rev5_DWork.s633_is_active_c8_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S633>:10' */
    Mooventure2016_Rev5_DWork.s633_is_c8_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Coil1Disabled;
  } else {
    switch (Mooventure2016_Rev5_DWork.s633_is_c8_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Coil1Disabled:
      /* During 'Coil1Disabled': '<S633>:9' */
      if ((Mooventure2016_Rev5_B.s121_MultiportSwitch == 0.0) && (rtb_Merge_o0 >=
           50.0) && Mooventure2016_Rev5_B.s186_Keyed_Relay) {
        /* Transition: '<S633>:30' */
        Mooventure2016_Rev5_DWork.s633_is_c8_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil1Enabled;
      } else {
        Mooventure2016_Rev5_B.s633_Coil1State = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Coil1Enabled:
      /* During 'Coil1Enabled': '<S633>:21' */
      if ((Mooventure2016_Rev5_B.s121_MultiportSwitch == 0.0) &&
          (!Mooventure2016_Rev5_B.s186_Keyed_Relay)) {
        /* Transition: '<S633>:32' */
        Mooventure2016_Rev5_DWork.s633_is_c8_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil1Disabled;
      } else {
        Mooventure2016_Rev5_B.s633_Coil1State = TRUE;
      }
      break;

     default:
      /* Transition: '<S633>:10' */
      Mooventure2016_Rev5_DWork.s633_is_c8_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Coil1Disabled;
      break;
    }
  }

  /* End of Stateflow: '<S533>/Coil1State' */

  /* DataTypeConversion: '<S533>/Data Type Conversion1' incorporates:
   *  Constant: '<S636>/Constant'
   *  RelationalOperator: '<S636>/Compare'
   */
  rtb_LogicalOperator5 = (rtb_Merge_b0 == 2.0);

  /* Stateflow: '<S533>/Coil2State' */

  /* Gateway: Foreground/Outputs/DistributionBox/Coil2State */
  /* During: Foreground/Outputs/DistributionBox/Coil2State */
  if (Mooventure2016_Rev5_DWork.s634_is_active_c9_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/DistributionBox/Coil2State */
    Mooventure2016_Rev5_DWork.s634_is_active_c9_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S634>:10' */
    Mooventure2016_Rev5_DWork.s634_is_c9_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Coil2Disabled;
  } else {
    switch (Mooventure2016_Rev5_DWork.s634_is_c9_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Coil2Disabled:
      /* During 'Coil2Disabled': '<S634>:9' */
      if ((!rtb_LogicalOperator5) && Mooventure2016_Rev5_B.s186_Keyed_Relay) {
        /* Transition: '<S634>:48' */
        Mooventure2016_Rev5_DWork.s634_is_c9_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil2Enabled;
      } else {
        Mooventure2016_Rev5_B.s634_Coil2State = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Coil2Enabled:
      /* During 'Coil2Enabled': '<S634>:21' */
      if ((!rtb_LogicalOperator5) && (!Mooventure2016_Rev5_B.s186_Keyed_Relay))
      {
        /* Transition: '<S634>:32' */
        Mooventure2016_Rev5_DWork.s634_is_c9_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil2Disabled;
      } else {
        Mooventure2016_Rev5_B.s634_Coil2State = TRUE;
      }
      break;

     default:
      /* Transition: '<S634>:10' */
      Mooventure2016_Rev5_DWork.s634_is_c9_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Coil2Disabled;
      break;
    }
  }

  /* End of Stateflow: '<S533>/Coil2State' */

  /* Logic: '<S533>/Logical Operator1' */
  rtb_LogicalOperator5 = ((rtb_UnitDelay_m != 0.0) || (rtb_Merge_bg != 0.0) ||
    (rtb_Merge_ko != 0.0) || (rtb_Merge_cq != 0.0));

  /* Logic: '<S533>/Logical Operator' */
  rtb_LogicalOperator5_c = ((Mooventure2016_Rev5_B.s280_Merge != 0.0) ||
    (Mooventure2016_Rev5_B.s279_Merge != 0.0));

  /* Stateflow: '<S533>/Coil2State1' */

  /* Gateway: Foreground/Outputs/DistributionBox/Coil2State1 */
  /* During: Foreground/Outputs/DistributionBox/Coil2State1 */
  if (Mooventure2016_Rev5_DWork.s635_is_active_c10_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/DistributionBox/Coil2State1 */
    Mooventure2016_Rev5_DWork.s635_is_active_c10_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S635>:10' */
    Mooventure2016_Rev5_DWork.s635_is_c10_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Coil3Disabled;
  } else {
    switch (Mooventure2016_Rev5_DWork.s635_is_c10_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Coil3Disabled:
      /* During 'Coil3Disabled': '<S635>:9' */
      if ((!rtb_LogicalOperator5) && (!rtb_LogicalOperator5_c) &&
          Mooventure2016_Rev5_B.s186_Keyed_Relay) {
        /* Transition: '<S635>:30' */
        Mooventure2016_Rev5_DWork.s635_is_c10_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil3Enabled;
      } else {
        Mooventure2016_Rev5_B.s635_Coil3State = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Coil3Enabled:
      /* During 'Coil3Enabled': '<S635>:21' */
      if ((!rtb_LogicalOperator5) && (!rtb_LogicalOperator5_c) &&
          (!Mooventure2016_Rev5_B.s186_Keyed_Relay)) {
        /* Transition: '<S635>:32' */
        Mooventure2016_Rev5_DWork.s635_is_c10_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil3Disabled;
      } else {
        Mooventure2016_Rev5_B.s635_Coil3State = TRUE;
      }
      break;

     default:
      /* Transition: '<S635>:10' */
      Mooventure2016_Rev5_DWork.s635_is_c10_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Coil3Disabled;
      break;
    }
  }

  /* End of Stateflow: '<S533>/Coil2State1' */

  /* If: '<S639>/If' incorporates:
   *  Inport: '<S647>/In1'
   *  Inport: '<S648>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S639>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S639>/override_enable'
   */
  if ((Coil1_IPT_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S639>/NewValue' incorporates:
     *  ActionPort: '<S647>/Action Port'
     */
    rtb_Merge_ef = (Coil1_IPT_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S647>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(298);
    }

    /* End of Outputs for SubSystem: '<S639>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S639>/OldValue' incorporates:
     *  ActionPort: '<S648>/Action Port'
     */
    rtb_Merge_ef = Mooventure2016_Rev5_B.s633_Coil1State;

    /* S-Function (motohawk_sfun_code_cover): '<S648>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(299);
    }

    /* End of Outputs for SubSystem: '<S639>/OldValue' */
  }

  /* End of If: '<S639>/If' */

  /* If: '<S640>/If' incorporates:
   *  Inport: '<S649>/In1'
   *  Inport: '<S650>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S640>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S640>/override_enable'
   */
  if ((Coil2_Charger_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S640>/NewValue' incorporates:
     *  ActionPort: '<S649>/Action Port'
     */
    rtb_Merge_nv = (Coil2_Charger_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S649>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(300);
    }

    /* End of Outputs for SubSystem: '<S640>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S640>/OldValue' incorporates:
     *  ActionPort: '<S650>/Action Port'
     */
    rtb_Merge_nv = Mooventure2016_Rev5_B.s634_Coil2State;

    /* S-Function (motohawk_sfun_code_cover): '<S650>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(301);
    }

    /* End of Outputs for SubSystem: '<S640>/OldValue' */
  }

  /* End of If: '<S640>/If' */

  /* If: '<S641>/If' incorporates:
   *  Inport: '<S651>/In1'
   *  Inport: '<S652>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S641>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S641>/override_enable'
   */
  if ((Coil3_Heater_AC_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S641>/NewValue' incorporates:
     *  ActionPort: '<S651>/Action Port'
     */
    rtb_Merge_iu = (Coil3_Heater_AC_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S651>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(302);
    }

    /* End of Outputs for SubSystem: '<S641>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S641>/OldValue' incorporates:
     *  ActionPort: '<S652>/Action Port'
     */
    rtb_Merge_iu = Mooventure2016_Rev5_B.s635_Coil3State;

    /* S-Function (motohawk_sfun_code_cover): '<S652>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(303);
    }

    /* End of Outputs for SubSystem: '<S641>/OldValue' */
  }

  /* End of If: '<S641>/If' */

  /* If: '<S637>/If' incorporates:
   *  Constant: '<S533>/Constant'
   *  Inport: '<S643>/In1'
   *  Inport: '<S644>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S637>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S637>/override_enable'
   */
  if ((Coil5_AuxCoil_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S637>/NewValue' incorporates:
     *  ActionPort: '<S643>/Action Port'
     */
    rtb_UnitDelay_o = (Coil5_AuxCoil_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S643>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(294);
    }

    /* End of Outputs for SubSystem: '<S637>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S637>/OldValue' incorporates:
     *  ActionPort: '<S644>/Action Port'
     */
    rtb_UnitDelay_o = 0.0;

    /* S-Function (motohawk_sfun_code_cover): '<S644>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(295);
    }

    /* End of Outputs for SubSystem: '<S637>/OldValue' */
  }

  /* End of If: '<S637>/If' */

  /* DataTypeConversion: '<S533>/Data Type Conversion6' */
  rtb_DataTypeConversion6_c = (rtb_UnitDelay_o != 0.0);

  /* If: '<S642>/If' incorporates:
   *  Constant: '<S533>/Constant2'
   *  Inport: '<S653>/In1'
   *  Inport: '<S654>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S642>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S642>/override_enable'
   */
  if ((Coil4_MaleOrangeConnector_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S642>/NewValue' incorporates:
     *  ActionPort: '<S653>/Action Port'
     */
    rtb_UnitDelay_o = (Coil4_MaleOrangeConnector_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S653>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(304);
    }

    /* End of Outputs for SubSystem: '<S642>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S642>/OldValue' incorporates:
     *  ActionPort: '<S654>/Action Port'
     */
    rtb_UnitDelay_o = 0.0;

    /* S-Function (motohawk_sfun_code_cover): '<S654>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(305);
    }

    /* End of Outputs for SubSystem: '<S642>/OldValue' */
  }

  /* End of If: '<S642>/If' */

  /* DataTypeConversion: '<S533>/Data Type Conversion5' */
  rtb_DataTypeConversion5 = (rtb_UnitDelay_o != 0.0);

  /* S-Function (motohawk_sfun_probe): '<S533>/motohawk_probe11' */
  (InterlockEnable_Probe_DataStore()) = (InterlockEnable_DataStore());

  /* If: '<S638>/If' incorporates:
   *  Inport: '<S645>/In1'
   *  Inport: '<S646>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S533>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S638>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S638>/override_enable'
   */
  if ((InterlockEnable_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S638>/NewValue' incorporates:
     *  ActionPort: '<S645>/Action Port'
     */
    rtb_UnitDelay_o = (InterlockEnable_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S645>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(296);
    }

    /* End of Outputs for SubSystem: '<S638>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S638>/OldValue' incorporates:
     *  ActionPort: '<S646>/Action Port'
     */
    rtb_UnitDelay_o = (InterlockEnable_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S646>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(297);
    }

    /* End of Outputs for SubSystem: '<S638>/OldValue' */
  }

  /* End of If: '<S638>/If' */

  /* DataTypeConversion: '<S533>/Data Type Conversion8' */
  rtb_DataTypeConversion8 = (rtb_UnitDelay_o != 0.0);

  /* If: '<S429>/If' incorporates:
   *  Inport: '<S469>/In1'
   *  Inport: '<S470>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S429>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S429>/override_enable'
   */
  if ((IPT_Motor_Ready_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S429>/NewValue' incorporates:
     *  ActionPort: '<S469>/Action Port'
     */
    rtb_LogicalOperator5 = (IPT_Motor_Ready_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S469>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs17/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(184);
    }

    /* End of Outputs for SubSystem: '<S429>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S429>/OldValue' incorporates:
     *  ActionPort: '<S470>/Action Port'
     */
    rtb_LogicalOperator5 = Mooventure2016_Rev5_B.s196_IPT_MotorReady;

    /* S-Function (motohawk_sfun_code_cover): '<S470>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs17/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(185);
    }

    /* End of Outputs for SubSystem: '<S429>/OldValue' */
  }

  /* End of If: '<S429>/If' */

  /* Stateflow: '<S534>/PowerSteering' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S534>/motohawk_data_read1'
   */

  /* Gateway: Foreground/Outputs/Driver Ouputs/PowerSteering */
  /* During: Foreground/Outputs/Driver Ouputs/PowerSteering */
  if (Mooventure2016_Rev5_DWork.s662_is_active_c28_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/Driver Ouputs/PowerSteering */
    Mooventure2016_Rev5_DWork.s662_is_active_c28_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S662>:10' */
    Mooventure2016_Rev5_DWork.s662_is_c28_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_INIT;
  } else {
    switch (Mooventure2016_Rev5_DWork.s662_is_c28_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_INIT:
      /* During 'INIT': '<S662>:9' */
      if (rtb_LogicalOperator5) {
        /* Transition: '<S662>:42' */
        Mooventure2016_Rev5_DWork.s662_is_c28_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_MotorRunning;
      } else {
        Mooventure2016_Rev5_B.s662_VehicleReadyOutput = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_MotorRunning:
      /* During 'MotorRunning': '<S662>:21' */
      if (!Vehicle_Ready_DataStore()) {
        /* Transition: '<S662>:43' */
        Mooventure2016_Rev5_DWork.s662_is_c28_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_PowerSteeringOn;
      } else {
        Mooventure2016_Rev5_B.s662_VehicleReadyOutput = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_PowerSteeringOff:
      /* During 'PowerSteeringOff': '<S662>:44' */
      Mooventure2016_Rev5_B.s662_VehicleReadyOutput = FALSE;
      break;

     case Mooventure2016_Rev5_IN_PowerSteeringOn:
      /* During 'PowerSteeringOn': '<S662>:39' */
      if (Mooventure2016_Rev5_B.s321_posOut == 2.0) {
        /* Transition: '<S662>:45' */
        Mooventure2016_Rev5_DWork.s662_is_c28_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_PowerSteeringOff;
      } else {
        Mooventure2016_Rev5_B.s662_VehicleReadyOutput = TRUE;
      }
      break;

     default:
      /* Transition: '<S662>:10' */
      Mooventure2016_Rev5_DWork.s662_is_c28_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_INIT;
      break;
    }
  }

  /* End of Stateflow: '<S534>/PowerSteering' */
  /* If: '<S664>/If' incorporates:
   *  Inport: '<S759>/In1'
   *  Inport: '<S760>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S664>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S664>/override_enable'
   */
  if ((Ready_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S664>/NewValue' incorporates:
     *  ActionPort: '<S759>/Action Port'
     */
    rtb_Merge_kn = (Ready_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S759>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(358);
    }

    /* End of Outputs for SubSystem: '<S664>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S664>/OldValue' incorporates:
     *  ActionPort: '<S760>/Action Port'
     */
    rtb_Merge_kn = Mooventure2016_Rev5_B.s662_VehicleReadyOutput;

    /* S-Function (motohawk_sfun_code_cover): '<S760>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(359);
    }

    /* End of Outputs for SubSystem: '<S664>/OldValue' */
  }

  /* End of If: '<S664>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S534>/motohawk_fault_action2'
   *
   * Regarding '<S534>/motohawk_fault_action2':
     Get Fault Action Status: Regen_Brakes_Disabled
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s534_Regen_Brakes_Disabled = GetFaultActionStatus(11);
  }

  /* If: '<S671>/If' incorporates:
   *  Inport: '<S773>/In1'
   *  Inport: '<S774>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S671>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S671>/override_enable'
   */
  if ((Regen_Brakes_Disabled_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S671>/NewValue' incorporates:
     *  ActionPort: '<S773>/Action Port'
     */
    rtb_Merge_pl = (Regen_Brakes_Disabled_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S773>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(372);
    }

    /* End of Outputs for SubSystem: '<S671>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S671>/OldValue' incorporates:
     *  ActionPort: '<S774>/Action Port'
     */
    rtb_Merge_pl = Mooventure2016_Rev5_B.s534_Regen_Brakes_Disabled;

    /* S-Function (motohawk_sfun_code_cover): '<S774>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(373);
    }

    /* End of Outputs for SubSystem: '<S671>/OldValue' */
  }

  /* End of If: '<S671>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S534>/motohawk_fault_action1'
   *
   * Regarding '<S534>/motohawk_fault_action1':
     Get Fault Action Status: HV_Light
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s534_HV_Elec_Sys_Warm = GetFaultActionStatus(9);
  }

  /* If: '<S672>/If' incorporates:
   *  Inport: '<S775>/In1'
   *  Inport: '<S776>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S672>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S672>/override_enable'
   */
  if ((HV_Elec_Sys_Wrn_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S672>/NewValue' incorporates:
     *  ActionPort: '<S775>/Action Port'
     */
    rtb_Merge_e4 = (HV_Elec_Sys_Wrn_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S775>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(374);
    }

    /* End of Outputs for SubSystem: '<S672>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S672>/OldValue' incorporates:
     *  ActionPort: '<S776>/Action Port'
     */
    rtb_Merge_e4 = Mooventure2016_Rev5_B.s534_HV_Elec_Sys_Warm;

    /* S-Function (motohawk_sfun_code_cover): '<S776>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(375);
    }

    /* End of Outputs for SubSystem: '<S672>/OldValue' */
  }

  /* End of If: '<S672>/If' */

  /* If: '<S403>/If' incorporates:
   *  Inport: '<S417>/In1'
   *  Inport: '<S418>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S403>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S403>/override_enable'
   */
  if ((Fault_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S403>/NewValue' incorporates:
     *  ActionPort: '<S417>/Action Port'
     */
    rtb_Merge_bg = (Fault_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S417>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(164);
    }

    /* End of Outputs for SubSystem: '<S403>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S403>/OldValue' incorporates:
     *  ActionPort: '<S418>/Action Port'
     */
    rtb_Merge_bg = Mooventure2016_Rev5_B.s195_ReadCANMessage_o7;

    /* S-Function (motohawk_sfun_code_cover): '<S418>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(165);
    }

    /* End of Outputs for SubSystem: '<S403>/OldValue' */
  }

  /* End of If: '<S403>/If' */

  /* Logic: '<S534>/Logical Operator' incorporates:
   *  Constant: '<S656>/Constant'
   *  Constant: '<S657>/Constant'
   *  RelationalOperator: '<S656>/Compare'
   *  RelationalOperator: '<S657>/Compare'
   *  S-Function (motohawk_sfun_fault_action): '<S534>/motohawk_fault_action'
   */
  Mooventure2016_Rev5_B.s534_Repair_Wrench = ((GetFaultActionStatus(15) ||
    (rtb_Merge_bg == 1.0) || (rtb_Merge_bg == 3.0)));

  /* If: '<S673>/If' incorporates:
   *  Inport: '<S777>/In1'
   *  Inport: '<S778>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S673>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S673>/override_enable'
   */
  if ((Repair_Wrench_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S673>/NewValue' incorporates:
     *  ActionPort: '<S777>/Action Port'
     */
    rtb_Merge_br = (Repair_Wrench_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S777>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(376);
    }

    /* End of Outputs for SubSystem: '<S673>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S673>/OldValue' incorporates:
     *  ActionPort: '<S778>/Action Port'
     */
    rtb_Merge_br = Mooventure2016_Rev5_B.s534_Repair_Wrench;

    /* S-Function (motohawk_sfun_code_cover): '<S778>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(377);
    }

    /* End of Outputs for SubSystem: '<S673>/OldValue' */
  }

  /* End of If: '<S673>/If' */

  /* If: '<S674>/If' incorporates:
   *  Inport: '<S779>/In1'
   *  Inport: '<S780>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S674>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S674>/override_enable'
   */
  if ((Cruise_Ctrl_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S674>/NewValue' incorporates:
     *  ActionPort: '<S779>/Action Port'
     */
    rtb_Merge_gn = (Cruise_Ctrl_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S779>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(378);
    }

    /* End of Outputs for SubSystem: '<S674>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S674>/OldValue' incorporates:
     *  ActionPort: '<S780>/Action Port'
     */
    rtb_Merge_gn = Mooventure2016_Rev5_B.s130_System;

    /* S-Function (motohawk_sfun_code_cover): '<S780>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(379);
    }

    /* End of Outputs for SubSystem: '<S674>/OldValue' */
  }

  /* End of If: '<S674>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S534>/motohawk_fault_action5'
   *
   * Regarding '<S534>/motohawk_fault_action5':
     Get Fault Action Status: Temperature_Solid
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_Eaton_Plugged_In = GetFaultActionStatus(14);
  }

  /* DataTypeConversion: '<S534>/Data Type Conversion' */
  rtb_UnitDelay_o = (real_T)rtb_Eaton_Plugged_In;

  /* S-Function (motohawk_sfun_fault_action): '<S534>/motohawk_fault_action6'
   *
   * Regarding '<S534>/motohawk_fault_action6':
     Get Fault Action Status: Temperature_Flash
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_Eaton_Plugged_In = GetFaultActionStatus(13);
  }

  /* DataTypeConversion: '<S534>/Data Type Conversion1' */
  rtb_UnitDelay_m = (real_T)rtb_Eaton_Plugged_In;

  /* Stateflow: '<S534>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S534>/motohawk_calibration1'
   */

  /* Gateway: Foreground/Outputs/Driver Ouputs/Chart */
  /* During: Foreground/Outputs/Driver Ouputs/Chart */
  if (Mooventure2016_Rev5_DWork.s655_is_active_c22_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/Driver Ouputs/Chart */
    Mooventure2016_Rev5_DWork.s655_is_active_c22_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S655>:2' */
    Mooventure2016_Rev5_DWork.s655_is_c22_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Normal;
  } else {
    switch (Mooventure2016_Rev5_DWork.s655_is_c22_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_FlashOff:
      /* During 'FlashOff': '<S655>:11' */
      if (rtb_UnitDelay_m == 0.0) {
        /* Transition: '<S655>:22' */
        Mooventure2016_Rev5_DWork.s655_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal;
      } else {
        Mooventure2016_Rev5_B.s655_engTemp = 23.0;
        Mooventure2016_Rev5_B.s655_transTemp = 23.0;
      }
      break;

     case Mooventure2016_Rev5_IN_FlashOn:
      /* During 'FlashOn': '<S655>:8' */
      if (rtb_UnitDelay_m == 0.0) {
        /* Transition: '<S655>:10' */
        Mooventure2016_Rev5_DWork.s655_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal;
      } else if (Mooventure2016_Rev5_B.s655_engTemp == 200.0) {
        /* Transition: '<S655>:24' */
        Mooventure2016_Rev5_DWork.s655_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Wait;

        /* Entry 'Wait': '<S655>:23' */
        Mooventure2016_Rev5_DWork.s655_count = 0.0;
      } else {
        Mooventure2016_Rev5_B.s655_engTemp = 200.0;
        Mooventure2016_Rev5_B.s655_transTemp = 200.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Normal:
      /* During 'Normal': '<S655>:1' */
      if (rtb_UnitDelay_o == 1.0) {
        /* Transition: '<S655>:4' */
        Mooventure2016_Rev5_DWork.s655_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Solid;
      } else if (rtb_UnitDelay_m == 1.0) {
        /* Transition: '<S655>:9' */
        Mooventure2016_Rev5_DWork.s655_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_FlashOn;
      } else {
        Mooventure2016_Rev5_B.s655_engTemp = 23.0;
        Mooventure2016_Rev5_B.s655_transTemp = 23.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Solid:
      /* During 'Solid': '<S655>:3' */
      if (rtb_UnitDelay_o == 0.0) {
        /* Transition: '<S655>:6' */
        Mooventure2016_Rev5_DWork.s655_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal;
      } else {
        Mooventure2016_Rev5_B.s655_engTemp = 200.0;
        Mooventure2016_Rev5_B.s655_transTemp = 200.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Wait:
      /* During 'Wait': '<S655>:23' */
      if (Mooventure2016_Rev5_DWork.s655_count >= (Flash_Timer_DataStore())) {
        /* Transition: '<S655>:25' */
        Mooventure2016_Rev5_DWork.s655_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_FlashOff;
      } else {
        Mooventure2016_Rev5_DWork.s655_count =
          Mooventure2016_Rev5_DWork.s655_count + 1.0;
      }
      break;

     default:
      /* Transition: '<S655>:2' */
      Mooventure2016_Rev5_DWork.s655_is_c22_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Normal;
      break;
    }
  }

  /* End of Stateflow: '<S534>/Chart' */
  /* If: '<S675>/If' incorporates:
   *  Inport: '<S781>/In1'
   *  Inport: '<S782>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S675>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S675>/override_enable'
   */
  if ((Eng_Cool_Temp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S675>/NewValue' incorporates:
     *  ActionPort: '<S781>/Action Port'
     */
    rtb_Merge_cu = (Eng_Cool_Temp_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S781>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(380);
    }

    /* End of Outputs for SubSystem: '<S675>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S675>/OldValue' incorporates:
     *  ActionPort: '<S782>/Action Port'
     */
    rtb_Merge_cu = Mooventure2016_Rev5_B.s655_engTemp;

    /* S-Function (motohawk_sfun_code_cover): '<S782>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(381);
    }

    /* End of Outputs for SubSystem: '<S675>/OldValue' */
  }

  /* End of If: '<S675>/If' */

  /* If: '<S676>/If' incorporates:
   *  Inport: '<S783>/In1'
   *  Inport: '<S784>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S676>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S676>/override_enable'
   */
  if ((Me_Cool_Temp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S676>/NewValue' incorporates:
     *  ActionPort: '<S783>/Action Port'
     */
    rtb_Merge_nyh = (Me_Cool_Temp_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S783>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(382);
    }

    /* End of Outputs for SubSystem: '<S676>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S676>/OldValue' incorporates:
     *  ActionPort: '<S784>/Action Port'
     */
    rtb_Merge_nyh = Mooventure2016_Rev5_B.s655_transTemp;

    /* S-Function (motohawk_sfun_code_cover): '<S784>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(383);
    }

    /* End of Outputs for SubSystem: '<S676>/OldValue' */
  }

  /* End of If: '<S676>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S534>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x500 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        uint8_T tmp5;
        uint8_T tmp6;
        tmp0 = (uint8_T)(rtb_Merge_kn != 0);
        tmp1 = (uint8_T)(rtb_Merge_pl != 0);
        tmp2 = (uint8_T)(rtb_Merge_e4 != 0);
        tmp3 = (uint8_T)(rtb_Merge_br != 0);
        tmp4 = (uint8_T)(rtb_Merge_gn != 0);
        if (rtb_Merge_cu < -40.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if (rtb_Merge_cu > 215.0000000000F) {
          tmp5 = (uint8_T)(255U);
        } else {
          tmp5 = (uint8_T)(rtb_Merge_cu - (-40.0000000000F));
        }

        if (rtb_Merge_nyh < -40.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if (rtb_Merge_nyh > 215.0000000000F) {
          tmp6 = (uint8_T)(255U);
        } else {
          tmp6 = (uint8_T)(rtb_Merge_nyh - (-40.0000000000F));
        }

        msg_data[0] = 0 ;
        msg_data[1] = 0 ;
        msg_data[2] = ((((uint8_T *)(&tmp6))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp5))[0])) ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = ((((uint8_T *)(&tmp0))[0] & 0x00000001)) | ((((uint8_T *)(
          &tmp1))[0] & 0x00000001) << 2) | ((((uint8_T *)(&tmp2))[0] &
          0x00000001) << 3) | ((((uint8_T *)(&tmp3))[0] & 0x00000001) << 4) |
          ((((uint8_T *)(&tmp4))[0] & 0x00000001) << 6) ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(0, 0x500UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* Abs: '<S534>/Abs1' */
  Mooventure2016_Rev5_B.s534_Engine_Speed = fabs
    (Mooventure2016_Rev5_B.s447_Merge);

  /* If: '<S677>/If' incorporates:
   *  Inport: '<S785>/In1'
   *  Inport: '<S786>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S677>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S677>/override_enable'
   */
  if ((Engine_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S677>/NewValue' incorporates:
     *  ActionPort: '<S785>/Action Port'
     */
    rtb_Merge_m1 = (Engine_Speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S785>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(384);
    }

    /* End of Outputs for SubSystem: '<S677>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S677>/OldValue' incorporates:
     *  ActionPort: '<S786>/Action Port'
     */
    rtb_Merge_m1 = Mooventure2016_Rev5_B.s534_Engine_Speed;

    /* S-Function (motohawk_sfun_code_cover): '<S786>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(385);
    }

    /* End of Outputs for SubSystem: '<S677>/OldValue' */
  }

  /* End of If: '<S677>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S534>/Send CAN Messages1' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x180 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        if (rtb_Merge_m1 < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Merge_m1 > 16383.7500000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(rtb_Merge_m1 * (4.0000000000F));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[2] = 0 ;
        msg_data[3] = 0 ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(0, 0x180UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* Product: '<S534>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S534>/motohawk_calibration38'
   */
  rtb_UnitDelay_o = rtb_Sum1 * (SOC_Multiplier_DataStore());

  /* Sum: '<S534>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S534>/motohawk_calibration39'
   */
  Mooventure2016_Rev5_B.s534_Current = rtb_UnitDelay_o - (SOC_Subtract_DataStore
    ());

  /* If: '<S678>/If' incorporates:
   *  Inport: '<S787>/In1'
   *  Inport: '<S788>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S678>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S678>/override_enable'
   */
  if ((Current_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S678>/NewValue' incorporates:
     *  ActionPort: '<S787>/Action Port'
     */
    rtb_Merge_kt = (Current_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S787>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(386);
    }

    /* End of Outputs for SubSystem: '<S678>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S678>/OldValue' incorporates:
     *  ActionPort: '<S788>/Action Port'
     */
    rtb_Merge_kt = Mooventure2016_Rev5_B.s534_Current;

    /* S-Function (motohawk_sfun_code_cover): '<S788>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(387);
    }

    /* End of Outputs for SubSystem: '<S678>/OldValue' */
  }

  /* End of If: '<S678>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S534>/Send CAN Messages2' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x300 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        if (rtb_Merge_kt < -150.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Merge_kt > 6403.5000000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)((rtb_Merge_kt - (-150.0000000000F)) *
                            (10.0000000000F));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[2] = 0 ;
        msg_data[3] = 0 ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(0, 0x300UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* Product: '<S534>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S534>/motohawk_calibration7'
   */
  rtb_UnitDelay_o = (RPM_to_Wheel_Speed_Multiplier_DataStore()) *
    Mooventure2016_Rev5_B.s447_Merge;

  /* Abs: '<S534>/Abs2' incorporates:
   *  Product: '<S534>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S534>/motohawk_calibration8'
   */
  Mooventure2016_Rev5_B.s534_Vehi_Speed = fabs(rtb_UnitDelay_o *
    (MPH_to_KMH_DataStore()));

  /* If: '<S667>/If' incorporates:
   *  Inport: '<S765>/In1'
   *  Inport: '<S766>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S667>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S667>/override_enable'
   */
  if ((Vehicle_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S667>/NewValue' incorporates:
     *  ActionPort: '<S765>/Action Port'
     */
    rtb_Merge_e3 = (Vehicle_Speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S765>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(364);
    }

    /* End of Outputs for SubSystem: '<S667>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S667>/OldValue' incorporates:
     *  ActionPort: '<S766>/Action Port'
     */
    rtb_Merge_e3 = Mooventure2016_Rev5_B.s534_Vehi_Speed;

    /* S-Function (motohawk_sfun_code_cover): '<S766>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(365);
    }

    /* End of Outputs for SubSystem: '<S667>/OldValue' */
  }

  /* End of If: '<S667>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S534>/Send CAN Messages4' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x425 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        if (rtb_Merge_e3 < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Merge_e3 > 511.9921875000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(rtb_Merge_e3 * (128.0000000000F));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[2] = 0 ;
        msg_data[3] = 0 ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(0, 0x425UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* Logic: '<S534>/Logical Operator1' incorporates:
   *  Constant: '<S658>/Constant'
   *  RelationalOperator: '<S658>/Compare'
   *  S-Function (motohawk_sfun_fault_action): '<S534>/motohawk_fault_action3'
   */
  rtb_LogicalOperator5 = ((rtb_Merge_bg >= 2.0) || GetFaultActionStatus(3));

  /* MATLAB Function Block: '<S534>/Embedded MATLAB Function' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S534>/motohawk_fault_action7'
   */

  /* MATLAB Function 'Foreground/Outputs/Driver Ouputs/Embedded MATLAB Function': '<S659>:1' */
  if (GetFaultActionStatus(4) == TRUE) {
    /* '<S659>:1:3' */
    /* '<S659>:1:4' */
    Mooventure2016_Rev5_B.s659_CEL = 2.0;
  } else if (rtb_LogicalOperator5 == TRUE) {
    /* '<S659>:1:5' */
    /* '<S659>:1:6' */
    Mooventure2016_Rev5_B.s659_CEL = 1.0;
  } else {
    /* '<S659>:1:8' */
    Mooventure2016_Rev5_B.s659_CEL = 0.0;
  }

  /* End of MATLAB Function Block: '<S534>/Embedded MATLAB Function' */
  /* If: '<S669>/If' incorporates:
   *  Inport: '<S769>/In1'
   *  Inport: '<S770>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S669>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S669>/override_enable'
   */
  if ((Check_Engine_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S669>/NewValue' incorporates:
     *  ActionPort: '<S769>/Action Port'
     */
    rtb_Merge_ofx = (Check_Engine_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S769>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(368);
    }

    /* End of Outputs for SubSystem: '<S669>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S669>/OldValue' incorporates:
     *  ActionPort: '<S770>/Action Port'
     */
    rtb_Merge_ofx = Mooventure2016_Rev5_B.s659_CEL;

    /* S-Function (motohawk_sfun_code_cover): '<S770>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(369);
    }

    /* End of Outputs for SubSystem: '<S669>/OldValue' */
  }

  /* End of If: '<S669>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S534>/motohawk_fault_action4'
   *
   * Regarding '<S534>/motohawk_fault_action4':
     Get Fault Action Status: Batt_Light
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s534_Battery_Light = GetFaultActionStatus(0);
  }

  /* If: '<S670>/If' incorporates:
   *  Inport: '<S771>/In1'
   *  Inport: '<S772>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S670>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S670>/override_enable'
   */
  if ((Battery_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S670>/NewValue' incorporates:
     *  ActionPort: '<S771>/Action Port'
     */
    rtb_Merge_en = (Battery_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S771>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(370);
    }

    /* End of Outputs for SubSystem: '<S670>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S670>/OldValue' incorporates:
     *  ActionPort: '<S772>/Action Port'
     */
    rtb_Merge_en = Mooventure2016_Rev5_B.s534_Battery_Light;

    /* S-Function (motohawk_sfun_code_cover): '<S772>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(371);
    }

    /* End of Outputs for SubSystem: '<S670>/OldValue' */
  }

  /* End of If: '<S670>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S534>/Send CAN Messages6' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x510 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        if (rtb_Merge_ofx < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_ofx > 3.0000000000F) {
          tmp0 = (uint8_T)(3U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_ofx);
        }

        tmp1 = (uint8_T)(rtb_Merge_en != 0);
        msg_data[0] = 0 ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[0] & 0x00000003) << 4) ;
        msg_data[2] = ((((uint8_T *)(&tmp1))[0] & 0x00000001) << 6) ;
        msg_data[3] = 0 ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(0, 0x510UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function Block: <S660>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s660_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_kay = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S660>/Switch1' incorporates:
   *  Constant: '<S534>/ 1'
   */
  if (Mooventure2016_Rev5_ConstB.s660_DataTypeConversion) {
    rtb_Switch_c = 0.0;
  } else {
    /* MinMax: '<S679>/MinMax' incorporates:
     *  Constant: '<S534>/   '
     *  Gain: '<S534>/Gain'
     *  Product: '<S660>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S660>/motohawk_delta_time'
     */
    rtb_UnitDelay_m = 0.00027777777777777778 * rtb_UnitDelay_o *
      rtb_motohawk_delta_time_kay;
    rtb_UnitDelay_m = rtb_UnitDelay_m >= 0.0 ? rtb_UnitDelay_m : 0.0;

    /* MinMax: '<S679>/MinMax1' incorporates:
     *  Constant: '<S534>/   '
     *  MinMax: '<S679>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S534>/motohawk_calibration'
     */
    rtb_Switch_c = (rtb_UnitDelay_m <= (Max_Dist_Travel_In_Sec_DataStore())) ||
      rtIsNaN((Max_Dist_Travel_In_Sec_DataStore())) ? rtb_UnitDelay_m :
      (Max_Dist_Travel_In_Sec_DataStore());
  }

  /* End of Switch: '<S660>/Switch1' */
  /* Sum: '<S534>/Add' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S534>/motohawk_data_read2'
   */
  rtb_Add = rtb_Switch_c + Dist_Trv_DataStore();

  /* S-Function (motohawk_sfun_data_write): '<S534>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Dist_Trv */
  {
    Dist_Trv_DataStore() = rtb_Add;
  }

  /* If: '<S665>/If' incorporates:
   *  Inport: '<S761>/In1'
   *  Inport: '<S762>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S534>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S665>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S665>/override_enable'
   */
  if ((BCU_Caution_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S665>/NewValue' incorporates:
     *  ActionPort: '<S761>/Action Port'
     */
    rtb_Merge_iz = (BCU_Caution_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S761>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(360);
    }

    /* End of Outputs for SubSystem: '<S665>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S665>/OldValue' incorporates:
     *  ActionPort: '<S762>/Action Port'
     */
    rtb_Merge_iz = (BCU_Caution_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S762>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(361);
    }

    /* End of Outputs for SubSystem: '<S665>/OldValue' */
  }

  /* End of If: '<S665>/If' */

  /* If: '<S666>/If' incorporates:
   *  Inport: '<S763>/In1'
   *  Inport: '<S764>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S534>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_calibration): '<S666>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S666>/override_enable'
   */
  if ((BCU_Hazard_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S666>/NewValue' incorporates:
     *  ActionPort: '<S763>/Action Port'
     */
    rtb_Merge_gv = (BCU_Hazard_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S763>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(362);
    }

    /* End of Outputs for SubSystem: '<S666>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S666>/OldValue' incorporates:
     *  ActionPort: '<S764>/Action Port'
     */
    rtb_Merge_gv = (BCU_Hazard_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S764>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(363);
    }

    /* End of Outputs for SubSystem: '<S666>/OldValue' */
  }

  /* End of If: '<S666>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S534>/Send CAN Messages3' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x320 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        if (rtb_Merge_iz < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_iz > 1.0000000000F) {
          tmp0 = (uint8_T)(1U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_iz != 0);
        }

        if (rtb_Merge_gv < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_gv > 1.0000000000F) {
          tmp1 = (uint8_T)(1U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_gv != 0);
        }

        msg_data[0] = 0 ;
        msg_data[1] = 0 ;
        msg_data[2] = 0 ;
        msg_data[3] = 0 ;
        msg_data[4] = 0 ;
        msg_data[5] = ((((uint8_T *)(&tmp0))[0] & 0x00000001) << 6) |
          ((((uint8_T *)(&tmp1))[0] & 0x00000001) << 7) ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(0, 0x320UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_probe): '<S534>/motohawk_probe10' */
  (BCU_Caution_Prb_DataStore()) = (BCU_Caution_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S534>/motohawk_probe11' */
  (BCU_Hazard_Prb_DataStore()) = (BCU_Hazard_DataStore());

  /* S-Function (motohawk_sfun_data_read): '<S534>/motohawk_data_read5' */
  Mooventure2016_Rev5_B.s534_ODO_Count = ODO_INCRE_DataStore();

  /* If: '<S668>/If' incorporates:
   *  Inport: '<S767>/In1'
   *  Inport: '<S768>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S668>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S668>/override_enable'
   */
  if ((ODO_Count_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S668>/NewValue' incorporates:
     *  ActionPort: '<S767>/Action Port'
     */
    rtb_Merge_mf = (ODO_Count_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S767>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(366);
    }

    /* End of Outputs for SubSystem: '<S668>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S668>/OldValue' incorporates:
     *  ActionPort: '<S768>/Action Port'
     */
    rtb_Merge_mf = Mooventure2016_Rev5_B.s534_ODO_Count;

    /* S-Function (motohawk_sfun_code_cover): '<S768>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(367);
    }

    /* End of Outputs for SubSystem: '<S668>/OldValue' */
  }

  /* End of If: '<S668>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S534>/Send CAN Messages5' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x470 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        if (rtb_Merge_mf < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_mf > 0.0510000000F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_mf * (5000.0000000000F));
        }

        msg_data[0] = 0 ;
        msg_data[1] = 0 ;
        msg_data[2] = 0 ;
        msg_data[3] = 0 ;
        msg_data[4] = 0 ;
        msg_data[5] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(0, 0x470UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* MATLAB Function Block: '<S661>/ODO_CALC' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S661>/motohawk_data_read3'
   *  S-Function (motohawk_sfun_data_read): '<S661>/motohawk_data_read4'
   */

  /* MATLAB Function 'Foreground/Outputs/Driver Ouputs/ODO Calc/ODO_CALC': '<S680>:1' */
  if (Dist_Trv_DataStore() >= 0.016666666) {
    /* '<S680>:1:3' */
    if (ODO_INCRE_DataStore() - 0.0001 <= 0.0) {
      /* '<S680>:1:4' */
      /* '<S680>:1:5' */
      rtb_ODO_out = (0.05 + ODO_INCRE_DataStore()) - 0.0001;

      /* '<S680>:1:6' */
      rtb_reset = 0.0;
    } else {
      /* '<S680>:1:8' */
      rtb_ODO_out = ODO_INCRE_DataStore() - 0.0001;

      /* '<S680>:1:9' */
      rtb_reset = 0.0;
    }
  } else {
    /* '<S680>:1:12' */
    rtb_ODO_out = ODO_INCRE_DataStore();

    /* '<S680>:1:13' */
    rtb_reset = Dist_Trv_DataStore();
  }

  /* End of MATLAB Function Block: '<S661>/ODO_CALC' */

  /* S-Function (motohawk_sfun_data_write): '<S661>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: Dist_Trv */
  {
    Dist_Trv_DataStore() = rtb_reset;
  }

  /* S-Function (motohawk_sfun_data_write): '<S661>/motohawk_data_write3' */
  /* Write to Data Storage as scalar: ODO_INCRE */
  {
    ODO_INCRE_DataStore() = rtb_ODO_out;
  }

  /* If: '<S687>/If' incorporates:
   *  Inport: '<S719>/In1'
   *  Inport: '<S720>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration18'
   *  S-Function (motohawk_sfun_calibration): '<S687>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S687>/override_enable'
   */
  if ((DATA_MODE_2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S687>/NewValue' incorporates:
     *  ActionPort: '<S719>/Action Port'
     */
    rtb_Merge_pb = (DATA_MODE_2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S719>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(318);
    }

    /* End of Outputs for SubSystem: '<S687>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S687>/OldValue' incorporates:
     *  ActionPort: '<S720>/Action Port'
     */
    rtb_Merge_pb = (DATA_MODE_2_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S720>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(319);
    }

    /* End of Outputs for SubSystem: '<S687>/OldValue' */
  }

  /* End of If: '<S687>/If' */

  /* If: '<S688>/If' incorporates:
   *  Inport: '<S721>/In1'
   *  Inport: '<S722>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration19'
   *  S-Function (motohawk_sfun_calibration): '<S688>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S688>/override_enable'
   */
  if ((VIN_DATA_BYTE_1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S688>/NewValue' incorporates:
     *  ActionPort: '<S721>/Action Port'
     */
    rtb_Merge_ogk = (VIN_DATA_BYTE_1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S721>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(320);
    }

    /* End of Outputs for SubSystem: '<S688>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S688>/OldValue' incorporates:
     *  ActionPort: '<S722>/Action Port'
     */
    rtb_Merge_ogk = (VIN_DATA_BYTE_1_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S722>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(321);
    }

    /* End of Outputs for SubSystem: '<S688>/OldValue' */
  }

  /* End of If: '<S688>/If' */

  /* If: '<S689>/If' incorporates:
   *  Inport: '<S723>/In1'
   *  Inport: '<S724>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration20'
   *  S-Function (motohawk_sfun_calibration): '<S689>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S689>/override_enable'
   */
  if ((VIN_DATA_BYTE_2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S689>/NewValue' incorporates:
     *  ActionPort: '<S723>/Action Port'
     */
    rtb_Merge_d = (VIN_DATA_BYTE_2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S723>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(322);
    }

    /* End of Outputs for SubSystem: '<S689>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S689>/OldValue' incorporates:
     *  ActionPort: '<S724>/Action Port'
     */
    rtb_Merge_d = (VIN_DATA_BYTE_2_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S724>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(323);
    }

    /* End of Outputs for SubSystem: '<S689>/OldValue' */
  }

  /* End of If: '<S689>/If' */

  /* If: '<S690>/If' incorporates:
   *  Inport: '<S725>/In1'
   *  Inport: '<S726>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration21'
   *  S-Function (motohawk_sfun_calibration): '<S690>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S690>/override_enable'
   */
  if ((VIN_DATA_BYTE_3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S690>/NewValue' incorporates:
     *  ActionPort: '<S725>/Action Port'
     */
    rtb_Merge_ho = (VIN_DATA_BYTE_3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S725>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(324);
    }

    /* End of Outputs for SubSystem: '<S690>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S690>/OldValue' incorporates:
     *  ActionPort: '<S726>/Action Port'
     */
    rtb_Merge_ho = (VIN_DATA_BYTE_3_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S726>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(325);
    }

    /* End of Outputs for SubSystem: '<S690>/OldValue' */
  }

  /* End of If: '<S690>/If' */

  /* If: '<S691>/If' incorporates:
   *  Inport: '<S727>/In1'
   *  Inport: '<S728>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration22'
   *  S-Function (motohawk_sfun_calibration): '<S691>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S691>/override_enable'
   */
  if ((VIN_DATA_BYTE_4_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S691>/NewValue' incorporates:
     *  ActionPort: '<S727>/Action Port'
     */
    rtb_Merge_mb = (VIN_DATA_BYTE_4_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S727>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(326);
    }

    /* End of Outputs for SubSystem: '<S691>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S691>/OldValue' incorporates:
     *  ActionPort: '<S728>/Action Port'
     */
    rtb_Merge_mb = (VIN_DATA_BYTE_4_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S728>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(327);
    }

    /* End of Outputs for SubSystem: '<S691>/OldValue' */
  }

  /* End of If: '<S691>/If' */

  /* If: '<S692>/If' incorporates:
   *  Inport: '<S729>/In1'
   *  Inport: '<S730>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration23'
   *  S-Function (motohawk_sfun_calibration): '<S692>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S692>/override_enable'
   */
  if ((VIN_DATA_BYTE_5_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S692>/NewValue' incorporates:
     *  ActionPort: '<S729>/Action Port'
     */
    rtb_Merge_fj = (VIN_DATA_BYTE_5_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S729>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(328);
    }

    /* End of Outputs for SubSystem: '<S692>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S692>/OldValue' incorporates:
     *  ActionPort: '<S730>/Action Port'
     */
    rtb_Merge_fj = (VIN_DATA_BYTE_5_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S730>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(329);
    }

    /* End of Outputs for SubSystem: '<S692>/OldValue' */
  }

  /* End of If: '<S692>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S663>/Send CAN Messages10' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x4ff */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        uint8_T tmp5;
        if (rtb_Merge_pb < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_pb > 255.0000000000F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_pb);
        }

        if (rtb_Merge_ogk < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_ogk > 255.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_ogk);
        }

        if (rtb_Merge_d < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Merge_d > 255.0000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_Merge_d);
        }

        if (rtb_Merge_ho < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_Merge_ho > 255.0000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_Merge_ho);
        }

        if (rtb_Merge_mb < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_Merge_mb > 255.0000000000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(rtb_Merge_mb);
        }

        if (rtb_Merge_fj < 0.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if (rtb_Merge_fj > 255.0000000000F) {
          tmp5 = (uint8_T)(255U);
        } else {
          tmp5 = (uint8_T)(rtb_Merge_fj);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[2] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp4))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp5))[0])) ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(0, 0x4ffUL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe26' */
  (DATA_MODE_2_Prb_DataStore()) = (DATA_MODE_2_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe27' */
  (VIN_DATA_BYTE_1_Prb_DataStore()) = (VIN_DATA_BYTE_1_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe28' */
  (VIN_DATA_BYTE_2_Prb_DataStore()) = (VIN_DATA_BYTE_2_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe29' */
  (VIN_DATA_BYTE_3_Prb_DataStore()) = (VIN_DATA_BYTE_3_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe30' */
  (VIN_DATA_BYTE_4_Prb_DataStore()) = (VIN_DATA_BYTE_4_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe31' */
  (VIN_DATA_BYTE_5_Prb_DataStore()) = (VIN_DATA_BYTE_5_DataStore());

  /* If: '<S693>/If' incorporates:
   *  Inport: '<S731>/In1'
   *  Inport: '<S732>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration24'
   *  S-Function (motohawk_sfun_calibration): '<S693>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S693>/override_enable'
   */
  if ((DATA_MODE_3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S693>/NewValue' incorporates:
     *  ActionPort: '<S731>/Action Port'
     */
    rtb_Merge_ah = (DATA_MODE_3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S731>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(330);
    }

    /* End of Outputs for SubSystem: '<S693>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S693>/OldValue' incorporates:
     *  ActionPort: '<S732>/Action Port'
     */
    rtb_Merge_ah = (DATA_MODE_3_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S732>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(331);
    }

    /* End of Outputs for SubSystem: '<S693>/OldValue' */
  }

  /* End of If: '<S693>/If' */

  /* If: '<S694>/If' incorporates:
   *  Inport: '<S733>/In1'
   *  Inport: '<S734>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration25'
   *  S-Function (motohawk_sfun_calibration): '<S694>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S694>/override_enable'
   */
  if ((VIN_DATA_BYTE_6_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S694>/NewValue' incorporates:
     *  ActionPort: '<S733>/Action Port'
     */
    rtb_Merge_koh = (VIN_DATA_BYTE_6_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S733>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(332);
    }

    /* End of Outputs for SubSystem: '<S694>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S694>/OldValue' incorporates:
     *  ActionPort: '<S734>/Action Port'
     */
    rtb_Merge_koh = (VIN_DATA_BYTE_6_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S734>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(333);
    }

    /* End of Outputs for SubSystem: '<S694>/OldValue' */
  }

  /* End of If: '<S694>/If' */

  /* If: '<S695>/If' incorporates:
   *  Inport: '<S735>/In1'
   *  Inport: '<S736>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration26'
   *  S-Function (motohawk_sfun_calibration): '<S695>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S695>/override_enable'
   */
  if ((VIN_DATA_BYTE_7_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S695>/NewValue' incorporates:
     *  ActionPort: '<S735>/Action Port'
     */
    rtb_Merge_pj = (VIN_DATA_BYTE_7_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S735>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(334);
    }

    /* End of Outputs for SubSystem: '<S695>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S695>/OldValue' incorporates:
     *  ActionPort: '<S736>/Action Port'
     */
    rtb_Merge_pj = (VIN_DATA_BYTE_7_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S736>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(335);
    }

    /* End of Outputs for SubSystem: '<S695>/OldValue' */
  }

  /* End of If: '<S695>/If' */

  /* If: '<S696>/If' incorporates:
   *  Inport: '<S737>/In1'
   *  Inport: '<S738>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration27'
   *  S-Function (motohawk_sfun_calibration): '<S696>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S696>/override_enable'
   */
  if ((VIN_DATA_BYTE_8_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S696>/NewValue' incorporates:
     *  ActionPort: '<S737>/Action Port'
     */
    rtb_Merge_cd = (VIN_DATA_BYTE_8_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S737>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(336);
    }

    /* End of Outputs for SubSystem: '<S696>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S696>/OldValue' incorporates:
     *  ActionPort: '<S738>/Action Port'
     */
    rtb_Merge_cd = (VIN_DATA_BYTE_8_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S738>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(337);
    }

    /* End of Outputs for SubSystem: '<S696>/OldValue' */
  }

  /* End of If: '<S696>/If' */

  /* If: '<S697>/If' incorporates:
   *  Inport: '<S739>/In1'
   *  Inport: '<S740>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration28'
   *  S-Function (motohawk_sfun_calibration): '<S697>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S697>/override_enable'
   */
  if ((VIN_DATA_BYTE_9_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S697>/NewValue' incorporates:
     *  ActionPort: '<S739>/Action Port'
     */
    rtb_Merge_ca = (VIN_DATA_BYTE_9_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S739>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(338);
    }

    /* End of Outputs for SubSystem: '<S697>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S697>/OldValue' incorporates:
     *  ActionPort: '<S740>/Action Port'
     */
    rtb_Merge_ca = (VIN_DATA_BYTE_9_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S740>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(339);
    }

    /* End of Outputs for SubSystem: '<S697>/OldValue' */
  }

  /* End of If: '<S697>/If' */

  /* If: '<S698>/If' incorporates:
   *  Inport: '<S741>/In1'
   *  Inport: '<S742>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration29'
   *  S-Function (motohawk_sfun_calibration): '<S698>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S698>/override_enable'
   */
  if ((VIN_DATA_BYTE_10_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S698>/NewValue' incorporates:
     *  ActionPort: '<S741>/Action Port'
     */
    rtb_Merge_mw = (VIN_DATA_BYTE_10_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S741>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(340);
    }

    /* End of Outputs for SubSystem: '<S698>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S698>/OldValue' incorporates:
     *  ActionPort: '<S742>/Action Port'
     */
    rtb_Merge_mw = (VIN_DATA_BYTE_10_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S742>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(341);
    }

    /* End of Outputs for SubSystem: '<S698>/OldValue' */
  }

  /* End of If: '<S698>/If' */

  /* If: '<S699>/If' incorporates:
   *  Inport: '<S743>/In1'
   *  Inport: '<S744>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration30'
   *  S-Function (motohawk_sfun_calibration): '<S699>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S699>/override_enable'
   */
  if ((VIN_DATA_BYTE_11_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S699>/NewValue' incorporates:
     *  ActionPort: '<S743>/Action Port'
     */
    rtb_Merge_bm = (VIN_DATA_BYTE_11_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S743>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(342);
    }

    /* End of Outputs for SubSystem: '<S699>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S699>/OldValue' incorporates:
     *  ActionPort: '<S744>/Action Port'
     */
    rtb_Merge_bm = (VIN_DATA_BYTE_11_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S744>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(343);
    }

    /* End of Outputs for SubSystem: '<S699>/OldValue' */
  }

  /* End of If: '<S699>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S663>/Send CAN Messages11' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x4ff */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        uint8_T tmp5;
        uint8_T tmp6;
        if (rtb_Merge_ah < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_ah > 255.0000000000F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_ah);
        }

        if (rtb_Merge_koh < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_koh > 255.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_koh);
        }

        if (rtb_Merge_pj < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Merge_pj > 255.0000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_Merge_pj);
        }

        if (rtb_Merge_cd < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_Merge_cd > 255.0000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_Merge_cd);
        }

        if (rtb_Merge_ca < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_Merge_ca > 255.0000000000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(rtb_Merge_ca);
        }

        if (rtb_Merge_mw < 0.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if (rtb_Merge_mw > 255.0000000000F) {
          tmp5 = (uint8_T)(255U);
        } else {
          tmp5 = (uint8_T)(rtb_Merge_mw);
        }

        if (rtb_Merge_bm < 0.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if (rtb_Merge_bm > 255.0000000000F) {
          tmp6 = (uint8_T)(255U);
        } else {
          tmp6 = (uint8_T)(rtb_Merge_bm);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[2] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp4))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp5))[0])) ;
        msg_data[6] = ((((uint8_T *)(&tmp6))[0])) ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(0, 0x4ffUL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe32' */
  (DATA_MODE_3_Prb_DataStore()) = (DATA_MODE_3_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe33' */
  (VIN_DATA_BYTE_6_Prb_DataStore()) = (VIN_DATA_BYTE_6_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe34' */
  (VIN_DATA_BYTE_7_Prb_DataStore()) = (VIN_DATA_BYTE_7_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe35' */
  (VIN_DATA_BYTE_8_Prb_DataStore()) = (VIN_DATA_BYTE_8_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe36' */
  (VIN_DATA_BYTE_9_Prb_DataStore()) = (VIN_DATA_BYTE_9_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe37' */
  (VIN_DATA_BYTE_10_Prb_DataStore()) = (VIN_DATA_BYTE_10_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe38' */
  (VIN_DATA_BYTE_11_Prb_DataStore()) = (VIN_DATA_BYTE_11_DataStore());

  /* If: '<S700>/If' incorporates:
   *  Inport: '<S745>/In1'
   *  Inport: '<S746>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration31'
   *  S-Function (motohawk_sfun_calibration): '<S700>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S700>/override_enable'
   */
  if ((DATA_MODE_4_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S700>/NewValue' incorporates:
     *  ActionPort: '<S745>/Action Port'
     */
    rtb_Merge_dh = (DATA_MODE_4_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S745>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(344);
    }

    /* End of Outputs for SubSystem: '<S700>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S700>/OldValue' incorporates:
     *  ActionPort: '<S746>/Action Port'
     */
    rtb_Merge_dh = (DATA_MODE_4_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S746>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(345);
    }

    /* End of Outputs for SubSystem: '<S700>/OldValue' */
  }

  /* End of If: '<S700>/If' */

  /* If: '<S701>/If' incorporates:
   *  Inport: '<S747>/In1'
   *  Inport: '<S748>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration32'
   *  S-Function (motohawk_sfun_calibration): '<S701>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S701>/override_enable'
   */
  if ((VIN_DATA_BYTE_12_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S701>/NewValue' incorporates:
     *  ActionPort: '<S747>/Action Port'
     */
    rtb_Merge_jb = (VIN_DATA_BYTE_12_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S747>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(346);
    }

    /* End of Outputs for SubSystem: '<S701>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S701>/OldValue' incorporates:
     *  ActionPort: '<S748>/Action Port'
     */
    rtb_Merge_jb = (VIN_DATA_BYTE_12_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S748>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(347);
    }

    /* End of Outputs for SubSystem: '<S701>/OldValue' */
  }

  /* End of If: '<S701>/If' */

  /* If: '<S702>/If' incorporates:
   *  Inport: '<S749>/In1'
   *  Inport: '<S750>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration33'
   *  S-Function (motohawk_sfun_calibration): '<S702>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S702>/override_enable'
   */
  if ((VIN_DATA_BYTE_13_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S702>/NewValue' incorporates:
     *  ActionPort: '<S749>/Action Port'
     */
    rtb_Merge_izg = (VIN_DATA_BYTE_13_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S749>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(348);
    }

    /* End of Outputs for SubSystem: '<S702>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S702>/OldValue' incorporates:
     *  ActionPort: '<S750>/Action Port'
     */
    rtb_Merge_izg = (VIN_DATA_BYTE_13_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S750>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(349);
    }

    /* End of Outputs for SubSystem: '<S702>/OldValue' */
  }

  /* End of If: '<S702>/If' */

  /* If: '<S703>/If' incorporates:
   *  Inport: '<S751>/In1'
   *  Inport: '<S752>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration34'
   *  S-Function (motohawk_sfun_calibration): '<S703>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S703>/override_enable'
   */
  if ((VIN_DATA_BYTE_14_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S703>/NewValue' incorporates:
     *  ActionPort: '<S751>/Action Port'
     */
    rtb_Merge_dv = (VIN_DATA_BYTE_14_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S751>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(350);
    }

    /* End of Outputs for SubSystem: '<S703>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S703>/OldValue' incorporates:
     *  ActionPort: '<S752>/Action Port'
     */
    rtb_Merge_dv = (VIN_DATA_BYTE_14_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S752>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(351);
    }

    /* End of Outputs for SubSystem: '<S703>/OldValue' */
  }

  /* End of If: '<S703>/If' */

  /* If: '<S704>/If' incorporates:
   *  Inport: '<S753>/In1'
   *  Inport: '<S754>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration35'
   *  S-Function (motohawk_sfun_calibration): '<S704>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S704>/override_enable'
   */
  if ((VIN_DATA_BYTE_15_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S704>/NewValue' incorporates:
     *  ActionPort: '<S753>/Action Port'
     */
    rtb_Merge_hod = (VIN_DATA_BYTE_15_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S753>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(352);
    }

    /* End of Outputs for SubSystem: '<S704>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S704>/OldValue' incorporates:
     *  ActionPort: '<S754>/Action Port'
     */
    rtb_Merge_hod = (VIN_DATA_BYTE_15_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S754>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(353);
    }

    /* End of Outputs for SubSystem: '<S704>/OldValue' */
  }

  /* End of If: '<S704>/If' */

  /* If: '<S705>/If' incorporates:
   *  Inport: '<S755>/In1'
   *  Inport: '<S756>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration36'
   *  S-Function (motohawk_sfun_calibration): '<S705>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S705>/override_enable'
   */
  if ((VIN_DATA_BYTE_16_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S705>/NewValue' incorporates:
     *  ActionPort: '<S755>/Action Port'
     */
    rtb_Merge_ov = (VIN_DATA_BYTE_16_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S755>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(354);
    }

    /* End of Outputs for SubSystem: '<S705>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S705>/OldValue' incorporates:
     *  ActionPort: '<S756>/Action Port'
     */
    rtb_Merge_ov = (VIN_DATA_BYTE_16_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S756>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(355);
    }

    /* End of Outputs for SubSystem: '<S705>/OldValue' */
  }

  /* End of If: '<S705>/If' */

  /* If: '<S706>/If' incorporates:
   *  Inport: '<S757>/In1'
   *  Inport: '<S758>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration37'
   *  S-Function (motohawk_sfun_calibration): '<S706>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S706>/override_enable'
   */
  if ((VIN_DATA_BYTE_17_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S706>/NewValue' incorporates:
     *  ActionPort: '<S757>/Action Port'
     */
    rtb_Merge_k2 = (VIN_DATA_BYTE_17_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S757>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(356);
    }

    /* End of Outputs for SubSystem: '<S706>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S706>/OldValue' incorporates:
     *  ActionPort: '<S758>/Action Port'
     */
    rtb_Merge_k2 = (VIN_DATA_BYTE_17_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S758>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(357);
    }

    /* End of Outputs for SubSystem: '<S706>/OldValue' */
  }

  /* End of If: '<S706>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S663>/Send CAN Messages12' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x4ff */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        uint8_T tmp5;
        uint8_T tmp6;
        if (rtb_Merge_dh < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_dh > 255.0000000000F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_dh);
        }

        if (rtb_Merge_jb < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_jb > 255.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_jb);
        }

        if (rtb_Merge_izg < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Merge_izg > 255.0000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_Merge_izg);
        }

        if (rtb_Merge_dv < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_Merge_dv > 255.0000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_Merge_dv);
        }

        if (rtb_Merge_hod < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_Merge_hod > 255.0000000000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(rtb_Merge_hod);
        }

        if (rtb_Merge_ov < 0.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if (rtb_Merge_ov > 255.0000000000F) {
          tmp5 = (uint8_T)(255U);
        } else {
          tmp5 = (uint8_T)(rtb_Merge_ov);
        }

        if (rtb_Merge_k2 < 0.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if (rtb_Merge_k2 > 255.0000000000F) {
          tmp6 = (uint8_T)(255U);
        } else {
          tmp6 = (uint8_T)(rtb_Merge_k2);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[2] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp4))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp5))[0])) ;
        msg_data[6] = ((((uint8_T *)(&tmp6))[0])) ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(0, 0x4ffUL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe39' */
  (DATA_MODE_4_Ovr_DataStore()) = (DATA_MODE_4_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe40' */
  (VIN_DATA_BYTE_12_Prb_DataStore()) = (VIN_DATA_BYTE_12_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe41' */
  (VIN_DATA_BYTE_13_Prb_DataStore()) = (VIN_DATA_BYTE_13_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe42' */
  (VIN_DATA_BYTE_14_Prb_DataStore()) = (VIN_DATA_BYTE_14_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe43' */
  (VIN_DATA_BYTE_15_Prb_DataStore()) = (VIN_DATA_BYTE_15_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe44' */
  (VIN_DATA_BYte_16_Prb_DataStore()) = (VIN_DATA_BYTE_16_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe45' */
  (VIN_DATA_BYTE_17_Prb_DataStore()) = (VIN_DATA_BYTE_17_DataStore());

  /* If: '<S681>/If' incorporates:
   *  Inport: '<S707>/In1'
   *  Inport: '<S708>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S681>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S681>/override_enable'
   */
  if ((Mode_1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S681>/NewValue' incorporates:
     *  ActionPort: '<S707>/Action Port'
     */
    rtb_Merge_md = (Mode_1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S707>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(306);
    }

    /* End of Outputs for SubSystem: '<S681>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S681>/OldValue' incorporates:
     *  ActionPort: '<S708>/Action Port'
     */
    rtb_Merge_md = (Mode_1_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S708>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(307);
    }

    /* End of Outputs for SubSystem: '<S681>/OldValue' */
  }

  /* End of If: '<S681>/If' */

  /* If: '<S682>/If' incorporates:
   *  Inport: '<S709>/In1'
   *  Inport: '<S710>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S682>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S682>/override_enable'
   */
  if ((Mode_2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S682>/NewValue' incorporates:
     *  ActionPort: '<S709>/Action Port'
     */
    rtb_Merge_gp = (Mode_2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S709>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(308);
    }

    /* End of Outputs for SubSystem: '<S682>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S682>/OldValue' incorporates:
     *  ActionPort: '<S710>/Action Port'
     */
    rtb_Merge_gp = (Mode_2_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S710>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(309);
    }

    /* End of Outputs for SubSystem: '<S682>/OldValue' */
  }

  /* End of If: '<S682>/If' */

  /* If: '<S683>/If' incorporates:
   *  Inport: '<S711>/In1'
   *  Inport: '<S712>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S683>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S683>/override_enable'
   */
  if ((Mode_3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S683>/NewValue' incorporates:
     *  ActionPort: '<S711>/Action Port'
     */
    rtb_Merge_mt = (Mode_3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S711>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(310);
    }

    /* End of Outputs for SubSystem: '<S683>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S683>/OldValue' incorporates:
     *  ActionPort: '<S712>/Action Port'
     */
    rtb_Merge_mt = (Mode_3_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S712>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(311);
    }

    /* End of Outputs for SubSystem: '<S683>/OldValue' */
  }

  /* End of If: '<S683>/If' */

  /* If: '<S684>/If' incorporates:
   *  Inport: '<S713>/In1'
   *  Inport: '<S714>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S684>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S684>/override_enable'
   */
  if ((Mode_4_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S684>/NewValue' incorporates:
     *  ActionPort: '<S713>/Action Port'
     */
    rtb_Merge_kq = (Mode_4_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S713>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(312);
    }

    /* End of Outputs for SubSystem: '<S684>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S684>/OldValue' incorporates:
     *  ActionPort: '<S714>/Action Port'
     */
    rtb_Merge_kq = (Mode_4_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S714>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(313);
    }

    /* End of Outputs for SubSystem: '<S684>/OldValue' */
  }

  /* End of If: '<S684>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S663>/Send CAN Messages8' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x720 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        if (rtb_Merge_md < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_md > 255.0000000000F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_md);
        }

        if (rtb_Merge_gp < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_gp > 255.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_gp);
        }

        if (rtb_Merge_mt < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Merge_mt > 255.0000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_Merge_mt);
        }

        if (rtb_Merge_kq < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_Merge_kq > 255.0000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_Merge_kq);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[2] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(0, 0x720UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe20' */
  (Mode_1_Prb_DataStore()) = (Mode_1_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe21' */
  (Mode_2_Prb_DataStore()) = (Mode_2_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe22' */
  (Mode_3_Prb_DataStore()) = (Mode_3_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe23' */
  (Mode_4_Prb_DataStore()) = (Mode_4_DataStore());

  /* If: '<S685>/If' incorporates:
   *  Inport: '<S715>/In1'
   *  Inport: '<S716>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration16'
   *  S-Function (motohawk_sfun_calibration): '<S685>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S685>/override_enable'
   */
  if ((DATA_MODE_1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S685>/NewValue' incorporates:
     *  ActionPort: '<S715>/Action Port'
     */
    rtb_Merge_jo = (DATA_MODE_1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S715>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(314);
    }

    /* End of Outputs for SubSystem: '<S685>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S685>/OldValue' incorporates:
     *  ActionPort: '<S716>/Action Port'
     */
    rtb_Merge_jo = (Data_Mode_1_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S716>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(315);
    }

    /* End of Outputs for SubSystem: '<S685>/OldValue' */
  }

  /* End of If: '<S685>/If' */

  /* If: '<S686>/If' incorporates:
   *  Inport: '<S717>/In1'
   *  Inport: '<S718>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration17'
   *  S-Function (motohawk_sfun_calibration): '<S686>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S686>/override_enable'
   */
  if ((VEH_ID_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S686>/NewValue' incorporates:
     *  ActionPort: '<S717>/Action Port'
     */
    rtb_Merge_kz = (VEH_ID_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S717>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(316);
    }

    /* End of Outputs for SubSystem: '<S686>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S686>/OldValue' incorporates:
     *  ActionPort: '<S718>/Action Port'
     */
    rtb_Merge_kz = (VEH_ID_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S718>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(317);
    }

    /* End of Outputs for SubSystem: '<S686>/OldValue' */
  }

  /* End of If: '<S686>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S663>/Send CAN Messages9' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x4ff */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        if (rtb_Merge_jo < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_jo > 255.0000000000F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_jo);
        }

        if (rtb_Merge_kz < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_kz > 255.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_kz);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = 0 ;
        msg_data[2] = 0 ;
        msg_data[3] = 0 ;
        msg_data[4] = 0 ;
        msg_data[5] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(0, 0x4ffUL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe24' */
  (DATA_MODE_1_Prb_DataStore()) = (Data_Mode_1_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S663>/motohawk_probe25' */
  (VEH_ID_Prb_DataStore()) = (VEH_ID_DataStore());

  /* If: '<S790>/If' incorporates:
   *  Inport: '<S795>/In1'
   *  Inport: '<S796>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S790>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S790>/override_enable'
   */
  if ((Current_Limit_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S790>/NewValue' incorporates:
     *  ActionPort: '<S795>/Action Port'
     */
    rtb_Merge_m4 = (Current_Limit_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S795>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(388);
    }

    /* End of Outputs for SubSystem: '<S790>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S790>/OldValue' incorporates:
     *  ActionPort: '<S796>/Action Port'
     */
    rtb_Merge_m4 = (MaxAmpCal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S796>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(389);
    }

    /* End of Outputs for SubSystem: '<S790>/OldValue' */
  }

  /* End of If: '<S790>/If' */

  /* If: '<S791>/If' incorporates:
   *  Inport: '<S797>/In1'
   *  Inport: '<S798>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S791>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S791>/override_enable'
   */
  if ((Voltage_Limit_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S791>/NewValue' incorporates:
     *  ActionPort: '<S797>/Action Port'
     */
    rtb_Merge_aq = (Voltage_Limit_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S797>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(390);
    }

    /* End of Outputs for SubSystem: '<S791>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S791>/OldValue' incorporates:
     *  ActionPort: '<S798>/Action Port'
     */
    rtb_Merge_aq = (MaxVoltageCal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S798>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(391);
    }

    /* End of Outputs for SubSystem: '<S791>/OldValue' */
  }

  /* End of If: '<S791>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S535>/motohawk_fault_action'
   *
   * Regarding '<S535>/motohawk_fault_action':
     Get Fault Action Status: EatonChargerFault
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s535_ChargeSystemFault = GetFaultActionStatus(8);
  }

  /* If: '<S792>/If' incorporates:
   *  Inport: '<S799>/In1'
   *  Inport: '<S800>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S792>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S792>/override_enable'
   */
  if ((Charge_Falt_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S792>/NewValue' incorporates:
     *  ActionPort: '<S799>/Action Port'
     */
    rtb_Merge_opu = (Charge_Falt_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S799>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(392);
    }

    /* End of Outputs for SubSystem: '<S792>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S792>/OldValue' incorporates:
     *  ActionPort: '<S800>/Action Port'
     */
    rtb_Merge_opu = Mooventure2016_Rev5_B.s535_ChargeSystemFault;

    /* S-Function (motohawk_sfun_code_cover): '<S800>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(393);
    }

    /* End of Outputs for SubSystem: '<S792>/OldValue' */
  }

  /* End of If: '<S792>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S189>/Read CAN Message5' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3353p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3353p0001_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint8_T tmp4 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[4])) ;
      ((uint8_T *)(&tmp3))[0] = ((msg_data[5])) ;
      ((uint8_T *)(&tmp4))[0] = ((msg_data[7])) ;
      Mooventure2016_Rev5_B.s189_TripAmpHoursIn = ((real_T) tmp0) / ((real_T)
        100);
      Mooventure2016_Rev5_B.s189_TripAmpHoursOut = ((real_T) tmp1) / ((real_T)
        100);
      Mooventure2016_Rev5_B.s189_StateOfChargeMax = ((real_T) tmp2) / ((real_T)
        2);
      Mooventure2016_Rev5_B.s189_StateOfChargeMin = ((real_T) tmp3) / ((real_T)
        2);
      Mooventure2016_Rev5_B.s189_TAH_RollingCounter = (real_T) tmp4;
    }
  }

  /* RelationalOperator: '<S535>/Relational Operator' */
  rtb_Eaton_Plugged_In = (rtb_Sum1 <=
    Mooventure2016_Rev5_B.s189_StateOfChargeMax);

  /* Logic: '<S535>/Logical Operator2' */
  Mooventure2016_Rev5_B.s535_ChargeComplete = !rtb_Eaton_Plugged_In;

  /* If: '<S793>/If' incorporates:
   *  Inport: '<S801>/In1'
   *  Inport: '<S802>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S793>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S793>/override_enable'
   */
  if ((Charge_Complete_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S793>/NewValue' incorporates:
     *  ActionPort: '<S801>/Action Port'
     */
    rtb_Merge_oz = (Charge_Complete_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S801>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(394);
    }

    /* End of Outputs for SubSystem: '<S793>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S793>/OldValue' incorporates:
     *  ActionPort: '<S802>/Action Port'
     */
    rtb_Merge_oz = Mooventure2016_Rev5_B.s535_ChargeComplete;

    /* S-Function (motohawk_sfun_code_cover): '<S802>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(395);
    }

    /* End of Outputs for SubSystem: '<S793>/OldValue' */
  }

  /* End of If: '<S793>/If' */

  /* If: '<S370>/If' incorporates:
   *  Inport: '<S391>/In1'
   *  Inport: '<S392>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S370>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S370>/override_enable'
   */
  if ((Input_Current_Limit_Max_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S370>/NewValue' incorporates:
     *  ActionPort: '<S391>/Action Port'
     */
    rtb_Merge_lf = (Input_Current_Limit_Max_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S391>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(146);
    }

    /* End of Outputs for SubSystem: '<S370>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S370>/OldValue' incorporates:
     *  ActionPort: '<S392>/Action Port'
     */
    rtb_Merge_lf = Mooventure2016_Rev5_B.s194_InputCurrentLimitMax;

    /* S-Function (motohawk_sfun_code_cover): '<S392>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(147);
    }

    /* End of Outputs for SubSystem: '<S370>/OldValue' */
  }

  /* End of If: '<S370>/If' */

  /* If: '<S371>/If' incorporates:
   *  Inport: '<S393>/In1'
   *  Inport: '<S394>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S371>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S371>/override_enable'
   */
  if ((Input_Current_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S371>/NewValue' incorporates:
     *  ActionPort: '<S393>/Action Port'
     */
    rtb_Merge_hn = (Input_Current_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S393>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(148);
    }

    /* End of Outputs for SubSystem: '<S371>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S371>/OldValue' incorporates:
     *  ActionPort: '<S394>/Action Port'
     */
    rtb_Merge_hn = Mooventure2016_Rev5_B.s194_InputCurrent;

    /* S-Function (motohawk_sfun_code_cover): '<S394>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(149);
    }

    /* End of Outputs for SubSystem: '<S371>/OldValue' */
  }

  /* End of If: '<S371>/If' */

  /* Logic: '<S535>/Logical Operator1' incorporates:
   *  Constant: '<S789>/Constant'
   *  Logic: '<S535>/Logical Operator3'
   *  RelationalOperator: '<S535>/Relational Operator1'
   *  RelationalOperator: '<S789>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S535>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_data_read): '<S535>/motohawk_data_read'
   *  S-Function (motohawk_sfun_fault_action): '<S535>/motohawk_fault_action1'
   */
  Mooventure2016_Rev5_B.s535_ChargeEnable = (((rtb_Merge_b0 >= 1.0) &&
    rtb_Eaton_Plugged_In && (rtb_Merge_hn < rtb_Merge_lf) &&
    ((Charger_Auto_Start_DataStore()) != 0.0) && Vehicle_Ready_DataStore() &&
    (!GetFaultActionStatus(2))));

  /* If: '<S794>/If' incorporates:
   *  Inport: '<S803>/In1'
   *  Inport: '<S804>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S794>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S794>/override_enable'
   */
  if ((Charge_Enable_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S794>/NewValue' incorporates:
     *  ActionPort: '<S803>/Action Port'
     */
    rtb_Merge_ib = (Charge_Enable_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S803>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(396);
    }

    /* End of Outputs for SubSystem: '<S794>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S794>/OldValue' incorporates:
     *  ActionPort: '<S804>/Action Port'
     */
    rtb_Merge_ib = Mooventure2016_Rev5_B.s535_ChargeEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S804>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(397);
    }

    /* End of Outputs for SubSystem: '<S794>/OldValue' */
  }

  /* End of If: '<S794>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S535>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x18ff4aef */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint16_T tmp3;
        uint16_T tmp4;
        uint8_T tmp5;
        uint8_T tmp6;
        tmp0 = (uint8_T)(rtb_Merge_ib);
        tmp1 = (uint8_T)(rtb_Merge_oz);
        tmp2 = (uint8_T)(rtb_Merge_opu);
        if (rtb_Merge_aq < 0.0000000000F) {
          tmp3 = (uint16_T)(0U);
        } else if (rtb_Merge_aq > 803.0000000000F) {
          tmp3 = (uint16_T)(4015U);
        } else {
          tmp3 = (uint16_T)(rtb_Merge_aq * (5.0000000000F));
        }

        if (rtb_Merge_m4 < 0.0000000000F) {
          tmp4 = (uint16_T)(0U);
        } else if (rtb_Merge_m4 > 200.7500000000F) {
          tmp4 = (uint16_T)(4015U);
        } else {
          tmp4 = (uint16_T)(rtb_Merge_m4 * (20.0000000000F));
        }

        if ((MessageCounterOutput_DataStore()) < 0.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if ((MessageCounterOutput_DataStore()) > 15.0000000000F) {
          tmp5 = (uint8_T)(15U);
        } else {
          tmp5 = (uint8_T)((MessageCounterOutput_DataStore()));
        }

        if ((MessageChecksum_DataStore()) < 0.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if ((MessageChecksum_DataStore()) > 15.0000000000F) {
          tmp6 = (uint8_T)(15U);
        } else {
          tmp6 = (uint8_T)((MessageChecksum_DataStore()));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x00000003)) | ((((uint8_T *)(
          &tmp1))[0] & 0x00000003) << 2) | ((((uint8_T *)(&tmp2))[0] &
          0x00000003) << 4) ;
        msg_data[1] = ((((uint8_T *)(&tmp3))[1])) ;
        msg_data[2] = ((((uint8_T *)(&tmp3))[0] & 0x0000000F)) | ((((uint8_T *)(
          &tmp4))[1] & 0x0000000F) << 4) ;
        msg_data[3] = ((((uint8_T *)(&tmp4))[1] & 0x000000F0) >> 4) |
          ((((uint8_T *)(&tmp4))[0] & 0x0000000F) << 4) ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = ((((uint8_T *)(&tmp5))[0] & 0x0000000F)) | ((((uint8_T *)(
          &tmp6))[0] & 0x0000000F) << 4) ;
        CAN_1_Transmit(1, 0x18ff4aefUL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_data_write): '<S535>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ChargeEnable */
  {
    ChargeEnable_DataStore() = Mooventure2016_Rev5_B.s535_ChargeEnable;
  }

  /* RelationalOperator: '<S535>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S535>/motohawk_calibration1'
   */
  rtb_RelationalOperator2_l = ((Mooventure2016_Rev5_B.s189_MaxCellVoltage >=
    (Max_Cell_Voltage_Limit_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S535>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Charge_Complete_Cell_Max_Volt */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(19, rtb_RelationalOperator2_l);
    UpdateFault(19);
  }

  /* S-Function (motohawk_sfun_probe): '<S535>/motohawk_probe1' */
  (Current_Limit_Probe_DataStore()) = (MaxAmpCal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S535>/motohawk_probe2' */
  (Voltage_Limit_Probe_DataStore()) = (MaxVoltageCal_DataStore());

  /* S-Function Block: <S67>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s67_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_e = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S60>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S60>/motohawk_calibration'
   */
  rtb_Eaton_Plugged_In = (rtb_Sum1 <= (SOC_Low_DataStore()));

  /* Switch: '<S67>/Switch' incorporates:
   *  Constant: '<S67>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S67>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S67>/motohawk_delta_time'
   *  Sum: '<S67>/Sum'
   */
  if (rtb_Eaton_Plugged_In) {
    rtb_Switch_c = rtb_motohawk_delta_time_e + SOC_Low_Timer_DataStore();
  } else {
    rtb_Switch_c = 0.0;
  }

  /* End of Switch: '<S67>/Switch' */
  /* Product: '<S60>/Product' incorporates:
   *  RelationalOperator: '<S60>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S60>/motohawk_calibration2'
   */
  rtb_motohawk_ain = (uint16_T)(rtb_Switch_c >= (SOC_Time_Threshold_DataStore())
    ? rtb_Eaton_Plugged_In : 0);

  /* DataTypeConversion: '<S16>/Data Type Conversion' */
  rtb_Merge_bg = (real_T)rtb_motohawk_ain;

  /* S-Function Block: <S68>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s68_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_my = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S60>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S60>/motohawk_calibration1'
   */
  rtb_Eaton_Plugged_In = (rtb_Sum1 >= (SOC_High_DataStore()));

  /* Switch: '<S68>/Switch' incorporates:
   *  Constant: '<S68>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S68>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S68>/motohawk_delta_time'
   *  Sum: '<S68>/Sum'
   */
  if (rtb_Eaton_Plugged_In) {
    rtb_Switch_fi = rtb_motohawk_delta_time_my + SOC_High_Timer_DataStore();
  } else {
    rtb_Switch_fi = 0.0;
  }

  /* End of Switch: '<S68>/Switch' */

  /* Product: '<S60>/Product1' incorporates:
   *  RelationalOperator: '<S60>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S60>/motohawk_calibration2'
   */
  rtb_motohawk_ain = (uint16_T)(rtb_Switch_fi >= (SOC_Time_Threshold_DataStore())
    ? rtb_Eaton_Plugged_In : 0);

  /* DataTypeConversion: '<S16>/Data Type Conversion1' */
  rtb_Merge_ko = (real_T)rtb_motohawk_ain;

  /* S-Function Block: <S69>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s69_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_j = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S60>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S60>/motohawk_calibration3'
   */
  rtb_Eaton_Plugged_In = (rtb_Sum1 <= (SOC_Critical_DataStore()));

  /* Switch: '<S69>/Switch' incorporates:
   *  Constant: '<S69>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S69>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S69>/motohawk_delta_time'
   *  Sum: '<S69>/Sum'
   */
  if (rtb_Eaton_Plugged_In) {
    rtb_Switch_d = rtb_motohawk_delta_time_j + SOC_Critical_Timer_DataStore();
  } else {
    rtb_Switch_d = 0.0;
  }

  /* End of Switch: '<S69>/Switch' */

  /* Product: '<S60>/Product2' incorporates:
   *  RelationalOperator: '<S60>/Relational Operator5'
   *  S-Function (motohawk_sfun_calibration): '<S60>/motohawk_calibration2'
   */
  rtb_motohawk_ain = (uint16_T)(rtb_Switch_d >= (SOC_Time_Threshold_DataStore())
    ? rtb_Eaton_Plugged_In : 0);

  /* DataTypeConversion: '<S16>/Data Type Conversion2' */
  rtb_Merge_cq = (real_T)rtb_motohawk_ain;

  /* S-Function Block: <S70>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s70_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_kg = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S16>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S16>/motohawk_calibration7'
   */
  rtb_Switch_e = Mooventure2016_Rev5_B.s447_Merge *
    (RPM_to_Wheel_Speed_Multiplier4_DataStore());

  /* RelationalOperator: '<S61>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S61>/motohawk_calibration'
   */
  rtb_Eaton_Plugged_In = (rtb_Switch_e >= (Vehicle_Speed_On_DataStore()));

  /* Switch: '<S70>/Switch' incorporates:
   *  Constant: '<S70>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S70>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S70>/motohawk_delta_time'
   *  Sum: '<S70>/Sum'
   */
  if (rtb_Eaton_Plugged_In) {
    rtb_Switch_f = rtb_motohawk_delta_time_kg + Vehicle_Speed_On_Timer_DataStore
      ();
  } else {
    rtb_Switch_f = 0.0;
  }

  /* End of Switch: '<S70>/Switch' */
  /* Product: '<S61>/Product' incorporates:
   *  RelationalOperator: '<S61>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S61>/motohawk_calibration2'
   */
  rtb_motohawk_ain = (uint16_T)(rtb_Switch_f >=
    (Vehicle_Speed_Time_Threshold_DataStore()) ? rtb_Eaton_Plugged_In : 0);

  /* DataTypeConversion: '<S16>/Data Type Conversion3' */
  rtb_DataTypeConversion3 = (real_T)rtb_motohawk_ain;

  /* S-Function Block: <S71>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s71_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_p0 = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S61>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S61>/motohawk_calibration1'
   */
  rtb_Eaton_Plugged_In = (rtb_Switch_e <= (Vehicle_Speed_Off_DataStore()));

  /* Switch: '<S71>/Switch' incorporates:
   *  Constant: '<S71>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S71>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S71>/motohawk_delta_time'
   *  Sum: '<S71>/Sum'
   */
  if (rtb_Eaton_Plugged_In) {
    rtb_Switch_e = rtb_motohawk_delta_time_p0 +
      Vehicle_Speed_Off_Timer_DataStore();
  } else {
    rtb_Switch_e = 0.0;
  }

  /* End of Switch: '<S71>/Switch' */

  /* Product: '<S61>/Product1' incorporates:
   *  RelationalOperator: '<S61>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S61>/motohawk_calibration2'
   */
  rtb_motohawk_ain = (uint16_T)(rtb_Switch_e >=
    (Vehicle_Speed_Time_Threshold_DataStore()) ? rtb_Eaton_Plugged_In : 0);

  /* DataTypeConversion: '<S16>/Data Type Conversion4' */
  rtb_DataTypeConversion4 = (real_T)rtb_motohawk_ain;

  /* S-Function Block: <S66>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s66_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_o = ((real_T) delta) * 0.000001;
  }

  /* If: '<S401>/If' incorporates:
   *  Inport: '<S413>/In1'
   *  Inport: '<S414>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S401>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S401>/override_enable'
   */
  if ((Engine_On_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S401>/NewValue' incorporates:
     *  ActionPort: '<S413>/Action Port'
     */
    rtb_UnitDelay_o = (Engine_On_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S413>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(160);
    }

    /* End of Outputs for SubSystem: '<S401>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S401>/OldValue' incorporates:
     *  ActionPort: '<S414>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s195_ReadCANMessage_o5;

    /* S-Function (motohawk_sfun_code_cover): '<S414>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(161);
    }

    /* End of Outputs for SubSystem: '<S401>/OldValue' */
  }

  /* End of If: '<S401>/If' */

  /* Switch: '<S66>/Switch' incorporates:
   *  Constant: '<S66>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S66>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S66>/motohawk_delta_time'
   *  Sum: '<S66>/Sum'
   */
  if (rtb_UnitDelay_o >= 1.0) {
    rtb_Switch_ja = rtb_motohawk_delta_time_o + Engine_On_Timer_DataStore();
  } else {
    rtb_Switch_ja = 0.0;
  }

  /* End of Switch: '<S66>/Switch' */
  /* RelationalOperator: '<S59>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S59>/motohawk_calibration2'
   */
  rtb_Eaton_Plugged_In = (rtb_Switch_ja >= (Engine_On_Time_Threshold_DataStore()));

  /* Product: '<S59>/Product' */
  rtb_UnitDelay_o *= (real_T)rtb_Eaton_Plugged_In;

  /* If: '<S398>/If' incorporates:
   *  Inport: '<S407>/In1'
   *  Inport: '<S408>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S398>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S398>/override_enable'
   */
  if ((RPM_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S398>/NewValue' incorporates:
     *  ActionPort: '<S407>/Action Port'
     */
    rtb_UnitDelay_m = (RPM_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S407>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(154);
    }

    /* End of Outputs for SubSystem: '<S398>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S398>/OldValue' incorporates:
     *  ActionPort: '<S408>/Action Port'
     */
    rtb_UnitDelay_m = Mooventure2016_Rev5_B.s195_ReadCANMessage_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S408>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(155);
    }

    /* End of Outputs for SubSystem: '<S398>/OldValue' */
  }

  /* End of If: '<S398>/If' */

  /* Stateflow: '<S16>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S16>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S16>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S16>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S16>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S16>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S16>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S16>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_calibration): '<S16>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S16>/motohawk_calibration9'
   */

  /* Gateway: Foreground/Control/Engine Control/Chart */
  /* During: Foreground/Control/Engine Control/Chart */
  if (Mooventure2016_Rev5_DWork.s58_is_active_c33_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Engine Control/Chart */
    Mooventure2016_Rev5_DWork.s58_is_active_c33_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S58>:22' */
    Mooventure2016_Rev5_DWork.s58_is_c33_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_default;
  } else {
    switch (Mooventure2016_Rev5_DWork.s58_is_c33_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Running:
      /* During 'Running': '<S58>:27' */
      if ((rtb_Merge_ko != 0.0) || ((rtb_DataTypeConversion4 != 0.0) &&
           (!(rtb_Merge_cq != 0.0)))) {
        /* Transition: '<S58>:56' */
        Mooventure2016_Rev5_DWork.s58_is_Running = (uint8_T)
          Mooventure2016_Rev5_IN_NO_ACTIVE_CHILD_j;
        Mooventure2016_Rev5_DWork.s58_is_c33_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Shutdown;
      } else {
        Mooventure2016_Rev5_B.s58_Genset_Load = 1.0;
        switch (Mooventure2016_Rev5_DWork.s58_is_Running) {
         case Mooventure2016_Rev5_IN_default_gen:
          /* During 'default_gen': '<S58>:36' */
          if (Mooventure2016_Rev5_B.s399_Merge > (Coolant_Cold_DataStore())) {
            /* Transition: '<S58>:44' */
            Mooventure2016_Rev5_DWork.s58_is_Running =
              Mooventure2016_Rev5_IN_low_gen;
          } else {
            Mooventure2016_Rev5_B.s58_Genset_RPM = 0.0;
            Mooventure2016_Rev5_B.s58_Genset_Throttle = 0.0;
          }
          break;

         case Mooventure2016_Rev5_IN_high_gen:
          /* During 'high_gen': '<S58>:42' */
          if (!(rtb_Merge_cq != 0.0)) {
            /* Transition: '<S58>:48' */
            Mooventure2016_Rev5_DWork.s58_is_Running =
              Mooventure2016_Rev5_IN_medium_gen;
          } else {
            Mooventure2016_Rev5_B.s58_Genset_RPM = (High_RPM_DataStore());
            Mooventure2016_Rev5_B.s58_Genset_Throttle = (High_Throttle_DataStore
              ());
          }
          break;

         case Mooventure2016_Rev5_IN_low_gen:
          /* During 'low_gen': '<S58>:38' */
          if (Mooventure2016_Rev5_B.s399_Merge > (Coolant_Warm_DataStore())) {
            /* Transition: '<S58>:46' */
            Mooventure2016_Rev5_DWork.s58_is_Running =
              Mooventure2016_Rev5_IN_medium_gen;
          } else if ((Mooventure2016_Rev5_B.s399_Merge < (Coolant_Cold_DataStore
                       ()) - 3.0) || (rtb_DataTypeConversion4 != 0.0)) {
            /* Transition: '<S58>:50' */
            Mooventure2016_Rev5_DWork.s58_is_Running =
              Mooventure2016_Rev5_IN_default_gen;
          } else {
            Mooventure2016_Rev5_B.s58_Genset_RPM = (Low_RPM_DataStore());
            Mooventure2016_Rev5_B.s58_Genset_Throttle = (Low_Throttle_DataStore());
          }
          break;

         case Mooventure2016_Rev5_IN_medium_gen:
          /* During 'medium_gen': '<S58>:41' */
          if ((Mooventure2016_Rev5_B.s399_Merge > (Coolant_Hot_DataStore())) &&
              (rtb_Merge_cq != 0.0)) {
            /* Transition: '<S58>:47' */
            Mooventure2016_Rev5_DWork.s58_is_Running =
              Mooventure2016_Rev5_IN_high_gen;
          } else if (Mooventure2016_Rev5_B.s399_Merge < (Coolant_Warm_DataStore())
                     - 3.0) {
            /* Transition: '<S58>:49' */
            Mooventure2016_Rev5_DWork.s58_is_Running =
              Mooventure2016_Rev5_IN_low_gen;
          } else if (rtb_DataTypeConversion4 != 0.0) {
            /* Transition: '<S58>:52' */
            Mooventure2016_Rev5_DWork.s58_is_Running =
              Mooventure2016_Rev5_IN_default_gen;
          } else {
            Mooventure2016_Rev5_B.s58_Genset_RPM = (Medium_RPM_DataStore());
            Mooventure2016_Rev5_B.s58_Genset_Throttle =
              (Medium_Throttle_DataStore());
          }
          break;

         default:
          /* Transition: '<S58>:37' */
          Mooventure2016_Rev5_DWork.s58_is_Running =
            Mooventure2016_Rev5_IN_default_gen;
          break;
        }
      }
      break;

     case Mooventure2016_Rev5_IN_Shutdown:
      /* During 'Shutdown': '<S58>:58' */
      if (rtb_UnitDelay_m < 200.0) {
        /* Transition: '<S58>:59' */
        Mooventure2016_Rev5_DWork.s58_is_c33_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default;
      } else {
        Mooventure2016_Rev5_B.s58_Genset_Enable = 0.0;
        Mooventure2016_Rev5_B.s58_Genset_Throttle = 0.0;
        Mooventure2016_Rev5_B.s58_Genset_RPM = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Startup:
      /* During 'Startup': '<S58>:23' */
      if (rtb_UnitDelay_o != 0.0) {
        /* Transition: '<S58>:29' */
        Mooventure2016_Rev5_DWork.s58_is_c33_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Running;

        /* Transition: '<S58>:37' */
        Mooventure2016_Rev5_DWork.s58_is_Running =
          Mooventure2016_Rev5_IN_default_gen;
      } else {
        Mooventure2016_Rev5_B.s58_Genset_Enable = 1.0;
      }
      break;

     case Mooventure2016_Rev5_IN_default:
      /* During 'default': '<S58>:21' */
      if ((rtb_Merge_cq != 0.0) || ((rtb_Merge_bg != 0.0) &&
           (rtb_DataTypeConversion3 != 0.0))) {
        /* Transition: '<S58>:26' */
        Mooventure2016_Rev5_DWork.s58_is_c33_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Startup;
      } else {
        Mooventure2016_Rev5_B.s58_Genset_Enable = 0.0;
        Mooventure2016_Rev5_B.s58_Genset_Load = 0.0;
        Mooventure2016_Rev5_B.s58_Genset_RPM = 0.0;
        Mooventure2016_Rev5_B.s58_Genset_Throttle = 0.0;
      }
      break;

     default:
      /* Transition: '<S58>:22' */
      Mooventure2016_Rev5_DWork.s58_is_c33_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_default;
      break;
    }
  }

  /* End of Stateflow: '<S16>/Chart' */
  /* If: '<S62>/If' incorporates:
   *  Inport: '<S72>/In1'
   *  Inport: '<S73>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S62>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S62>/override_enable'
   */
  if ((Genset_Load_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S62>/NewValue' incorporates:
     *  ActionPort: '<S72>/Action Port'
     */
    Mooventure2016_Rev5_B.s62_Merge = (Genset_Load_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S72>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(26);
    }

    /* End of Outputs for SubSystem: '<S62>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S62>/OldValue' incorporates:
     *  ActionPort: '<S73>/Action Port'
     */
    Mooventure2016_Rev5_B.s62_Merge = Mooventure2016_Rev5_B.s58_Genset_Load;

    /* S-Function (motohawk_sfun_code_cover): '<S73>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(27);
    }

    /* End of Outputs for SubSystem: '<S62>/OldValue' */
  }

  /* End of If: '<S62>/If' */

  /* If: '<S805>/If' incorporates:
   *  Inport: '<S810>/In1'
   *  Inport: '<S811>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S805>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S805>/override_enable'
   */
  if ((Gen_Load_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S805>/NewValue' incorporates:
     *  ActionPort: '<S810>/Action Port'
     */
    rtb_Merge_ogr = (Gen_Load_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S810>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(398);
    }

    /* End of Outputs for SubSystem: '<S805>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S805>/OldValue' incorporates:
     *  ActionPort: '<S811>/Action Port'
     */
    rtb_Merge_ogr = Mooventure2016_Rev5_B.s62_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S811>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(399);
    }

    /* End of Outputs for SubSystem: '<S805>/OldValue' */
  }

  /* End of If: '<S805>/If' */

  /* If: '<S263>/If' incorporates:
   *  Inport: '<S275>/In1'
   *  Inport: '<S276>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S263>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S263>/override_enable'
   */
  if ((Pack_State_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S263>/NewValue' incorporates:
     *  ActionPort: '<S275>/Action Port'
     */
    Mooventure2016_Rev5_B.s263_Merge = (Pack_State_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S275>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(82);
    }

    /* End of Outputs for SubSystem: '<S263>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S263>/OldValue' incorporates:
     *  ActionPort: '<S276>/Action Port'
     */
    Mooventure2016_Rev5_B.s263_Merge = Mooventure2016_Rev5_B.s189_PackState;

    /* S-Function (motohawk_sfun_code_cover): '<S276>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(83);
    }

    /* End of Outputs for SubSystem: '<S263>/OldValue' */
  }

  /* End of If: '<S263>/If' */

  /* RelationalOperator: '<S536>/Relational Operator' incorporates:
   *  Constant: '<S536>/Constant'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s263_Merge == 4.0);

  /* If: '<S63>/If' incorporates:
   *  Inport: '<S74>/In1'
   *  Inport: '<S75>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S63>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S63>/override_enable'
   */
  if ((Genset_Enable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S63>/NewValue' incorporates:
     *  ActionPort: '<S74>/Action Port'
     */
    rtb_UnitDelay_o = (Genset_Enable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S74>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(28);
    }

    /* End of Outputs for SubSystem: '<S63>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S63>/OldValue' incorporates:
     *  ActionPort: '<S75>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s58_Genset_Enable;

    /* S-Function (motohawk_sfun_code_cover): '<S75>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(29);
    }

    /* End of Outputs for SubSystem: '<S63>/OldValue' */
  }

  /* End of If: '<S63>/If' */

  /* Logic: '<S536>/Logical Operator' */
  Mooventure2016_Rev5_B.s536_Gen_Enable = (((rtb_UnitDelay_o != 0.0) &&
    rtb_LogicalOperator5));

  /* If: '<S806>/If' incorporates:
   *  Inport: '<S812>/In1'
   *  Inport: '<S813>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S806>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S806>/override_enable'
   */
  if ((Gen_Enable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S806>/NewValue' incorporates:
     *  ActionPort: '<S812>/Action Port'
     */
    rtb_Merge_ik = (Gen_Enable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S812>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(400);
    }

    /* End of Outputs for SubSystem: '<S806>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S806>/OldValue' incorporates:
     *  ActionPort: '<S813>/Action Port'
     */
    rtb_Merge_ik = Mooventure2016_Rev5_B.s536_Gen_Enable;

    /* S-Function (motohawk_sfun_code_cover): '<S813>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(401);
    }

    /* End of Outputs for SubSystem: '<S806>/OldValue' */
  }

  /* End of If: '<S806>/If' */

  /* Abs: '<S536>/Abs' */
  rtb_DataTypeConversion4 = fabs(Mooventure2016_Rev5_B.s447_Merge);

  /* Product: '<S536>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S536>/motohawk_calibration7'
   */
  Mooventure2016_Rev5_B.s536_Vehicle_Speed = rtb_DataTypeConversion4 *
    (RPM_to_Wheel_Speed_Multiplier3_DataStore());

  /* If: '<S807>/If' incorporates:
   *  Inport: '<S814>/In1'
   *  Inport: '<S815>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S807>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S807>/override_enable'
   */
  if ((Vehicle_Speed2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S807>/NewValue' incorporates:
     *  ActionPort: '<S814>/Action Port'
     */
    rtb_Merge_ou = (Vehicle_Speed2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S814>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(402);
    }

    /* End of Outputs for SubSystem: '<S807>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S807>/OldValue' incorporates:
     *  ActionPort: '<S815>/Action Port'
     */
    rtb_Merge_ou = Mooventure2016_Rev5_B.s536_Vehicle_Speed;

    /* S-Function (motohawk_sfun_code_cover): '<S815>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(403);
    }

    /* End of Outputs for SubSystem: '<S807>/OldValue' */
  }

  /* End of If: '<S807>/If' */

  /* If: '<S65>/If' incorporates:
   *  Inport: '<S78>/In1'
   *  Inport: '<S79>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S65>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S65>/override_enable'
   */
  if ((Genset_Throttle_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S65>/NewValue' incorporates:
     *  ActionPort: '<S78>/Action Port'
     */
    Mooventure2016_Rev5_B.s65_Merge = (Genset_Throttle_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S78>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(32);
    }

    /* End of Outputs for SubSystem: '<S65>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S65>/OldValue' incorporates:
     *  ActionPort: '<S79>/Action Port'
     */
    Mooventure2016_Rev5_B.s65_Merge = Mooventure2016_Rev5_B.s58_Genset_Throttle;

    /* S-Function (motohawk_sfun_code_cover): '<S79>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(33);
    }

    /* End of Outputs for SubSystem: '<S65>/OldValue' */
  }

  /* End of If: '<S65>/If' */

  /* If: '<S808>/If' incorporates:
   *  Inport: '<S816>/In1'
   *  Inport: '<S817>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S808>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S808>/override_enable'
   */
  if ((Load_Throttle_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S808>/NewValue' incorporates:
     *  ActionPort: '<S816>/Action Port'
     */
    rtb_Merge_ai = (Load_Throttle_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S816>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(404);
    }

    /* End of Outputs for SubSystem: '<S808>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S808>/OldValue' incorporates:
     *  ActionPort: '<S817>/Action Port'
     */
    rtb_Merge_ai = Mooventure2016_Rev5_B.s65_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S817>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(405);
    }

    /* End of Outputs for SubSystem: '<S808>/OldValue' */
  }

  /* End of If: '<S808>/If' */

  /* If: '<S64>/If' incorporates:
   *  Inport: '<S76>/In1'
   *  Inport: '<S77>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S64>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S64>/override_enable'
   */
  if ((Genset_RPM_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S64>/NewValue' incorporates:
     *  ActionPort: '<S76>/Action Port'
     */
    Mooventure2016_Rev5_B.s64_Merge = (Genset_RPM_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S76>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(30);
    }

    /* End of Outputs for SubSystem: '<S64>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S64>/OldValue' incorporates:
     *  ActionPort: '<S77>/Action Port'
     */
    Mooventure2016_Rev5_B.s64_Merge = Mooventure2016_Rev5_B.s58_Genset_RPM;

    /* S-Function (motohawk_sfun_code_cover): '<S77>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(31);
    }

    /* End of Outputs for SubSystem: '<S64>/OldValue' */
  }

  /* End of If: '<S64>/If' */

  /* If: '<S809>/If' incorporates:
   *  Inport: '<S818>/In1'
   *  Inport: '<S819>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S809>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S809>/override_enable'
   */
  if ((Load_RPM_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S809>/NewValue' incorporates:
     *  ActionPort: '<S818>/Action Port'
     */
    rtb_Merge_fw = (Load_RPM_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S818>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(406);
    }

    /* End of Outputs for SubSystem: '<S809>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S809>/OldValue' incorporates:
     *  ActionPort: '<S819>/Action Port'
     */
    rtb_Merge_fw = Mooventure2016_Rev5_B.s64_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S819>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(407);
    }

    /* End of Outputs for SubSystem: '<S809>/OldValue' */
  }

  /* End of If: '<S809>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S536>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x210 */
      {
        extern boolean_T CAN_3_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint16_T tmp4;
        tmp0 = (uint8_T)(rtb_Merge_ik != 0);
        if (rtb_Merge_ogr < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_ogr > 1.0000000000F) {
          tmp1 = (uint8_T)(1U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_ogr != 0);
        }

        if (rtb_Merge_ou < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Merge_ou > 255.0000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_Merge_ou);
        }

        if (rtb_Merge_ai < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_Merge_ai > 255.0000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_Merge_ai);
        }

        if (rtb_Merge_fw < 0.0000000000F) {
          tmp4 = (uint16_T)(0U);
        } else if (rtb_Merge_fw > 8191.0000000000F) {
          tmp4 = (uint16_T)(8191U);
        } else {
          tmp4 = (uint16_T)(rtb_Merge_fw);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x00000001) << 7) |
          ((((uint8_T *)(&tmp1))[0] & 0x00000001) << 6) ;
        msg_data[1] = ((((uint8_T *)(&tmp4))[1] & 0x000000E0) >> 5) |
          ((((uint8_T *)(&tmp4))[0] & 0x0000001F) << 3) ;
        msg_data[2] = ((((uint8_T *)(&tmp4))[1] & 0x0000001F) << 3) ;
        msg_data[3] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_3_Transmit(0, 0x210UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_data_read): '<S537>/motohawk_data_read2' */
  rtb_Eaton_Plugged_In = Torque_Enable_DataStore();

  /* Product: '<S537>/Product' */
  Mooventure2016_Rev5_B.s537_VSC_WheelTorqueRequest =
    Mooventure2016_Rev5_B.s121_MultiportSwitch * (real_T)rtb_Eaton_Plugged_In;

  /* If: '<S826>/If' incorporates:
   *  Inport: '<S847>/In1'
   *  Inport: '<S848>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S826>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S826>/override_enable'
   */
  if ((VSC_WheelTorqueRequest_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S826>/NewValue' incorporates:
     *  ActionPort: '<S847>/Action Port'
     */
    rtb_Merge_kv = (VSC_WheelTorqueRequest_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S847>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(412);
    }

    /* End of Outputs for SubSystem: '<S826>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S826>/OldValue' incorporates:
     *  ActionPort: '<S848>/Action Port'
     */
    rtb_Merge_kv = Mooventure2016_Rev5_B.s537_VSC_WheelTorqueRequest;

    /* S-Function (motohawk_sfun_code_cover): '<S848>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(413);
    }

    /* End of Outputs for SubSystem: '<S826>/OldValue' */
  }

  /* End of If: '<S826>/If' */

  /* S-Function (motohawk_sfun_data_read): '<S537>/motohawk_data_read3' */
  Mooventure2016_Rev5_B.s537_VSC_IPTEnable = Vehicle_Ready_DataStore();

  /* If: '<S827>/If' incorporates:
   *  Inport: '<S849>/In1'
   *  Inport: '<S850>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S827>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S827>/override_enable'
   */
  if ((VSC_IPTWakeup_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S827>/NewValue' incorporates:
     *  ActionPort: '<S849>/Action Port'
     */
    rtb_Merge_e0 = (VSC_IPTWakeup_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S849>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(414);
    }

    /* End of Outputs for SubSystem: '<S827>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S827>/OldValue' incorporates:
     *  ActionPort: '<S850>/Action Port'
     */
    rtb_Merge_e0 = Mooventure2016_Rev5_B.s537_VSC_IPTEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S850>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(415);
    }

    /* End of Outputs for SubSystem: '<S827>/OldValue' */
  }

  /* End of If: '<S827>/If' */

  /* If: '<S828>/If' incorporates:
   *  Inport: '<S851>/In1'
   *  Inport: '<S852>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S828>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S828>/override_enable'
   */
  if ((VSC_TRSPosition_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S828>/NewValue' incorporates:
     *  ActionPort: '<S851>/Action Port'
     */
    rtb_Merge_kf = (VSC_TRSPosition_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S851>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(416);
    }

    /* End of Outputs for SubSystem: '<S828>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S828>/OldValue' incorporates:
     *  ActionPort: '<S852>/Action Port'
     */
    rtb_Merge_kf = Mooventure2016_Rev5_B.s321_posOut;

    /* S-Function (motohawk_sfun_code_cover): '<S852>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(417);
    }

    /* End of Outputs for SubSystem: '<S828>/OldValue' */
  }

  /* End of If: '<S828>/If' */

  /* DataTypeConversion: '<S18>/Data Type Conversion' */
  rtb_Eaton_Plugged_In = (Mooventure2016_Rev5_B.s18_motor_Enable != 0.0);

  /* S-Function Block: <S823>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s823_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_l = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S823>/Switch' incorporates:
   *  Constant: '<S823>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S823>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S823>/motohawk_delta_time'
   *  Sum: '<S823>/Sum'
   */
  if (rtb_Eaton_Plugged_In) {
    rtb_DataTypeConversion4 = rtb_motohawk_delta_time_l +
      MotorEnable_Timer_DataStore();
  } else {
    rtb_DataTypeConversion4 = 0.0;
  }

  /* End of Switch: '<S823>/Switch' */
  /* RelationalOperator: '<S537>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S537>/motohawk_calibration3'
   */
  rtb_LogicalOperator5 = (rtb_DataTypeConversion4 >=
    (Motor_Startup_Delay_DataStore()));

  /* Logic: '<S537>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S537>/motohawk_data_read1'
   */
  Mooventure2016_Rev5_B.s537_VSC_MotorEnable = ((rtb_Eaton_Plugged_In &&
    rtb_LogicalOperator5 && Vehicle_Ready_DataStore()));

  /* If: '<S829>/If' incorporates:
   *  Inport: '<S853>/In1'
   *  Inport: '<S854>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S829>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S829>/override_enable'
   */
  if ((VSC_MotorEnable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S829>/NewValue' incorporates:
     *  ActionPort: '<S853>/Action Port'
     */
    rtb_Merge_m3 = (VSC_MotorEnable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S853>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(418);
    }

    /* End of Outputs for SubSystem: '<S829>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S829>/OldValue' incorporates:
     *  ActionPort: '<S854>/Action Port'
     */
    rtb_Merge_m3 = Mooventure2016_Rev5_B.s537_VSC_MotorEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S854>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(419);
    }

    /* End of Outputs for SubSystem: '<S829>/OldValue' */
  }

  /* End of If: '<S829>/If' */

  /* If: '<S830>/If' incorporates:
   *  Inport: '<S855>/In1'
   *  Inport: '<S856>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S537>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S830>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S830>/override_enable'
   */
  if ((VSC_AntishudderDisable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S830>/NewValue' incorporates:
     *  ActionPort: '<S855>/Action Port'
     */
    rtb_Merge_cz = (VSC_AntishudderDisable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S855>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(420);
    }

    /* End of Outputs for SubSystem: '<S830>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S830>/OldValue' incorporates:
     *  ActionPort: '<S856>/Action Port'
     */
    rtb_Merge_cz = (VSC_AntishudderDisable_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S856>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(421);
    }

    /* End of Outputs for SubSystem: '<S830>/OldValue' */
  }

  /* End of If: '<S830>/If' */

  /* If: '<S831>/If' incorporates:
   *  Inport: '<S857>/In1'
   *  Inport: '<S858>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S831>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S831>/override_enable'
   */
  if ((VSC_IPTEnable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S831>/NewValue' incorporates:
     *  ActionPort: '<S857>/Action Port'
     */
    rtb_Merge_nrr = (VSC_IPTEnable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S857>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(422);
    }

    /* End of Outputs for SubSystem: '<S831>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S831>/OldValue' incorporates:
     *  ActionPort: '<S858>/Action Port'
     */
    rtb_Merge_nrr = Mooventure2016_Rev5_B.s537_VSC_IPTEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S858>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(423);
    }

    /* End of Outputs for SubSystem: '<S831>/OldValue' */
  }

  /* End of If: '<S831>/If' */

  /* If: '<S832>/If' incorporates:
   *  Inport: '<S859>/In1'
   *  Inport: '<S860>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S537>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_calibration): '<S832>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S832>/override_enable'
   */
  if ((VSC_SDPTActive_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S832>/NewValue' incorporates:
     *  ActionPort: '<S859>/Action Port'
     */
    rtb_Merge_nzb = (VSC_SDPTActive_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S859>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(424);
    }

    /* End of Outputs for SubSystem: '<S832>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S832>/OldValue' incorporates:
     *  ActionPort: '<S860>/Action Port'
     */
    rtb_Merge_nzb = (VSC_SDPTActive_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S860>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(425);
    }

    /* End of Outputs for SubSystem: '<S832>/OldValue' */
  }

  /* End of If: '<S832>/If' */

  /* If: '<S833>/If' incorporates:
   *  Inport: '<S861>/In1'
   *  Inport: '<S862>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S537>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S833>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S833>/override_enable'
   */
  if ((VSC_PowerWasteRequest_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S833>/NewValue' incorporates:
     *  ActionPort: '<S861>/Action Port'
     */
    rtb_Merge_go = (VSC_PowerWasteRequest_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S861>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(426);
    }

    /* End of Outputs for SubSystem: '<S833>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S833>/OldValue' incorporates:
     *  ActionPort: '<S862>/Action Port'
     */
    rtb_Merge_go = (VSC_PowerWasteRequest_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S862>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(427);
    }

    /* End of Outputs for SubSystem: '<S833>/OldValue' */
  }

  /* End of If: '<S833>/If' */

  /* If: '<S840>/If' incorporates:
   *  Inport: '<S875>/In1'
   *  Inport: '<S876>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S537>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S840>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S840>/override_enable'
   */
  if ((VSC_ActiveDischargeDisable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S840>/NewValue' incorporates:
     *  ActionPort: '<S875>/Action Port'
     */
    rtb_Merge_il = (VSC_ActiveDischargeDisable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S875>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(440);
    }

    /* End of Outputs for SubSystem: '<S840>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S840>/OldValue' incorporates:
     *  ActionPort: '<S876>/Action Port'
     */
    rtb_Merge_il = (VSC_ActiveDischargeDisable_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S876>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(441);
    }

    /* End of Outputs for SubSystem: '<S840>/OldValue' */
  }

  /* End of If: '<S840>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S537>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (10.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (9500U)
         )) {
      /* 0x262 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        uint8_T tmp5;
        uint8_T tmp6;
        uint8_T tmp7;
        uint16_T tmp8;
        if (rtb_Merge_kf < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_kf > 3.0000000000F) {
          tmp0 = (uint8_T)(3U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_kf);
        }

        tmp1 = (uint8_T)(rtb_Merge_m3 != 0);
        if (rtb_Merge_il < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Merge_il > 1.0000000000F) {
          tmp2 = (uint8_T)(1U);
        } else {
          tmp2 = (uint8_T)(rtb_Merge_il != 0);
        }

        if (rtb_Merge_cz < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_Merge_cz > 1.0000000000F) {
          tmp3 = (uint8_T)(1U);
        } else {
          tmp3 = (uint8_T)(rtb_Merge_cz != 0);
        }

        if (rtb_Merge_nzb < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_Merge_nzb > 1.0000000000F) {
          tmp4 = (uint8_T)(1U);
        } else {
          tmp4 = (uint8_T)(rtb_Merge_nzb != 0);
        }

        tmp5 = (uint8_T)(rtb_Merge_e0 != 0);
        tmp6 = (uint8_T)(rtb_Merge_nrr != 0);
        if (rtb_Merge_go < 0.0000000000F) {
          tmp7 = (uint8_T)(0U);
        } else if (rtb_Merge_go > 12750.0000000000F) {
          tmp7 = (uint8_T)(255U);
        } else {
          tmp7 = (uint8_T)(rtb_Merge_go / (50.0000000000F));
        }

        if (rtb_Merge_kv < -4000.0000000000F) {
          tmp8 = (uint16_T)(0U);
        } else if (rtb_Merge_kv > 4191.0000000000F) {
          tmp8 = (uint16_T)(8191U);
        } else {
          tmp8 = (uint16_T)(rtb_Merge_kv - (-4000.0000000000F));
        }

        msg_data[0] = ((((uint8_T *)(&tmp8))[0] & 0x0000001F)) ;
        msg_data[1] = ((((uint8_T *)(&tmp8))[1])) ;
        msg_data[2] = ((((uint8_T *)(&tmp7))[0])) ;
        msg_data[3] = 0 ;
        msg_data[4] = ((((uint8_T *)(&tmp0))[0] & 0x00000003) << 6) |
          ((((uint8_T *)(&tmp1))[0] & 0x00000001) << 5) | ((((uint8_T *)(&tmp2))
          [0] & 0x00000001) << 4) | ((((uint8_T *)(&tmp3))[0] & 0x00000001) << 3)
          | ((((uint8_T *)(&tmp4))[0] & 0x00000001) << 2) | ((((uint8_T *)(&tmp5))
          [0] & 0x00000001) << 1) | ((((uint8_T *)(&tmp6))[0] & 0x00000001)) ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(0, 0x262UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S834>/If' incorporates:
   *  Inport: '<S863>/In1'
   *  Inport: '<S864>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S537>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S834>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S834>/override_enable'
   */
  if ((VSC_MinDCVoltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S834>/NewValue' incorporates:
     *  ActionPort: '<S863>/Action Port'
     */
    rtb_Merge_e2 = (VSC_MinDCVoltage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S863>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(428);
    }

    /* End of Outputs for SubSystem: '<S834>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S834>/OldValue' incorporates:
     *  ActionPort: '<S864>/Action Port'
     */
    rtb_Merge_e2 = (VSC_MinDCVoltage_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S864>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(429);
    }

    /* End of Outputs for SubSystem: '<S834>/OldValue' */
  }

  /* End of If: '<S834>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S189>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3350p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3350p0001_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint8_T tmp2 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[7])) ;
      Mooventure2016_Rev5_B.s189_MaximumDischargePower_Continuous = ((real_T)
        tmp0) / ((real_T) 100);
      Mooventure2016_Rev5_B.s189_MaximumRegenPower_Continuous = ((real_T) tmp1) /
        ((real_T) 100);
      Mooventure2016_Rev5_B.s189_PPLCont_RollingCounter = (real_T) tmp2;
    }
  }

  /* S-Function Block: <S842>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s842_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_gp = ((real_T) delta) * 0.000001;
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S189>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3349p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3349p0001_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint16_T tmp3 = 0;
      uint8_T tmp4 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[4])) ;
      ((uint8_T *)(&tmp3))[0] = ((msg_data[5])) ;
      ((uint8_T *)(&tmp3))[1] = ((msg_data[6])) ;
      ((uint8_T *)(&tmp4))[0] = ((msg_data[7])) ;
      Mooventure2016_Rev5_B.s189_MaximumDischargePower_10s = ((real_T) tmp0) /
        ((real_T) 100);
      Mooventure2016_Rev5_B.s189_MaximumRegenPower_10s = ((real_T) tmp1) /
        ((real_T) 100);
      Mooventure2016_Rev5_B.s189_IsolationLevel = ((real_T) tmp2) * ((real_T) 4);
      Mooventure2016_Rev5_B.s189_ActiveDTC = (real_T) tmp3;
      Mooventure2016_Rev5_B.s189_PPL10s_RollingCounter = (real_T) tmp4;
    }
  }

  /* Product: '<S822>/Product' incorporates:
   *  Constant: '<S822>/Constant'
   */
  rtb_UnitDelay_o = -Mooventure2016_Rev5_B.s189_MaximumRegenPower_10s;

  /* If: '<S261>/If' incorporates:
   *  Inport: '<S271>/In1'
   *  Inport: '<S272>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S261>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S261>/override_enable'
   */
  if ((Batt_Current_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S261>/NewValue' incorporates:
     *  ActionPort: '<S271>/Action Port'
     */
    Mooventure2016_Rev5_B.s261_Merge = (Batt_Current_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S271>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(78);
    }

    /* End of Outputs for SubSystem: '<S261>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S261>/OldValue' incorporates:
     *  ActionPort: '<S272>/Action Port'
     */
    Mooventure2016_Rev5_B.s261_Merge = Mooventure2016_Rev5_B.s189_BatteryCurrent;

    /* S-Function (motohawk_sfun_code_cover): '<S272>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(79);
    }

    /* End of Outputs for SubSystem: '<S261>/OldValue' */
  }

  /* End of If: '<S261>/If' */

  /* RelationalOperator: '<S822>/Relational Operator' */
  rtb_LogicalOperator5 = (rtb_UnitDelay_o >= Mooventure2016_Rev5_B.s261_Merge);

  /* Logic: '<S822>/Logical Operator' incorporates:
   *  RelationalOperator: '<S822>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S822>/motohawk_calibration'
   */
  rtb_Eaton_Plugged_In = (rtb_LogicalOperator5 ||
    (Mooventure2016_Rev5_B.s261_Merge >= (Saturated_Sensor_Regen_DataStore())));

  /* Switch: '<S842>/Switch' incorporates:
   *  Constant: '<S842>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S842>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S842>/motohawk_delta_time'
   *  Sum: '<S842>/Sum'
   */
  if (rtb_Eaton_Plugged_In) {
    rtb_DataTypeConversion3 = rtb_motohawk_delta_time_gp +
      MaxOutputCurrent_Timer_DataStore();
  } else {
    rtb_DataTypeConversion3 = 0.0;
  }

  /* End of Switch: '<S842>/Switch' */

  /* Switch: '<S822>/Switch' incorporates:
   *  Constant: '<S822>/Constant1'
   *  Logic: '<S822>/Logical Operator1'
   *  RelationalOperator: '<S822>/Relational Operator2'
   */
  if ((rtb_DataTypeConversion3 >= 10.0) && rtb_Eaton_Plugged_In) {
    Mooventure2016_Rev5_B.s822_Switch =
      Mooventure2016_Rev5_B.s189_MaximumRegenPower_Continuous;
  } else {
    Mooventure2016_Rev5_B.s822_Switch =
      Mooventure2016_Rev5_B.s189_MaximumRegenPower_10s;
  }

  /* End of Switch: '<S822>/Switch' */
  /* If: '<S837>/If' incorporates:
   *  Inport: '<S869>/In1'
   *  Inport: '<S870>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S837>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S837>/override_enable'
   */
  if ((VSC_MaxCurrOutputGen_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S837>/NewValue' incorporates:
     *  ActionPort: '<S869>/Action Port'
     */
    rtb_Merge_ee = (VSC_MaxCurrOutputGen_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S869>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(434);
    }

    /* End of Outputs for SubSystem: '<S837>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S837>/OldValue' incorporates:
     *  ActionPort: '<S870>/Action Port'
     */
    rtb_Merge_ee = Mooventure2016_Rev5_B.s822_Switch;

    /* S-Function (motohawk_sfun_code_cover): '<S870>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(435);
    }

    /* End of Outputs for SubSystem: '<S837>/OldValue' */
  }

  /* End of If: '<S837>/If' */

  /* S-Function Block: <S841>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s841_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_md = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S821>/Relational Operator' incorporates:
   *  Constant: '<S821>/Constant'
   *  Product: '<S821>/Product'
   */
  rtb_LogicalOperator5 = (-Mooventure2016_Rev5_B.s189_MaximumDischargePower_10s >=
    Mooventure2016_Rev5_B.s261_Merge);

  /* Logic: '<S821>/Logical Operator' incorporates:
   *  RelationalOperator: '<S821>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S821>/motohawk_calibration'
   */
  rtb_Eaton_Plugged_In = (rtb_LogicalOperator5 ||
    (Mooventure2016_Rev5_B.s261_Merge <= (Saturated_Sensor_Discharge_DataStore())));

  /* Switch: '<S841>/Switch' incorporates:
   *  Constant: '<S841>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S841>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S841>/motohawk_delta_time'
   *  Sum: '<S841>/Sum'
   */
  if (rtb_Eaton_Plugged_In) {
    rtb_Switch_pn = rtb_motohawk_delta_time_md + MaxInputCurrent_Timer_DataStore
      ();
  } else {
    rtb_Switch_pn = 0.0;
  }

  /* End of Switch: '<S841>/Switch' */

  /* Switch: '<S821>/Switch' incorporates:
   *  Constant: '<S821>/Constant1'
   *  Logic: '<S821>/Logical Operator1'
   *  RelationalOperator: '<S821>/Relational Operator2'
   */
  if ((rtb_Switch_pn >= 10.0) && rtb_Eaton_Plugged_In) {
    Mooventure2016_Rev5_B.s821_Switch =
      Mooventure2016_Rev5_B.s189_MaximumDischargePower_Continuous;
  } else {
    Mooventure2016_Rev5_B.s821_Switch =
      Mooventure2016_Rev5_B.s189_MaximumDischargePower_10s;
  }

  /* End of Switch: '<S821>/Switch' */
  /* If: '<S838>/If' incorporates:
   *  Inport: '<S871>/In1'
   *  Inport: '<S872>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S838>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S838>/override_enable'
   */
  if ((VSC_MaxCurrInputMotor_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S838>/NewValue' incorporates:
     *  ActionPort: '<S871>/Action Port'
     */
    rtb_Merge_pi = (VSC_MaxCurrInputMotor_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S871>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(436);
    }

    /* End of Outputs for SubSystem: '<S838>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S838>/OldValue' incorporates:
     *  ActionPort: '<S872>/Action Port'
     */
    rtb_Merge_pi = Mooventure2016_Rev5_B.s821_Switch;

    /* S-Function (motohawk_sfun_code_cover): '<S872>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(437);
    }

    /* End of Outputs for SubSystem: '<S838>/OldValue' */
  }

  /* End of If: '<S838>/If' */

  /* If: '<S839>/If' incorporates:
   *  Inport: '<S873>/In1'
   *  Inport: '<S874>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S537>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S839>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S839>/override_enable'
   */
  if ((VSC_MaxDCVoltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S839>/NewValue' incorporates:
     *  ActionPort: '<S873>/Action Port'
     */
    rtb_Merge_bi = (VSC_MaxDCVoltage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S873>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(438);
    }

    /* End of Outputs for SubSystem: '<S839>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S839>/OldValue' incorporates:
     *  ActionPort: '<S874>/Action Port'
     */
    rtb_Merge_bi = (VSC_MaxDCVoltage_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S874>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(439);
    }

    /* End of Outputs for SubSystem: '<S839>/OldValue' */
  }

  /* End of If: '<S839>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S537>/Send CAN Messages1' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x318 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        uint16_T tmp1;
        uint16_T tmp2;
        uint16_T tmp3;
        if (rtb_Merge_ee < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Merge_ee > 6553.5000000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(rtb_Merge_ee * (10.0000000000F));
        }

        if (rtb_Merge_pi < 0.0000000000F) {
          tmp1 = (uint16_T)(0U);
        } else if (rtb_Merge_pi > 6553.5000000000F) {
          tmp1 = (uint16_T)(65535U);
        } else {
          tmp1 = (uint16_T)(rtb_Merge_pi * (10.0000000000F));
        }

        if (rtb_Merge_e2 < 0.0000000000F) {
          tmp2 = (uint16_T)(0U);
        } else if (rtb_Merge_e2 > 511.0000000000F) {
          tmp2 = (uint16_T)(511U);
        } else {
          tmp2 = (uint16_T)(rtb_Merge_e2);
        }

        if (rtb_Merge_bi < 0.0000000000F) {
          tmp3 = (uint16_T)(0U);
        } else if (rtb_Merge_bi > 511.0000000000F) {
          tmp3 = (uint16_T)(511U);
        } else {
          tmp3 = (uint16_T)(rtb_Merge_bi);
        }

        msg_data[0] = ((((uint8_T *)(&tmp3))[0] & 0x00000001)) ;
        msg_data[1] = ((((uint8_T *)(&tmp3))[1])) ;
        msg_data[2] = ((((uint8_T *)(&tmp2))[0] & 0x00000001)) ;
        msg_data[3] = ((((uint8_T *)(&tmp2))[1])) ;
        msg_data[4] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp1))[1])) ;
        msg_data[6] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[7] = ((((uint8_T *)(&tmp0))[1])) ;
        CAN_1_Transmit(0, 0x318UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_probe): '<S537>/motohawk_probe14' */
  (VSC_AntishudderDisable_Prb_DataStore()) =
    (VSC_AntishudderDisable_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S537>/motohawk_probe16' */
  (VSC_SDPTActive_Prb_DataStore()) = (VSC_SDPTActive_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S537>/motohawk_probe17' */
  (VSC_PowerWasteRequest_Prb_DataStore()) = (VSC_PowerWasteRequest_Cal_DataStore
    ());

  /* S-Function (motohawk_sfun_probe): '<S537>/motohawk_probe2' */
  (VSC_MinDCVoltage_Prb_DataStore()) = (VSC_MinDCVoltage_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S537>/motohawk_probe7' */
  (VSC_MaxDCVoltage_Prb_DataStore()) = (VSC_MaxDCVoltage_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S537>/motohawk_probe8' */
  (VSC_ActiveDischargeDisable_Prb_DataStore()) =
    (VSC_ActiveDischargeDisable_Cal_DataStore());

  /* Saturate: '<S841>/Saturation' */
  rtb_Saturation_lh = rtb_Switch_pn >= 16000.0 ? 16000.0 : rtb_Switch_pn <= 0.0 ?
    0.0 : rtb_Switch_pn;

  /* S-Function (motohawk_sfun_data_write): '<S841>/motohawk_data_write' */
  /* Write to Data Storage as scalar: MaxInputCurrent_Timer */
  {
    MaxInputCurrent_Timer_DataStore() = rtb_Saturation_lh;
  }

  /* Saturate: '<S842>/Saturation' */
  rtb_Saturation_j = rtb_DataTypeConversion3 >= 16000.0 ? 16000.0 :
    rtb_DataTypeConversion3 <= 0.0 ? 0.0 : rtb_DataTypeConversion3;

  /* S-Function (motohawk_sfun_data_write): '<S842>/motohawk_data_write' */
  /* Write to Data Storage as scalar: MaxOutputCurrent_Timer */
  {
    MaxOutputCurrent_Timer_DataStore() = rtb_Saturation_j;
  }

  /* Saturate: '<S823>/Saturation' */
  rtb_Saturation_c = rtb_DataTypeConversion4 >= 16000.0 ? 16000.0 :
    rtb_DataTypeConversion4 <= 0.0 ? 0.0 : rtb_DataTypeConversion4;

  /* S-Function (motohawk_sfun_data_write): '<S823>/motohawk_data_write' */
  /* Write to Data Storage as scalar: MotorEnable_Timer */
  {
    MotorEnable_Timer_DataStore() = rtb_Saturation_c;
  }

  /* Logic: '<S537>/Logical Operator' incorporates:
   *  Constant: '<S820>/Constant'
   *  RelationalOperator: '<S820>/Compare'
   *  S-Function (motohawk_sfun_data_read): '<S537>/motohawk_data_read4'
   *  S-Function (motohawk_sfun_data_read): '<S537>/motohawk_data_read5'
   */
  rtb_LogicalOperator5 = (Eaton_Plugged_In_DataStore() ||
    (Hybrid_State_DataStore() >= 1));

  /* Logic: '<S537>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S537>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s537_VSC_DCDCEnable = ((rtb_LogicalOperator5 &&
    Vehicle_Ready_DataStore()));

  /* If: '<S824>/If' incorporates:
   *  Inport: '<S843>/In1'
   *  Inport: '<S844>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S824>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S824>/override_enable'
   */
  if ((VSC_DCDCEnable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S824>/NewValue' incorporates:
     *  ActionPort: '<S843>/Action Port'
     */
    rtb_Merge_hz = (VSC_DCDCEnable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S843>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(408);
    }

    /* End of Outputs for SubSystem: '<S824>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S824>/OldValue' incorporates:
     *  ActionPort: '<S844>/Action Port'
     */
    rtb_Merge_hz = Mooventure2016_Rev5_B.s537_VSC_DCDCEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S844>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(409);
    }

    /* End of Outputs for SubSystem: '<S824>/OldValue' */
  }

  /* End of If: '<S824>/If' */

  /* If: '<S825>/If' incorporates:
   *  Inport: '<S845>/In1'
   *  Inport: '<S846>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S537>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S825>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S825>/override_enable'
   */
  if ((VSC_DCOutputVoltageCmd_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S825>/NewValue' incorporates:
     *  ActionPort: '<S845>/Action Port'
     */
    rtb_Merge_je = (VSC_DCOutputVoltageCmd_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S845>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(410);
    }

    /* End of Outputs for SubSystem: '<S825>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S825>/OldValue' incorporates:
     *  ActionPort: '<S846>/Action Port'
     */
    rtb_Merge_je = (VSC_DCOutputVoltage_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S846>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(411);
    }

    /* End of Outputs for SubSystem: '<S825>/OldValue' */
  }

  /* End of If: '<S825>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S537>/Send CAN Messages3' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (99500U)
         )) {
      /* 0x628 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        if (rtb_Merge_je < 14.2000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_je > 39.7000000000F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)((rtb_Merge_je - (14.2000000000F)) * (10.0000000000F));
        }

        tmp1 = (uint8_T)(rtb_Merge_hz != 0);
        msg_data[0] = ((((uint8_T *)(&tmp1))[0] & 0x00000001)) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[2] = 0 ;
        msg_data[3] = 0 ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(0, 0x628UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_probe): '<S537>/motohawk_probe1' */
  (VSC_DCOutputVoltageCmd_Prb_DataStore()) = (VSC_DCOutputVoltage_Cal_DataStore());

  /* If: '<S835>/If' incorporates:
   *  Inport: '<S865>/In1'
   *  Inport: '<S866>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S537>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S835>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S835>/override_enable'
   */
  if ((IPT_Freq_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S835>/NewValue' incorporates:
     *  ActionPort: '<S865>/Action Port'
     */
    Mooventure2016_Rev5_B.s835_Merge = (IPT_Freq_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S865>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(430);
    }

    /* End of Outputs for SubSystem: '<S835>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S835>/OldValue' incorporates:
     *  ActionPort: '<S866>/Action Port'
     */
    Mooventure2016_Rev5_B.s835_Merge = (IPT_Frequency_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S866>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(431);
    }

    /* End of Outputs for SubSystem: '<S835>/OldValue' */
  }

  /* End of If: '<S835>/If' */

  /* If: '<S836>/If' incorporates:
   *  Inport: '<S867>/In1'
   *  Inport: '<S868>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S537>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S836>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S836>/override_enable'
   */
  if ((IPT_DutyCycle_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S836>/NewValue' incorporates:
     *  ActionPort: '<S867>/Action Port'
     */
    Mooventure2016_Rev5_B.s836_Merge = (IPT_DutyCycle_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S867>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(432);
    }

    /* End of Outputs for SubSystem: '<S836>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S836>/OldValue' incorporates:
     *  ActionPort: '<S868>/Action Port'
     */
    Mooventure2016_Rev5_B.s836_Merge = (IPT_Duty_Cycle_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S868>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(433);
    }

    /* End of Outputs for SubSystem: '<S836>/OldValue' */
  }

  /* End of If: '<S836>/If' */

  /* DataTypeConversion: '<S537>/Data Type Conversion1' */
  if (rtIsNaN(Mooventure2016_Rev5_B.s836_Merge) || rtIsInf
      (Mooventure2016_Rev5_B.s836_Merge)) {
    rtb_UnitDelay_m = 0.0;
  } else {
    rtb_UnitDelay_m = fmod(floor(Mooventure2016_Rev5_B.s836_Merge), 65536.0);
  }

  rtb_DataTypeConversion1_o = (int16_T)(rtb_UnitDelay_m < 0.0 ? (int16_T)
    -(int16_T)(uint16_T)-rtb_UnitDelay_m : (int16_T)(uint16_T)rtb_UnitDelay_m);

  /* End of DataTypeConversion: '<S537>/Data Type Conversion1' */

  /* DataTypeConversion: '<S537>/Data Type Conversion2' */
  if (rtIsNaN(Mooventure2016_Rev5_B.s835_Merge) || rtIsInf
      (Mooventure2016_Rev5_B.s835_Merge)) {
    rtb_UnitDelay_m = 0.0;
  } else {
    rtb_UnitDelay_m = fmod(floor(Mooventure2016_Rev5_B.s835_Merge),
      4.294967296E+9);
  }

  rtb_DataTypeConversion2_n = rtb_UnitDelay_m < 0.0 ? (uint32_T)-(int32_T)
    (uint32_T)-rtb_UnitDelay_m : (uint32_T)rtb_UnitDelay_m;

  /* End of DataTypeConversion: '<S537>/Data Type Conversion2' */

  /* Sum: '<S85>/Add2' incorporates:
   *  UnitDelay: '<S85>/Unit Delay1'
   */
  rtb_Switch_pn = Mooventure2016_Rev5_B.s241_Sum1 -
    Mooventure2016_Rev5_DWork.s85_UnitDelay1_DSTATE;

  /* Abs: '<S85>/Abs1' */
  rtb_Switch_pn = fabs(rtb_Switch_pn);

  /* RelationalOperator: '<S85>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S85>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_c = ((rtb_Switch_pn >=
    (Blend_Valve_Sensor_B_Intermittent_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S85>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_B_Intermittent */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(12, rtb_RelationalOperator1_c);
    UpdateFault(12);
  }

  /* RelationalOperator: '<S85>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S85>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_g = ((Mooventure2016_Rev5_B.s241_Sum1 <
    (Blend_Valve_Sensor_B_Low_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S85>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_B_Low_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(13, rtb_RelationalOperator5_g);
    UpdateFault(13);
  }

  /* Sum: '<S85>/Add1' incorporates:
   *  UnitDelay: '<S85>/Unit Delay'
   */
  rtb_Switch_pn = Mooventure2016_Rev5_B.s242_Sum1 -
    Mooventure2016_Rev5_DWork.s85_UnitDelay_DSTATE;

  /* Abs: '<S85>/Abs' */
  rtb_Switch_pn = fabs(rtb_Switch_pn);

  /* RelationalOperator: '<S85>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S85>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_mu = ((rtb_Switch_pn >=
    (Blend_Valve_Sensor_A_Intermittent_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S85>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_A_Intermittent */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(9, rtb_RelationalOperator2_mu);
    UpdateFault(9);
  }

  /* RelationalOperator: '<S85>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S85>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_ih = ((Mooventure2016_Rev5_B.s242_Sum1 <
    (Blend_Valve_Sensor_A_Low_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S85>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_A_Low_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(10, rtb_RelationalOperator3_ih);
    UpdateFault(10);
  }

  /* RelationalOperator: '<S85>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S85>/motohawk_calibration4'
   */
  rtb_RelationalOperator4 = ((Mooventure2016_Rev5_B.s242_Sum1 >
    (Blend_Valve_Sensor_A_High_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S85>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_A_High_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(8, rtb_RelationalOperator4);
    UpdateFault(8);
  }

  /* RelationalOperator: '<S85>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S85>/motohawk_calibration6'
   */
  rtb_RelationalOperator6 = ((Mooventure2016_Rev5_B.s241_Sum1 >
    (Blend_Valve_Sensor_B_High_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S85>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_B_High_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(11, rtb_RelationalOperator6);
    UpdateFault(11);
  }

  /* S-Function Block: <S89>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s89_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_iy = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S89>/Switch' incorporates:
   *  Constant: '<S89>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S89>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S89>/motohawk_delta_time'
   *  Sum: '<S89>/Sum'
   */
  if (Mooventure2016_Rev5_B.s532_DataTypeConversion5) {
    rtb_Switch_pn = rtb_motohawk_delta_time_iy + TimeSinceRun1_DataStore();
  } else {
    rtb_Switch_pn = 0.0;
  }

  /* End of Switch: '<S89>/Switch' */
  /* Logic: '<S85>/Logical Operator' incorporates:
   *  RelationalOperator: '<S85>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S85>/motohawk_calibration'
   */
  rtb_LogicalOperator_o = (((rtb_Switch_pn >
    (Blend_Valve_A_No_Response_Fault_DataStore())) &&
    Mooventure2016_Rev5_B.s532_DataTypeConversion5));

  /* S-Function (motohawk_sfun_fault_def): '<S85>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Blend_Valve_A_No_Response */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(6, rtb_LogicalOperator_o);
    UpdateFault(6);
  }

  /* Saturate: '<S89>/Saturation' */
  rtb_Saturation_o = rtb_Switch_pn >= 16000.0 ? 16000.0 : rtb_Switch_pn <= 0.0 ?
    0.0 : rtb_Switch_pn;

  /* S-Function (motohawk_sfun_data_write): '<S89>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceRun1 */
  {
    TimeSinceRun1_DataStore() = rtb_Saturation_o;
  }

  /* S-Function Block: <S90>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s90_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_o5 = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S90>/Switch' incorporates:
   *  Constant: '<S90>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S90>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S90>/motohawk_delta_time'
   *  Sum: '<S90>/Sum'
   */
  if (Mooventure2016_Rev5_B.s532_DataTypeConversion1) {
    rtb_Switch_pn = rtb_motohawk_delta_time_o5 + TimeSinceRun2_DataStore();
  } else {
    rtb_Switch_pn = 0.0;
  }

  /* End of Switch: '<S90>/Switch' */
  /* Logic: '<S85>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S85>/Relational Operator7'
   *  S-Function (motohawk_sfun_calibration): '<S85>/motohawk_calibration7'
   */
  rtb_LogicalOperator1_m = (((rtb_Switch_pn >
    (Blend_Valve_B_No_Response_Fault_DataStore())) &&
    Mooventure2016_Rev5_B.s532_DataTypeConversion1));

  /* S-Function (motohawk_sfun_fault_def): '<S85>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Blend_Valve_B_No_Response */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(7, rtb_LogicalOperator1_m);
    UpdateFault(7);
  }

  /* Saturate: '<S90>/Saturation' */
  rtb_Saturation_d = rtb_Switch_pn >= 16000.0 ? 16000.0 : rtb_Switch_pn <= 0.0 ?
    0.0 : rtb_Switch_pn;

  /* S-Function (motohawk_sfun_data_write): '<S90>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceRun2 */
  {
    TimeSinceRun2_DataStore() = rtb_Saturation_d;
  }

  /* S-Function (motohawk_sfun_data_read): '<S80>/motohawk_data_read' */
  rtb_motohawk_data_read_mb = ChargeEnable_DataStore();

  /* If: '<S361>/If' incorporates:
   *  Inport: '<S373>/In1'
   *  Inport: '<S374>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S361>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S361>/override_enable'
   */
  if ((Fault_Severity_Indicator_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S361>/NewValue' incorporates:
     *  ActionPort: '<S373>/Action Port'
     */
    rtb_Merge_ck = (Fault_Severity_Indicator_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S373>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(128);
    }

    /* End of Outputs for SubSystem: '<S361>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S361>/OldValue' incorporates:
     *  ActionPort: '<S374>/Action Port'
     */
    rtb_Merge_ck = Mooventure2016_Rev5_B.s194_FaultSeverityIndicator;

    /* S-Function (motohawk_sfun_code_cover): '<S374>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(129);
    }

    /* End of Outputs for SubSystem: '<S361>/OldValue' */
  }

  /* End of If: '<S361>/If' */

  /* If: '<S366>/If' incorporates:
   *  Inport: '<S383>/In1'
   *  Inport: '<S384>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S366>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S366>/override_enable'
   */
  if ((Ignition_Status_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S366>/NewValue' incorporates:
     *  ActionPort: '<S383>/Action Port'
     */
    rtb_LogicalOperator5 = (Ignition_Status_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S383>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(138);
    }

    /* End of Outputs for SubSystem: '<S366>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S366>/OldValue' incorporates:
     *  ActionPort: '<S384>/Action Port'
     */
    rtb_LogicalOperator5 = Mooventure2016_Rev5_B.s194_IgnitionStatus;

    /* S-Function (motohawk_sfun_code_cover): '<S384>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(139);
    }

    /* End of Outputs for SubSystem: '<S366>/OldValue' */
  }

  /* End of If: '<S366>/If' */

  /* If: '<S372>/If' incorporates:
   *  Inport: '<S395>/In1'
   *  Inport: '<S396>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S372>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S372>/override_enable'
   */
  if ((Input_Voltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S372>/NewValue' incorporates:
     *  ActionPort: '<S395>/Action Port'
     */
    rtb_UnitDelay_o = (Input_Voltage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S395>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(150);
    }

    /* End of Outputs for SubSystem: '<S372>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S372>/OldValue' incorporates:
     *  ActionPort: '<S396>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s194_InputVoltage;

    /* S-Function (motohawk_sfun_code_cover): '<S396>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(151);
    }

    /* End of Outputs for SubSystem: '<S372>/OldValue' */
  }

  /* End of If: '<S372>/If' */

  /* If: '<S425>/If' incorporates:
   *  Inport: '<S461>/In1'
   *  Inport: '<S462>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S425>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S425>/override_enable'
   */
  if ((IPT_HVDC_Voltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S425>/NewValue' incorporates:
     *  ActionPort: '<S461>/Action Port'
     */
    Mooventure2016_Rev5_B.s425_Merge = (IPT_HVDC_Voltage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S461>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs13/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(176);
    }

    /* End of Outputs for SubSystem: '<S425>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S425>/OldValue' incorporates:
     *  ActionPort: '<S462>/Action Port'
     */
    Mooventure2016_Rev5_B.s425_Merge =
      Mooventure2016_Rev5_B.s196_IPT_HVDCVoltage;

    /* S-Function (motohawk_sfun_code_cover): '<S462>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs13/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(177);
    }

    /* End of Outputs for SubSystem: '<S425>/OldValue' */
  }

  /* End of If: '<S425>/If' */

  /* Outputs for Enabled SubSystem: '<S80>/Charger' incorporates:
   *  EnablePort: '<S86>/Enable'
   */
  if (rtb_motohawk_data_read_mb) {
    /* RelationalOperator: '<S86>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S86>/motohawk_calibration1'
     */
    rtb_RelationalOperator1_j = ((Mooventure2016_Rev5_B.s367_Merge <=
      (Charger_Derated_Under_Temperature_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S86>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: Charger_Derated_Under_Temperature */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(22, rtb_RelationalOperator1_j);
      UpdateFault(22);
    }

    /* S-Function (motohawk_sfun_fault_def): '<S86>/motohawk_fault_def10' */

    /* Set Fault Suspected Status: Charger_Internal_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(23, rtb_Merge_ck);
      UpdateFault(23);
    }

    /* RelationalOperator: '<S86>/Relational Operator12' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S86>/motohawk_calibration9'
     */
    rtb_RelationalOperator12_h = ((rtb_UnitDelay_o <
      (Charger_Line_Voltage_Too_Low_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S86>/motohawk_fault_def11' */

    /* Set Fault Suspected Status: Charger_Line_Voltage_Too_Low */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(24, rtb_RelationalOperator12_h);
      UpdateFault(24);
    }

    /* RelationalOperator: '<S86>/Relational Operator11' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S86>/motohawk_calibration10'
     */
    rtb_RelationalOperator11_l = ((rtb_UnitDelay_o >
      (Charger_Line_Votlage_Too_High_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S86>/motohawk_fault_def12' */

    /* Set Fault Suspected Status: Charger_Line_Votlage_Too_High */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(25, rtb_RelationalOperator11_l);
      UpdateFault(25);
    }

    /* RelationalOperator: '<S86>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S86>/motohawk_calibration2'
     */
    rtb_RelationalOperator2_i = ((Mooventure2016_Rev5_B.s367_Merge >=
      (Charger_Derated_Over_Temperature_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S86>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: Charger_Derated_Over_Temperature */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(21, rtb_RelationalOperator2_i);
      UpdateFault(21);
    }

    /* RelationalOperator: '<S86>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S86>/motohawk_calibration3'
     */
    rtb_RelationalOperator3_jh = (((MaxAmpCal_DataStore()) >
      (Charger_Requested_Current_Too_High_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S86>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: Charger_Requested_Current_Too_High */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(28, rtb_RelationalOperator3_jh);
      UpdateFault(28);
    }

    /* RelationalOperator: '<S86>/Relational Operator4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S86>/motohawk_calibration4'
     */
    rtb_LogicalOperator5_c = ((MaxVoltageCal_DataStore()) <
      (Charger_Requested_Voltage_Out_of_Bounds_Fault_Lower_DataStore()));

    /* Logic: '<S86>/Logical Operator' incorporates:
     *  RelationalOperator: '<S86>/Relational Operator5'
     *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S86>/motohawk_calibration5'
     */
    rtb_LogicalOperator_hw = ((rtb_LogicalOperator5_c ||
      ((MaxVoltageCal_DataStore()) >
       (Charger_Requested_Voltage_Out_of_Bounds_Fault_Upper_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S86>/motohawk_fault_def4' */

    /* Set Fault Suspected Status: Charger_Requested_Voltage_Out_of_Bounds */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(29, rtb_LogicalOperator_hw);
      UpdateFault(29);
    }

    /* RelationalOperator: '<S86>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S86>/motohawk_data_read'
     */
    rtb_RelationalOperator_lk = ((ChargeEnable_DataStore() >
      rtb_LogicalOperator5));

    /* S-Function (motohawk_sfun_fault_def): '<S86>/motohawk_fault_def5' */

    /* Set Fault Suspected Status: Charger_Requested_But_No_Key_Singal */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(27, rtb_RelationalOperator_lk);
      UpdateFault(27);
    }

    /* Logic: '<S86>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S86>/Relational Operator6'
     *  S-Function (motohawk_sfun_calibration): '<S86>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_data_read): '<S86>/motohawk_data_read'
     */
    rtb_LogicalOperator1_lt = ((ChargeEnable_DataStore() &&
      (Mooventure2016_Rev5_B.s425_Merge <
       (Charger_Requested_But_No_High_Voltage_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S86>/motohawk_fault_def6' */

    /* Set Fault Suspected Status: Charger_Requested_But_No_High_Voltage */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(26, rtb_LogicalOperator1_lt);
      UpdateFault(26);
    }

    /* RelationalOperator: '<S86>/Relational Operator8' */
    rtb_RelationalOperator8_e = ((rtb_Merge_hn > rtb_Merge_lf));

    /* S-Function (motohawk_sfun_fault_def): '<S86>/motohawk_fault_def7' */

    /* Set Fault Suspected Status: Charger_Amperage_Draw_Greater_Then_Supply */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(20, rtb_RelationalOperator8_e);
      UpdateFault(20);
    }

    /* RelationalOperator: '<S86>/Relational Operator9' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S86>/motohawk_calibration7'
     */
    rtb_RelationalOperator9_k = ((Mooventure2016_Rev5_B.s425_Merge <
      (Battery_Voltage_Too_Low_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S86>/motohawk_fault_def8' */

    /* Set Fault Suspected Status: Battery_Voltage_Too_Low */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(5, rtb_RelationalOperator9_k);
      UpdateFault(5);
    }

    /* RelationalOperator: '<S86>/Relational Operator10' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S86>/motohawk_calibration8'
     */
    rtb_RelationalOperator10_b = ((Mooventure2016_Rev5_B.s425_Merge >
      (Battery_Voltage_Too_High_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S86>/motohawk_fault_def9' */

    /* Set Fault Suspected Status: Battery_Voltage_Too_High */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(4, rtb_RelationalOperator10_b);
      UpdateFault(4);
    }
  }

  /* End of Outputs for SubSystem: '<S80>/Charger' */
  /* S-Function Block: <S233>/motohawk_ain4 Resource: DCDC_Conveter */
  Mooventure2016_Rev5_B.s233_motohawk_ain4_o1 = DCDC_Conveter_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S252>/If' incorporates:
   *  Inport: '<S253>/In1'
   *  Inport: '<S254>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S252>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S252>/override_enable'
   */
  if ((DCDC_Status_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S252>/NewValue' incorporates:
     *  ActionPort: '<S253>/Action Port'
     */
    rtb_Merge_c1 = ((uint16_T)(DCDC_Status_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S253>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(72);
    }

    /* End of Outputs for SubSystem: '<S252>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S252>/OldValue' incorporates:
     *  ActionPort: '<S254>/Action Port'
     */
    rtb_Merge_c1 = Mooventure2016_Rev5_B.s233_motohawk_ain4_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S254>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(73);
    }

    /* End of Outputs for SubSystem: '<S252>/OldValue' */
  }

  /* End of If: '<S252>/If' */

  /* RelationalOperator: '<S87>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S87>/motohawk_calibration1'
   */
  rtb_Eaton_Plugged_In = ((real_T)rtb_Merge_c1 <
    (DCDC_Converter_Not_Running_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S87>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: DCDC_Converter_Not_Running */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(38, rtb_Eaton_Plugged_In);
    UpdateFault(38);
  }

  /* Logic: '<S88>/Logical Operator' */
  rtb_LogicalOperator5 = (rtb_RelationalOperator2_id || rtb_LogicalOperator2_c ||
    rtb_Compare_nd || rtb_RelationalOperator_jg);

  /* Outputs for Triggered SubSystem: '<S88>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S91>/Trigger'
   */
  if (rtb_LogicalOperator5 &&
      (Mooventure2016_Rev5_PrevZCSigState.TriggeredSubsystem_Trig_ZCE !=
       POS_ZCSIG)) {
    /* S-Function (motohawk_sfun_data_write): '<S91>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TempReading */
    {
      TempReading_DataStore() = Mooventure2016_Rev5_B.s235_temp_reading;
    }
  }

  Mooventure2016_Rev5_PrevZCSigState.TriggeredSubsystem_Trig_ZCE = (uint8_T)
    (rtb_LogicalOperator5 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

  /* End of Outputs for SubSystem: '<S88>/Triggered Subsystem' */
  /* Sum: '<S88>/Add' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S88>/motohawk_calibration'
   */
  rtb_UnitDelay_o = (Temp_Fault_Hyst_DataStore()) +
    Mooventure2016_Rev5_B.s235_temp_reading;

  /* Logic: '<S88>/Logical Operator2' incorporates:
   *  Logic: '<S88>/Logical Operator1'
   *  RelationalOperator: '<S88>/Relational Operator'
   *  S-Function (motohawk_sfun_data_read): '<S88>/motohawk_data_read'
   */
  rtb_LogicalOperator2_p = (((!(rtb_UnitDelay_o >= TempReading_DataStore())) &&
    rtb_LogicalOperator5));

  /* S-Function (motohawk_sfun_fault_def): '<S88>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: HV_Heater_Poor_Performance */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(66, rtb_LogicalOperator2_p);
    UpdateFault(66);
  }

  /* RelationalOperator: '<S88>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S88>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_p = ((Mooventure2016_Rev5_B.s235_temp_reading >
    (HV_Heater_Over_Temperature_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S88>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: HV_Heater_Over_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(65, rtb_RelationalOperator1_p);
    UpdateFault(65);
  }

  /* Sum: '<S88>/Add1' incorporates:
   *  UnitDelay: '<S88>/Unit Delay'
   */
  rtb_Switch_pn = (real_T)rtb_Heater_Temp_Raw -
    Mooventure2016_Rev5_DWork.s88_UnitDelay_DSTATE;

  /* Abs: '<S88>/Abs' */
  rtb_Switch_pn = fabs(rtb_Switch_pn);

  /* RelationalOperator: '<S88>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S88>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_d = ((rtb_Switch_pn >=
    (HV_Heater_Temperature_Sensor_A_Intermittent_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S88>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: HV_Heater_Temperature_Sensor_A_Intermittent */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(68, rtb_RelationalOperator2_d);
    UpdateFault(68);
  }

  /* RelationalOperator: '<S88>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S88>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_h = (((real_T)rtb_Heater_Temp_Raw <
    (HV_Heater_Temperature_Sensor_A_Low_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S88>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: HV_Heater_Temperature_Sensor_A_Low_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(69, rtb_RelationalOperator3_h);
    UpdateFault(69);
  }

  /* RelationalOperator: '<S88>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S88>/motohawk_calibration4'
   */
  rtb_RelationalOperator4_m = (((real_T)rtb_Heater_Temp_Raw >
    (HV_Heater_Temperature_Sensor_A_High_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S88>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: HV_Heater_Temperature_Sensor_A_High_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(67, rtb_RelationalOperator4_m);
    UpdateFault(67);
  }

  /* RelationalOperator: '<S92>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S92>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_cg = ((Mooventure2016_Rev5_B.s189_ActiveDTC >
    (HV_Battery_2G_BMS_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S92>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: HV_Battery_2G_BMS_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(54, rtb_RelationalOperator1_cg);
    UpdateFault(54);
  }

  /* RelationalOperator: '<S92>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S92>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_a = ((rtb_Sum1 ==
    (HV_Battery_Too_Low_For_Load_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S92>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: HV_Battery_Too_Low_For_Load */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(63, rtb_RelationalOperator5_a);
    UpdateFault(63);
  }

  /* Logic: '<S92>/Logical Operator' incorporates:
   *  RelationalOperator: '<S92>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S92>/motohawk_calibration3'
   */
  rtb_LogicalOperator_a = (((Mooventure2016_Rev5_B.s261_Merge >
    (HV_Battery_Try_To_Balance_Under_Load_Fault_DataStore())) &&
    Mooventure2016_Rev5_B.s189_CellBalanceingActive));

  /* S-Function (motohawk_sfun_fault_def): '<S92>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: HV_Battery_Try_To_Balance_Under_Load */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(64, rtb_LogicalOperator_a);
    UpdateFault(64);
  }

  /* Sum: '<S92>/Add' */
  rtb_UnitDelay_o = Mooventure2016_Rev5_B.s189_MaxCellVoltage -
    Mooventure2016_Rev5_B.s189_MinCellVoltage;

  /* RelationalOperator: '<S92>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S92>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_la = ((rtb_UnitDelay_o >
    (HV_Battery_Cell_Balancing_Required_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S92>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: HV_Battery_Cell_Balancing_Required_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(57, rtb_RelationalOperator2_la);
    UpdateFault(57);
  }

  /* If: '<S262>/If' incorporates:
   *  Inport: '<S273>/In1'
   *  Inport: '<S274>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S262>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S262>/override_enable'
   */
  if ((Batt_Age_Count_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S262>/NewValue' incorporates:
     *  ActionPort: '<S273>/Action Port'
     */
    rtb_Merge_nu = (Batt_Age_Count_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S273>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(80);
    }

    /* End of Outputs for SubSystem: '<S262>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S262>/OldValue' incorporates:
     *  ActionPort: '<S274>/Action Port'
     */
    rtb_Merge_nu = Mooventure2016_Rev5_B.s189_AgeCount;

    /* S-Function (motohawk_sfun_code_cover): '<S274>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(81);
    }

    /* End of Outputs for SubSystem: '<S262>/OldValue' */
  }

  /* End of If: '<S262>/If' */

  /* RelationalOperator: '<S92>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S92>/motohawk_calibration4'
   */
  rtb_Compare_nd = ((real_T)rtb_Merge_nu >=
                    (HV_Battery_48_Controller_Communication_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S92>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: HV_Battery_48_Controller_Communication_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(55, rtb_Compare_nd);
    UpdateFault(55);
  }

  /* RelationalOperator: '<S92>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S92>/motohawk_calibration6'
   */
  rtb_RelationalOperator6_i = ((rtb_Merge_o0 >
    (HV_Battery_Above_Safe_Charge_Point_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S92>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: HV_Battery_Above_Safe_Charge_Point */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(56, rtb_RelationalOperator6_i);
    UpdateFault(56);
  }

  /* RelationalOperator: '<S93>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S93>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_cc = ((Mooventure2016_Rev5_B.s189_PrechargeState ==
    (HV_Battery_Precharge_Failure_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S93>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: HV_Battery_Precharge_Failure */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(62, rtb_RelationalOperator2_cc);
    UpdateFault(62);
  }

  /* RelationalOperator: '<S94>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S94>/motohawk_calibration3'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s189_MinCellTemperature >
    (HV_Battery_Pack_Low_Temperature_Fault_Low_DataStore()));

  /* Logic: '<S94>/Logical Operator' incorporates:
   *  RelationalOperator: '<S94>/Relational Operator7'
   *  S-Function (motohawk_sfun_calibration): '<S94>/motohawk_calibration4'
   */
  rtb_LogicalOperator_oh = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s189_MinCellTemperature <=
     (HV_Battery_Pack_Low_Temperature_Fault_High_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S94>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: HV_Battery_Pack_Low_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(61, rtb_LogicalOperator_oh);
    UpdateFault(61);
  }

  /* RelationalOperator: '<S94>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S94>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_lg = ((Mooventure2016_Rev5_B.s189_MinCellTemperature <=
                                 
    (HV_Battery_Pack_Below_Operating_Temperature_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S94>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: HV_Battery_Pack_Below_Operating_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(59, rtb_RelationalOperator2_lg);
    UpdateFault(59);
  }

  /* RelationalOperator: '<S94>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S94>/motohawk_calibration5'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s189_MaxCellTemperature >
    (HV_Battery_Pack_High_Temperature_Fault_Low_DataStore()));

  /* Logic: '<S94>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S94>/Relational Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S94>/motohawk_calibration6'
   */
  rtb_LogicalOperator1_aw = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s189_MaxCellTemperature <=
     (HV_Battery_Pack_High_Temperature_Fault_High_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S94>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: HV_Battery_Pack_High_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(60, rtb_LogicalOperator1_aw);
    UpdateFault(60);
  }

  /* RelationalOperator: '<S94>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S94>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_pt = ((Mooventure2016_Rev5_B.s189_MaxCellTemperature >
                                 
    (HV_Battery_Pack_Above_Operating_Temperature_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S94>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: HV_Battery_Pack_Above_Operating_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(58, rtb_RelationalOperator1_pt);
    UpdateFault(58);
  }

  /* If: '<S451>/If' incorporates:
   *  Inport: '<S513>/In1'
   *  Inport: '<S514>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S451>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S451>/override_enable'
   */
  if ((Age_Count_278_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S451>/NewValue' incorporates:
     *  ActionPort: '<S513>/Action Port'
     */
    rtb_Merge_mw2 = (Age_Count_278_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S513>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(228);
    }

    /* End of Outputs for SubSystem: '<S451>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S451>/OldValue' incorporates:
     *  ActionPort: '<S514>/Action Port'
     */
    rtb_Merge_mw2 = Mooventure2016_Rev5_B.s196_AgeCount_m;

    /* S-Function (motohawk_sfun_code_cover): '<S514>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(229);
    }

    /* End of Outputs for SubSystem: '<S451>/OldValue' */
  }

  /* End of If: '<S451>/If' */

  /* RelationalOperator: '<S82>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S82>/motohawk_calibration1'
   */
  rtb_Compare_nd = ((real_T)rtb_Merge_mw2 >=
                    (IPT_Status1_AgeCount_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S82>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: IPT_Status1_AgeCount */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(71, rtb_Compare_nd);
    UpdateFault(71);
  }

  /* If: '<S200>/If' incorporates:
   *  Inport: '<S213>/In1'
   *  Inport: '<S214>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S200>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S200>/override_enable'
   */
  if ((ABS_417_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S200>/NewValue' incorporates:
     *  ActionPort: '<S213>/Action Port'
     */
    rtb_Merge_mw2 = (ABS_417_AgeCount_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S213>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(46);
    }

    /* End of Outputs for SubSystem: '<S200>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S200>/OldValue' incorporates:
     *  ActionPort: '<S214>/Action Port'
     */
    rtb_Merge_mw2 = Mooventure2016_Rev5_B.s187_AgeCount;

    /* S-Function (motohawk_sfun_code_cover): '<S214>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(47);
    }

    /* End of Outputs for SubSystem: '<S200>/OldValue' */
  }

  /* End of If: '<S200>/If' */

  /* RelationalOperator: '<S82>/Relational Operator9' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S82>/motohawk_calibration9'
   */
  rtb_Compare_nd = ((real_T)rtb_Merge_mw2 >=
                    (ABS_Traction_Control_AgeCount_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S82>/motohawk_fault_def10' */

  /* Set Fault Suspected Status: ABS_Traction_Control_AgeCount */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(1, rtb_Compare_nd);
    UpdateFault(1);
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S197>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4269p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4269p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s197_AgeCount + 1) >
        Mooventure2016_Rev5_B.s197_AgeCount)
      Mooventure2016_Rev5_B.s197_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint16_T tmp2 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[1] & 0x00000001)) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[0] & 0x000000FE) >> 1) ;
      ((uint8_T *)(&tmp1))[1] = ((msg_data[1] & 0x000000FE) >> 1) | ((msg_data[0]
        & 0x00000001) << 7) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp2))[1] = ((msg_data[3])) ;
      Mooventure2016_Rev5_B.s197_STR_WHL_ANGLE_CNTR_FND = (real_T) tmp0;
      Mooventure2016_Rev5_B.s197_STR_WHL_ANGLE = (((real_T) tmp1) / ((real_T) 10))
        + ((real_T) -1000);
      Mooventure2016_Rev5_B.s197_RELATIVE_STR_WHL_ANGLE = (((real_T) tmp2) /
        ((real_T) 10)) + ((real_T) -2000);
      Mooventure2016_Rev5_B.s197_AgeCount = 0;
    }
  }

  /* If: '<S519>/If' incorporates:
   *  Inport: '<S525>/In1'
   *  Inport: '<S526>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S519>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S519>/override_enable'
   */
  if ((PSCM_80_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S519>/NewValue' incorporates:
     *  ActionPort: '<S525>/Action Port'
     */
    rtb_Merge_mw2 = (PSCM_80_AgeCount_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S525>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(236);
    }

    /* End of Outputs for SubSystem: '<S519>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S519>/OldValue' incorporates:
     *  ActionPort: '<S526>/Action Port'
     */
    rtb_Merge_mw2 = Mooventure2016_Rev5_B.s197_AgeCount;

    /* S-Function (motohawk_sfun_code_cover): '<S526>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(237);
    }

    /* End of Outputs for SubSystem: '<S519>/OldValue' */
  }

  /* End of If: '<S519>/If' */

  /* RelationalOperator: '<S82>/Relational Operator10' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S82>/motohawk_calibration10'
   */
  rtb_Compare_nd = ((real_T)rtb_Merge_mw2 >=
                    (Steering_Wheel_AgeCount_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S82>/motohawk_fault_def11' */

  /* Set Fault Suspected Status: Steering_Wheel_AgeCount */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(81, rtb_Compare_nd);
    UpdateFault(81);
  }

  /* If: '<S432>/If' incorporates:
   *  Inport: '<S475>/In1'
   *  Inport: '<S476>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S432>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S432>/override_enable'
   */
  if ((Age_Count_260_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S432>/NewValue' incorporates:
     *  ActionPort: '<S475>/Action Port'
     */
    rtb_Merge_mw2 = (Age_Count_260_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S475>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(190);
    }

    /* End of Outputs for SubSystem: '<S432>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S432>/OldValue' incorporates:
     *  ActionPort: '<S476>/Action Port'
     */
    rtb_Merge_mw2 = Mooventure2016_Rev5_B.s196_AgeCount;

    /* S-Function (motohawk_sfun_code_cover): '<S476>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(191);
    }

    /* End of Outputs for SubSystem: '<S432>/OldValue' */
  }

  /* End of If: '<S432>/If' */

  /* RelationalOperator: '<S82>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S82>/motohawk_calibration2'
   */
  rtb_Compare_nd = ((real_T)rtb_Merge_mw2 >=
                    (IPT_Status2_AgeCount_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S82>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: IPT_Status2_AgeCount */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(72, rtb_Compare_nd);
    UpdateFault(72);
  }

  /* RelationalOperator: '<S82>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S82>/motohawk_calibration'
   */
  rtb_Compare_nd = ((real_T)rtb_Merge_nu >= (Battery_AgeCount_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S82>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Battery_AgeCount */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(3, rtb_Compare_nd);
    UpdateFault(3);
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S196>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4065p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4065p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s196_AgeCount_j + 1) >
        Mooventure2016_Rev5_B.s196_AgeCount_j)
      Mooventure2016_Rev5_B.s196_AgeCount_j++;
    if (msg_valid) {
      int8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint16_T tmp4 = 0;
      uint8_T tmp5 = 0;
      uint8_T tmp6 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[7])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[6] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[5] & 0x00000001)) ;
      ((uint8_T *)(&tmp3))[0] = ((msg_data[4])) ;
      ((uint8_T *)(&tmp4))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp4))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp5))[0] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp6))[0] = ((msg_data[3])) ;
      Mooventure2016_Rev5_B.s196_IPT_DCErrorCategory = (real_T) tmp0;
      Mooventure2016_Rev5_B.s196_IPT_DCLVOn = (real_T) tmp1;
      Mooventure2016_Rev5_B.s196_IPT_DCLVGeneralError = (real_T) tmp2;
      Mooventure2016_Rev5_B.s196_IPT_DCLVMaxPower = ((real_T) tmp3) * ((real_T)
        20);
      Mooventure2016_Rev5_B.s196_IPT_DCLVBusCurrent = (real_T) tmp4;
      Mooventure2016_Rev5_B.s196_IPT_DCLVBusVoltage = ((real_T) tmp5) / ((real_T)
        10);
      Mooventure2016_Rev5_B.s196_IPT_DCHVBusCurrent = ((real_T) tmp6) / ((real_T)
        10);
      Mooventure2016_Rev5_B.s196_AgeCount_j = 0;
    }
  }

  /* If: '<S438>/If' incorporates:
   *  Inport: '<S487>/In1'
   *  Inport: '<S488>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S438>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S438>/override_enable'
   */
  if ((Age_Count_624_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S438>/NewValue' incorporates:
     *  ActionPort: '<S487>/Action Port'
     */
    rtb_Merge_mw2 = (Age_Count_624_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S487>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs25/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(202);
    }

    /* End of Outputs for SubSystem: '<S438>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S438>/OldValue' incorporates:
     *  ActionPort: '<S488>/Action Port'
     */
    rtb_Merge_mw2 = Mooventure2016_Rev5_B.s196_AgeCount_j;

    /* S-Function (motohawk_sfun_code_cover): '<S488>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs25/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(203);
    }

    /* End of Outputs for SubSystem: '<S438>/OldValue' */
  }

  /* End of If: '<S438>/If' */

  /* RelationalOperator: '<S82>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S82>/motohawk_calibration3'
   */
  rtb_Compare_nd = ((real_T)rtb_Merge_mw2 >= (IPT_DCDC_AgeCount_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S82>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: IPT_DCDC_AgeCount */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(70, rtb_Compare_nd);
    UpdateFault(70);
  }

  /* If: '<S364>/If' incorporates:
   *  Inport: '<S379>/In1'
   *  Inport: '<S380>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S364>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S364>/override_enable'
   */
  if ((Eaton_Charger_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S364>/NewValue' incorporates:
     *  ActionPort: '<S379>/Action Port'
     */
    rtb_Merge_mw2 = (Eaton_Charger_AgeCount_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S379>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(134);
    }

    /* End of Outputs for SubSystem: '<S364>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S364>/OldValue' incorporates:
     *  ActionPort: '<S380>/Action Port'
     */
    rtb_Merge_mw2 = Mooventure2016_Rev5_B.s194_AgeCount;

    /* S-Function (motohawk_sfun_code_cover): '<S380>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(135);
    }

    /* End of Outputs for SubSystem: '<S364>/OldValue' */
  }

  /* End of If: '<S364>/If' */

  /* RelationalOperator: '<S82>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S82>/motohawk_calibration4'
   */
  rtb_Compare_nd = ((real_T)rtb_Merge_mw2 >=
                    (Eaton_Charger_AgeCount_Fault_DataStore()));

  /* RelationalOperator: '<S194>/Relational Operator' incorporates:
   *  Constant: '<S194>/Constant'
   */
  rtb_Eaton_Plugged_In = (rtb_Merge_b0 >= 1.0);

  /* Logic: '<S82>/Logical Operator' */
  rtb_LogicalOperator_h = ((rtb_Compare_nd && rtb_Eaton_Plugged_In));

  /* S-Function (motohawk_sfun_fault_def): '<S82>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Eaton_Charger_AgeCount */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(42, rtb_LogicalOperator_h);
    UpdateFault(42);
  }

  /* If: '<S325>/If' incorporates:
   *  Inport: '<S341>/In1'
   *  Inport: '<S342>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S325>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S325>/override_enable'
   */
  if ((Brakes_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S325>/NewValue' incorporates:
     *  ActionPort: '<S341>/Action Port'
     */
    rtb_Merge_mw2 = (Brakes_AgeCount_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S341>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(108);
    }

    /* End of Outputs for SubSystem: '<S325>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S325>/OldValue' incorporates:
     *  ActionPort: '<S342>/Action Port'
     */
    rtb_Merge_mw2 = Mooventure2016_Rev5_B.s193_AgeCount_j;

    /* S-Function (motohawk_sfun_code_cover): '<S342>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(109);
    }

    /* End of Outputs for SubSystem: '<S325>/OldValue' */
  }

  /* End of If: '<S325>/If' */

  /* RelationalOperator: '<S82>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S82>/motohawk_calibration5'
   */
  rtb_Compare_nd = ((real_T)rtb_Merge_mw2 >= (Brakes_AgeCount_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S82>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Brakes_AgeCount */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(18, rtb_Compare_nd);
    UpdateFault(18);
  }

  /* If: '<S328>/If' incorporates:
   *  Inport: '<S347>/In1'
   *  Inport: '<S348>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S328>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S328>/override_enable'
   */
  if ((Transmission_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S328>/NewValue' incorporates:
     *  ActionPort: '<S347>/Action Port'
     */
    rtb_Merge_nu = (Transmission_AgeCount_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S347>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(114);
    }

    /* End of Outputs for SubSystem: '<S328>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S328>/OldValue' incorporates:
     *  ActionPort: '<S348>/Action Port'
     */
    rtb_Merge_nu = Mooventure2016_Rev5_B.s193_AgeCount;

    /* S-Function (motohawk_sfun_code_cover): '<S348>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(115);
    }

    /* End of Outputs for SubSystem: '<S328>/OldValue' */
  }

  /* End of If: '<S328>/If' */

  /* RelationalOperator: '<S82>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S82>/motohawk_calibration6'
   */
  rtb_Compare_nd = ((real_T)rtb_Merge_nu >=
                    (Transmission_AgeCount_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S82>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Transmission_AgeCount */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(91, rtb_Compare_nd);
    UpdateFault(91);
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S187>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3140p0002_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3140p0002_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s187_AgeCount_b + 1) >
        Mooventure2016_Rev5_B.s187_AgeCount_b)
      Mooventure2016_Rev5_B.s187_AgeCount_b++;
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint8_T tmp2 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[4])) ;
      Mooventure2016_Rev5_B.s187_LF_Wheel_Rolling_Count = (real_T) tmp0;
      Mooventure2016_Rev5_B.s187_RT_Wheel_Rolling_Count = (real_T) tmp1;
      Mooventure2016_Rev5_B.s187_Wheel_Rolling_Timestamp = (real_T) tmp2;
      Mooventure2016_Rev5_B.s187_AgeCount_b = 0;
    }
  }

  /* If: '<S202>/If' incorporates:
   *  Inport: '<S217>/In1'
   *  Inport: '<S218>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S202>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S202>/override_enable'
   */
  if ((ABS_217_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S202>/NewValue' incorporates:
     *  ActionPort: '<S217>/Action Port'
     */
    rtb_Merge_mw2 = (ABS_217_AgeCount_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S217>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(50);
    }

    /* End of Outputs for SubSystem: '<S202>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S202>/OldValue' incorporates:
     *  ActionPort: '<S218>/Action Port'
     */
    rtb_Merge_mw2 = Mooventure2016_Rev5_B.s187_AgeCount_b;

    /* S-Function (motohawk_sfun_code_cover): '<S218>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(51);
    }

    /* End of Outputs for SubSystem: '<S202>/OldValue' */
  }

  /* End of If: '<S202>/If' */

  /* RelationalOperator: '<S82>/Relational Operator7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S82>/motohawk_calibration7'
   */
  rtb_Compare_nd = ((real_T)rtb_Merge_mw2 >=
                    (ABS_ToneRing_AgeCount_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S82>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: ABS_ToneRing_AgeCount */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(0, rtb_Compare_nd);
    UpdateFault(0);
  }

  /* If: '<S205>/If' incorporates:
   *  Inport: '<S223>/In1'
   *  Inport: '<S224>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S205>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S205>/override_enable'
   */
  if ((ABS_4B0_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S205>/NewValue' incorporates:
     *  ActionPort: '<S223>/Action Port'
     */
    rtb_Merge_mw2 = (ABS_4B0_AgeCount_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S223>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(56);
    }

    /* End of Outputs for SubSystem: '<S205>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S205>/OldValue' incorporates:
     *  ActionPort: '<S224>/Action Port'
     */
    rtb_Merge_mw2 = Mooventure2016_Rev5_B.s187_AgeCount_n;

    /* S-Function (motohawk_sfun_code_cover): '<S224>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(57);
    }

    /* End of Outputs for SubSystem: '<S205>/OldValue' */
  }

  /* End of If: '<S205>/If' */

  /* RelationalOperator: '<S82>/Relational Operator8' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S82>/motohawk_calibration8'
   */
  rtb_Compare_nd = ((real_T)rtb_Merge_mw2 >=
                    (ABS_WheelSpeed_AgeCount_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S82>/motohawk_fault_def9' */

  /* Set Fault Suspected Status: ABS_WheelSpeed_AgeCount */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(2, rtb_Compare_nd);
    UpdateFault(2);
  }

  /* S-Function (motohawk_sfun_can_bus_status): '<S82>/CAN Fault Status' */
  {
    CAN_1_Error_Status_Get(&Mooventure2016_Rev5_B.s82_CANFaultStatus_o1,
      &Mooventure2016_Rev5_B.s82_CANFaultStatus_o2,
      &Mooventure2016_Rev5_B.s82_CANFaultStatus_o3);
  }

  /* S-Function (motohawk_sfun_can_bus_status): '<S82>/CAN Fault Status1' */
  {
    CAN_2_Error_Status_Get(&Mooventure2016_Rev5_B.s82_CANFaultStatus1_o1,
      &Mooventure2016_Rev5_B.s82_CANFaultStatus1_o2,
      &Mooventure2016_Rev5_B.s82_CANFaultStatus1_o3);
  }

  /* S-Function (motohawk_sfun_can_bus_status): '<S82>/CAN Fault Status2' */
  {
    CAN_3_Error_Status_Get(&Mooventure2016_Rev5_B.s82_CANFaultStatus2_o1,
      &Mooventure2016_Rev5_B.s82_CANFaultStatus2_o2,
      &Mooventure2016_Rev5_B.s82_CANFaultStatus2_o3);
  }

  /* If: '<S331>/If' incorporates:
   *  Inport: '<S353>/In1'
   *  Inport: '<S354>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S331>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S331>/override_enable'
   */
  if ((Throttle_Position_Raw_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S331>/NewValue' incorporates:
     *  ActionPort: '<S353>/Action Port'
     */
    rtb_Merge_jk = (Throttle_Position_Raw_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S353>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(120);
    }

    /* End of Outputs for SubSystem: '<S331>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S331>/OldValue' incorporates:
     *  ActionPort: '<S354>/Action Port'
     */
    rtb_Merge_jk = Mooventure2016_Rev5_B.s234_DataTypeConversion;

    /* S-Function (motohawk_sfun_code_cover): '<S354>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(121);
    }

    /* End of Outputs for SubSystem: '<S331>/OldValue' */
  }

  /* End of If: '<S331>/If' */

  /* S-Function Block: <S193>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (Throttle_Position_PreIn_DataStore()) = rtb_Merge_jk;
    (Throttle_Position_PreIdx_DataStore()) = TablePrelookup_real_T(rtb_Merge_jk,
      (Throttle_Position_PreIdxArr_DataStore()), 17,
      (Throttle_Position_PreIdx_DataStore()));
    rtb_motohawk_prelookup1 = (Throttle_Position_PreIdx_DataStore());
  }

  /* S-Function Block: <S193>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_Switch_pn = TableInterpolation1D_real_T(rtb_motohawk_prelookup1, (real_T
      *) ((Throttle_Position_TblTbl_DataStore())), 17);
    (Throttle_Position_Tbl_DataStore()) = rtb_Switch_pn;
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S189>/Read CAN Message6' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3354p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3354p0001_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint32_T tmp0 = 0;
      uint8_T tmp1 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp0))[2] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp0))[3] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[4])) ;
      Mooventure2016_Rev5_B.s189_LifeTimeAmpHoursOut = ((real_T) tmp0) /
        ((real_T) 10);
      Mooventure2016_Rev5_B.s189_LTAHI_RollingCounter = (real_T) tmp1;
    }
  }

  /* If: '<S198>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S198>/override_enable'
   */
  if ((RT_Wheel_Rolling_Count_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S198>/NewValue' incorporates:
     *  ActionPort: '<S209>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S209>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(42);
    }

    /* End of Outputs for SubSystem: '<S198>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S198>/OldValue' incorporates:
     *  ActionPort: '<S210>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S210>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(43);
    }

    /* End of Outputs for SubSystem: '<S198>/OldValue' */
  }

  /* End of If: '<S198>/If' */

  /* If: '<S201>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S201>/override_enable'
   */
  if ((Wheel_Rolling_Timestamp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S201>/NewValue' incorporates:
     *  ActionPort: '<S215>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S215>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(48);
    }

    /* End of Outputs for SubSystem: '<S201>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S201>/OldValue' incorporates:
     *  ActionPort: '<S216>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S216>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(49);
    }

    /* End of Outputs for SubSystem: '<S201>/OldValue' */
  }

  /* End of If: '<S201>/If' */

  /* If: '<S204>/If' incorporates:
   *  Inport: '<S221>/In1'
   *  Inport: '<S222>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S204>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S204>/override_enable'
   */
  if ((Rear_left_whl_speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S204>/NewValue' incorporates:
     *  ActionPort: '<S221>/Action Port'
     */
    rtb_Merge_bg = (Rear_left_whl_speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S221>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(54);
    }

    /* End of Outputs for SubSystem: '<S204>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S204>/OldValue' incorporates:
     *  ActionPort: '<S222>/Action Port'
     */
    rtb_Merge_bg = Mooventure2016_Rev5_B.s187_Rear_left_whl_speed;

    /* S-Function (motohawk_sfun_code_cover): '<S222>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(55);
    }

    /* End of Outputs for SubSystem: '<S204>/OldValue' */
  }

  /* End of If: '<S204>/If' */

  /* If: '<S206>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S206>/override_enable'
   */
  if ((LF_Wheel_Rolling_Count_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S206>/NewValue' incorporates:
     *  ActionPort: '<S225>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S225>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(58);
    }

    /* End of Outputs for SubSystem: '<S206>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S206>/OldValue' incorporates:
     *  ActionPort: '<S226>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S226>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(59);
    }

    /* End of Outputs for SubSystem: '<S206>/OldValue' */
  }

  /* End of If: '<S206>/If' */

  /* If: '<S208>/If' incorporates:
   *  Inport: '<S229>/In1'
   *  Inport: '<S230>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S208>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S208>/override_enable'
   */
  if ((Rear_right_whl_speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S208>/NewValue' incorporates:
     *  ActionPort: '<S229>/Action Port'
     */
    rtb_Merge_ko = (Rear_right_whl_speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S229>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(62);
    }

    /* End of Outputs for SubSystem: '<S208>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S208>/OldValue' incorporates:
     *  ActionPort: '<S230>/Action Port'
     */
    rtb_Merge_ko = Mooventure2016_Rev5_B.s187_Rear_right_whl_speed;

    /* S-Function (motohawk_sfun_code_cover): '<S230>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(63);
    }

    /* End of Outputs for SubSystem: '<S208>/OldValue' */
  }

  /* End of If: '<S208>/If' */

  /* If: '<S260>/If' incorporates:
   *  Inport: '<S269>/In1'
   *  Inport: '<S270>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S260>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S260>/override_enable'
   */
  if ((Batt_Coolant_Temp_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S260>/NewValue' incorporates:
     *  ActionPort: '<S269>/Action Port'
     */
    Mooventure2016_Rev5_B.s260_Merge = (Batt_Coolant_Temp_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S269>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(76);
    }

    /* End of Outputs for SubSystem: '<S260>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S260>/OldValue' incorporates:
     *  ActionPort: '<S270>/Action Port'
     */
    Mooventure2016_Rev5_B.s260_Merge =
      Mooventure2016_Rev5_B.s189_CoolantTemperature;

    /* S-Function (motohawk_sfun_code_cover): '<S270>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(77);
    }

    /* End of Outputs for SubSystem: '<S260>/OldValue' */
  }

  /* End of If: '<S260>/If' */

  /* If: '<S297>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S297>/override_enable'
   */
  if ((Cruise_Control_Raw_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S297>/NewValue' incorporates:
     *  ActionPort: '<S309>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S309>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(92);
    }

    /* End of Outputs for SubSystem: '<S297>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S297>/OldValue' incorporates:
     *  ActionPort: '<S310>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S310>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(93);
    }

    /* End of Outputs for SubSystem: '<S297>/OldValue' */
  }

  /* End of If: '<S297>/If' */

  /* RelationalOperator: '<S292>/Compare' incorporates:
   *  Constant: '<S292>/Constant'
   */
  rtb_Compare_nd = (Mooventure2016_Rev5_B.s290_Out == 2.0);

  /* S-Function Block: <S303>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s303_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_p1 = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S303>/Switch' incorporates:
   *  Constant: '<S303>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S303>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S303>/motohawk_delta_time'
   *  Sum: '<S303>/Sum'
   */
  if (rtb_Compare_nd) {
    rtb_Switch_pn = rtb_motohawk_delta_time_p1 + ButtonDelay2_DataStore();
  } else {
    rtb_Switch_pn = 0.0;
  }

  /* End of Switch: '<S303>/Switch' */

  /* Logic: '<S286>/Logical Operator' incorporates:
   *  RelationalOperator: '<S286>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration7'
   */
  Mooventure2016_Rev5_B.s286_LogicalOperator = ((rtb_Compare_nd &&
    (rtb_Switch_pn >= (Delay_DataStore()))));

  /* If: '<S298>/If' incorporates:
   *  Inport: '<S311>/In1'
   *  Inport: '<S312>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S298>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S298>/override_enable'
   */
  if ((Cruise_Control_SetM_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S298>/NewValue' incorporates:
     *  ActionPort: '<S311>/Action Port'
     */
    rtb_LogicalOperator5_c = (Cruise_Control_SetM_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S311>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(94);
    }

    /* End of Outputs for SubSystem: '<S298>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S298>/OldValue' incorporates:
     *  ActionPort: '<S312>/Action Port'
     */
    rtb_LogicalOperator5_c = Mooventure2016_Rev5_B.s286_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S312>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(95);
    }

    /* End of Outputs for SubSystem: '<S298>/OldValue' */
  }

  /* End of If: '<S298>/If' */

  /* RelationalOperator: '<S293>/Compare' incorporates:
   *  Constant: '<S293>/Constant'
   */
  rtb_Compare_nd = (Mooventure2016_Rev5_B.s290_Out == 3.0);

  /* S-Function Block: <S304>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s304_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_cz = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S304>/Switch' incorporates:
   *  Constant: '<S304>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S304>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S304>/motohawk_delta_time'
   *  Sum: '<S304>/Sum'
   */
  if (rtb_Compare_nd) {
    rtb_DataTypeConversion3 = rtb_motohawk_delta_time_cz +
      ButtonDelay3_DataStore();
  } else {
    rtb_DataTypeConversion3 = 0.0;
  }

  /* End of Switch: '<S304>/Switch' */

  /* Logic: '<S287>/Logical Operator' incorporates:
   *  RelationalOperator: '<S287>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration7'
   */
  Mooventure2016_Rev5_B.s287_LogicalOperator = ((rtb_Compare_nd &&
    (rtb_DataTypeConversion3 >= (Delay_DataStore()))));

  /* If: '<S299>/If' incorporates:
   *  Inport: '<S313>/In1'
   *  Inport: '<S314>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S299>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S299>/override_enable'
   */
  if ((Cruise_Control_SetP_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S299>/NewValue' incorporates:
     *  ActionPort: '<S313>/Action Port'
     */
    rtb_Merge_oi = (Cruise_Control_SetP_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S313>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(96);
    }

    /* End of Outputs for SubSystem: '<S299>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S299>/OldValue' incorporates:
     *  ActionPort: '<S314>/Action Port'
     */
    rtb_Merge_oi = Mooventure2016_Rev5_B.s287_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S314>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(97);
    }

    /* End of Outputs for SubSystem: '<S299>/OldValue' */
  }

  /* End of If: '<S299>/If' */

  /* RelationalOperator: '<S294>/Compare' incorporates:
   *  Constant: '<S294>/Constant'
   */
  rtb_Compare_nd = (Mooventure2016_Rev5_B.s290_Out == 4.0);

  /* S-Function Block: <S305>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s305_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_f = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S305>/Switch' incorporates:
   *  Constant: '<S305>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S305>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S305>/motohawk_delta_time'
   *  Sum: '<S305>/Sum'
   */
  if (rtb_Compare_nd) {
    rtb_DataTypeConversion4 = rtb_motohawk_delta_time_f + ButtonDelay4_DataStore
      ();
  } else {
    rtb_DataTypeConversion4 = 0.0;
  }

  /* End of Switch: '<S305>/Switch' */

  /* Logic: '<S288>/Logical Operator' incorporates:
   *  RelationalOperator: '<S288>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration7'
   */
  Mooventure2016_Rev5_B.s288_LogicalOperator = ((rtb_Compare_nd &&
    (rtb_DataTypeConversion4 >= (Delay_DataStore()))));

  /* If: '<S300>/If' incorporates:
   *  Inport: '<S315>/In1'
   *  Inport: '<S316>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S300>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S300>/override_enable'
   */
  if ((Cruise_Control_RSM_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S300>/NewValue' incorporates:
     *  ActionPort: '<S315>/Action Port'
     */
    rtb_Merge_eh = (Cruise_Control_RSM_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S315>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(98);
    }

    /* End of Outputs for SubSystem: '<S300>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S300>/OldValue' incorporates:
     *  ActionPort: '<S316>/Action Port'
     */
    rtb_Merge_eh = Mooventure2016_Rev5_B.s288_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S316>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(99);
    }

    /* End of Outputs for SubSystem: '<S300>/OldValue' */
  }

  /* End of If: '<S300>/If' */

  /* If: '<S324>/If' incorporates:
   *  Inport: '<S339>/In1'
   *  Inport: '<S340>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S324>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S324>/override_enable'
   */
  if ((Passenger_1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S324>/NewValue' incorporates:
     *  ActionPort: '<S339>/Action Port'
     */
    rtb_UnitDelay_o = (Passenger_1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S339>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(106);
    }

    /* End of Outputs for SubSystem: '<S324>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S324>/OldValue' incorporates:
     *  ActionPort: '<S340>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s193_PASSENGER_1;

    /* S-Function (motohawk_sfun_code_cover): '<S340>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(107);
    }

    /* End of Outputs for SubSystem: '<S324>/OldValue' */
  }

  /* End of If: '<S324>/If' */

  /* If: '<S326>/If' incorporates:
   *  Inport: '<S343>/In1'
   *  Inport: '<S344>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S326>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S326>/override_enable'
   */
  if ((Passenger_10_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S326>/NewValue' incorporates:
     *  ActionPort: '<S343>/Action Port'
     */
    rtb_UnitDelay_m = (Passenger_10_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S343>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs13/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(110);
    }

    /* End of Outputs for SubSystem: '<S326>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S326>/OldValue' incorporates:
     *  ActionPort: '<S344>/Action Port'
     */
    rtb_UnitDelay_m = Mooventure2016_Rev5_B.s193_PASSENGER_10;

    /* S-Function (motohawk_sfun_code_cover): '<S344>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs13/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(111);
    }

    /* End of Outputs for SubSystem: '<S326>/OldValue' */
  }

  /* End of If: '<S326>/If' */

  /* MATLAB Function Block: '<S193>/Embedded MATLAB Function2' */

  /* MATLAB Function 'Foreground/Inputs/Driver Inputs/Embedded MATLAB Function2': '<S320>:1' */
  /* '<S320>:1:3' */
  Mooventure2016_Rev5_B.s320_passengerTemp = rtb_UnitDelay_m * 10.0 +
    rtb_UnitDelay_o;

  /* If: '<S327>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S327>/override_enable'
   */
  if ((Passenger_Temp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S327>/NewValue' incorporates:
     *  ActionPort: '<S345>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S345>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs14/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(112);
    }

    /* End of Outputs for SubSystem: '<S327>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S327>/OldValue' incorporates:
     *  ActionPort: '<S346>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S346>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs14/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(113);
    }

    /* End of Outputs for SubSystem: '<S327>/OldValue' */
  }

  /* End of If: '<S327>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S193>/Read CAN Message4' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3803p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3803p0001_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint8_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[4])) ;
      Mooventure2016_Rev5_B.s193_Button_Pressed = (real_T) tmp0;
    }
  }

  /* If: '<S332>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S332>/override_enable'
   */
  if ((Button_Pressed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S332>/NewValue' incorporates:
     *  ActionPort: '<S355>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S355>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(122);
    }

    /* End of Outputs for SubSystem: '<S332>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S332>/OldValue' incorporates:
     *  ActionPort: '<S356>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S356>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(123);
    }

    /* End of Outputs for SubSystem: '<S332>/OldValue' */
  }

  /* End of If: '<S332>/If' */

  /* If: '<S362>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S362>/override_enable'
   */
  if ((Eaton_Charger_Message_Counter_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S362>/NewValue' incorporates:
     *  ActionPort: '<S375>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S375>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(130);
    }

    /* End of Outputs for SubSystem: '<S362>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S362>/OldValue' incorporates:
     *  ActionPort: '<S376>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S376>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(131);
    }

    /* End of Outputs for SubSystem: '<S362>/OldValue' */
  }

  /* End of If: '<S362>/If' */

  /* If: '<S363>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S363>/override_enable'
   */
  if ((Eaton_Charger_Message_Checksum_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S363>/NewValue' incorporates:
     *  ActionPort: '<S377>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S377>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(132);
    }

    /* End of Outputs for SubSystem: '<S363>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S363>/OldValue' incorporates:
     *  ActionPort: '<S378>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S378>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(133);
    }

    /* End of Outputs for SubSystem: '<S363>/OldValue' */
  }

  /* End of If: '<S363>/If' */

  /* If: '<S368>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S368>/override_enable'
   */
  if ((Output_Current_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S368>/NewValue' incorporates:
     *  ActionPort: '<S387>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S387>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(142);
    }

    /* End of Outputs for SubSystem: '<S368>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S368>/OldValue' incorporates:
     *  ActionPort: '<S388>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S388>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(143);
    }

    /* End of Outputs for SubSystem: '<S368>/OldValue' */
  }

  /* End of If: '<S368>/If' */

  /* If: '<S369>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S369>/override_enable'
   */
  if ((Output_Voltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S369>/NewValue' incorporates:
     *  ActionPort: '<S389>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S389>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(144);
    }

    /* End of Outputs for SubSystem: '<S369>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S369>/OldValue' incorporates:
     *  ActionPort: '<S390>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S390>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(145);
    }

    /* End of Outputs for SubSystem: '<S369>/OldValue' */
  }

  /* End of If: '<S369>/If' */

  /* If: '<S397>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S397>/override_enable'
   */
  if ((Oil_Pressure_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S397>/NewValue' incorporates:
     *  ActionPort: '<S405>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S405>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(152);
    }

    /* End of Outputs for SubSystem: '<S397>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S397>/OldValue' incorporates:
     *  ActionPort: '<S406>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S406>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(153);
    }

    /* End of Outputs for SubSystem: '<S397>/OldValue' */
  }

  /* End of If: '<S397>/If' */

  /* If: '<S400>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S400>/override_enable'
   */
  if ((Engine_Crank_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S400>/NewValue' incorporates:
     *  ActionPort: '<S411>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S411>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(158);
    }

    /* End of Outputs for SubSystem: '<S400>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S400>/OldValue' incorporates:
     *  ActionPort: '<S412>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S412>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(159);
    }

    /* End of Outputs for SubSystem: '<S400>/OldValue' */
  }

  /* End of If: '<S400>/If' */

  /* If: '<S402>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S402>/override_enable'
   */
  if ((Load_On_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S402>/NewValue' incorporates:
     *  ActionPort: '<S415>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S415>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(162);
    }

    /* End of Outputs for SubSystem: '<S402>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S402>/OldValue' incorporates:
     *  ActionPort: '<S416>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S416>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(163);
    }

    /* End of Outputs for SubSystem: '<S402>/OldValue' */
  }

  /* End of If: '<S402>/If' */

  /* If: '<S421>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S421>/override_enable'
   */
  if ((IPT_Current_Used_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S421>/NewValue' incorporates:
     *  ActionPort: '<S453>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S453>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(168);
    }

    /* End of Outputs for SubSystem: '<S421>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S421>/OldValue' incorporates:
     *  ActionPort: '<S454>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S454>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(169);
    }

    /* End of Outputs for SubSystem: '<S421>/OldValue' */
  }

  /* End of If: '<S421>/If' */

  /* If: '<S422>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S422>/override_enable'
   */
  if ((IPT_Motor_Temperature_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S422>/NewValue' incorporates:
     *  ActionPort: '<S455>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S455>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(170);
    }

    /* End of Outputs for SubSystem: '<S422>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S422>/OldValue' incorporates:
     *  ActionPort: '<S456>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S456>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(171);
    }

    /* End of Outputs for SubSystem: '<S422>/OldValue' */
  }

  /* End of If: '<S422>/If' */

  /* If: '<S423>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S423>/override_enable'
   */
  if ((IPT_Max_Torque_Avail_Gen_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S423>/NewValue' incorporates:
     *  ActionPort: '<S457>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S457>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(172);
    }

    /* End of Outputs for SubSystem: '<S423>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S423>/OldValue' incorporates:
     *  ActionPort: '<S458>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S458>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(173);
    }

    /* End of Outputs for SubSystem: '<S423>/OldValue' */
  }

  /* End of If: '<S423>/If' */

  /* If: '<S424>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S424>/override_enable'
   */
  if ((IPT_Max_Torque_Avail_Motor_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S424>/NewValue' incorporates:
     *  ActionPort: '<S459>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S459>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(174);
    }

    /* End of Outputs for SubSystem: '<S424>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S424>/OldValue' incorporates:
     *  ActionPort: '<S460>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S460>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(175);
    }

    /* End of Outputs for SubSystem: '<S424>/OldValue' */
  }

  /* End of If: '<S424>/If' */

  /* If: '<S426>/If' incorporates:
   *  Inport: '<S463>/In1'
   *  Inport: '<S464>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S426>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S426>/override_enable'
   */
  if ((IPT_Error_Category_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S426>/NewValue' incorporates:
     *  ActionPort: '<S463>/Action Port'
     */
    rtb_UnitDelay_o = (IPT_Error_Category_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S463>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs14/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(178);
    }

    /* End of Outputs for SubSystem: '<S426>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S426>/OldValue' incorporates:
     *  ActionPort: '<S464>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s196_IPT_ErrorCategory;

    /* S-Function (motohawk_sfun_code_cover): '<S464>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs14/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(179);
    }

    /* End of Outputs for SubSystem: '<S426>/OldValue' */
  }

  /* End of If: '<S426>/If' */

  /* If: '<S427>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S427>/override_enable'
   */
  if ((IPT_IPTReady_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S427>/NewValue' incorporates:
     *  ActionPort: '<S465>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S465>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs15/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(180);
    }

    /* End of Outputs for SubSystem: '<S427>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S427>/OldValue' incorporates:
     *  ActionPort: '<S466>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S466>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs15/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(181);
    }

    /* End of Outputs for SubSystem: '<S427>/OldValue' */
  }

  /* End of If: '<S427>/If' */

  /* If: '<S428>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S428>/override_enable'
   */
  if ((IPT_IPTAwake_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S428>/NewValue' incorporates:
     *  ActionPort: '<S467>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S467>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs16/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(182);
    }

    /* End of Outputs for SubSystem: '<S428>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S428>/OldValue' incorporates:
     *  ActionPort: '<S468>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S468>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs16/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(183);
    }

    /* End of Outputs for SubSystem: '<S428>/OldValue' */
  }

  /* End of If: '<S428>/If' */

  /* If: '<S430>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S430>/override_enable'
   */
  if ((IPT_Max_Waste_Available_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S430>/NewValue' incorporates:
     *  ActionPort: '<S471>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S471>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs18/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(186);
    }

    /* End of Outputs for SubSystem: '<S430>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S430>/OldValue' incorporates:
     *  ActionPort: '<S472>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S472>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs18/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(187);
    }

    /* End of Outputs for SubSystem: '<S430>/OldValue' */
  }

  /* End of If: '<S430>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S196>/Read CAN Message4' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4067p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4067p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s196_AgeCount_o + 1) >
        Mooventure2016_Rev5_B.s196_AgeCount_o)
      Mooventure2016_Rev5_B.s196_AgeCount_o++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint8_T tmp3 = 0;
      int32_T tmp4 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[7])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[6])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[4] & 0x0000001F)) ;
      ((uint8_T *)(&tmp2))[1] = ((msg_data[5])) ;
      ((uint8_T *)(&tmp3))[0] = ((msg_data[4] & 0x000000E0) >> 5) ;
      ((uint8_T *)(&tmp4))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp4))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp4))[2] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp4))[3] = ((msg_data[3])) ;
      Mooventure2016_Rev5_B.s196_Heading = ((real_T) tmp0) * ((real_T) 2);
      Mooventure2016_Rev5_B.s196_Speed = (real_T) tmp1;
      Mooventure2016_Rev5_B.s196_Altitude = ((real_T) tmp2) + ((real_T) -500);
      Mooventure2016_Rev5_B.s196_GPSQuality = (real_T) tmp3;
      Mooventure2016_Rev5_B.s196_DateTime = (real_T) tmp4;
      Mooventure2016_Rev5_B.s196_AgeCount_o = 0;
    }
  }

  /* If: '<S431>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S431>/override_enable'
   */
  if ((Age_Count_590_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S431>/NewValue' incorporates:
     *  ActionPort: '<S473>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S473>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs19/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(188);
    }

    /* End of Outputs for SubSystem: '<S431>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S431>/OldValue' incorporates:
     *  ActionPort: '<S474>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S474>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs19/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(189);
    }

    /* End of Outputs for SubSystem: '<S431>/OldValue' */
  }

  /* End of If: '<S431>/If' */

  /* If: '<S433>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S433>/override_enable'
   */
  if ((Heading_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S433>/NewValue' incorporates:
     *  ActionPort: '<S477>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S477>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs20/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(192);
    }

    /* End of Outputs for SubSystem: '<S433>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S433>/OldValue' incorporates:
     *  ActionPort: '<S478>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S478>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs20/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(193);
    }

    /* End of Outputs for SubSystem: '<S433>/OldValue' */
  }

  /* End of If: '<S433>/If' */

  /* If: '<S434>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S434>/override_enable'
   */
  if ((Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S434>/NewValue' incorporates:
     *  ActionPort: '<S479>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S479>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs21/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(194);
    }

    /* End of Outputs for SubSystem: '<S434>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S434>/OldValue' incorporates:
     *  ActionPort: '<S480>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S480>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs21/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(195);
    }

    /* End of Outputs for SubSystem: '<S434>/OldValue' */
  }

  /* End of If: '<S434>/If' */

  /* If: '<S435>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S435>/override_enable'
   */
  if ((Altitude_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S435>/NewValue' incorporates:
     *  ActionPort: '<S481>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S481>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs22/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(196);
    }

    /* End of Outputs for SubSystem: '<S435>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S435>/OldValue' incorporates:
     *  ActionPort: '<S482>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S482>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs22/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(197);
    }

    /* End of Outputs for SubSystem: '<S435>/OldValue' */
  }

  /* End of If: '<S435>/If' */

  /* If: '<S436>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S436>/override_enable'
   */
  if ((GPSQuality_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S436>/NewValue' incorporates:
     *  ActionPort: '<S483>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S483>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs23/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(198);
    }

    /* End of Outputs for SubSystem: '<S436>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S436>/OldValue' incorporates:
     *  ActionPort: '<S484>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S484>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs23/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(199);
    }

    /* End of Outputs for SubSystem: '<S436>/OldValue' */
  }

  /* End of If: '<S436>/If' */

  /* If: '<S437>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S437>/override_enable'
   */
  if ((DateTime_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S437>/NewValue' incorporates:
     *  ActionPort: '<S485>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S485>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs24/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(200);
    }

    /* End of Outputs for SubSystem: '<S437>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S437>/OldValue' incorporates:
     *  ActionPort: '<S486>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S486>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs24/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(201);
    }

    /* End of Outputs for SubSystem: '<S437>/OldValue' */
  }

  /* End of If: '<S437>/If' */

  /* If: '<S439>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S439>/override_enable'
   */
  if ((IPT_DC_Error_Category_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S439>/NewValue' incorporates:
     *  ActionPort: '<S489>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S489>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs26/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(204);
    }

    /* End of Outputs for SubSystem: '<S439>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S439>/OldValue' incorporates:
     *  ActionPort: '<S490>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S490>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs26/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(205);
    }

    /* End of Outputs for SubSystem: '<S439>/OldValue' */
  }

  /* End of If: '<S439>/If' */

  /* If: '<S440>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S440>/override_enable'
   */
  if ((IPT_DCLV_On_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S440>/NewValue' incorporates:
     *  ActionPort: '<S491>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S491>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs27/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(206);
    }

    /* End of Outputs for SubSystem: '<S440>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S440>/OldValue' incorporates:
     *  ActionPort: '<S492>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S492>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs27/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(207);
    }

    /* End of Outputs for SubSystem: '<S440>/OldValue' */
  }

  /* End of If: '<S440>/If' */

  /* If: '<S441>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S441>/override_enable'
   */
  if ((IPT_DCLV_General_Error_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S441>/NewValue' incorporates:
     *  ActionPort: '<S493>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S493>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs28/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(208);
    }

    /* End of Outputs for SubSystem: '<S441>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S441>/OldValue' incorporates:
     *  ActionPort: '<S494>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S494>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs28/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(209);
    }

    /* End of Outputs for SubSystem: '<S441>/OldValue' */
  }

  /* End of If: '<S441>/If' */

  /* If: '<S442>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S442>/override_enable'
   */
  if ((IPT_DCLV_Max_Power_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S442>/NewValue' incorporates:
     *  ActionPort: '<S495>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S495>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs29/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(210);
    }

    /* End of Outputs for SubSystem: '<S442>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S442>/OldValue' incorporates:
     *  ActionPort: '<S496>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S496>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs29/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(211);
    }

    /* End of Outputs for SubSystem: '<S442>/OldValue' */
  }

  /* End of If: '<S442>/If' */

  /* If: '<S443>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S443>/override_enable'
   */
  if ((IPT_Current_Request_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S443>/NewValue' incorporates:
     *  ActionPort: '<S497>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S497>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(212);
    }

    /* End of Outputs for SubSystem: '<S443>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S443>/OldValue' incorporates:
     *  ActionPort: '<S498>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S498>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(213);
    }

    /* End of Outputs for SubSystem: '<S443>/OldValue' */
  }

  /* End of If: '<S443>/If' */

  /* If: '<S444>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S444>/override_enable'
   */
  if ((IPT_DCLV_Bus_Current_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S444>/NewValue' incorporates:
     *  ActionPort: '<S499>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S499>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs30/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(214);
    }

    /* End of Outputs for SubSystem: '<S444>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S444>/OldValue' incorporates:
     *  ActionPort: '<S500>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S500>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs30/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(215);
    }

    /* End of Outputs for SubSystem: '<S444>/OldValue' */
  }

  /* End of If: '<S444>/If' */

  /* If: '<S445>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S445>/override_enable'
   */
  if ((IPT_DCLV_Bus_Voltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S445>/NewValue' incorporates:
     *  ActionPort: '<S501>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S501>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs31/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(216);
    }

    /* End of Outputs for SubSystem: '<S445>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S445>/OldValue' incorporates:
     *  ActionPort: '<S502>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S502>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs31/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(217);
    }

    /* End of Outputs for SubSystem: '<S445>/OldValue' */
  }

  /* End of If: '<S445>/If' */

  /* If: '<S446>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S446>/override_enable'
   */
  if ((IPT_DCHV_Bus_Current_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S446>/NewValue' incorporates:
     *  ActionPort: '<S503>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S503>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs32/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(218);
    }

    /* End of Outputs for SubSystem: '<S446>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S446>/OldValue' incorporates:
     *  ActionPort: '<S504>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S504>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs32/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(219);
    }

    /* End of Outputs for SubSystem: '<S446>/OldValue' */
  }

  /* End of If: '<S446>/If' */

  /* If: '<S449>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S449>/override_enable'
   */
  if ((IPT_Current_Limit_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S449>/NewValue' incorporates:
     *  ActionPort: '<S509>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S509>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(224);
    }

    /* End of Outputs for SubSystem: '<S449>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S449>/OldValue' incorporates:
     *  ActionPort: '<S510>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S510>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(225);
    }

    /* End of Outputs for SubSystem: '<S449>/OldValue' */
  }

  /* End of If: '<S449>/If' */

  /* If: '<S450>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S450>/override_enable'
   */
  if ((IPT_Antishudder_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S450>/NewValue' incorporates:
     *  ActionPort: '<S511>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S511>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(226);
    }

    /* End of Outputs for SubSystem: '<S450>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S450>/OldValue' incorporates:
     *  ActionPort: '<S512>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S512>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(227);
    }

    /* End of Outputs for SubSystem: '<S450>/OldValue' */
  }

  /* End of If: '<S450>/If' */

  /* If: '<S517>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S517>/override_enable'
   */
  if ((STR_WHL_ANGLE_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S517>/NewValue' incorporates:
     *  ActionPort: '<S521>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S521>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(232);
    }

    /* End of Outputs for SubSystem: '<S517>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S517>/OldValue' incorporates:
     *  ActionPort: '<S522>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S522>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(233);
    }

    /* End of Outputs for SubSystem: '<S517>/OldValue' */
  }

  /* End of If: '<S517>/If' */

  /* If: '<S518>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S518>/override_enable'
   */
  if ((RELATIVE_STR_WHL_ANGLE_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S518>/NewValue' incorporates:
     *  ActionPort: '<S523>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S523>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(234);
    }

    /* End of Outputs for SubSystem: '<S518>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S518>/OldValue' incorporates:
     *  ActionPort: '<S524>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S524>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(235);
    }

    /* End of Outputs for SubSystem: '<S518>/OldValue' */
  }

  /* End of If: '<S518>/If' */

  /* If: '<S520>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S520>/override_enable'
   */
  if ((STR_WHL_ANGLE_CNTR_FND_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S520>/NewValue' incorporates:
     *  ActionPort: '<S527>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S527>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(238);
    }

    /* End of Outputs for SubSystem: '<S520>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S520>/OldValue' incorporates:
     *  ActionPort: '<S528>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S528>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(239);
    }

    /* End of Outputs for SubSystem: '<S520>/OldValue' */
  }

  /* End of If: '<S520>/If' */

  /* RelationalOperator: '<S98>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_a = ((Mooventure2016_Rev5_B.s193_Brake_Position_l >=
    (Brake_Pedal_Position_High_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S98>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Brake_Pedal_Position_Sensor_A_Circuit_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(17, rtb_RelationalOperator3_a);
    UpdateFault(17);
  }

  /* Abs: '<S98>/Abs' incorporates:
   *  Sum: '<S98>/Add'
   *  UnitDelay: '<S98>/Unit Delay'
   */
  rtb_UnitDelay_m = fabs(Mooventure2016_Rev5_B.s193_Brake_Position_l -
    Mooventure2016_Rev5_DWork.s98_UnitDelay_DSTATE);

  /* RelationalOperator: '<S98>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration'
   */
  rtb_RelationalOperator_l1 = ((rtb_UnitDelay_m >=
    (Brake_Pedal_Position_Intermiitent_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S98>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Brake_Pedal_Position_Intermiitent */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(15, rtb_RelationalOperator_l1);
    UpdateFault(15);
  }

  /* RelationalOperator: '<S98>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_da = ((Mooventure2016_Rev5_B.s193_Brake_Position_l <=
                                 (Brake_Pedal_Position_Low_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S98>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Brake_Pedal_Position_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(16, rtb_RelationalOperator2_da);
    UpdateFault(16);
  }

  /* RelationalOperator: '<S98>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration4'
   */
  rtb_RelationalOperator4_l = ((Mooventure2016_Rev5_B.s193_Brake_Position_l >=
    (Brake_Pedal_Position_Communication_Loss_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S98>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Brake_Pedal_Position_Communication_Loss */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(14, rtb_RelationalOperator4_l);
    UpdateFault(14);
  }

  /* DataTypeConversion: '<S99>/Data Type Conversion1' incorporates:
   *  RelationalOperator: '<S107>/FixPt Relational Operator'
   *  UnitDelay: '<S107>/Delay Input1'
   */
  rtb_Compare_nd = (rtb_Merge_caz !=
                    Mooventure2016_Rev5_DWork.s107_DelayInput1_DSTATE);

  /* S-Function (motohawk_sfun_fault_def): '<S99>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Cruise_Control_Off_Signal_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(34, rtb_Compare_nd);
    UpdateFault(34);
  }

  /* DataTypeConversion: '<S99>/Data Type Conversion2' incorporates:
   *  RelationalOperator: '<S108>/FixPt Relational Operator'
   *  UnitDelay: '<S108>/Delay Input1'
   */
  rtb_Compare_nd = (rtb_Merge_eh !=
                    Mooventure2016_Rev5_DWork.s108_DelayInput1_DSTATE);

  /* S-Function (motohawk_sfun_fault_def): '<S99>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Cruise_Control_Resume_Signal_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(36, rtb_Compare_nd);
    UpdateFault(36);
  }

  /* DataTypeConversion: '<S99>/Data Type Conversion3' incorporates:
   *  RelationalOperator: '<S109>/FixPt Relational Operator'
   *  UnitDelay: '<S109>/Delay Input1'
   */
  rtb_Compare_nd = (rtb_Merge_oi !=
                    Mooventure2016_Rev5_DWork.s109_DelayInput1_DSTATE);

  /* S-Function (motohawk_sfun_fault_def): '<S99>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Cruise_Control_Set_Signal_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(37, rtb_Compare_nd);
    UpdateFault(37);
  }

  /* DataTypeConversion: '<S99>/Data Type Conversion4' incorporates:
   *  RelationalOperator: '<S110>/FixPt Relational Operator'
   *  UnitDelay: '<S110>/Delay Input1'
   */
  rtb_Compare_nd = (rtb_LogicalOperator5_c !=
                    Mooventure2016_Rev5_DWork.s110_DelayInput1_DSTATE);

  /* S-Function (motohawk_sfun_fault_def): '<S99>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Cruise_Control_Coast_Signal_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(33, rtb_Compare_nd);
    UpdateFault(33);
  }

  /* RelationalOperator: '<S99>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration2'
   */
  rtb_RelationalOperator1_f = ((Mooventure2016_Rev5_B.s193_Brake_Position_l >
    (Cruise_Disable_Brake_Fault1_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S99>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Cruise_Control_Brake_Switch_A_Circuit_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(30, rtb_RelationalOperator1_f);
    UpdateFault(30);
  }

  /* RelationalOperator: '<S99>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration1'
   */
  rtb_RelationalOperator2_j = ((Mooventure2016_Rev5_B.s193_Brake_Position_l <=
    (Cruise_Disable_Brake_Fault2_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S99>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Cruise_Control_Brake_Switch_A_Circuit_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(31, rtb_RelationalOperator2_j);
    UpdateFault(31);
  }

  /* DataTypeConversion: '<S99>/Data Type Conversion' incorporates:
   *  RelationalOperator: '<S106>/FixPt Relational Operator'
   *  UnitDelay: '<S106>/Delay Input1'
   */
  rtb_Compare_nd = (rtb_Merge_nl !=
                    Mooventure2016_Rev5_DWork.s106_DelayInput1_DSTATE);

  /* S-Function (motohawk_sfun_fault_def): '<S99>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Cruise_Control_On_Signal_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(35, rtb_Compare_nd);
    UpdateFault(35);
  }

  /* Logic: '<S99>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S99>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S99>/motohawk_fault_status1'
   */
  rtb_LogicalOperator2_i = ((IsFaultActive(30) || IsFaultActive(31)));

  /* S-Function (motohawk_sfun_fault_def): '<S99>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Cruise_Control_Brake_Switch_A_Circuit_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(32, rtb_LogicalOperator2_i);
    UpdateFault(32);
  }

  /* Product: '<S100>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration7'
   */
  rtb_UnitDelay_m = (RPM_to_Wheel_Speed_Multiplier2_DataStore()) *
    Mooventure2016_Rev5_B.s447_Merge;

  /* RelationalOperator: '<S100>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_i3 = ((rtb_UnitDelay_m <=
    (Electric_Motor_Over_Speed_Reverse_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S100>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Electric_Motor_Over_Speed_Reverse */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(50, rtb_RelationalOperator3_i3);
    UpdateFault(50);
  }

  /* MATLAB Function Block: '<S100>/Data Correction Motor Fault' */
  Mooventure2016_Rev5_DataCorrectionMotorFault(Mooventure2016_Rev5_B.s448_Merge,
    &Mooventure2016_Rev5_B.s100_sf_DataCorrectionMotorFault);

  /* Abs: '<S100>/Abs' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S100>/motohawk_data_read'
   *  Sum: '<S100>/Add'
   */
  rtb_Merge_cq = fabs
    (Mooventure2016_Rev5_B.s100_sf_DataCorrectionMotorFault.s111_torqueOut -
     TorqueRequest_DataStore());

  /* RelationalOperator: '<S100>/Relational Operator12' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration13'
   */
  rtb_RelationalOperator12 = ((rtb_Merge_cq >=
    (Electric_Motor_Torque_Output_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S100>/motohawk_fault_def10' */

  /* Set Fault Suspected Status: Electric_Motor_Torque_Output_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(52, rtb_RelationalOperator12);
    UpdateFault(52);
  }

  /* RelationalOperator: '<S100>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_ad = ((Mooventure2016_Rev5_B.s425_Merge <
    (Electric_Motor_Derated_Under_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S100>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Electric_Motor_Derated_Under_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(47, rtb_RelationalOperator1_ad);
    UpdateFault(47);
  }

  /* RelationalOperator: '<S100>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration4'
   */
  rtb_RelationalOperator4_d = ((Mooventure2016_Rev5_B.s425_Merge >
    (Electric_Motor_Derated_Over_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S100>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Electric_Motor_Derated_Over_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(45, rtb_RelationalOperator4_d);
    UpdateFault(45);
  }

  /* RelationalOperator: '<S100>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_e = ((rtb_UnitDelay_m >=
    (Electric_Motor_Over_Speed_Forward_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S100>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Electric_Motor_Over_Speed_Forward */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(49, rtb_RelationalOperator2_e);
    UpdateFault(49);
  }

  /* RelationalOperator: '<S100>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_k = ((Mooventure2016_Rev5_B.s452_Merge <
    (Electric_Motor_Derated_Under_Temperature_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S100>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Electric_Motor_Derated_Under_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(46, rtb_RelationalOperator5_k);
    UpdateFault(46);
  }

  /* RelationalOperator: '<S100>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration6'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s452_Merge >
    (Electric_Motor_Derated_Approaching_Over_Temperature_Fault_Under_DataStore()));

  /* Logic: '<S100>/Logical Operator' incorporates:
   *  RelationalOperator: '<S100>/Relational Operator7'
   *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration8'
   */
  rtb_LogicalOperator_j = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s452_Merge <
     (Electric_Motor_Derated_Approaching_Over_Temperature_Fault_Over_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S100>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Electric_Motor_Approaching_Over_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(43, rtb_LogicalOperator_j);
    UpdateFault(43);
  }

  /* RelationalOperator: '<S100>/Relational Operator8' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration9'
   */
  rtb_RelationalOperator8 = ((Mooventure2016_Rev5_B.s452_Merge >=
    (Electric_Motor_Derated_Over_Temperature_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S100>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Electric_Motor_Derated_Over_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(44, rtb_RelationalOperator8);
    UpdateFault(44);
  }

  /* RelationalOperator: '<S100>/Relational Operator9' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration10'
   */
  rtb_LogicalOperator5 = (rtb_UnitDelay_o >
    (Electric_Motor_General_Error_Fault_Under_DataStore()));

  /* Logic: '<S100>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S100>/Relational Operator10'
   *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration11'
   */
  rtb_LogicalOperator1_j = ((rtb_LogicalOperator5 && (rtb_UnitDelay_o <
    (Electric_Motor_General_Error_Fault_Over_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S100>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Electric_Motor_General_Error */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(48, rtb_LogicalOperator1_j);
    UpdateFault(48);
  }

  /* RelationalOperator: '<S100>/Relational Operator11' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration12'
   */
  rtb_RelationalOperator11 = ((rtb_UnitDelay_o >=
    (Electric_Motor_Shutdown_Error_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S100>/motohawk_fault_def9' */

  /* Set Fault Suspected Status: Electric_Motor_Shutodwn_Error */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(51, rtb_RelationalOperator11);
    UpdateFault(51);
  }

  /* RelationalOperator: '<S101>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_lz = ((Mooventure2016_Rev5_B.s234_DataTypeConversion >=
                                 (Pedal_Position_Sensor_A_Circuit_High_DataStore
                                  ())));

  /* S-Function (motohawk_sfun_fault_def): '<S101>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Pedal_Position_Sensor_A_Circuit_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(78, rtb_RelationalOperator3_lz);
    UpdateFault(78);
  }

  /* Abs: '<S101>/Abs' incorporates:
   *  Sum: '<S101>/Add'
   *  UnitDelay: '<S101>/Unit Delay'
   */
  rtb_Merge_cq = fabs(Mooventure2016_Rev5_B.s234_DataTypeConversion -
                      Mooventure2016_Rev5_DWork.s101_UnitDelay_DSTATE);

  /* RelationalOperator: '<S101>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration'
   */
  rtb_RelationalOperator_m = ((rtb_Merge_cq >=
    (Pedal_Poition_Sensor_A_Intermittent_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S101>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Pedal_Position_Sensor_A_Circuit_Intermittent */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    boolean_T update;
    if (Mooventure2016_Rev5_DWork.s101_motohawk_fault_def2_DWORK1 >= 3) {
      update = 1;
      Mooventure2016_Rev5_DWork.s101_motohawk_fault_def2_DWORK1 = 0;
    } else {
      update = 0;
      Mooventure2016_Rev5_DWork.s101_motohawk_fault_def2_DWORK1++;
    }

    SetFaultSuspected(79, rtb_RelationalOperator_m);
    if (update)
      UpdateFault(79);
  }

  /* RelationalOperator: '<S101>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_h5 = ((Mooventure2016_Rev5_B.s234_DataTypeConversion <=
                                 (Pedal_Position_Sensor_A_Circuit_Low_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S101>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Pedal_Position_Sensor_A_Circuit_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(80, rtb_RelationalOperator2_h5);
    UpdateFault(80);
  }

  /* RelationalOperator: '<S102>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration1'
   */
  rtb_Compare_nd = (Mooventure2016_Rev5_B.s321_posOut >=
                    (Park_Nuetral_Switch_Input_High_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S102>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Park_Nuetral_Switch_Input_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(76, rtb_Compare_nd);
    UpdateFault(76);
  }

  /* RelationalOperator: '<S102>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_f = ((Mooventure2016_Rev5_B.s321_posOut >=
    (Drive_Switch_Input_High_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S102>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Drive_Switch_Input_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(40, rtb_RelationalOperator3_f);
    UpdateFault(40);
  }

  /* RelationalOperator: '<S102>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration2'
   */
  rtb_RelationalOperator_jg = (Mooventure2016_Rev5_B.s321_posOut <=
    (Drive_Switch_Input_Low_Fault_DataStore()));

  /* Logic: '<S102>/Logical Operator1' */
  rtb_LogicalOperator1_ax = rtb_RelationalOperator_jg;

  /* S-Function (motohawk_sfun_fault_def): '<S102>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Drive_Switch_Input_Circuit */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(39, rtb_LogicalOperator1_ax);
    UpdateFault(39);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S102>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Drive_Switch_Input_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(41, rtb_RelationalOperator_jg);
    UpdateFault(41);
  }

  /* RelationalOperator: '<S102>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration4'
   */
  rtb_RelationalOperator_jg = ((real_T)rtb_Merge_nu >=
    (Gear_Shift_Module_Communication_Circuit_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S102>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Gear_Shift_Communication_Circuit */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(53, rtb_RelationalOperator_jg);
    UpdateFault(53);
  }

  /* RelationalOperator: '<S102>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration'
   */
  rtb_RelationalOperator_jg = (Mooventure2016_Rev5_B.s321_posOut <=
    (Park_Nuetral_Switch_Input_Low_Fault_DataStore()));

  /* Logic: '<S102>/Logical Operator2' */
  rtb_LogicalOperator2_m = ((rtb_Compare_nd || rtb_RelationalOperator_jg));

  /* S-Function (motohawk_sfun_fault_def): '<S102>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Park_Nuetral_Switch_Input_Circuit */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(75, rtb_LogicalOperator2_m);
    UpdateFault(75);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S102>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Park_Nuetral_Switch_Input_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(77, rtb_RelationalOperator_jg);
    UpdateFault(77);
  }

  /* RelationalOperator: '<S104>/Relational Operator' incorporates:
   *  Abs: '<S104>/Abs'
   *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration'
   */
  rtb_LogicalOperator5 = (fabs(rtb_Merge_f) <
    (Traction_Control_System_Maulfunction_Fault_DataStore()));

  /* Abs: '<S104>/Abs4' */
  rtb_Merge_cq = fabs(Mooventure2016_Rev5_B.s447_Merge);

  /* RelationalOperator: '<S104>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration1'
   */
  rtb_Compare_nd = (rtb_Merge_cq >= (Traction_Control_Vehicle_Moving_DataStore()));

  /* Logic: '<S104>/Logical Operator' */
  rtb_RelationalOperator_jg = (rtb_LogicalOperator5 && rtb_Compare_nd);

  /* S-Function (motohawk_sfun_fault_def): '<S104>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Traction_Control_LeftFront_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(87, rtb_RelationalOperator_jg);
    UpdateFault(87);
  }

  /* Logic: '<S104>/Logical Operator1' incorporates:
   *  Abs: '<S104>/Abs1'
   *  RelationalOperator: '<S104>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration'
   */
  rtb_RelationalOperator2_id = ((fabs(rtb_Merge_ns) <
    (Traction_Control_System_Maulfunction_Fault_DataStore())) && rtb_Compare_nd);

  /* S-Function (motohawk_sfun_fault_def): '<S104>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Traction_Control_RightFront_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(89, rtb_RelationalOperator2_id);
    UpdateFault(89);
  }

  /* Logic: '<S104>/Logical Operator2' incorporates:
   *  Abs: '<S104>/Abs2'
   *  RelationalOperator: '<S104>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration'
   */
  rtb_LogicalOperator2_c = ((fabs(rtb_Merge_bg) <
    (Traction_Control_System_Maulfunction_Fault_DataStore())) && rtb_Compare_nd);

  /* S-Function (motohawk_sfun_fault_def): '<S104>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Traction_Control_LeftRear_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(88, rtb_LogicalOperator2_c);
    UpdateFault(88);
  }

  /* Logic: '<S104>/Logical Operator3' incorporates:
   *  Abs: '<S104>/Abs3'
   *  RelationalOperator: '<S104>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration'
   */
  rtb_Compare_nd = ((fabs(rtb_Merge_ko) <
                     (Traction_Control_System_Maulfunction_Fault_DataStore())) &&
                    rtb_Compare_nd);

  /* S-Function (motohawk_sfun_fault_def): '<S104>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Traction_Control_RightRear_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(90, rtb_Compare_nd);
    UpdateFault(90);
  }

  /* Logic: '<S104>/Logical Operator4' */
  rtb_LogicalOperator4_p = ((rtb_RelationalOperator_jg ||
    rtb_RelationalOperator2_id || rtb_LogicalOperator2_c || rtb_Compare_nd));

  /* S-Function (motohawk_sfun_fault_def): '<S104>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Traction_Control_General_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(86, rtb_LogicalOperator4_p);
    UpdateFault(86);
  }

  /* MATLAB Function Block: '<S105>/Data Correction' */
  Mooventure2016_Rev5_DataCorrectionMotorFault(Mooventure2016_Rev5_B.s448_Merge,
    &Mooventure2016_Rev5_B.s105_sf_DataCorrection);

  /* RelationalOperator: '<S105>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration2'
   */
  rtb_LogicalOperator5 =
    (Mooventure2016_Rev5_B.s105_sf_DataCorrection.s111_torqueOut >
     (Vehicle_Speed_Sensor_Circuit_Low_Fault_DataStore()));

  /* Logic: '<S105>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S105>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration3'
   */
  rtb_LogicalOperator1_hq = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s447_Merge < (Motor_Speed_TorqueRPM_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S105>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Vehicle_Speed_Sensor_Circuit_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(93, rtb_LogicalOperator1_hq);
    UpdateFault(93);
  }

  /* Abs: '<S105>/Abs' incorporates:
   *  Sum: '<S105>/Add'
   *  UnitDelay: '<S105>/Unit Delay'
   */
  rtb_Merge_cq = fabs(Mooventure2016_Rev5_B.s447_Merge -
                      Mooventure2016_Rev5_DWork.s105_UnitDelay_DSTATE);

  /* RelationalOperator: '<S105>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration4'
   */
  rtb_RelationalOperator_ox = ((rtb_Merge_cq >=
    (Motor_Speed_Torque_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S105>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Vehicle_Speed_Sensor_Erratic */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(94, rtb_RelationalOperator_ox);
    UpdateFault(94);
  }

  /* RelationalOperator: '<S105>/Relational Operator7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration7'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s447_Merge <
    (Motor_Speed_Low_Fault_DataStore()));

  /* Logic: '<S105>/Logical Operator' incorporates:
   *  RelationalOperator: '<S105>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration1'
   */
  rtb_LogicalOperator_f = ((rtb_LogicalOperator5 ||
    (Mooventure2016_Rev5_B.s447_Merge > (Motor_Speed_High_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S105>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Vehicle_Speed_Sensor_Rang_Performance */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(95, rtb_LogicalOperator_f);
    UpdateFault(95);
  }

  /* Logic: '<S105>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S105>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S105>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S105>/motohawk_fault_status2'
   */
  rtb_LogicalOperator2_ax = ((IsFaultActive(95) || IsFaultActive(93) ||
    IsFaultActive(94)));

  /* S-Function (motohawk_sfun_fault_def): '<S105>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Vehcile_Speed_Sensor_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(92, rtb_LogicalOperator2_ax);
    UpdateFault(92);
  }

  /* S-Function Block: <S97>/motohawk_ain Resource: DRVP */
  rtb_motohawk_ain = DRVP_AnalogInput_Get();

  /* Product: '<S97>/Product' incorporates:
   *  Constant: '<S97>/Constant'
   */
  rtb_Merge_ko = (real_T)rtb_motohawk_ain * 0.02697;

  /* RelationalOperator: '<S97>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration1'
   */
  rtb_Compare_nd = (rtb_Merge_ko <= (V12_Low_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S97>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: System_Voltage_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(83, rtb_Compare_nd);
    UpdateFault(83);
  }

  /* Abs: '<S97>/Abs' incorporates:
   *  Sum: '<S97>/Add'
   *  UnitDelay: '<S97>/Unit Delay'
   */
  rtb_Merge_cq = fabs(rtb_Merge_ko -
                      Mooventure2016_Rev5_DWork.s97_UnitDelay_DSTATE);

  /* RelationalOperator: '<S97>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration4'
   */
  rtb_RelationalOperator_jg = (rtb_Merge_cq >=
    (V12_Battery_Erratic_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S97>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: System_Voltage_Unstable */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(85, rtb_RelationalOperator_jg);
    UpdateFault(85);
  }

  /* RelationalOperator: '<S97>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_id = (rtb_Merge_ko >= (V12_High_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S97>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: System_Voltage_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(82, rtb_RelationalOperator2_id);
    UpdateFault(82);
  }

  /* Logic: '<S97>/Logical Operator2' */
  rtb_LogicalOperator2_k = ((rtb_RelationalOperator_jg || rtb_Compare_nd ||
    rtb_RelationalOperator2_id));

  /* S-Function (motohawk_sfun_fault_def): '<S97>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: System_Voltage_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(84, rtb_LogicalOperator2_k);
    UpdateFault(84);
  }

  /* RelationalOperator: '<S103>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S103>/motohawk_data_read1'
   */
  rtb_RelationalOperator1_e = ((ECUP_DataStore() >=
    (Key_Line_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S103>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Key_Line_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(73, rtb_RelationalOperator1_e);
    UpdateFault(73);
  }

  /* RelationalOperator: '<S103>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_data_read): '<S103>/motohawk_data_read1'
   */
  rtb_LogicalOperator5 = (ECUP_DataStore() >=
    (Key_Off_Coltage_High_Fault_DataStore()));

  /* Logic: '<S103>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S103>/motohawk_data_read'
   */
  rtb_LogicalOperator_pw = ((rtb_LogicalOperator5 && Shutdown_Req_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S103>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Key_Off_Voltage_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(74, rtb_LogicalOperator_pw);
    UpdateFault(74);
  }

  /* S-Function Block: <S25>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s25_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ey = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S25>/Switch' incorporates:
   *  Constant: '<S25>/Constant'
   *  Logic: '<S21>/Logical Operator5'
   *  S-Function (motohawk_sfun_data_read): '<S25>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S25>/motohawk_delta_time'
   *  Sum: '<S25>/Sum'
   */
  if (!rtb_Merge_dr) {
    rtb_Merge_cq = rtb_motohawk_delta_time_ey + Solectria_Enable_timer_DataStore
      ();
  } else {
    rtb_Merge_cq = 0.0;
  }

  /* End of Switch: '<S25>/Switch' */
  /* RelationalOperator: '<S20>/Compare' incorporates:
   *  Constant: '<S20>/Constant'
   */
  rtb_Compare_nd = (Mooventure2016_Rev5_B.s263_Merge == 4.0);

  /* Logic: '<S21>/Logical Operator4' incorporates:
   *  Logic: '<S21>/Logical Operator3'
   *  RelationalOperator: '<S21>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S21>/motohawk_calibration1'
   */
  rtb_LogicalOperator4_j = (((!rtb_Merge_dr) && (rtb_Merge_cq >=
    (Load_Enable_Delay_DataStore())) && rtb_Compare_nd));

  /* S-Function (motohawk_sfun_data_write): '<S14>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Batt_Load_Enable */
  {
    Batt_Load_Enable_DataStore() = rtb_LogicalOperator4_j;
  }

  /* S-Function (motohawk_sfun_data_write): '<S14>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Batt_Contactor_Status */
  {
    Batt_Contactor_Status_DataStore() = rtb_Compare_nd;
  }

  /* Logic: '<S21>/Logical Operator' */
  rtb_LogicalOperator_d = ((Mooventure2016_Rev5_B.s21_LogicalOperator2 ||
    Mooventure2016_Rev5_B.s662_VehicleReadyOutput));

  /* S-Function (motohawk_sfun_data_write): '<S21>/motohawk_data_write' */
  /* Write to Data Storage as scalar: MPRD_KeepAlive */
  {
    MPRD_KeepAlive_DataStore() = rtb_LogicalOperator_d;
  }

  /* Saturate: '<S23>/Saturation' */
  rtb_Saturation_im = rtb_Switch_h >= 86400.0 ? 86400.0 : rtb_Switch_h <= 0.0 ?
    0.0 : rtb_Switch_h;

  /* S-Function (motohawk_sfun_data_write): '<S23>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Contactor_Disable_Timer */
  {
    Contactor_Disable_Timer_DataStore() = rtb_Saturation_im;
  }

  /* Saturate: '<S24>/Saturation' */
  rtb_Saturation_ds = rtb_Switch_mf >= 86400.0 ? 86400.0 : rtb_Switch_mf <= 0.0 ?
    0.0 : rtb_Switch_mf;

  /* S-Function (motohawk_sfun_data_write): '<S24>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Voltage_Filt */
  {
    Voltage_Filt_DataStore() = rtb_Saturation_ds;
  }

  /* Saturate: '<S25>/Saturation' */
  rtb_Saturation_b = rtb_Merge_cq >= 86400.0 ? 86400.0 : rtb_Merge_cq <= 0.0 ?
    0.0 : rtb_Merge_cq;

  /* S-Function (motohawk_sfun_data_write): '<S25>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Solectria_Enable_timer */
  {
    Solectria_Enable_timer_DataStore() = rtb_Saturation_b;
  }

  /* Saturate: '<S66>/Saturation' */
  rtb_Saturation_a = rtb_Switch_ja >= 16000.0 ? 16000.0 : rtb_Switch_ja <= 0.0 ?
    0.0 : rtb_Switch_ja;

  /* S-Function (motohawk_sfun_data_write): '<S66>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Engine_On_Timer */
  {
    Engine_On_Timer_DataStore() = rtb_Saturation_a;
  }

  /* Saturate: '<S67>/Saturation' */
  rtb_Saturation_k = rtb_Switch_c >= 16000.0 ? 16000.0 : rtb_Switch_c <= 0.0 ?
    0.0 : rtb_Switch_c;

  /* S-Function (motohawk_sfun_data_write): '<S67>/motohawk_data_write' */
  /* Write to Data Storage as scalar: SOC_Low_Timer */
  {
    SOC_Low_Timer_DataStore() = rtb_Saturation_k;
  }

  /* Saturate: '<S68>/Saturation' */
  rtb_Saturation_m = rtb_Switch_fi >= 16000.0 ? 16000.0 : rtb_Switch_fi <= 0.0 ?
    0.0 : rtb_Switch_fi;

  /* S-Function (motohawk_sfun_data_write): '<S68>/motohawk_data_write' */
  /* Write to Data Storage as scalar: SOC_High_Timer */
  {
    SOC_High_Timer_DataStore() = rtb_Saturation_m;
  }

  /* Saturate: '<S69>/Saturation' */
  rtb_Saturation_br = rtb_Switch_d >= 16000.0 ? 16000.0 : rtb_Switch_d <= 0.0 ?
    0.0 : rtb_Switch_d;

  /* S-Function (motohawk_sfun_data_write): '<S69>/motohawk_data_write' */
  /* Write to Data Storage as scalar: SOC_Critical_Timer */
  {
    SOC_Critical_Timer_DataStore() = rtb_Saturation_br;
  }

  /* Saturate: '<S70>/Saturation' */
  rtb_Saturation_e = rtb_Switch_f >= 16000.0 ? 16000.0 : rtb_Switch_f <= 0.0 ?
    0.0 : rtb_Switch_f;

  /* S-Function (motohawk_sfun_data_write): '<S70>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Vehicle_Speed_On_Timer */
  {
    Vehicle_Speed_On_Timer_DataStore() = rtb_Saturation_e;
  }

  /* Saturate: '<S71>/Saturation' */
  rtb_Saturation_in = rtb_Switch_e >= 16000.0 ? 16000.0 : rtb_Switch_e <= 0.0 ?
    0.0 : rtb_Switch_e;

  /* S-Function (motohawk_sfun_data_write): '<S71>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Vehicle_Speed_Off_Timer */
  {
    Vehicle_Speed_Off_Timer_DataStore() = rtb_Saturation_in;
  }

  /* S-Function (motohawk_sfun_data_write): '<S18>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TorqueRequest */
  {
    TorqueRequest_DataStore() = Mooventure2016_Rev5_B.s121_MultiportSwitch;
  }

  /* DataTypeConversion: '<S18>/Data Type Conversion1' */
  if (rtIsNaN(rtb_Merge_l) || rtIsInf(rtb_Merge_l)) {
    rtb_UnitDelay_m = 0.0;
  } else {
    rtb_UnitDelay_m = fmod(floor(rtb_Merge_l), 4.294967296E+9);
  }

  rtb_DataTypeConversion1_g = rtb_UnitDelay_m < 0.0 ? -(int32_T)(uint32_T)
    -rtb_UnitDelay_m : (int32_T)(uint32_T)rtb_UnitDelay_m;

  /* End of DataTypeConversion: '<S18>/Data Type Conversion1' */

  /* S-Function (motohawk_sfun_data_write): '<S18>/motohawk_data_write3' */
  /* Write to Data Storage as scalar: Hybrid_State */
  {
    Hybrid_State_DataStore() = rtb_DataTypeConversion1_g;
  }

  /* Outputs for Enabled SubSystem: '<S114>/Brake Disable' incorporates:
   *  EnablePort: '<S125>/Enable'
   */
  /* RelationalOperator: '<S114>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration2'
   */
  if (Mooventure2016_Rev5_B.s193_Brake_Position_l <
      (Cruise_Disable_Brake_DataStore())) {
    /* S-Function (motohawk_sfun_data_write): '<S125>/motohawk_data_write1' incorporates:
     *  Constant: '<S125>/Constant'
     */
    /* Write to Data Storage as scalar: CruiseOn */
    {
      CruiseOn_DataStore() = FALSE;
    }
  }

  /* End of RelationalOperator: '<S114>/Relational Operator1' */
  /* End of Outputs for SubSystem: '<S114>/Brake Disable' */
  /* Outputs for Enabled SubSystem: '<S126>/Speed Decrease' incorporates:
   *  EnablePort: '<S133>/Enable'
   */
  /* Logic: '<S126>/Logical Operator' incorporates:
   *  RelationalOperator: '<S131>/FixPt Relational Operator'
   *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read'
   *  UnitDelay: '<S131>/Delay Input1'
   */
  if (CruiseOn_DataStore() && (rtb_LogicalOperator5_c >
       Mooventure2016_Rev5_DWork.s131_DelayInput1_DSTATE)) {
    /* Sum: '<S133>/Add' incorporates:
     *  Constant: '<S133>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S133>/motohawk_data_read1'
     */
    rtb_Add_l = CruiseSpeed_DataStore() - 1.0;

    /* S-Function (motohawk_sfun_data_write): '<S133>/motohawk_data_write' */
    /* Write to Data Storage as scalar: CruiseSpeed */
    {
      CruiseSpeed_DataStore() = rtb_Add_l;
    }
  }

  /* End of Logic: '<S126>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S126>/Speed Decrease' */

  /* Outputs for Enabled SubSystem: '<S126>/Speed Increase' incorporates:
   *  EnablePort: '<S134>/Enable'
   */
  /* Logic: '<S126>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S132>/FixPt Relational Operator'
   *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read'
   *  UnitDelay: '<S132>/Delay Input1'
   */
  if (CruiseOn_DataStore() && (rtb_Merge_oi >
       Mooventure2016_Rev5_DWork.s132_DelayInput1_DSTATE)) {
    /* Sum: '<S134>/Add' incorporates:
     *  Constant: '<S134>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S134>/motohawk_data_read1'
     */
    rtb_Add_e = CruiseSpeed_DataStore() + 1.0;

    /* S-Function (motohawk_sfun_data_write): '<S134>/motohawk_data_write' */
    /* Write to Data Storage as scalar: CruiseSpeed */
    {
      CruiseSpeed_DataStore() = rtb_Add_e;
    }
  }

  /* End of Logic: '<S126>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S126>/Speed Increase' */

  /* Outputs for Enabled SubSystem: '<S128>/Enabled Subsystem1' incorporates:
   *  EnablePort: '<S147>/Enable'
   */
  /* RelationalOperator: '<S146>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S146>/Delay Input1'
   */
  if ((rtb_Merge_eh > Mooventure2016_Rev5_DWork.s146_DelayInput1_DSTATE) > 0) {
    /* S-Function (motohawk_sfun_data_write): '<S147>/motohawk_data_write1' incorporates:
     *  Constant: '<S147>/Constant'
     */
    /* Write to Data Storage as scalar: CruiseOn */
    {
      CruiseOn_DataStore() = TRUE;
    }
  }

  /* End of RelationalOperator: '<S146>/FixPt Relational Operator' */
  /* End of Outputs for SubSystem: '<S128>/Enabled Subsystem1' */
  /* RelationalOperator: '<S114>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration1'
   */
  rtb_LogicalOperator5 = (rtb_Product >= (Cruise_On_Speed_DataStore()));

  /* Logic: '<S114>/Logical Operator1' incorporates:
   *  Logic: '<S114>/Logical Operator'
   *  Logic: '<S114>/Logical Operator2'
   *  S-Function (motohawk_sfun_data_read): '<S114>/motohawk_data_read'
   */
  rtb_LogicalOperator5 = (rtb_LogicalOperator5 && (rtb_LogicalOperator5_c ||
    rtb_Merge_oi) && Mooventure2016_Rev5_B.s130_System && (!CruiseOn_DataStore()));

  /* Product: '<S114>/Product1' */
  rtb_Product1_h = rtb_Product * (real_T)rtb_LogicalOperator5;

  /* Outputs for Enabled SubSystem: '<S114>/System Start' incorporates:
   *  EnablePort: '<S129>/Enable'
   */
  if (rtb_LogicalOperator5) {
    /* S-Function (motohawk_sfun_data_write): '<S129>/motohawk_data_write' */
    /* Write to Data Storage as scalar: CruiseSpeed */
    {
      CruiseSpeed_DataStore() = rtb_Product1_h;
    }

    /* S-Function (motohawk_sfun_data_write): '<S129>/motohawk_data_write1' incorporates:
     *  Constant: '<S129>/Constant'
     */
    /* Write to Data Storage as scalar: CruiseOn */
    {
      CruiseOn_DataStore() = TRUE;
    }
  }

  /* End of Outputs for SubSystem: '<S114>/System Start' */

  /* Product: '<S138>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S136>/motohawk_calibration2'
   */
  rtb_UnitDelay_o = rtb_Product5 * (ETC_IGain_DataStore());

  /* S-Function Block: <S143>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s143_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ok = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S143>/Sum' incorporates:
   *  Product: '<S143>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S143>/motohawk_delta_time'
   */
  rtb_Merge_cq = rtb_UnitDelay_o * rtb_motohawk_delta_time_ok +
    Mooventure2016_Rev5_B.s143_Switch1;

  /* MinMax: '<S144>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S136>/motohawk_calibration3'
   */
  rtb_UnitDelay_o = (rtb_Merge_cq >= (ETC_IMin_DataStore())) || rtIsNaN
    ((ETC_IMin_DataStore())) ? rtb_Merge_cq : (ETC_IMin_DataStore());

  /* MinMax: '<S144>/MinMax1' incorporates:
   *  MinMax: '<S144>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S136>/motohawk_calibration4'
   */
  rtb_Merge_bg = (rtb_UnitDelay_o <= (ETC_IMax_DataStore())) || rtIsNaN
    ((ETC_IMax_DataStore())) ? rtb_UnitDelay_o : (ETC_IMax_DataStore());

  /* Gain: '<S154>/Gain' */
  rtb_UnitDelay_o = -Mooventure2016_Rev5_B.s261_Merge;

  /* Sum: '<S164>/Sum' incorporates:
   *  Constant: '<S164>/LimitingBegins'
   */
  rtb_UnitDelay_m = rtb_UnitDelay_o - 125.0;

  /* Switch: '<S164>/Switch1' incorporates:
   *  Constant: '<S166>/Constant'
   *  RelationalOperator: '<S166>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S164>/motohawk_calibration'
   */
  if (rtb_UnitDelay_m >= 0.0) {
    /* Switch: '<S164>/Switch' incorporates:
     *  Constant: '<S164>/LimitingBegins1'
     *  Constant: '<S164>/LimitingBegins2'
     *  Constant: '<S164>/exponentiallimt'
     *  Constant: '<S164>/slope'
     *  Constant: '<S164>/yintercept'
     *  Math: '<S164>/Math Function'
     *  Product: '<S164>/Divide'
     *  Product: '<S164>/Product'
     *  RelationalOperator: '<S164>/Relational Operator'
     *  Sum: '<S164>/Sum1'
     */
    if (160.0 > rtb_UnitDelay_o) {
      rtb_Merge_cq = 0.0197 * rtb_UnitDelay_m + 0.1003;
    } else {
      rtb_Merge_cq = rt_powd_snf(rtb_UnitDelay_m, 3.172) / 100000.0;
    }

    /* End of Switch: '<S164>/Switch' */
  } else {
    rtb_Merge_cq = (TorqueRecoveryValue_DataStore());
  }

  /* End of Switch: '<S164>/Switch1' */
  /* S-Function Block: <S165>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s165_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_kf = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S165>/Sum' incorporates:
   *  Product: '<S165>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S165>/motohawk_delta_time'
   */
  rtb_Merge_cq = rtb_Merge_cq * rtb_motohawk_delta_time_kf +
    Mooventure2016_Rev5_B.s165_Switch1;

  /* MinMax: '<S167>/MinMax' incorporates:
   *  Constant: '<S161>/Constant'
   */
  rtb_UnitDelay_m = rtb_Merge_cq >= 0.0 ? rtb_Merge_cq : 0.0;

  /* Saturate: '<S183>/Saturation' */
  rtb_Saturation_mr = rtb_Switch_jf >= 16000.0 ? 16000.0 : rtb_Switch_jf <= 0.0 ?
    0.0 : rtb_Switch_jf;

  /* S-Function (motohawk_sfun_data_write): '<S183>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TC_Event_Timer */
  {
    TC_Event_Timer_DataStore() = rtb_Saturation_mr;
  }

  /* S-Function (motohawk_sfun_data_write): '<S19>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Vehicle_Enable */
  {
    Vehicle_Enable_DataStore() = Mooventure2016_Rev5_B.s186_Vehicle_Enable;
  }

  /* S-Function (motohawk_sfun_data_write): '<S19>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Torque_Enable */
  {
    Torque_Enable_DataStore() = Mooventure2016_Rev5_B.s186_Torque_Enable;
  }

  /* S-Function (motohawk_sfun_data_write): '<S19>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: Vehicle_Ready */
  {
    Vehicle_Ready_DataStore() = Mooventure2016_Rev5_B.s186_Vehicle_Ready;
  }

  /* Saturate: '<S302>/Saturation' */
  rtb_Saturation_ib = rtb_Switch_m >= 86400.0 ? 86400.0 : rtb_Switch_m <= 0.0 ?
    0.0 : rtb_Switch_m;

  /* S-Function (motohawk_sfun_data_write): '<S302>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay1 */
  {
    ButtonDelay1_DataStore() = rtb_Saturation_ib;
  }

  /* Saturate: '<S303>/Saturation' */
  rtb_Saturation_kw = rtb_Switch_pn >= 86400.0 ? 86400.0 : rtb_Switch_pn <= 0.0 ?
    0.0 : rtb_Switch_pn;

  /* S-Function (motohawk_sfun_data_write): '<S303>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay2 */
  {
    ButtonDelay2_DataStore() = rtb_Saturation_kw;
  }

  /* Saturate: '<S304>/Saturation' */
  rtb_Saturation_ij = rtb_DataTypeConversion3 >= 86400.0 ? 86400.0 :
    rtb_DataTypeConversion3 <= 0.0 ? 0.0 : rtb_DataTypeConversion3;

  /* S-Function (motohawk_sfun_data_write): '<S304>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay3 */
  {
    ButtonDelay3_DataStore() = rtb_Saturation_ij;
  }

  /* Saturate: '<S305>/Saturation' */
  rtb_Saturation_df = rtb_DataTypeConversion4 >= 86400.0 ? 86400.0 :
    rtb_DataTypeConversion4 <= 0.0 ? 0.0 : rtb_DataTypeConversion4;

  /* S-Function (motohawk_sfun_data_write): '<S305>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay4 */
  {
    ButtonDelay4_DataStore() = rtb_Saturation_df;
  }

  /* Saturate: '<S306>/Saturation' */
  rtb_Saturation_ig = rtb_Switch_n >= 86400.0 ? 86400.0 : rtb_Switch_n <= 0.0 ?
    0.0 : rtb_Switch_n;

  /* S-Function (motohawk_sfun_data_write): '<S306>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay5 */
  {
    ButtonDelay5_DataStore() = rtb_Saturation_ig;
  }

  /* S-Function (motohawk_sfun_data_write): '<S194>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Eaton_Plugged_In */
  {
    Eaton_Plugged_In_DataStore() = rtb_Eaton_Plugged_In;
  }

  /* S-Function (motohawk_sfun_data_write): '<S194>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Eaton_Charging */
  {
    Eaton_Charging_DataStore() = rtb_Eaton_Charging;
  }

  /* S-Function (motohawk_sfun_code_cover): '<S2>/motohawk_code_coverage' */
  /* Code Coverage Test: Mooventure2016_Rev5/Foreground */
  {
    extern void MH_CodeCovered(uint32_T idx);
    MH_CodeCovered(5);
  }

  /* Update for UnitDelay: '<S140>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s140_UnitDelay_DSTATE = rtb_Product3;

  /* Update for UnitDelay: '<S141>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s141_UnitDelay_DSTATE = rtb_Product;

  /* Update for UnitDelay: '<S142>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s142_UnitDelay_DSTATE = rtb_Product4;

  /* Update for UnitDelay: '<S135>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s135_DelayInput1_DSTATE = rtb_Compare;

  /* Update for UnitDelay: '<S143>/Unit Delay' incorporates:
   *  MinMax: '<S144>/MinMax1'
   */
  Mooventure2016_Rev5_DWork.s143_UnitDelay_DSTATE = rtb_Merge_bg;

  /* Update for UnitDelay: '<S165>/Unit Delay' incorporates:
   *  Constant: '<S161>/Constant'
   *  Constant: '<S161>/Constant1'
   *  MinMax: '<S167>/MinMax'
   *  MinMax: '<S167>/MinMax1'
   */
  Mooventure2016_Rev5_DWork.s165_UnitDelay_DSTATE = rtb_UnitDelay_m <= 1500.0 ?
    rtb_UnitDelay_m : 1500.0;

  /* Update for UnitDelay: '<S163>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s163_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s163_Sum1;

  /* Update for UnitDelay: '<S266>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s266_UnitDelay_DSTATE = rtb_Sum1;

  /* Update for UnitDelay: '<S171>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s171_UnitDelay_DSTATE = rtb_Sum1_j;

  /* Update for UnitDelay: '<S268>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s268_UnitDelay_DSTATE = rtb_Sum1_c;

  /* Update for S-Function (motohawk_sfun_dout): '<S532>/motohawk_dout1' */

  /* S-Function Block: DOut4600p0001 */
  {
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S532>/motohawk_dout10' */

  /* S-Function Block: DOut4601p0001 */
  {
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S532>/motohawk_dout11' */

  /* S-Function Block: DOut4602p0001 */
  {
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S532>/motohawk_dout12' */

  /* S-Function Block: DOut4603p0001 */
  {
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S532>/motohawk_dout13' */

  /* S-Function Block: DOut4604p0001 */
  {
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S532>/motohawk_dout2' */

  /* S-Function Block: DOut4605p0001 */
  {
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S532>/motohawk_dout3' */

  /* S-Function Block: DOut4606p0001 */
  {
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S532>/motohawk_dout4' */

  /* S-Function Block: DOut4607p0001 */
  {
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S532>/motohawk_dout5' */

  /* S-Function Block: DOut4608p0001 */
  {
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S532>/motohawk_dout6' */

  /* S-Function Block: DOut4609p0001 */
  {
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S532>/motohawk_dout7' */

  /* S-Function Block: DOut4610p0001 */
  {
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S532>/motohawk_dout8' */

  /* S-Function Block: DOut4611p0001 */
  {
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S532>/motohawk_dout9' */

  /* S-Function Block: DOut4612p0001 */
  {
  }

  /* Update for UnitDelay: '<S242>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s242_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s242_Sum1;

  /* Update for UnitDelay: '<S241>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s241_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s241_Sum1;

  /* Update for S-Function (motohawk_sfun_dout): '<S533>/motohawk_dout1' */

  /* S-Function Block: DOut4826p0001 */
  {
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S533>/motohawk_dout2' */

  /* S-Function Block: DOut4827p0001 */
  {
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S533>/motohawk_dout6' */

  /* S-Function Block: DOut4831p0001 */
  {
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S533>/motohawk_dout4' */

  /* S-Function Block: DOut4829p0001 */
  {
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S533>/motohawk_dout5' */

  /* S-Function Block: DOut4830p0001 */
  {
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S533>/motohawk_dout3' */

  /* S-Function Block: DOut4828p0001 */
  {
  }

  /* Update for UnitDelay: '<S85>/Unit Delay1' */
  Mooventure2016_Rev5_DWork.s85_UnitDelay1_DSTATE =
    Mooventure2016_Rev5_B.s241_Sum1;

  /* Update for UnitDelay: '<S85>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s85_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s242_Sum1;

  /* Update for UnitDelay: '<S88>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s88_UnitDelay_DSTATE = (real_T)rtb_Heater_Temp_Raw;

  /* Update for UnitDelay: '<S98>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s98_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s193_Brake_Position_l;

  /* Update for UnitDelay: '<S107>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s107_DelayInput1_DSTATE = rtb_Merge_caz;

  /* Update for UnitDelay: '<S108>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s108_DelayInput1_DSTATE = rtb_Merge_eh;

  /* Update for UnitDelay: '<S109>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s109_DelayInput1_DSTATE = rtb_Merge_oi;

  /* Update for UnitDelay: '<S110>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s110_DelayInput1_DSTATE = rtb_LogicalOperator5_c;

  /* Update for UnitDelay: '<S106>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s106_DelayInput1_DSTATE = rtb_Merge_nl;

  /* Update for UnitDelay: '<S101>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s101_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s234_DataTypeConversion;

  /* Update for UnitDelay: '<S105>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s105_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s447_Merge;

  /* Update for UnitDelay: '<S97>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s97_UnitDelay_DSTATE = rtb_Merge_ko;

  /* Update for UnitDelay: '<S131>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s131_DelayInput1_DSTATE = rtb_LogicalOperator5_c;

  /* Update for UnitDelay: '<S132>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s132_DelayInput1_DSTATE = rtb_Merge_oi;

  /* Update for UnitDelay: '<S146>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s146_DelayInput1_DSTATE = rtb_Merge_eh;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
