/*
 * File: Mooventure2016_Rev5_Foreground.c
 *
 * Code generated for Simulink model 'Mooventure2016_Rev5'.
 *
 * Model version                  : 1.2161
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Fri Sep 07 17:16:08 2018
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

/* Named constants for Stateflow: '<S111>/Chart' */
#define Mooventure2016_Rev5_IN_Driving (1U)
#define Mooventure2016_Rev5_IN_Nuetral (2U)
#define Mooventure2016_Rev5_IN_RegenBrake (3U)
#define Mooventure2016_Rev5_IN_RegenDrag (4U)

/* Named constants for Stateflow: '<S176>/ABS Chart' */
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

/* Named constants for Stateflow: '<S190>/Chart' */
#define Mooventure2016_Rev5_IN_ON      (1U)
#define Mooventure2016_Rev5_IN_Off_n   (2U)
#define Mooventure2016_Rev5_IN_RSM     (3U)
#define Mooventure2016_Rev5_IN_SetMinus (4U)
#define Mooventure2016_Rev5_IN_SetPlus (5U)
#define Mooventure2016_Rev5_IN_default_n (6U)

/* Named constants for Stateflow: '<S530>/Coil1State' */
#define Mooventure2016_Rev5_IN_Coil1Disabled (1U)
#define Mooventure2016_Rev5_IN_Coil1Enabled (2U)

/* Named constants for Stateflow: '<S530>/Coil2State' */
#define Mooventure2016_Rev5_IN_Coil2Disabled (1U)
#define Mooventure2016_Rev5_IN_Coil2Enabled (2U)

/* Named constants for Stateflow: '<S530>/Coil2State1' */
#define Mooventure2016_Rev5_IN_Coil3Disabled (1U)
#define Mooventure2016_Rev5_IN_Coil3Enabled (2U)

/* Named constants for Stateflow: '<S531>/Chart' */
#define Mooventure2016_Rev5_IN_FlashOff (1U)
#define Mooventure2016_Rev5_IN_FlashOn (2U)
#define Mooventure2016_Rev5_IN_Normal  (3U)
#define Mooventure2016_Rev5_IN_Solid   (4U)
#define Mooventure2016_Rev5_IN_Wait    (5U)

/* Named constants for Stateflow: '<S531>/PowerSteering' */
#define Mooventure2016_Rev5_IN_INIT    (1U)
#define Mooventure2016_Rev5_IN_MotorRunning (2U)
#define Mooventure2016_Rev5_IN_PowerSteeringOff (3U)
#define Mooventure2016_Rev5_IN_PowerSteeringOn (4U)

/* Forward declaration for local functions */
static void Mooventure2016_Rev5_Master(void);

/*
 * Initial conditions for atomic system:
 *    '<S111>/Chart'
 *    '<S113>/Chart'
 *    '<S117>/Chart'
 */
void Mooventure2016_Rev5_Chart_Init(rtB_Chart_Mooventure2016_Rev5 *localB,
  rtDW_Chart_Mooventure2016_Rev5 *localDW)
{
  localDW->s121_is_active_c20_Mooventure2016_Rev5 = 0U;
  localDW->s121_is_c20_Mooventure2016_Rev5 = 0U;
  localB->s121_driveTorque = 0.0;
  localB->s121_regenTorque = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S111>/Chart'
 *    '<S113>/Chart'
 *    '<S117>/Chart'
 */
void Mooventure2016_Rev5_Chart(real_T rtu_accel, real_T rtu_brake, real_T
  rtu_speed, real_T rtu_accelStart, real_T rtu_accelEnd, real_T rtu_brakeStart,
  real_T rtu_brakeEnd, real_T rtu_regenStart, real_T rtu_regenEnd, real_T
  rtu_dragTorque, rtB_Chart_Mooventure2016_Rev5 *localB,
  rtDW_Chart_Mooventure2016_Rev5 *localDW)
{
  /* Gateway: Foreground/Control/Hybrid Control Code/CrawlHomeMode/Chart */
  /* During: Foreground/Control/Hybrid Control Code/CrawlHomeMode/Chart */
  if (localDW->s121_is_active_c20_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Hybrid Control Code/CrawlHomeMode/Chart */
    localDW->s121_is_active_c20_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S121>:2' */
    localDW->s121_is_c20_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Nuetral;
  } else {
    switch (localDW->s121_is_c20_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Driving:
      /* During 'Driving': '<S121>:3' */
      if ((rtu_accel <= rtu_accelEnd) && (rtu_speed >= rtu_regenStart)) {
        /* Transition: '<S121>:13' */
        localDW->s121_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RegenDrag;
      } else {
        localB->s121_driveTorque = rtu_accel;
        localB->s121_regenTorque = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Nuetral:
      /* During 'Nuetral': '<S121>:1' */
      if (rtu_accel >= rtu_accelStart) {
        /* Transition: '<S121>:11' */
        localDW->s121_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Driving;
      } else {
        localB->s121_driveTorque = 0.0;
        localB->s121_regenTorque = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_RegenBrake:
      /* During 'RegenBrake': '<S121>:10' */
      if (rtu_speed <= rtu_regenEnd) {
        /* Transition: '<S121>:15' */
        localDW->s121_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Nuetral;
      } else if (rtu_brake <= rtu_brakeEnd) {
        /* Transition: '<S121>:18' */
        localDW->s121_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RegenDrag;
      } else {
        localB->s121_regenTorque = rtu_brake + rtu_dragTorque;
        localB->s121_driveTorque = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_RegenDrag:
      /* During 'RegenDrag': '<S121>:4' */
      if (rtu_speed <= rtu_regenEnd) {
        /* Transition: '<S121>:14' */
        localDW->s121_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Nuetral;
      } else if (rtu_brake >= rtu_brakeStart) {
        /* Transition: '<S121>:16' */
        localDW->s121_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RegenBrake;
      } else if (rtu_accel >= rtu_accelStart) {
        /* Transition: '<S121>:17' */
        localDW->s121_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Driving;
      } else {
        localB->s121_regenTorque = rtu_dragTorque;
        localB->s121_driveTorque = 0.0;
      }
      break;

     default:
      /* Transition: '<S121>:2' */
      localDW->s121_is_c20_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Nuetral;
      break;
    }
  }
}

/*
 * Initial conditions for atomic system:
 *    '<S176>/ABS Chart'
 *    '<S177>/CALC Chart'
 */
void Mooventure2016_Rev5_ABSChart_Init(rtB_ABSChart_Mooventure2016_Rev5 *localB,
  rtDW_ABSChart_Mooventure2016_Rev5 *localDW)
{
  localDW->s179_is_active_c12_Mooventure2016_Rev5 = 0U;
  localDW->s179_is_c12_Mooventure2016_Rev5 = 0U;
  localDW->s179_lastTorque = 0.0;
  localB->s179_TorqueOut = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S176>/ABS Chart'
 *    '<S177>/CALC Chart'
 */
void Mooventure2016_Rev5_ABSChart(real_T rtu_Activate, real_T rtu_TorqueIn,
  real_T rtu_RampOut, real_T rtu_RampIn, real_T rtu_MinTorque,
  rtB_ABSChart_Mooventure2016_Rev5 *localB, rtDW_ABSChart_Mooventure2016_Rev5
  *localDW)
{
  /* Gateway: Foreground/Control/Hybrid Control Code/Traction Control/ABS Ramp Control/ABS Chart */
  /* During: Foreground/Control/Hybrid Control Code/Traction Control/ABS Ramp Control/ABS Chart */
  if (localDW->s179_is_active_c12_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Hybrid Control Code/Traction Control/ABS Ramp Control/ABS Chart */
    localDW->s179_is_active_c12_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S179>:8' */
    localDW->s179_is_c12_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Default;
  } else {
    switch (localDW->s179_is_c12_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Default:
      /* During 'Default': '<S179>:7' */
      if (rtu_Activate != 0.0) {
        /* Transition: '<S179>:10' */
        localDW->s179_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RampOut;

        /* Entry 'RampOut': '<S179>:9' */
        localDW->s179_lastTorque = rtu_TorqueIn;
      } else {
        localB->s179_TorqueOut = rtu_TorqueIn;
      }
      break;

     case Mooventure2016_Rev5_IN_RampIn:
      /* During 'RampIn': '<S179>:13' */
      if (localB->s179_TorqueOut >= rtu_TorqueIn) {
        /* Transition: '<S179>:15' */
        localDW->s179_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Default;
      } else {
        localB->s179_TorqueOut = localDW->s179_lastTorque;
        localDW->s179_lastTorque = localDW->s179_lastTorque + rtu_RampIn;
      }
      break;

     case Mooventure2016_Rev5_IN_RampOut:
      /* During 'RampOut': '<S179>:9' */
      if (localB->s179_TorqueOut <= rtu_MinTorque) {
        /* Transition: '<S179>:18' */
        localDW->s179_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Saturated;
      } else if (!(rtu_Activate != 0.0)) {
        /* Transition: '<S179>:20' */
        localDW->s179_is_c12_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_RampIn;
      } else {
        localB->s179_TorqueOut = localDW->s179_lastTorque;
        localDW->s179_lastTorque = localDW->s179_lastTorque - rtu_RampOut;
      }
      break;

     case Mooventure2016_Rev5_IN_Saturated:
      /* During 'Saturated': '<S179>:16' */
      if (!(rtu_Activate != 0.0)) {
        /* Transition: '<S179>:21' */
        localDW->s179_is_c12_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_RampIn;
      } else {
        localB->s179_TorqueOut = rtu_MinTorque;
      }
      break;

     default:
      /* Transition: '<S179>:8' */
      localDW->s179_is_c12_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Default;
      break;
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S529>/Heater Core Motion Control'
 *    '<S529>/Radiator Motion Control'
 */
void Mooventure2016_Rev5_HeaterCoreMotionControl(real_T rtu_currPos, real_T
  rtu_posRequest, real_T rtu_hyst,
  rtB_HeaterCoreMotionControl_Mooventure2016_Rev5 *localB)
{
  /* MATLAB Function 'Foreground/Outputs/Coolant Outputs/Heater Core Motion Control': '<S578>:1' */
  if ((rtu_currPos <= rtu_posRequest + rtu_hyst) && (rtu_currPos >=
       rtu_posRequest - rtu_hyst)) {
    /* '<S578>:1:3' */
    /* '<S578>:1:4' */
    localB->s578_motorEnable = 0.0;

    /* '<S578>:1:5' */
    localB->s578_motorDirection = 0.0;
  } else if (rtu_currPos < rtu_posRequest) {
    /* '<S578>:1:6' */
    /* '<S578>:1:7' */
    localB->s578_motorEnable = 1.0;

    /* '<S578>:1:8' */
    localB->s578_motorDirection = 0.0;
  } else if (rtu_currPos > rtu_posRequest) {
    /* '<S578>:1:9' */
    /* '<S578>:1:10' */
    localB->s578_motorEnable = 1.0;

    /* '<S578>:1:11' */
    localB->s578_motorDirection = 1.0;
  } else {
    /* '<S578>:1:13' */
    localB->s578_motorEnable = 0.0;

    /* '<S578>:1:14' */
    localB->s578_motorDirection = 0.0;
  }
}

/* Function for Stateflow: '<S15>/Chart' */
static void Mooventure2016_Rev5_Master(void)
{
  real_T u;

  /* During 'Master': '<S28>:82' */
  /* Simulink Function 'calc_max': '<S28>:138' */
  Mooventure2016_Rev5_B.s28_u1 = Mooventure2016_Rev5_B.s364_Merge;
  Mooventure2016_Rev5_B.s28_u2 = Mooventure2016_Rev5_B.s449_Merge;
  Mooventure2016_Rev5_B.s28_u3 = Mooventure2016_Rev5_B.s187_MinCellTemperature;
  Mooventure2016_Rev5_B.s28_u4 = Mooventure2016_Rev5_B.s187_MaxCellTemperature;
  Mooventure2016_Rev5_B.s28_u5 = Mooventure2016_Rev5_B.s396_Merge +
    (Engine_Fan_Offset_DataStore());
  Mooventure2016_Rev5_B.s28_u6 = Mooventure2016_Rev5_B.s401_Merge;
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
  Mooventure2016_Rev5_B.s28_u1_a = Mooventure2016_Rev5_B.s364_Merge;
  Mooventure2016_Rev5_B.s28_u2_e = Mooventure2016_Rev5_B.s449_Merge;
  Mooventure2016_Rev5_B.s28_u3_f = Mooventure2016_Rev5_B.s187_MinCellTemperature;
  Mooventure2016_Rev5_B.s28_u4_d = Mooventure2016_Rev5_B.s187_MaxCellTemperature;
  Mooventure2016_Rev5_B.s28_u5_h = Mooventure2016_Rev5_B.s396_Merge +
    (Engine_Fan_Offset_DataStore());
  Mooventure2016_Rev5_B.s28_u6_k = Mooventure2016_Rev5_B.s401_Merge;
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
        (!(Mooventure2016_Rev5_B.s276_Merge != 0.0)) &&
        (!(Mooventure2016_Rev5_B.s277_Merge != 0.0)) &&
        (Mooventure2016_Rev5_B.s38_Switch < (Low_Threshold_DataStore()) - 1.0))
    {
      /* Transition: '<S28>:103' */
      Mooventure2016_Rev5_DWork.s28_is_Fan = Mooventure2016_Rev5_IN_FanOff;
    } else if ((!(Mooventure2016_Rev5_B.s15_DataTypeConversion3 != 0.0)) &&
               (!(Mooventure2016_Rev5_B.s276_Merge != 0.0)) &&
               (!(Mooventure2016_Rev5_B.s277_Merge != 0.0)) &&
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
        (Mooventure2016_Rev5_B.s276_Merge != 0.0) ||
        (Mooventure2016_Rev5_B.s277_Merge != 0.0)) {
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
        (Mooventure2016_Rev5_B.s276_Merge != 0.0) ||
        (Mooventure2016_Rev5_B.s277_Merge != 0.0) ||
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
        (Mooventure2016_Rev5_B.s276_Merge != 0.0) ||
        (Mooventure2016_Rev5_B.s277_Merge != 0.0)) {
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
    if ((Mooventure2016_Rev5_B.s330_Merge < (Heat_On_Driver_Threshold_DataStore()))
        || (Mooventure2016_Rev5_B.s229_temp_reading >
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
    if ((Mooventure2016_Rev5_B.s330_Merge >= (Heat_On_Driver_Threshold_DataStore
          ())) && (Mooventure2016_Rev5_B.s229_temp_reading <
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
        if (Mooventure2016_Rev5_B.s229_temp_reading <
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
        if (Mooventure2016_Rev5_B.s229_temp_reading <
            (Heater_Core_Threshold_DataStore()) - 8.0) {
          /* Transition: '<S28>:229' */
          Mooventure2016_Rev5_DWork.s28_is_Use_Wants_Heat =
            Mooventure2016_Rev5_IN_Heat_3H;
        } else if (Mooventure2016_Rev5_B.s229_temp_reading >
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
        if (Mooventure2016_Rev5_B.s229_temp_reading <
            (Heater_Core_Threshold_DataStore()) - 10.0) {
          /* Transition: '<S28>:230' */
          Mooventure2016_Rev5_DWork.s28_is_Use_Wants_Heat =
            Mooventure2016_Rev5_IN_Heat_4H;
        } else if (Mooventure2016_Rev5_B.s229_temp_reading >
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
        if (Mooventure2016_Rev5_B.s229_temp_reading >
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
        || (Mooventure2016_Rev5_B.s330_Merge >=
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
        && (Mooventure2016_Rev5_B.s330_Merge <
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
  /* InitializeConditions for Stateflow: '<S190>/Chart' */
  Mooventure2016_Rev5_DWork.s287_is_active_c29_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s287_is_c29_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s287_Out = 0.0;

  /* S-Function Block: <S299>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s299_motohawk_delta_time_DWORK1 = now -
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

  /* InitializeConditions for Stateflow: '<S112>/SystemState' */
  Mooventure2016_Rev5_DWork.s128_is_active_c30_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s128_is_c30_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s128_System = FALSE;

  /* S-Function Block: <S158>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s158_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S154>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s154_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S176>/ABS Chart' */
  Mooventure2016_Rev5_ABSChart_Init(&Mooventure2016_Rev5_B.s176_sf_ABSChart,
    &Mooventure2016_Rev5_DWork.s176_sf_ABSChart);

  /* S-Function Block: <S181>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s181_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S177>/CALC Chart' */
  Mooventure2016_Rev5_ABSChart_Init(&Mooventure2016_Rev5_B.s177_sf_CALCChart,
    &Mooventure2016_Rev5_DWork.s177_sf_CALCChart);

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

  /* S-Function Block: <S234>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s234_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S233>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s233_motohawk_delta_time_DWORK1 = now -
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

  /* S-Function Block: <S598>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s598_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S595>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s595_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S596>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s596_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S597>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s597_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S19>/Chart' */
  Mooventure2016_Rev5_DWork.s184_is_active_c1_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s184_is_c1_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s184_count = 0.0;
  Mooventure2016_Rev5_B.s184_Vehicle_Enable = FALSE;
  Mooventure2016_Rev5_B.s184_Vehicle_Ready = FALSE;
  Mooventure2016_Rev5_B.s184_Torque_Enable = FALSE;
  Mooventure2016_Rev5_B.s184_Keyed_Relay = FALSE;

  /* InitializeConditions for Stateflow: '<S530>/Coil1State' */
  Mooventure2016_Rev5_DWork.s629_is_active_c8_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s629_is_c8_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s629_Coil1State = FALSE;

  /* InitializeConditions for Stateflow: '<S530>/Coil2State' */
  Mooventure2016_Rev5_DWork.s630_is_active_c9_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s630_is_c9_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s630_Coil2State = FALSE;

  /* InitializeConditions for Stateflow: '<S530>/Coil2State1' */
  Mooventure2016_Rev5_DWork.s631_is_active_c10_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s631_is_c10_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s631_Coil3State = FALSE;

  /* InitializeConditions for Stateflow: '<S531>/PowerSteering' */
  Mooventure2016_Rev5_DWork.s658_is_active_c28_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s658_is_c28_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s658_VehicleReadyOutput = FALSE;

  /* InitializeConditions for Stateflow: '<S531>/Chart' */
  Mooventure2016_Rev5_DWork.s651_is_active_c22_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s651_is_c22_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s651_count = 0.0;
  Mooventure2016_Rev5_B.s651_engTemp = 0.0;
  Mooventure2016_Rev5_B.s651_transTemp = 0.0;

  /* S-Function Block: <S656>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s656_motohawk_delta_time_DWORK1 = now -
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

  /* S-Function Block: <S831>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s831_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S850>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s850_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S849>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s849_motohawk_delta_time_DWORK1 = now -
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

  /* S-Function Block: <S300>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s300_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S301>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s301_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

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

  /* S-Function Block: <S141>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s141_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S163>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s163_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }
}

/* Disable for function-call system: '<Root>/Foreground' */
void Mooventure2016_Rev5_Foreground_Disable(void)
{
  /* Disable for Enabled SubSystem: '<S116>/Drive' */
  /* Disable for Outport: '<S153>/IPT_Torque' */
  Mooventure2016_Rev5_B.s116_Torque_Direction = 0.0;
  Mooventure2016_Rev5_DWork.s116_Drive_MODE = FALSE;

  /* End of Disable for SubSystem: '<S116>/Drive' */

  /* Disable for Enabled SubSystem: '<S116>/Reverse' */
  Mooventure2016_Rev5_DWork.s116_Reverse_MODE = FALSE;

  /* End of Disable for SubSystem: '<S116>/Reverse' */
}

/* Start for function-call system: '<Root>/Foreground' */
void Mooventure2016_Rev5_Foreground_Start(void)
{
  /* Start for IfAction SubSystem: '<S18>/CrawlHomeMode' */

  /* InitializeConditions for Stateflow: '<S111>/Chart' */
  Mooventure2016_Rev5_Chart_Init(&Mooventure2016_Rev5_B.s111_sf_Chart,
    &Mooventure2016_Rev5_DWork.s111_sf_Chart);

  /* End of Start for SubSystem: '<S18>/CrawlHomeMode' */

  /* Start for IfAction SubSystem: '<S18>/EcoMode' */

  /* InitializeConditions for Stateflow: '<S113>/Chart' */
  Mooventure2016_Rev5_Chart_Init(&Mooventure2016_Rev5_B.s113_sf_Chart,
    &Mooventure2016_Rev5_DWork.s113_sf_Chart);

  /* End of Start for SubSystem: '<S18>/EcoMode' */

  /* Start for IfAction SubSystem: '<S18>/SUVMode' */

  /* InitializeConditions for Stateflow: '<S117>/Chart' */
  Mooventure2016_Rev5_Chart_Init(&Mooventure2016_Rev5_B.s117_sf_Chart,
    &Mooventure2016_Rev5_DWork.s117_sf_Chart);

  /* End of Start for SubSystem: '<S18>/SUVMode' */

  /* S-Function (motohawk_sfun_probe): '<S530>/motohawk_probe10' */
  (Coil5_AuxCoil_Probe_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S530>/motohawk_probe9' */
  (Coil4_MaleOrangeConnector_Probe_DataStore()) = 0.0;
}

/* Output and update for function-call system: '<Root>/Foreground' */
void Mooventure2016_Rev5_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_Product;
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
  real_T rtb_Heater_Temp_Raw;
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
  real_T rtb_Merge_c1;
  real_T rtb_Merge_hf;
  real_T rtb_Merge_id;
  real_T rtb_Merge_ar;
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
  real_T rtb_motohawk_interpolation_2d;
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
  index_T rtb_motohawk_prelookup_j;
  index_T rtb_motohawk_prelookup1;
  index_T rtb_motohawk_prelookup_h;
  index_T rtb_motohawk_prelookup1_o;
  index_T rtb_motohawk_prelookup_f;
  index_T rtb_motohawk_prelookup1_p;
  index_T rtb_motohawk_prelookup_m;
  index_T rtb_motohawk_prelookup1_oo;
  index_T rtb_motohawk_prelookup1_d;
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
  real_T rtb_Product5;
  real_T rtb_Product3;
  real_T rtb_Product4;
  uint8_T rtb_Compare;
  boolean_T rtb_LogicalOperator5;
  real_T rtb_Switch_m;
  real_T rtb_Switch_n;
  uint16_T rtb_Merge_c13;
  boolean_T rtb_LogicalOperator5_c;
  real_T rtb_Merge_l;
  real_T rtb_Sum1_j;
  real_T rtb_Merge_f;
  real_T rtb_Merge_ns;
  real_T rtb_Merge_o0;
  real_T rtb_Switch_h;
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

  /* UnitDelay: '<S138>/Unit Delay' */
  rtb_UnitDelay_m = Mooventure2016_Rev5_DWork.s138_UnitDelay_DSTATE;

  /* UnitDelay: '<S139>/Unit Delay' */
  rtb_UnitDelay_o = Mooventure2016_Rev5_DWork.s139_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_read_canmsg): '<S194>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3952p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3952p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s194_AgeCount + 1) >
        Mooventure2016_Rev5_B.s194_AgeCount)
      Mooventure2016_Rev5_B.s194_AgeCount++;
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
      Mooventure2016_Rev5_B.s194_IPT_CurrentUsed = (((real_T) tmp0) / ((real_T)
        10)) + ((real_T) -600);
      Mooventure2016_Rev5_B.s194_IPT_CurrentRequest = (((real_T) tmp1) /
        ((real_T) 10)) + ((real_T) -600);
      Mooventure2016_Rev5_B.s194_IPT_MotorSpeed = ((real_T) tmp2) + ((real_T)
        -15000);
      Mooventure2016_Rev5_B.s194_IPT_WheelTorqueDelivered = ((real_T) tmp3) +
        ((real_T) -4000);
      Mooventure2016_Rev5_B.s194_IPT_CurrentLimit = (real_T) tmp4;
      Mooventure2016_Rev5_B.s194_IPT_Antishudder = (real_T) tmp5;
      Mooventure2016_Rev5_B.s194_AgeCount = 0;
    }
  }

  /* If: '<S444>/If' incorporates:
   *  Inport: '<S502>/In1'
   *  Inport: '<S503>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S444>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S444>/override_enable'
   */
  if ((IPT_Motor_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S444>/NewValue' incorporates:
     *  ActionPort: '<S502>/Action Port'
     */
    Mooventure2016_Rev5_B.s444_Merge = (IPT_Motor_Speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S502>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(220);
    }

    /* End of Outputs for SubSystem: '<S444>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S444>/OldValue' incorporates:
     *  ActionPort: '<S503>/Action Port'
     */
    Mooventure2016_Rev5_B.s444_Merge = Mooventure2016_Rev5_B.s194_IPT_MotorSpeed;

    /* S-Function (motohawk_sfun_code_cover): '<S503>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(221);
    }

    /* End of Outputs for SubSystem: '<S444>/OldValue' */
  }

  /* End of If: '<S444>/If' */

  /* Product: '<S112>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration7'
   */
  rtb_Product = Mooventure2016_Rev5_B.s444_Merge * (MPH_Conversion_DataStore());

  /* Sum: '<S139>/Sum2' */
  rtb_UnitDelay_o = rtb_Product - rtb_UnitDelay_o;

  /* S-Function Block: <S139>/motohawk_delta_time */
  rtb_motohawk_delta_time = 0.005;

  /* Switch: '<S136>/Switch' incorporates:
   *  Constant: '<S136>/Constant'
   *  Product: '<S139>/Product'
   *  RelationalOperator: '<S136>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_delta_time): '<S139>/motohawk_delta_time'
   */
  if (rtb_UnitDelay_o / rtb_motohawk_delta_time > 0.0) {
    rtb_Product5 = (CRUISE_DampGainUp_DataStore());
  } else {
    rtb_Product5 = (CRUISE_DampGainDown_DataStore());
  }

  /* End of Switch: '<S136>/Switch' */

  /* Product: '<S136>/Product3' */
  rtb_Product3 = rtb_Product5 * rtb_Product;

  /* S-Function Block: <S138>/motohawk_delta_time */
  rtb_motohawk_delta_time_k = 0.005;

  /* Product: '<S138>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S138>/motohawk_delta_time'
   *  Sum: '<S138>/Sum2'
   */
  Mooventure2016_Rev5_B.s138_Product = (rtb_Product3 - rtb_UnitDelay_m) /
    rtb_motohawk_delta_time_k;

  /* UnitDelay: '<S140>/Unit Delay' */
  rtb_UnitDelay_o = Mooventure2016_Rev5_DWork.s140_UnitDelay_DSTATE;

  /* Sum: '<S136>/Sum2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S112>/motohawk_data_read2'
   */
  Mooventure2016_Rev5_B.s136_Sum2 = CruiseSpeed_DataStore() - rtb_Product;

  /* Product: '<S136>/Product5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration6'
   */
  rtb_Product5 = Mooventure2016_Rev5_B.s136_Sum2 * (CRUISE_ErrorGain_DataStore());

  /* Product: '<S136>/Product4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration1'
   */
  rtb_Product4 = (CRUISE_DGain_DataStore()) * rtb_Product5;

  /* S-Function Block: <S140>/motohawk_delta_time */
  rtb_motohawk_delta_time_p = 0.005;

  /* Product: '<S140>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S140>/motohawk_delta_time'
   *  Sum: '<S140>/Sum2'
   */
  Mooventure2016_Rev5_B.s140_Product = (rtb_Product4 - rtb_UnitDelay_o) /
    rtb_motohawk_delta_time_p;

  /* Product: '<S136>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration'
   */
  Mooventure2016_Rev5_B.s136_Product2 = (CRUISE_PGain_DataStore()) *
    rtb_Product5;

  /* RelationalOperator: '<S135>/Compare' incorporates:
   *  Constant: '<S135>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S125>/motohawk_data_read1'
   */
  rtb_Compare = CruiseOn_DataStore();

  /* Switch: '<S141>/Switch1' incorporates:
   *  RelationalOperator: '<S133>/FixPt Relational Operator'
   *  UnitDelay: '<S133>/Delay Input1'
   *  UnitDelay: '<S141>/Unit Delay'
   */
  if (rtb_Compare > Mooventure2016_Rev5_DWork.s133_DelayInput1_DSTATE) {
    Mooventure2016_Rev5_B.s141_Switch1 = 0.0;
  } else {
    Mooventure2016_Rev5_B.s141_Switch1 =
      Mooventure2016_Rev5_DWork.s141_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S141>/Switch1' */

  /* Sum: '<S134>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration5'
   *  Sum: '<S136>/Sum'
   */
  rtb_Switch_m = (((Mooventure2016_Rev5_B.s140_Product -
                    Mooventure2016_Rev5_B.s138_Product) +
                   Mooventure2016_Rev5_B.s136_Product2) +
                  Mooventure2016_Rev5_B.s141_Switch1) +
    (CRUISE_DCOffset_DataStore());

  /* MinMax: '<S143>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S137>/motohawk_calibration'
   */
  rtb_UnitDelay_o = (rtb_Switch_m >= (CRUISE_LwrLim_DataStore())) || rtIsNaN
    ((CRUISE_LwrLim_DataStore())) ? rtb_Switch_m : (CRUISE_LwrLim_DataStore());

  /* MinMax: '<S143>/MinMax1' incorporates:
   *  MinMax: '<S143>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S137>/motohawk_calibration1'
   */
  Mooventure2016_Rev5_B.s143_MinMax1 = (rtb_UnitDelay_o <=
    (CRUISE_UprLim_DataStore())) || rtIsNaN((CRUISE_UprLim_DataStore())) ?
    rtb_UnitDelay_o : (CRUISE_UprLim_DataStore());

  /* Logic: '<S112>/Logical Operator5' incorporates:
   *  Logic: '<S112>/Logical Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration'
   *  S-Function (motohawk_sfun_fault_action): '<S112>/motohawk_fault_action3'
   */
  rtb_LogicalOperator5 = (((Cruise_Control_Enable_DataStore()) != 0.0) &&
    (!GetFaultActionStatus(6)));

  /* S-Function Block: <S230>/motohawk_ain4 Resource: AN23 */
  Mooventure2016_Rev5_B.s230_motohawk_ain4_o1 = AN23_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S246>/If' incorporates:
   *  Inport: '<S247>/In1'
   *  Inport: '<S248>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S246>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S246>/override_enable'
   */
  if ((Cruise_Control_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S246>/NewValue' incorporates:
     *  ActionPort: '<S247>/Action Port'
     */
    Mooventure2016_Rev5_B.s246_Merge = ((uint16_T)
      (Cruise_Control_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S247>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Cruise Control In/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(70);
    }

    /* End of Outputs for SubSystem: '<S246>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S246>/OldValue' incorporates:
     *  ActionPort: '<S248>/Action Port'
     */
    Mooventure2016_Rev5_B.s246_Merge =
      Mooventure2016_Rev5_B.s230_motohawk_ain4_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S248>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Cruise Control In/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(71);
    }

    /* End of Outputs for SubSystem: '<S246>/OldValue' */
  }

  /* End of If: '<S246>/If' */

  /* DataTypeConversion: '<S190>/Data Type Conversion' */
  rtb_UnitDelay_o = (real_T)Mooventure2016_Rev5_B.s246_Merge;

  /* Stateflow: '<S190>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration6'
   */

  /* Gateway: Foreground/Inputs/Cruise Control/Chart */
  /* During: Foreground/Inputs/Cruise Control/Chart */
  if (Mooventure2016_Rev5_DWork.s287_is_active_c29_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Inputs/Cruise Control/Chart */
    Mooventure2016_Rev5_DWork.s287_is_active_c29_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S287>:10' */
    Mooventure2016_Rev5_DWork.s287_is_c29_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_default_n;
  } else {
    switch (Mooventure2016_Rev5_DWork.s287_is_c29_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_ON:
      /* During 'ON': '<S287>:16' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S287>:34' */
        Mooventure2016_Rev5_DWork.s287_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default_n;
      } else {
        Mooventure2016_Rev5_B.s287_Out = 5.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Off_n:
      /* During 'Off': '<S287>:12' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S287>:35' */
        Mooventure2016_Rev5_DWork.s287_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default_n;
      } else {
        Mooventure2016_Rev5_B.s287_Out = 1.0;
      }
      break;

     case Mooventure2016_Rev5_IN_RSM:
      /* During 'RSM': '<S287>:15' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S287>:32' */
        Mooventure2016_Rev5_DWork.s287_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default_n;
      } else {
        Mooventure2016_Rev5_B.s287_Out = 4.0;
      }
      break;

     case Mooventure2016_Rev5_IN_SetMinus:
      /* During 'SetMinus': '<S287>:13' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S287>:26' */
        Mooventure2016_Rev5_DWork.s287_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default_n;
      } else {
        Mooventure2016_Rev5_B.s287_Out = 2.0;
      }
      break;

     case Mooventure2016_Rev5_IN_SetPlus:
      /* During 'SetPlus': '<S287>:14' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S287>:30' */
        Mooventure2016_Rev5_DWork.s287_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default_n;
      } else {
        Mooventure2016_Rev5_B.s287_Out = 3.0;
      }
      break;

     case Mooventure2016_Rev5_IN_default_n:
      /* During 'default': '<S287>:9' */
      if ((rtb_UnitDelay_o < (Off_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (Off_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S287>:22' */
        Mooventure2016_Rev5_DWork.s287_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Off_n;
      } else if ((rtb_UnitDelay_o < (SetPlus_DataStore()) + (HYST_DataStore())) &&
                 (rtb_UnitDelay_o > (SetPlus_DataStore()) - (HYST_DataStore())))
      {
        /* Transition: '<S287>:29' */
        Mooventure2016_Rev5_DWork.s287_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SetPlus;
      } else if ((rtb_UnitDelay_o < (RSM_DataStore()) + (HYST_DataStore())) &&
                 (rtb_UnitDelay_o > (RSM_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S287>:31' */
        Mooventure2016_Rev5_DWork.s287_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RSM;
      } else if ((rtb_UnitDelay_o < (ON_DataStore()) + (HYST_DataStore())) &&
                 (rtb_UnitDelay_o > (ON_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S287>:33' */
        Mooventure2016_Rev5_DWork.s287_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_ON;
      } else if ((rtb_UnitDelay_o < (SetMinus_DataStore()) + (HYST_DataStore()))
                 && (rtb_UnitDelay_o > (SetMinus_DataStore()) - (HYST_DataStore())))
      {
        /* Transition: '<S287>:38' */
        Mooventure2016_Rev5_DWork.s287_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SetMinus;
      } else {
        Mooventure2016_Rev5_B.s287_Out = 0.0;
      }
      break;

     default:
      /* Transition: '<S287>:10' */
      Mooventure2016_Rev5_DWork.s287_is_c29_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_default_n;
      break;
    }
  }

  /* End of Stateflow: '<S190>/Chart' */

  /* RelationalOperator: '<S288>/Compare' incorporates:
   *  Constant: '<S288>/Constant'
   */
  rtb_LogicalOperator2_c = (Mooventure2016_Rev5_B.s287_Out == 1.0);

  /* S-Function Block: <S299>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s299_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_m = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S299>/Switch' incorporates:
   *  Constant: '<S299>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S299>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S299>/motohawk_delta_time'
   *  Sum: '<S299>/Sum'
   */
  if (rtb_LogicalOperator2_c) {
    rtb_Switch_m = rtb_motohawk_delta_time_m + ButtonDelay1_DataStore();
  } else {
    rtb_Switch_m = 0.0;
  }

  /* End of Switch: '<S299>/Switch' */
  /* Logic: '<S282>/Logical Operator' incorporates:
   *  RelationalOperator: '<S282>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration7'
   */
  Mooventure2016_Rev5_B.s282_LogicalOperator = ((rtb_LogicalOperator2_c &&
    (rtb_Switch_m >= (Delay_DataStore()))));

  /* If: '<S293>/If' incorporates:
   *  Inport: '<S304>/In1'
   *  Inport: '<S305>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S293>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S293>/override_enable'
   */
  if ((Cruise_Control_Off_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S293>/NewValue' incorporates:
     *  ActionPort: '<S304>/Action Port'
     */
    rtb_Merge_caz = (Cruise_Control_Off_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S304>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(90);
    }

    /* End of Outputs for SubSystem: '<S293>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S293>/OldValue' incorporates:
     *  ActionPort: '<S305>/Action Port'
     */
    rtb_Merge_caz = Mooventure2016_Rev5_B.s282_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S305>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(91);
    }

    /* End of Outputs for SubSystem: '<S293>/OldValue' */
  }

  /* End of If: '<S293>/If' */

  /* RelationalOperator: '<S292>/Compare' incorporates:
   *  Constant: '<S292>/Constant'
   */
  rtb_LogicalOperator2_c = (Mooventure2016_Rev5_B.s287_Out == 5.0);

  /* S-Function Block: <S303>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s303_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_pj = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S303>/Switch' incorporates:
   *  Constant: '<S303>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S303>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S303>/motohawk_delta_time'
   *  Sum: '<S303>/Sum'
   */
  if (rtb_LogicalOperator2_c) {
    rtb_Switch_n = rtb_motohawk_delta_time_pj + ButtonDelay5_DataStore();
  } else {
    rtb_Switch_n = 0.0;
  }

  /* End of Switch: '<S303>/Switch' */

  /* Logic: '<S286>/Logical Operator' incorporates:
   *  RelationalOperator: '<S286>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration7'
   */
  Mooventure2016_Rev5_B.s286_LogicalOperator = ((rtb_LogicalOperator2_c &&
    (rtb_Switch_n >= (Delay_DataStore()))));

  /* If: '<S298>/If' incorporates:
   *  Inport: '<S314>/In1'
   *  Inport: '<S315>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S298>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S298>/override_enable'
   */
  if ((Cruise_Control_ON_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S298>/NewValue' incorporates:
     *  ActionPort: '<S314>/Action Port'
     */
    rtb_Merge_nl = (Cruise_Control_ON_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S314>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(100);
    }

    /* End of Outputs for SubSystem: '<S298>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S298>/OldValue' incorporates:
     *  ActionPort: '<S315>/Action Port'
     */
    rtb_Merge_nl = Mooventure2016_Rev5_B.s286_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S315>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(101);
    }

    /* End of Outputs for SubSystem: '<S298>/OldValue' */
  }

  /* End of If: '<S298>/If' */

  /* Stateflow: '<S112>/SystemState' */

  /* Gateway: Foreground/Control/Hybrid Control Code/Cruise Control/SystemState */
  /* During: Foreground/Control/Hybrid Control Code/Cruise Control/SystemState */
  if (Mooventure2016_Rev5_DWork.s128_is_active_c30_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Hybrid Control Code/Cruise Control/SystemState */
    Mooventure2016_Rev5_DWork.s128_is_active_c30_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S128>:4' */
    Mooventure2016_Rev5_DWork.s128_is_c30_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Off;
  } else {
    switch (Mooventure2016_Rev5_DWork.s128_is_c30_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Off:
      /* During 'Off': '<S128>:1' */
      if ((rtb_Merge_nl == TRUE) && (rtb_LogicalOperator5 == TRUE)) {
        /* Transition: '<S128>:5' */
        Mooventure2016_Rev5_DWork.s128_is_c30_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_On;
      } else {
        Mooventure2016_Rev5_B.s128_System = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_On:
      /* During 'On': '<S128>:2' */
      if ((rtb_Merge_caz == TRUE) || (rtb_LogicalOperator5 == FALSE)) {
        /* Transition: '<S128>:6' */
        Mooventure2016_Rev5_DWork.s128_is_c30_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Off;
      } else {
        Mooventure2016_Rev5_B.s128_System = TRUE;
      }
      break;

     default:
      /* Transition: '<S128>:4' */
      Mooventure2016_Rev5_DWork.s128_is_c30_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Off;
      break;
    }
  }

  /* End of Stateflow: '<S112>/SystemState' */

  /* Logic: '<S112>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S112>/motohawk_data_read1'
   */
  rtb_LogicalOperator5 = (CruiseOn_DataStore() &&
    Mooventure2016_Rev5_B.s128_System);

  /* Switch: '<S163>/Switch1' incorporates:
   *  Constant: '<S159>/Constant2'
   *  UnitDelay: '<S163>/Unit Delay'
   */
  if (Mooventure2016_Rev5_ConstB.s163_DataTypeConversion) {
    Mooventure2016_Rev5_B.s163_Switch1 = 0.0;
  } else {
    Mooventure2016_Rev5_B.s163_Switch1 =
      Mooventure2016_Rev5_DWork.s163_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S163>/Switch1' */
  /* S-Function Block: <S160>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ModifiedAmpSecIn_DataStore()) = Mooventure2016_Rev5_B.s163_Switch1;
    (ModifiedAmpSecIdx_DataStore()) = TablePrelookup_real_T
      (Mooventure2016_Rev5_B.s163_Switch1, (ModifiedAmpSecIdxArr_DataStore()), 4,
       (ModifiedAmpSecIdx_DataStore()));
    rtb_motohawk_prelookup = (ModifiedAmpSecIdx_DataStore());
  }

  /* S-Function Block: <S160>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup, (real_T *) ((TorqueLimMultiplierTbl_DataStore())),
       4);
    (TorqueLimMultiplier_DataStore()) = rtb_motohawk_interpolation_1d;
  }

  /* S-Function Block: <S158>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s158_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_mf = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S158>/Product' incorporates:
   *  MinMax: '<S158>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S158>/motohawk_calibration'
   */
  rtb_Switch_mf /= (rtb_Switch_mf >= (Overcurrent_Tq_Lim_Filter_DataStore())) ||
    rtIsNaN((Overcurrent_Tq_Lim_Filter_DataStore())) ? rtb_Switch_mf :
    (Overcurrent_Tq_Lim_Filter_DataStore());

  /* Sum: '<S161>/Sum1' incorporates:
   *  Constant: '<S161>/Constant'
   *  Product: '<S161>/Product'
   *  Product: '<S161>/Product1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S160>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S160>/motohawk_prelookup'
   *  Sum: '<S161>/Sum'
   *  UnitDelay: '<S161>/Unit Delay'
   */
  Mooventure2016_Rev5_B.s161_Sum1 = (1.0 - rtb_Switch_mf) *
    Mooventure2016_Rev5_DWork.s161_UnitDelay_DSTATE +
    rtb_motohawk_interpolation_1d * rtb_Switch_mf;

  /* Switch: '<S116>/Switch1' incorporates:
   *  Constant: '<S116>/Constant1'
   *  S-Function (motohawk_sfun_calibration): '<S116>/motohawk_calibration1'
   */
  if ((CurrentLimitingEnabled_DataStore()) != 0.0) {
    rtb_Switch_mf = Mooventure2016_Rev5_B.s161_Sum1;
  } else {
    rtb_Switch_mf = 1.0;
  }

  /* End of Switch: '<S116>/Switch1' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S191>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3680p0004_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3680p0004_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s191_AgeCount + 1) >
        Mooventure2016_Rev5_B.s191_AgeCount)
      Mooventure2016_Rev5_B.s191_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0] & 0x0000000F)) ;
      Mooventure2016_Rev5_B.s191_Shift_Position = (real_T) tmp0;
      Mooventure2016_Rev5_B.s191_AgeCount = 0;
    }
  }

  /* If: '<S326>/If' incorporates:
   *  Inport: '<S346>/In1'
   *  Inport: '<S347>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S326>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S326>/override_enable'
   */
  if ((Shift_Position_Raw_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S326>/NewValue' incorporates:
     *  ActionPort: '<S346>/Action Port'
     */
    rtb_UnitDelay_o = (Shift_Position_Raw_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S346>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(116);
    }

    /* End of Outputs for SubSystem: '<S326>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S326>/OldValue' incorporates:
     *  ActionPort: '<S347>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s191_Shift_Position;

    /* S-Function (motohawk_sfun_code_cover): '<S347>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(117);
    }

    /* End of Outputs for SubSystem: '<S326>/OldValue' */
  }

  /* End of If: '<S326>/If' */

  /* MATLAB Function Block: '<S191>/Transmission Translator' */

  /* MATLAB Function 'Foreground/Inputs/Driver Inputs/Transmission Translator': '<S318>:1' */
  /*  Park, Reverse, Drive, Low */
  if (rtb_UnitDelay_o == 12.0) {
    /* '<S318>:1:4' */
    /* '<S318>:1:5' */
    Mooventure2016_Rev5_B.s318_posOut = 1.0;

    /*  in reverse */
    /* '<S318>:1:6' */
    Mooventure2016_Rev5_B.s318_ecoModeOut = 0.0;
  } else if (rtb_UnitDelay_o == 8.0) {
    /* '<S318>:1:7' */
    /* '<S318>:1:8' */
    Mooventure2016_Rev5_B.s318_posOut = 3.0;

    /*  in drive */
    /* '<S318>:1:9' */
    Mooventure2016_Rev5_B.s318_ecoModeOut = 0.0;
  } else if (rtb_UnitDelay_o == 4.0) {
    /* '<S318>:1:10' */
    /* '<S318>:1:11' */
    Mooventure2016_Rev5_B.s318_posOut = 3.0;

    /*  in ecoMode drive */
    /* '<S318>:1:12' */
    Mooventure2016_Rev5_B.s318_ecoModeOut = 1.0;
  } else {
    /* '<S318>:1:14' */
    Mooventure2016_Rev5_B.s318_posOut = 2.0;

    /*  in neutral */
    /* '<S318>:1:15' */
    Mooventure2016_Rev5_B.s318_ecoModeOut = 0.0;
  }

  /* End of MATLAB Function Block: '<S191>/Transmission Translator' */

  /* Outputs for Enabled SubSystem: '<S116>/Neutral' incorporates:
   *  EnablePort: '<S155>/Enable'
   */
  /* RelationalOperator: '<S149>/Compare' incorporates:
   *  Constant: '<S149>/Constant'
   *  Constant: '<S155>/Constant'
   */
  if (Mooventure2016_Rev5_B.s318_posOut == 2.0) {
    Mooventure2016_Rev5_B.s116_Torque_Direction = 0.0;
  }

  /* End of RelationalOperator: '<S149>/Compare' */
  /* End of Outputs for SubSystem: '<S116>/Neutral' */

  /* Outputs for Enabled SubSystem: '<S116>/Drive' incorporates:
   *  EnablePort: '<S153>/Enable'
   */
  /* RelationalOperator: '<S150>/Compare' incorporates:
   *  Constant: '<S150>/Constant'
   */
  if (Mooventure2016_Rev5_B.s318_posOut == 3.0) {
    if (!Mooventure2016_Rev5_DWork.s116_Drive_MODE) {
      Mooventure2016_Rev5_DWork.s116_Drive_MODE = TRUE;
    }

    /* If: '<S166>/If' incorporates:
     *  Constant: '<S153>/Constant1'
     *  Inport: '<S167>/In1'
     *  Inport: '<S168>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S166>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S166>/override_enable'
     */
    if ((Torque_Reverse_Override_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S166>/NewValue' incorporates:
       *  ActionPort: '<S167>/Action Port'
       */
      Mooventure2016_Rev5_B.s116_Torque_Direction =
        (Torque_Reverse_Override_new_DataStore());

      /* S-Function (motohawk_sfun_code_cover): '<S167>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(34);
      }

      /* End of Outputs for SubSystem: '<S166>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S166>/OldValue' incorporates:
       *  ActionPort: '<S168>/Action Port'
       */
      Mooventure2016_Rev5_B.s116_Torque_Direction = 1.0;

      /* S-Function (motohawk_sfun_code_cover): '<S168>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(35);
      }

      /* End of Outputs for SubSystem: '<S166>/OldValue' */
    }

    /* End of If: '<S166>/If' */
  } else {
    if (Mooventure2016_Rev5_DWork.s116_Drive_MODE) {
      /* Disable for Outport: '<S153>/IPT_Torque' */
      Mooventure2016_Rev5_B.s116_Torque_Direction = 0.0;
      Mooventure2016_Rev5_DWork.s116_Drive_MODE = FALSE;
    }
  }

  /* End of RelationalOperator: '<S150>/Compare' */
  /* End of Outputs for SubSystem: '<S116>/Drive' */

  /* Outputs for Enabled SubSystem: '<S116>/Reverse' incorporates:
   *  EnablePort: '<S156>/Enable'
   */
  /* RelationalOperator: '<S151>/Compare' incorporates:
   *  Constant: '<S151>/Constant'
   */
  if (Mooventure2016_Rev5_B.s318_posOut == 1.0) {
    if (!Mooventure2016_Rev5_DWork.s116_Reverse_MODE) {
      Mooventure2016_Rev5_DWork.s116_Reverse_MODE = TRUE;
    }

    /* If: '<S170>/If' incorporates:
     *  Constant: '<S156>/Constant1'
     *  Inport: '<S171>/In1'
     *  Inport: '<S172>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S170>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S170>/override_enable'
     */
    if ((Torque_Reverse_Override69_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S170>/NewValue' incorporates:
       *  ActionPort: '<S171>/Action Port'
       */
      Mooventure2016_Rev5_B.s116_Torque_Direction =
        (Torque_Reverse_Override69_new_DataStore());

      /* S-Function (motohawk_sfun_code_cover): '<S171>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(36);
      }

      /* End of Outputs for SubSystem: '<S170>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S170>/OldValue' incorporates:
       *  ActionPort: '<S172>/Action Port'
       */
      Mooventure2016_Rev5_B.s116_Torque_Direction = -1.0;

      /* S-Function (motohawk_sfun_code_cover): '<S172>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(37);
      }

      /* End of Outputs for SubSystem: '<S170>/OldValue' */
    }

    /* End of If: '<S170>/If' */
  } else {
    if (Mooventure2016_Rev5_DWork.s116_Reverse_MODE) {
      /* Disable for Outport: '<S156>/IPT_Torque' */
      Mooventure2016_Rev5_B.s116_Torque_Direction = 0.0;
      Mooventure2016_Rev5_DWork.s116_Reverse_MODE = FALSE;
    }
  }

  /* End of RelationalOperator: '<S151>/Compare' */
  /* End of Outputs for SubSystem: '<S116>/Reverse' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S191>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3681p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3681p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s191_AgeCount_j + 1) >
        Mooventure2016_Rev5_B.s191_AgeCount_j)
      Mooventure2016_Rev5_B.s191_AgeCount_j++;
    if (msg_valid) {
      uint16_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      Mooventure2016_Rev5_B.s191_Brake_Position = ((real_T) tmp0) + ((real_T)
        -32767);
      Mooventure2016_Rev5_B.s191_AgeCount_j = 0;
    }
  }

  /* If: '<S319>/If' incorporates:
   *  Inport: '<S332>/In1'
   *  Inport: '<S333>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S319>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S319>/override_enable'
   */
  if ((Brake_Position_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S319>/NewValue' incorporates:
     *  ActionPort: '<S332>/Action Port'
     */
    rtb_Merge_o = (Brake_Position_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S332>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(102);
    }

    /* End of Outputs for SubSystem: '<S319>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S319>/OldValue' incorporates:
     *  ActionPort: '<S333>/Action Port'
     */
    rtb_Merge_o = Mooventure2016_Rev5_B.s191_Brake_Position;

    /* S-Function (motohawk_sfun_code_cover): '<S333>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(103);
    }

    /* End of Outputs for SubSystem: '<S319>/OldValue' */
  }

  /* End of If: '<S319>/If' */

  /* S-Function Block: <S191>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (Brake_Position_PreIn_DataStore()) = rtb_Merge_o;
    (Brake_Position_PreIdx_DataStore()) = TablePrelookup_real_T(rtb_Merge_o,
      (Brake_Position_PreIdxArr_DataStore()), 21,
      (Brake_Position_PreIdx_DataStore()));
    rtb_motohawk_prelookup_i = (Brake_Position_PreIdx_DataStore());
  }

  /* S-Function Block: <S191>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    Mooventure2016_Rev5_B.s191_Brake_Position_l = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup_i, (real_T *) ((Brake_Position_TblTbl_DataStore())),
       21);
    (Brake_Position_Tbl_DataStore()) =
      Mooventure2016_Rev5_B.s191_Brake_Position_l;
  }

  /* S-Function Block: <S232>/motohawk_ain4 Resource: AN15 */
  Mooventure2016_Rev5_B.s232_motohawk_ain4_o1 = AN15_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S252>/If' incorporates:
   *  Inport: '<S253>/In1'
   *  Inport: '<S254>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S252>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S252>/override_enable'
   */
  if ((Throttle_Position_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S252>/NewValue' incorporates:
     *  ActionPort: '<S253>/Action Port'
     */
    rtb_Merge_c13 = ((uint16_T)(Throttle_Position_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S253>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Throttle Position/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(74);
    }

    /* End of Outputs for SubSystem: '<S252>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S252>/OldValue' incorporates:
     *  ActionPort: '<S254>/Action Port'
     */
    rtb_Merge_c13 = Mooventure2016_Rev5_B.s232_motohawk_ain4_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S254>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Throttle Position/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(75);
    }

    /* End of Outputs for SubSystem: '<S252>/OldValue' */
  }

  /* End of If: '<S252>/If' */

  /* DataTypeConversion: '<S232>/Data Type Conversion' */
  Mooventure2016_Rev5_B.s232_DataTypeConversion = (real_T)rtb_Merge_c13;

  /* S-Function (motohawk_sfun_read_canmsg): '<S187>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3227p0005_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3227p0005_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s187_AgeCount + 1) >
        Mooventure2016_Rev5_B.s187_AgeCount)
      Mooventure2016_Rev5_B.s187_AgeCount++;
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
      Mooventure2016_Rev5_B.s187_JCS_PackIdentifier = (real_T) tmp0;
      Mooventure2016_Rev5_B.s187_PackState = (real_T) tmp1;
      Mooventure2016_Rev5_B.s187_PrechargeState = (real_T) tmp2;
      Mooventure2016_Rev5_B.s187_HVIL_Status = (real_T) tmp3;
      Mooventure2016_Rev5_B.s187_IsolationStatus = (real_T) tmp4;
      Mooventure2016_Rev5_B.s187_WakeSignal = (real_T) tmp5;
      Mooventure2016_Rev5_B.s187_SleepInhibited = (real_T) tmp6;
      Mooventure2016_Rev5_B.s187_CellBalanceingActive = (boolean_T) tmp7;
      Mooventure2016_Rev5_B.s187_MILState = (real_T) tmp8;
      Mooventure2016_Rev5_B.s187_StateOfCharge = ((real_T) tmp9) / ((real_T) 2);
      Mooventure2016_Rev5_B.s187_PS_RollingCounter = (real_T) tmp10;
      Mooventure2016_Rev5_B.s187_AgeCount = 0;
    }
  }

  /* S-Function Block: <S262>/motohawk_delta_time */
  rtb_Switch_jf = 10.0;

  /* Product: '<S262>/Product' incorporates:
   *  MinMax: '<S262>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S262>/motohawk_calibration'
   */
  rtb_Switch_jf /= (rtb_Switch_jf >= (SOCFilt_DataStore())) || rtIsNaN
    ((SOCFilt_DataStore())) ? rtb_Switch_jf : (SOCFilt_DataStore());

  /* Sum: '<S263>/Sum1' incorporates:
   *  Constant: '<S263>/Constant'
   *  Product: '<S263>/Product'
   *  Product: '<S263>/Product1'
   *  Sum: '<S263>/Sum'
   *  UnitDelay: '<S263>/Unit Delay'
   */
  rtb_Sum1 = (1.0 - rtb_Switch_jf) *
    Mooventure2016_Rev5_DWork.s263_UnitDelay_DSTATE +
    Mooventure2016_Rev5_B.s187_StateOfCharge * rtb_Switch_jf;

  /* Logic: '<S115>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S115>/motohawk_data_read'
   */
  rtb_LogicalOperator5_c = !Torque_Enable_DataStore();

  /* If: '<S327>/If' incorporates:
   *  Inport: '<S348>/In1'
   *  Inport: '<S349>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S327>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S327>/override_enable'
   */
  if ((ecoMode_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S327>/NewValue' incorporates:
     *  ActionPort: '<S348>/Action Port'
     */
    rtb_UnitDelay_o = (ecoMode_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S348>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(118);
    }

    /* End of Outputs for SubSystem: '<S327>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S327>/OldValue' incorporates:
     *  ActionPort: '<S349>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s318_ecoModeOut;

    /* S-Function (motohawk_sfun_code_cover): '<S349>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(119);
    }

    /* End of Outputs for SubSystem: '<S327>/OldValue' */
  }

  /* End of If: '<S327>/If' */

  /* Outputs for Atomic SubSystem: '<S115>/Embedded MATLAB Function' */
  /* MATLAB Function Block: '<S147>/Embedded MATLAB Function' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration2'
   */

  /* MATLAB Function 'Foreground/Control/Hybrid Control Code/Hybrid state limits1/Embedded MATLAB Function/Embedded MATLAB Function': '<S148>:1' */
  if (rtb_LogicalOperator5_c || (rtb_Sum1 <= (SafetyModeEnterSOC_DataStore())))
  {
    /* '<S148>:1:2' */
    /* '<S148>:1:3' */
    rtb_UnitDelay_o = 0.0;
  } else if ((rtb_Sum1 > (SafetyModeEnterSOC_DataStore())) && (rtb_Sum1 <=
              (CrawlHomeEnterSOC_DataStore()))) {
    /* '<S148>:1:4' */
    /* '<S148>:1:5' */
    rtb_UnitDelay_o = 1.0;
  } else if ((rtb_UnitDelay_o == 1.0) && (rtb_Sum1 >
              (CrawlHomeEnterSOC_DataStore()))) {
    /* '<S148>:1:6' */
    /* '<S148>:1:7' */
    rtb_UnitDelay_o = 2.0;
  } else {
    /* '<S148>:1:9' */
    rtb_UnitDelay_o = 3.0;
  }

  /* End of MATLAB Function Block: '<S147>/Embedded MATLAB Function' */
  /* End of Outputs for SubSystem: '<S115>/Embedded MATLAB Function' */

  /* MATLAB Function Block: '<S18>/Embedded MATLAB Function' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S18>/motohawk_fault_action'
   */

  /* MATLAB Function 'Foreground/Control/Hybrid Control Code/Embedded MATLAB Function': '<S114>:1' */
  if (GetFaultActionStatus(12)) {
    /* '<S114>:1:2' */
    /* '<S114>:1:3' */
    Mooventure2016_Rev5_B.s114_state = 1.0;
  } else {
    /* '<S114>:1:5' */
    Mooventure2016_Rev5_B.s114_state = rtb_UnitDelay_o;
  }

  /* End of MATLAB Function Block: '<S18>/Embedded MATLAB Function' */
  /* If: '<S120>/If' incorporates:
   *  Inport: '<S182>/In1'
   *  Inport: '<S183>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S120>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S120>/override_enable'
   */
  if ((HybridStateOverride_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S120>/NewValue' incorporates:
     *  ActionPort: '<S182>/Action Port'
     */
    rtb_Merge_l = (HybridStateOverride_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S182>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(40);
    }

    /* End of Outputs for SubSystem: '<S120>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S120>/OldValue' incorporates:
     *  ActionPort: '<S183>/Action Port'
     */
    rtb_Merge_l = Mooventure2016_Rev5_B.s114_state;

    /* S-Function (motohawk_sfun_code_cover): '<S183>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(41);
    }

    /* End of Outputs for SubSystem: '<S120>/OldValue' */
  }

  /* End of If: '<S120>/If' */

  /* SwitchCase: '<S18>/Switch Case1' incorporates:
   *  Constant: '<S111>/Constant'
   *  Constant: '<S113>/Constant'
   *  Constant: '<S117>/Constant'
   *  Constant: '<S118>/Constant'
   *  Constant: '<S118>/Constant2'
   */
  switch ((int32_T)rtb_Merge_l) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S18>/Safety' incorporates:
     *  ActionPort: '<S118>/Action Port'
     */
    Mooventure2016_Rev5_B.s18_motor_Torque = 0.0;
    Mooventure2016_Rev5_B.s18_motor_Enable = 0.0;

    /* End of Outputs for SubSystem: '<S18>/Safety' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S18>/CrawlHomeMode' incorporates:
     *  ActionPort: '<S111>/Action Port'
     */

    /* S-Function Block: <S111>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (crawlMode_AccelIn_DataStore()) =
        Mooventure2016_Rev5_B.s232_DataTypeConversion;
      (crawlMode_AccelIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s232_DataTypeConversion,
         (crawlMode_AccelIdxArr_DataStore()), 11, (crawlMode_AccelIdx_DataStore()));
      rtb_motohawk_prelookup_m = (crawlMode_AccelIdx_DataStore());
    }

    /* S-Function Block: <S111>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_d = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_m, (real_T *) ((crawlMode_Accel_MapTbl_DataStore
           ())), 11);
      (crawlMode_Accel_Map_DataStore()) = rtb_motohawk_interpolation_1d_d;
    }

    /* S-Function Block: <S111>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (crawlMode_BrakeIn_DataStore()) =
        Mooventure2016_Rev5_B.s191_Brake_Position_l;
      (crawlMode_BrakeIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s191_Brake_Position_l,
         (crawlMode_BrakeIdxArr_DataStore()), 11, (crawlMode_BrakeIdx_DataStore()));
      rtb_motohawk_prelookup1_oo = (crawlMode_BrakeIdx_DataStore());
    }

    /* S-Function Block: <S111>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_n = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_oo, (real_T *)
         ((crawlMode_Brake_MapTbl_DataStore())), 11);
      (crawlMode_Brake_Map_DataStore()) = rtb_motohawk_interpolation_1d1_n;
    }

    /* Product: '<S111>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration7'
     */
    rtb_Product_j = (RPM_to_Wheel_Speed_Multiplier_crawlMode_DataStore()) *
      Mooventure2016_Rev5_B.s444_Merge;

    /* Stateflow: '<S111>/Chart' */
    Mooventure2016_Rev5_Chart(rtb_motohawk_interpolation_1d_d,
      rtb_motohawk_interpolation_1d1_n, rtb_Product_j,
      (accelStart_Pedal_crawlMode_DataStore()),
      (accelEnd_Pedal_crawlMode_DataStore()),
      (brakeStart_Pedal_crawlMode_DataStore()),
      (brakeEnd_Pedal_crawlMode_DataStore()),
      (regenStart_Speed_crawlMode_DataStore()),
      (regenEnd_Speed_crawlMode_DataStore()), (dragTorque_crawlMode_DataStore()),
      &Mooventure2016_Rev5_B.s111_sf_Chart,
      &Mooventure2016_Rev5_DWork.s111_sf_Chart);

    /* Product: '<S111>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration8'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s111_sf_Chart.s121_driveTorque *
      (driveMaxTorque_crawlMode_DataStore());

    /* Sum: '<S122>/Add' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration2'
     */
    rtb_UnitDelay_m = (CrawlHomeEnterSOC_DataStore()) -
      (SafetyModeEnterSOC_DataStore());

    /* Product: '<S122>/Divide' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration1'
     *  Sum: '<S122>/Sum'
     */
    rtb_UnitDelay_m = ((rtb_Sum1 - (CrawlHomeEnterSOC_DataStore())) +
                       rtb_UnitDelay_m) / rtb_UnitDelay_m;

    /* Product: '<S122>/Product' incorporates:
     *  Product: '<S111>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration9'
     *  Saturate: '<S122>/Saturation'
     *  Sum: '<S111>/Sum'
     */
    Mooventure2016_Rev5_B.s18_motor_Torque =
      (Mooventure2016_Rev5_B.s111_sf_Chart.s121_regenTorque *
       (regenMaxTorque_crawlMode_DataStore()) + rtb_UnitDelay_o) *
      (rtb_UnitDelay_m >= 1.0 ? 1.0 : rtb_UnitDelay_m <= 0.0 ? 0.0 :
       rtb_UnitDelay_m);
    Mooventure2016_Rev5_B.s18_motor_Enable = 1.0;

    /* End of Outputs for SubSystem: '<S18>/CrawlHomeMode' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S18>/EcoMode' incorporates:
     *  ActionPort: '<S113>/Action Port'
     */

    /* S-Function Block: <S113>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (EcoMode_AccelIn_DataStore()) =
        Mooventure2016_Rev5_B.s232_DataTypeConversion;
      (EcoMode_AccelIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s232_DataTypeConversion,
         (EcoMode_AccelIdxArr_DataStore()), 11, (EcoMode_AccelIdx_DataStore()));
      rtb_motohawk_prelookup_f = (EcoMode_AccelIdx_DataStore());
    }

    /* S-Function Block: <S113>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_n = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_f, (real_T *) ((EcoMode_Accel_MapTbl_DataStore())),
         11);
      (EcoMode_Accel_Map_DataStore()) = rtb_motohawk_interpolation_1d_n;
    }

    /* S-Function Block: <S113>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (EcoMode_BrakeIn_DataStore()) =
        Mooventure2016_Rev5_B.s191_Brake_Position_l;
      (EcoMode_BrakeIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s191_Brake_Position_l,
         (EcoMode_BrakeIdxArr_DataStore()), 11, (EcoMode_BrakeIdx_DataStore()));
      rtb_motohawk_prelookup1_p = (EcoMode_BrakeIdx_DataStore());
    }

    /* S-Function Block: <S113>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_p = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_p, (real_T *) ((EcoMode_Brake_MapTbl_DataStore())),
         11);
      (EcoMode_Brake_Map_DataStore()) = rtb_motohawk_interpolation_1d1_p;
    }

    /* Product: '<S113>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration7'
     */
    rtb_Product_le = (RPM_to_Wheel_Speed_Multiplier_ecoMode_DataStore()) *
      Mooventure2016_Rev5_B.s444_Merge;

    /* Stateflow: '<S113>/Chart' */
    Mooventure2016_Rev5_Chart(rtb_motohawk_interpolation_1d_n,
      rtb_motohawk_interpolation_1d1_p, rtb_Product_le,
      (accelStart_Pedal_ecoMode_DataStore()), (accelEnd_Pedal_ecoMode_DataStore()),
                              (brakeStart_Pedal_ecoMode_DataStore()),
      (brakeEnd_Pedal_ecoMode_DataStore()), (regenStart_Speed_ecoMode_DataStore()),
                              (regenEnd_Speed_ecoMode_DataStore()),
      (dragTorque_ecoMode_DataStore()), &Mooventure2016_Rev5_B.s113_sf_Chart,
      &Mooventure2016_Rev5_DWork.s113_sf_Chart);

    /* Product: '<S113>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration8'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s113_sf_Chart.s121_driveTorque *
      (driveMaxTorque_ecoMode_DataStore());

    /* Sum: '<S113>/Sum' incorporates:
     *  Product: '<S113>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration9'
     */
    Mooventure2016_Rev5_B.s18_motor_Torque =
      Mooventure2016_Rev5_B.s113_sf_Chart.s121_regenTorque *
      (regenMaxTorque_ecoMode_DataStore()) + rtb_UnitDelay_o;
    Mooventure2016_Rev5_B.s18_motor_Enable = 1.0;

    /* End of Outputs for SubSystem: '<S18>/EcoMode' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S18>/SUVMode' incorporates:
     *  ActionPort: '<S117>/Action Port'
     */

    /* S-Function Block: <S117>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (SUVMode_AccelIn_DataStore()) =
        Mooventure2016_Rev5_B.s232_DataTypeConversion;
      (SUVMode_AccelIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s232_DataTypeConversion,
         (SUVMode_AccelIdxArr_DataStore()), 11, (SUVMode_AccelIdx_DataStore()));
      rtb_motohawk_prelookup_h = (SUVMode_AccelIdx_DataStore());
    }

    /* S-Function Block: <S117>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_c = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_h, (real_T *) ((SUVMode_Accel_MapTbl_DataStore())),
         11);
      (SUVMode_Accel_Map_DataStore()) = rtb_motohawk_interpolation_1d_c;
    }

    /* S-Function Block: <S117>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (SUVMode_BrakeIn_DataStore()) =
        Mooventure2016_Rev5_B.s191_Brake_Position_l;
      (SUVMode_BrakeIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s191_Brake_Position_l,
         (SUVMode_BrakeIdxArr_DataStore()), 11, (SUVMode_BrakeIdx_DataStore()));
      rtb_motohawk_prelookup1_o = (SUVMode_BrakeIdx_DataStore());
    }

    /* S-Function Block: <S117>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_o, (real_T *) ((SUVMode_Brake_MapTbl_DataStore())),
         11);
      (SUVMode_Brake_Map_DataStore()) = rtb_motohawk_interpolation_1d1;
    }

    /* Product: '<S117>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S117>/motohawk_calibration7'
     */
    rtb_Product_dp = (RPM_to_Wheel_Speed_Multiplier_SUVMode_DataStore()) *
      Mooventure2016_Rev5_B.s444_Merge;

    /* Stateflow: '<S117>/Chart' */
    Mooventure2016_Rev5_Chart(rtb_motohawk_interpolation_1d_c,
      rtb_motohawk_interpolation_1d1, rtb_Product_dp,
      (accelStart_Pedal_SUVMode_DataStore()), (accelEnd_Pedal_SUVMode_DataStore()),
                              (brakeStart_Pedal_SUVMode_DataStore()),
      (brakeEnd_Pedal_SUVMode_DataStore()), (regenStart_Speed_SUVMode_DataStore()),
                              (regenEnd_Speed_SUVMode_DataStore()),
      (dragTorque_SUVMode_DataStore()), &Mooventure2016_Rev5_B.s117_sf_Chart,
      &Mooventure2016_Rev5_DWork.s117_sf_Chart);

    /* Product: '<S117>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S117>/motohawk_calibration8'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s117_sf_Chart.s121_driveTorque *
      (driveMaxTorque_SUVMode_DataStore());

    /* Sum: '<S117>/Sum' incorporates:
     *  Product: '<S117>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S117>/motohawk_calibration9'
     */
    Mooventure2016_Rev5_B.s18_motor_Torque =
      Mooventure2016_Rev5_B.s117_sf_Chart.s121_regenTorque *
      (regenMaxTorque_SUVMode_DataStore()) + rtb_UnitDelay_o;
    Mooventure2016_Rev5_B.s18_motor_Enable = 1.0;

    /* End of Outputs for SubSystem: '<S18>/SUVMode' */
    break;
  }

  /* End of SwitchCase: '<S18>/Switch Case1' */

  /* Product: '<S116>/Product' */
  Mooventure2016_Rev5_B.s116_IPT_Torque_Request = rtb_Switch_mf *
    Mooventure2016_Rev5_B.s116_Torque_Direction *
    Mooventure2016_Rev5_B.s18_motor_Torque;

  /* S-Function Block: <S154>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s154_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_jf = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S154>/Product' incorporates:
   *  MinMax: '<S154>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S154>/motohawk_calibration'
   */
  rtb_Switch_jf /= (rtb_Switch_jf >= (FiltConst_DataStore())) || rtIsNaN
    ((FiltConst_DataStore())) ? rtb_Switch_jf : (FiltConst_DataStore());

  /* Sum: '<S169>/Sum1' incorporates:
   *  Constant: '<S169>/Constant'
   *  Product: '<S169>/Product'
   *  Product: '<S169>/Product1'
   *  Sum: '<S169>/Sum'
   *  UnitDelay: '<S169>/Unit Delay'
   */
  rtb_Sum1_j = (1.0 - rtb_Switch_jf) *
    Mooventure2016_Rev5_DWork.s169_UnitDelay_DSTATE +
    Mooventure2016_Rev5_B.s116_IPT_Torque_Request * rtb_Switch_jf;

  /* Saturate: '<S116>/Saturation' */
  Mooventure2016_Rev5_B.s116_Saturation = rtb_Sum1_j >= 2500.0 ? 2500.0 :
    rtb_Sum1_j <= -2500.0 ? -2500.0 : rtb_Sum1_j;

  /* If: '<S157>/If' incorporates:
   *  Inport: '<S173>/In1'
   *  Inport: '<S174>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S157>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S157>/override_enable'
   */
  if ((Torque_Request_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S157>/NewValue' incorporates:
     *  ActionPort: '<S173>/Action Port'
     */
    rtb_UnitDelay_o = (Torque_Request_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S173>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(38);
    }

    /* End of Outputs for SubSystem: '<S157>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S157>/OldValue' incorporates:
     *  ActionPort: '<S174>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s116_Saturation;

    /* S-Function (motohawk_sfun_code_cover): '<S174>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(39);
    }

    /* End of Outputs for SubSystem: '<S157>/OldValue' */
  }

  /* End of If: '<S157>/If' */

  /* Switch: '<S125>/Switch' incorporates:
   *  S-Function (motohawk_sfun_interpolation_2d): '<S125>/motohawk_interpolation_2d'
   *  S-Function (motohawk_sfun_prelookup): '<S125>/motohawk_prelookup'
   *  S-Function (motohawk_sfun_prelookup): '<S125>/motohawk_prelookup1'
   */
  if (rtb_LogicalOperator5) {
    /* S-Function Block: <S125>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (Cruise_Control_VSpeed_PreIn_DataStore()) = rtb_Product;
      (Cruise_Control_VSpeed_PreIdx_DataStore()) = TablePrelookup_real_T
        (rtb_Product, (Cruise_Control_VSpeed_PreIdxArr_DataStore()), 11,
         (Cruise_Control_VSpeed_PreIdx_DataStore()));
      rtb_motohawk_prelookup1_d = (Cruise_Control_VSpeed_PreIdx_DataStore());
    }

    /* S-Function Block: <S125>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (Cruise_Control_PID_PreIn_DataStore()) =
        Mooventure2016_Rev5_B.s143_MinMax1;
      (Cruise_Control_PID_PreIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s143_MinMax1,
         (Cruise_Control_PID_PreIdxArr_DataStore()), 11,
         (Cruise_Control_PID_PreIdx_DataStore()));
      rtb_motohawk_prelookup_k = (Cruise_Control_PID_PreIdx_DataStore());
    }

    /* S-Function Block: <S125>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup_k, rtb_motohawk_prelookup1_d, (real_T *)
         ((Cruise_Control_Tq_TableMap_DataStore())), 11, 11);
      (Cruise_Control_Tq_Table_DataStore()) = rtb_motohawk_interpolation_2d;
    }

    rtb_UnitDelay_o = rtb_motohawk_interpolation_2d;
  }

  /* End of Switch: '<S125>/Switch' */

  /* Abs: '<S176>/Abs' */
  rtb_Abs = fabs(rtb_UnitDelay_o);

  /* S-Function (motohawk_sfun_read_canmsg): '<S185>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3026p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3026p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s185_AgeCount + 1) >
        Mooventure2016_Rev5_B.s185_AgeCount)
      Mooventure2016_Rev5_B.s185_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0] & 0x00000008) >> 3) ;
      Mooventure2016_Rev5_B.s185_TCS_ENG_EVNT_IN_PROGRESS = (real_T) tmp0;
      Mooventure2016_Rev5_B.s185_AgeCount = 0;
    }
  }

  /* If: '<S197>/If' incorporates:
   *  Inport: '<S209>/In1'
   *  Inport: '<S210>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S197>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S197>/override_enable'
   */
  if ((TCS_ENG_EVNT_IN_PROGRESS_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S197>/NewValue' incorporates:
     *  ActionPort: '<S209>/Action Port'
     */
    rtb_Merge_m = (TCS_ENG_EVNT_IN_PROGRESS_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S209>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(44);
    }

    /* End of Outputs for SubSystem: '<S197>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S197>/OldValue' incorporates:
     *  ActionPort: '<S210>/Action Port'
     */
    rtb_Merge_m = Mooventure2016_Rev5_B.s185_TCS_ENG_EVNT_IN_PROGRESS;

    /* S-Function (motohawk_sfun_code_cover): '<S210>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(45);
    }

    /* End of Outputs for SubSystem: '<S197>/OldValue' */
  }

  /* End of If: '<S197>/If' */

  /* Stateflow: '<S176>/ABS Chart' */
  Mooventure2016_Rev5_ABSChart(rtb_Merge_m, rtb_Abs,
    (Ramp_Out_Rate_ABS_DataStore()), (Ramp_In_Rate_ABS_DataStore()),
    (Min_Torque_ABS_DataStore()), &Mooventure2016_Rev5_B.s176_sf_ABSChart,
    &Mooventure2016_Rev5_DWork.s176_sf_ABSChart);

  /* Product: '<S176>/Product' incorporates:
   *  Signum: '<S176>/Sign'
   */
  Mooventure2016_Rev5_B.s176_Product = (rtb_UnitDelay_o < 0.0 ? -1.0 :
    rtb_UnitDelay_o > 0.0 ? 1.0 : rtb_UnitDelay_o == 0.0 ? 0.0 : rtb_UnitDelay_o)
    * Mooventure2016_Rev5_B.s176_sf_ABSChart.s179_TorqueOut;

  /* S-Function Block: <S181>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s181_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ka = ((real_T) delta) * 0.000001;
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S185>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3025p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3025p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s185_AgeCount_n + 1) >
        Mooventure2016_Rev5_B.s185_AgeCount_n)
      Mooventure2016_Rev5_B.s185_AgeCount_n++;
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
      Mooventure2016_Rev5_B.s185_Front_left_whl_speed = (((real_T) tmp0) /
        ((real_T) 100)) + ((real_T) -1000);
      Mooventure2016_Rev5_B.s185_Front_right_whl_speed = (((real_T) tmp1) /
        ((real_T) 100)) + ((real_T) -1000);
      Mooventure2016_Rev5_B.s185_Rear_left_whl_speed = (((real_T) tmp2) /
        ((real_T) 100)) + ((real_T) -1000);
      Mooventure2016_Rev5_B.s185_Rear_right_whl_speed = (((real_T) tmp3) /
        ((real_T) 100)) + ((real_T) -1000);
      Mooventure2016_Rev5_B.s185_AgeCount_n = 0;
    }
  }

  /* If: '<S205>/If' incorporates:
   *  Inport: '<S225>/In1'
   *  Inport: '<S226>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S205>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S205>/override_enable'
   */
  if ((Front_left_whl_speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S205>/NewValue' incorporates:
     *  ActionPort: '<S225>/Action Port'
     */
    rtb_Merge_f = (Front_left_whl_speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S225>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(60);
    }

    /* End of Outputs for SubSystem: '<S205>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S205>/OldValue' incorporates:
     *  ActionPort: '<S226>/Action Port'
     */
    rtb_Merge_f = Mooventure2016_Rev5_B.s185_Front_left_whl_speed;

    /* S-Function (motohawk_sfun_code_cover): '<S226>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(61);
    }

    /* End of Outputs for SubSystem: '<S205>/OldValue' */
  }

  /* End of If: '<S205>/If' */

  /* Abs: '<S178>/Abs' */
  rtb_Switch_jf = fabs(rtb_Merge_f);

  /* If: '<S201>/If' incorporates:
   *  Inport: '<S217>/In1'
   *  Inport: '<S218>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S201>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S201>/override_enable'
   */
  if ((Front_right_whl_speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S201>/NewValue' incorporates:
     *  ActionPort: '<S217>/Action Port'
     */
    rtb_Merge_ns = (Front_right_whl_speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S217>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(52);
    }

    /* End of Outputs for SubSystem: '<S201>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S201>/OldValue' incorporates:
     *  ActionPort: '<S218>/Action Port'
     */
    rtb_Merge_ns = Mooventure2016_Rev5_B.s185_Front_right_whl_speed;

    /* S-Function (motohawk_sfun_code_cover): '<S218>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(53);
    }

    /* End of Outputs for SubSystem: '<S201>/OldValue' */
  }

  /* End of If: '<S201>/If' */

  /* Abs: '<S178>/Abs1' */
  rtb_Switch_mf = fabs(rtb_Merge_ns);

  /* Sum: '<S178>/Sum' */
  rtb_Switch_jf -= rtb_Switch_mf;

  /* Abs: '<S178>/Abs2' */
  Mooventure2016_Rev5_B.s178_Abs2 = fabs(rtb_Switch_jf);

  /* RelationalOperator: '<S178>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration'
   */
  rtb_LogicalOperator2_c = (Mooventure2016_Rev5_B.s178_Abs2 >=
    (TC_Wheel_Speed_Diff_DataStore()));

  /* Switch: '<S181>/Switch' incorporates:
   *  Constant: '<S181>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S181>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S181>/motohawk_delta_time'
   *  Sum: '<S181>/Sum'
   */
  if (rtb_LogicalOperator2_c) {
    rtb_Switch_jf = rtb_motohawk_delta_time_ka + TC_Event_Timer_DataStore();
  } else {
    rtb_Switch_jf = 0.0;
  }

  /* End of Switch: '<S181>/Switch' */
  /* RelationalOperator: '<S178>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration1'
   */
  rtb_RelationalOperator2_id = (rtb_Switch_jf >= (TC_Event_Time_DataStore()));

  /* Logic: '<S178>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S178>/motohawk_fault_status'
   */
  rtb_RelationalOperator_jg = !IsFaultActive(87);

  /* Logic: '<S178>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S178>/motohawk_fault_status1'
   */
  rtb_Eaton_Plugged_In = !IsFaultActive(89);

  /* Product: '<S178>/Product' */
  Mooventure2016_Rev5_B.s178_Product = (uint16_T)(rtb_Eaton_Plugged_In ?
    rtb_RelationalOperator_jg ? rtb_RelationalOperator2_id ?
    rtb_LogicalOperator2_c : 0 : 0 : 0);

  /* DataTypeConversion: '<S177>/Data Type Conversion' */
  rtb_DataTypeConversion_j = (real_T)Mooventure2016_Rev5_B.s178_Product;

  /* Abs: '<S177>/Abs' */
  rtb_Abs_f = fabs(rtb_UnitDelay_o);

  /* Stateflow: '<S177>/CALC Chart' */
  Mooventure2016_Rev5_ABSChart(rtb_DataTypeConversion_j, rtb_Abs_f,
    (Ramp_Out_Rate_CALC_DataStore()), (Ramp_In_Rate_CALC_DataStore()),
    (Min_Torque_CALC_DataStore()), &Mooventure2016_Rev5_B.s177_sf_CALCChart,
    &Mooventure2016_Rev5_DWork.s177_sf_CALCChart);

  /* Product: '<S177>/Product' incorporates:
   *  Signum: '<S177>/Sign'
   */
  Mooventure2016_Rev5_B.s177_Product = (rtb_UnitDelay_o < 0.0 ? -1.0 :
    rtb_UnitDelay_o > 0.0 ? 1.0 : rtb_UnitDelay_o == 0.0 ? 0.0 : rtb_UnitDelay_o)
    * Mooventure2016_Rev5_B.s177_sf_CALCChart.s179_TorqueOut;

  /* MultiPortSwitch: '<S119>/Multiport Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration3'
   */
  switch (((int8_T)(Traction_Control_Model_DataStore()))) {
   case 0:
    Mooventure2016_Rev5_B.s119_MultiportSwitch =
      Mooventure2016_Rev5_B.s176_Product;
    break;

   case 1:
    Mooventure2016_Rev5_B.s119_MultiportSwitch =
      Mooventure2016_Rev5_B.s177_Product;
    break;

   default:
    Mooventure2016_Rev5_B.s119_MultiportSwitch = rtb_UnitDelay_o;
    break;
  }

  /* End of MultiPortSwitch: '<S119>/Multiport Switch' */
  /* If: '<S536>/If' incorporates:
   *  Inport: '<S544>/In1'
   *  Inport: '<S545>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S536>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S536>/override_enable'
   */
  if ((ACC_torq_rqstd_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S536>/NewValue' incorporates:
     *  ActionPort: '<S544>/Action Port'
     */
    rtb_Merge_ci = (ACC_torq_rqstd_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S544>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(240);
    }

    /* End of Outputs for SubSystem: '<S536>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S536>/OldValue' incorporates:
     *  ActionPort: '<S545>/Action Port'
     */
    rtb_Merge_ci = Mooventure2016_Rev5_B.s119_MultiportSwitch;

    /* S-Function (motohawk_sfun_code_cover): '<S545>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(241);
    }

    /* End of Outputs for SubSystem: '<S536>/OldValue' */
  }

  /* End of If: '<S536>/If' */

  /* Abs: '<S526>/Abs' */
  rtb_Switch_mf = fabs(Mooventure2016_Rev5_B.s119_MultiportSwitch);

  /* Product: '<S526>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S526>/motohawk_calibration'
   */
  Mooventure2016_Rev5_B.s526_Pct_whl_trq_desired = rtb_Switch_mf /
    (Max_Motor_Torque_DataStore());

  /* If: '<S537>/If' incorporates:
   *  Inport: '<S546>/In1'
   *  Inport: '<S547>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S537>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S537>/override_enable'
   */
  if ((Pct_whl_trq_desired_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S537>/NewValue' incorporates:
     *  ActionPort: '<S546>/Action Port'
     */
    rtb_Merge_lu = (Pct_whl_trq_desired_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S546>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(242);
    }

    /* End of Outputs for SubSystem: '<S537>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S537>/OldValue' incorporates:
     *  ActionPort: '<S547>/Action Port'
     */
    rtb_Merge_lu = Mooventure2016_Rev5_B.s526_Pct_whl_trq_desired;

    /* S-Function (motohawk_sfun_code_cover): '<S547>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(243);
    }

    /* End of Outputs for SubSystem: '<S537>/OldValue' */
  }

  /* End of If: '<S537>/If' */

  /* If: '<S445>/If' incorporates:
   *  Inport: '<S504>/In1'
   *  Inport: '<S505>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S445>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S445>/override_enable'
   */
  if ((IPT_Wheel_Torque_Delivered_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S445>/NewValue' incorporates:
     *  ActionPort: '<S504>/Action Port'
     */
    Mooventure2016_Rev5_B.s445_Merge =
      (IPT_Wheel_Torque_Delivered_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S504>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(222);
    }

    /* End of Outputs for SubSystem: '<S445>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S445>/OldValue' incorporates:
     *  ActionPort: '<S505>/Action Port'
     */
    Mooventure2016_Rev5_B.s445_Merge =
      Mooventure2016_Rev5_B.s194_IPT_WheelTorqueDelivered;

    /* S-Function (motohawk_sfun_code_cover): '<S505>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(223);
    }

    /* End of Outputs for SubSystem: '<S445>/OldValue' */
  }

  /* End of If: '<S445>/If' */

  /* If: '<S538>/If' incorporates:
   *  Inport: '<S548>/In1'
   *  Inport: '<S549>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S538>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S538>/override_enable'
   */
  if ((Power_train_torq_actual_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S538>/NewValue' incorporates:
     *  ActionPort: '<S548>/Action Port'
     */
    rtb_Merge_ny = (Power_train_torq_actual_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S548>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(244);
    }

    /* End of Outputs for SubSystem: '<S538>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S538>/OldValue' incorporates:
     *  ActionPort: '<S549>/Action Port'
     */
    rtb_Merge_ny = Mooventure2016_Rev5_B.s445_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S549>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(245);
    }

    /* End of Outputs for SubSystem: '<S538>/OldValue' */
  }

  /* End of If: '<S538>/If' */

  /* MATLAB Function Block: '<S526>/Shift Position Conditioner' */

  /* MATLAB Function 'Foreground/Outputs/ABS Outputs/Shift Position Conditioner': '<S535>:1' */
  if (Mooventure2016_Rev5_B.s318_posOut == 1.0) {
    /* '<S535>:1:3' */
    /* '<S535>:1:4' */
    Mooventure2016_Rev5_B.s535_dirOut = 0.0;
  } else {
    /* '<S535>:1:6' */
    Mooventure2016_Rev5_B.s535_dirOut = 1.0;
  }

  /* End of MATLAB Function Block: '<S526>/Shift Position Conditioner' */
  /* If: '<S539>/If' incorporates:
   *  Inport: '<S550>/In1'
   *  Inport: '<S551>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S539>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S539>/override_enable'
   */
  if ((prndl_dir_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S539>/NewValue' incorporates:
     *  ActionPort: '<S550>/Action Port'
     */
    rtb_Merge_e = (prndl_dir_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S550>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(246);
    }

    /* End of Outputs for SubSystem: '<S539>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S539>/OldValue' incorporates:
     *  ActionPort: '<S551>/Action Port'
     */
    rtb_Merge_e = Mooventure2016_Rev5_B.s535_dirOut;

    /* S-Function (motohawk_sfun_code_cover): '<S551>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(247);
    }

    /* End of Outputs for SubSystem: '<S539>/OldValue' */
  }

  /* End of If: '<S539>/If' */

  /* If: '<S540>/If' incorporates:
   *  Inport: '<S552>/In1'
   *  Inport: '<S553>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S526>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S540>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S540>/override_enable'
   */
  if ((regen_torq_limit_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S540>/NewValue' incorporates:
     *  ActionPort: '<S552>/Action Port'
     */
    rtb_Merge_nz = (regen_torq_limit_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S552>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(248);
    }

    /* End of Outputs for SubSystem: '<S540>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S540>/OldValue' incorporates:
     *  ActionPort: '<S553>/Action Port'
     */
    rtb_Merge_nz = (Max_Regen_Torque_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S553>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(249);
    }

    /* End of Outputs for SubSystem: '<S540>/OldValue' */
  }

  /* End of If: '<S540>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S526>/Send CAN Messages' */
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

  /* If: '<S542>/If' incorporates:
   *  Inport: '<S556>/In1'
   *  Inport: '<S557>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S526>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S542>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S542>/override_enable'
   */
  if ((Commanded_gen_torq_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S542>/NewValue' incorporates:
     *  ActionPort: '<S556>/Action Port'
     */
    rtb_Merge_og = (Commanded_gen_torq_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S556>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(252);
    }

    /* End of Outputs for SubSystem: '<S542>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S542>/OldValue' incorporates:
     *  ActionPort: '<S557>/Action Port'
     */
    rtb_Merge_og = (Commanded_gen_trq_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S557>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(253);
    }

    /* End of Outputs for SubSystem: '<S542>/OldValue' */
  }

  /* End of If: '<S542>/If' */

  /* Product: '<S526>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S526>/motohawk_calibration4'
   */
  Mooventure2016_Rev5_B.s526_Commanded_mot_torq =
    Mooventure2016_Rev5_B.s119_MultiportSwitch /
    (Commanded_motor_trq_div_DataStore());

  /* If: '<S543>/If' incorporates:
   *  Inport: '<S558>/In1'
   *  Inport: '<S559>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S543>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S543>/override_enable'
   */
  if ((Commanded_motor_torq_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S543>/NewValue' incorporates:
     *  ActionPort: '<S558>/Action Port'
     */
    rtb_Merge_er = (Commanded_motor_torq_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S558>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(254);
    }

    /* End of Outputs for SubSystem: '<S543>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S543>/OldValue' incorporates:
     *  ActionPort: '<S559>/Action Port'
     */
    rtb_Merge_er = Mooventure2016_Rev5_B.s526_Commanded_mot_torq;

    /* S-Function (motohawk_sfun_code_cover): '<S559>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(255);
    }

    /* End of Outputs for SubSystem: '<S543>/OldValue' */
  }

  /* End of If: '<S543>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S526>/Send CAN Messages2' */
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

  /* S-Function (motohawk_sfun_probe): '<S526>/motohawk_probe4' */
  (regen_torq_limit_prb_DataStore()) = (Max_Regen_Torque_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S526>/motohawk_probe6' */
  (Commanded_gen_torq_Prb_DataStore()) = (Commanded_gen_trq_DataStore());

  /* If: '<S541>/If' incorporates:
   *  Inport: '<S554>/In1'
   *  Inport: '<S555>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S526>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S541>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S541>/override_enable'
   */
  if ((Engine_On_ABS_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S541>/NewValue' incorporates:
     *  ActionPort: '<S554>/Action Port'
     */
    rtb_Merge_a = (Engine_On_ABS_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S554>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(250);
    }

    /* End of Outputs for SubSystem: '<S541>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S541>/OldValue' incorporates:
     *  ActionPort: '<S555>/Action Port'
     */
    rtb_Merge_a = (Engine_On_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S555>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(251);
    }

    /* End of Outputs for SubSystem: '<S541>/OldValue' */
  }

  /* End of If: '<S541>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S526>/Send CAN Messages1' */
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

  /* S-Function (motohawk_sfun_probe): '<S526>/motohawk_probe5' */
  (Engine_On_ABS_Prb_DataStore()) = (Engine_On_DataStore());

  /* Logic: '<S527>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S527>/motohawk_calibration1'
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

  /* S-Function (motohawk_sfun_read_canmsg): '<S187>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3230p0005_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3230p0005_Receive(0, &msg_id, 0, msg_data);
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
      Mooventure2016_Rev5_B.s187_BatteryVoltage = ((real_T) tmp0) / ((real_T) 10);
      Mooventure2016_Rev5_B.s187_BatteryCurrent = (((real_T) tmp1) / ((real_T)
        10)) + ((real_T) -500);
      Mooventure2016_Rev5_B.s187_BusVoltage = ((real_T) tmp2) / ((real_T) 10);
      Mooventure2016_Rev5_B.s187_PVC_RollingCounter = (real_T) tmp3;
    }
  }

  /* S-Function Block: <S264>/motohawk_delta_time */
  rtb_Switch_mf = 10.0;

  /* Product: '<S264>/Product' incorporates:
   *  MinMax: '<S264>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S264>/motohawk_calibration'
   */
  rtb_Switch_mf /= (rtb_Switch_mf >= (VFilt_DataStore())) || rtIsNaN
    ((VFilt_DataStore())) ? rtb_Switch_mf : (VFilt_DataStore());

  /* Sum: '<S265>/Sum1' incorporates:
   *  Constant: '<S265>/Constant'
   *  Product: '<S265>/Product'
   *  Product: '<S265>/Product1'
   *  Sum: '<S265>/Sum'
   *  UnitDelay: '<S265>/Unit Delay'
   */
  rtb_Sum1_c = (1.0 - rtb_Switch_mf) *
    Mooventure2016_Rev5_DWork.s265_UnitDelay_DSTATE +
    Mooventure2016_Rev5_B.s187_BatteryVoltage * rtb_Switch_mf;

  /* If: '<S261>/If' incorporates:
   *  Inport: '<S274>/In1'
   *  Inport: '<S275>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S261>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S261>/override_enable'
   */
  if ((Battery_Voltage_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S261>/NewValue' incorporates:
     *  ActionPort: '<S274>/Action Port'
     */
    rtb_Merge_o0 = (Battery_Voltage_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S274>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(84);
    }

    /* End of Outputs for SubSystem: '<S261>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S261>/OldValue' incorporates:
     *  ActionPort: '<S275>/Action Port'
     */
    rtb_Merge_o0 = rtb_Sum1_c;

    /* S-Function (motohawk_sfun_code_cover): '<S275>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(85);
    }

    /* End of Outputs for SubSystem: '<S261>/OldValue' */
  }

  /* End of If: '<S261>/If' */

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

  /* DataTypeConversion: '<S527>/Data Type Conversion' */
  Mooventure2016_Rev5_B.s527_ConnectCommand = (int8_T)
    Mooventure2016_Rev5_B.s21_LogicalOperator2;

  /* If: '<S560>/If' incorporates:
   *  Inport: '<S562>/In1'
   *  Inport: '<S563>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S560>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S560>/override_enable'
   */
  if ((Batt_Connect_Cmd_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S560>/NewValue' incorporates:
     *  ActionPort: '<S562>/Action Port'
     */
    rtb_Merge_iq = ((int8_T)(Batt_Connect_Cmd_ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S562>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(256);
    }

    /* End of Outputs for SubSystem: '<S560>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S560>/OldValue' incorporates:
     *  ActionPort: '<S563>/Action Port'
     */
    rtb_Merge_iq = Mooventure2016_Rev5_B.s527_ConnectCommand;

    /* S-Function (motohawk_sfun_code_cover): '<S563>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(257);
    }

    /* End of Outputs for SubSystem: '<S560>/OldValue' */
  }

  /* End of If: '<S560>/If' */

  /* Logic: '<S527>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S527>/motohawk_calibration'
   */
  Mooventure2016_Rev5_B.s527_IsolationMeasurementEnable =
    !((Batt_Isolation_det_Cal_DataStore()) != 0.0);

  /* If: '<S561>/If' incorporates:
   *  Inport: '<S564>/In1'
   *  Inport: '<S565>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S561>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S561>/override_enable'
   */
  if ((Isolation_Measure_Enable_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S561>/NewValue' incorporates:
     *  ActionPort: '<S564>/Action Port'
     */
    rtb_Merge_kj = (Isolation_Measure_Enable_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S564>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(258);
    }

    /* End of Outputs for SubSystem: '<S561>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S561>/OldValue' incorporates:
     *  ActionPort: '<S565>/Action Port'
     */
    rtb_Merge_kj = Mooventure2016_Rev5_B.s527_IsolationMeasurementEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S565>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(259);
    }

    /* End of Outputs for SubSystem: '<S561>/OldValue' */
  }

  /* End of If: '<S561>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S527>/Send CAN Messages' */
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
        if (Mooventure2016_Rev5_ConstB.s527_OdometerValue < 0.0000000000F) {
          tmp3 = (uint32_T)(0UL);
        } else if (Mooventure2016_Rev5_ConstB.s527_OdometerValue >
                   1677721.5000000000F) {
          tmp3 = (uint32_T)(16777215UL);
        } else {
          tmp3 = (uint32_T)(Mooventure2016_Rev5_ConstB.s527_OdometerValue *
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

  /* S-Function (motohawk_sfun_read_canmsg): '<S188>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3443p0007_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3443p0007_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[7] & 0x00000001)) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[6] & 0x00000008) >> 3) ;
      Mooventure2016_Rev5_B.s188_HEV_CC_Defrost_Mode = (real_T) tmp0;
      Mooventure2016_Rev5_B.s188_AC_Engaged_CMD = (real_T) tmp1;
    }
  }

  /* If: '<S276>/If' incorporates:
   *  Inport: '<S278>/In1'
   *  Inport: '<S279>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S276>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S276>/override_enable'
   */
  if ((AC_Cmd_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S276>/NewValue' incorporates:
     *  ActionPort: '<S278>/Action Port'
     */
    Mooventure2016_Rev5_B.s276_Merge = (AC_Cmd_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S278>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(86);
    }

    /* End of Outputs for SubSystem: '<S276>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S276>/OldValue' incorporates:
     *  ActionPort: '<S279>/Action Port'
     */
    Mooventure2016_Rev5_B.s276_Merge = Mooventure2016_Rev5_B.s188_AC_Engaged_CMD;

    /* S-Function (motohawk_sfun_code_cover): '<S279>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(87);
    }

    /* End of Outputs for SubSystem: '<S276>/OldValue' */
  }

  /* End of If: '<S276>/If' */

  /* If: '<S566>/If' incorporates:
   *  Inport: '<S568>/In1'
   *  Inport: '<S569>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S566>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S566>/override_enable'
   */
  if ((AC_Command_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S566>/NewValue' incorporates:
     *  ActionPort: '<S568>/Action Port'
     */
    rtb_Merge_lm = (AC_Command_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S568>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(260);
    }

    /* End of Outputs for SubSystem: '<S566>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S566>/OldValue' incorporates:
     *  ActionPort: '<S569>/Action Port'
     */
    rtb_Merge_lm = Mooventure2016_Rev5_B.s276_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S569>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(261);
    }

    /* End of Outputs for SubSystem: '<S566>/OldValue' */
  }

  /* End of If: '<S566>/If' */

  /* If: '<S277>/If' incorporates:
   *  Inport: '<S280>/In1'
   *  Inport: '<S281>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S277>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S277>/override_enable'
   */
  if ((Defrost_Mode_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S277>/NewValue' incorporates:
     *  ActionPort: '<S280>/Action Port'
     */
    Mooventure2016_Rev5_B.s277_Merge = (Defrost_Mode_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S280>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(88);
    }

    /* End of Outputs for SubSystem: '<S277>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S277>/OldValue' incorporates:
     *  ActionPort: '<S281>/Action Port'
     */
    Mooventure2016_Rev5_B.s277_Merge =
      Mooventure2016_Rev5_B.s188_HEV_CC_Defrost_Mode;

    /* S-Function (motohawk_sfun_code_cover): '<S281>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(89);
    }

    /* End of Outputs for SubSystem: '<S277>/OldValue' */
  }

  /* End of If: '<S277>/If' */

  /* If: '<S567>/If' incorporates:
   *  Inport: '<S570>/In1'
   *  Inport: '<S571>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S567>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S567>/override_enable'
   */
  if ((Defrost_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S567>/NewValue' incorporates:
     *  ActionPort: '<S570>/Action Port'
     */
    rtb_Merge_b = (Defrost_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S570>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(262);
    }

    /* End of Outputs for SubSystem: '<S567>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S567>/OldValue' incorporates:
     *  ActionPort: '<S571>/Action Port'
     */
    rtb_Merge_b = Mooventure2016_Rev5_B.s277_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S571>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/CAN Gateway Out/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(263);
    }

    /* End of Outputs for SubSystem: '<S567>/OldValue' */
  }

  /* End of If: '<S567>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S528>/Send CAN Messages' */
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

  /* S-Function Block: <S229>/motohawk_ain2 Resource: AN2 */
  Mooventure2016_Rev5_B.s229_motohawk_ain2_o1 = AN2_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S235>/If' incorporates:
   *  Inport: '<S240>/In1'
   *  Inport: '<S241>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S235>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S235>/override_enable'
   */
  if ((Radiator_Blend_Valve_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S235>/NewValue' incorporates:
     *  ActionPort: '<S240>/Action Port'
     */
    rtb_Merge_c13 = ((uint16_T)(Radiator_Blend_Valve_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S240>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(64);
    }

    /* End of Outputs for SubSystem: '<S235>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S235>/OldValue' incorporates:
     *  ActionPort: '<S241>/Action Port'
     */
    rtb_Merge_c13 = Mooventure2016_Rev5_B.s229_motohawk_ain2_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S241>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(65);
    }

    /* End of Outputs for SubSystem: '<S235>/OldValue' */
  }

  /* End of If: '<S235>/If' */

  /* DataTypeConversion: '<S229>/Data Type Conversion1' */
  rtb_Switch_e = (real_T)rtb_Merge_c13;

  /* S-Function Block: <S234>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s234_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_d = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S234>/Product' incorporates:
   *  MinMax: '<S234>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S234>/motohawk_calibration'
   */
  rtb_Switch_d /= (rtb_Switch_d >= (RadLowPass_DataStore())) || rtIsNaN
    ((RadLowPass_DataStore())) ? rtb_Switch_d : (RadLowPass_DataStore());

  /* Sum: '<S239>/Sum1' incorporates:
   *  Constant: '<S239>/Constant'
   *  Product: '<S239>/Product'
   *  Product: '<S239>/Product1'
   *  Sum: '<S239>/Sum'
   *  UnitDelay: '<S239>/Unit Delay'
   */
  Mooventure2016_Rev5_B.s239_Sum1 = (1.0 - rtb_Switch_d) *
    Mooventure2016_Rev5_DWork.s239_UnitDelay_DSTATE + rtb_Switch_e *
    rtb_Switch_d;

  /* S-Function (motohawk_sfun_read_canmsg): '<S187>/Read CAN Message4' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3231p0005_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3231p0005_Receive(0, &msg_id, 0, msg_data);
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
      Mooventure2016_Rev5_B.s187_MaxCellVoltage = ((real_T) tmp0) / ((real_T)
        1000);
      Mooventure2016_Rev5_B.s187_MinCellVoltage = ((real_T) tmp1) / ((real_T)
        1000);
      Mooventure2016_Rev5_B.s187_MaxCellTemperature = (((real_T) tmp2) /
        ((real_T) 2)) + ((real_T) -40);
      Mooventure2016_Rev5_B.s187_MinCellTemperature = (((real_T) tmp3) /
        ((real_T) 2)) + ((real_T) -40);
      Mooventure2016_Rev5_B.s187_CoolantTemperature = (((real_T) tmp4) /
        ((real_T) 2)) + ((real_T) -40);
      Mooventure2016_Rev5_B.s187_DPI_RollingCounter = (real_T) tmp5;
    }
  }

  /* S-Function Block: <S229>/motohawk_ain4 Resource: AN3 */
  Mooventure2016_Rev5_B.s229_motohawk_ain4_o1 = AN3_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S236>/If' incorporates:
   *  Inport: '<S242>/In1'
   *  Inport: '<S243>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S236>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S236>/override_enable'
   */
  if ((Heater_Temp_Raw_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S236>/NewValue' incorporates:
     *  ActionPort: '<S242>/Action Port'
     */
    rtb_Merge_c13 = ((uint16_T)(Heater_Temp_Raw_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S242>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(66);
    }

    /* End of Outputs for SubSystem: '<S236>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S236>/OldValue' incorporates:
     *  ActionPort: '<S243>/Action Port'
     */
    rtb_Merge_c13 = Mooventure2016_Rev5_B.s229_motohawk_ain4_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S243>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(67);
    }

    /* End of Outputs for SubSystem: '<S236>/OldValue' */
  }

  /* End of If: '<S236>/If' */

  /* DataTypeConversion: '<S229>/Data Type Conversion2' */
  rtb_Heater_Temp_Raw = (real_T)rtb_Merge_c13;

  /* S-Function Block: <S229>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (Htr_Therm_PreIn_DataStore()) = rtb_Heater_Temp_Raw;
    (Htr_Therm_PreIdx_DataStore()) = TablePrelookup_real_T(rtb_Heater_Temp_Raw,
      (Htr_Therm_PreIdxArr_DataStore()), 11, (Htr_Therm_PreIdx_DataStore()));
    rtb_motohawk_prelookup_j = (Htr_Therm_PreIdx_DataStore());
  }

  /* S-Function Block: <S229>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    Mooventure2016_Rev5_B.s229_temp_reading = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup_j, (real_T *) ((Htr_Therm_Trnsfr_FuncTbl_DataStore
         ())), 11);
    (Htr_Therm_Trnsfr_Func_DataStore()) =
      Mooventure2016_Rev5_B.s229_temp_reading;
  }

  /* S-Function Block: <S229>/motohawk_ain1 Resource: AN14 */
  Mooventure2016_Rev5_B.s229_motohawk_ain1_o1 = AN14_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S237>/If' incorporates:
   *  Inport: '<S244>/In1'
   *  Inport: '<S245>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S237>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S237>/override_enable'
   */
  if ((Heater_Core_Blend_Valve_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S237>/NewValue' incorporates:
     *  ActionPort: '<S244>/Action Port'
     */
    rtb_Merge_gg = (Heater_Core_Blend_Valve_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S244>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(68);
    }

    /* End of Outputs for SubSystem: '<S237>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S237>/OldValue' incorporates:
     *  ActionPort: '<S245>/Action Port'
     */
    rtb_Merge_gg = Mooventure2016_Rev5_B.s229_motohawk_ain1_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S245>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(69);
    }

    /* End of Outputs for SubSystem: '<S237>/OldValue' */
  }

  /* End of If: '<S237>/If' */

  /* DataTypeConversion: '<S229>/Data Type Conversion' */
  rtb_Switch_d = (real_T)rtb_Merge_gg;

  /* S-Function Block: <S233>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s233_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S233>/Product' incorporates:
   *  MinMax: '<S233>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S233>/motohawk_calibration'
   */
  rtb_Switch_e /= (rtb_Switch_e >= (HtrCoreLowPass_DataStore())) || rtIsNaN
    ((HtrCoreLowPass_DataStore())) ? rtb_Switch_e : (HtrCoreLowPass_DataStore());

  /* Sum: '<S238>/Sum1' incorporates:
   *  Constant: '<S238>/Constant'
   *  Product: '<S238>/Product'
   *  Product: '<S238>/Product1'
   *  Sum: '<S238>/Sum'
   *  UnitDelay: '<S238>/Unit Delay'
   */
  Mooventure2016_Rev5_B.s238_Sum1 = (1.0 - rtb_Switch_e) *
    Mooventure2016_Rev5_DWork.s238_UnitDelay_DSTATE + rtb_Switch_d *
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

  /* S-Function (motohawk_sfun_read_canmsg): '<S191>/Read CAN Message6' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3683p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3683p0001_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[1] & 0x0000000F)) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[0] & 0x0000000F)) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[3] & 0x0000000F)) ;
      ((uint8_T *)(&tmp3))[0] = ((msg_data[2] & 0x0000000F)) ;
      Mooventure2016_Rev5_B.s191_DRIVER_1 = (real_T) tmp0;
      Mooventure2016_Rev5_B.s191_DRIVER_10 = (real_T) tmp1;
      Mooventure2016_Rev5_B.s191_PASSENGER_1 = (real_T) tmp2;
      Mooventure2016_Rev5_B.s191_PASSENGER_10 = (real_T) tmp3;
    }
  }

  /* If: '<S320>/If' incorporates:
   *  Inport: '<S334>/In1'
   *  Inport: '<S335>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S320>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S320>/override_enable'
   */
  if ((Driver_10_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S320>/NewValue' incorporates:
     *  ActionPort: '<S334>/Action Port'
     */
    rtb_UnitDelay_o = (Driver_10_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S334>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(104);
    }

    /* End of Outputs for SubSystem: '<S320>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S320>/OldValue' incorporates:
     *  ActionPort: '<S335>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s191_DRIVER_10;

    /* S-Function (motohawk_sfun_code_cover): '<S335>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(105);
    }

    /* End of Outputs for SubSystem: '<S320>/OldValue' */
  }

  /* End of If: '<S320>/If' */

  /* If: '<S331>/If' incorporates:
   *  Inport: '<S356>/In1'
   *  Inport: '<S357>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S331>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S331>/override_enable'
   */
  if ((Driver_1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S331>/NewValue' incorporates:
     *  ActionPort: '<S356>/Action Port'
     */
    rtb_UnitDelay_m = (Driver_1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S356>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(126);
    }

    /* End of Outputs for SubSystem: '<S331>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S331>/OldValue' incorporates:
     *  ActionPort: '<S357>/Action Port'
     */
    rtb_UnitDelay_m = Mooventure2016_Rev5_B.s191_DRIVER_1;

    /* S-Function (motohawk_sfun_code_cover): '<S357>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(127);
    }

    /* End of Outputs for SubSystem: '<S331>/OldValue' */
  }

  /* End of If: '<S331>/If' */

  /* MATLAB Function Block: '<S191>/Embedded MATLAB Function1' */

  /* MATLAB Function 'Foreground/Inputs/Driver Inputs/Embedded MATLAB Function1': '<S316>:1' */
  /* '<S316>:1:3' */
  Mooventure2016_Rev5_B.s316_driverTemp = rtb_UnitDelay_o * 10.0 +
    rtb_UnitDelay_m;

  /* If: '<S330>/If' incorporates:
   *  Inport: '<S354>/In1'
   *  Inport: '<S355>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S330>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S330>/override_enable'
   */
  if ((Driver_Temp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S330>/NewValue' incorporates:
     *  ActionPort: '<S354>/Action Port'
     */
    Mooventure2016_Rev5_B.s330_Merge = (Driver_Temp_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S354>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(124);
    }

    /* End of Outputs for SubSystem: '<S330>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S330>/OldValue' incorporates:
     *  ActionPort: '<S355>/Action Port'
     */
    Mooventure2016_Rev5_B.s330_Merge = Mooventure2016_Rev5_B.s316_driverTemp;

    /* S-Function (motohawk_sfun_code_cover): '<S355>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(125);
    }

    /* End of Outputs for SubSystem: '<S330>/OldValue' */
  }

  /* End of If: '<S330>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S192>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3796p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3796p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s192_AgeCount + 1) >
        Mooventure2016_Rev5_B.s192_AgeCount)
      Mooventure2016_Rev5_B.s192_AgeCount++;
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
      Mooventure2016_Rev5_B.s192_InputVoltage = ((real_T) tmp0) * ((real_T) 2);
      Mooventure2016_Rev5_B.s192_OutputVoltage = ((real_T) tmp1) * ((real_T) 2);
      Mooventure2016_Rev5_B.s192_InputCurrentLimitMax = ((real_T) tmp2) /
        ((real_T) 2);
      Mooventure2016_Rev5_B.s192_InputCurrent = ((real_T) tmp3) / ((real_T) 2);
      Mooventure2016_Rev5_B.s192_OutputCurrent = ((real_T) tmp4) / ((real_T) 2);
      Mooventure2016_Rev5_B.s192_Eaton_HV_Charger_Temperature = ((real_T) tmp5)
        + ((real_T) -40);
      Mooventure2016_Rev5_B.s192_IgnitionStatus = (boolean_T) tmp6;
      Mooventure2016_Rev5_B.s192_ChargerState = (real_T) tmp7;
      Mooventure2016_Rev5_B.s192_FaultSeverityIndicator = (boolean_T) tmp8;
      Mooventure2016_Rev5_B.s192_MessageCounter = (real_T) tmp9;
      Mooventure2016_Rev5_B.s192_MessageChecksum = (real_T) tmp10;
      Mooventure2016_Rev5_B.s192_AgeCount = 0;
    }
  }

  /* If: '<S364>/If' incorporates:
   *  Inport: '<S382>/In1'
   *  Inport: '<S383>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S364>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S364>/override_enable'
   */
  if ((Eaton_HV_Charger_Temperature_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S364>/NewValue' incorporates:
     *  ActionPort: '<S382>/Action Port'
     */
    Mooventure2016_Rev5_B.s364_Merge =
      (Eaton_HV_Charger_Temperature_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S382>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(140);
    }

    /* End of Outputs for SubSystem: '<S364>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S364>/OldValue' incorporates:
     *  ActionPort: '<S383>/Action Port'
     */
    Mooventure2016_Rev5_B.s364_Merge =
      Mooventure2016_Rev5_B.s192_Eaton_HV_Charger_Temperature;

    /* S-Function (motohawk_sfun_code_cover): '<S383>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(141);
    }

    /* End of Outputs for SubSystem: '<S364>/OldValue' */
  }

  /* End of If: '<S364>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S193>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3893p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3893p0001_Receive(0, &msg_id, 0, msg_data);
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
      Mooventure2016_Rev5_B.s193_ReadCANMessage_o1 = ((real_T) tmp0) * ((real_T)
        10);
      Mooventure2016_Rev5_B.s193_ReadCANMessage_o2 = (real_T) tmp1;
      Mooventure2016_Rev5_B.s193_ReadCANMessage_o3 = ((real_T) tmp2) + ((real_T)
        -40);
      Mooventure2016_Rev5_B.s193_ReadCANMessage_o4 = (real_T) tmp3;
      Mooventure2016_Rev5_B.s193_ReadCANMessage_o5 = (real_T) tmp4;
      Mooventure2016_Rev5_B.s193_ReadCANMessage_o6 = (real_T) tmp5;
      Mooventure2016_Rev5_B.s193_ReadCANMessage_o7 = (real_T) tmp6;
      Mooventure2016_Rev5_B.s193_ReadCANMessage_o8 = ((real_T) tmp7) + ((real_T)
        -40);
    }
  }

  /* If: '<S396>/If' incorporates:
   *  Inport: '<S406>/In1'
   *  Inport: '<S407>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S396>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S396>/override_enable'
   */
  if ((Temp_Guage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S396>/NewValue' incorporates:
     *  ActionPort: '<S406>/Action Port'
     */
    Mooventure2016_Rev5_B.s396_Merge = (Temp_Guage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S406>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(156);
    }

    /* End of Outputs for SubSystem: '<S396>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S396>/OldValue' incorporates:
     *  ActionPort: '<S407>/Action Port'
     */
    Mooventure2016_Rev5_B.s396_Merge =
      Mooventure2016_Rev5_B.s193_ReadCANMessage_o3;

    /* S-Function (motohawk_sfun_code_cover): '<S407>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(157);
    }

    /* End of Outputs for SubSystem: '<S396>/OldValue' */
  }

  /* End of If: '<S396>/If' */

  /* If: '<S401>/If' incorporates:
   *  Inport: '<S416>/In1'
   *  Inport: '<S417>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S401>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S401>/override_enable'
   */
  if ((Inv_Temp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S401>/NewValue' incorporates:
     *  ActionPort: '<S416>/Action Port'
     */
    Mooventure2016_Rev5_B.s401_Merge = (Inv_Temp_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S416>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(166);
    }

    /* End of Outputs for SubSystem: '<S401>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S401>/OldValue' incorporates:
     *  ActionPort: '<S417>/Action Port'
     */
    Mooventure2016_Rev5_B.s401_Merge =
      Mooventure2016_Rev5_B.s193_ReadCANMessage_o8;

    /* S-Function (motohawk_sfun_code_cover): '<S417>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(167);
    }

    /* End of Outputs for SubSystem: '<S401>/OldValue' */
  }

  /* End of If: '<S401>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S194>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3950p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3950p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s194_AgeCount_m + 1) >
        Mooventure2016_Rev5_B.s194_AgeCount_m)
      Mooventure2016_Rev5_B.s194_AgeCount_m++;
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
      Mooventure2016_Rev5_B.s194_IPT_InverterTemperature = ((real_T) tmp0) +
        ((real_T) -40);
      Mooventure2016_Rev5_B.s194_IPT_MotorTemperature = ((real_T) tmp1) +
        ((real_T) -40);
      Mooventure2016_Rev5_B.s194_IPT_MaxTorqueAvailGen = (real_T) tmp2;
      Mooventure2016_Rev5_B.s194_IPT_MaxTorqueAvailMotor = (real_T) tmp3;
      Mooventure2016_Rev5_B.s194_IPT_HVDCVoltage = (real_T) tmp4;
      Mooventure2016_Rev5_B.s194_IPT_ErrorCategory = (real_T) tmp5;
      Mooventure2016_Rev5_B.s194_IPT_IPTReady = (real_T) tmp6;
      Mooventure2016_Rev5_B.s194_IPT_IPTAwake = (real_T) tmp7;
      Mooventure2016_Rev5_B.s194_IPT_MotorReady = (boolean_T) tmp8;
      Mooventure2016_Rev5_B.s194_IPT_MaxWasteAvailable = ((real_T) tmp9) *
        ((real_T) 50);
      Mooventure2016_Rev5_B.s194_AgeCount_m = 0;
    }
  }

  /* If: '<S449>/If' incorporates:
   *  Inport: '<S512>/In1'
   *  Inport: '<S513>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S449>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S449>/override_enable'
   */
  if ((IPT_Inverter_Temperature_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S449>/NewValue' incorporates:
     *  ActionPort: '<S512>/Action Port'
     */
    Mooventure2016_Rev5_B.s449_Merge =
      (IPT_Inverter_Temperature_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S512>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(230);
    }

    /* End of Outputs for SubSystem: '<S449>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S449>/OldValue' incorporates:
     *  ActionPort: '<S513>/Action Port'
     */
    Mooventure2016_Rev5_B.s449_Merge =
      Mooventure2016_Rev5_B.s194_IPT_InverterTemperature;

    /* S-Function (motohawk_sfun_code_cover): '<S513>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(231);
    }

    /* End of Outputs for SubSystem: '<S449>/OldValue' */
  }

  /* End of If: '<S449>/If' */

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

  /* If: '<S590>/If' incorporates:
   *  Inport: '<S619>/In1'
   *  Inport: '<S620>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S590>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S590>/override_enable'
   */
  if ((Radiator_Pos_Request_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S590>/NewValue' incorporates:
     *  ActionPort: '<S619>/Action Port'
     */
    rtb_Merge_iy = (Radiator_Pos_Request_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S619>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(284);
    }

    /* End of Outputs for SubSystem: '<S590>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S590>/OldValue' incorporates:
     *  ActionPort: '<S620>/Action Port'
     */
    rtb_Merge_iy = Mooventure2016_Rev5_B.s32_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S620>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(285);
    }

    /* End of Outputs for SubSystem: '<S590>/OldValue' */
  }

  /* End of If: '<S590>/If' */

  /* MATLAB Function Block: '<S529>/Radiator Motion Control' */
  Mooventure2016_Rev5_HeaterCoreMotionControl(Mooventure2016_Rev5_B.s239_Sum1,
    rtb_Merge_iy, (Coolant_Hyst_DataStore()),
    &Mooventure2016_Rev5_B.s529_sf_RadiatorMotionControl);

  /* DataTypeConversion: '<S529>/Data Type Conversion5' */
  Mooventure2016_Rev5_B.s529_DataTypeConversion5 =
    ((Mooventure2016_Rev5_B.s529_sf_RadiatorMotionControl.s578_motorEnable !=
      0.0));

  /* Logic: '<S529>/Logical Operator' incorporates:
   *  Constant: '<S572>/Constant'
   *  RelationalOperator: '<S572>/Compare'
   *  S-Function (motohawk_sfun_data_read): '<S529>/motohawk_data_read1'
   *  S-Function (motohawk_sfun_data_read): '<S529>/motohawk_data_read2'
   */
  rtb_Eaton_Plugged_In = (Eaton_Plugged_In_DataStore() ||
    (Hybrid_State_DataStore() >= 2));

  /* S-Function Block: <S598>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s598_motohawk_delta_time_DWORK1, NULL);
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

  /* Switch: '<S598>/Switch' incorporates:
   *  Constant: '<S598>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S598>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S598>/motohawk_delta_time'
   *  Sum: '<S598>/Sum'
   */
  if (rtb_Merge_cq >= 1.0) {
    rtb_Switch_d = rtb_motohawk_delta_time_b + Heat4Timer_DataStore();
  } else {
    rtb_Switch_d = 0.0;
  }

  /* End of Switch: '<S598>/Switch' */
  /* Logic: '<S576>/Logical Operator' incorporates:
   *  RelationalOperator: '<S576>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S529>/motohawk_calibration'
   */
  rtb_RelationalOperator_jg = ((rtb_Switch_d >= (Startup_Delay_DataStore())) &&
                               (rtb_Merge_cq != 0.0));

  /* Logic: '<S529>/Logical Operator8' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S529>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s529_LogicalOperator8 = ((Vehicle_Ready_DataStore() &&
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

  /* MATLAB Function Block: '<S529>/Fan Adapter' */

  /* MATLAB Function 'Foreground/Outputs/Coolant Outputs/Fan Adapter': '<S577>:1' */
  if (rtb_UnitDelay_o == 1.0) {
    /* '<S577>:1:3' */
    /* '<S577>:1:4' */
    Mooventure2016_Rev5_B.s577_fan1 = 1.0;

    /* '<S577>:1:5' */
    Mooventure2016_Rev5_B.s577_fan2 = 0.0;

    /* '<S577>:1:6' */
    Mooventure2016_Rev5_B.s577_fan3 = 0.0;
  } else if (rtb_UnitDelay_o == 2.0) {
    /* '<S577>:1:7' */
    /* '<S577>:1:8' */
    Mooventure2016_Rev5_B.s577_fan1 = 0.0;

    /* '<S577>:1:9' */
    Mooventure2016_Rev5_B.s577_fan2 = 1.0;

    /* '<S577>:1:10' */
    Mooventure2016_Rev5_B.s577_fan3 = 0.0;
  } else if (rtb_UnitDelay_o == 3.0) {
    /* '<S577>:1:11' */
    /* '<S577>:1:12' */
    Mooventure2016_Rev5_B.s577_fan1 = 0.0;

    /* '<S577>:1:13' */
    Mooventure2016_Rev5_B.s577_fan2 = 1.0;

    /* '<S577>:1:14' */
    Mooventure2016_Rev5_B.s577_fan3 = 1.0;
  } else {
    /* '<S577>:1:16' */
    Mooventure2016_Rev5_B.s577_fan1 = 0.0;

    /* '<S577>:1:17' */
    Mooventure2016_Rev5_B.s577_fan2 = 0.0;

    /* '<S577>:1:18' */
    Mooventure2016_Rev5_B.s577_fan3 = 0.0;
  }

  /* End of MATLAB Function Block: '<S529>/Fan Adapter' */

  /* DataTypeConversion: '<S529>/Data Type Conversion4' */
  Mooventure2016_Rev5_B.s529_DataTypeConversion4 =
    ((Mooventure2016_Rev5_B.s529_sf_RadiatorMotionControl.s578_motorDirection !=
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

  /* If: '<S591>/If' incorporates:
   *  Inport: '<S621>/In1'
   *  Inport: '<S622>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S591>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S591>/override_enable'
   */
  if ((Heater_Core_Pos_Request_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S591>/NewValue' incorporates:
     *  ActionPort: '<S621>/Action Port'
     */
    rtb_Merge_ox = (Heater_Core_Pos_Request_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S621>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(286);
    }

    /* End of Outputs for SubSystem: '<S591>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S591>/OldValue' incorporates:
     *  ActionPort: '<S622>/Action Port'
     */
    rtb_Merge_ox = Mooventure2016_Rev5_B.s33_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S622>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(287);
    }

    /* End of Outputs for SubSystem: '<S591>/OldValue' */
  }

  /* End of If: '<S591>/If' */

  /* MATLAB Function Block: '<S529>/Heater Core Motion Control' */
  Mooventure2016_Rev5_HeaterCoreMotionControl(Mooventure2016_Rev5_B.s238_Sum1,
    rtb_Merge_ox, (Coolant_Hyst_DataStore()),
    &Mooventure2016_Rev5_B.s529_sf_HeaterCoreMotionControl);

  /* DataTypeConversion: '<S529>/Data Type Conversion1' */
  Mooventure2016_Rev5_B.s529_DataTypeConversion1 =
    ((Mooventure2016_Rev5_B.s529_sf_HeaterCoreMotionControl.s578_motorEnable !=
      0.0));

  /* DataTypeConversion: '<S529>/Data Type Conversion2' */
  Mooventure2016_Rev5_B.s529_DataTypeConversion2 =
    ((Mooventure2016_Rev5_B.s529_sf_HeaterCoreMotionControl.s578_motorDirection
      != 0.0));

  /* S-Function Block: <S595>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s595_motohawk_delta_time_DWORK1, NULL);
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

  /* Switch: '<S595>/Switch' incorporates:
   *  Constant: '<S595>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S595>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S595>/motohawk_delta_time'
   *  Sum: '<S595>/Sum'
   */
  if (rtb_UnitDelay_m >= 1.0) {
    rtb_Switch_e = rtb_motohawk_delta_time_i + Heat1Timer_DataStore();
  } else {
    rtb_Switch_e = 0.0;
  }

  /* End of Switch: '<S595>/Switch' */

  /* Logic: '<S573>/Logical Operator' incorporates:
   *  RelationalOperator: '<S573>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S529>/motohawk_calibration'
   */
  rtb_RelationalOperator2_id = ((rtb_Switch_e >= (Startup_Delay_DataStore())) &&
                                (rtb_UnitDelay_m != 0.0));

  /* Logic: '<S529>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S529>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s529_LogicalOperator5 = ((Vehicle_Ready_DataStore() &&
    rtb_Eaton_Plugged_In && rtb_RelationalOperator2_id));

  /* S-Function Block: <S596>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s596_motohawk_delta_time_DWORK1, NULL);
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

  /* Switch: '<S596>/Switch' incorporates:
   *  Constant: '<S596>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S596>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S596>/motohawk_delta_time'
   *  Sum: '<S596>/Sum'
   */
  if (rtb_Merge_bg >= 1.0) {
    rtb_Switch_fi = rtb_motohawk_delta_time_g + Heat2Timer_DataStore();
  } else {
    rtb_Switch_fi = 0.0;
  }

  /* End of Switch: '<S596>/Switch' */

  /* Logic: '<S574>/Logical Operator' incorporates:
   *  RelationalOperator: '<S574>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S529>/motohawk_calibration'
   */
  rtb_LogicalOperator2_c = ((rtb_Switch_fi >= (Startup_Delay_DataStore())) &&
    (rtb_Merge_bg != 0.0));

  /* Logic: '<S529>/Logical Operator6' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S529>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s529_LogicalOperator6 = ((Vehicle_Ready_DataStore() &&
    rtb_Eaton_Plugged_In && rtb_LogicalOperator2_c));

  /* S-Function Block: <S597>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s597_motohawk_delta_time_DWORK1, NULL);
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

  /* Switch: '<S597>/Switch' incorporates:
   *  Constant: '<S597>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S597>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S597>/motohawk_delta_time'
   *  Sum: '<S597>/Sum'
   */
  if (rtb_Merge_ko >= 1.0) {
    rtb_Switch_c = rtb_motohawk_delta_time_a + Heat3Timer_DataStore();
  } else {
    rtb_Switch_c = 0.0;
  }

  /* End of Switch: '<S597>/Switch' */

  /* Logic: '<S575>/Logical Operator' incorporates:
   *  RelationalOperator: '<S575>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S529>/motohawk_calibration'
   */
  rtb_Compare_nd = ((rtb_Switch_c >= (Startup_Delay_DataStore())) &&
                    (rtb_Merge_ko != 0.0));

  /* Logic: '<S529>/Logical Operator7' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S529>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s529_LogicalOperator7 = ((Vehicle_Ready_DataStore() &&
    rtb_Eaton_Plugged_In && rtb_Compare_nd));

  /* If: '<S585>/If' incorporates:
   *  Inport: '<S609>/In1'
   *  Inport: '<S610>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S585>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S585>/override_enable'
   */
  if ((Fan2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S585>/NewValue' incorporates:
     *  ActionPort: '<S609>/Action Port'
     */
    rtb_UnitDelay_o = (Fan2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S609>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(274);
    }

    /* End of Outputs for SubSystem: '<S585>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S585>/OldValue' incorporates:
     *  ActionPort: '<S610>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s577_fan2;

    /* S-Function (motohawk_sfun_code_cover): '<S610>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(275);
    }

    /* End of Outputs for SubSystem: '<S585>/OldValue' */
  }

  /* End of If: '<S585>/If' */

  /* DataTypeConversion: '<S529>/Data Type Conversion' */
  rtb_DataTypeConversion_gi = (rtb_UnitDelay_o != 0.0);

  /* If: '<S586>/If' incorporates:
   *  Inport: '<S611>/In1'
   *  Inport: '<S612>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S586>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S586>/override_enable'
   */
  if ((Fan3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S586>/NewValue' incorporates:
     *  ActionPort: '<S611>/Action Port'
     */
    rtb_UnitDelay_o = (Fan3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S611>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(276);
    }

    /* End of Outputs for SubSystem: '<S586>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S586>/OldValue' incorporates:
     *  ActionPort: '<S612>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s577_fan3;

    /* S-Function (motohawk_sfun_code_cover): '<S612>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(277);
    }

    /* End of Outputs for SubSystem: '<S586>/OldValue' */
  }

  /* End of If: '<S586>/If' */

  /* DataTypeConversion: '<S529>/Data Type Conversion3' */
  rtb_DataTypeConversion3_i = (rtb_UnitDelay_o != 0.0);

  /* If: '<S584>/If' incorporates:
   *  Inport: '<S607>/In1'
   *  Inport: '<S608>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S584>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S584>/override_enable'
   */
  if ((Fan1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S584>/NewValue' incorporates:
     *  ActionPort: '<S607>/Action Port'
     */
    rtb_UnitDelay_o = (Fan1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S607>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(272);
    }

    /* End of Outputs for SubSystem: '<S584>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S584>/OldValue' incorporates:
     *  ActionPort: '<S608>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s577_fan1;

    /* S-Function (motohawk_sfun_code_cover): '<S608>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(273);
    }

    /* End of Outputs for SubSystem: '<S584>/OldValue' */
  }

  /* End of If: '<S584>/If' */

  /* DataTypeConversion: '<S529>/Data Type Conversion6' */
  rtb_DataTypeConversion6 = (rtb_UnitDelay_o != 0.0);

  /* Saturate: '<S595>/Saturation' */
  rtb_Saturation = rtb_Switch_e >= 86400.0 ? 86400.0 : rtb_Switch_e <= 0.0 ? 0.0
    : rtb_Switch_e;

  /* S-Function (motohawk_sfun_data_write): '<S595>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Heat1Timer */
  {
    Heat1Timer_DataStore() = rtb_Saturation;
  }

  /* Saturate: '<S596>/Saturation' */
  rtb_Saturation_i = rtb_Switch_fi >= 86400.0 ? 86400.0 : rtb_Switch_fi <= 0.0 ?
    0.0 : rtb_Switch_fi;

  /* S-Function (motohawk_sfun_data_write): '<S596>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Heat2Timer */
  {
    Heat2Timer_DataStore() = rtb_Saturation_i;
  }

  /* Saturate: '<S597>/Saturation' */
  rtb_Saturation_l = rtb_Switch_c >= 86400.0 ? 86400.0 : rtb_Switch_c <= 0.0 ?
    0.0 : rtb_Switch_c;

  /* S-Function (motohawk_sfun_data_write): '<S597>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Heat3Timer */
  {
    Heat3Timer_DataStore() = rtb_Saturation_l;
  }

  /* Saturate: '<S598>/Saturation' */
  rtb_Saturation_f = rtb_Switch_d >= 86400.0 ? 86400.0 : rtb_Switch_d <= 0.0 ?
    0.0 : rtb_Switch_d;

  /* S-Function (motohawk_sfun_data_write): '<S598>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Heat4Timer */
  {
    Heat4Timer_DataStore() = rtb_Saturation_f;
  }

  /* If: '<S580>/If' incorporates:
   *  Inport: '<S599>/In1'
   *  Inport: '<S600>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S580>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S580>/override_enable'
   */
  if ((Radiator_Motor_Enable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S580>/NewValue' incorporates:
     *  ActionPort: '<S599>/Action Port'
     */
    rtb_Merge_gd = (Radiator_Motor_Enable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S599>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(264);
    }

    /* End of Outputs for SubSystem: '<S580>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S580>/OldValue' incorporates:
     *  ActionPort: '<S600>/Action Port'
     */
    rtb_Merge_gd = Mooventure2016_Rev5_B.s529_DataTypeConversion5;

    /* S-Function (motohawk_sfun_code_cover): '<S600>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(265);
    }

    /* End of Outputs for SubSystem: '<S580>/OldValue' */
  }

  /* End of If: '<S580>/If' */

  /* If: '<S581>/If' incorporates:
   *  Inport: '<S601>/In1'
   *  Inport: '<S602>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S581>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S581>/override_enable'
   */
  if ((Heat4_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S581>/NewValue' incorporates:
     *  ActionPort: '<S601>/Action Port'
     */
    rtb_Merge_dm = (Heat4_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S601>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(266);
    }

    /* End of Outputs for SubSystem: '<S581>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S581>/OldValue' incorporates:
     *  ActionPort: '<S602>/Action Port'
     */
    rtb_Merge_dm = Mooventure2016_Rev5_B.s529_LogicalOperator8;

    /* S-Function (motohawk_sfun_code_cover): '<S602>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(267);
    }

    /* End of Outputs for SubSystem: '<S581>/OldValue' */
  }

  /* End of If: '<S581>/If' */

  /* If: '<S582>/If' incorporates:
   *  Inport: '<S603>/In1'
   *  Inport: '<S604>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S582>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S582>/override_enable'
   */
  if ((Radiator_Pump_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S582>/NewValue' incorporates:
     *  ActionPort: '<S603>/Action Port'
     */
    rtb_Merge_ay5 = (Radiator_Pump_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S603>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(268);
    }

    /* End of Outputs for SubSystem: '<S582>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S582>/OldValue' incorporates:
     *  ActionPort: '<S604>/Action Port'
     */
    rtb_Merge_ay5 = Mooventure2016_Rev5_B.s15_Cooling_Pump_Radiator;

    /* S-Function (motohawk_sfun_code_cover): '<S604>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(269);
    }

    /* End of Outputs for SubSystem: '<S582>/OldValue' */
  }

  /* End of If: '<S582>/If' */

  /* If: '<S583>/If' incorporates:
   *  Inport: '<S605>/In1'
   *  Inport: '<S606>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S583>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S583>/override_enable'
   */
  if ((Heater_Core_Pump_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S583>/NewValue' incorporates:
     *  ActionPort: '<S605>/Action Port'
     */
    rtb_Merge_lq = (Heater_Core_Pump_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S605>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(270);
    }

    /* End of Outputs for SubSystem: '<S583>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S583>/OldValue' incorporates:
     *  ActionPort: '<S606>/Action Port'
     */
    rtb_Merge_lq = Mooventure2016_Rev5_B.s15_Cooling_Pump_Heater_Core;

    /* S-Function (motohawk_sfun_code_cover): '<S606>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(271);
    }

    /* End of Outputs for SubSystem: '<S583>/OldValue' */
  }

  /* End of If: '<S583>/If' */

  /* If: '<S587>/If' incorporates:
   *  Inport: '<S613>/In1'
   *  Inport: '<S614>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S587>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S587>/override_enable'
   */
  if ((Radiator_Motor_Direction_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S587>/NewValue' incorporates:
     *  ActionPort: '<S613>/Action Port'
     */
    rtb_Merge_pi3 = (Radiator_Motor_Direction_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S613>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(278);
    }

    /* End of Outputs for SubSystem: '<S587>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S587>/OldValue' incorporates:
     *  ActionPort: '<S614>/Action Port'
     */
    rtb_Merge_pi3 = Mooventure2016_Rev5_B.s529_DataTypeConversion4;

    /* S-Function (motohawk_sfun_code_cover): '<S614>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(279);
    }

    /* End of Outputs for SubSystem: '<S587>/OldValue' */
  }

  /* End of If: '<S587>/If' */

  /* If: '<S588>/If' incorporates:
   *  Inport: '<S615>/In1'
   *  Inport: '<S616>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S588>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S588>/override_enable'
   */
  if ((Heater_Core_Motor_Enable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S588>/NewValue' incorporates:
     *  ActionPort: '<S615>/Action Port'
     */
    rtb_Merge_of1 = (Heater_Core_Motor_Enable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S615>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(280);
    }

    /* End of Outputs for SubSystem: '<S588>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S588>/OldValue' incorporates:
     *  ActionPort: '<S616>/Action Port'
     */
    rtb_Merge_of1 = Mooventure2016_Rev5_B.s529_DataTypeConversion1;

    /* S-Function (motohawk_sfun_code_cover): '<S616>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(281);
    }

    /* End of Outputs for SubSystem: '<S588>/OldValue' */
  }

  /* End of If: '<S588>/If' */

  /* If: '<S589>/If' incorporates:
   *  Inport: '<S617>/In1'
   *  Inport: '<S618>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S589>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S589>/override_enable'
   */
  if ((Heater_Core_Motor_Direction_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S589>/NewValue' incorporates:
     *  ActionPort: '<S617>/Action Port'
     */
    rtb_Merge_ln = (Heater_Core_Motor_Direction_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S617>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(282);
    }

    /* End of Outputs for SubSystem: '<S589>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S589>/OldValue' incorporates:
     *  ActionPort: '<S618>/Action Port'
     */
    rtb_Merge_ln = Mooventure2016_Rev5_B.s529_DataTypeConversion2;

    /* S-Function (motohawk_sfun_code_cover): '<S618>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(283);
    }

    /* End of Outputs for SubSystem: '<S589>/OldValue' */
  }

  /* End of If: '<S589>/If' */

  /* If: '<S592>/If' incorporates:
   *  Inport: '<S623>/In1'
   *  Inport: '<S624>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S592>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S592>/override_enable'
   */
  if ((Heat1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S592>/NewValue' incorporates:
     *  ActionPort: '<S623>/Action Port'
     */
    rtb_Merge_oqt = (Heat1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S623>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(288);
    }

    /* End of Outputs for SubSystem: '<S592>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S592>/OldValue' incorporates:
     *  ActionPort: '<S624>/Action Port'
     */
    rtb_Merge_oqt = Mooventure2016_Rev5_B.s529_LogicalOperator5;

    /* S-Function (motohawk_sfun_code_cover): '<S624>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(289);
    }

    /* End of Outputs for SubSystem: '<S592>/OldValue' */
  }

  /* End of If: '<S592>/If' */

  /* If: '<S593>/If' incorporates:
   *  Inport: '<S625>/In1'
   *  Inport: '<S626>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S593>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S593>/override_enable'
   */
  if ((Heat2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S593>/NewValue' incorporates:
     *  ActionPort: '<S625>/Action Port'
     */
    rtb_Merge_cg = (Heat2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S625>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(290);
    }

    /* End of Outputs for SubSystem: '<S593>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S593>/OldValue' incorporates:
     *  ActionPort: '<S626>/Action Port'
     */
    rtb_Merge_cg = Mooventure2016_Rev5_B.s529_LogicalOperator6;

    /* S-Function (motohawk_sfun_code_cover): '<S626>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(291);
    }

    /* End of Outputs for SubSystem: '<S593>/OldValue' */
  }

  /* End of If: '<S593>/If' */

  /* If: '<S594>/If' incorporates:
   *  Inport: '<S627>/In1'
   *  Inport: '<S628>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S594>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S594>/override_enable'
   */
  if ((Heat3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S594>/NewValue' incorporates:
     *  ActionPort: '<S627>/Action Port'
     */
    rtb_Merge_l1 = (Heat3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S627>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(292);
    }

    /* End of Outputs for SubSystem: '<S594>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S594>/OldValue' incorporates:
     *  ActionPort: '<S628>/Action Port'
     */
    rtb_Merge_l1 = Mooventure2016_Rev5_B.s529_LogicalOperator7;

    /* S-Function (motohawk_sfun_code_cover): '<S628>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(293);
    }

    /* End of Outputs for SubSystem: '<S594>/OldValue' */
  }

  /* End of If: '<S594>/If' */

  /* S-Function Block: <S19>/motohawk_din Resource: ESTOP2 */
  rtb_motohawk_din = ESTOP2_DigitalInput_Get();

  /* Logic: '<S19>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_din): '<S19>/motohawk_din'
   */
  Mooventure2016_Rev5_B.s19_LogicalOperator5 = !rtb_motohawk_din;

  /* S-Function (motohawk_sfun_fault_action): '<S19>/motohawk_fault_action'
   *
   * Regarding '<S19>/motohawk_fault_action':
     Get Fault Action Status: Dyno_Shutdown
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s19_motohawk_fault_action = GetFaultActionStatus(7);
  }

  /* Logic: '<S19>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S19>/motohawk_data_read1'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s19_LogicalOperator5 ||
    Mooventure2016_Rev5_B.s19_motohawk_fault_action || Shutdown_Req_DataStore());

  /* Logic: '<S19>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S19>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S19>/motohawk_data_read'
   */
  rtb_LogicalOperator5_c = (Batt_Load_Enable_DataStore() ||
    ((Auto_Battery_Startup_DataStore()) != 0.0));

  /* If: '<S362>/If' incorporates:
   *  Inport: '<S378>/In1'
   *  Inport: '<S379>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S362>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S362>/override_enable'
   */
  if ((Charger_State_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S362>/NewValue' incorporates:
     *  ActionPort: '<S378>/Action Port'
     */
    rtb_Merge_b0 = (Charger_State_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S378>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(136);
    }

    /* End of Outputs for SubSystem: '<S362>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S362>/OldValue' incorporates:
     *  ActionPort: '<S379>/Action Port'
     */
    rtb_Merge_b0 = Mooventure2016_Rev5_B.s192_ChargerState;

    /* S-Function (motohawk_sfun_code_cover): '<S379>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(137);
    }

    /* End of Outputs for SubSystem: '<S362>/OldValue' */
  }

  /* End of If: '<S362>/If' */

  /* RelationalOperator: '<S192>/Relational Operator1' incorporates:
   *  Constant: '<S192>/Constant1'
   */
  rtb_Eaton_Charging = (rtb_Merge_b0 >= 2.0);

  /* Stateflow: '<S19>/Chart' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S19>/motohawk_data_read2'
   */

  /* Gateway: Foreground/Control/Vehicle Run/Stop Determination/Chart */
  /* During: Foreground/Control/Vehicle Run/Stop Determination/Chart */
  if (Mooventure2016_Rev5_DWork.s184_is_active_c1_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Vehicle Run/Stop Determination/Chart */
    Mooventure2016_Rev5_DWork.s184_is_active_c1_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S184>:10' */
    Mooventure2016_Rev5_DWork.s184_is_c1_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Initial;
  } else {
    switch (Mooventure2016_Rev5_DWork.s184_is_c1_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Batterybootup:
      /* During 'Batterybootup': '<S184>:13' */
      if (rtb_LogicalOperator5) {
        /* Transition: '<S184>:22' */
        Mooventure2016_Rev5_DWork.s184_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Shutdown_Sequence;
      } else if (rtb_LogicalOperator5_c) {
        /* Transition: '<S184>:37' */
        Mooventure2016_Rev5_DWork.s184_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Charging_and_Temp;
      } else {
        Mooventure2016_Rev5_B.s184_Vehicle_Enable = TRUE;
        Mooventure2016_Rev5_B.s184_Vehicle_Ready = FALSE;
        Mooventure2016_Rev5_B.s184_Torque_Enable = FALSE;
        Mooventure2016_Rev5_B.s184_Keyed_Relay = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_Charging_and_Temp:
      /* During 'Charging_and_Temp': '<S184>:15' */
      if (!rtb_Eaton_Charging) {
        /* Transition: '<S184>:20' */
        Mooventure2016_Rev5_DWork.s184_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal_Operation;
      } else if (rtb_LogicalOperator5) {
        /* Transition: '<S184>:40' */
        Mooventure2016_Rev5_DWork.s184_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Counting;

        /* Entry 'Counting': '<S184>:39' */
        Mooventure2016_Rev5_DWork.s184_count = 0.0;
      } else {
        Mooventure2016_Rev5_B.s184_Vehicle_Enable = TRUE;
        Mooventure2016_Rev5_B.s184_Vehicle_Ready = TRUE;
        Mooventure2016_Rev5_B.s184_Torque_Enable = FALSE;
        Mooventure2016_Rev5_B.s184_Keyed_Relay = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_Counting:
      /* During 'Counting': '<S184>:39' */
      if (Mooventure2016_Rev5_DWork.s184_count >= 200.0) {
        /* Transition: '<S184>:42' */
        Mooventure2016_Rev5_DWork.s184_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Shutdown_Sequence;
      } else if (!rtb_LogicalOperator5) {
        /* Transition: '<S184>:43' */
        Mooventure2016_Rev5_DWork.s184_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal_Operation;
      } else {
        Mooventure2016_Rev5_DWork.s184_count =
          Mooventure2016_Rev5_DWork.s184_count + 1.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Initial:
      /* During 'Initial': '<S184>:9' */
      if (!rtb_LogicalOperator5) {
        /* Transition: '<S184>:14' */
        Mooventure2016_Rev5_DWork.s184_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Batterybootup;
      } else {
        /* Transition: '<S184>:30' */
        Mooventure2016_Rev5_DWork.s184_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Shutdown_Sequence;
      }
      break;

     case Mooventure2016_Rev5_IN_Kill_Component_Keyed:
      /* During 'Kill_Component_Keyed': '<S184>:26' */
      Mooventure2016_Rev5_B.s184_Vehicle_Enable = FALSE;
      Mooventure2016_Rev5_B.s184_Vehicle_Ready = FALSE;
      Mooventure2016_Rev5_B.s184_Torque_Enable = FALSE;
      Mooventure2016_Rev5_B.s184_Keyed_Relay = FALSE;
      break;

     case Mooventure2016_Rev5_IN_Normal_Operation:
      /* During 'Normal_Operation': '<S184>:18' */
      if (rtb_Eaton_Charging) {
        /* Transition: '<S184>:25' */
        Mooventure2016_Rev5_DWork.s184_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Charging_and_Temp;
      } else if (rtb_LogicalOperator5) {
        /* Transition: '<S184>:41' */
        Mooventure2016_Rev5_DWork.s184_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Counting;

        /* Entry 'Counting': '<S184>:39' */
        Mooventure2016_Rev5_DWork.s184_count = 0.0;
      } else {
        Mooventure2016_Rev5_B.s184_Vehicle_Enable = TRUE;
        Mooventure2016_Rev5_B.s184_Vehicle_Ready = TRUE;
        Mooventure2016_Rev5_B.s184_Torque_Enable = TRUE;
        Mooventure2016_Rev5_B.s184_Keyed_Relay = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_Shutdown_Sequence:
      /* During 'Shutdown_Sequence': '<S184>:21' */
      if (!Batt_Contactor_Status_DataStore()) {
        /* Transition: '<S184>:27' */
        Mooventure2016_Rev5_DWork.s184_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Kill_Component_Keyed;
      } else {
        Mooventure2016_Rev5_B.s184_Vehicle_Enable = FALSE;
        Mooventure2016_Rev5_B.s184_Vehicle_Ready = FALSE;
        Mooventure2016_Rev5_B.s184_Torque_Enable = FALSE;
        Mooventure2016_Rev5_B.s184_Keyed_Relay = TRUE;
      }
      break;

     default:
      /* Transition: '<S184>:10' */
      Mooventure2016_Rev5_DWork.s184_is_c1_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Initial;
      break;
    }
  }

  /* End of Stateflow: '<S19>/Chart' */

  /* Stateflow: '<S530>/Coil1State' */

  /* Gateway: Foreground/Outputs/DistributionBox/Coil1State */
  /* During: Foreground/Outputs/DistributionBox/Coil1State */
  if (Mooventure2016_Rev5_DWork.s629_is_active_c8_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/DistributionBox/Coil1State */
    Mooventure2016_Rev5_DWork.s629_is_active_c8_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S629>:10' */
    Mooventure2016_Rev5_DWork.s629_is_c8_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Coil1Disabled;
  } else {
    switch (Mooventure2016_Rev5_DWork.s629_is_c8_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Coil1Disabled:
      /* During 'Coil1Disabled': '<S629>:9' */
      if ((Mooventure2016_Rev5_B.s119_MultiportSwitch == 0.0) && (rtb_Merge_o0 >=
           50.0) && Mooventure2016_Rev5_B.s184_Keyed_Relay) {
        /* Transition: '<S629>:30' */
        Mooventure2016_Rev5_DWork.s629_is_c8_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil1Enabled;
      } else {
        Mooventure2016_Rev5_B.s629_Coil1State = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Coil1Enabled:
      /* During 'Coil1Enabled': '<S629>:21' */
      if ((Mooventure2016_Rev5_B.s119_MultiportSwitch == 0.0) &&
          (!Mooventure2016_Rev5_B.s184_Keyed_Relay)) {
        /* Transition: '<S629>:32' */
        Mooventure2016_Rev5_DWork.s629_is_c8_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil1Disabled;
      } else {
        Mooventure2016_Rev5_B.s629_Coil1State = TRUE;
      }
      break;

     default:
      /* Transition: '<S629>:10' */
      Mooventure2016_Rev5_DWork.s629_is_c8_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Coil1Disabled;
      break;
    }
  }

  /* End of Stateflow: '<S530>/Coil1State' */

  /* DataTypeConversion: '<S530>/Data Type Conversion1' incorporates:
   *  Constant: '<S632>/Constant'
   *  RelationalOperator: '<S632>/Compare'
   */
  rtb_LogicalOperator5 = (rtb_Merge_b0 == 2.0);

  /* Stateflow: '<S530>/Coil2State' */

  /* Gateway: Foreground/Outputs/DistributionBox/Coil2State */
  /* During: Foreground/Outputs/DistributionBox/Coil2State */
  if (Mooventure2016_Rev5_DWork.s630_is_active_c9_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/DistributionBox/Coil2State */
    Mooventure2016_Rev5_DWork.s630_is_active_c9_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S630>:10' */
    Mooventure2016_Rev5_DWork.s630_is_c9_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Coil2Disabled;
  } else {
    switch (Mooventure2016_Rev5_DWork.s630_is_c9_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Coil2Disabled:
      /* During 'Coil2Disabled': '<S630>:9' */
      if ((!rtb_LogicalOperator5) && Mooventure2016_Rev5_B.s184_Keyed_Relay) {
        /* Transition: '<S630>:48' */
        Mooventure2016_Rev5_DWork.s630_is_c9_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil2Enabled;
      } else {
        Mooventure2016_Rev5_B.s630_Coil2State = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Coil2Enabled:
      /* During 'Coil2Enabled': '<S630>:21' */
      if ((!rtb_LogicalOperator5) && (!Mooventure2016_Rev5_B.s184_Keyed_Relay))
      {
        /* Transition: '<S630>:32' */
        Mooventure2016_Rev5_DWork.s630_is_c9_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil2Disabled;
      } else {
        Mooventure2016_Rev5_B.s630_Coil2State = TRUE;
      }
      break;

     default:
      /* Transition: '<S630>:10' */
      Mooventure2016_Rev5_DWork.s630_is_c9_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Coil2Disabled;
      break;
    }
  }

  /* End of Stateflow: '<S530>/Coil2State' */

  /* Logic: '<S530>/Logical Operator1' */
  rtb_LogicalOperator5 = ((rtb_UnitDelay_m != 0.0) || (rtb_Merge_bg != 0.0) ||
    (rtb_Merge_ko != 0.0) || (rtb_Merge_cq != 0.0));

  /* Logic: '<S530>/Logical Operator' */
  rtb_LogicalOperator5_c = ((Mooventure2016_Rev5_B.s277_Merge != 0.0) ||
    (Mooventure2016_Rev5_B.s276_Merge != 0.0));

  /* Stateflow: '<S530>/Coil2State1' */

  /* Gateway: Foreground/Outputs/DistributionBox/Coil2State1 */
  /* During: Foreground/Outputs/DistributionBox/Coil2State1 */
  if (Mooventure2016_Rev5_DWork.s631_is_active_c10_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/DistributionBox/Coil2State1 */
    Mooventure2016_Rev5_DWork.s631_is_active_c10_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S631>:10' */
    Mooventure2016_Rev5_DWork.s631_is_c10_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Coil3Disabled;
  } else {
    switch (Mooventure2016_Rev5_DWork.s631_is_c10_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Coil3Disabled:
      /* During 'Coil3Disabled': '<S631>:9' */
      if ((!rtb_LogicalOperator5) && (!rtb_LogicalOperator5_c) &&
          Mooventure2016_Rev5_B.s184_Keyed_Relay) {
        /* Transition: '<S631>:30' */
        Mooventure2016_Rev5_DWork.s631_is_c10_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil3Enabled;
      } else {
        Mooventure2016_Rev5_B.s631_Coil3State = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Coil3Enabled:
      /* During 'Coil3Enabled': '<S631>:21' */
      if ((!rtb_LogicalOperator5) && (!rtb_LogicalOperator5_c) &&
          (!Mooventure2016_Rev5_B.s184_Keyed_Relay)) {
        /* Transition: '<S631>:32' */
        Mooventure2016_Rev5_DWork.s631_is_c10_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil3Disabled;
      } else {
        Mooventure2016_Rev5_B.s631_Coil3State = TRUE;
      }
      break;

     default:
      /* Transition: '<S631>:10' */
      Mooventure2016_Rev5_DWork.s631_is_c10_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Coil3Disabled;
      break;
    }
  }

  /* End of Stateflow: '<S530>/Coil2State1' */

  /* If: '<S635>/If' incorporates:
   *  Inport: '<S643>/In1'
   *  Inport: '<S644>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S635>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S635>/override_enable'
   */
  if ((Coil1_IPT_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S635>/NewValue' incorporates:
     *  ActionPort: '<S643>/Action Port'
     */
    rtb_Merge_ef = (Coil1_IPT_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S643>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(298);
    }

    /* End of Outputs for SubSystem: '<S635>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S635>/OldValue' incorporates:
     *  ActionPort: '<S644>/Action Port'
     */
    rtb_Merge_ef = Mooventure2016_Rev5_B.s629_Coil1State;

    /* S-Function (motohawk_sfun_code_cover): '<S644>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(299);
    }

    /* End of Outputs for SubSystem: '<S635>/OldValue' */
  }

  /* End of If: '<S635>/If' */

  /* If: '<S636>/If' incorporates:
   *  Inport: '<S645>/In1'
   *  Inport: '<S646>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S636>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S636>/override_enable'
   */
  if ((Coil2_Charger_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S636>/NewValue' incorporates:
     *  ActionPort: '<S645>/Action Port'
     */
    rtb_Merge_nv = (Coil2_Charger_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S645>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(300);
    }

    /* End of Outputs for SubSystem: '<S636>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S636>/OldValue' incorporates:
     *  ActionPort: '<S646>/Action Port'
     */
    rtb_Merge_nv = Mooventure2016_Rev5_B.s630_Coil2State;

    /* S-Function (motohawk_sfun_code_cover): '<S646>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(301);
    }

    /* End of Outputs for SubSystem: '<S636>/OldValue' */
  }

  /* End of If: '<S636>/If' */

  /* If: '<S637>/If' incorporates:
   *  Inport: '<S647>/In1'
   *  Inport: '<S648>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S637>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S637>/override_enable'
   */
  if ((Coil3_Heater_AC_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S637>/NewValue' incorporates:
     *  ActionPort: '<S647>/Action Port'
     */
    rtb_Merge_iu = (Coil3_Heater_AC_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S647>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(302);
    }

    /* End of Outputs for SubSystem: '<S637>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S637>/OldValue' incorporates:
     *  ActionPort: '<S648>/Action Port'
     */
    rtb_Merge_iu = Mooventure2016_Rev5_B.s631_Coil3State;

    /* S-Function (motohawk_sfun_code_cover): '<S648>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(303);
    }

    /* End of Outputs for SubSystem: '<S637>/OldValue' */
  }

  /* End of If: '<S637>/If' */

  /* If: '<S633>/If' incorporates:
   *  Constant: '<S530>/Constant'
   *  Inport: '<S639>/In1'
   *  Inport: '<S640>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S633>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S633>/override_enable'
   */
  if ((Coil5_AuxCoil_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S633>/NewValue' incorporates:
     *  ActionPort: '<S639>/Action Port'
     */
    rtb_UnitDelay_o = (Coil5_AuxCoil_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S639>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(294);
    }

    /* End of Outputs for SubSystem: '<S633>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S633>/OldValue' incorporates:
     *  ActionPort: '<S640>/Action Port'
     */
    rtb_UnitDelay_o = 0.0;

    /* S-Function (motohawk_sfun_code_cover): '<S640>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(295);
    }

    /* End of Outputs for SubSystem: '<S633>/OldValue' */
  }

  /* End of If: '<S633>/If' */

  /* DataTypeConversion: '<S530>/Data Type Conversion6' */
  rtb_DataTypeConversion6_c = (rtb_UnitDelay_o != 0.0);

  /* If: '<S638>/If' incorporates:
   *  Constant: '<S530>/Constant2'
   *  Inport: '<S649>/In1'
   *  Inport: '<S650>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S638>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S638>/override_enable'
   */
  if ((Coil4_MaleOrangeConnector_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S638>/NewValue' incorporates:
     *  ActionPort: '<S649>/Action Port'
     */
    rtb_UnitDelay_o = (Coil4_MaleOrangeConnector_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S649>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(304);
    }

    /* End of Outputs for SubSystem: '<S638>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S638>/OldValue' incorporates:
     *  ActionPort: '<S650>/Action Port'
     */
    rtb_UnitDelay_o = 0.0;

    /* S-Function (motohawk_sfun_code_cover): '<S650>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(305);
    }

    /* End of Outputs for SubSystem: '<S638>/OldValue' */
  }

  /* End of If: '<S638>/If' */

  /* DataTypeConversion: '<S530>/Data Type Conversion5' */
  rtb_DataTypeConversion5 = (rtb_UnitDelay_o != 0.0);

  /* S-Function (motohawk_sfun_probe): '<S530>/motohawk_probe11' */
  (InterlockEnable_Probe_DataStore()) = (InterlockEnable_DataStore());

  /* If: '<S634>/If' incorporates:
   *  Inport: '<S641>/In1'
   *  Inport: '<S642>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S530>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S634>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S634>/override_enable'
   */
  if ((InterlockEnable_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S634>/NewValue' incorporates:
     *  ActionPort: '<S641>/Action Port'
     */
    rtb_UnitDelay_o = (InterlockEnable_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S641>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(296);
    }

    /* End of Outputs for SubSystem: '<S634>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S634>/OldValue' incorporates:
     *  ActionPort: '<S642>/Action Port'
     */
    rtb_UnitDelay_o = (InterlockEnable_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S642>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(297);
    }

    /* End of Outputs for SubSystem: '<S634>/OldValue' */
  }

  /* End of If: '<S634>/If' */

  /* DataTypeConversion: '<S530>/Data Type Conversion8' */
  rtb_DataTypeConversion8 = (rtb_UnitDelay_o != 0.0);

  /* If: '<S426>/If' incorporates:
   *  Inport: '<S466>/In1'
   *  Inport: '<S467>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S426>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S426>/override_enable'
   */
  if ((IPT_Motor_Ready_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S426>/NewValue' incorporates:
     *  ActionPort: '<S466>/Action Port'
     */
    rtb_LogicalOperator5 = (IPT_Motor_Ready_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S466>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs17/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(184);
    }

    /* End of Outputs for SubSystem: '<S426>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S426>/OldValue' incorporates:
     *  ActionPort: '<S467>/Action Port'
     */
    rtb_LogicalOperator5 = Mooventure2016_Rev5_B.s194_IPT_MotorReady;

    /* S-Function (motohawk_sfun_code_cover): '<S467>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs17/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(185);
    }

    /* End of Outputs for SubSystem: '<S426>/OldValue' */
  }

  /* End of If: '<S426>/If' */

  /* Stateflow: '<S531>/PowerSteering' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S531>/motohawk_data_read1'
   */

  /* Gateway: Foreground/Outputs/Driver Ouputs/PowerSteering */
  /* During: Foreground/Outputs/Driver Ouputs/PowerSteering */
  if (Mooventure2016_Rev5_DWork.s658_is_active_c28_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/Driver Ouputs/PowerSteering */
    Mooventure2016_Rev5_DWork.s658_is_active_c28_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S658>:10' */
    Mooventure2016_Rev5_DWork.s658_is_c28_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_INIT;
  } else {
    switch (Mooventure2016_Rev5_DWork.s658_is_c28_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_INIT:
      /* During 'INIT': '<S658>:9' */
      if (rtb_LogicalOperator5) {
        /* Transition: '<S658>:42' */
        Mooventure2016_Rev5_DWork.s658_is_c28_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_MotorRunning;
      } else {
        Mooventure2016_Rev5_B.s658_VehicleReadyOutput = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_MotorRunning:
      /* During 'MotorRunning': '<S658>:21' */
      if (!Vehicle_Ready_DataStore()) {
        /* Transition: '<S658>:43' */
        Mooventure2016_Rev5_DWork.s658_is_c28_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_PowerSteeringOn;
      } else {
        Mooventure2016_Rev5_B.s658_VehicleReadyOutput = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_PowerSteeringOff:
      /* During 'PowerSteeringOff': '<S658>:44' */
      Mooventure2016_Rev5_B.s658_VehicleReadyOutput = FALSE;
      break;

     case Mooventure2016_Rev5_IN_PowerSteeringOn:
      /* During 'PowerSteeringOn': '<S658>:39' */
      if (Mooventure2016_Rev5_B.s318_posOut == 2.0) {
        /* Transition: '<S658>:45' */
        Mooventure2016_Rev5_DWork.s658_is_c28_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_PowerSteeringOff;
      } else {
        Mooventure2016_Rev5_B.s658_VehicleReadyOutput = TRUE;
      }
      break;

     default:
      /* Transition: '<S658>:10' */
      Mooventure2016_Rev5_DWork.s658_is_c28_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_INIT;
      break;
    }
  }

  /* End of Stateflow: '<S531>/PowerSteering' */
  /* If: '<S660>/If' incorporates:
   *  Inport: '<S767>/In1'
   *  Inport: '<S768>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S660>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S660>/override_enable'
   */
  if ((Ready_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S660>/NewValue' incorporates:
     *  ActionPort: '<S767>/Action Port'
     */
    rtb_Merge_kn = (Ready_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S767>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(366);
    }

    /* End of Outputs for SubSystem: '<S660>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S660>/OldValue' incorporates:
     *  ActionPort: '<S768>/Action Port'
     */
    rtb_Merge_kn = Mooventure2016_Rev5_B.s658_VehicleReadyOutput;

    /* S-Function (motohawk_sfun_code_cover): '<S768>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(367);
    }

    /* End of Outputs for SubSystem: '<S660>/OldValue' */
  }

  /* End of If: '<S660>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S531>/motohawk_fault_action2'
   *
   * Regarding '<S531>/motohawk_fault_action2':
     Get Fault Action Status: Regen_Brakes_Disabled
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s531_Regen_Brakes_Disabled = GetFaultActionStatus(11);
  }

  /* If: '<S667>/If' incorporates:
   *  Inport: '<S781>/In1'
   *  Inport: '<S782>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S667>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S667>/override_enable'
   */
  if ((Regen_Brakes_Disabled_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S667>/NewValue' incorporates:
     *  ActionPort: '<S781>/Action Port'
     */
    rtb_Merge_pl = (Regen_Brakes_Disabled_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S781>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(380);
    }

    /* End of Outputs for SubSystem: '<S667>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S667>/OldValue' incorporates:
     *  ActionPort: '<S782>/Action Port'
     */
    rtb_Merge_pl = Mooventure2016_Rev5_B.s531_Regen_Brakes_Disabled;

    /* S-Function (motohawk_sfun_code_cover): '<S782>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(381);
    }

    /* End of Outputs for SubSystem: '<S667>/OldValue' */
  }

  /* End of If: '<S667>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S531>/motohawk_fault_action1'
   *
   * Regarding '<S531>/motohawk_fault_action1':
     Get Fault Action Status: HV_Light
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s531_HV_Elec_Sys_Warm = GetFaultActionStatus(9);
  }

  /* If: '<S668>/If' incorporates:
   *  Inport: '<S783>/In1'
   *  Inport: '<S784>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S668>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S668>/override_enable'
   */
  if ((HV_Elec_Sys_Wrn_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S668>/NewValue' incorporates:
     *  ActionPort: '<S783>/Action Port'
     */
    rtb_Merge_e4 = (HV_Elec_Sys_Wrn_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S783>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(382);
    }

    /* End of Outputs for SubSystem: '<S668>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S668>/OldValue' incorporates:
     *  ActionPort: '<S784>/Action Port'
     */
    rtb_Merge_e4 = Mooventure2016_Rev5_B.s531_HV_Elec_Sys_Warm;

    /* S-Function (motohawk_sfun_code_cover): '<S784>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(383);
    }

    /* End of Outputs for SubSystem: '<S668>/OldValue' */
  }

  /* End of If: '<S668>/If' */

  /* If: '<S400>/If' incorporates:
   *  Inport: '<S414>/In1'
   *  Inport: '<S415>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S400>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S400>/override_enable'
   */
  if ((Fault_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S400>/NewValue' incorporates:
     *  ActionPort: '<S414>/Action Port'
     */
    rtb_Merge_bg = (Fault_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S414>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(164);
    }

    /* End of Outputs for SubSystem: '<S400>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S400>/OldValue' incorporates:
     *  ActionPort: '<S415>/Action Port'
     */
    rtb_Merge_bg = Mooventure2016_Rev5_B.s193_ReadCANMessage_o7;

    /* S-Function (motohawk_sfun_code_cover): '<S415>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(165);
    }

    /* End of Outputs for SubSystem: '<S400>/OldValue' */
  }

  /* End of If: '<S400>/If' */

  /* Logic: '<S531>/Logical Operator' incorporates:
   *  Constant: '<S652>/Constant'
   *  Constant: '<S653>/Constant'
   *  RelationalOperator: '<S652>/Compare'
   *  RelationalOperator: '<S653>/Compare'
   *  S-Function (motohawk_sfun_fault_action): '<S531>/motohawk_fault_action'
   */
  Mooventure2016_Rev5_B.s531_Repair_Wrench = ((GetFaultActionStatus(15) ||
    (rtb_Merge_bg == 1.0) || (rtb_Merge_bg == 3.0)));

  /* If: '<S669>/If' incorporates:
   *  Inport: '<S785>/In1'
   *  Inport: '<S786>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S669>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S669>/override_enable'
   */
  if ((Repair_Wrench_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S669>/NewValue' incorporates:
     *  ActionPort: '<S785>/Action Port'
     */
    rtb_Merge_br = (Repair_Wrench_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S785>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(384);
    }

    /* End of Outputs for SubSystem: '<S669>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S669>/OldValue' incorporates:
     *  ActionPort: '<S786>/Action Port'
     */
    rtb_Merge_br = Mooventure2016_Rev5_B.s531_Repair_Wrench;

    /* S-Function (motohawk_sfun_code_cover): '<S786>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(385);
    }

    /* End of Outputs for SubSystem: '<S669>/OldValue' */
  }

  /* End of If: '<S669>/If' */

  /* If: '<S670>/If' incorporates:
   *  Inport: '<S787>/In1'
   *  Inport: '<S788>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S670>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S670>/override_enable'
   */
  if ((Cruise_Ctrl_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S670>/NewValue' incorporates:
     *  ActionPort: '<S787>/Action Port'
     */
    rtb_Merge_gn = (Cruise_Ctrl_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S787>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(386);
    }

    /* End of Outputs for SubSystem: '<S670>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S670>/OldValue' incorporates:
     *  ActionPort: '<S788>/Action Port'
     */
    rtb_Merge_gn = Mooventure2016_Rev5_B.s128_System;

    /* S-Function (motohawk_sfun_code_cover): '<S788>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(387);
    }

    /* End of Outputs for SubSystem: '<S670>/OldValue' */
  }

  /* End of If: '<S670>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S531>/motohawk_fault_action5'
   *
   * Regarding '<S531>/motohawk_fault_action5':
     Get Fault Action Status: Temperature_Solid
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_Eaton_Plugged_In = GetFaultActionStatus(14);
  }

  /* DataTypeConversion: '<S531>/Data Type Conversion' */
  rtb_UnitDelay_o = (real_T)rtb_Eaton_Plugged_In;

  /* S-Function (motohawk_sfun_fault_action): '<S531>/motohawk_fault_action6'
   *
   * Regarding '<S531>/motohawk_fault_action6':
     Get Fault Action Status: Temperature_Flash
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_Eaton_Plugged_In = GetFaultActionStatus(13);
  }

  /* DataTypeConversion: '<S531>/Data Type Conversion1' */
  rtb_UnitDelay_m = (real_T)rtb_Eaton_Plugged_In;

  /* Stateflow: '<S531>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S531>/motohawk_calibration1'
   */

  /* Gateway: Foreground/Outputs/Driver Ouputs/Chart */
  /* During: Foreground/Outputs/Driver Ouputs/Chart */
  if (Mooventure2016_Rev5_DWork.s651_is_active_c22_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/Driver Ouputs/Chart */
    Mooventure2016_Rev5_DWork.s651_is_active_c22_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S651>:2' */
    Mooventure2016_Rev5_DWork.s651_is_c22_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Normal;
  } else {
    switch (Mooventure2016_Rev5_DWork.s651_is_c22_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_FlashOff:
      /* During 'FlashOff': '<S651>:11' */
      if (rtb_UnitDelay_m == 0.0) {
        /* Transition: '<S651>:22' */
        Mooventure2016_Rev5_DWork.s651_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal;
      } else {
        Mooventure2016_Rev5_B.s651_engTemp = 23.0;
        Mooventure2016_Rev5_B.s651_transTemp = 23.0;
      }
      break;

     case Mooventure2016_Rev5_IN_FlashOn:
      /* During 'FlashOn': '<S651>:8' */
      if (rtb_UnitDelay_m == 0.0) {
        /* Transition: '<S651>:10' */
        Mooventure2016_Rev5_DWork.s651_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal;
      } else if (Mooventure2016_Rev5_B.s651_engTemp == 200.0) {
        /* Transition: '<S651>:24' */
        Mooventure2016_Rev5_DWork.s651_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Wait;

        /* Entry 'Wait': '<S651>:23' */
        Mooventure2016_Rev5_DWork.s651_count = 0.0;
      } else {
        Mooventure2016_Rev5_B.s651_engTemp = 200.0;
        Mooventure2016_Rev5_B.s651_transTemp = 200.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Normal:
      /* During 'Normal': '<S651>:1' */
      if (rtb_UnitDelay_o == 1.0) {
        /* Transition: '<S651>:4' */
        Mooventure2016_Rev5_DWork.s651_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Solid;
      } else if (rtb_UnitDelay_m == 1.0) {
        /* Transition: '<S651>:9' */
        Mooventure2016_Rev5_DWork.s651_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_FlashOn;
      } else {
        Mooventure2016_Rev5_B.s651_engTemp = 23.0;
        Mooventure2016_Rev5_B.s651_transTemp = 23.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Solid:
      /* During 'Solid': '<S651>:3' */
      if (rtb_UnitDelay_o == 0.0) {
        /* Transition: '<S651>:6' */
        Mooventure2016_Rev5_DWork.s651_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal;
      } else {
        Mooventure2016_Rev5_B.s651_engTemp = 200.0;
        Mooventure2016_Rev5_B.s651_transTemp = 200.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Wait:
      /* During 'Wait': '<S651>:23' */
      if (Mooventure2016_Rev5_DWork.s651_count >= (Flash_Timer_DataStore())) {
        /* Transition: '<S651>:25' */
        Mooventure2016_Rev5_DWork.s651_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_FlashOff;
      } else {
        Mooventure2016_Rev5_DWork.s651_count =
          Mooventure2016_Rev5_DWork.s651_count + 1.0;
      }
      break;

     default:
      /* Transition: '<S651>:2' */
      Mooventure2016_Rev5_DWork.s651_is_c22_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Normal;
      break;
    }
  }

  /* End of Stateflow: '<S531>/Chart' */
  /* If: '<S671>/If' incorporates:
   *  Inport: '<S789>/In1'
   *  Inport: '<S790>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S671>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S671>/override_enable'
   */
  if ((Eng_Cool_Temp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S671>/NewValue' incorporates:
     *  ActionPort: '<S789>/Action Port'
     */
    rtb_Merge_cu = (Eng_Cool_Temp_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S789>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(388);
    }

    /* End of Outputs for SubSystem: '<S671>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S671>/OldValue' incorporates:
     *  ActionPort: '<S790>/Action Port'
     */
    rtb_Merge_cu = Mooventure2016_Rev5_B.s651_engTemp;

    /* S-Function (motohawk_sfun_code_cover): '<S790>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(389);
    }

    /* End of Outputs for SubSystem: '<S671>/OldValue' */
  }

  /* End of If: '<S671>/If' */

  /* If: '<S672>/If' incorporates:
   *  Inport: '<S791>/In1'
   *  Inport: '<S792>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S672>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S672>/override_enable'
   */
  if ((Me_Cool_Temp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S672>/NewValue' incorporates:
     *  ActionPort: '<S791>/Action Port'
     */
    rtb_Merge_nyh = (Me_Cool_Temp_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S791>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(390);
    }

    /* End of Outputs for SubSystem: '<S672>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S672>/OldValue' incorporates:
     *  ActionPort: '<S792>/Action Port'
     */
    rtb_Merge_nyh = Mooventure2016_Rev5_B.s651_transTemp;

    /* S-Function (motohawk_sfun_code_cover): '<S792>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(391);
    }

    /* End of Outputs for SubSystem: '<S672>/OldValue' */
  }

  /* End of If: '<S672>/If' */

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

  /* Abs: '<S531>/Abs1' */
  Mooventure2016_Rev5_B.s531_Engine_Speed = fabs
    (Mooventure2016_Rev5_B.s444_Merge);

  /* If: '<S673>/If' incorporates:
   *  Inport: '<S793>/In1'
   *  Inport: '<S794>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S673>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S673>/override_enable'
   */
  if ((Engine_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S673>/NewValue' incorporates:
     *  ActionPort: '<S793>/Action Port'
     */
    rtb_Merge_m1 = (Engine_Speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S793>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(392);
    }

    /* End of Outputs for SubSystem: '<S673>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S673>/OldValue' incorporates:
     *  ActionPort: '<S794>/Action Port'
     */
    rtb_Merge_m1 = Mooventure2016_Rev5_B.s531_Engine_Speed;

    /* S-Function (motohawk_sfun_code_cover): '<S794>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(393);
    }

    /* End of Outputs for SubSystem: '<S673>/OldValue' */
  }

  /* End of If: '<S673>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S531>/Send CAN Messages1' */
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

  /* Product: '<S531>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S531>/motohawk_calibration38'
   */
  rtb_UnitDelay_o = rtb_Sum1 * (SOC_Multiplier_DataStore());

  /* Sum: '<S531>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S531>/motohawk_calibration39'
   */
  Mooventure2016_Rev5_B.s531_Current = rtb_UnitDelay_o - (SOC_Subtract_DataStore
    ());

  /* If: '<S674>/If' incorporates:
   *  Inport: '<S795>/In1'
   *  Inport: '<S796>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S674>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S674>/override_enable'
   */
  if ((Current_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S674>/NewValue' incorporates:
     *  ActionPort: '<S795>/Action Port'
     */
    rtb_Merge_kt = (Current_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S795>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(394);
    }

    /* End of Outputs for SubSystem: '<S674>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S674>/OldValue' incorporates:
     *  ActionPort: '<S796>/Action Port'
     */
    rtb_Merge_kt = Mooventure2016_Rev5_B.s531_Current;

    /* S-Function (motohawk_sfun_code_cover): '<S796>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(395);
    }

    /* End of Outputs for SubSystem: '<S674>/OldValue' */
  }

  /* End of If: '<S674>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S531>/Send CAN Messages2' */
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

  /* Product: '<S531>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S531>/motohawk_calibration7'
   */
  rtb_UnitDelay_o = (RPM_to_Wheel_Speed_Multiplier_DataStore()) *
    Mooventure2016_Rev5_B.s444_Merge;

  /* Abs: '<S531>/Abs2' incorporates:
   *  Product: '<S531>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S531>/motohawk_calibration8'
   */
  Mooventure2016_Rev5_B.s531_Vehi_Speed = fabs(rtb_UnitDelay_o *
    (MPH_to_KMH_DataStore()));

  /* If: '<S663>/If' incorporates:
   *  Inport: '<S773>/In1'
   *  Inport: '<S774>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S663>/override_enable'
   */
  if ((Vehicle_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S663>/NewValue' incorporates:
     *  ActionPort: '<S773>/Action Port'
     */
    rtb_Merge_e3 = (Vehicle_Speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S773>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(372);
    }

    /* End of Outputs for SubSystem: '<S663>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S663>/OldValue' incorporates:
     *  ActionPort: '<S774>/Action Port'
     */
    rtb_Merge_e3 = Mooventure2016_Rev5_B.s531_Vehi_Speed;

    /* S-Function (motohawk_sfun_code_cover): '<S774>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(373);
    }

    /* End of Outputs for SubSystem: '<S663>/OldValue' */
  }

  /* End of If: '<S663>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S531>/Send CAN Messages4' */
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

  /* Logic: '<S531>/Logical Operator1' incorporates:
   *  Constant: '<S654>/Constant'
   *  RelationalOperator: '<S654>/Compare'
   *  S-Function (motohawk_sfun_fault_action): '<S531>/motohawk_fault_action3'
   */
  rtb_LogicalOperator5 = ((rtb_Merge_bg >= 2.0) || GetFaultActionStatus(3));

  /* MATLAB Function Block: '<S531>/Embedded MATLAB Function' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S531>/motohawk_fault_action7'
   */

  /* MATLAB Function 'Foreground/Outputs/Driver Ouputs/Embedded MATLAB Function': '<S655>:1' */
  if (GetFaultActionStatus(4) == TRUE) {
    /* '<S655>:1:3' */
    /* '<S655>:1:4' */
    Mooventure2016_Rev5_B.s655_CEL = 2.0;
  } else if (rtb_LogicalOperator5 == TRUE) {
    /* '<S655>:1:5' */
    /* '<S655>:1:6' */
    Mooventure2016_Rev5_B.s655_CEL = 1.0;
  } else {
    /* '<S655>:1:8' */
    Mooventure2016_Rev5_B.s655_CEL = 0.0;
  }

  /* End of MATLAB Function Block: '<S531>/Embedded MATLAB Function' */
  /* If: '<S665>/If' incorporates:
   *  Inport: '<S777>/In1'
   *  Inport: '<S778>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S665>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S665>/override_enable'
   */
  if ((Check_Engine_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S665>/NewValue' incorporates:
     *  ActionPort: '<S777>/Action Port'
     */
    rtb_Merge_ofx = (Check_Engine_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S777>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(376);
    }

    /* End of Outputs for SubSystem: '<S665>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S665>/OldValue' incorporates:
     *  ActionPort: '<S778>/Action Port'
     */
    rtb_Merge_ofx = Mooventure2016_Rev5_B.s655_CEL;

    /* S-Function (motohawk_sfun_code_cover): '<S778>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(377);
    }

    /* End of Outputs for SubSystem: '<S665>/OldValue' */
  }

  /* End of If: '<S665>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S531>/motohawk_fault_action4'
   *
   * Regarding '<S531>/motohawk_fault_action4':
     Get Fault Action Status: Batt_Light
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s531_Battery_Light = GetFaultActionStatus(0);
  }

  /* If: '<S666>/If' incorporates:
   *  Inport: '<S779>/In1'
   *  Inport: '<S780>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S666>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S666>/override_enable'
   */
  if ((Battery_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S666>/NewValue' incorporates:
     *  ActionPort: '<S779>/Action Port'
     */
    rtb_Merge_en = (Battery_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S779>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(378);
    }

    /* End of Outputs for SubSystem: '<S666>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S666>/OldValue' incorporates:
     *  ActionPort: '<S780>/Action Port'
     */
    rtb_Merge_en = Mooventure2016_Rev5_B.s531_Battery_Light;

    /* S-Function (motohawk_sfun_code_cover): '<S780>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(379);
    }

    /* End of Outputs for SubSystem: '<S666>/OldValue' */
  }

  /* End of If: '<S666>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S531>/Send CAN Messages6' */
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

  /* S-Function Block: <S656>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s656_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_kay = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S656>/Switch1' incorporates:
   *  Constant: '<S531>/ 1'
   */
  if (Mooventure2016_Rev5_ConstB.s656_DataTypeConversion) {
    rtb_Switch_c = 0.0;
  } else {
    /* MinMax: '<S675>/MinMax' incorporates:
     *  Constant: '<S531>/   '
     *  Gain: '<S531>/Gain'
     *  Product: '<S656>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S656>/motohawk_delta_time'
     */
    rtb_UnitDelay_m = 0.00027777777777777778 * rtb_UnitDelay_o *
      rtb_motohawk_delta_time_kay;
    rtb_UnitDelay_m = rtb_UnitDelay_m >= 0.0 ? rtb_UnitDelay_m : 0.0;

    /* MinMax: '<S675>/MinMax1' incorporates:
     *  Constant: '<S531>/   '
     *  MinMax: '<S675>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S531>/motohawk_calibration'
     */
    rtb_Switch_c = (rtb_UnitDelay_m <= (Max_Dist_Travel_In_Sec_DataStore())) ||
      rtIsNaN((Max_Dist_Travel_In_Sec_DataStore())) ? rtb_UnitDelay_m :
      (Max_Dist_Travel_In_Sec_DataStore());
  }

  /* End of Switch: '<S656>/Switch1' */
  /* Sum: '<S531>/Add' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S531>/motohawk_data_read2'
   */
  rtb_Add = rtb_Switch_c + Dist_Trv_DataStore();

  /* S-Function (motohawk_sfun_data_write): '<S531>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Dist_Trv */
  {
    Dist_Trv_DataStore() = rtb_Add;
  }

  /* If: '<S661>/If' incorporates:
   *  Inport: '<S769>/In1'
   *  Inport: '<S770>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S531>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S661>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S661>/override_enable'
   */
  if ((BCU_Caution_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S661>/NewValue' incorporates:
     *  ActionPort: '<S769>/Action Port'
     */
    rtb_Merge_iz = (BCU_Caution_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S769>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(368);
    }

    /* End of Outputs for SubSystem: '<S661>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S661>/OldValue' incorporates:
     *  ActionPort: '<S770>/Action Port'
     */
    rtb_Merge_iz = (BCU_Caution_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S770>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(369);
    }

    /* End of Outputs for SubSystem: '<S661>/OldValue' */
  }

  /* End of If: '<S661>/If' */

  /* If: '<S662>/If' incorporates:
   *  Inport: '<S771>/In1'
   *  Inport: '<S772>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S531>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_calibration): '<S662>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S662>/override_enable'
   */
  if ((BCU_Hazard_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S662>/NewValue' incorporates:
     *  ActionPort: '<S771>/Action Port'
     */
    rtb_Merge_gv = (BCU_Hazard_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S771>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(370);
    }

    /* End of Outputs for SubSystem: '<S662>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S662>/OldValue' incorporates:
     *  ActionPort: '<S772>/Action Port'
     */
    rtb_Merge_gv = (BCU_Hazard_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S772>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(371);
    }

    /* End of Outputs for SubSystem: '<S662>/OldValue' */
  }

  /* End of If: '<S662>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S531>/Send CAN Messages3' */
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

  /* S-Function (motohawk_sfun_probe): '<S531>/motohawk_probe10' */
  (BCU_Caution_Prb_DataStore()) = (BCU_Caution_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S531>/motohawk_probe11' */
  (BCU_Hazard_Prb_DataStore()) = (BCU_Hazard_DataStore());

  /* S-Function (motohawk_sfun_data_read): '<S531>/motohawk_data_read5' */
  Mooventure2016_Rev5_B.s531_ODO_Count = ODO_INCRE_DataStore();

  /* If: '<S664>/If' incorporates:
   *  Inport: '<S775>/In1'
   *  Inport: '<S776>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S664>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S664>/override_enable'
   */
  if ((ODO_Count_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S664>/NewValue' incorporates:
     *  ActionPort: '<S775>/Action Port'
     */
    rtb_Merge_mf = (ODO_Count_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S775>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(374);
    }

    /* End of Outputs for SubSystem: '<S664>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S664>/OldValue' incorporates:
     *  ActionPort: '<S776>/Action Port'
     */
    rtb_Merge_mf = Mooventure2016_Rev5_B.s531_ODO_Count;

    /* S-Function (motohawk_sfun_code_cover): '<S776>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(375);
    }

    /* End of Outputs for SubSystem: '<S664>/OldValue' */
  }

  /* End of If: '<S664>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S531>/Send CAN Messages5' */
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

  /* MATLAB Function Block: '<S657>/ODO_CALC' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S657>/motohawk_data_read3'
   *  S-Function (motohawk_sfun_data_read): '<S657>/motohawk_data_read4'
   */

  /* MATLAB Function 'Foreground/Outputs/Driver Ouputs/ODO Calc/ODO_CALC': '<S676>:1' */
  if (Dist_Trv_DataStore() >= 0.016666666) {
    /* '<S676>:1:3' */
    if (ODO_INCRE_DataStore() - 0.0001 <= 0.0) {
      /* '<S676>:1:4' */
      /* '<S676>:1:5' */
      rtb_ODO_out = (0.05 + ODO_INCRE_DataStore()) - 0.0001;

      /* '<S676>:1:6' */
      rtb_reset = 0.0;
    } else {
      /* '<S676>:1:8' */
      rtb_ODO_out = ODO_INCRE_DataStore() - 0.0001;

      /* '<S676>:1:9' */
      rtb_reset = 0.0;
    }
  } else {
    /* '<S676>:1:12' */
    rtb_ODO_out = ODO_INCRE_DataStore();

    /* '<S676>:1:13' */
    rtb_reset = Dist_Trv_DataStore();
  }

  /* End of MATLAB Function Block: '<S657>/ODO_CALC' */

  /* S-Function (motohawk_sfun_data_write): '<S657>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: Dist_Trv */
  {
    Dist_Trv_DataStore() = rtb_reset;
  }

  /* S-Function (motohawk_sfun_data_write): '<S657>/motohawk_data_write3' */
  /* Write to Data Storage as scalar: ODO_INCRE */
  {
    ODO_INCRE_DataStore() = rtb_ODO_out;
  }

  /* If: '<S677>/If' incorporates:
   *  Inport: '<S707>/In1'
   *  Inport: '<S708>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S677>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S677>/override_enable'
   */
  if ((Mode_1_2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S677>/NewValue' incorporates:
     *  ActionPort: '<S707>/Action Port'
     */
    rtb_Merge_c1 = (Mode_1_2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S707>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(306);
    }

    /* End of Outputs for SubSystem: '<S677>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S677>/OldValue' incorporates:
     *  ActionPort: '<S708>/Action Port'
     */
    rtb_Merge_c1 = (Mode_1_2_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S708>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(307);
    }

    /* End of Outputs for SubSystem: '<S677>/OldValue' */
  }

  /* End of If: '<S677>/If' */

  /* If: '<S678>/If' incorporates:
   *  Inport: '<S709>/In1'
   *  Inport: '<S710>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S678>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S678>/override_enable'
   */
  if ((Mode_2_2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S678>/NewValue' incorporates:
     *  ActionPort: '<S709>/Action Port'
     */
    rtb_Merge_hf = (Mode_2_2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S709>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(308);
    }

    /* End of Outputs for SubSystem: '<S678>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S678>/OldValue' incorporates:
     *  ActionPort: '<S710>/Action Port'
     */
    rtb_Merge_hf = (Mode_2_2_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S710>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(309);
    }

    /* End of Outputs for SubSystem: '<S678>/OldValue' */
  }

  /* End of If: '<S678>/If' */

  /* If: '<S689>/If' incorporates:
   *  Inport: '<S731>/In1'
   *  Inport: '<S732>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S689>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S689>/override_enable'
   */
  if ((Mode_3_2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S689>/NewValue' incorporates:
     *  ActionPort: '<S731>/Action Port'
     */
    rtb_Merge_id = (Mode_3_2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S731>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(330);
    }

    /* End of Outputs for SubSystem: '<S689>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S689>/OldValue' incorporates:
     *  ActionPort: '<S732>/Action Port'
     */
    rtb_Merge_id = (Mode_3_2_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S732>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(331);
    }

    /* End of Outputs for SubSystem: '<S689>/OldValue' */
  }

  /* End of If: '<S689>/If' */

  /* If: '<S700>/If' incorporates:
   *  Inport: '<S753>/In1'
   *  Inport: '<S754>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S700>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S700>/override_enable'
   */
  if ((Mode_4_2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S700>/NewValue' incorporates:
     *  ActionPort: '<S753>/Action Port'
     */
    rtb_Merge_ar = (Mode_4_2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S753>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(352);
    }

    /* End of Outputs for SubSystem: '<S700>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S700>/OldValue' incorporates:
     *  ActionPort: '<S754>/Action Port'
     */
    rtb_Merge_ar = (Mode_4_2_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S754>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(353);
    }

    /* End of Outputs for SubSystem: '<S700>/OldValue' */
  }

  /* End of If: '<S700>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S659>/Send CAN Messages1' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (5000.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (4999500U)
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
        if (rtb_Merge_c1 < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_c1 > 255.0000000000F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_c1);
        }

        if (rtb_Merge_hf < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_hf > 255.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_hf);
        }

        if (rtb_Merge_id < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Merge_id > 255.0000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_Merge_id);
        }

        if (rtb_Merge_ar < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_Merge_ar > 255.0000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_Merge_ar);
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

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe1' */
  (Mode_1_2_Prb_DataStore()) = (Mode_1_2_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe2' */
  (Mode_2_2_Prb_DataStore()) = (Mode_2_2_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe3' */
  (Mode_3_2_Prb_DataStore()) = (Mode_3_2_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe4' */
  (Mode_4_2_Prb_DataStore()) = (Mode_4_2_DataStore());

  /* If: '<S685>/If' incorporates:
   *  Inport: '<S723>/In1'
   *  Inport: '<S724>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration18'
   *  S-Function (motohawk_sfun_calibration): '<S685>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S685>/override_enable'
   */
  if ((DATA_MODE_2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S685>/NewValue' incorporates:
     *  ActionPort: '<S723>/Action Port'
     */
    rtb_Merge_pb = (DATA_MODE_2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S723>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(322);
    }

    /* End of Outputs for SubSystem: '<S685>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S685>/OldValue' incorporates:
     *  ActionPort: '<S724>/Action Port'
     */
    rtb_Merge_pb = (DATA_MODE_2_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S724>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(323);
    }

    /* End of Outputs for SubSystem: '<S685>/OldValue' */
  }

  /* End of If: '<S685>/If' */

  /* If: '<S686>/If' incorporates:
   *  Inport: '<S725>/In1'
   *  Inport: '<S726>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration19'
   *  S-Function (motohawk_sfun_calibration): '<S686>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S686>/override_enable'
   */
  if ((VIN_DATA_BYTE_1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S686>/NewValue' incorporates:
     *  ActionPort: '<S725>/Action Port'
     */
    rtb_Merge_ogk = (VIN_DATA_BYTE_1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S725>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(324);
    }

    /* End of Outputs for SubSystem: '<S686>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S686>/OldValue' incorporates:
     *  ActionPort: '<S726>/Action Port'
     */
    rtb_Merge_ogk = (VIN_DATA_BYTE_1_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S726>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(325);
    }

    /* End of Outputs for SubSystem: '<S686>/OldValue' */
  }

  /* End of If: '<S686>/If' */

  /* If: '<S687>/If' incorporates:
   *  Inport: '<S727>/In1'
   *  Inport: '<S728>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration20'
   *  S-Function (motohawk_sfun_calibration): '<S687>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S687>/override_enable'
   */
  if ((VIN_DATA_BYTE_2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S687>/NewValue' incorporates:
     *  ActionPort: '<S727>/Action Port'
     */
    rtb_Merge_d = (VIN_DATA_BYTE_2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S727>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(326);
    }

    /* End of Outputs for SubSystem: '<S687>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S687>/OldValue' incorporates:
     *  ActionPort: '<S728>/Action Port'
     */
    rtb_Merge_d = (VIN_DATA_BYTE_2_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S728>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(327);
    }

    /* End of Outputs for SubSystem: '<S687>/OldValue' */
  }

  /* End of If: '<S687>/If' */

  /* If: '<S688>/If' incorporates:
   *  Inport: '<S729>/In1'
   *  Inport: '<S730>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration21'
   *  S-Function (motohawk_sfun_calibration): '<S688>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S688>/override_enable'
   */
  if ((VIN_DATA_BYTE_3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S688>/NewValue' incorporates:
     *  ActionPort: '<S729>/Action Port'
     */
    rtb_Merge_ho = (VIN_DATA_BYTE_3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S729>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(328);
    }

    /* End of Outputs for SubSystem: '<S688>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S688>/OldValue' incorporates:
     *  ActionPort: '<S730>/Action Port'
     */
    rtb_Merge_ho = (VIN_DATA_BYTE_3_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S730>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(329);
    }

    /* End of Outputs for SubSystem: '<S688>/OldValue' */
  }

  /* End of If: '<S688>/If' */

  /* If: '<S690>/If' incorporates:
   *  Inport: '<S733>/In1'
   *  Inport: '<S734>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration22'
   *  S-Function (motohawk_sfun_calibration): '<S690>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S690>/override_enable'
   */
  if ((VIN_DATA_BYTE_4_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S690>/NewValue' incorporates:
     *  ActionPort: '<S733>/Action Port'
     */
    rtb_Merge_mb = (VIN_DATA_BYTE_4_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S733>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(332);
    }

    /* End of Outputs for SubSystem: '<S690>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S690>/OldValue' incorporates:
     *  ActionPort: '<S734>/Action Port'
     */
    rtb_Merge_mb = (VIN_DATA_BYTE_4_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S734>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(333);
    }

    /* End of Outputs for SubSystem: '<S690>/OldValue' */
  }

  /* End of If: '<S690>/If' */

  /* If: '<S691>/If' incorporates:
   *  Inport: '<S735>/In1'
   *  Inport: '<S736>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration23'
   *  S-Function (motohawk_sfun_calibration): '<S691>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S691>/override_enable'
   */
  if ((VIN_DATA_BYTE_5_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S691>/NewValue' incorporates:
     *  ActionPort: '<S735>/Action Port'
     */
    rtb_Merge_fj = (VIN_DATA_BYTE_5_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S735>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(334);
    }

    /* End of Outputs for SubSystem: '<S691>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S691>/OldValue' incorporates:
     *  ActionPort: '<S736>/Action Port'
     */
    rtb_Merge_fj = (VIN_DATA_BYTE_5_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S736>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(335);
    }

    /* End of Outputs for SubSystem: '<S691>/OldValue' */
  }

  /* End of If: '<S691>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S659>/Send CAN Messages10' */
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

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe26' */
  (DATA_MODE_2_Prb_DataStore()) = (DATA_MODE_2_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe27' */
  (VIN_DATA_BYTE_1_Prb_DataStore()) = (VIN_DATA_BYTE_1_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe28' */
  (VIN_DATA_BYTE_2_Prb_DataStore()) = (VIN_DATA_BYTE_2_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe29' */
  (VIN_DATA_BYTE_3_Prb_DataStore()) = (VIN_DATA_BYTE_3_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe30' */
  (VIN_DATA_BYTE_4_Prb_DataStore()) = (VIN_DATA_BYTE_4_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe31' */
  (VIN_DATA_BYTE_5_Prb_DataStore()) = (VIN_DATA_BYTE_5_DataStore());

  /* If: '<S692>/If' incorporates:
   *  Inport: '<S737>/In1'
   *  Inport: '<S738>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration24'
   *  S-Function (motohawk_sfun_calibration): '<S692>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S692>/override_enable'
   */
  if ((DATA_MODE_3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S692>/NewValue' incorporates:
     *  ActionPort: '<S737>/Action Port'
     */
    rtb_Merge_ah = (DATA_MODE_3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S737>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(336);
    }

    /* End of Outputs for SubSystem: '<S692>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S692>/OldValue' incorporates:
     *  ActionPort: '<S738>/Action Port'
     */
    rtb_Merge_ah = (DATA_MODE_3_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S738>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(337);
    }

    /* End of Outputs for SubSystem: '<S692>/OldValue' */
  }

  /* End of If: '<S692>/If' */

  /* If: '<S693>/If' incorporates:
   *  Inport: '<S739>/In1'
   *  Inport: '<S740>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration25'
   *  S-Function (motohawk_sfun_calibration): '<S693>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S693>/override_enable'
   */
  if ((VIN_DATA_BYTE_6_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S693>/NewValue' incorporates:
     *  ActionPort: '<S739>/Action Port'
     */
    rtb_Merge_koh = (VIN_DATA_BYTE_6_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S739>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(338);
    }

    /* End of Outputs for SubSystem: '<S693>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S693>/OldValue' incorporates:
     *  ActionPort: '<S740>/Action Port'
     */
    rtb_Merge_koh = (VIN_DATA_BYTE_6_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S740>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(339);
    }

    /* End of Outputs for SubSystem: '<S693>/OldValue' */
  }

  /* End of If: '<S693>/If' */

  /* If: '<S694>/If' incorporates:
   *  Inport: '<S741>/In1'
   *  Inport: '<S742>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration26'
   *  S-Function (motohawk_sfun_calibration): '<S694>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S694>/override_enable'
   */
  if ((VIN_DATA_BYTE_7_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S694>/NewValue' incorporates:
     *  ActionPort: '<S741>/Action Port'
     */
    rtb_Merge_pj = (VIN_DATA_BYTE_7_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S741>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(340);
    }

    /* End of Outputs for SubSystem: '<S694>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S694>/OldValue' incorporates:
     *  ActionPort: '<S742>/Action Port'
     */
    rtb_Merge_pj = (VIN_DATA_BYTE_7_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S742>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(341);
    }

    /* End of Outputs for SubSystem: '<S694>/OldValue' */
  }

  /* End of If: '<S694>/If' */

  /* If: '<S695>/If' incorporates:
   *  Inport: '<S743>/In1'
   *  Inport: '<S744>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration27'
   *  S-Function (motohawk_sfun_calibration): '<S695>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S695>/override_enable'
   */
  if ((VIN_DATA_BYTE_8_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S695>/NewValue' incorporates:
     *  ActionPort: '<S743>/Action Port'
     */
    rtb_Merge_cd = (VIN_DATA_BYTE_8_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S743>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(342);
    }

    /* End of Outputs for SubSystem: '<S695>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S695>/OldValue' incorporates:
     *  ActionPort: '<S744>/Action Port'
     */
    rtb_Merge_cd = (VIN_DATA_BYTE_8_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S744>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(343);
    }

    /* End of Outputs for SubSystem: '<S695>/OldValue' */
  }

  /* End of If: '<S695>/If' */

  /* If: '<S696>/If' incorporates:
   *  Inport: '<S745>/In1'
   *  Inport: '<S746>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration28'
   *  S-Function (motohawk_sfun_calibration): '<S696>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S696>/override_enable'
   */
  if ((VIN_DATA_BYTE_9_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S696>/NewValue' incorporates:
     *  ActionPort: '<S745>/Action Port'
     */
    rtb_Merge_ca = (VIN_DATA_BYTE_9_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S745>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(344);
    }

    /* End of Outputs for SubSystem: '<S696>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S696>/OldValue' incorporates:
     *  ActionPort: '<S746>/Action Port'
     */
    rtb_Merge_ca = (VIN_DATA_BYTE_9_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S746>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(345);
    }

    /* End of Outputs for SubSystem: '<S696>/OldValue' */
  }

  /* End of If: '<S696>/If' */

  /* If: '<S697>/If' incorporates:
   *  Inport: '<S747>/In1'
   *  Inport: '<S748>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration29'
   *  S-Function (motohawk_sfun_calibration): '<S697>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S697>/override_enable'
   */
  if ((VIN_DATA_BYTE_10_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S697>/NewValue' incorporates:
     *  ActionPort: '<S747>/Action Port'
     */
    rtb_Merge_mw = (VIN_DATA_BYTE_10_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S747>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(346);
    }

    /* End of Outputs for SubSystem: '<S697>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S697>/OldValue' incorporates:
     *  ActionPort: '<S748>/Action Port'
     */
    rtb_Merge_mw = (VIN_DATA_BYTE_10_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S748>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(347);
    }

    /* End of Outputs for SubSystem: '<S697>/OldValue' */
  }

  /* End of If: '<S697>/If' */

  /* If: '<S698>/If' incorporates:
   *  Inport: '<S749>/In1'
   *  Inport: '<S750>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration30'
   *  S-Function (motohawk_sfun_calibration): '<S698>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S698>/override_enable'
   */
  if ((VIN_DATA_BYTE_11_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S698>/NewValue' incorporates:
     *  ActionPort: '<S749>/Action Port'
     */
    rtb_Merge_bm = (VIN_DATA_BYTE_11_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S749>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(348);
    }

    /* End of Outputs for SubSystem: '<S698>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S698>/OldValue' incorporates:
     *  ActionPort: '<S750>/Action Port'
     */
    rtb_Merge_bm = (VIN_DATA_BYTE_11_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S750>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(349);
    }

    /* End of Outputs for SubSystem: '<S698>/OldValue' */
  }

  /* End of If: '<S698>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S659>/Send CAN Messages11' */
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

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe32' */
  (DATA_MODE_3_Prb_DataStore()) = (DATA_MODE_3_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe33' */
  (VIN_DATA_BYTE_6_Prb_DataStore()) = (VIN_DATA_BYTE_6_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe34' */
  (VIN_DATA_BYTE_7_Prb_DataStore()) = (VIN_DATA_BYTE_7_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe35' */
  (VIN_DATA_BYTE_8_Prb_DataStore()) = (VIN_DATA_BYTE_8_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe36' */
  (VIN_DATA_BYTE_9_Prb_DataStore()) = (VIN_DATA_BYTE_9_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe37' */
  (VIN_DATA_BYTE_10_Prb_DataStore()) = (VIN_DATA_BYTE_10_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe38' */
  (VIN_DATA_BYTE_11_Prb_DataStore()) = (VIN_DATA_BYTE_11_DataStore());

  /* If: '<S699>/If' incorporates:
   *  Inport: '<S751>/In1'
   *  Inport: '<S752>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration31'
   *  S-Function (motohawk_sfun_calibration): '<S699>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S699>/override_enable'
   */
  if ((DATA_MODE_4_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S699>/NewValue' incorporates:
     *  ActionPort: '<S751>/Action Port'
     */
    rtb_Merge_dh = (DATA_MODE_4_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S751>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(350);
    }

    /* End of Outputs for SubSystem: '<S699>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S699>/OldValue' incorporates:
     *  ActionPort: '<S752>/Action Port'
     */
    rtb_Merge_dh = (DATA_MODE_4_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S752>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(351);
    }

    /* End of Outputs for SubSystem: '<S699>/OldValue' */
  }

  /* End of If: '<S699>/If' */

  /* If: '<S701>/If' incorporates:
   *  Inport: '<S755>/In1'
   *  Inport: '<S756>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration32'
   *  S-Function (motohawk_sfun_calibration): '<S701>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S701>/override_enable'
   */
  if ((VIN_DATA_BYTE_12_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S701>/NewValue' incorporates:
     *  ActionPort: '<S755>/Action Port'
     */
    rtb_Merge_jb = (VIN_DATA_BYTE_12_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S755>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(354);
    }

    /* End of Outputs for SubSystem: '<S701>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S701>/OldValue' incorporates:
     *  ActionPort: '<S756>/Action Port'
     */
    rtb_Merge_jb = (VIN_DATA_BYTE_12_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S756>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(355);
    }

    /* End of Outputs for SubSystem: '<S701>/OldValue' */
  }

  /* End of If: '<S701>/If' */

  /* If: '<S702>/If' incorporates:
   *  Inport: '<S757>/In1'
   *  Inport: '<S758>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration33'
   *  S-Function (motohawk_sfun_calibration): '<S702>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S702>/override_enable'
   */
  if ((VIN_DATA_BYTE_13_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S702>/NewValue' incorporates:
     *  ActionPort: '<S757>/Action Port'
     */
    rtb_Merge_izg = (VIN_DATA_BYTE_13_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S757>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(356);
    }

    /* End of Outputs for SubSystem: '<S702>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S702>/OldValue' incorporates:
     *  ActionPort: '<S758>/Action Port'
     */
    rtb_Merge_izg = (VIN_DATA_BYTE_13_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S758>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(357);
    }

    /* End of Outputs for SubSystem: '<S702>/OldValue' */
  }

  /* End of If: '<S702>/If' */

  /* If: '<S703>/If' incorporates:
   *  Inport: '<S759>/In1'
   *  Inport: '<S760>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration34'
   *  S-Function (motohawk_sfun_calibration): '<S703>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S703>/override_enable'
   */
  if ((VIN_DATA_BYTE_14_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S703>/NewValue' incorporates:
     *  ActionPort: '<S759>/Action Port'
     */
    rtb_Merge_dv = (VIN_DATA_BYTE_14_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S759>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(358);
    }

    /* End of Outputs for SubSystem: '<S703>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S703>/OldValue' incorporates:
     *  ActionPort: '<S760>/Action Port'
     */
    rtb_Merge_dv = (VIN_DATA_BYTE_14_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S760>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(359);
    }

    /* End of Outputs for SubSystem: '<S703>/OldValue' */
  }

  /* End of If: '<S703>/If' */

  /* If: '<S704>/If' incorporates:
   *  Inport: '<S761>/In1'
   *  Inport: '<S762>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration35'
   *  S-Function (motohawk_sfun_calibration): '<S704>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S704>/override_enable'
   */
  if ((VIN_DATA_BYTE_15_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S704>/NewValue' incorporates:
     *  ActionPort: '<S761>/Action Port'
     */
    rtb_Merge_hod = (VIN_DATA_BYTE_15_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S761>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(360);
    }

    /* End of Outputs for SubSystem: '<S704>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S704>/OldValue' incorporates:
     *  ActionPort: '<S762>/Action Port'
     */
    rtb_Merge_hod = (VIN_DATA_BYTE_15_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S762>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(361);
    }

    /* End of Outputs for SubSystem: '<S704>/OldValue' */
  }

  /* End of If: '<S704>/If' */

  /* If: '<S705>/If' incorporates:
   *  Inport: '<S763>/In1'
   *  Inport: '<S764>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration36'
   *  S-Function (motohawk_sfun_calibration): '<S705>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S705>/override_enable'
   */
  if ((VIN_DATA_BYTE_16_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S705>/NewValue' incorporates:
     *  ActionPort: '<S763>/Action Port'
     */
    rtb_Merge_ov = (VIN_DATA_BYTE_16_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S763>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(362);
    }

    /* End of Outputs for SubSystem: '<S705>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S705>/OldValue' incorporates:
     *  ActionPort: '<S764>/Action Port'
     */
    rtb_Merge_ov = (VIN_DATA_BYTE_16_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S764>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(363);
    }

    /* End of Outputs for SubSystem: '<S705>/OldValue' */
  }

  /* End of If: '<S705>/If' */

  /* If: '<S706>/If' incorporates:
   *  Inport: '<S765>/In1'
   *  Inport: '<S766>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration37'
   *  S-Function (motohawk_sfun_calibration): '<S706>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S706>/override_enable'
   */
  if ((VIN_DATA_BYTE_17_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S706>/NewValue' incorporates:
     *  ActionPort: '<S765>/Action Port'
     */
    rtb_Merge_k2 = (VIN_DATA_BYTE_17_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S765>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(364);
    }

    /* End of Outputs for SubSystem: '<S706>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S706>/OldValue' incorporates:
     *  ActionPort: '<S766>/Action Port'
     */
    rtb_Merge_k2 = (VIN_DATA_BYTE_17_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S766>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(365);
    }

    /* End of Outputs for SubSystem: '<S706>/OldValue' */
  }

  /* End of If: '<S706>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S659>/Send CAN Messages12' */
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

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe39' */
  (DATA_MODE_4_Ovr_DataStore()) = (DATA_MODE_4_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe40' */
  (VIN_DATA_BYTE_12_Prb_DataStore()) = (VIN_DATA_BYTE_12_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe41' */
  (VIN_DATA_BYTE_13_Prb_DataStore()) = (VIN_DATA_BYTE_13_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe42' */
  (VIN_DATA_BYTE_14_Prb_DataStore()) = (VIN_DATA_BYTE_14_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe43' */
  (VIN_DATA_BYTE_15_Prb_DataStore()) = (VIN_DATA_BYTE_15_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe44' */
  (VIN_DATA_BYte_16_Prb_DataStore()) = (VIN_DATA_BYTE_16_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe45' */
  (VIN_DATA_BYTE_17_Prb_DataStore()) = (VIN_DATA_BYTE_17_DataStore());

  /* If: '<S679>/If' incorporates:
   *  Inport: '<S711>/In1'
   *  Inport: '<S712>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S679>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S679>/override_enable'
   */
  if ((Mode_1_1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S679>/NewValue' incorporates:
     *  ActionPort: '<S711>/Action Port'
     */
    rtb_Merge_md = (Mode_1_1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S711>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(310);
    }

    /* End of Outputs for SubSystem: '<S679>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S679>/OldValue' incorporates:
     *  ActionPort: '<S712>/Action Port'
     */
    rtb_Merge_md = (Mode_1_1_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S712>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(311);
    }

    /* End of Outputs for SubSystem: '<S679>/OldValue' */
  }

  /* End of If: '<S679>/If' */

  /* If: '<S680>/If' incorporates:
   *  Inport: '<S713>/In1'
   *  Inport: '<S714>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S680>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S680>/override_enable'
   */
  if ((Mode_2_1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S680>/NewValue' incorporates:
     *  ActionPort: '<S713>/Action Port'
     */
    rtb_Merge_gp = (Mode_2_1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S713>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(312);
    }

    /* End of Outputs for SubSystem: '<S680>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S680>/OldValue' incorporates:
     *  ActionPort: '<S714>/Action Port'
     */
    rtb_Merge_gp = (Mode_2_1_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S714>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(313);
    }

    /* End of Outputs for SubSystem: '<S680>/OldValue' */
  }

  /* End of If: '<S680>/If' */

  /* If: '<S681>/If' incorporates:
   *  Inport: '<S715>/In1'
   *  Inport: '<S716>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S681>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S681>/override_enable'
   */
  if ((Mode_3_3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S681>/NewValue' incorporates:
     *  ActionPort: '<S715>/Action Port'
     */
    rtb_Merge_mt = (Mode_3_3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S715>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(314);
    }

    /* End of Outputs for SubSystem: '<S681>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S681>/OldValue' incorporates:
     *  ActionPort: '<S716>/Action Port'
     */
    rtb_Merge_mt = (Mode_3_1_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S716>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(315);
    }

    /* End of Outputs for SubSystem: '<S681>/OldValue' */
  }

  /* End of If: '<S681>/If' */

  /* If: '<S682>/If' incorporates:
   *  Inport: '<S717>/In1'
   *  Inport: '<S718>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S682>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S682>/override_enable'
   */
  if ((Mode_4_4_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S682>/NewValue' incorporates:
     *  ActionPort: '<S717>/Action Port'
     */
    rtb_Merge_kq = (Mode_4_4_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S717>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(316);
    }

    /* End of Outputs for SubSystem: '<S682>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S682>/OldValue' incorporates:
     *  ActionPort: '<S718>/Action Port'
     */
    rtb_Merge_kq = (Mode_4_1_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S718>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(317);
    }

    /* End of Outputs for SubSystem: '<S682>/OldValue' */
  }

  /* End of If: '<S682>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S659>/Send CAN Messages8' */
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

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe20' */
  (Mode_1_1_Prb_DataStore()) = (Mode_1_1_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe21' */
  (Mode_2_1_Prb_DataStore()) = (Mode_2_1_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe22' */
  (Mode_3_3_Prb_DataStore()) = (Mode_3_1_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe23' */
  (Mode_4_4_Prb_DataStore()) = (Mode_4_1_DataStore());

  /* If: '<S683>/If' incorporates:
   *  Inport: '<S719>/In1'
   *  Inport: '<S720>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration16'
   *  S-Function (motohawk_sfun_calibration): '<S683>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S683>/override_enable'
   */
  if ((DATA_MODE_1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S683>/NewValue' incorporates:
     *  ActionPort: '<S719>/Action Port'
     */
    rtb_Merge_jo = (DATA_MODE_1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S719>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(318);
    }

    /* End of Outputs for SubSystem: '<S683>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S683>/OldValue' incorporates:
     *  ActionPort: '<S720>/Action Port'
     */
    rtb_Merge_jo = (Data_Mode_1_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S720>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(319);
    }

    /* End of Outputs for SubSystem: '<S683>/OldValue' */
  }

  /* End of If: '<S683>/If' */

  /* If: '<S684>/If' incorporates:
   *  Inport: '<S721>/In1'
   *  Inport: '<S722>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration17'
   *  S-Function (motohawk_sfun_calibration): '<S684>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S684>/override_enable'
   */
  if ((VEH_ID_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S684>/NewValue' incorporates:
     *  ActionPort: '<S721>/Action Port'
     */
    rtb_Merge_kz = (VEH_ID_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S721>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(320);
    }

    /* End of Outputs for SubSystem: '<S684>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S684>/OldValue' incorporates:
     *  ActionPort: '<S722>/Action Port'
     */
    rtb_Merge_kz = (VEH_ID_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S722>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(321);
    }

    /* End of Outputs for SubSystem: '<S684>/OldValue' */
  }

  /* End of If: '<S684>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S659>/Send CAN Messages9' */
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

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe24' */
  (DATA_MODE_1_Prb_DataStore()) = (Data_Mode_1_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S659>/motohawk_probe25' */
  (VEH_ID_Prb_DataStore()) = (VEH_ID_DataStore());

  /* If: '<S798>/If' incorporates:
   *  Inport: '<S803>/In1'
   *  Inport: '<S804>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S189>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S798>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S798>/override_enable'
   */
  if ((Current_Limit_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S798>/NewValue' incorporates:
     *  ActionPort: '<S803>/Action Port'
     */
    rtb_Merge_m4 = (Current_Limit_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S803>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(396);
    }

    /* End of Outputs for SubSystem: '<S798>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S798>/OldValue' incorporates:
     *  ActionPort: '<S804>/Action Port'
     */
    rtb_Merge_m4 = (MaxAmpCal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S804>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(397);
    }

    /* End of Outputs for SubSystem: '<S798>/OldValue' */
  }

  /* End of If: '<S798>/If' */

  /* If: '<S799>/If' incorporates:
   *  Inport: '<S805>/In1'
   *  Inport: '<S806>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S189>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S799>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S799>/override_enable'
   */
  if ((Voltage_Limit_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S799>/NewValue' incorporates:
     *  ActionPort: '<S805>/Action Port'
     */
    rtb_Merge_aq = (Voltage_Limit_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S805>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(398);
    }

    /* End of Outputs for SubSystem: '<S799>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S799>/OldValue' incorporates:
     *  ActionPort: '<S806>/Action Port'
     */
    rtb_Merge_aq = (MaxVoltageCal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S806>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(399);
    }

    /* End of Outputs for SubSystem: '<S799>/OldValue' */
  }

  /* End of If: '<S799>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S532>/motohawk_fault_action'
   *
   * Regarding '<S532>/motohawk_fault_action':
     Get Fault Action Status: EatonChargerFault
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s532_ChargeSystemFault = GetFaultActionStatus(8);
  }

  /* If: '<S800>/If' incorporates:
   *  Inport: '<S807>/In1'
   *  Inport: '<S808>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S800>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S800>/override_enable'
   */
  if ((Charge_Falt_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S800>/NewValue' incorporates:
     *  ActionPort: '<S807>/Action Port'
     */
    rtb_Merge_opu = (Charge_Falt_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S807>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(400);
    }

    /* End of Outputs for SubSystem: '<S800>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S800>/OldValue' incorporates:
     *  ActionPort: '<S808>/Action Port'
     */
    rtb_Merge_opu = Mooventure2016_Rev5_B.s532_ChargeSystemFault;

    /* S-Function (motohawk_sfun_code_cover): '<S808>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(401);
    }

    /* End of Outputs for SubSystem: '<S800>/OldValue' */
  }

  /* End of If: '<S800>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S187>/Read CAN Message5' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3232p0005_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3232p0005_Receive(0, &msg_id, 0, msg_data);
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
      Mooventure2016_Rev5_B.s187_TripAmpHoursIn = ((real_T) tmp0) / ((real_T)
        100);
      Mooventure2016_Rev5_B.s187_TripAmpHoursOut = ((real_T) tmp1) / ((real_T)
        100);
      Mooventure2016_Rev5_B.s187_StateOfChargeMax = ((real_T) tmp2) / ((real_T)
        2);
      Mooventure2016_Rev5_B.s187_StateOfChargeMin = ((real_T) tmp3) / ((real_T)
        2);
      Mooventure2016_Rev5_B.s187_TAH_RollingCounter = (real_T) tmp4;
    }
  }

  /* RelationalOperator: '<S532>/Relational Operator' */
  rtb_Eaton_Plugged_In = (rtb_Sum1 <=
    Mooventure2016_Rev5_B.s187_StateOfChargeMax);

  /* Logic: '<S532>/Logical Operator2' */
  Mooventure2016_Rev5_B.s532_ChargeComplete = !rtb_Eaton_Plugged_In;

  /* If: '<S801>/If' incorporates:
   *  Inport: '<S809>/In1'
   *  Inport: '<S810>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S801>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S801>/override_enable'
   */
  if ((Charge_Complete_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S801>/NewValue' incorporates:
     *  ActionPort: '<S809>/Action Port'
     */
    rtb_Merge_oz = (Charge_Complete_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S809>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(402);
    }

    /* End of Outputs for SubSystem: '<S801>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S801>/OldValue' incorporates:
     *  ActionPort: '<S810>/Action Port'
     */
    rtb_Merge_oz = Mooventure2016_Rev5_B.s532_ChargeComplete;

    /* S-Function (motohawk_sfun_code_cover): '<S810>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(403);
    }

    /* End of Outputs for SubSystem: '<S801>/OldValue' */
  }

  /* End of If: '<S801>/If' */

  /* If: '<S367>/If' incorporates:
   *  Inport: '<S388>/In1'
   *  Inport: '<S389>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S367>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S367>/override_enable'
   */
  if ((Input_Current_Limit_Max_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S367>/NewValue' incorporates:
     *  ActionPort: '<S388>/Action Port'
     */
    rtb_Merge_lf = (Input_Current_Limit_Max_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S388>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(146);
    }

    /* End of Outputs for SubSystem: '<S367>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S367>/OldValue' incorporates:
     *  ActionPort: '<S389>/Action Port'
     */
    rtb_Merge_lf = Mooventure2016_Rev5_B.s192_InputCurrentLimitMax;

    /* S-Function (motohawk_sfun_code_cover): '<S389>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(147);
    }

    /* End of Outputs for SubSystem: '<S367>/OldValue' */
  }

  /* End of If: '<S367>/If' */

  /* If: '<S368>/If' incorporates:
   *  Inport: '<S390>/In1'
   *  Inport: '<S391>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S368>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S368>/override_enable'
   */
  if ((Input_Current_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S368>/NewValue' incorporates:
     *  ActionPort: '<S390>/Action Port'
     */
    rtb_Merge_hn = (Input_Current_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S390>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(148);
    }

    /* End of Outputs for SubSystem: '<S368>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S368>/OldValue' incorporates:
     *  ActionPort: '<S391>/Action Port'
     */
    rtb_Merge_hn = Mooventure2016_Rev5_B.s192_InputCurrent;

    /* S-Function (motohawk_sfun_code_cover): '<S391>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(149);
    }

    /* End of Outputs for SubSystem: '<S368>/OldValue' */
  }

  /* End of If: '<S368>/If' */

  /* Logic: '<S532>/Logical Operator1' incorporates:
   *  Constant: '<S797>/Constant'
   *  Logic: '<S532>/Logical Operator3'
   *  RelationalOperator: '<S532>/Relational Operator1'
   *  RelationalOperator: '<S797>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S532>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_data_read): '<S532>/motohawk_data_read'
   *  S-Function (motohawk_sfun_fault_action): '<S532>/motohawk_fault_action1'
   */
  Mooventure2016_Rev5_B.s532_ChargeEnable = (((rtb_Merge_b0 >= 1.0) &&
    rtb_Eaton_Plugged_In && (rtb_Merge_hn < rtb_Merge_lf) &&
    ((Charger_Auto_Start_DataStore()) != 0.0) && Vehicle_Ready_DataStore() &&
    (!GetFaultActionStatus(2))));

  /* If: '<S802>/If' incorporates:
   *  Inport: '<S811>/In1'
   *  Inport: '<S812>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S802>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S802>/override_enable'
   */
  if ((Charge_Enable_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S802>/NewValue' incorporates:
     *  ActionPort: '<S811>/Action Port'
     */
    rtb_Merge_ib = (Charge_Enable_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S811>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(404);
    }

    /* End of Outputs for SubSystem: '<S802>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S802>/OldValue' incorporates:
     *  ActionPort: '<S812>/Action Port'
     */
    rtb_Merge_ib = Mooventure2016_Rev5_B.s532_ChargeEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S812>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(405);
    }

    /* End of Outputs for SubSystem: '<S802>/OldValue' */
  }

  /* End of If: '<S802>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S532>/Send CAN Messages' */
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

  /* S-Function (motohawk_sfun_data_write): '<S532>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ChargeEnable */
  {
    ChargeEnable_DataStore() = Mooventure2016_Rev5_B.s532_ChargeEnable;
  }

  /* RelationalOperator: '<S532>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S532>/motohawk_calibration1'
   */
  rtb_RelationalOperator2_l = ((Mooventure2016_Rev5_B.s187_MaxCellVoltage >=
    (Max_Cell_Voltage_Limit_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S532>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Charge_Complete_Cell_Max_Volt */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(19, rtb_RelationalOperator2_l);
    UpdateFault(19);
  }

  /* S-Function (motohawk_sfun_probe): '<S532>/motohawk_probe1' */
  (Current_Limit_Probe_DataStore()) = (MaxAmpCal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S532>/motohawk_probe2' */
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
  rtb_Switch_e = Mooventure2016_Rev5_B.s444_Merge *
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

  /* If: '<S398>/If' incorporates:
   *  Inport: '<S410>/In1'
   *  Inport: '<S411>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S398>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S398>/override_enable'
   */
  if ((Engine_On_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S398>/NewValue' incorporates:
     *  ActionPort: '<S410>/Action Port'
     */
    rtb_UnitDelay_o = (Engine_On_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S410>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(160);
    }

    /* End of Outputs for SubSystem: '<S398>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S398>/OldValue' incorporates:
     *  ActionPort: '<S411>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s193_ReadCANMessage_o5;

    /* S-Function (motohawk_sfun_code_cover): '<S411>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(161);
    }

    /* End of Outputs for SubSystem: '<S398>/OldValue' */
  }

  /* End of If: '<S398>/If' */

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

  /* If: '<S395>/If' incorporates:
   *  Inport: '<S404>/In1'
   *  Inport: '<S405>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S395>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S395>/override_enable'
   */
  if ((RPM_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S395>/NewValue' incorporates:
     *  ActionPort: '<S404>/Action Port'
     */
    rtb_UnitDelay_m = (RPM_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S404>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(154);
    }

    /* End of Outputs for SubSystem: '<S395>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S395>/OldValue' incorporates:
     *  ActionPort: '<S405>/Action Port'
     */
    rtb_UnitDelay_m = Mooventure2016_Rev5_B.s193_ReadCANMessage_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S405>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(155);
    }

    /* End of Outputs for SubSystem: '<S395>/OldValue' */
  }

  /* End of If: '<S395>/If' */

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
          if (Mooventure2016_Rev5_B.s396_Merge > (Coolant_Cold_DataStore())) {
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
          if (Mooventure2016_Rev5_B.s396_Merge > (Coolant_Warm_DataStore())) {
            /* Transition: '<S58>:46' */
            Mooventure2016_Rev5_DWork.s58_is_Running =
              Mooventure2016_Rev5_IN_medium_gen;
          } else if ((Mooventure2016_Rev5_B.s396_Merge < (Coolant_Cold_DataStore
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
          if ((Mooventure2016_Rev5_B.s396_Merge > (Coolant_Hot_DataStore())) &&
              (rtb_Merge_cq != 0.0)) {
            /* Transition: '<S58>:47' */
            Mooventure2016_Rev5_DWork.s58_is_Running =
              Mooventure2016_Rev5_IN_high_gen;
          } else if (Mooventure2016_Rev5_B.s396_Merge < (Coolant_Warm_DataStore())
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

  /* If: '<S813>/If' incorporates:
   *  Inport: '<S818>/In1'
   *  Inport: '<S819>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S813>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S813>/override_enable'
   */
  if ((Gen_Load_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S813>/NewValue' incorporates:
     *  ActionPort: '<S818>/Action Port'
     */
    rtb_Merge_ogr = (Gen_Load_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S818>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(406);
    }

    /* End of Outputs for SubSystem: '<S813>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S813>/OldValue' incorporates:
     *  ActionPort: '<S819>/Action Port'
     */
    rtb_Merge_ogr = Mooventure2016_Rev5_B.s62_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S819>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(407);
    }

    /* End of Outputs for SubSystem: '<S813>/OldValue' */
  }

  /* End of If: '<S813>/If' */

  /* If: '<S260>/If' incorporates:
   *  Inport: '<S272>/In1'
   *  Inport: '<S273>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S260>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S260>/override_enable'
   */
  if ((Pack_State_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S260>/NewValue' incorporates:
     *  ActionPort: '<S272>/Action Port'
     */
    Mooventure2016_Rev5_B.s260_Merge = (Pack_State_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S272>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(82);
    }

    /* End of Outputs for SubSystem: '<S260>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S260>/OldValue' incorporates:
     *  ActionPort: '<S273>/Action Port'
     */
    Mooventure2016_Rev5_B.s260_Merge = Mooventure2016_Rev5_B.s187_PackState;

    /* S-Function (motohawk_sfun_code_cover): '<S273>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(83);
    }

    /* End of Outputs for SubSystem: '<S260>/OldValue' */
  }

  /* End of If: '<S260>/If' */

  /* RelationalOperator: '<S533>/Relational Operator' incorporates:
   *  Constant: '<S533>/Constant'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s260_Merge == 4.0);

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

  /* Logic: '<S533>/Logical Operator' */
  Mooventure2016_Rev5_B.s533_Gen_Enable = (((rtb_UnitDelay_o != 0.0) &&
    rtb_LogicalOperator5));

  /* If: '<S814>/If' incorporates:
   *  Inport: '<S820>/In1'
   *  Inport: '<S821>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S814>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S814>/override_enable'
   */
  if ((Gen_Enable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S814>/NewValue' incorporates:
     *  ActionPort: '<S820>/Action Port'
     */
    rtb_Merge_ik = (Gen_Enable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S820>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(408);
    }

    /* End of Outputs for SubSystem: '<S814>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S814>/OldValue' incorporates:
     *  ActionPort: '<S821>/Action Port'
     */
    rtb_Merge_ik = Mooventure2016_Rev5_B.s533_Gen_Enable;

    /* S-Function (motohawk_sfun_code_cover): '<S821>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(409);
    }

    /* End of Outputs for SubSystem: '<S814>/OldValue' */
  }

  /* End of If: '<S814>/If' */

  /* Abs: '<S533>/Abs' */
  rtb_DataTypeConversion4 = fabs(Mooventure2016_Rev5_B.s444_Merge);

  /* Product: '<S533>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S533>/motohawk_calibration7'
   */
  Mooventure2016_Rev5_B.s533_Vehicle_Speed = rtb_DataTypeConversion4 *
    (RPM_to_Wheel_Speed_Multiplier3_DataStore());

  /* If: '<S815>/If' incorporates:
   *  Inport: '<S822>/In1'
   *  Inport: '<S823>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S815>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S815>/override_enable'
   */
  if ((Vehicle_Speed2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S815>/NewValue' incorporates:
     *  ActionPort: '<S822>/Action Port'
     */
    rtb_Merge_ou = (Vehicle_Speed2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S822>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(410);
    }

    /* End of Outputs for SubSystem: '<S815>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S815>/OldValue' incorporates:
     *  ActionPort: '<S823>/Action Port'
     */
    rtb_Merge_ou = Mooventure2016_Rev5_B.s533_Vehicle_Speed;

    /* S-Function (motohawk_sfun_code_cover): '<S823>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(411);
    }

    /* End of Outputs for SubSystem: '<S815>/OldValue' */
  }

  /* End of If: '<S815>/If' */

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

  /* If: '<S816>/If' incorporates:
   *  Inport: '<S824>/In1'
   *  Inport: '<S825>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S816>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S816>/override_enable'
   */
  if ((Load_Throttle_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S816>/NewValue' incorporates:
     *  ActionPort: '<S824>/Action Port'
     */
    rtb_Merge_ai = (Load_Throttle_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S824>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(412);
    }

    /* End of Outputs for SubSystem: '<S816>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S816>/OldValue' incorporates:
     *  ActionPort: '<S825>/Action Port'
     */
    rtb_Merge_ai = Mooventure2016_Rev5_B.s65_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S825>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(413);
    }

    /* End of Outputs for SubSystem: '<S816>/OldValue' */
  }

  /* End of If: '<S816>/If' */

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

  /* If: '<S817>/If' incorporates:
   *  Inport: '<S826>/In1'
   *  Inport: '<S827>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S817>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S817>/override_enable'
   */
  if ((Load_RPM_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S817>/NewValue' incorporates:
     *  ActionPort: '<S826>/Action Port'
     */
    rtb_Merge_fw = (Load_RPM_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S826>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(414);
    }

    /* End of Outputs for SubSystem: '<S817>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S817>/OldValue' incorporates:
     *  ActionPort: '<S827>/Action Port'
     */
    rtb_Merge_fw = Mooventure2016_Rev5_B.s64_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S827>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(415);
    }

    /* End of Outputs for SubSystem: '<S817>/OldValue' */
  }

  /* End of If: '<S817>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S533>/Send CAN Messages' */
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

  /* S-Function (motohawk_sfun_data_read): '<S534>/motohawk_data_read2' */
  rtb_Eaton_Plugged_In = Torque_Enable_DataStore();

  /* Product: '<S534>/Product' */
  Mooventure2016_Rev5_B.s534_VSC_WheelTorqueRequest =
    Mooventure2016_Rev5_B.s119_MultiportSwitch * (real_T)rtb_Eaton_Plugged_In;

  /* If: '<S834>/If' incorporates:
   *  Inport: '<S855>/In1'
   *  Inport: '<S856>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S834>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S834>/override_enable'
   */
  if ((VSC_WheelTorqueRequest_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S834>/NewValue' incorporates:
     *  ActionPort: '<S855>/Action Port'
     */
    rtb_Merge_kv = (VSC_WheelTorqueRequest_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S855>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(420);
    }

    /* End of Outputs for SubSystem: '<S834>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S834>/OldValue' incorporates:
     *  ActionPort: '<S856>/Action Port'
     */
    rtb_Merge_kv = Mooventure2016_Rev5_B.s534_VSC_WheelTorqueRequest;

    /* S-Function (motohawk_sfun_code_cover): '<S856>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(421);
    }

    /* End of Outputs for SubSystem: '<S834>/OldValue' */
  }

  /* End of If: '<S834>/If' */

  /* S-Function (motohawk_sfun_data_read): '<S534>/motohawk_data_read3' */
  Mooventure2016_Rev5_B.s534_VSC_IPTEnable = Vehicle_Ready_DataStore();

  /* If: '<S835>/If' incorporates:
   *  Inport: '<S857>/In1'
   *  Inport: '<S858>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S835>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S835>/override_enable'
   */
  if ((VSC_IPTWakeup_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S835>/NewValue' incorporates:
     *  ActionPort: '<S857>/Action Port'
     */
    rtb_Merge_e0 = (VSC_IPTWakeup_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S857>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(422);
    }

    /* End of Outputs for SubSystem: '<S835>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S835>/OldValue' incorporates:
     *  ActionPort: '<S858>/Action Port'
     */
    rtb_Merge_e0 = Mooventure2016_Rev5_B.s534_VSC_IPTEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S858>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(423);
    }

    /* End of Outputs for SubSystem: '<S835>/OldValue' */
  }

  /* End of If: '<S835>/If' */

  /* If: '<S836>/If' incorporates:
   *  Inport: '<S859>/In1'
   *  Inport: '<S860>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S836>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S836>/override_enable'
   */
  if ((VSC_TRSPosition_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S836>/NewValue' incorporates:
     *  ActionPort: '<S859>/Action Port'
     */
    rtb_Merge_kf = (VSC_TRSPosition_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S859>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(424);
    }

    /* End of Outputs for SubSystem: '<S836>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S836>/OldValue' incorporates:
     *  ActionPort: '<S860>/Action Port'
     */
    rtb_Merge_kf = Mooventure2016_Rev5_B.s318_posOut;

    /* S-Function (motohawk_sfun_code_cover): '<S860>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(425);
    }

    /* End of Outputs for SubSystem: '<S836>/OldValue' */
  }

  /* End of If: '<S836>/If' */

  /* DataTypeConversion: '<S18>/Data Type Conversion' */
  rtb_Eaton_Plugged_In = (Mooventure2016_Rev5_B.s18_motor_Enable != 0.0);

  /* S-Function Block: <S831>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s831_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_l = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S831>/Switch' incorporates:
   *  Constant: '<S831>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S831>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S831>/motohawk_delta_time'
   *  Sum: '<S831>/Sum'
   */
  if (rtb_Eaton_Plugged_In) {
    rtb_DataTypeConversion4 = rtb_motohawk_delta_time_l +
      MotorEnable_Timer_DataStore();
  } else {
    rtb_DataTypeConversion4 = 0.0;
  }

  /* End of Switch: '<S831>/Switch' */
  /* RelationalOperator: '<S534>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S534>/motohawk_calibration3'
   */
  rtb_LogicalOperator5 = (rtb_DataTypeConversion4 >=
    (Motor_Startup_Delay_DataStore()));

  /* Logic: '<S534>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S534>/motohawk_data_read1'
   */
  Mooventure2016_Rev5_B.s534_VSC_MotorEnable = ((rtb_Eaton_Plugged_In &&
    rtb_LogicalOperator5 && Vehicle_Ready_DataStore()));

  /* If: '<S837>/If' incorporates:
   *  Inport: '<S861>/In1'
   *  Inport: '<S862>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S837>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S837>/override_enable'
   */
  if ((VSC_MotorEnable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S837>/NewValue' incorporates:
     *  ActionPort: '<S861>/Action Port'
     */
    rtb_Merge_m3 = (VSC_MotorEnable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S861>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(426);
    }

    /* End of Outputs for SubSystem: '<S837>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S837>/OldValue' incorporates:
     *  ActionPort: '<S862>/Action Port'
     */
    rtb_Merge_m3 = Mooventure2016_Rev5_B.s534_VSC_MotorEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S862>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(427);
    }

    /* End of Outputs for SubSystem: '<S837>/OldValue' */
  }

  /* End of If: '<S837>/If' */

  /* If: '<S838>/If' incorporates:
   *  Inport: '<S863>/In1'
   *  Inport: '<S864>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S534>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S838>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S838>/override_enable'
   */
  if ((VSC_AntishudderDisable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S838>/NewValue' incorporates:
     *  ActionPort: '<S863>/Action Port'
     */
    rtb_Merge_cz = (VSC_AntishudderDisable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S863>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(428);
    }

    /* End of Outputs for SubSystem: '<S838>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S838>/OldValue' incorporates:
     *  ActionPort: '<S864>/Action Port'
     */
    rtb_Merge_cz = (VSC_AntishudderDisable_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S864>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(429);
    }

    /* End of Outputs for SubSystem: '<S838>/OldValue' */
  }

  /* End of If: '<S838>/If' */

  /* If: '<S839>/If' incorporates:
   *  Inport: '<S865>/In1'
   *  Inport: '<S866>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S839>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S839>/override_enable'
   */
  if ((VSC_IPTEnable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S839>/NewValue' incorporates:
     *  ActionPort: '<S865>/Action Port'
     */
    rtb_Merge_nrr = (VSC_IPTEnable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S865>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(430);
    }

    /* End of Outputs for SubSystem: '<S839>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S839>/OldValue' incorporates:
     *  ActionPort: '<S866>/Action Port'
     */
    rtb_Merge_nrr = Mooventure2016_Rev5_B.s534_VSC_IPTEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S866>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(431);
    }

    /* End of Outputs for SubSystem: '<S839>/OldValue' */
  }

  /* End of If: '<S839>/If' */

  /* If: '<S840>/If' incorporates:
   *  Inport: '<S867>/In1'
   *  Inport: '<S868>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S534>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_calibration): '<S840>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S840>/override_enable'
   */
  if ((VSC_SDPTActive_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S840>/NewValue' incorporates:
     *  ActionPort: '<S867>/Action Port'
     */
    rtb_Merge_nzb = (VSC_SDPTActive_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S867>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(432);
    }

    /* End of Outputs for SubSystem: '<S840>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S840>/OldValue' incorporates:
     *  ActionPort: '<S868>/Action Port'
     */
    rtb_Merge_nzb = (VSC_SDPTActive_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S868>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(433);
    }

    /* End of Outputs for SubSystem: '<S840>/OldValue' */
  }

  /* End of If: '<S840>/If' */

  /* If: '<S841>/If' incorporates:
   *  Inport: '<S869>/In1'
   *  Inport: '<S870>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S534>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S841>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S841>/override_enable'
   */
  if ((VSC_PowerWasteRequest_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S841>/NewValue' incorporates:
     *  ActionPort: '<S869>/Action Port'
     */
    rtb_Merge_go = (VSC_PowerWasteRequest_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S869>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(434);
    }

    /* End of Outputs for SubSystem: '<S841>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S841>/OldValue' incorporates:
     *  ActionPort: '<S870>/Action Port'
     */
    rtb_Merge_go = (VSC_PowerWasteRequest_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S870>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(435);
    }

    /* End of Outputs for SubSystem: '<S841>/OldValue' */
  }

  /* End of If: '<S841>/If' */

  /* If: '<S848>/If' incorporates:
   *  Inport: '<S883>/In1'
   *  Inport: '<S884>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S534>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S848>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S848>/override_enable'
   */
  if ((VSC_ActiveDischargeDisable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S848>/NewValue' incorporates:
     *  ActionPort: '<S883>/Action Port'
     */
    rtb_Merge_il = (VSC_ActiveDischargeDisable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S883>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(448);
    }

    /* End of Outputs for SubSystem: '<S848>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S848>/OldValue' incorporates:
     *  ActionPort: '<S884>/Action Port'
     */
    rtb_Merge_il = (VSC_ActiveDischargeDisable_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S884>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(449);
    }

    /* End of Outputs for SubSystem: '<S848>/OldValue' */
  }

  /* End of If: '<S848>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S534>/Send CAN Messages' */
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

  /* If: '<S842>/If' incorporates:
   *  Inport: '<S871>/In1'
   *  Inport: '<S872>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S534>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S842>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S842>/override_enable'
   */
  if ((VSC_MinDCVoltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S842>/NewValue' incorporates:
     *  ActionPort: '<S871>/Action Port'
     */
    rtb_Merge_e2 = (VSC_MinDCVoltage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S871>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(436);
    }

    /* End of Outputs for SubSystem: '<S842>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S842>/OldValue' incorporates:
     *  ActionPort: '<S872>/Action Port'
     */
    rtb_Merge_e2 = (VSC_MinDCVoltage_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S872>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(437);
    }

    /* End of Outputs for SubSystem: '<S842>/OldValue' */
  }

  /* End of If: '<S842>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S187>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3229p0005_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3229p0005_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint8_T tmp2 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[7])) ;
      Mooventure2016_Rev5_B.s187_MaximumDischargePower_Continuous = ((real_T)
        tmp0) / ((real_T) 100);
      Mooventure2016_Rev5_B.s187_MaximumRegenPower_Continuous = ((real_T) tmp1) /
        ((real_T) 100);
      Mooventure2016_Rev5_B.s187_PPLCont_RollingCounter = (real_T) tmp2;
    }
  }

  /* S-Function Block: <S850>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s850_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_gp = ((real_T) delta) * 0.000001;
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S187>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3228p0005_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3228p0005_Receive(0, &msg_id, 0, msg_data);
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
      Mooventure2016_Rev5_B.s187_MaximumDischargePower_10s = ((real_T) tmp0) /
        ((real_T) 100);
      Mooventure2016_Rev5_B.s187_MaximumRegenPower_10s = ((real_T) tmp1) /
        ((real_T) 100);
      Mooventure2016_Rev5_B.s187_IsolationLevel = ((real_T) tmp2) * ((real_T) 4);
      Mooventure2016_Rev5_B.s187_ActiveDTC = (real_T) tmp3;
      Mooventure2016_Rev5_B.s187_PPL10s_RollingCounter = (real_T) tmp4;
    }
  }

  /* Product: '<S830>/Product' incorporates:
   *  Constant: '<S830>/Constant'
   */
  rtb_UnitDelay_o = -Mooventure2016_Rev5_B.s187_MaximumRegenPower_10s;

  /* If: '<S258>/If' incorporates:
   *  Inport: '<S268>/In1'
   *  Inport: '<S269>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S258>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S258>/override_enable'
   */
  if ((Batt_Current_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S258>/NewValue' incorporates:
     *  ActionPort: '<S268>/Action Port'
     */
    Mooventure2016_Rev5_B.s258_Merge = (Batt_Current_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S268>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(78);
    }

    /* End of Outputs for SubSystem: '<S258>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S258>/OldValue' incorporates:
     *  ActionPort: '<S269>/Action Port'
     */
    Mooventure2016_Rev5_B.s258_Merge = Mooventure2016_Rev5_B.s187_BatteryCurrent;

    /* S-Function (motohawk_sfun_code_cover): '<S269>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(79);
    }

    /* End of Outputs for SubSystem: '<S258>/OldValue' */
  }

  /* End of If: '<S258>/If' */

  /* RelationalOperator: '<S830>/Relational Operator' */
  rtb_LogicalOperator5 = (rtb_UnitDelay_o >= Mooventure2016_Rev5_B.s258_Merge);

  /* Logic: '<S830>/Logical Operator' incorporates:
   *  RelationalOperator: '<S830>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S830>/motohawk_calibration'
   */
  rtb_Eaton_Plugged_In = (rtb_LogicalOperator5 ||
    (Mooventure2016_Rev5_B.s258_Merge >= (Saturated_Sensor_Regen_DataStore())));

  /* Switch: '<S850>/Switch' incorporates:
   *  Constant: '<S850>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S850>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S850>/motohawk_delta_time'
   *  Sum: '<S850>/Sum'
   */
  if (rtb_Eaton_Plugged_In) {
    rtb_DataTypeConversion3 = rtb_motohawk_delta_time_gp +
      MaxOutputCurrent_Timer_DataStore();
  } else {
    rtb_DataTypeConversion3 = 0.0;
  }

  /* End of Switch: '<S850>/Switch' */

  /* Switch: '<S830>/Switch' incorporates:
   *  Constant: '<S830>/Constant1'
   *  Logic: '<S830>/Logical Operator1'
   *  RelationalOperator: '<S830>/Relational Operator2'
   */
  if ((rtb_DataTypeConversion3 >= 10.0) && rtb_Eaton_Plugged_In) {
    Mooventure2016_Rev5_B.s830_Switch =
      Mooventure2016_Rev5_B.s187_MaximumRegenPower_Continuous;
  } else {
    Mooventure2016_Rev5_B.s830_Switch =
      Mooventure2016_Rev5_B.s187_MaximumRegenPower_10s;
  }

  /* End of Switch: '<S830>/Switch' */
  /* If: '<S845>/If' incorporates:
   *  Inport: '<S877>/In1'
   *  Inport: '<S878>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S845>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S845>/override_enable'
   */
  if ((VSC_MaxCurrOutputGen_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S845>/NewValue' incorporates:
     *  ActionPort: '<S877>/Action Port'
     */
    rtb_Merge_ee = (VSC_MaxCurrOutputGen_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S877>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(442);
    }

    /* End of Outputs for SubSystem: '<S845>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S845>/OldValue' incorporates:
     *  ActionPort: '<S878>/Action Port'
     */
    rtb_Merge_ee = Mooventure2016_Rev5_B.s830_Switch;

    /* S-Function (motohawk_sfun_code_cover): '<S878>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(443);
    }

    /* End of Outputs for SubSystem: '<S845>/OldValue' */
  }

  /* End of If: '<S845>/If' */

  /* S-Function Block: <S849>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s849_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_md = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S829>/Relational Operator' incorporates:
   *  Constant: '<S829>/Constant'
   *  Product: '<S829>/Product'
   */
  rtb_LogicalOperator5 = (-Mooventure2016_Rev5_B.s187_MaximumDischargePower_10s >=
    Mooventure2016_Rev5_B.s258_Merge);

  /* Logic: '<S829>/Logical Operator' incorporates:
   *  RelationalOperator: '<S829>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S829>/motohawk_calibration'
   */
  rtb_Eaton_Plugged_In = (rtb_LogicalOperator5 ||
    (Mooventure2016_Rev5_B.s258_Merge <= (Saturated_Sensor_Discharge_DataStore())));

  /* Switch: '<S849>/Switch' incorporates:
   *  Constant: '<S849>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S849>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S849>/motohawk_delta_time'
   *  Sum: '<S849>/Sum'
   */
  if (rtb_Eaton_Plugged_In) {
    rtb_Switch_pn = rtb_motohawk_delta_time_md + MaxInputCurrent_Timer_DataStore
      ();
  } else {
    rtb_Switch_pn = 0.0;
  }

  /* End of Switch: '<S849>/Switch' */

  /* Switch: '<S829>/Switch' incorporates:
   *  Constant: '<S829>/Constant1'
   *  Logic: '<S829>/Logical Operator1'
   *  RelationalOperator: '<S829>/Relational Operator2'
   */
  if ((rtb_Switch_pn >= 10.0) && rtb_Eaton_Plugged_In) {
    Mooventure2016_Rev5_B.s829_Switch =
      Mooventure2016_Rev5_B.s187_MaximumDischargePower_Continuous;
  } else {
    Mooventure2016_Rev5_B.s829_Switch =
      Mooventure2016_Rev5_B.s187_MaximumDischargePower_10s;
  }

  /* End of Switch: '<S829>/Switch' */
  /* If: '<S846>/If' incorporates:
   *  Inport: '<S879>/In1'
   *  Inport: '<S880>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S846>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S846>/override_enable'
   */
  if ((VSC_MaxCurrInputMotor_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S846>/NewValue' incorporates:
     *  ActionPort: '<S879>/Action Port'
     */
    rtb_Merge_pi = (VSC_MaxCurrInputMotor_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S879>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(444);
    }

    /* End of Outputs for SubSystem: '<S846>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S846>/OldValue' incorporates:
     *  ActionPort: '<S880>/Action Port'
     */
    rtb_Merge_pi = Mooventure2016_Rev5_B.s829_Switch;

    /* S-Function (motohawk_sfun_code_cover): '<S880>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(445);
    }

    /* End of Outputs for SubSystem: '<S846>/OldValue' */
  }

  /* End of If: '<S846>/If' */

  /* If: '<S847>/If' incorporates:
   *  Inport: '<S881>/In1'
   *  Inport: '<S882>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S534>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S847>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S847>/override_enable'
   */
  if ((VSC_MaxDCVoltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S847>/NewValue' incorporates:
     *  ActionPort: '<S881>/Action Port'
     */
    rtb_Merge_bi = (VSC_MaxDCVoltage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S881>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(446);
    }

    /* End of Outputs for SubSystem: '<S847>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S847>/OldValue' incorporates:
     *  ActionPort: '<S882>/Action Port'
     */
    rtb_Merge_bi = (VSC_MaxDCVoltage_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S882>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(447);
    }

    /* End of Outputs for SubSystem: '<S847>/OldValue' */
  }

  /* End of If: '<S847>/If' */

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

  /* S-Function (motohawk_sfun_probe): '<S534>/motohawk_probe14' */
  (VSC_AntishudderDisable_Prb_DataStore()) =
    (VSC_AntishudderDisable_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S534>/motohawk_probe16' */
  (VSC_SDPTActive_Prb_DataStore()) = (VSC_SDPTActive_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S534>/motohawk_probe17' */
  (VSC_PowerWasteRequest_Prb_DataStore()) = (VSC_PowerWasteRequest_Cal_DataStore
    ());

  /* S-Function (motohawk_sfun_probe): '<S534>/motohawk_probe2' */
  (VSC_MinDCVoltage_Prb_DataStore()) = (VSC_MinDCVoltage_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S534>/motohawk_probe7' */
  (VSC_MaxDCVoltage_Prb_DataStore()) = (VSC_MaxDCVoltage_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S534>/motohawk_probe8' */
  (VSC_ActiveDischargeDisable_Prb_DataStore()) =
    (VSC_ActiveDischargeDisable_Cal_DataStore());

  /* Saturate: '<S849>/Saturation' */
  rtb_Saturation_lh = rtb_Switch_pn >= 16000.0 ? 16000.0 : rtb_Switch_pn <= 0.0 ?
    0.0 : rtb_Switch_pn;

  /* S-Function (motohawk_sfun_data_write): '<S849>/motohawk_data_write' */
  /* Write to Data Storage as scalar: MaxInputCurrent_Timer */
  {
    MaxInputCurrent_Timer_DataStore() = rtb_Saturation_lh;
  }

  /* Saturate: '<S850>/Saturation' */
  rtb_Saturation_j = rtb_DataTypeConversion3 >= 16000.0 ? 16000.0 :
    rtb_DataTypeConversion3 <= 0.0 ? 0.0 : rtb_DataTypeConversion3;

  /* S-Function (motohawk_sfun_data_write): '<S850>/motohawk_data_write' */
  /* Write to Data Storage as scalar: MaxOutputCurrent_Timer */
  {
    MaxOutputCurrent_Timer_DataStore() = rtb_Saturation_j;
  }

  /* Saturate: '<S831>/Saturation' */
  rtb_Saturation_c = rtb_DataTypeConversion4 >= 16000.0 ? 16000.0 :
    rtb_DataTypeConversion4 <= 0.0 ? 0.0 : rtb_DataTypeConversion4;

  /* S-Function (motohawk_sfun_data_write): '<S831>/motohawk_data_write' */
  /* Write to Data Storage as scalar: MotorEnable_Timer */
  {
    MotorEnable_Timer_DataStore() = rtb_Saturation_c;
  }

  /* Logic: '<S534>/Logical Operator' incorporates:
   *  Constant: '<S828>/Constant'
   *  RelationalOperator: '<S828>/Compare'
   *  S-Function (motohawk_sfun_data_read): '<S534>/motohawk_data_read4'
   *  S-Function (motohawk_sfun_data_read): '<S534>/motohawk_data_read5'
   */
  rtb_LogicalOperator5 = (Eaton_Plugged_In_DataStore() ||
    (Hybrid_State_DataStore() >= 1));

  /* Logic: '<S534>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S534>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s534_VSC_DCDCEnable = ((rtb_LogicalOperator5 &&
    Vehicle_Ready_DataStore()));

  /* If: '<S832>/If' incorporates:
   *  Inport: '<S851>/In1'
   *  Inport: '<S852>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S832>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S832>/override_enable'
   */
  if ((VSC_DCDCEnable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S832>/NewValue' incorporates:
     *  ActionPort: '<S851>/Action Port'
     */
    rtb_Merge_hz = (VSC_DCDCEnable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S851>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(416);
    }

    /* End of Outputs for SubSystem: '<S832>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S832>/OldValue' incorporates:
     *  ActionPort: '<S852>/Action Port'
     */
    rtb_Merge_hz = Mooventure2016_Rev5_B.s534_VSC_DCDCEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S852>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(417);
    }

    /* End of Outputs for SubSystem: '<S832>/OldValue' */
  }

  /* End of If: '<S832>/If' */

  /* If: '<S833>/If' incorporates:
   *  Inport: '<S853>/In1'
   *  Inport: '<S854>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S534>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S833>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S833>/override_enable'
   */
  if ((VSC_DCOutputVoltageCmd_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S833>/NewValue' incorporates:
     *  ActionPort: '<S853>/Action Port'
     */
    rtb_Merge_je = (VSC_DCOutputVoltageCmd_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S853>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(418);
    }

    /* End of Outputs for SubSystem: '<S833>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S833>/OldValue' incorporates:
     *  ActionPort: '<S854>/Action Port'
     */
    rtb_Merge_je = (VSC_DCOutputVoltage_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S854>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(419);
    }

    /* End of Outputs for SubSystem: '<S833>/OldValue' */
  }

  /* End of If: '<S833>/If' */

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

  /* S-Function (motohawk_sfun_probe): '<S534>/motohawk_probe1' */
  (VSC_DCOutputVoltageCmd_Prb_DataStore()) = (VSC_DCOutputVoltage_Cal_DataStore());

  /* If: '<S843>/If' incorporates:
   *  Inport: '<S873>/In1'
   *  Inport: '<S874>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S534>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S843>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S843>/override_enable'
   */
  if ((IPT_Freq_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S843>/NewValue' incorporates:
     *  ActionPort: '<S873>/Action Port'
     */
    Mooventure2016_Rev5_B.s843_Merge = (IPT_Freq_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S873>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(438);
    }

    /* End of Outputs for SubSystem: '<S843>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S843>/OldValue' incorporates:
     *  ActionPort: '<S874>/Action Port'
     */
    Mooventure2016_Rev5_B.s843_Merge = (IPT_Frequency_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S874>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(439);
    }

    /* End of Outputs for SubSystem: '<S843>/OldValue' */
  }

  /* End of If: '<S843>/If' */

  /* If: '<S844>/If' incorporates:
   *  Inport: '<S875>/In1'
   *  Inport: '<S876>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S534>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S844>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S844>/override_enable'
   */
  if ((IPT_DutyCycle_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S844>/NewValue' incorporates:
     *  ActionPort: '<S875>/Action Port'
     */
    Mooventure2016_Rev5_B.s844_Merge = (IPT_DutyCycle_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S875>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(440);
    }

    /* End of Outputs for SubSystem: '<S844>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S844>/OldValue' incorporates:
     *  ActionPort: '<S876>/Action Port'
     */
    Mooventure2016_Rev5_B.s844_Merge = (IPT_Duty_Cycle_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S876>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(441);
    }

    /* End of Outputs for SubSystem: '<S844>/OldValue' */
  }

  /* End of If: '<S844>/If' */

  /* DataTypeConversion: '<S534>/Data Type Conversion1' */
  if (rtIsNaN(Mooventure2016_Rev5_B.s844_Merge) || rtIsInf
      (Mooventure2016_Rev5_B.s844_Merge)) {
    rtb_UnitDelay_m = 0.0;
  } else {
    rtb_UnitDelay_m = fmod(floor(Mooventure2016_Rev5_B.s844_Merge), 65536.0);
  }

  rtb_DataTypeConversion1_o = (int16_T)(rtb_UnitDelay_m < 0.0 ? (int16_T)
    -(int16_T)(uint16_T)-rtb_UnitDelay_m : (int16_T)(uint16_T)rtb_UnitDelay_m);

  /* End of DataTypeConversion: '<S534>/Data Type Conversion1' */

  /* DataTypeConversion: '<S534>/Data Type Conversion2' */
  if (rtIsNaN(Mooventure2016_Rev5_B.s843_Merge) || rtIsInf
      (Mooventure2016_Rev5_B.s843_Merge)) {
    rtb_UnitDelay_m = 0.0;
  } else {
    rtb_UnitDelay_m = fmod(floor(Mooventure2016_Rev5_B.s843_Merge),
      4.294967296E+9);
  }

  rtb_DataTypeConversion2_n = rtb_UnitDelay_m < 0.0 ? (uint32_T)-(int32_T)
    (uint32_T)-rtb_UnitDelay_m : (uint32_T)rtb_UnitDelay_m;

  /* End of DataTypeConversion: '<S534>/Data Type Conversion2' */

  /* Sum: '<S85>/Add2' incorporates:
   *  UnitDelay: '<S85>/Unit Delay1'
   */
  rtb_Switch_pn = Mooventure2016_Rev5_B.s238_Sum1 -
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
  rtb_RelationalOperator5_g = ((Mooventure2016_Rev5_B.s238_Sum1 <
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
  rtb_Switch_pn = Mooventure2016_Rev5_B.s239_Sum1 -
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
  rtb_RelationalOperator3_ih = ((Mooventure2016_Rev5_B.s239_Sum1 <
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
  rtb_RelationalOperator4 = ((Mooventure2016_Rev5_B.s239_Sum1 >
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
  rtb_RelationalOperator6 = ((Mooventure2016_Rev5_B.s238_Sum1 >
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
  if (Mooventure2016_Rev5_B.s529_DataTypeConversion5) {
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
    Mooventure2016_Rev5_B.s529_DataTypeConversion5));

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
  if (Mooventure2016_Rev5_B.s529_DataTypeConversion1) {
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
    Mooventure2016_Rev5_B.s529_DataTypeConversion1));

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

  /* If: '<S358>/If' incorporates:
   *  Inport: '<S370>/In1'
   *  Inport: '<S371>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S358>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S358>/override_enable'
   */
  if ((Fault_Severity_Indicator_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S358>/NewValue' incorporates:
     *  ActionPort: '<S370>/Action Port'
     */
    rtb_Merge_ck = (Fault_Severity_Indicator_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S370>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(128);
    }

    /* End of Outputs for SubSystem: '<S358>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S358>/OldValue' incorporates:
     *  ActionPort: '<S371>/Action Port'
     */
    rtb_Merge_ck = Mooventure2016_Rev5_B.s192_FaultSeverityIndicator;

    /* S-Function (motohawk_sfun_code_cover): '<S371>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(129);
    }

    /* End of Outputs for SubSystem: '<S358>/OldValue' */
  }

  /* End of If: '<S358>/If' */

  /* If: '<S363>/If' incorporates:
   *  Inport: '<S380>/In1'
   *  Inport: '<S381>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S363>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S363>/override_enable'
   */
  if ((Ignition_Status_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S363>/NewValue' incorporates:
     *  ActionPort: '<S380>/Action Port'
     */
    rtb_LogicalOperator5 = (Ignition_Status_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S380>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(138);
    }

    /* End of Outputs for SubSystem: '<S363>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S363>/OldValue' incorporates:
     *  ActionPort: '<S381>/Action Port'
     */
    rtb_LogicalOperator5 = Mooventure2016_Rev5_B.s192_IgnitionStatus;

    /* S-Function (motohawk_sfun_code_cover): '<S381>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(139);
    }

    /* End of Outputs for SubSystem: '<S363>/OldValue' */
  }

  /* End of If: '<S363>/If' */

  /* If: '<S369>/If' incorporates:
   *  Inport: '<S392>/In1'
   *  Inport: '<S393>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S369>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S369>/override_enable'
   */
  if ((Input_Voltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S369>/NewValue' incorporates:
     *  ActionPort: '<S392>/Action Port'
     */
    rtb_UnitDelay_o = (Input_Voltage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S392>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(150);
    }

    /* End of Outputs for SubSystem: '<S369>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S369>/OldValue' incorporates:
     *  ActionPort: '<S393>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s192_InputVoltage;

    /* S-Function (motohawk_sfun_code_cover): '<S393>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(151);
    }

    /* End of Outputs for SubSystem: '<S369>/OldValue' */
  }

  /* End of If: '<S369>/If' */

  /* If: '<S422>/If' incorporates:
   *  Inport: '<S458>/In1'
   *  Inport: '<S459>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S422>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S422>/override_enable'
   */
  if ((IPT_HVDC_Voltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S422>/NewValue' incorporates:
     *  ActionPort: '<S458>/Action Port'
     */
    Mooventure2016_Rev5_B.s422_Merge = (IPT_HVDC_Voltage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S458>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs13/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(176);
    }

    /* End of Outputs for SubSystem: '<S422>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S422>/OldValue' incorporates:
     *  ActionPort: '<S459>/Action Port'
     */
    Mooventure2016_Rev5_B.s422_Merge =
      Mooventure2016_Rev5_B.s194_IPT_HVDCVoltage;

    /* S-Function (motohawk_sfun_code_cover): '<S459>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs13/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(177);
    }

    /* End of Outputs for SubSystem: '<S422>/OldValue' */
  }

  /* End of If: '<S422>/If' */

  /* Outputs for Enabled SubSystem: '<S80>/Charger' incorporates:
   *  EnablePort: '<S86>/Enable'
   */
  if (rtb_motohawk_data_read_mb) {
    /* RelationalOperator: '<S86>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S86>/motohawk_calibration1'
     */
    rtb_RelationalOperator1_j = ((Mooventure2016_Rev5_B.s364_Merge <=
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
    rtb_RelationalOperator2_i = ((Mooventure2016_Rev5_B.s364_Merge >=
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
     *  S-Function (motohawk_sfun_calibration): '<S189>/motohawk_calibration1'
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
     *  S-Function (motohawk_sfun_calibration): '<S189>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S86>/motohawk_calibration4'
     */
    rtb_LogicalOperator5_c = ((MaxVoltageCal_DataStore()) <
      (Charger_Requested_Voltage_Out_of_Bounds_Fault_Lower_DataStore()));

    /* Logic: '<S86>/Logical Operator' incorporates:
     *  RelationalOperator: '<S86>/Relational Operator5'
     *  S-Function (motohawk_sfun_calibration): '<S189>/motohawk_calibration'
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
      (Mooventure2016_Rev5_B.s422_Merge <
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
    rtb_RelationalOperator9_k = ((Mooventure2016_Rev5_B.s422_Merge <
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
    rtb_RelationalOperator10_b = ((Mooventure2016_Rev5_B.s422_Merge >
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
  /* S-Function Block: <S231>/motohawk_ain4 Resource: AN22 */
  Mooventure2016_Rev5_B.s231_motohawk_ain4_o1 = AN22_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S249>/If' incorporates:
   *  Inport: '<S250>/In1'
   *  Inport: '<S251>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S249>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S249>/override_enable'
   */
  if ((DCDC_Status_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S249>/NewValue' incorporates:
     *  ActionPort: '<S250>/Action Port'
     */
    rtb_Merge_c13 = ((uint16_T)(DCDC_Status_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S250>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(72);
    }

    /* End of Outputs for SubSystem: '<S249>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S249>/OldValue' incorporates:
     *  ActionPort: '<S251>/Action Port'
     */
    rtb_Merge_c13 = Mooventure2016_Rev5_B.s231_motohawk_ain4_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S251>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(73);
    }

    /* End of Outputs for SubSystem: '<S249>/OldValue' */
  }

  /* End of If: '<S249>/If' */

  /* RelationalOperator: '<S87>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S87>/motohawk_calibration1'
   */
  rtb_Eaton_Plugged_In = ((real_T)rtb_Merge_c13 <
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
      TempReading_DataStore() = Mooventure2016_Rev5_B.s229_temp_reading;
    }
  }

  Mooventure2016_Rev5_PrevZCSigState.TriggeredSubsystem_Trig_ZCE = (uint8_T)
    (rtb_LogicalOperator5 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

  /* End of Outputs for SubSystem: '<S88>/Triggered Subsystem' */
  /* Sum: '<S88>/Add' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S88>/motohawk_calibration'
   */
  rtb_UnitDelay_o = (Temp_Fault_Hyst_DataStore()) +
    Mooventure2016_Rev5_B.s229_temp_reading;

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
  rtb_RelationalOperator1_p = ((Mooventure2016_Rev5_B.s229_temp_reading >
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
  rtb_Switch_pn = rtb_Heater_Temp_Raw -
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
  rtb_RelationalOperator3_h = ((rtb_Heater_Temp_Raw <
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
  rtb_RelationalOperator4_m = ((rtb_Heater_Temp_Raw >
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
  rtb_RelationalOperator1_cg = ((Mooventure2016_Rev5_B.s187_ActiveDTC >
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
  rtb_LogicalOperator_a = (((Mooventure2016_Rev5_B.s258_Merge >
    (HV_Battery_Try_To_Balance_Under_Load_Fault_DataStore())) &&
    Mooventure2016_Rev5_B.s187_CellBalanceingActive));

  /* S-Function (motohawk_sfun_fault_def): '<S92>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: HV_Battery_Try_To_Balance_Under_Load */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(64, rtb_LogicalOperator_a);
    UpdateFault(64);
  }

  /* Sum: '<S92>/Add' */
  rtb_UnitDelay_o = Mooventure2016_Rev5_B.s187_MaxCellVoltage -
    Mooventure2016_Rev5_B.s187_MinCellVoltage;

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

  /* If: '<S259>/If' incorporates:
   *  Inport: '<S270>/In1'
   *  Inport: '<S271>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S259>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S259>/override_enable'
   */
  if ((Batt_Age_Count_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S259>/NewValue' incorporates:
     *  ActionPort: '<S270>/Action Port'
     */
    rtb_Merge_nu = (Batt_Age_Count_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S270>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(80);
    }

    /* End of Outputs for SubSystem: '<S259>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S259>/OldValue' incorporates:
     *  ActionPort: '<S271>/Action Port'
     */
    rtb_Merge_nu = Mooventure2016_Rev5_B.s187_AgeCount;

    /* S-Function (motohawk_sfun_code_cover): '<S271>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(81);
    }

    /* End of Outputs for SubSystem: '<S259>/OldValue' */
  }

  /* End of If: '<S259>/If' */

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
  rtb_RelationalOperator2_cc = ((Mooventure2016_Rev5_B.s187_PrechargeState ==
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
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s187_MinCellTemperature >
    (HV_Battery_Pack_Low_Temperature_Fault_Low_DataStore()));

  /* Logic: '<S94>/Logical Operator' incorporates:
   *  RelationalOperator: '<S94>/Relational Operator7'
   *  S-Function (motohawk_sfun_calibration): '<S94>/motohawk_calibration4'
   */
  rtb_LogicalOperator_oh = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s187_MinCellTemperature <=
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
  rtb_RelationalOperator2_lg = ((Mooventure2016_Rev5_B.s187_MinCellTemperature <=
                                 
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
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s187_MaxCellTemperature >
    (HV_Battery_Pack_High_Temperature_Fault_Low_DataStore()));

  /* Logic: '<S94>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S94>/Relational Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S94>/motohawk_calibration6'
   */
  rtb_LogicalOperator1_aw = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s187_MaxCellTemperature <=
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
  rtb_RelationalOperator1_pt = ((Mooventure2016_Rev5_B.s187_MaxCellTemperature >
                                 
    (HV_Battery_Pack_Above_Operating_Temperature_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S94>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: HV_Battery_Pack_Above_Operating_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(58, rtb_RelationalOperator1_pt);
    UpdateFault(58);
  }

  /* If: '<S448>/If' incorporates:
   *  Inport: '<S510>/In1'
   *  Inport: '<S511>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S448>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S448>/override_enable'
   */
  if ((Age_Count_278_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S448>/NewValue' incorporates:
     *  ActionPort: '<S510>/Action Port'
     */
    rtb_Merge_mw2 = (Age_Count_278_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S510>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(228);
    }

    /* End of Outputs for SubSystem: '<S448>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S448>/OldValue' incorporates:
     *  ActionPort: '<S511>/Action Port'
     */
    rtb_Merge_mw2 = Mooventure2016_Rev5_B.s194_AgeCount_m;

    /* S-Function (motohawk_sfun_code_cover): '<S511>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(229);
    }

    /* End of Outputs for SubSystem: '<S448>/OldValue' */
  }

  /* End of If: '<S448>/If' */

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

  /* If: '<S198>/If' incorporates:
   *  Inport: '<S211>/In1'
   *  Inport: '<S212>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S198>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S198>/override_enable'
   */
  if ((ABS_417_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S198>/NewValue' incorporates:
     *  ActionPort: '<S211>/Action Port'
     */
    rtb_Merge_mw2 = (ABS_417_AgeCount_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S211>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(46);
    }

    /* End of Outputs for SubSystem: '<S198>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S198>/OldValue' incorporates:
     *  ActionPort: '<S212>/Action Port'
     */
    rtb_Merge_mw2 = Mooventure2016_Rev5_B.s185_AgeCount;

    /* S-Function (motohawk_sfun_code_cover): '<S212>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(47);
    }

    /* End of Outputs for SubSystem: '<S198>/OldValue' */
  }

  /* End of If: '<S198>/If' */

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

  /* S-Function (motohawk_sfun_read_canmsg): '<S195>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4155p0004_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4155p0004_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s195_AgeCount + 1) >
        Mooventure2016_Rev5_B.s195_AgeCount)
      Mooventure2016_Rev5_B.s195_AgeCount++;
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
      Mooventure2016_Rev5_B.s195_STR_WHL_ANGLE_CNTR_FND = (real_T) tmp0;
      Mooventure2016_Rev5_B.s195_STR_WHL_ANGLE = (((real_T) tmp1) / ((real_T) 10))
        + ((real_T) -1000);
      Mooventure2016_Rev5_B.s195_RELATIVE_STR_WHL_ANGLE = (((real_T) tmp2) /
        ((real_T) 10)) + ((real_T) -2000);
      Mooventure2016_Rev5_B.s195_AgeCount = 0;
    }
  }

  /* If: '<S516>/If' incorporates:
   *  Inport: '<S522>/In1'
   *  Inport: '<S523>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S516>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S516>/override_enable'
   */
  if ((PSCM_80_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S516>/NewValue' incorporates:
     *  ActionPort: '<S522>/Action Port'
     */
    rtb_Merge_mw2 = (PSCM_80_AgeCount_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S522>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(236);
    }

    /* End of Outputs for SubSystem: '<S516>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S516>/OldValue' incorporates:
     *  ActionPort: '<S523>/Action Port'
     */
    rtb_Merge_mw2 = Mooventure2016_Rev5_B.s195_AgeCount;

    /* S-Function (motohawk_sfun_code_cover): '<S523>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(237);
    }

    /* End of Outputs for SubSystem: '<S516>/OldValue' */
  }

  /* End of If: '<S516>/If' */

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

  /* If: '<S429>/If' incorporates:
   *  Inport: '<S472>/In1'
   *  Inport: '<S473>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S429>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S429>/override_enable'
   */
  if ((Age_Count_260_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S429>/NewValue' incorporates:
     *  ActionPort: '<S472>/Action Port'
     */
    rtb_Merge_mw2 = (Age_Count_260_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S472>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(190);
    }

    /* End of Outputs for SubSystem: '<S429>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S429>/OldValue' incorporates:
     *  ActionPort: '<S473>/Action Port'
     */
    rtb_Merge_mw2 = Mooventure2016_Rev5_B.s194_AgeCount;

    /* S-Function (motohawk_sfun_code_cover): '<S473>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(191);
    }

    /* End of Outputs for SubSystem: '<S429>/OldValue' */
  }

  /* End of If: '<S429>/If' */

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

  /* S-Function (motohawk_sfun_read_canmsg): '<S194>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3951p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3951p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s194_AgeCount_j + 1) >
        Mooventure2016_Rev5_B.s194_AgeCount_j)
      Mooventure2016_Rev5_B.s194_AgeCount_j++;
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
      Mooventure2016_Rev5_B.s194_IPT_DCErrorCategory = (real_T) tmp0;
      Mooventure2016_Rev5_B.s194_IPT_DCLVOn = (real_T) tmp1;
      Mooventure2016_Rev5_B.s194_IPT_DCLVGeneralError = (real_T) tmp2;
      Mooventure2016_Rev5_B.s194_IPT_DCLVMaxPower = ((real_T) tmp3) * ((real_T)
        20);
      Mooventure2016_Rev5_B.s194_IPT_DCLVBusCurrent = (real_T) tmp4;
      Mooventure2016_Rev5_B.s194_IPT_DCLVBusVoltage = ((real_T) tmp5) / ((real_T)
        10);
      Mooventure2016_Rev5_B.s194_IPT_DCHVBusCurrent = ((real_T) tmp6) / ((real_T)
        10);
      Mooventure2016_Rev5_B.s194_AgeCount_j = 0;
    }
  }

  /* If: '<S435>/If' incorporates:
   *  Inport: '<S484>/In1'
   *  Inport: '<S485>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S435>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S435>/override_enable'
   */
  if ((Age_Count_624_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S435>/NewValue' incorporates:
     *  ActionPort: '<S484>/Action Port'
     */
    rtb_Merge_mw2 = (Age_Count_624_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S484>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs25/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(202);
    }

    /* End of Outputs for SubSystem: '<S435>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S435>/OldValue' incorporates:
     *  ActionPort: '<S485>/Action Port'
     */
    rtb_Merge_mw2 = Mooventure2016_Rev5_B.s194_AgeCount_j;

    /* S-Function (motohawk_sfun_code_cover): '<S485>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs25/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(203);
    }

    /* End of Outputs for SubSystem: '<S435>/OldValue' */
  }

  /* End of If: '<S435>/If' */

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

  /* If: '<S361>/If' incorporates:
   *  Inport: '<S376>/In1'
   *  Inport: '<S377>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S361>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S361>/override_enable'
   */
  if ((Eaton_Charger_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S361>/NewValue' incorporates:
     *  ActionPort: '<S376>/Action Port'
     */
    rtb_Merge_mw2 = (Eaton_Charger_AgeCount_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S376>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(134);
    }

    /* End of Outputs for SubSystem: '<S361>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S361>/OldValue' incorporates:
     *  ActionPort: '<S377>/Action Port'
     */
    rtb_Merge_mw2 = Mooventure2016_Rev5_B.s192_AgeCount;

    /* S-Function (motohawk_sfun_code_cover): '<S377>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(135);
    }

    /* End of Outputs for SubSystem: '<S361>/OldValue' */
  }

  /* End of If: '<S361>/If' */

  /* RelationalOperator: '<S82>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S82>/motohawk_calibration4'
   */
  rtb_Compare_nd = ((real_T)rtb_Merge_mw2 >=
                    (Eaton_Charger_AgeCount_Fault_DataStore()));

  /* RelationalOperator: '<S192>/Relational Operator' incorporates:
   *  Constant: '<S192>/Constant'
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

  /* If: '<S322>/If' incorporates:
   *  Inport: '<S338>/In1'
   *  Inport: '<S339>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S322>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S322>/override_enable'
   */
  if ((Brakes_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S322>/NewValue' incorporates:
     *  ActionPort: '<S338>/Action Port'
     */
    rtb_Merge_mw2 = (Brakes_AgeCount_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S338>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(108);
    }

    /* End of Outputs for SubSystem: '<S322>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S322>/OldValue' incorporates:
     *  ActionPort: '<S339>/Action Port'
     */
    rtb_Merge_mw2 = Mooventure2016_Rev5_B.s191_AgeCount_j;

    /* S-Function (motohawk_sfun_code_cover): '<S339>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(109);
    }

    /* End of Outputs for SubSystem: '<S322>/OldValue' */
  }

  /* End of If: '<S322>/If' */

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

  /* If: '<S325>/If' incorporates:
   *  Inport: '<S344>/In1'
   *  Inport: '<S345>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S325>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S325>/override_enable'
   */
  if ((Transmission_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S325>/NewValue' incorporates:
     *  ActionPort: '<S344>/Action Port'
     */
    rtb_Merge_nu = (Transmission_AgeCount_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S344>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(114);
    }

    /* End of Outputs for SubSystem: '<S325>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S325>/OldValue' incorporates:
     *  ActionPort: '<S345>/Action Port'
     */
    rtb_Merge_nu = Mooventure2016_Rev5_B.s191_AgeCount;

    /* S-Function (motohawk_sfun_code_cover): '<S345>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(115);
    }

    /* End of Outputs for SubSystem: '<S325>/OldValue' */
  }

  /* End of If: '<S325>/If' */

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

  /* S-Function (motohawk_sfun_read_canmsg): '<S185>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3024p0002_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3024p0002_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s185_AgeCount_b + 1) >
        Mooventure2016_Rev5_B.s185_AgeCount_b)
      Mooventure2016_Rev5_B.s185_AgeCount_b++;
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint8_T tmp2 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[4])) ;
      Mooventure2016_Rev5_B.s185_LF_Wheel_Rolling_Count = (real_T) tmp0;
      Mooventure2016_Rev5_B.s185_RT_Wheel_Rolling_Count = (real_T) tmp1;
      Mooventure2016_Rev5_B.s185_Wheel_Rolling_Timestamp = (real_T) tmp2;
      Mooventure2016_Rev5_B.s185_AgeCount_b = 0;
    }
  }

  /* If: '<S200>/If' incorporates:
   *  Inport: '<S215>/In1'
   *  Inport: '<S216>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S200>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S200>/override_enable'
   */
  if ((ABS_217_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S200>/NewValue' incorporates:
     *  ActionPort: '<S215>/Action Port'
     */
    rtb_Merge_mw2 = (ABS_217_AgeCount_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S215>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(50);
    }

    /* End of Outputs for SubSystem: '<S200>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S200>/OldValue' incorporates:
     *  ActionPort: '<S216>/Action Port'
     */
    rtb_Merge_mw2 = Mooventure2016_Rev5_B.s185_AgeCount_b;

    /* S-Function (motohawk_sfun_code_cover): '<S216>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(51);
    }

    /* End of Outputs for SubSystem: '<S200>/OldValue' */
  }

  /* End of If: '<S200>/If' */

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

  /* If: '<S203>/If' incorporates:
   *  Inport: '<S221>/In1'
   *  Inport: '<S222>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S203>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S203>/override_enable'
   */
  if ((ABS_4B0_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S203>/NewValue' incorporates:
     *  ActionPort: '<S221>/Action Port'
     */
    rtb_Merge_mw2 = (ABS_4B0_AgeCount_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S221>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(56);
    }

    /* End of Outputs for SubSystem: '<S203>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S203>/OldValue' incorporates:
     *  ActionPort: '<S222>/Action Port'
     */
    rtb_Merge_mw2 = Mooventure2016_Rev5_B.s185_AgeCount_n;

    /* S-Function (motohawk_sfun_code_cover): '<S222>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(57);
    }

    /* End of Outputs for SubSystem: '<S203>/OldValue' */
  }

  /* End of If: '<S203>/If' */

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

  /* If: '<S328>/If' incorporates:
   *  Inport: '<S350>/In1'
   *  Inport: '<S351>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S328>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S328>/override_enable'
   */
  if ((Throttle_Position_Raw_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S328>/NewValue' incorporates:
     *  ActionPort: '<S350>/Action Port'
     */
    rtb_Merge_jk = (Throttle_Position_Raw_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S350>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(120);
    }

    /* End of Outputs for SubSystem: '<S328>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S328>/OldValue' incorporates:
     *  ActionPort: '<S351>/Action Port'
     */
    rtb_Merge_jk = Mooventure2016_Rev5_B.s232_DataTypeConversion;

    /* S-Function (motohawk_sfun_code_cover): '<S351>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(121);
    }

    /* End of Outputs for SubSystem: '<S328>/OldValue' */
  }

  /* End of If: '<S328>/If' */

  /* S-Function Block: <S191>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (Throttle_Position_PreIn_DataStore()) = rtb_Merge_jk;
    (Throttle_Position_PreIdx_DataStore()) = TablePrelookup_real_T(rtb_Merge_jk,
      (Throttle_Position_PreIdxArr_DataStore()), 11,
      (Throttle_Position_PreIdx_DataStore()));
    rtb_motohawk_prelookup1 = (Throttle_Position_PreIdx_DataStore());
  }

  /* S-Function Block: <S191>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_Switch_pn = TableInterpolation1D_real_T(rtb_motohawk_prelookup1, (real_T
      *) ((Throttle_Position_TblTbl_DataStore())), 11);
    (Throttle_Position_Tbl_DataStore()) = rtb_Switch_pn;
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S187>/Read CAN Message6' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3233p0005_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3233p0005_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint32_T tmp0 = 0;
      uint8_T tmp1 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp0))[2] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp0))[3] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[4])) ;
      Mooventure2016_Rev5_B.s187_LifeTimeAmpHoursOut = ((real_T) tmp0) /
        ((real_T) 10);
      Mooventure2016_Rev5_B.s187_LTAHI_RollingCounter = (real_T) tmp1;
    }
  }

  /* If: '<S196>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S196>/override_enable'
   */
  if ((RT_Wheel_Rolling_Count_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S196>/NewValue' incorporates:
     *  ActionPort: '<S207>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S207>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(42);
    }

    /* End of Outputs for SubSystem: '<S196>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S196>/OldValue' incorporates:
     *  ActionPort: '<S208>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S208>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(43);
    }

    /* End of Outputs for SubSystem: '<S196>/OldValue' */
  }

  /* End of If: '<S196>/If' */

  /* If: '<S199>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S199>/override_enable'
   */
  if ((Wheel_Rolling_Timestamp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S199>/NewValue' incorporates:
     *  ActionPort: '<S213>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S213>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(48);
    }

    /* End of Outputs for SubSystem: '<S199>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S199>/OldValue' incorporates:
     *  ActionPort: '<S214>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S214>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(49);
    }

    /* End of Outputs for SubSystem: '<S199>/OldValue' */
  }

  /* End of If: '<S199>/If' */

  /* If: '<S202>/If' incorporates:
   *  Inport: '<S219>/In1'
   *  Inport: '<S220>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S202>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S202>/override_enable'
   */
  if ((Rear_left_whl_speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S202>/NewValue' incorporates:
     *  ActionPort: '<S219>/Action Port'
     */
    rtb_Merge_bg = (Rear_left_whl_speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S219>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(54);
    }

    /* End of Outputs for SubSystem: '<S202>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S202>/OldValue' incorporates:
     *  ActionPort: '<S220>/Action Port'
     */
    rtb_Merge_bg = Mooventure2016_Rev5_B.s185_Rear_left_whl_speed;

    /* S-Function (motohawk_sfun_code_cover): '<S220>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(55);
    }

    /* End of Outputs for SubSystem: '<S202>/OldValue' */
  }

  /* End of If: '<S202>/If' */

  /* If: '<S204>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S204>/override_enable'
   */
  if ((LF_Wheel_Rolling_Count_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S204>/NewValue' incorporates:
     *  ActionPort: '<S223>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S223>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(58);
    }

    /* End of Outputs for SubSystem: '<S204>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S204>/OldValue' incorporates:
     *  ActionPort: '<S224>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S224>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(59);
    }

    /* End of Outputs for SubSystem: '<S204>/OldValue' */
  }

  /* End of If: '<S204>/If' */

  /* If: '<S206>/If' incorporates:
   *  Inport: '<S227>/In1'
   *  Inport: '<S228>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S206>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S206>/override_enable'
   */
  if ((Rear_right_whl_speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S206>/NewValue' incorporates:
     *  ActionPort: '<S227>/Action Port'
     */
    rtb_Merge_ko = (Rear_right_whl_speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S227>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(62);
    }

    /* End of Outputs for SubSystem: '<S206>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S206>/OldValue' incorporates:
     *  ActionPort: '<S228>/Action Port'
     */
    rtb_Merge_ko = Mooventure2016_Rev5_B.s185_Rear_right_whl_speed;

    /* S-Function (motohawk_sfun_code_cover): '<S228>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(63);
    }

    /* End of Outputs for SubSystem: '<S206>/OldValue' */
  }

  /* End of If: '<S206>/If' */

  /* If: '<S257>/If' incorporates:
   *  Inport: '<S266>/In1'
   *  Inport: '<S267>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S257>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S257>/override_enable'
   */
  if ((Batt_Coolant_Temp_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S257>/NewValue' incorporates:
     *  ActionPort: '<S266>/Action Port'
     */
    Mooventure2016_Rev5_B.s257_Merge = (Batt_Coolant_Temp_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S266>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(76);
    }

    /* End of Outputs for SubSystem: '<S257>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S257>/OldValue' incorporates:
     *  ActionPort: '<S267>/Action Port'
     */
    Mooventure2016_Rev5_B.s257_Merge =
      Mooventure2016_Rev5_B.s187_CoolantTemperature;

    /* S-Function (motohawk_sfun_code_cover): '<S267>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(77);
    }

    /* End of Outputs for SubSystem: '<S257>/OldValue' */
  }

  /* End of If: '<S257>/If' */

  /* If: '<S294>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S294>/override_enable'
   */
  if ((Cruise_Control_Raw_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S294>/NewValue' incorporates:
     *  ActionPort: '<S306>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S306>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(92);
    }

    /* End of Outputs for SubSystem: '<S294>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S294>/OldValue' incorporates:
     *  ActionPort: '<S307>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S307>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(93);
    }

    /* End of Outputs for SubSystem: '<S294>/OldValue' */
  }

  /* End of If: '<S294>/If' */

  /* RelationalOperator: '<S289>/Compare' incorporates:
   *  Constant: '<S289>/Constant'
   */
  rtb_Compare_nd = (Mooventure2016_Rev5_B.s287_Out == 2.0);

  /* S-Function Block: <S300>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s300_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_p1 = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S300>/Switch' incorporates:
   *  Constant: '<S300>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S300>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S300>/motohawk_delta_time'
   *  Sum: '<S300>/Sum'
   */
  if (rtb_Compare_nd) {
    rtb_Switch_pn = rtb_motohawk_delta_time_p1 + ButtonDelay2_DataStore();
  } else {
    rtb_Switch_pn = 0.0;
  }

  /* End of Switch: '<S300>/Switch' */

  /* Logic: '<S283>/Logical Operator' incorporates:
   *  RelationalOperator: '<S283>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration7'
   */
  Mooventure2016_Rev5_B.s283_LogicalOperator = ((rtb_Compare_nd &&
    (rtb_Switch_pn >= (Delay_DataStore()))));

  /* If: '<S295>/If' incorporates:
   *  Inport: '<S308>/In1'
   *  Inport: '<S309>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S295>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S295>/override_enable'
   */
  if ((Cruise_Control_SetM_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S295>/NewValue' incorporates:
     *  ActionPort: '<S308>/Action Port'
     */
    rtb_LogicalOperator5_c = (Cruise_Control_SetM_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S308>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(94);
    }

    /* End of Outputs for SubSystem: '<S295>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S295>/OldValue' incorporates:
     *  ActionPort: '<S309>/Action Port'
     */
    rtb_LogicalOperator5_c = Mooventure2016_Rev5_B.s283_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S309>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(95);
    }

    /* End of Outputs for SubSystem: '<S295>/OldValue' */
  }

  /* End of If: '<S295>/If' */

  /* RelationalOperator: '<S290>/Compare' incorporates:
   *  Constant: '<S290>/Constant'
   */
  rtb_Compare_nd = (Mooventure2016_Rev5_B.s287_Out == 3.0);

  /* S-Function Block: <S301>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s301_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_cz = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S301>/Switch' incorporates:
   *  Constant: '<S301>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S301>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S301>/motohawk_delta_time'
   *  Sum: '<S301>/Sum'
   */
  if (rtb_Compare_nd) {
    rtb_DataTypeConversion3 = rtb_motohawk_delta_time_cz +
      ButtonDelay3_DataStore();
  } else {
    rtb_DataTypeConversion3 = 0.0;
  }

  /* End of Switch: '<S301>/Switch' */

  /* Logic: '<S284>/Logical Operator' incorporates:
   *  RelationalOperator: '<S284>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration7'
   */
  Mooventure2016_Rev5_B.s284_LogicalOperator = ((rtb_Compare_nd &&
    (rtb_DataTypeConversion3 >= (Delay_DataStore()))));

  /* If: '<S296>/If' incorporates:
   *  Inport: '<S310>/In1'
   *  Inport: '<S311>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S296>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S296>/override_enable'
   */
  if ((Cruise_Control_SetP_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S296>/NewValue' incorporates:
     *  ActionPort: '<S310>/Action Port'
     */
    rtb_Merge_oi = (Cruise_Control_SetP_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S310>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(96);
    }

    /* End of Outputs for SubSystem: '<S296>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S296>/OldValue' incorporates:
     *  ActionPort: '<S311>/Action Port'
     */
    rtb_Merge_oi = Mooventure2016_Rev5_B.s284_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S311>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(97);
    }

    /* End of Outputs for SubSystem: '<S296>/OldValue' */
  }

  /* End of If: '<S296>/If' */

  /* RelationalOperator: '<S291>/Compare' incorporates:
   *  Constant: '<S291>/Constant'
   */
  rtb_Compare_nd = (Mooventure2016_Rev5_B.s287_Out == 4.0);

  /* S-Function Block: <S302>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s302_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_f = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S302>/Switch' incorporates:
   *  Constant: '<S302>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S302>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S302>/motohawk_delta_time'
   *  Sum: '<S302>/Sum'
   */
  if (rtb_Compare_nd) {
    rtb_DataTypeConversion4 = rtb_motohawk_delta_time_f + ButtonDelay4_DataStore
      ();
  } else {
    rtb_DataTypeConversion4 = 0.0;
  }

  /* End of Switch: '<S302>/Switch' */

  /* Logic: '<S285>/Logical Operator' incorporates:
   *  RelationalOperator: '<S285>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration7'
   */
  Mooventure2016_Rev5_B.s285_LogicalOperator = ((rtb_Compare_nd &&
    (rtb_DataTypeConversion4 >= (Delay_DataStore()))));

  /* If: '<S297>/If' incorporates:
   *  Inport: '<S312>/In1'
   *  Inport: '<S313>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S297>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S297>/override_enable'
   */
  if ((Cruise_Control_RSM_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S297>/NewValue' incorporates:
     *  ActionPort: '<S312>/Action Port'
     */
    rtb_Merge_eh = (Cruise_Control_RSM_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S312>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(98);
    }

    /* End of Outputs for SubSystem: '<S297>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S297>/OldValue' incorporates:
     *  ActionPort: '<S313>/Action Port'
     */
    rtb_Merge_eh = Mooventure2016_Rev5_B.s285_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S313>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Cruise Control/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(99);
    }

    /* End of Outputs for SubSystem: '<S297>/OldValue' */
  }

  /* End of If: '<S297>/If' */

  /* If: '<S321>/If' incorporates:
   *  Inport: '<S336>/In1'
   *  Inport: '<S337>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S321>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S321>/override_enable'
   */
  if ((Passenger_1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S321>/NewValue' incorporates:
     *  ActionPort: '<S336>/Action Port'
     */
    rtb_UnitDelay_o = (Passenger_1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S336>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(106);
    }

    /* End of Outputs for SubSystem: '<S321>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S321>/OldValue' incorporates:
     *  ActionPort: '<S337>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s191_PASSENGER_1;

    /* S-Function (motohawk_sfun_code_cover): '<S337>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(107);
    }

    /* End of Outputs for SubSystem: '<S321>/OldValue' */
  }

  /* End of If: '<S321>/If' */

  /* If: '<S323>/If' incorporates:
   *  Inport: '<S340>/In1'
   *  Inport: '<S341>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S323>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S323>/override_enable'
   */
  if ((Passenger_10_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S323>/NewValue' incorporates:
     *  ActionPort: '<S340>/Action Port'
     */
    rtb_UnitDelay_m = (Passenger_10_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S340>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs13/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(110);
    }

    /* End of Outputs for SubSystem: '<S323>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S323>/OldValue' incorporates:
     *  ActionPort: '<S341>/Action Port'
     */
    rtb_UnitDelay_m = Mooventure2016_Rev5_B.s191_PASSENGER_10;

    /* S-Function (motohawk_sfun_code_cover): '<S341>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs13/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(111);
    }

    /* End of Outputs for SubSystem: '<S323>/OldValue' */
  }

  /* End of If: '<S323>/If' */

  /* MATLAB Function Block: '<S191>/Embedded MATLAB Function2' */

  /* MATLAB Function 'Foreground/Inputs/Driver Inputs/Embedded MATLAB Function2': '<S317>:1' */
  /* '<S317>:1:3' */
  Mooventure2016_Rev5_B.s317_passengerTemp = rtb_UnitDelay_m * 10.0 +
    rtb_UnitDelay_o;

  /* If: '<S324>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S324>/override_enable'
   */
  if ((Passenger_Temp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S324>/NewValue' incorporates:
     *  ActionPort: '<S342>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S342>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs14/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(112);
    }

    /* End of Outputs for SubSystem: '<S324>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S324>/OldValue' incorporates:
     *  ActionPort: '<S343>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S343>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs14/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(113);
    }

    /* End of Outputs for SubSystem: '<S324>/OldValue' */
  }

  /* End of If: '<S324>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S191>/Read CAN Message4' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3682p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3682p0001_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint8_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[4])) ;
      Mooventure2016_Rev5_B.s191_Button_Pressed = (real_T) tmp0;
    }
  }

  /* If: '<S329>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S329>/override_enable'
   */
  if ((Button_Pressed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S329>/NewValue' incorporates:
     *  ActionPort: '<S352>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S352>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(122);
    }

    /* End of Outputs for SubSystem: '<S329>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S329>/OldValue' incorporates:
     *  ActionPort: '<S353>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S353>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Driver Inputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(123);
    }

    /* End of Outputs for SubSystem: '<S329>/OldValue' */
  }

  /* End of If: '<S329>/If' */

  /* If: '<S359>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S359>/override_enable'
   */
  if ((Eaton_Charger_Message_Counter_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S359>/NewValue' incorporates:
     *  ActionPort: '<S372>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S372>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(130);
    }

    /* End of Outputs for SubSystem: '<S359>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S359>/OldValue' incorporates:
     *  ActionPort: '<S373>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S373>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(131);
    }

    /* End of Outputs for SubSystem: '<S359>/OldValue' */
  }

  /* End of If: '<S359>/If' */

  /* If: '<S360>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S360>/override_enable'
   */
  if ((Eaton_Charger_Message_Checksum_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S360>/NewValue' incorporates:
     *  ActionPort: '<S374>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S374>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(132);
    }

    /* End of Outputs for SubSystem: '<S360>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S360>/OldValue' incorporates:
     *  ActionPort: '<S375>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S375>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(133);
    }

    /* End of Outputs for SubSystem: '<S360>/OldValue' */
  }

  /* End of If: '<S360>/If' */

  /* If: '<S365>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S365>/override_enable'
   */
  if ((Output_Current_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S365>/NewValue' incorporates:
     *  ActionPort: '<S384>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S384>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(142);
    }

    /* End of Outputs for SubSystem: '<S365>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S365>/OldValue' incorporates:
     *  ActionPort: '<S385>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S385>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(143);
    }

    /* End of Outputs for SubSystem: '<S365>/OldValue' */
  }

  /* End of If: '<S365>/If' */

  /* If: '<S366>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S366>/override_enable'
   */
  if ((Output_Voltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S366>/NewValue' incorporates:
     *  ActionPort: '<S386>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S386>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(144);
    }

    /* End of Outputs for SubSystem: '<S366>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S366>/OldValue' incorporates:
     *  ActionPort: '<S387>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S387>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(145);
    }

    /* End of Outputs for SubSystem: '<S366>/OldValue' */
  }

  /* End of If: '<S366>/If' */

  /* If: '<S394>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S394>/override_enable'
   */
  if ((Oil_Pressure_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S394>/NewValue' incorporates:
     *  ActionPort: '<S402>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S402>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(152);
    }

    /* End of Outputs for SubSystem: '<S394>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S394>/OldValue' incorporates:
     *  ActionPort: '<S403>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S403>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(153);
    }

    /* End of Outputs for SubSystem: '<S394>/OldValue' */
  }

  /* End of If: '<S394>/If' */

  /* If: '<S397>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S397>/override_enable'
   */
  if ((Engine_Crank_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S397>/NewValue' incorporates:
     *  ActionPort: '<S408>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S408>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(158);
    }

    /* End of Outputs for SubSystem: '<S397>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S397>/OldValue' incorporates:
     *  ActionPort: '<S409>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S409>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(159);
    }

    /* End of Outputs for SubSystem: '<S397>/OldValue' */
  }

  /* End of If: '<S397>/If' */

  /* If: '<S399>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S399>/override_enable'
   */
  if ((Load_On_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S399>/NewValue' incorporates:
     *  ActionPort: '<S412>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S412>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(162);
    }

    /* End of Outputs for SubSystem: '<S399>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S399>/OldValue' incorporates:
     *  ActionPort: '<S413>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S413>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(163);
    }

    /* End of Outputs for SubSystem: '<S399>/OldValue' */
  }

  /* End of If: '<S399>/If' */

  /* If: '<S418>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S418>/override_enable'
   */
  if ((IPT_Current_Used_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S418>/NewValue' incorporates:
     *  ActionPort: '<S450>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S450>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(168);
    }

    /* End of Outputs for SubSystem: '<S418>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S418>/OldValue' incorporates:
     *  ActionPort: '<S451>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S451>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(169);
    }

    /* End of Outputs for SubSystem: '<S418>/OldValue' */
  }

  /* End of If: '<S418>/If' */

  /* If: '<S419>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S419>/override_enable'
   */
  if ((IPT_Motor_Temperature_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S419>/NewValue' incorporates:
     *  ActionPort: '<S452>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S452>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(170);
    }

    /* End of Outputs for SubSystem: '<S419>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S419>/OldValue' incorporates:
     *  ActionPort: '<S453>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S453>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(171);
    }

    /* End of Outputs for SubSystem: '<S419>/OldValue' */
  }

  /* End of If: '<S419>/If' */

  /* If: '<S420>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S420>/override_enable'
   */
  if ((IPT_Max_Torque_Avail_Gen_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S420>/NewValue' incorporates:
     *  ActionPort: '<S454>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S454>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(172);
    }

    /* End of Outputs for SubSystem: '<S420>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S420>/OldValue' incorporates:
     *  ActionPort: '<S455>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S455>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(173);
    }

    /* End of Outputs for SubSystem: '<S420>/OldValue' */
  }

  /* End of If: '<S420>/If' */

  /* If: '<S421>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S421>/override_enable'
   */
  if ((IPT_Max_Torque_Avail_Motor_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S421>/NewValue' incorporates:
     *  ActionPort: '<S456>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S456>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(174);
    }

    /* End of Outputs for SubSystem: '<S421>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S421>/OldValue' incorporates:
     *  ActionPort: '<S457>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S457>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(175);
    }

    /* End of Outputs for SubSystem: '<S421>/OldValue' */
  }

  /* End of If: '<S421>/If' */

  /* If: '<S423>/If' incorporates:
   *  Inport: '<S460>/In1'
   *  Inport: '<S461>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S423>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S423>/override_enable'
   */
  if ((IPT_Error_Category_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S423>/NewValue' incorporates:
     *  ActionPort: '<S460>/Action Port'
     */
    rtb_UnitDelay_o = (IPT_Error_Category_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S460>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs14/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(178);
    }

    /* End of Outputs for SubSystem: '<S423>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S423>/OldValue' incorporates:
     *  ActionPort: '<S461>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s194_IPT_ErrorCategory;

    /* S-Function (motohawk_sfun_code_cover): '<S461>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs14/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(179);
    }

    /* End of Outputs for SubSystem: '<S423>/OldValue' */
  }

  /* End of If: '<S423>/If' */

  /* If: '<S424>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S424>/override_enable'
   */
  if ((IPT_IPTReady_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S424>/NewValue' incorporates:
     *  ActionPort: '<S462>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S462>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs15/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(180);
    }

    /* End of Outputs for SubSystem: '<S424>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S424>/OldValue' incorporates:
     *  ActionPort: '<S463>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S463>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs15/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(181);
    }

    /* End of Outputs for SubSystem: '<S424>/OldValue' */
  }

  /* End of If: '<S424>/If' */

  /* If: '<S425>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S425>/override_enable'
   */
  if ((IPT_IPTAwake_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S425>/NewValue' incorporates:
     *  ActionPort: '<S464>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S464>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs16/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(182);
    }

    /* End of Outputs for SubSystem: '<S425>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S425>/OldValue' incorporates:
     *  ActionPort: '<S465>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S465>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs16/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(183);
    }

    /* End of Outputs for SubSystem: '<S425>/OldValue' */
  }

  /* End of If: '<S425>/If' */

  /* If: '<S427>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S427>/override_enable'
   */
  if ((IPT_Max_Waste_Available_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S427>/NewValue' incorporates:
     *  ActionPort: '<S468>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S468>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs18/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(186);
    }

    /* End of Outputs for SubSystem: '<S427>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S427>/OldValue' incorporates:
     *  ActionPort: '<S469>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S469>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs18/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(187);
    }

    /* End of Outputs for SubSystem: '<S427>/OldValue' */
  }

  /* End of If: '<S427>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S194>/Read CAN Message4' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3953p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3953p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s194_AgeCount_o + 1) >
        Mooventure2016_Rev5_B.s194_AgeCount_o)
      Mooventure2016_Rev5_B.s194_AgeCount_o++;
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
      Mooventure2016_Rev5_B.s194_Heading = ((real_T) tmp0) * ((real_T) 2);
      Mooventure2016_Rev5_B.s194_Speed = (real_T) tmp1;
      Mooventure2016_Rev5_B.s194_Altitude = ((real_T) tmp2) + ((real_T) -500);
      Mooventure2016_Rev5_B.s194_GPSQuality = (real_T) tmp3;
      Mooventure2016_Rev5_B.s194_DateTime = (real_T) tmp4;
      Mooventure2016_Rev5_B.s194_AgeCount_o = 0;
    }
  }

  /* If: '<S428>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S428>/override_enable'
   */
  if ((Age_Count_590_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S428>/NewValue' incorporates:
     *  ActionPort: '<S470>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S470>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs19/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(188);
    }

    /* End of Outputs for SubSystem: '<S428>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S428>/OldValue' incorporates:
     *  ActionPort: '<S471>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S471>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs19/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(189);
    }

    /* End of Outputs for SubSystem: '<S428>/OldValue' */
  }

  /* End of If: '<S428>/If' */

  /* If: '<S430>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S430>/override_enable'
   */
  if ((Heading_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S430>/NewValue' incorporates:
     *  ActionPort: '<S474>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S474>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs20/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(192);
    }

    /* End of Outputs for SubSystem: '<S430>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S430>/OldValue' incorporates:
     *  ActionPort: '<S475>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S475>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs20/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(193);
    }

    /* End of Outputs for SubSystem: '<S430>/OldValue' */
  }

  /* End of If: '<S430>/If' */

  /* If: '<S431>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S431>/override_enable'
   */
  if ((Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S431>/NewValue' incorporates:
     *  ActionPort: '<S476>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S476>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs21/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(194);
    }

    /* End of Outputs for SubSystem: '<S431>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S431>/OldValue' incorporates:
     *  ActionPort: '<S477>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S477>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs21/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(195);
    }

    /* End of Outputs for SubSystem: '<S431>/OldValue' */
  }

  /* End of If: '<S431>/If' */

  /* If: '<S432>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S432>/override_enable'
   */
  if ((Altitude_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S432>/NewValue' incorporates:
     *  ActionPort: '<S478>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S478>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs22/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(196);
    }

    /* End of Outputs for SubSystem: '<S432>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S432>/OldValue' incorporates:
     *  ActionPort: '<S479>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S479>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs22/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(197);
    }

    /* End of Outputs for SubSystem: '<S432>/OldValue' */
  }

  /* End of If: '<S432>/If' */

  /* If: '<S433>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S433>/override_enable'
   */
  if ((GPSQuality_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S433>/NewValue' incorporates:
     *  ActionPort: '<S480>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S480>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs23/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(198);
    }

    /* End of Outputs for SubSystem: '<S433>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S433>/OldValue' incorporates:
     *  ActionPort: '<S481>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S481>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs23/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(199);
    }

    /* End of Outputs for SubSystem: '<S433>/OldValue' */
  }

  /* End of If: '<S433>/If' */

  /* If: '<S434>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S434>/override_enable'
   */
  if ((DateTime_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S434>/NewValue' incorporates:
     *  ActionPort: '<S482>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S482>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs24/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(200);
    }

    /* End of Outputs for SubSystem: '<S434>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S434>/OldValue' incorporates:
     *  ActionPort: '<S483>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S483>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs24/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(201);
    }

    /* End of Outputs for SubSystem: '<S434>/OldValue' */
  }

  /* End of If: '<S434>/If' */

  /* If: '<S436>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S436>/override_enable'
   */
  if ((IPT_DC_Error_Category_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S436>/NewValue' incorporates:
     *  ActionPort: '<S486>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S486>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs26/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(204);
    }

    /* End of Outputs for SubSystem: '<S436>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S436>/OldValue' incorporates:
     *  ActionPort: '<S487>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S487>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs26/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(205);
    }

    /* End of Outputs for SubSystem: '<S436>/OldValue' */
  }

  /* End of If: '<S436>/If' */

  /* If: '<S437>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S437>/override_enable'
   */
  if ((IPT_DCLV_On_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S437>/NewValue' incorporates:
     *  ActionPort: '<S488>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S488>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs27/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(206);
    }

    /* End of Outputs for SubSystem: '<S437>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S437>/OldValue' incorporates:
     *  ActionPort: '<S489>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S489>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs27/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(207);
    }

    /* End of Outputs for SubSystem: '<S437>/OldValue' */
  }

  /* End of If: '<S437>/If' */

  /* If: '<S438>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S438>/override_enable'
   */
  if ((IPT_DCLV_General_Error_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S438>/NewValue' incorporates:
     *  ActionPort: '<S490>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S490>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs28/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(208);
    }

    /* End of Outputs for SubSystem: '<S438>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S438>/OldValue' incorporates:
     *  ActionPort: '<S491>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S491>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs28/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(209);
    }

    /* End of Outputs for SubSystem: '<S438>/OldValue' */
  }

  /* End of If: '<S438>/If' */

  /* If: '<S439>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S439>/override_enable'
   */
  if ((IPT_DCLV_Max_Power_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S439>/NewValue' incorporates:
     *  ActionPort: '<S492>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S492>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs29/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(210);
    }

    /* End of Outputs for SubSystem: '<S439>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S439>/OldValue' incorporates:
     *  ActionPort: '<S493>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S493>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs29/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(211);
    }

    /* End of Outputs for SubSystem: '<S439>/OldValue' */
  }

  /* End of If: '<S439>/If' */

  /* If: '<S440>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S440>/override_enable'
   */
  if ((IPT_Current_Request_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S440>/NewValue' incorporates:
     *  ActionPort: '<S494>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S494>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(212);
    }

    /* End of Outputs for SubSystem: '<S440>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S440>/OldValue' incorporates:
     *  ActionPort: '<S495>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S495>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(213);
    }

    /* End of Outputs for SubSystem: '<S440>/OldValue' */
  }

  /* End of If: '<S440>/If' */

  /* If: '<S441>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S441>/override_enable'
   */
  if ((IPT_DCLV_Bus_Current_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S441>/NewValue' incorporates:
     *  ActionPort: '<S496>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S496>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs30/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(214);
    }

    /* End of Outputs for SubSystem: '<S441>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S441>/OldValue' incorporates:
     *  ActionPort: '<S497>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S497>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs30/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(215);
    }

    /* End of Outputs for SubSystem: '<S441>/OldValue' */
  }

  /* End of If: '<S441>/If' */

  /* If: '<S442>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S442>/override_enable'
   */
  if ((IPT_DCLV_Bus_Voltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S442>/NewValue' incorporates:
     *  ActionPort: '<S498>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S498>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs31/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(216);
    }

    /* End of Outputs for SubSystem: '<S442>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S442>/OldValue' incorporates:
     *  ActionPort: '<S499>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S499>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs31/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(217);
    }

    /* End of Outputs for SubSystem: '<S442>/OldValue' */
  }

  /* End of If: '<S442>/If' */

  /* If: '<S443>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S443>/override_enable'
   */
  if ((IPT_DCHV_Bus_Current_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S443>/NewValue' incorporates:
     *  ActionPort: '<S500>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S500>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs32/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(218);
    }

    /* End of Outputs for SubSystem: '<S443>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S443>/OldValue' incorporates:
     *  ActionPort: '<S501>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S501>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs32/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(219);
    }

    /* End of Outputs for SubSystem: '<S443>/OldValue' */
  }

  /* End of If: '<S443>/If' */

  /* If: '<S446>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S446>/override_enable'
   */
  if ((IPT_Current_Limit_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S446>/NewValue' incorporates:
     *  ActionPort: '<S506>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S506>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(224);
    }

    /* End of Outputs for SubSystem: '<S446>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S446>/OldValue' incorporates:
     *  ActionPort: '<S507>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S507>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(225);
    }

    /* End of Outputs for SubSystem: '<S446>/OldValue' */
  }

  /* End of If: '<S446>/If' */

  /* If: '<S447>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S447>/override_enable'
   */
  if ((IPT_Antishudder_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S447>/NewValue' incorporates:
     *  ActionPort: '<S508>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S508>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(226);
    }

    /* End of Outputs for SubSystem: '<S447>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S447>/OldValue' incorporates:
     *  ActionPort: '<S509>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S509>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(227);
    }

    /* End of Outputs for SubSystem: '<S447>/OldValue' */
  }

  /* End of If: '<S447>/If' */

  /* If: '<S514>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S514>/override_enable'
   */
  if ((STR_WHL_ANGLE_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S514>/NewValue' incorporates:
     *  ActionPort: '<S518>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S518>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(232);
    }

    /* End of Outputs for SubSystem: '<S514>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S514>/OldValue' incorporates:
     *  ActionPort: '<S519>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S519>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(233);
    }

    /* End of Outputs for SubSystem: '<S514>/OldValue' */
  }

  /* End of If: '<S514>/If' */

  /* If: '<S515>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S515>/override_enable'
   */
  if ((RELATIVE_STR_WHL_ANGLE_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S515>/NewValue' incorporates:
     *  ActionPort: '<S520>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S520>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(234);
    }

    /* End of Outputs for SubSystem: '<S515>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S515>/OldValue' incorporates:
     *  ActionPort: '<S521>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S521>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(235);
    }

    /* End of Outputs for SubSystem: '<S515>/OldValue' */
  }

  /* End of If: '<S515>/If' */

  /* If: '<S517>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S517>/override_enable'
   */
  if ((STR_WHL_ANGLE_CNTR_FND_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S517>/NewValue' incorporates:
     *  ActionPort: '<S524>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S524>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(238);
    }

    /* End of Outputs for SubSystem: '<S517>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S517>/OldValue' incorporates:
     *  ActionPort: '<S525>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S525>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(239);
    }

    /* End of Outputs for SubSystem: '<S517>/OldValue' */
  }

  /* End of If: '<S517>/If' */

  /* RelationalOperator: '<S98>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_a = ((Mooventure2016_Rev5_B.s191_Brake_Position_l >=
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
  rtb_UnitDelay_m = fabs(Mooventure2016_Rev5_B.s191_Brake_Position_l -
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
  rtb_RelationalOperator2_da = ((Mooventure2016_Rev5_B.s191_Brake_Position_l <=
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
  rtb_RelationalOperator4_l = ((Mooventure2016_Rev5_B.s191_Brake_Position_l >=
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
  rtb_RelationalOperator1_f = ((Mooventure2016_Rev5_B.s191_Brake_Position_l >
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
  rtb_RelationalOperator2_j = ((Mooventure2016_Rev5_B.s191_Brake_Position_l <=
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
    Mooventure2016_Rev5_B.s444_Merge;

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

  /* Abs: '<S100>/Abs' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S100>/motohawk_data_read'
   *  Sum: '<S100>/Add'
   */
  rtb_Merge_cq = fabs(Mooventure2016_Rev5_B.s445_Merge - TorqueRequest_DataStore
                      ());

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
  rtb_RelationalOperator1_ad = ((Mooventure2016_Rev5_B.s422_Merge <
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
  rtb_RelationalOperator4_d = ((Mooventure2016_Rev5_B.s422_Merge >
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
  rtb_RelationalOperator5_k = ((Mooventure2016_Rev5_B.s449_Merge <
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
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s449_Merge >
    (Electric_Motor_Derated_Approaching_Over_Temperature_Fault_Under_DataStore()));

  /* Logic: '<S100>/Logical Operator' incorporates:
   *  RelationalOperator: '<S100>/Relational Operator7'
   *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration8'
   */
  rtb_LogicalOperator_j = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s449_Merge <
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
  rtb_RelationalOperator8 = ((Mooventure2016_Rev5_B.s449_Merge >=
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
  rtb_RelationalOperator3_lz = ((Mooventure2016_Rev5_B.s232_DataTypeConversion >=
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
  rtb_Merge_cq = fabs(Mooventure2016_Rev5_B.s232_DataTypeConversion -
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
  rtb_RelationalOperator2_h5 = ((Mooventure2016_Rev5_B.s232_DataTypeConversion <=
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
  rtb_Compare_nd = (Mooventure2016_Rev5_B.s318_posOut >=
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
  rtb_RelationalOperator3_f = ((Mooventure2016_Rev5_B.s318_posOut >=
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
  rtb_RelationalOperator_jg = (Mooventure2016_Rev5_B.s318_posOut <=
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
  rtb_RelationalOperator_jg = (Mooventure2016_Rev5_B.s318_posOut <=
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
  rtb_Merge_cq = fabs(Mooventure2016_Rev5_B.s444_Merge);

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

  /* RelationalOperator: '<S105>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration2'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s445_Merge >
    (Vehicle_Speed_Sensor_Circuit_Low_Fault_DataStore()));

  /* Logic: '<S105>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S105>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration3'
   */
  rtb_LogicalOperator1_hq = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s444_Merge < (Motor_Speed_TorqueRPM_Fault_DataStore()))));

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
  rtb_Merge_cq = fabs(Mooventure2016_Rev5_B.s444_Merge -
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
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s444_Merge <
    (Motor_Speed_Low_Fault_DataStore()));

  /* Logic: '<S105>/Logical Operator' incorporates:
   *  RelationalOperator: '<S105>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration1'
   */
  rtb_LogicalOperator_f = ((rtb_LogicalOperator5 ||
    (Mooventure2016_Rev5_B.s444_Merge > (Motor_Speed_High_Fault_DataStore()))));

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
  rtb_Compare_nd = (Mooventure2016_Rev5_B.s260_Merge == 4.0);

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
    Mooventure2016_Rev5_B.s658_VehicleReadyOutput));

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
    TorqueRequest_DataStore() = Mooventure2016_Rev5_B.s119_MultiportSwitch;
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

  /* Outputs for Enabled SubSystem: '<S112>/Brake Disable' incorporates:
   *  EnablePort: '<S123>/Enable'
   */
  /* RelationalOperator: '<S112>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration2'
   */
  if (Mooventure2016_Rev5_B.s191_Brake_Position_l <
      (Cruise_Disable_Brake_DataStore())) {
    /* S-Function (motohawk_sfun_data_write): '<S123>/motohawk_data_write1' incorporates:
     *  Constant: '<S123>/Constant'
     */
    /* Write to Data Storage as scalar: CruiseOn */
    {
      CruiseOn_DataStore() = FALSE;
    }
  }

  /* End of RelationalOperator: '<S112>/Relational Operator1' */
  /* End of Outputs for SubSystem: '<S112>/Brake Disable' */
  /* Outputs for Enabled SubSystem: '<S124>/Speed Decrease' incorporates:
   *  EnablePort: '<S131>/Enable'
   */
  /* Logic: '<S124>/Logical Operator' incorporates:
   *  RelationalOperator: '<S129>/FixPt Relational Operator'
   *  S-Function (motohawk_sfun_data_read): '<S124>/motohawk_data_read'
   *  UnitDelay: '<S129>/Delay Input1'
   */
  if (CruiseOn_DataStore() && (rtb_LogicalOperator5_c >
       Mooventure2016_Rev5_DWork.s129_DelayInput1_DSTATE)) {
    /* Sum: '<S131>/Add' incorporates:
     *  Constant: '<S131>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S131>/motohawk_data_read1'
     */
    rtb_Add_l = CruiseSpeed_DataStore() - 1.0;

    /* S-Function (motohawk_sfun_data_write): '<S131>/motohawk_data_write' */
    /* Write to Data Storage as scalar: CruiseSpeed */
    {
      CruiseSpeed_DataStore() = rtb_Add_l;
    }
  }

  /* End of Logic: '<S124>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S124>/Speed Decrease' */

  /* Outputs for Enabled SubSystem: '<S124>/Speed Increase' incorporates:
   *  EnablePort: '<S132>/Enable'
   */
  /* Logic: '<S124>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S130>/FixPt Relational Operator'
   *  S-Function (motohawk_sfun_data_read): '<S124>/motohawk_data_read'
   *  UnitDelay: '<S130>/Delay Input1'
   */
  if (CruiseOn_DataStore() && (rtb_Merge_oi >
       Mooventure2016_Rev5_DWork.s130_DelayInput1_DSTATE)) {
    /* Sum: '<S132>/Add' incorporates:
     *  Constant: '<S132>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S132>/motohawk_data_read1'
     */
    rtb_Add_e = CruiseSpeed_DataStore() + 1.0;

    /* S-Function (motohawk_sfun_data_write): '<S132>/motohawk_data_write' */
    /* Write to Data Storage as scalar: CruiseSpeed */
    {
      CruiseSpeed_DataStore() = rtb_Add_e;
    }
  }

  /* End of Logic: '<S124>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S124>/Speed Increase' */

  /* Outputs for Enabled SubSystem: '<S126>/Enabled Subsystem1' incorporates:
   *  EnablePort: '<S145>/Enable'
   */
  /* RelationalOperator: '<S144>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S144>/Delay Input1'
   */
  if ((rtb_Merge_eh > Mooventure2016_Rev5_DWork.s144_DelayInput1_DSTATE) > 0) {
    /* S-Function (motohawk_sfun_data_write): '<S145>/motohawk_data_write1' incorporates:
     *  Constant: '<S145>/Constant'
     */
    /* Write to Data Storage as scalar: CruiseOn */
    {
      CruiseOn_DataStore() = TRUE;
    }
  }

  /* End of RelationalOperator: '<S144>/FixPt Relational Operator' */
  /* End of Outputs for SubSystem: '<S126>/Enabled Subsystem1' */
  /* RelationalOperator: '<S112>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration1'
   */
  rtb_LogicalOperator5 = (rtb_Product >= (Cruise_On_Speed_DataStore()));

  /* Logic: '<S112>/Logical Operator1' incorporates:
   *  Logic: '<S112>/Logical Operator'
   *  Logic: '<S112>/Logical Operator2'
   *  S-Function (motohawk_sfun_data_read): '<S112>/motohawk_data_read'
   */
  rtb_LogicalOperator5 = (rtb_LogicalOperator5 && (rtb_LogicalOperator5_c ||
    rtb_Merge_oi) && Mooventure2016_Rev5_B.s128_System && (!CruiseOn_DataStore()));

  /* Product: '<S112>/Product1' */
  rtb_Product1_h = rtb_Product * (real_T)rtb_LogicalOperator5;

  /* Outputs for Enabled SubSystem: '<S112>/System Start' incorporates:
   *  EnablePort: '<S127>/Enable'
   */
  if (rtb_LogicalOperator5) {
    /* S-Function (motohawk_sfun_data_write): '<S127>/motohawk_data_write' */
    /* Write to Data Storage as scalar: CruiseSpeed */
    {
      CruiseSpeed_DataStore() = rtb_Product1_h;
    }

    /* S-Function (motohawk_sfun_data_write): '<S127>/motohawk_data_write1' incorporates:
     *  Constant: '<S127>/Constant'
     */
    /* Write to Data Storage as scalar: CruiseOn */
    {
      CruiseOn_DataStore() = TRUE;
    }
  }

  /* End of Outputs for SubSystem: '<S112>/System Start' */

  /* Product: '<S136>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration2'
   */
  rtb_UnitDelay_o = rtb_Product5 * (CRUISE_IGain_DataStore());

  /* S-Function Block: <S141>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s141_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ok = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S141>/Sum' incorporates:
   *  Product: '<S141>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S141>/motohawk_delta_time'
   */
  rtb_Merge_cq = rtb_UnitDelay_o * rtb_motohawk_delta_time_ok +
    Mooventure2016_Rev5_B.s141_Switch1;

  /* MinMax: '<S142>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration3'
   */
  rtb_UnitDelay_o = (rtb_Merge_cq >= (CRUISE_IMin_DataStore())) || rtIsNaN
    ((CRUISE_IMin_DataStore())) ? rtb_Merge_cq : (CRUISE_IMin_DataStore());

  /* MinMax: '<S142>/MinMax1' incorporates:
   *  MinMax: '<S142>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration4'
   */
  rtb_Merge_bg = (rtb_UnitDelay_o <= (CRUISE_IMax_DataStore())) || rtIsNaN
    ((CRUISE_IMax_DataStore())) ? rtb_UnitDelay_o : (CRUISE_IMax_DataStore());

  /* Gain: '<S152>/Gain' */
  rtb_UnitDelay_o = -Mooventure2016_Rev5_B.s258_Merge;

  /* Sum: '<S162>/Sum' incorporates:
   *  Constant: '<S162>/LimitingBegins'
   */
  rtb_UnitDelay_m = rtb_UnitDelay_o - 125.0;

  /* Switch: '<S162>/Switch1' incorporates:
   *  Constant: '<S164>/Constant'
   *  RelationalOperator: '<S164>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S162>/motohawk_calibration'
   */
  if (rtb_UnitDelay_m >= 0.0) {
    /* Switch: '<S162>/Switch' incorporates:
     *  Constant: '<S162>/LimitingBegins1'
     *  Constant: '<S162>/LimitingBegins2'
     *  Constant: '<S162>/exponentiallimt'
     *  Constant: '<S162>/slope'
     *  Constant: '<S162>/yintercept'
     *  Math: '<S162>/Math Function'
     *  Product: '<S162>/Divide'
     *  Product: '<S162>/Product'
     *  RelationalOperator: '<S162>/Relational Operator'
     *  Sum: '<S162>/Sum1'
     */
    if (160.0 > rtb_UnitDelay_o) {
      rtb_Merge_cq = 0.0197 * rtb_UnitDelay_m + 0.1003;
    } else {
      rtb_Merge_cq = rt_powd_snf(rtb_UnitDelay_m, 3.172) / 100000.0;
    }

    /* End of Switch: '<S162>/Switch' */
  } else {
    rtb_Merge_cq = (TorqueRecoveryValue_DataStore());
  }

  /* End of Switch: '<S162>/Switch1' */
  /* S-Function Block: <S163>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s163_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_kf = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S163>/Sum' incorporates:
   *  Product: '<S163>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S163>/motohawk_delta_time'
   */
  rtb_Merge_cq = rtb_Merge_cq * rtb_motohawk_delta_time_kf +
    Mooventure2016_Rev5_B.s163_Switch1;

  /* MinMax: '<S165>/MinMax' incorporates:
   *  Constant: '<S159>/Constant'
   */
  rtb_UnitDelay_m = rtb_Merge_cq >= 0.0 ? rtb_Merge_cq : 0.0;

  /* Saturate: '<S181>/Saturation' */
  rtb_Saturation_mr = rtb_Switch_jf >= 16000.0 ? 16000.0 : rtb_Switch_jf <= 0.0 ?
    0.0 : rtb_Switch_jf;

  /* S-Function (motohawk_sfun_data_write): '<S181>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TC_Event_Timer */
  {
    TC_Event_Timer_DataStore() = rtb_Saturation_mr;
  }

  /* S-Function (motohawk_sfun_data_write): '<S19>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Vehicle_Enable */
  {
    Vehicle_Enable_DataStore() = Mooventure2016_Rev5_B.s184_Vehicle_Enable;
  }

  /* S-Function (motohawk_sfun_data_write): '<S19>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Torque_Enable */
  {
    Torque_Enable_DataStore() = Mooventure2016_Rev5_B.s184_Torque_Enable;
  }

  /* S-Function (motohawk_sfun_data_write): '<S19>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: Vehicle_Ready */
  {
    Vehicle_Ready_DataStore() = Mooventure2016_Rev5_B.s184_Vehicle_Ready;
  }

  /* Saturate: '<S299>/Saturation' */
  rtb_Saturation_ib = rtb_Switch_m >= 86400.0 ? 86400.0 : rtb_Switch_m <= 0.0 ?
    0.0 : rtb_Switch_m;

  /* S-Function (motohawk_sfun_data_write): '<S299>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay1 */
  {
    ButtonDelay1_DataStore() = rtb_Saturation_ib;
  }

  /* Saturate: '<S300>/Saturation' */
  rtb_Saturation_kw = rtb_Switch_pn >= 86400.0 ? 86400.0 : rtb_Switch_pn <= 0.0 ?
    0.0 : rtb_Switch_pn;

  /* S-Function (motohawk_sfun_data_write): '<S300>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay2 */
  {
    ButtonDelay2_DataStore() = rtb_Saturation_kw;
  }

  /* Saturate: '<S301>/Saturation' */
  rtb_Saturation_ij = rtb_DataTypeConversion3 >= 86400.0 ? 86400.0 :
    rtb_DataTypeConversion3 <= 0.0 ? 0.0 : rtb_DataTypeConversion3;

  /* S-Function (motohawk_sfun_data_write): '<S301>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay3 */
  {
    ButtonDelay3_DataStore() = rtb_Saturation_ij;
  }

  /* Saturate: '<S302>/Saturation' */
  rtb_Saturation_df = rtb_DataTypeConversion4 >= 86400.0 ? 86400.0 :
    rtb_DataTypeConversion4 <= 0.0 ? 0.0 : rtb_DataTypeConversion4;

  /* S-Function (motohawk_sfun_data_write): '<S302>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay4 */
  {
    ButtonDelay4_DataStore() = rtb_Saturation_df;
  }

  /* Saturate: '<S303>/Saturation' */
  rtb_Saturation_ig = rtb_Switch_n >= 86400.0 ? 86400.0 : rtb_Switch_n <= 0.0 ?
    0.0 : rtb_Switch_n;

  /* S-Function (motohawk_sfun_data_write): '<S303>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay5 */
  {
    ButtonDelay5_DataStore() = rtb_Saturation_ig;
  }

  /* S-Function (motohawk_sfun_data_write): '<S192>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Eaton_Plugged_In */
  {
    Eaton_Plugged_In_DataStore() = rtb_Eaton_Plugged_In;
  }

  /* S-Function (motohawk_sfun_data_write): '<S192>/motohawk_data_write1' */
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

  /* Update for UnitDelay: '<S138>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s138_UnitDelay_DSTATE = rtb_Product3;

  /* Update for UnitDelay: '<S139>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s139_UnitDelay_DSTATE = rtb_Product;

  /* Update for UnitDelay: '<S140>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s140_UnitDelay_DSTATE = rtb_Product4;

  /* Update for UnitDelay: '<S133>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s133_DelayInput1_DSTATE = rtb_Compare;

  /* Update for UnitDelay: '<S141>/Unit Delay' incorporates:
   *  MinMax: '<S142>/MinMax1'
   */
  Mooventure2016_Rev5_DWork.s141_UnitDelay_DSTATE = rtb_Merge_bg;

  /* Update for UnitDelay: '<S163>/Unit Delay' incorporates:
   *  Constant: '<S159>/Constant'
   *  Constant: '<S159>/Constant1'
   *  MinMax: '<S165>/MinMax'
   *  MinMax: '<S165>/MinMax1'
   */
  Mooventure2016_Rev5_DWork.s163_UnitDelay_DSTATE = rtb_UnitDelay_m <= 1500.0 ?
    rtb_UnitDelay_m : 1500.0;

  /* Update for UnitDelay: '<S161>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s161_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s161_Sum1;

  /* Update for UnitDelay: '<S263>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s263_UnitDelay_DSTATE = rtb_Sum1;

  /* Update for UnitDelay: '<S169>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s169_UnitDelay_DSTATE = rtb_Sum1_j;

  /* Update for UnitDelay: '<S265>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s265_UnitDelay_DSTATE = rtb_Sum1_c;

  /* Update for S-Function (motohawk_sfun_dout): '<S529>/motohawk_dout1' */

  /* S-Function Block: DOut4475p0004 */
  {
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S529>/motohawk_dout10' */

  /* S-Function Block: DOut4476p0004 */
  {
    DOut4476p0004_DiscreteOutput_Set(rtb_Merge_of1);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S529>/motohawk_dout11' */

  /* S-Function Block: DOut4477p0004 */
  {
    DOut4477p0004_DiscreteOutput_Set(rtb_DataTypeConversion6);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S529>/motohawk_dout12' */

  /* S-Function Block: DOut4478p0004 */
  {
    DOut4478p0004_DiscreteOutput_Set(rtb_DataTypeConversion_gi);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S529>/motohawk_dout13' */

  /* S-Function Block: DOut4479p0004 */
  {
    DOut4479p0004_DiscreteOutput_Set(rtb_DataTypeConversion3_i);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S529>/motohawk_dout2' */

  /* S-Function Block: DOut4480p0004 */
  {
    DOut4480p0004_DiscreteOutput_Set(rtb_Merge_dm);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S529>/motohawk_dout3' */

  /* S-Function Block: DOut4481p0004 */
  {
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S529>/motohawk_dout4' */

  /* S-Function Block: DOut4482p0004 */
  {
    DOut4482p0004_DiscreteOutput_Set(rtb_Merge_l1);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S529>/motohawk_dout5' */

  /* S-Function Block: DOut4483p0004 */
  {
    DOut4483p0004_DiscreteOutput_Set(rtb_Merge_cg);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S529>/motohawk_dout6' */

  /* S-Function Block: DOut4484p0004 */
  {
    DOut4484p0004_DiscreteOutput_Set(rtb_Merge_oqt);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S529>/motohawk_dout7' */

  /* S-Function Block: DOut4485p0004 */
  {
    DOut4485p0004_DiscreteOutput_Set(rtb_Merge_pi3);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S529>/motohawk_dout8' */

  /* S-Function Block: DOut4486p0004 */
  {
    DOut4486p0004_DiscreteOutput_Set(rtb_Merge_gd);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S529>/motohawk_dout9' */

  /* S-Function Block: DOut4487p0004 */
  {
    DOut4487p0004_DiscreteOutput_Set(rtb_Merge_ln);
  }

  /* Update for UnitDelay: '<S239>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s239_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s239_Sum1;

  /* Update for UnitDelay: '<S238>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s238_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s238_Sum1;

  /* Update for S-Function (motohawk_sfun_dout): '<S530>/motohawk_dout1' */

  /* S-Function Block: DOut4701p0002 */
  {
    DOut4701p0002_DiscreteOutput_Set(rtb_Merge_iu);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S530>/motohawk_dout2' */

  /* S-Function Block: DOut4702p0002 */
  {
    DOut4702p0002_DiscreteOutput_Set(rtb_Merge_nv);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S530>/motohawk_dout6' */

  /* S-Function Block: DOut4706p0002 */
  {
    DOut4706p0002_DiscreteOutput_Set(rtb_Merge_ef);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S530>/motohawk_dout4' */

  /* S-Function Block: DOut4704p0002 */
  {
    DOut4704p0002_DiscreteOutput_Set(rtb_DataTypeConversion6_c);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S530>/motohawk_dout5' */

  /* S-Function Block: DOut4705p0002 */
  {
    DOut4705p0002_DiscreteOutput_Set(rtb_DataTypeConversion5);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S530>/motohawk_dout3' */

  /* S-Function Block: DOut4703p0002 */
  {
    DOut4703p0002_DiscreteOutput_Set(rtb_DataTypeConversion8);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S534>/motohawk_pwm' */

  /* S-Function Block: H1m_PWMOutput */
  {
    H1m_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_n,
      rtb_DataTypeConversion1_o, 0, 1);
  }

  /* Update for UnitDelay: '<S85>/Unit Delay1' */
  Mooventure2016_Rev5_DWork.s85_UnitDelay1_DSTATE =
    Mooventure2016_Rev5_B.s238_Sum1;

  /* Update for UnitDelay: '<S85>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s85_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s239_Sum1;

  /* Update for UnitDelay: '<S88>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s88_UnitDelay_DSTATE = rtb_Heater_Temp_Raw;

  /* Update for UnitDelay: '<S98>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s98_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s191_Brake_Position_l;

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
    Mooventure2016_Rev5_B.s232_DataTypeConversion;

  /* Update for UnitDelay: '<S105>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s105_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s444_Merge;

  /* Update for UnitDelay: '<S97>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s97_UnitDelay_DSTATE = rtb_Merge_ko;

  /* Update for UnitDelay: '<S129>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s129_DelayInput1_DSTATE = rtb_LogicalOperator5_c;

  /* Update for UnitDelay: '<S130>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s130_DelayInput1_DSTATE = rtb_Merge_oi;

  /* Update for UnitDelay: '<S144>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s144_DelayInput1_DSTATE = rtb_Merge_eh;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
