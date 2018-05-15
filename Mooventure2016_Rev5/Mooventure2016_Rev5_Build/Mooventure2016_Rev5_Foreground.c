/*
 * File: Mooventure2016_Rev5_Foreground.c
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

#include "Mooventure2016_Rev5_Foreground.h"

/* Include model header file for global data */
#include "Mooventure2016_Rev5.h"
#include "Mooventure2016_Rev5_private.h"

/* Named constants for Stateflow: '<S93>/Chart' */
#define Mooventure2016_Rev5_IN_Driving (1U)
#define Mooventure2016_Rev5_IN_Nuetral (2U)
#define Mooventure2016_Rev5_IN_RegenBrake (3U)
#define Mooventure2016_Rev5_IN_RegenDrag (4U)

/* Named constants for Stateflow: '<S7>/BlendValving' */
#define Mooventure2016_Rev5_IN_Heat1   (1U)
#define Mooventure2016_Rev5_IN_Heat2   (2U)
#define Mooventure2016_Rev5_IN_Heat3   (3U)
#define Mooventure2016_Rev5_IN_Heat4   (4U)
#define Mooventure2016_Rev5_IN_HeatOn  (5U)
#define Mooventure2016_Rev5_IN_SystemIdle (6U)
#define Mooventure2016_Rev5_IN_SystemWarmup (7U)
#define Mooventure2016_Rev5_IN_UserWantsHeat_NotHot (8U)

/* Named constants for Stateflow: '<S7>/PumpState' */
#define Mooventure2016_Rev5_IN_PumpOff (1U)
#define Mooventure2016_Rev5_IN_PumpOn  (2U)

/* Named constants for Stateflow: '<S8>/Chart' */
#define Mooventure2016_Rev5_IN_Running (1U)
#define Mooventure2016_Rev5_IN_Shutdown (2U)
#define Mooventure2016_Rev5_IN_Startup (3U)
#define Mooventure2016_Rev5_IN_default (4U)
#define Mooventure2016_Rev5_IN_default_gen (1U)
#define Mooventure2016_Rev5_IN_high_gen (2U)
#define Mooventure2016_Rev5_IN_low_gen (3U)
#define Mooventure2016_Rev5_IN_medium_gen (4U)

/* Named constants for Stateflow: '<S94>/SystemState' */
#define Mooventure2016_Rev5_IN_Off     (1U)
#define Mooventure2016_Rev5_IN_On      (2U)

/* Named constants for Stateflow: '<S11>/Chart' */
#define Mooventure2016_Rev5_IN_Batterybootup (1U)
#define Mooventure2016_Rev5_IN_Charging_and_Temp (2U)
#define Mooventure2016_Rev5_IN_Counting (3U)
#define Mooventure2016_Rev5_IN_Initial (4U)
#define Mooventure2016_Rev5_IN_Kill_Component_Keyed (5U)
#define Mooventure2016_Rev5_IN_Normal_Operation (6U)
#define Mooventure2016_Rev5_IN_Shutdown_Sequence (7U)

/* Named constants for Stateflow: '<S173>/Chart' */
#define Mooventure2016_Rev5_IN_ON      (1U)
#define Mooventure2016_Rev5_IN_Off_o   (2U)
#define Mooventure2016_Rev5_IN_RSM     (3U)
#define Mooventure2016_Rev5_IN_SetMinus (4U)
#define Mooventure2016_Rev5_IN_SetPlus (5U)
#define Mooventure2016_Rev5_IN_default_o (6U)

/* Named constants for Stateflow: '<S346>/Coil1State' */
#define Mooventure2016_Rev5_IN_Coil1Disabled (1U)
#define Mooventure2016_Rev5_IN_Coil1Enabled (2U)

/* Named constants for Stateflow: '<S346>/Coil2State' */
#define Mooventure2016_Rev5_IN_Coil2Disabled (1U)
#define Mooventure2016_Rev5_IN_Coil2Enabled (2U)

/* Named constants for Stateflow: '<S346>/Coil2State1' */
#define Mooventure2016_Rev5_IN_Coil3Disabled (1U)
#define Mooventure2016_Rev5_IN_Coil3Enabled (2U)

/* Named constants for Stateflow: '<S347>/Chart' */
#define Mooventure2016_Rev5_IN_FlashOff (1U)
#define Mooventure2016_Rev5_IN_FlashOn (2U)
#define Mooventure2016_Rev5_IN_Normal  (3U)
#define Mooventure2016_Rev5_IN_Solid   (4U)
#define Mooventure2016_Rev5_IN_Wait    (5U)

/* Named constants for Stateflow: '<S465>/Bar Chart Reset' */
#define Mooventure2016_Rev5_IN_Clear   (1U)
#define Mooventure2016_Rev5_IN_Counting_n (2U)
#define Mooventure2016_Rev5_IN_Init    (3U)
#define Mooventure2016_Rev5_IN_Write   (4U)

/* Named constants for Stateflow: '<S347>/PowerSteering' */
#define Mooventure2016_Rev5_IN_INIT    (1U)
#define Mooventure2016_Rev5_IN_MotorRunning (2U)
#define Mooventure2016_Rev5_IN_PowerSteeringOff (3U)
#define Mooventure2016_Rev5_IN_PowerSteeringOn (4U)

/* Named constants for Stateflow: '<S350>/OnOff Delay' */
#define Mooventure2016_Rev5_IN_IPTAwake (1U)
#define Mooventure2016_Rev5_IN_IPTEnable (2U)
#define Mooventure2016_Rev5_IN_MotorDisabled (4U)
#define Mooventure2016_Rev5_IN_MotorEnabled (5U)
#define Mooventure2016_Rev5_IN_TimerRunningOne (6U)
#define Mooventure2016_Rev5_IN_TimerRunningTwo (7U)

/*
 * Output and update for atomic system:
 *    '<S76>/Data Correction Motor Fault'
 *    '<S81>/Data Correction'
 *    '<S342>/Data Correction Motor ABS'
 */
void Mooventure2016_Rev5_DataCorrectionMotorFault(real_T rtu_torqueIn,
  rtB_DataCorrectionMotorFault_Mooventure2016_Rev5 *localB)
{
  /* MATLAB Function 'Foreground/Control/Faults/Power Train/Electric Motor/Data Correction Motor Fault': '<S87>:1' */
  if (rtu_torqueIn > 0.0) {
    /* '<S87>:1:3' */
    /* '<S87>:1:4' */
    localB->s87_torqueOut = -(4000.0 - rtu_torqueIn);
  } else if (rtu_torqueIn < 0.0) {
    /* '<S87>:1:5' */
    /* '<S87>:1:6' */
    localB->s87_torqueOut = -(-4000.0 - rtu_torqueIn);
  } else {
    /* '<S87>:1:8' */
    localB->s87_torqueOut = 0.0;
  }
}

/*
 * Output and update for atomic system:
 *    '<S93>/Brake Pedal Scaling'
 *    '<S95>/Brake Pedal Scaling'
 *    '<S99>/Brake Pedal Scaling'
 */
void Mooventure2016_Rev5_BrakePedalScaling(real_T rtu_brakeIn, boolean_T
  rtu_inReverse, rtB_BrakePedalScaling_Mooventure2016_Rev5 *localB)
{
  /* MATLAB Function 'Foreground/Control/Hybrid Control Code/CrawlHomeMode/Brake Pedal Scaling': '<S103>:1' */
  if (!rtu_inReverse) {
    /* '<S103>:1:2' */
    /* '<S103>:1:3' */
    localB->s103_brakeOut = 1.0 - (rtu_brakeIn - 23900.0) / 8900.0;
  } else {
    /* '<S103>:1:5' */
    localB->s103_brakeOut = 1.0 - (41700.0 - rtu_brakeIn) / 8900.0;
  }
}

/*
 * Initial conditions for atomic system:
 *    '<S93>/Chart'
 *    '<S95>/Chart'
 *    '<S99>/Chart'
 */
void Mooventure2016_Rev5_Chart_Init(rtB_Chart_Mooventure2016_Rev5 *localB,
  rtDW_Chart_Mooventure2016_Rev5 *localDW)
{
  localDW->s104_is_active_c20_Mooventure2016_Rev5 = 0U;
  localDW->s104_is_c20_Mooventure2016_Rev5 = 0U;
  localB->s104_driveTorque = 0.0;
  localB->s104_regenTorque = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S93>/Chart'
 *    '<S95>/Chart'
 *    '<S99>/Chart'
 */
void Mooventure2016_Rev5_Chart(real_T rtu_accel, real_T rtu_brake, real_T
  rtu_speed, real_T rtu_accelStart, real_T rtu_accelEnd, real_T rtu_brakeStart,
  real_T rtu_brakeEnd, real_T rtu_regenStart, real_T rtu_regenEnd, real_T
  rtu_dragTorque, rtB_Chart_Mooventure2016_Rev5 *localB,
  rtDW_Chart_Mooventure2016_Rev5 *localDW)
{
  /* Gateway: Foreground/Control/Hybrid Control Code/CrawlHomeMode/Chart */
  /* During: Foreground/Control/Hybrid Control Code/CrawlHomeMode/Chart */
  if (localDW->s104_is_active_c20_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Hybrid Control Code/CrawlHomeMode/Chart */
    localDW->s104_is_active_c20_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S104>:2' */
    localDW->s104_is_c20_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Nuetral;
  } else {
    switch (localDW->s104_is_c20_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Driving:
      /* During 'Driving': '<S104>:3' */
      if ((rtu_accel <= rtu_accelEnd) && (rtu_speed >= rtu_regenStart)) {
        /* Transition: '<S104>:13' */
        localDW->s104_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RegenDrag;
      } else {
        localB->s104_driveTorque = rtu_accel;
        localB->s104_regenTorque = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Nuetral:
      /* During 'Nuetral': '<S104>:1' */
      if (rtu_accel >= rtu_accelStart) {
        /* Transition: '<S104>:11' */
        localDW->s104_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Driving;
      } else {
        localB->s104_driveTorque = 0.0;
        localB->s104_regenTorque = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_RegenBrake:
      /* During 'RegenBrake': '<S104>:10' */
      if (rtu_speed <= rtu_regenEnd) {
        /* Transition: '<S104>:15' */
        localDW->s104_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Nuetral;
      } else if (rtu_brake <= rtu_brakeEnd) {
        /* Transition: '<S104>:18' */
        localDW->s104_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RegenDrag;
      } else {
        localB->s104_regenTorque = rtu_brake + rtu_dragTorque;
        localB->s104_driveTorque = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_RegenDrag:
      /* During 'RegenDrag': '<S104>:4' */
      if (rtu_speed <= rtu_regenEnd) {
        /* Transition: '<S104>:14' */
        localDW->s104_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Nuetral;
      } else if (rtu_brake >= rtu_brakeStart) {
        /* Transition: '<S104>:16' */
        localDW->s104_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RegenBrake;
      } else if (rtu_accel >= rtu_accelStart) {
        /* Transition: '<S104>:17' */
        localDW->s104_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Driving;
      } else {
        localB->s104_regenTorque = rtu_dragTorque;
        localB->s104_driveTorque = 0.0;
      }
      break;

     default:
      /* Transition: '<S104>:2' */
      localDW->s104_is_c20_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Nuetral;
      break;
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S93>/Gas Pedal Scaling'
 *    '<S95>/Gas Pedal Scaling'
 *    '<S99>/Gas Pedal Scaling'
 */
void Mooventure2016_Rev5_GasPedalScaling(real_T rtu_throttleIn,
  rtB_GasPedalScaling_Mooventure2016_Rev5 *localB)
{
  /* MATLAB Function 'Foreground/Control/Hybrid Control Code/CrawlHomeMode/Gas Pedal Scaling': '<S105>:1' */
  /* '<S105>:1:2' */
  localB->s105_throttleOut = (rtu_throttleIn - 16.0) / 91.0;
}

/*
 * Output and update for atomic system:
 *    '<S345>/Heater Core Motion Control'
 *    '<S345>/Radiator Motion Control'
 */
void Mooventure2016_Rev5_HeaterCoreMotionControl(real_T rtu_currPos, real_T
  rtu_posRequest, real_T rtu_hyst,
  rtB_HeaterCoreMotionControl_Mooventure2016_Rev5 *localB)
{
  /* MATLAB Function 'Foreground/Outputs/Coolant Outputs/Heater Core Motion Control': '<S389>:1' */
  if ((rtu_currPos <= rtu_posRequest + rtu_hyst) && (rtu_currPos >=
       rtu_posRequest - rtu_hyst)) {
    /* '<S389>:1:3' */
    /* '<S389>:1:4' */
    localB->s389_motorEnable = 0.0;

    /* '<S389>:1:5' */
    localB->s389_motorDirection = 0.0;
  } else if (rtu_currPos < rtu_posRequest) {
    /* '<S389>:1:6' */
    /* '<S389>:1:7' */
    localB->s389_motorEnable = 1.0;

    /* '<S389>:1:8' */
    localB->s389_motorDirection = 0.0;
  } else if (rtu_currPos > rtu_posRequest) {
    /* '<S389>:1:9' */
    /* '<S389>:1:10' */
    localB->s389_motorEnable = 1.0;

    /* '<S389>:1:11' */
    localB->s389_motorDirection = 1.0;
  } else {
    /* '<S389>:1:13' */
    localB->s389_motorEnable = 0.0;

    /* '<S389>:1:14' */
    localB->s389_motorDirection = 0.0;
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
  /* InitializeConditions for Stateflow: '<S173>/Chart' */
  Mooventure2016_Rev5_DWork.s264_is_active_c29_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s264_is_c29_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s264_Out = 0.0;

  /* S-Function Block: <S270>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s270_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S274>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s274_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S94>/SystemState' */
  Mooventure2016_Rev5_DWork.s112_is_active_c30_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s112_is_c30_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s112_System = FALSE;

  /* S-Function Block: <S144>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s144_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S140>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s140_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S16>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s16_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S15>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s15_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S217>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s217_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S7>/BlendValving' */
  Mooventure2016_Rev5_DWork.s20_is_active_c12_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s20_RadiatorBlend = 0.0;
  Mooventure2016_Rev5_B.s20_HeaterCoreBlend = 0.0;
  Mooventure2016_Rev5_B.s20_Heat1 = FALSE;
  Mooventure2016_Rev5_B.s20_Heat2 = FALSE;
  Mooventure2016_Rev5_B.s20_Heat3 = FALSE;
  Mooventure2016_Rev5_B.s20_Heat4 = FALSE;
  Mooventure2016_Rev5_B.s20_RadiatorPump = FALSE;
  Mooventure2016_Rev5_B.s20_HeaterCorePump = FALSE;

  /* S-Function Block: <S409>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s409_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S7>/PumpState' */
  Mooventure2016_Rev5_DWork.s23_is_active_c15_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s23_is_c15_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s23_PumpOn = FALSE;

  /* S-Function Block: <S216>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s216_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S406>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s406_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S407>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s407_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S408>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s408_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S11>/Chart' */
  Mooventure2016_Rev5_DWork.s167_is_active_c1_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s167_is_c1_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s167_count = 0.0;
  Mooventure2016_Rev5_B.s167_Vehicle_Enable = FALSE;
  Mooventure2016_Rev5_B.s167_Vehicle_Ready = FALSE;
  Mooventure2016_Rev5_B.s167_Torque_Enable = FALSE;
  Mooventure2016_Rev5_B.s167_Keyed_Relay = FALSE;

  /* InitializeConditions for Stateflow: '<S346>/Coil1State' */
  Mooventure2016_Rev5_DWork.s440_is_active_c8_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s440_is_c8_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s440_Coil1State = FALSE;

  /* InitializeConditions for Stateflow: '<S346>/Coil2State' */
  Mooventure2016_Rev5_DWork.s441_is_active_c9_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s441_is_c9_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s441_Coil2State = FALSE;

  /* InitializeConditions for Stateflow: '<S346>/Coil2State1' */
  Mooventure2016_Rev5_DWork.s442_is_active_c10_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s442_is_c10_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s442_Coil3State = FALSE;

  /* InitializeConditions for Stateflow: '<S347>/PowerSteering' */
  Mooventure2016_Rev5_DWork.s468_is_active_c28_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s468_is_c28_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s468_VehicleReadyOutput = FALSE;

  /* InitializeConditions for Stateflow: '<S347>/Chart' */
  Mooventure2016_Rev5_DWork.s463_is_active_c22_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s463_is_c22_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s463_engTemp = 0.0;
  Mooventure2016_Rev5_B.s463_transTemp = 0.0;
  Mooventure2016_Rev5_B.s463_timerOut = 0.0;

  /* S-Function Block: <S466>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s466_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S39>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s39_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S40>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s40_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S41>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s41_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S42>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s42_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S43>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s43_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S38>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s38_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S8>/Chart' */
  Mooventure2016_Rev5_DWork.s30_is_Running = 0U;
  Mooventure2016_Rev5_DWork.s30_is_active_c33_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s30_is_c33_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s30_Genset_Enable = 0.0;
  Mooventure2016_Rev5_B.s30_Genset_Load = 0.0;
  Mooventure2016_Rev5_B.s30_Genset_RPM = 0.0;
  Mooventure2016_Rev5_B.s30_Genset_Throttle = 0.0;

  /* InitializeConditions for Stateflow: '<S350>/OnOff Delay' */
  Mooventure2016_Rev5_DWork.s628_is_active_c4_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s628_is_c4_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s628_motorcount = 0;
  Mooventure2016_Rev5_B.s628_MotorEnable = FALSE;
  Mooventure2016_Rev5_B.s628_IPTWake = FALSE;
  Mooventure2016_Rev5_B.s628_IPTEnable = FALSE;
  Mooventure2016_Rev5_DWork.s628_presentTicks = 0U;
  Mooventure2016_Rev5_DWork.s628_elapsedTicks = 0U;
  Mooventure2016_Rev5_DWork.s628_previousTicks = 0U;

  /* S-Function Block: <S61>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s61_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S62>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s62_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S63>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s63_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S64>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s64_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S65>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s65_motohawk_delta_time_DWORK1 = now -
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

  /* S-Function Block: <S273>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s273_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S272>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s272_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S271>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s271_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for S-Function (motohawk_sfun_fault_def): '<S77>/motohawk_fault_def2' */
  /* Reset Fault Downsample Counter: Pedal_Position_Sensor_A_Circuit_Intermittent */
  {
    Mooventure2016_Rev5_DWork.s77_motohawk_fault_def2_DWORK1 = 0;
  }

  /* S-Function Block: <S88>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s88_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
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
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
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
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* S-Function Block: <S91>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s91_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* S-Function Block: <S17>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s17_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S125>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s125_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S149>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s149_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }
}

/* Enable for function-call system: '<Root>/Foreground' */
void Mooventure2016_Rev5_Foreground_Enable(void)
{
  /* Enable for Stateflow: '<S350>/OnOff Delay' */
  Mooventure2016_Rev5_DWork.s628_presentTicks =
    Mooventure2016_Rev5_M->Timing.clockTick0;
  Mooventure2016_Rev5_DWork.s628_previousTicks =
    Mooventure2016_Rev5_DWork.s628_presentTicks;
}

/* Disable for function-call system: '<Root>/Foreground' */
void Mooventure2016_Rev5_Foreground_Disable(void)
{
  /* Disable for Enabled SubSystem: '<S98>/Drive' */
  /* Disable for Outport: '<S139>/IPT_Torque' */
  Mooventure2016_Rev5_B.s98_Torque_Direction = 0.0;
  Mooventure2016_Rev5_DWork.s98_Drive_MODE = FALSE;

  /* End of Disable for SubSystem: '<S98>/Drive' */

  /* Disable for Enabled SubSystem: '<S98>/Reverse' */
  Mooventure2016_Rev5_DWork.s98_Reverse_MODE = FALSE;

  /* End of Disable for SubSystem: '<S98>/Reverse' */

  /* Disable for Stateflow: '<S350>/OnOff Delay' */
  Mooventure2016_Rev5_DWork.s628_presentTicks =
    Mooventure2016_Rev5_M->Timing.clockTick0;
  Mooventure2016_Rev5_DWork.s628_elapsedTicks =
    Mooventure2016_Rev5_DWork.s628_presentTicks -
    Mooventure2016_Rev5_DWork.s628_previousTicks;
  Mooventure2016_Rev5_DWork.s628_previousTicks =
    Mooventure2016_Rev5_DWork.s628_presentTicks;
  if ((uint32_T)Mooventure2016_Rev5_DWork.s628_temporalCounter_i1 +
      Mooventure2016_Rev5_DWork.s628_elapsedTicks <= 7U) {
    Mooventure2016_Rev5_DWork.s628_temporalCounter_i1 = (uint8_T)((uint32_T)
      Mooventure2016_Rev5_DWork.s628_temporalCounter_i1 +
      Mooventure2016_Rev5_DWork.s628_elapsedTicks);
  } else {
    Mooventure2016_Rev5_DWork.s628_temporalCounter_i1 = 7U;
  }

  /* End of Stateflow: '<S350>/OnOff Delay' */
}

/* Start for function-call system: '<Root>/Foreground' */
void Mooventure2016_Rev5_Foreground_Start(void)
{
  /* Start for IfAction SubSystem: '<S10>/CrawlHomeMode' */

  /* InitializeConditions for Stateflow: '<S93>/Chart' */
  Mooventure2016_Rev5_Chart_Init(&Mooventure2016_Rev5_B.s93_sf_Chart,
    &Mooventure2016_Rev5_DWork.s93_sf_Chart);

  /* End of Start for SubSystem: '<S10>/CrawlHomeMode' */

  /* Start for IfAction SubSystem: '<S10>/EcoMode' */

  /* InitializeConditions for Stateflow: '<S95>/Chart' */
  Mooventure2016_Rev5_Chart_Init(&Mooventure2016_Rev5_B.s95_sf_Chart,
    &Mooventure2016_Rev5_DWork.s95_sf_Chart);

  /* End of Start for SubSystem: '<S10>/EcoMode' */

  /* Start for IfAction SubSystem: '<S10>/SUVMode' */

  /* InitializeConditions for Stateflow: '<S99>/Chart' */
  Mooventure2016_Rev5_Chart_Init(&Mooventure2016_Rev5_B.s99_sf_Chart,
    &Mooventure2016_Rev5_DWork.s99_sf_Chart);

  /* End of Start for SubSystem: '<S10>/SUVMode' */

  /* Start for Enabled SubSystem: '<S347>/Enabled Subsystem' */

  /* InitializeConditions for Stateflow: '<S465>/Bar Chart Reset' */
  Mooventure2016_Rev5_DWork.s485_is_active_c55_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s485_is_c55_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s485_count = 0.0;
  Mooventure2016_Rev5_B.s485_write = FALSE;

  /* End of Start for SubSystem: '<S347>/Enabled Subsystem' */

  /* S-Function (motohawk_sfun_probe): '<S346>/motohawk_probe10' */
  (Coil5_AuxCoil_Probe_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S346>/motohawk_probe9' */
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
  real_T rtb_Merge_c;
  real_T rtb_Merge_lu;
  real_T rtb_Merge_ny;
  real_T rtb_Merge_e;
  real_T rtb_Merge_nz;
  real_T rtb_Merge_o;
  real_T rtb_Merge_er;
  real_T rtb_Merge_a;
  real_T rtb_motohawk_delta_time_c;
  real_T rtb_motohawk_delta_time_n;
  real_T rtb_Merge_h;
  real_T rtb_Merge_nd;
  real_T rtb_Sum1_b;
  real_T rtb_Merge_i;
  real_T rtb_motohawk_delta_time_b;
  real_T rtb_Sum1_e;
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
  real_T rtb_Merge_m;
  real_T rtb_Merge_k;
  real_T rtb_Merge_e3;
  real_T rtb_motohawk_delta_time_ka;
  real_T rtb_Add;
  real_T rtb_Merge_of;
  real_T rtb_Merge_iz;
  real_T rtb_Merge_gv;
  real_T rtb_Merge_mf;
  real_T rtb_Merge_pb;
  real_T rtb_Merge_og;
  real_T rtb_Merge_d;
  real_T rtb_Merge_ho;
  real_T rtb_Merge_mb;
  real_T rtb_Merge_fj;
  real_T rtb_Merge_ah;
  real_T rtb_Merge_ko;
  real_T rtb_Merge_pj;
  real_T rtb_Merge_cd;
  real_T rtb_Merge_ca;
  real_T rtb_Merge_mw;
  real_T rtb_Merge_bm;
  real_T rtb_Merge_dh;
  real_T rtb_Merge_j;
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
  real_T rtb_Merge_kv;
  real_T rtb_Merge_kf;
  real_T rtb_Merge_cz;
  real_T rtb_Merge_nzb;
  real_T rtb_Merge_go;
  real_T rtb_Merge_il;
  real_T rtb_Merge_je;
  real_T rtb_Merge_e2;
  real_T rtb_Merge_ee;
  real_T rtb_Merge_pi;
  real_T rtb_Merge_bi;
  real_T rtb_motohawk_delta_time_iy;
  real_T rtb_Saturation_o;
  real_T rtb_motohawk_delta_time_o5;
  real_T rtb_Saturation_d;
  real_T rtb_motohawk_delta_time_es;
  real_T rtb_motohawk_delta_time_jt;
  real_T rtb_motohawk_delta_time_nm;
  real_T rtb_Saturation_f0;
  real_T rtb_Saturation_k;
  real_T rtb_Saturation_b;
  real_T rtb_Saturation_o2;
  real_T rtb_motohawk_delta_time_f;
  real_T rtb_motohawk_delta_time_cz;
  real_T rtb_motohawk_delta_time_p1;
  real_T rtb_motohawk_delta_time_an;
  real_T rtb_motohawk_delta_time_iv;
  real_T rtb_motohawk_delta_time_d;
  real_T rtb_motohawk_delta_time_gg;
  real_T rtb_motohawk_delta_time_ey;
  real_T rtb_Saturation_im;
  real_T rtb_Saturation_ds;
  real_T rtb_Saturation_b3;
  real_T rtb_Saturation_a;
  real_T rtb_Saturation_kb;
  real_T rtb_Saturation_m;
  real_T rtb_Saturation_br;
  real_T rtb_Saturation_e;
  real_T rtb_Saturation_in;
  real_T rtb_Product1_h;
  real_T rtb_motohawk_delta_time_ok;
  real_T rtb_motohawk_delta_time_kf;
  real_T rtb_Saturation_ib;
  real_T rtb_Saturation_kw;
  real_T rtb_Saturation_ij;
  real_T rtb_Saturation_df;
  real_T rtb_Saturation_ig;
  real_T rtb_reset;
  real_T rtb_ODO_out;
  real_T rtb_motor_Torque;
  real_T rtb_motohawk_interpolation_1d_c;
  real_T rtb_motohawk_interpolation_1d1;
  real_T rtb_Product_dp;
  real_T rtb_motor_Torque_p;
  real_T rtb_motohawk_interpolation_1d_n;
  real_T rtb_motohawk_interpolation_1d1_p;
  real_T rtb_Product_le;
  real_T rtb_motor_Torque_g;
  real_T rtb_motohawk_interpolation_1d_d;
  real_T rtb_motohawk_interpolation_1d1_n;
  real_T rtb_Product_j;
  real_T rtb_motohawk_interpolation_1d_e;
  real_T rtb_Add_e;
  real_T rtb_Add_l;
  real_T rtb_Switch_h;
  real_T rtb_Switch_fi;
  real_T rtb_Switch_d;
  real_T rtb_Switch_hc;
  real_T rtb_Switch_mf;
  int32_T rtb_DataTypeConversion1_g;
  uint32_T rtb_DataTypeConversion2_n;
  int16_T rtb_DataTypeConversion1_o;
  uint16_T rtb_motohawk_ain;
  index_T rtb_motohawk_prelookup;
  index_T rtb_motohawk_prelookup_h;
  index_T rtb_motohawk_prelookup1;
  index_T rtb_motohawk_prelookup_f;
  index_T rtb_motohawk_prelookup1_p;
  index_T rtb_motohawk_prelookup_m;
  index_T rtb_motohawk_prelookup1_o;
  index_T rtb_motohawk_prelookup_k;
  int8_T rtb_Merge_iq;
  boolean_T rtb_Compare_nm;
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
  boolean_T rtb_Merge_nr;
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
  boolean_T rtb_RelationalOperator12;
  boolean_T rtb_LogicalOperator3_p;
  boolean_T rtb_RelationalOperator15;
  boolean_T rtb_LogicalOperator_cw;
  boolean_T rtb_LogicalOperator1_h;
  boolean_T rtb_LogicalOperator2_k;
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
  boolean_T rtb_LogicalOperator1_a;
  boolean_T rtb_RelationalOperator1_pt;
  boolean_T rtb_Eaton_Plugged_In;
  boolean_T rtb_RelationalOperator3_a;
  boolean_T rtb_RelationalOperator_l1;
  boolean_T rtb_RelationalOperator2_da;
  boolean_T rtb_RelationalOperator1_f;
  boolean_T rtb_RelationalOperator2_j;
  boolean_T rtb_LogicalOperator2_i;
  boolean_T rtb_RelationalOperator3_i3;
  boolean_T rtb_RelationalOperator12_d;
  boolean_T rtb_RelationalOperator1_ad;
  boolean_T rtb_RelationalOperator4_d;
  boolean_T rtb_RelationalOperator2_e;
  boolean_T rtb_RelationalOperator5_k;
  boolean_T rtb_LogicalOperator_j;
  boolean_T rtb_RelationalOperator8;
  boolean_T rtb_LogicalOperator1_j;
  boolean_T rtb_RelationalOperator11;
  boolean_T rtb_RelationalOperator3_f;
  boolean_T rtb_LogicalOperator1_ax;
  boolean_T rtb_LogicalOperator2_m;
  boolean_T rtb_LogicalOperator_l;
  boolean_T rtb_LogicalOperator1_hq;
  boolean_T rtb_RelationalOperator_ox;
  boolean_T rtb_LogicalOperator_fz;
  boolean_T rtb_LogicalOperator2_ax;
  boolean_T rtb_LogicalOperator2_kg;
  boolean_T rtb_RelationalOperator1_e;
  boolean_T rtb_LogicalOperator_pw;
  boolean_T rtb_LogicalOperator4_j;
  boolean_T rtb_LogicalOperator_dp;
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
  boolean_T rtb_RelationalOperator_jg;
  boolean_T rtb_Compare_nd;
  boolean_T rtb_RelationalOperator11_d;
  real_T rtb_UnitDelay_m;
  real_T rtb_UnitDelay_o;
  real_T rtb_Product;
  real_T rtb_Product5;
  real_T rtb_Product3;
  real_T rtb_Product4;
  uint8_T rtb_Compare;
  real_T rtb_Switch_m;
  boolean_T rtb_LogicalOperator_h;
  real_T rtb_Switch_n;
  boolean_T rtb_LogicalOperator_f;
  boolean_T rtb_LogicalOperator5;
  real_T rtb_Merge_l;
  real_T rtb_Sum1_j;
  real_T rtb_Merge_o0;
  boolean_T rtb_LogicalOperator8;
  uint16_T rtb_Merge_bn;
  real_T rtb_Switch_e;
  real_T rtb_Merge_oq;
  int32_T rtb_Heater_Temp_Raw;
  boolean_T rtb_LogicalOperator_b2;
  real_T rtb_Switch_c;
  real_T rtb_Merge_b;
  boolean_T rtb_RelationalOperator_b;
  real_T rtb_Sum1;
  real_T rtb_Merge_lf;
  real_T rtb_Merge_hn;
  real_T rtb_DataTypeConversion_m;
  real_T rtb_DataTypeConversion1_m;
  real_T rtb_DataTypeConversion2;
  real_T rtb_Switch_f;
  real_T rtb_DataTypeConversion3;
  real_T rtb_DataTypeConversion4;
  real_T rtb_Switch_ja;
  real_T rtb_Switch_pn;
  uint32_T rtb_Merge_nu;
  boolean_T rtb_LogicalOperator_pl;
  boolean_T rtb_LogicalOperator_e;
  real_T rtb_Sum1_c;
  real_T rtb_Merge_cm;

  /* UnitDelay: '<S122>/Unit Delay' */
  rtb_UnitDelay_m = Mooventure2016_Rev5_DWork.s122_UnitDelay_DSTATE;

  /* UnitDelay: '<S123>/Unit Delay' */
  rtb_UnitDelay_o = Mooventure2016_Rev5_DWork.s123_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_read_canmsg): '<S177>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3888p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3888p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s177_AgeCount + 1) >
        Mooventure2016_Rev5_B.s177_AgeCount)
      Mooventure2016_Rev5_B.s177_AgeCount++;
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
      Mooventure2016_Rev5_B.s177_IPT_CurrentUsed = (((real_T) tmp0) / ((real_T)
        10)) + ((real_T) -600);
      Mooventure2016_Rev5_B.s177_IPT_CurrentRequest = (((real_T) tmp1) /
        ((real_T) 10)) + ((real_T) -600);
      Mooventure2016_Rev5_B.s177_IPT_MotorSpeed = ((real_T) tmp2) + ((real_T)
        -15000);
      Mooventure2016_Rev5_B.s177_IPT_WheelTorqueDelivered = ((real_T) tmp3) +
        ((real_T) -4000);
      Mooventure2016_Rev5_B.s177_IPT_CurrentLimit = (real_T) tmp4;
      Mooventure2016_Rev5_B.s177_IPT_Antishudder = (real_T) tmp5;
      Mooventure2016_Rev5_B.s177_AgeCount = 0;
    }
  }

  /* If: '<S327>/If' incorporates:
   *  Inport: '<S328>/In1'
   *  Inport: '<S329>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S327>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S327>/override_enable'
   */
  if ((Motor_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S327>/NewValue' incorporates:
     *  ActionPort: '<S328>/Action Port'
     */
    Mooventure2016_Rev5_B.s327_Merge = (Motor_Speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S328>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(99);
    }

    /* End of Outputs for SubSystem: '<S327>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S327>/OldValue' incorporates:
     *  ActionPort: '<S329>/Action Port'
     */
    Mooventure2016_Rev5_B.s327_Merge = Mooventure2016_Rev5_B.s177_IPT_MotorSpeed;

    /* S-Function (motohawk_sfun_code_cover): '<S329>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(100);
    }

    /* End of Outputs for SubSystem: '<S327>/OldValue' */
  }

  /* End of If: '<S327>/If' */

  /* Product: '<S94>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S94>/motohawk_calibration7'
   */
  rtb_Product = Mooventure2016_Rev5_B.s327_Merge * (MPH_Conversion_DataStore());

  /* S-Function Block: <S123>/motohawk_delta_time */
  rtb_motohawk_delta_time = 0.005;

  /* Switch: '<S120>/Switch' incorporates:
   *  Constant: '<S120>/Constant'
   *  Product: '<S123>/Product'
   *  RelationalOperator: '<S120>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_delta_time): '<S123>/motohawk_delta_time'
   *  Sum: '<S123>/Sum2'
   */
  if ((rtb_Product - rtb_UnitDelay_o) / rtb_motohawk_delta_time > 0.0) {
    rtb_Product5 = (ETC_DampGainUp_DataStore());
  } else {
    rtb_Product5 = (ETC_DampGainDown_DataStore());
  }

  /* End of Switch: '<S120>/Switch' */

  /* Product: '<S120>/Product3' */
  rtb_Product3 = rtb_Product5 * rtb_Product;

  /* S-Function Block: <S122>/motohawk_delta_time */
  rtb_motohawk_delta_time_k = 0.005;

  /* Product: '<S122>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S122>/motohawk_delta_time'
   *  Sum: '<S122>/Sum2'
   */
  Mooventure2016_Rev5_B.s122_Product = (rtb_Product3 - rtb_UnitDelay_m) /
    rtb_motohawk_delta_time_k;

  /* UnitDelay: '<S124>/Unit Delay' */
  rtb_UnitDelay_o = Mooventure2016_Rev5_DWork.s124_UnitDelay_DSTATE;

  /* Sum: '<S120>/Sum2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S94>/motohawk_data_read2'
   */
  Mooventure2016_Rev5_B.s120_Sum2 = CruiseSpeed_DataStore() - rtb_Product;

  /* Product: '<S120>/Product5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration6'
   */
  rtb_Product5 = Mooventure2016_Rev5_B.s120_Sum2 * (ETC_ErrorGain_DataStore());

  /* Product: '<S120>/Product4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration1'
   */
  rtb_Product4 = (ETC_DGain_DataStore()) * rtb_Product5;

  /* S-Function Block: <S124>/motohawk_delta_time */
  rtb_motohawk_delta_time_p = 0.005;

  /* Product: '<S124>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S124>/motohawk_delta_time'
   *  Sum: '<S124>/Sum2'
   */
  Mooventure2016_Rev5_B.s124_Product = (rtb_Product4 - rtb_UnitDelay_o) /
    rtb_motohawk_delta_time_p;

  /* Product: '<S120>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration'
   */
  Mooventure2016_Rev5_B.s120_Product2 = (ETC_PGain_DataStore()) * rtb_Product5;

  /* RelationalOperator: '<S119>/Compare' incorporates:
   *  Constant: '<S119>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S109>/motohawk_data_read1'
   */
  rtb_Compare = CruiseOn_DataStore();

  /* Switch: '<S125>/Switch1' incorporates:
   *  RelationalOperator: '<S117>/FixPt Relational Operator'
   *  UnitDelay: '<S117>/Delay Input1'
   *  UnitDelay: '<S125>/Unit Delay'
   */
  if (rtb_Compare > Mooventure2016_Rev5_DWork.s117_DelayInput1_DSTATE) {
    Mooventure2016_Rev5_B.s125_Switch1 = 0.0;
  } else {
    Mooventure2016_Rev5_B.s125_Switch1 =
      Mooventure2016_Rev5_DWork.s125_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S125>/Switch1' */

  /* Sum: '<S118>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration5'
   *  Sum: '<S120>/Sum'
   */
  rtb_Switch_m = (((Mooventure2016_Rev5_B.s124_Product -
                    Mooventure2016_Rev5_B.s122_Product) +
                   Mooventure2016_Rev5_B.s120_Product2) +
                  Mooventure2016_Rev5_B.s125_Switch1) + (ETC_DCOffset_DataStore());

  /* MinMax: '<S127>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration'
   */
  rtb_UnitDelay_o = (rtb_Switch_m >= (ETC_LwrLim_DataStore())) || rtIsNaN
    ((ETC_LwrLim_DataStore())) ? rtb_Switch_m : (ETC_LwrLim_DataStore());

  /* MinMax: '<S127>/MinMax1' incorporates:
   *  MinMax: '<S127>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration1'
   */
  Mooventure2016_Rev5_B.s127_MinMax1 = (rtb_UnitDelay_o <= (ETC_UprLim_DataStore
    ())) || rtIsNaN((ETC_UprLim_DataStore())) ? rtb_UnitDelay_o :
    (ETC_UprLim_DataStore());

  /* S-Function Block: <S173>/motohawk_ain4 Resource: Cruise_Control */
  Mooventure2016_Rev5_B.s173_RawSignal = Cruise_Control_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* DataTypeConversion: '<S173>/Data Type Conversion' */
  rtb_UnitDelay_o = (real_T)Mooventure2016_Rev5_B.s173_RawSignal;

  /* Stateflow: '<S173>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S173>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S173>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S173>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S173>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S173>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S173>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S173>/motohawk_calibration6'
   */

  /* Gateway: Foreground/Inputs/Cruise Control/Chart */
  /* During: Foreground/Inputs/Cruise Control/Chart */
  if (Mooventure2016_Rev5_DWork.s264_is_active_c29_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Inputs/Cruise Control/Chart */
    Mooventure2016_Rev5_DWork.s264_is_active_c29_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S264>:10' */
    Mooventure2016_Rev5_DWork.s264_is_c29_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_default_o;
  } else {
    switch (Mooventure2016_Rev5_DWork.s264_is_c29_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_ON:
      /* During 'ON': '<S264>:16' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S264>:34' */
        Mooventure2016_Rev5_DWork.s264_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default_o;
      } else {
        Mooventure2016_Rev5_B.s264_Out = 5.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Off_o:
      /* During 'Off': '<S264>:12' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S264>:35' */
        Mooventure2016_Rev5_DWork.s264_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default_o;
      } else {
        Mooventure2016_Rev5_B.s264_Out = 1.0;
      }
      break;

     case Mooventure2016_Rev5_IN_RSM:
      /* During 'RSM': '<S264>:15' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S264>:32' */
        Mooventure2016_Rev5_DWork.s264_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default_o;
      } else {
        Mooventure2016_Rev5_B.s264_Out = 4.0;
      }
      break;

     case Mooventure2016_Rev5_IN_SetMinus:
      /* During 'SetMinus': '<S264>:13' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S264>:26' */
        Mooventure2016_Rev5_DWork.s264_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default_o;
      } else {
        Mooventure2016_Rev5_B.s264_Out = 2.0;
      }
      break;

     case Mooventure2016_Rev5_IN_SetPlus:
      /* During 'SetPlus': '<S264>:14' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S264>:30' */
        Mooventure2016_Rev5_DWork.s264_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default_o;
      } else {
        Mooventure2016_Rev5_B.s264_Out = 3.0;
      }
      break;

     case Mooventure2016_Rev5_IN_default_o:
      /* During 'default': '<S264>:9' */
      if ((rtb_UnitDelay_o < (Off_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (Off_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S264>:22' */
        Mooventure2016_Rev5_DWork.s264_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Off_o;
      } else if ((rtb_UnitDelay_o < (SetPlus_DataStore()) + (HYST_DataStore())) &&
                 (rtb_UnitDelay_o > (SetPlus_DataStore()) - (HYST_DataStore())))
      {
        /* Transition: '<S264>:29' */
        Mooventure2016_Rev5_DWork.s264_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SetPlus;
      } else if ((rtb_UnitDelay_o < (RSM_DataStore()) + (HYST_DataStore())) &&
                 (rtb_UnitDelay_o > (RSM_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S264>:31' */
        Mooventure2016_Rev5_DWork.s264_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RSM;
      } else if ((rtb_UnitDelay_o < (ON_DataStore()) + (HYST_DataStore())) &&
                 (rtb_UnitDelay_o > (ON_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S264>:33' */
        Mooventure2016_Rev5_DWork.s264_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_ON;
      } else if ((rtb_UnitDelay_o < (SetMinus_DataStore()) + (HYST_DataStore()))
                 && (rtb_UnitDelay_o > (SetMinus_DataStore()) - (HYST_DataStore())))
      {
        /* Transition: '<S264>:38' */
        Mooventure2016_Rev5_DWork.s264_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SetMinus;
      } else {
        Mooventure2016_Rev5_B.s264_Out = 0.0;
      }
      break;

     default:
      /* Transition: '<S264>:10' */
      Mooventure2016_Rev5_DWork.s264_is_c29_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_default_o;
      break;
    }
  }

  /* End of Stateflow: '<S173>/Chart' */

  /* RelationalOperator: '<S265>/Compare' incorporates:
   *  Constant: '<S265>/Constant'
   */
  rtb_RelationalOperator11_d = (Mooventure2016_Rev5_B.s264_Out == 1.0);

  /* S-Function Block: <S270>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s270_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_m = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S270>/Switch' incorporates:
   *  Constant: '<S270>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S270>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S270>/motohawk_delta_time'
   *  Sum: '<S270>/Sum'
   */
  if (rtb_RelationalOperator11_d) {
    rtb_Switch_m = rtb_motohawk_delta_time_m + ButtonDelay1_DataStore();
  } else {
    rtb_Switch_m = 0.0;
  }

  /* End of Switch: '<S270>/Switch' */
  /* Logic: '<S259>/Logical Operator' incorporates:
   *  RelationalOperator: '<S259>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S173>/motohawk_calibration7'
   */
  rtb_LogicalOperator_h = (rtb_RelationalOperator11_d && (rtb_Switch_m >=
    (Delay_DataStore())));

  /* RelationalOperator: '<S269>/Compare' incorporates:
   *  Constant: '<S269>/Constant'
   */
  rtb_RelationalOperator11_d = (Mooventure2016_Rev5_B.s264_Out == 5.0);

  /* S-Function Block: <S274>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s274_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_pj = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S274>/Switch' incorporates:
   *  Constant: '<S274>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S274>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S274>/motohawk_delta_time'
   *  Sum: '<S274>/Sum'
   */
  if (rtb_RelationalOperator11_d) {
    rtb_Switch_n = rtb_motohawk_delta_time_pj + ButtonDelay5_DataStore();
  } else {
    rtb_Switch_n = 0.0;
  }

  /* End of Switch: '<S274>/Switch' */

  /* Logic: '<S263>/Logical Operator' incorporates:
   *  RelationalOperator: '<S263>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S173>/motohawk_calibration7'
   */
  rtb_LogicalOperator_f = (rtb_RelationalOperator11_d && (rtb_Switch_n >=
    (Delay_DataStore())));

  /* Logic: '<S94>/Logical Operator5' incorporates:
   *  Logic: '<S94>/Logical Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S94>/motohawk_calibration'
   *  S-Function (motohawk_sfun_fault_action): '<S94>/motohawk_fault_action3'
   */
  rtb_LogicalOperator5 = (((Cruise_Control_Enable_DataStore()) != 0.0) &&
    (!GetFaultActionStatus(6)));

  /* Stateflow: '<S94>/SystemState' */

  /* Gateway: Foreground/Control/Hybrid Control Code/Cruise Control/SystemState */
  /* During: Foreground/Control/Hybrid Control Code/Cruise Control/SystemState */
  if (Mooventure2016_Rev5_DWork.s112_is_active_c30_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Hybrid Control Code/Cruise Control/SystemState */
    Mooventure2016_Rev5_DWork.s112_is_active_c30_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S112>:4' */
    Mooventure2016_Rev5_DWork.s112_is_c30_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Off;
  } else {
    switch (Mooventure2016_Rev5_DWork.s112_is_c30_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Off:
      /* During 'Off': '<S112>:1' */
      if ((rtb_LogicalOperator_f == TRUE) && (rtb_LogicalOperator5 == TRUE)) {
        /* Transition: '<S112>:5' */
        Mooventure2016_Rev5_DWork.s112_is_c30_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_On;
      } else {
        Mooventure2016_Rev5_B.s112_System = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_On:
      /* During 'On': '<S112>:2' */
      if ((rtb_LogicalOperator_h == TRUE) || (rtb_LogicalOperator5 == FALSE)) {
        /* Transition: '<S112>:6' */
        Mooventure2016_Rev5_DWork.s112_is_c30_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Off;
      } else {
        Mooventure2016_Rev5_B.s112_System = TRUE;
      }
      break;

     default:
      /* Transition: '<S112>:4' */
      Mooventure2016_Rev5_DWork.s112_is_c30_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Off;
      break;
    }
  }

  /* End of Stateflow: '<S94>/SystemState' */

  /* Logic: '<S94>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S94>/motohawk_data_read1'
   */
  rtb_LogicalOperator5 = (CruiseOn_DataStore() &&
    Mooventure2016_Rev5_B.s112_System);

  /* Switch: '<S149>/Switch1' incorporates:
   *  Constant: '<S145>/Constant2'
   *  UnitDelay: '<S149>/Unit Delay'
   */
  if (Mooventure2016_Rev5_ConstB.s149_DataTypeConversion) {
    Mooventure2016_Rev5_B.s149_Switch1 = 0.0;
  } else {
    Mooventure2016_Rev5_B.s149_Switch1 =
      Mooventure2016_Rev5_DWork.s149_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S149>/Switch1' */
  /* S-Function Block: <S146>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ModifiedAmpSecIn_DataStore()) = Mooventure2016_Rev5_B.s149_Switch1;
    (ModifiedAmpSecIdx_DataStore()) = TablePrelookup_real_T
      (Mooventure2016_Rev5_B.s149_Switch1, (ModifiedAmpSecIdxArr_DataStore()), 4,
       (ModifiedAmpSecIdx_DataStore()));
    rtb_motohawk_prelookup = (ModifiedAmpSecIdx_DataStore());
  }

  /* S-Function Block: <S146>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup, (real_T *) ((TorqueLimMultiplierTbl_DataStore())),
       4);
    (TorqueLimMultiplier_DataStore()) = rtb_motohawk_interpolation_1d;
  }

  /* S-Function Block: <S144>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s144_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_h = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S144>/Product' incorporates:
   *  MinMax: '<S144>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration'
   */
  rtb_Switch_h /= (rtb_Switch_h >= (Overcurrent_Tq_Lim_Filter_DataStore())) ||
    rtIsNaN((Overcurrent_Tq_Lim_Filter_DataStore())) ? rtb_Switch_h :
    (Overcurrent_Tq_Lim_Filter_DataStore());

  /* Sum: '<S147>/Sum1' incorporates:
   *  Constant: '<S147>/Constant'
   *  Product: '<S147>/Product'
   *  Product: '<S147>/Product1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S146>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S146>/motohawk_prelookup'
   *  Sum: '<S147>/Sum'
   *  UnitDelay: '<S147>/Unit Delay'
   */
  Mooventure2016_Rev5_B.s147_Sum1 = (1.0 - rtb_Switch_h) *
    Mooventure2016_Rev5_DWork.s147_UnitDelay_DSTATE +
    rtb_motohawk_interpolation_1d * rtb_Switch_h;

  /* Switch: '<S98>/Switch1' incorporates:
   *  Constant: '<S98>/Constant1'
   *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration1'
   */
  if ((CurrentLimitingEnabled_DataStore()) != 0.0) {
    rtb_Switch_h = Mooventure2016_Rev5_B.s147_Sum1;
  } else {
    rtb_Switch_h = 1.0;
  }

  /* End of Switch: '<S98>/Switch1' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S174>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3697p0004_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3697p0004_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s174_AgeCount + 1) >
        Mooventure2016_Rev5_B.s174_AgeCount)
      Mooventure2016_Rev5_B.s174_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0] & 0x0000000F)) ;
      Mooventure2016_Rev5_B.s174_Shift_Position = (real_T) tmp0;
      Mooventure2016_Rev5_B.s174_AgeCount = 0;
    }
  }

  /* MATLAB Function Block: '<S174>/Embedded MATLAB Function' */

  /* MATLAB Function 'Foreground/Inputs/Driver Inputs/Embedded MATLAB Function': '<S275>:1' */
  /*  Park, Reverse, Drive, Low */
  if (Mooventure2016_Rev5_B.s174_Shift_Position == 12.0) {
    /* '<S275>:1:4' */
    /* '<S275>:1:5' */
    Mooventure2016_Rev5_B.s275_posOut = 1.0;

    /*  in reverse */
    /* '<S275>:1:6' */
    rtb_UnitDelay_o = 0.0;
  } else if (Mooventure2016_Rev5_B.s174_Shift_Position == 8.0) {
    /* '<S275>:1:7' */
    /* '<S275>:1:8' */
    Mooventure2016_Rev5_B.s275_posOut = 3.0;

    /*  in drive */
    /* '<S275>:1:9' */
    rtb_UnitDelay_o = 0.0;
  } else if (Mooventure2016_Rev5_B.s174_Shift_Position == 4.0) {
    /* '<S275>:1:10' */
    /* '<S275>:1:11' */
    Mooventure2016_Rev5_B.s275_posOut = 3.0;

    /*  in ecoMode drive */
    /* '<S275>:1:12' */
    rtb_UnitDelay_o = 1.0;
  } else {
    /* '<S275>:1:14' */
    Mooventure2016_Rev5_B.s275_posOut = 2.0;

    /*  in neutral */
    /* '<S275>:1:15' */
    rtb_UnitDelay_o = 0.0;
  }

  /* End of MATLAB Function Block: '<S174>/Embedded MATLAB Function' */

  /* Outputs for Enabled SubSystem: '<S98>/Neutral' incorporates:
   *  EnablePort: '<S141>/Enable'
   */
  /* RelationalOperator: '<S135>/Compare' incorporates:
   *  Constant: '<S135>/Constant'
   *  Constant: '<S141>/Constant'
   */
  if (Mooventure2016_Rev5_B.s275_posOut == 2.0) {
    Mooventure2016_Rev5_B.s98_Torque_Direction = 0.0;
  }

  /* End of RelationalOperator: '<S135>/Compare' */
  /* End of Outputs for SubSystem: '<S98>/Neutral' */

  /* Outputs for Enabled SubSystem: '<S98>/Drive' incorporates:
   *  EnablePort: '<S139>/Enable'
   */
  /* RelationalOperator: '<S136>/Compare' incorporates:
   *  Constant: '<S136>/Constant'
   */
  if (Mooventure2016_Rev5_B.s275_posOut == 3.0) {
    if (!Mooventure2016_Rev5_DWork.s98_Drive_MODE) {
      Mooventure2016_Rev5_DWork.s98_Drive_MODE = TRUE;
    }

    /* If: '<S152>/If' incorporates:
     *  Constant: '<S139>/Constant1'
     *  Inport: '<S153>/In1'
     *  Inport: '<S154>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S152>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S152>/override_enable'
     */
    if ((Torque_Reverse_Override_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S152>/NewValue' incorporates:
       *  ActionPort: '<S153>/Action Port'
       */
      Mooventure2016_Rev5_B.s98_Torque_Direction =
        (Torque_Reverse_Override_new_DataStore());

      /* S-Function (motohawk_sfun_code_cover): '<S153>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(15);
      }

      /* End of Outputs for SubSystem: '<S152>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S152>/OldValue' incorporates:
       *  ActionPort: '<S154>/Action Port'
       */
      Mooventure2016_Rev5_B.s98_Torque_Direction = 1.0;

      /* S-Function (motohawk_sfun_code_cover): '<S154>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(16);
      }

      /* End of Outputs for SubSystem: '<S152>/OldValue' */
    }

    /* End of If: '<S152>/If' */
  } else {
    if (Mooventure2016_Rev5_DWork.s98_Drive_MODE) {
      /* Disable for Outport: '<S139>/IPT_Torque' */
      Mooventure2016_Rev5_B.s98_Torque_Direction = 0.0;
      Mooventure2016_Rev5_DWork.s98_Drive_MODE = FALSE;
    }
  }

  /* End of RelationalOperator: '<S136>/Compare' */
  /* End of Outputs for SubSystem: '<S98>/Drive' */

  /* RelationalOperator: '<S137>/Compare' incorporates:
   *  Constant: '<S137>/Constant'
   */
  rtb_Compare_nm = (Mooventure2016_Rev5_B.s275_posOut == 1.0);

  /* Outputs for Enabled SubSystem: '<S98>/Reverse' incorporates:
   *  EnablePort: '<S142>/Enable'
   */
  if (rtb_Compare_nm) {
    if (!Mooventure2016_Rev5_DWork.s98_Reverse_MODE) {
      Mooventure2016_Rev5_DWork.s98_Reverse_MODE = TRUE;
    }

    /* If: '<S156>/If' incorporates:
     *  Constant: '<S142>/Constant1'
     *  Inport: '<S157>/In1'
     *  Inport: '<S158>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S156>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S156>/override_enable'
     */
    if ((Torque_Reverse_Override69_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S156>/NewValue' incorporates:
       *  ActionPort: '<S157>/Action Port'
       */
      Mooventure2016_Rev5_B.s98_Torque_Direction =
        (Torque_Reverse_Override69_new_DataStore());

      /* S-Function (motohawk_sfun_code_cover): '<S157>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(17);
      }

      /* End of Outputs for SubSystem: '<S156>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S156>/OldValue' incorporates:
       *  ActionPort: '<S158>/Action Port'
       */
      Mooventure2016_Rev5_B.s98_Torque_Direction = -1.0;

      /* S-Function (motohawk_sfun_code_cover): '<S158>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(18);
      }

      /* End of Outputs for SubSystem: '<S156>/OldValue' */
    }

    /* End of If: '<S156>/If' */
  } else {
    if (Mooventure2016_Rev5_DWork.s98_Reverse_MODE) {
      /* Disable for Outport: '<S142>/IPT_Torque' */
      Mooventure2016_Rev5_B.s98_Torque_Direction = 0.0;
      Mooventure2016_Rev5_DWork.s98_Reverse_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S98>/Reverse' */
  /* S-Function Block: <S174>/motohawk_ain4 Resource: Throttle_Position */
  Mooventure2016_Rev5_B.s174_Throttle_Position =
    Throttle_Position_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* S-Function (motohawk_sfun_read_canmsg): '<S174>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3698p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3698p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s174_AgeCount_j + 1) >
        Mooventure2016_Rev5_B.s174_AgeCount_j)
      Mooventure2016_Rev5_B.s174_AgeCount_j++;
    if (msg_valid) {
      uint16_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      Mooventure2016_Rev5_B.s174_Brake_Position = (real_T) tmp0;
      Mooventure2016_Rev5_B.s174_AgeCount_j = 0;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S170>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3262p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3262p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s170_AgeCount + 1) >
        Mooventure2016_Rev5_B.s170_AgeCount)
      Mooventure2016_Rev5_B.s170_AgeCount++;
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
      Mooventure2016_Rev5_B.s170_JCS_PackIdentifier = (real_T) tmp0;
      Mooventure2016_Rev5_B.s170_PackState = (real_T) tmp1;
      Mooventure2016_Rev5_B.s170_PrechargeState = (real_T) tmp2;
      Mooventure2016_Rev5_B.s170_HVIL_Status = (real_T) tmp3;
      Mooventure2016_Rev5_B.s170_IsolationStatus = (real_T) tmp4;
      Mooventure2016_Rev5_B.s170_WakeSignal = (real_T) tmp5;
      Mooventure2016_Rev5_B.s170_SleepInhibited = (real_T) tmp6;
      Mooventure2016_Rev5_B.s170_CellBalanceingActive = (boolean_T) tmp7;
      Mooventure2016_Rev5_B.s170_MILState = (real_T) tmp8;
      Mooventure2016_Rev5_B.s170_StateOfCharge = ((real_T) tmp9) / ((real_T) 2);
      Mooventure2016_Rev5_B.s170_PS_RollingCounter = (real_T) tmp10;
      Mooventure2016_Rev5_B.s170_AgeCount = 0;
    }
  }

  /* S-Function Block: <S239>/motohawk_delta_time */
  rtb_Switch_mf = 10.0;

  /* Product: '<S239>/Product' incorporates:
   *  MinMax: '<S239>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S239>/motohawk_calibration'
   */
  rtb_Switch_mf /= (rtb_Switch_mf >= (SOCFilt_DataStore())) || rtIsNaN
    ((SOCFilt_DataStore())) ? rtb_Switch_mf : (SOCFilt_DataStore());

  /* Sum: '<S240>/Sum1' incorporates:
   *  Constant: '<S240>/Constant'
   *  Product: '<S240>/Product'
   *  Product: '<S240>/Product1'
   *  Sum: '<S240>/Sum'
   *  UnitDelay: '<S240>/Unit Delay'
   */
  rtb_Sum1 = (1.0 - rtb_Switch_mf) *
    Mooventure2016_Rev5_DWork.s240_UnitDelay_DSTATE +
    Mooventure2016_Rev5_B.s170_StateOfCharge * rtb_Switch_mf;

  /* Outputs for Atomic SubSystem: '<S97>/Embedded MATLAB Function' */
  /* MATLAB Function Block: '<S133>/Embedded MATLAB Function' incorporates:
   *  Logic: '<S97>/Logical Operator5'
   *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_data_read): '<S97>/motohawk_data_read'
   */

  /* MATLAB Function 'Foreground/Control/Hybrid Control Code/Hybrid state limits1/Embedded MATLAB Function/Embedded MATLAB Function': '<S134>:1' */
  if ((!Torque_Enable_DataStore()) || (rtb_Sum1 <= (SafetyModeEnterSOC_DataStore
        ()))) {
    /* '<S134>:1:2' */
    /* '<S134>:1:3' */
    rtb_UnitDelay_o = 0.0;
  } else if ((rtb_Sum1 > (SafetyModeEnterSOC_DataStore())) && (rtb_Sum1 <=
              (CrawlHomeEnterSOC_DataStore()))) {
    /* '<S134>:1:4' */
    /* '<S134>:1:5' */
    rtb_UnitDelay_o = 1.0;
  } else if ((rtb_UnitDelay_o == 1.0) && (rtb_Sum1 >
              (CrawlHomeEnterSOC_DataStore()))) {
    /* '<S134>:1:6' */
    /* '<S134>:1:7' */
    rtb_UnitDelay_o = 2.0;
  } else {
    /* '<S134>:1:9' */
    rtb_UnitDelay_o = 3.0;
  }

  /* End of MATLAB Function Block: '<S133>/Embedded MATLAB Function' */
  /* End of Outputs for SubSystem: '<S97>/Embedded MATLAB Function' */

  /* MATLAB Function Block: '<S10>/Embedded MATLAB Function' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S10>/motohawk_fault_action'
   */

  /* MATLAB Function 'Foreground/Control/Hybrid Control Code/Embedded MATLAB Function': '<S96>:1' */
  if (GetFaultActionStatus(12)) {
    /* '<S96>:1:2' */
    /* '<S96>:1:3' */
    Mooventure2016_Rev5_B.s96_state = 1.0;
  } else {
    /* '<S96>:1:5' */
    Mooventure2016_Rev5_B.s96_state = rtb_UnitDelay_o;
  }

  /* End of MATLAB Function Block: '<S10>/Embedded MATLAB Function' */
  /* If: '<S102>/If' incorporates:
   *  Inport: '<S165>/In1'
   *  Inport: '<S166>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S102>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S102>/override_enable'
   */
  if ((HybridStateOverride_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S102>/NewValue' incorporates:
     *  ActionPort: '<S165>/Action Port'
     */
    rtb_Merge_l = (HybridStateOverride_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S165>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(21);
    }

    /* End of Outputs for SubSystem: '<S102>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S102>/OldValue' incorporates:
     *  ActionPort: '<S166>/Action Port'
     */
    rtb_Merge_l = Mooventure2016_Rev5_B.s96_state;

    /* S-Function (motohawk_sfun_code_cover): '<S166>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(22);
    }

    /* End of Outputs for SubSystem: '<S102>/OldValue' */
  }

  /* End of If: '<S102>/If' */

  /* SwitchCase: '<S10>/Switch Case1' incorporates:
   *  Constant: '<S100>/Constant'
   *  Constant: '<S100>/Constant2'
   *  Constant: '<S93>/Constant'
   *  Constant: '<S95>/Constant'
   *  Constant: '<S99>/Constant'
   */
  switch ((int32_T)rtb_Merge_l) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S10>/Safety' incorporates:
     *  ActionPort: '<S100>/Action Port'
     */
    Mooventure2016_Rev5_B.s10_motor_Torque = 0.0;
    Mooventure2016_Rev5_B.s10_motor_Enable = 0.0;

    /* End of Outputs for SubSystem: '<S10>/Safety' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S10>/CrawlHomeMode' incorporates:
     *  ActionPort: '<S93>/Action Port'
     */
    /* DataTypeConversion: '<S93>/Data Type Conversion' */
    rtb_motor_Torque_g = (real_T)Mooventure2016_Rev5_B.s174_Throttle_Position;

    /* MATLAB Function Block: '<S93>/Gas Pedal Scaling' */
    Mooventure2016_Rev5_GasPedalScaling(rtb_motor_Torque_g,
      &Mooventure2016_Rev5_B.s93_sf_GasPedalScaling);

    /* S-Function Block: <S93>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (safetyMode_AccelIn_DataStore()) =
        Mooventure2016_Rev5_B.s93_sf_GasPedalScaling.s105_throttleOut;
      (safetyMode_AccelIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s93_sf_GasPedalScaling.s105_throttleOut,
         (safetyMode_AccelIdxArr_DataStore()), 21,
         (safetyMode_AccelIdx_DataStore()));
      rtb_motohawk_prelookup_m = (safetyMode_AccelIdx_DataStore());
    }

    /* S-Function Block: <S93>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_d = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_m, (real_T *)
         ((safetyMode_Accel_MapTbl_DataStore())), 21);
      (safetyMode_Accel_Map_DataStore()) = rtb_motohawk_interpolation_1d_d;
    }

    /* MATLAB Function Block: '<S93>/Brake Pedal Scaling' */
    Mooventure2016_Rev5_BrakePedalScaling
      (Mooventure2016_Rev5_B.s174_Brake_Position, rtb_Compare_nm,
       &Mooventure2016_Rev5_B.s93_sf_BrakePedalScaling);

    /* S-Function Block: <S93>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (safetyMode_BrakeIn_DataStore()) =
        Mooventure2016_Rev5_B.s93_sf_BrakePedalScaling.s103_brakeOut;
      (safetyMode_BrakeIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s93_sf_BrakePedalScaling.s103_brakeOut,
         (safetyMode_BrakeIdxArr_DataStore()), 21,
         (safetyMode_BrakeIdx_DataStore()));
      rtb_motohawk_prelookup1_o = (safetyMode_BrakeIdx_DataStore());
    }

    /* S-Function Block: <S93>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_n = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_o, (real_T *)
         ((safetyMode_Brake_MapTbl_DataStore())), 21);
      (safetyMode_Brake_Map_DataStore()) = rtb_motohawk_interpolation_1d1_n;
    }

    /* Product: '<S93>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S93>/motohawk_calibration7'
     */
    rtb_Product_j = (RPM_to_Wheel_Speed_Multiplier_safetyMode_DataStore()) *
      Mooventure2016_Rev5_B.s327_Merge;

    /* Stateflow: '<S93>/Chart' */
    Mooventure2016_Rev5_Chart(rtb_motohawk_interpolation_1d_d,
      rtb_motohawk_interpolation_1d1_n, rtb_Product_j,
      (accelStart_Pedal_safetyMode_DataStore()),
      (accelEnd_Pedal_safetyMode_DataStore()),
      (brakeStart_Pedal_safetyMode_DataStore()),
      (brakeEnd_Pedal_safetyMode_DataStore()),
      (regenStart_Speed_safetyMode_DataStore()),
      (regenEnd_Speed_safetyMode_DataStore()), (dragTorque_safetyMode_DataStore()),
      &Mooventure2016_Rev5_B.s93_sf_Chart,
      &Mooventure2016_Rev5_DWork.s93_sf_Chart);

    /* Product: '<S93>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S93>/motohawk_calibration8'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s93_sf_Chart.s104_driveTorque *
      (driveMaxTorque_safetyMode_DataStore());

    /* Sum: '<S106>/Add' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration2'
     */
    rtb_UnitDelay_m = (CrawlHomeEnterSOC_DataStore()) -
      (SafetyModeEnterSOC_DataStore());

    /* Product: '<S106>/Divide' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration1'
     *  Sum: '<S106>/Sum'
     */
    rtb_UnitDelay_m = ((rtb_Sum1 - (CrawlHomeEnterSOC_DataStore())) +
                       rtb_UnitDelay_m) / rtb_UnitDelay_m;

    /* Product: '<S106>/Product' incorporates:
     *  Product: '<S93>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S93>/motohawk_calibration9'
     *  Saturate: '<S106>/Saturation'
     *  Sum: '<S93>/Sum'
     */
    Mooventure2016_Rev5_B.s10_motor_Torque =
      (Mooventure2016_Rev5_B.s93_sf_Chart.s104_regenTorque *
       (regenMaxTorque_safetyMode_DataStore()) + rtb_UnitDelay_o) *
      (rtb_UnitDelay_m >= 1.0 ? 1.0 : rtb_UnitDelay_m <= 0.0 ? 0.0 :
       rtb_UnitDelay_m);
    Mooventure2016_Rev5_B.s10_motor_Enable = 1.0;

    /* End of Outputs for SubSystem: '<S10>/CrawlHomeMode' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S10>/EcoMode' incorporates:
     *  ActionPort: '<S95>/Action Port'
     */
    /* DataTypeConversion: '<S95>/Data Type Conversion' */
    rtb_motor_Torque_p = (real_T)Mooventure2016_Rev5_B.s174_Throttle_Position;

    /* MATLAB Function Block: '<S95>/Gas Pedal Scaling' */
    Mooventure2016_Rev5_GasPedalScaling(rtb_motor_Torque_p,
      &Mooventure2016_Rev5_B.s95_sf_GasPedalScaling);

    /* S-Function Block: <S95>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (EcoMode_AccelIn_DataStore()) =
        Mooventure2016_Rev5_B.s95_sf_GasPedalScaling.s105_throttleOut;
      (EcoMode_AccelIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s95_sf_GasPedalScaling.s105_throttleOut,
         (EcoMode_AccelIdxArr_DataStore()), 21, (EcoMode_AccelIdx_DataStore()));
      rtb_motohawk_prelookup_f = (EcoMode_AccelIdx_DataStore());
    }

    /* S-Function Block: <S95>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_n = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_f, (real_T *) ((EcoMode_Accel_MapTbl_DataStore())),
         21);
      (EcoMode_Accel_Map_DataStore()) = rtb_motohawk_interpolation_1d_n;
    }

    /* MATLAB Function Block: '<S95>/Brake Pedal Scaling' */
    Mooventure2016_Rev5_BrakePedalScaling
      (Mooventure2016_Rev5_B.s174_Brake_Position, rtb_Compare_nm,
       &Mooventure2016_Rev5_B.s95_sf_BrakePedalScaling);

    /* S-Function Block: <S95>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (EcoMode_BrakeIn_DataStore()) =
        Mooventure2016_Rev5_B.s95_sf_BrakePedalScaling.s103_brakeOut;
      (EcoMode_BrakeIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s95_sf_BrakePedalScaling.s103_brakeOut,
         (EcoMode_BrakeIdxArr_DataStore()), 21, (EcoMode_BrakeIdx_DataStore()));
      rtb_motohawk_prelookup1_p = (EcoMode_BrakeIdx_DataStore());
    }

    /* S-Function Block: <S95>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_p = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_p, (real_T *) ((EcoMode_Brake_MapTbl_DataStore())),
         21);
      (EcoMode_Brake_Map_DataStore()) = rtb_motohawk_interpolation_1d1_p;
    }

    /* Product: '<S95>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S95>/motohawk_calibration7'
     */
    rtb_Product_le = (RPM_to_Wheel_Speed_Multiplier_ecoMode_DataStore()) *
      Mooventure2016_Rev5_B.s327_Merge;

    /* Stateflow: '<S95>/Chart' */
    Mooventure2016_Rev5_Chart(rtb_motohawk_interpolation_1d_n,
      rtb_motohawk_interpolation_1d1_p, rtb_Product_le,
      (accelStart_Pedal_ecoMode_DataStore()), (accelEnd_Pedal_ecoMode_DataStore()),
                              (brakeStart_Pedal_ecoMode_DataStore()),
      (brakeEnd_Pedal_ecoMode_DataStore()), (regenStart_Speed_ecoMode_DataStore()),
                              (regenEnd_Speed_ecoMode_DataStore()),
      (dragTorque_ecoMode_DataStore()), &Mooventure2016_Rev5_B.s95_sf_Chart,
      &Mooventure2016_Rev5_DWork.s95_sf_Chart);

    /* Product: '<S95>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S95>/motohawk_calibration8'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s95_sf_Chart.s104_driveTorque *
      (driveMaxTorque_ecoMode_DataStore());

    /* Sum: '<S95>/Sum' incorporates:
     *  Product: '<S95>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S95>/motohawk_calibration9'
     */
    Mooventure2016_Rev5_B.s10_motor_Torque =
      Mooventure2016_Rev5_B.s95_sf_Chart.s104_regenTorque *
      (regenMaxTorque_ecoMode_DataStore()) + rtb_UnitDelay_o;
    Mooventure2016_Rev5_B.s10_motor_Enable = 1.0;

    /* End of Outputs for SubSystem: '<S10>/EcoMode' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S10>/SUVMode' incorporates:
     *  ActionPort: '<S99>/Action Port'
     */
    /* DataTypeConversion: '<S99>/Data Type Conversion' */
    rtb_motor_Torque = (real_T)Mooventure2016_Rev5_B.s174_Throttle_Position;

    /* MATLAB Function Block: '<S99>/Gas Pedal Scaling' */
    Mooventure2016_Rev5_GasPedalScaling(rtb_motor_Torque,
      &Mooventure2016_Rev5_B.s99_sf_GasPedalScaling);

    /* S-Function Block: <S99>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (SUVMode_AccelIn_DataStore()) =
        Mooventure2016_Rev5_B.s99_sf_GasPedalScaling.s105_throttleOut;
      (SUVMode_AccelIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s99_sf_GasPedalScaling.s105_throttleOut,
         (SUVMode_AccelIdxArr_DataStore()), 21, (SUVMode_AccelIdx_DataStore()));
      rtb_motohawk_prelookup_h = (SUVMode_AccelIdx_DataStore());
    }

    /* S-Function Block: <S99>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_c = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_h, (real_T *) ((SUVMode_Accel_MapTbl_DataStore())),
         21);
      (SUVMode_Accel_Map_DataStore()) = rtb_motohawk_interpolation_1d_c;
    }

    /* MATLAB Function Block: '<S99>/Brake Pedal Scaling' */
    Mooventure2016_Rev5_BrakePedalScaling
      (Mooventure2016_Rev5_B.s174_Brake_Position, rtb_Compare_nm,
       &Mooventure2016_Rev5_B.s99_sf_BrakePedalScaling);

    /* S-Function Block: <S99>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (SUVMode_BrakeIn_DataStore()) =
        Mooventure2016_Rev5_B.s99_sf_BrakePedalScaling.s103_brakeOut;
      (SUVMode_BrakeIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s99_sf_BrakePedalScaling.s103_brakeOut,
         (SUVMode_BrakeIdxArr_DataStore()), 21, (SUVMode_BrakeIdx_DataStore()));
      rtb_motohawk_prelookup1 = (SUVMode_BrakeIdx_DataStore());
    }

    /* S-Function Block: <S99>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1, (real_T *) ((SUVMode_Brake_MapTbl_DataStore())),
         21);
      (SUVMode_Brake_Map_DataStore()) = rtb_motohawk_interpolation_1d1;
    }

    /* Product: '<S99>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration7'
     */
    rtb_Product_dp = (RPM_to_Wheel_Speed_Multiplier_SUVMode_DataStore()) *
      Mooventure2016_Rev5_B.s327_Merge;

    /* Stateflow: '<S99>/Chart' */
    Mooventure2016_Rev5_Chart(rtb_motohawk_interpolation_1d_c,
      rtb_motohawk_interpolation_1d1, rtb_Product_dp,
      (accelStart_Pedal_SUVMode_DataStore()), (accelEnd_Pedal_SUVMode_DataStore()),
                              (brakeStart_Pedal_SUVMode_DataStore()),
      (brakeEnd_Pedal_SUVMode_DataStore()), (regenStart_Speed_SUVMode_DataStore()),
                              (regenEnd_Speed_SUVMode_DataStore()),
      (dragTorque_SUVMode_DataStore()), &Mooventure2016_Rev5_B.s99_sf_Chart,
      &Mooventure2016_Rev5_DWork.s99_sf_Chart);

    /* Product: '<S99>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration8'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s99_sf_Chart.s104_driveTorque *
      (driveMaxTorque_SUVMode_DataStore());

    /* Sum: '<S99>/Sum' incorporates:
     *  Product: '<S99>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration9'
     */
    Mooventure2016_Rev5_B.s10_motor_Torque =
      Mooventure2016_Rev5_B.s99_sf_Chart.s104_regenTorque *
      (regenMaxTorque_SUVMode_DataStore()) + rtb_UnitDelay_o;
    Mooventure2016_Rev5_B.s10_motor_Enable = 1.0;

    /* End of Outputs for SubSystem: '<S10>/SUVMode' */
    break;
  }

  /* End of SwitchCase: '<S10>/Switch Case1' */

  /* Product: '<S98>/Product' */
  Mooventure2016_Rev5_B.s98_IPT_Torque_Request = rtb_Switch_h *
    Mooventure2016_Rev5_B.s98_Torque_Direction *
    Mooventure2016_Rev5_B.s10_motor_Torque;

  /* S-Function Block: <S140>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s140_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_mf = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S140>/Product' incorporates:
   *  MinMax: '<S140>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S140>/motohawk_calibration'
   */
  rtb_Switch_mf /= (rtb_Switch_mf >= (FiltConst_DataStore())) || rtIsNaN
    ((FiltConst_DataStore())) ? rtb_Switch_mf : (FiltConst_DataStore());

  /* Sum: '<S155>/Sum1' incorporates:
   *  Constant: '<S155>/Constant'
   *  Product: '<S155>/Product'
   *  Product: '<S155>/Product1'
   *  Sum: '<S155>/Sum'
   *  UnitDelay: '<S155>/Unit Delay'
   */
  rtb_Sum1_j = (1.0 - rtb_Switch_mf) *
    Mooventure2016_Rev5_DWork.s155_UnitDelay_DSTATE +
    Mooventure2016_Rev5_B.s98_IPT_Torque_Request * rtb_Switch_mf;

  /* Saturate: '<S98>/Saturation' */
  Mooventure2016_Rev5_B.s98_Saturation = rtb_Sum1_j >= 2500.0 ? 2500.0 :
    rtb_Sum1_j <= -2500.0 ? -2500.0 : rtb_Sum1_j;

  /* If: '<S143>/If' incorporates:
   *  Inport: '<S159>/In1'
   *  Inport: '<S160>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S143>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S143>/override_enable'
   */
  if ((Torque_Request_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S143>/NewValue' incorporates:
     *  ActionPort: '<S159>/Action Port'
     */
    rtb_UnitDelay_m = (Torque_Request_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S159>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(19);
    }

    /* End of Outputs for SubSystem: '<S143>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S143>/OldValue' incorporates:
     *  ActionPort: '<S160>/Action Port'
     */
    rtb_UnitDelay_m = Mooventure2016_Rev5_B.s98_Saturation;

    /* S-Function (motohawk_sfun_code_cover): '<S160>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(20);
    }

    /* End of Outputs for SubSystem: '<S143>/OldValue' */
  }

  /* End of If: '<S143>/If' */

  /* Switch: '<S109>/Switch' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S109>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S109>/motohawk_prelookup'
   */
  if (rtb_LogicalOperator5) {
    /* S-Function Block: <S109>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (Cruise_Control_PreIn_DataStore()) = Mooventure2016_Rev5_B.s127_MinMax1;
      (Cruise_Control_PreIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s127_MinMax1, (Cruise_Control_PreIdxArr_DataStore
          ()), 121, (Cruise_Control_PreIdx_DataStore()));
      rtb_motohawk_prelookup_k = (Cruise_Control_PreIdx_DataStore());
    }

    /* S-Function Block: <S109>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_e = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_k, (real_T *) ((Cruise_Control_MapTbl_DataStore())),
         121);
      (Cruise_Control_Map_DataStore()) = rtb_motohawk_interpolation_1d_e;
    }

    rtb_UnitDelay_m = rtb_motohawk_interpolation_1d_e;
  }

  /* End of Switch: '<S109>/Switch' */

  /* MATLAB Function Block: '<S101>/Torque Limiter' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration1'
   */

  /* MATLAB Function 'Foreground/Control/Hybrid Control Code/Traction Control/Torque Limiter': '<S164>:1' */
  if (fabs(rtb_UnitDelay_m) < (Traction_Control_Max_Torque_DataStore())) {
    /* '<S164>:1:3' */
    /* '<S164>:1:4' */
    rtb_UnitDelay_o = rtb_UnitDelay_m;
  } else if (fabs(rtb_UnitDelay_m) >= (Traction_Control_Max_Torque_DataStore()))
  {
    /* '<S164>:1:5' */
    /* '<S164>:1:6' */
    rtb_UnitDelay_o = rtb_UnitDelay_m;
    if (rtb_UnitDelay_m > 0.0) {
      rtb_UnitDelay_o = 1.0;
    } else if (rtb_UnitDelay_m < 0.0) {
      rtb_UnitDelay_o = -1.0;
    } else {
      if (rtb_UnitDelay_m == 0.0) {
        rtb_UnitDelay_o = 0.0;
      }
    }

    rtb_UnitDelay_o *= (Traction_Control_Max_Torque_DataStore());
  } else {
    /* '<S164>:1:8' */
    rtb_UnitDelay_o = rtb_UnitDelay_m;
  }

  /* End of MATLAB Function Block: '<S101>/Torque Limiter' */
  /* Switch: '<S101>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration'
   */
  if ((Traction_Control_Enable_DataStore()) >= 1.0) {
    Mooventure2016_Rev5_B.s101_Switch = rtb_UnitDelay_o;
  } else {
    Mooventure2016_Rev5_B.s101_Switch = rtb_UnitDelay_m;
  }

  /* End of Switch: '<S101>/Switch' */
  /* If: '<S353>/If' incorporates:
   *  Inport: '<S361>/In1'
   *  Inport: '<S362>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S353>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S353>/override_enable'
   */
  if ((ACC_torq_rqstd_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S353>/NewValue' incorporates:
     *  ActionPort: '<S361>/Action Port'
     */
    rtb_Merge_c = (ACC_torq_rqstd_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S361>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(109);
    }

    /* End of Outputs for SubSystem: '<S353>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S353>/OldValue' incorporates:
     *  ActionPort: '<S362>/Action Port'
     */
    rtb_Merge_c = Mooventure2016_Rev5_B.s101_Switch;

    /* S-Function (motohawk_sfun_code_cover): '<S362>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(110);
    }

    /* End of Outputs for SubSystem: '<S353>/OldValue' */
  }

  /* End of If: '<S353>/If' */

  /* Abs: '<S342>/Abs' */
  rtb_Switch_mf = fabs(Mooventure2016_Rev5_B.s101_Switch);

  /* Product: '<S342>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S342>/motohawk_calibration'
   */
  Mooventure2016_Rev5_B.s342_Pct_whl_trq_desired = rtb_Switch_mf /
    (Max_Motor_Torque_DataStore());

  /* If: '<S354>/If' incorporates:
   *  Inport: '<S363>/In1'
   *  Inport: '<S364>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S354>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S354>/override_enable'
   */
  if ((Pct_whl_trq_desired_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S354>/NewValue' incorporates:
     *  ActionPort: '<S363>/Action Port'
     */
    rtb_Merge_lu = (Pct_whl_trq_desired_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S363>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(111);
    }

    /* End of Outputs for SubSystem: '<S354>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S354>/OldValue' incorporates:
     *  ActionPort: '<S364>/Action Port'
     */
    rtb_Merge_lu = Mooventure2016_Rev5_B.s342_Pct_whl_trq_desired;

    /* S-Function (motohawk_sfun_code_cover): '<S364>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(112);
    }

    /* End of Outputs for SubSystem: '<S354>/OldValue' */
  }

  /* End of If: '<S354>/If' */

  /* MATLAB Function Block: '<S342>/Data Correction Motor ABS' */
  Mooventure2016_Rev5_DataCorrectionMotorFault
    (Mooventure2016_Rev5_B.s177_IPT_WheelTorqueDelivered,
     &Mooventure2016_Rev5_B.s342_sf_DataCorrectionMotorABS);

  /* If: '<S355>/If' incorporates:
   *  Inport: '<S365>/In1'
   *  Inport: '<S366>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S355>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S355>/override_enable'
   */
  if ((Power_train_torq_actual_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S355>/NewValue' incorporates:
     *  ActionPort: '<S365>/Action Port'
     */
    rtb_Merge_ny = (Power_train_torq_actual_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S365>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(113);
    }

    /* End of Outputs for SubSystem: '<S355>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S355>/OldValue' incorporates:
     *  ActionPort: '<S366>/Action Port'
     */
    rtb_Merge_ny =
      Mooventure2016_Rev5_B.s342_sf_DataCorrectionMotorABS.s87_torqueOut;

    /* S-Function (motohawk_sfun_code_cover): '<S366>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(114);
    }

    /* End of Outputs for SubSystem: '<S355>/OldValue' */
  }

  /* End of If: '<S355>/If' */

  /* MATLAB Function Block: '<S342>/Shift Position Conditioner' */

  /* MATLAB Function 'Foreground/Outputs/ABS Outputs/Shift Position Conditioner': '<S352>:1' */
  if (Mooventure2016_Rev5_B.s275_posOut == 1.0) {
    /* '<S352>:1:3' */
    /* '<S352>:1:4' */
    Mooventure2016_Rev5_B.s352_dirOut = 0.0;
  } else {
    /* '<S352>:1:6' */
    Mooventure2016_Rev5_B.s352_dirOut = 1.0;
  }

  /* End of MATLAB Function Block: '<S342>/Shift Position Conditioner' */
  /* If: '<S356>/If' incorporates:
   *  Inport: '<S367>/In1'
   *  Inport: '<S368>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S356>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S356>/override_enable'
   */
  if ((prndl_dir_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S356>/NewValue' incorporates:
     *  ActionPort: '<S367>/Action Port'
     */
    rtb_Merge_e = (prndl_dir_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S367>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(115);
    }

    /* End of Outputs for SubSystem: '<S356>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S356>/OldValue' incorporates:
     *  ActionPort: '<S368>/Action Port'
     */
    rtb_Merge_e = Mooventure2016_Rev5_B.s352_dirOut;

    /* S-Function (motohawk_sfun_code_cover): '<S368>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(116);
    }

    /* End of Outputs for SubSystem: '<S356>/OldValue' */
  }

  /* End of If: '<S356>/If' */

  /* If: '<S357>/If' incorporates:
   *  Inport: '<S369>/In1'
   *  Inport: '<S370>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S342>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S357>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S357>/override_enable'
   */
  if ((regen_torq_limit_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S357>/NewValue' incorporates:
     *  ActionPort: '<S369>/Action Port'
     */
    rtb_Merge_nz = (regen_torq_limit_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S369>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(117);
    }

    /* End of Outputs for SubSystem: '<S357>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S357>/OldValue' incorporates:
     *  ActionPort: '<S370>/Action Port'
     */
    rtb_Merge_nz = (Max_Regen_Torque_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S370>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(118);
    }

    /* End of Outputs for SubSystem: '<S357>/OldValue' */
  }

  /* End of If: '<S357>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S342>/Send CAN Messages' */
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
        if (rtb_Merge_c < -32767.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Merge_c > 32768.0000000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(rtb_Merge_c - (-32767.0000000000F));
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

  /* If: '<S359>/If' incorporates:
   *  Inport: '<S373>/In1'
   *  Inport: '<S374>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S342>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S359>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S359>/override_enable'
   */
  if ((Commanded_gen_torq_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S359>/NewValue' incorporates:
     *  ActionPort: '<S373>/Action Port'
     */
    rtb_Merge_o = (Commanded_gen_torq_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S373>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(121);
    }

    /* End of Outputs for SubSystem: '<S359>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S359>/OldValue' incorporates:
     *  ActionPort: '<S374>/Action Port'
     */
    rtb_Merge_o = (Commanded_gen_trq_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S374>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(122);
    }

    /* End of Outputs for SubSystem: '<S359>/OldValue' */
  }

  /* End of If: '<S359>/If' */

  /* Product: '<S342>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S342>/motohawk_calibration4'
   */
  Mooventure2016_Rev5_B.s342_Commanded_mot_torq =
    Mooventure2016_Rev5_B.s101_Switch / (Commanded_motor_trq_div_DataStore());

  /* If: '<S360>/If' incorporates:
   *  Inport: '<S375>/In1'
   *  Inport: '<S376>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S360>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S360>/override_enable'
   */
  if ((Commanded_motor_torq_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S360>/NewValue' incorporates:
     *  ActionPort: '<S375>/Action Port'
     */
    rtb_Merge_er = (Commanded_motor_torq_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S375>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(123);
    }

    /* End of Outputs for SubSystem: '<S360>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S360>/OldValue' incorporates:
     *  ActionPort: '<S376>/Action Port'
     */
    rtb_Merge_er = Mooventure2016_Rev5_B.s342_Commanded_mot_torq;

    /* S-Function (motohawk_sfun_code_cover): '<S376>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(124);
    }

    /* End of Outputs for SubSystem: '<S360>/OldValue' */
  }

  /* End of If: '<S360>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S342>/Send CAN Messages2' */
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
        if (rtb_Merge_o < -110.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Merge_o > 6443.5000000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)((rtb_Merge_o - (-110.0000000000F)) * (10.0000000000F));
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

  /* S-Function (motohawk_sfun_probe): '<S342>/motohawk_probe4' */
  (regen_torq_limit_prb_DataStore()) = (Max_Regen_Torque_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S342>/motohawk_probe6' */
  (Commanded_gen_torq_Prb_DataStore()) = (Commanded_gen_trq_DataStore());

  /* If: '<S358>/If' incorporates:
   *  Inport: '<S371>/In1'
   *  Inport: '<S372>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S342>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S358>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S358>/override_enable'
   */
  if ((Engine_On_ABS_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S358>/NewValue' incorporates:
     *  ActionPort: '<S371>/Action Port'
     */
    rtb_Merge_a = (Engine_On_ABS_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S371>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(119);
    }

    /* End of Outputs for SubSystem: '<S358>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S358>/OldValue' incorporates:
     *  ActionPort: '<S372>/Action Port'
     */
    rtb_Merge_a = (Engine_On_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S372>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(120);
    }

    /* End of Outputs for SubSystem: '<S358>/OldValue' */
  }

  /* End of If: '<S358>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S342>/Send CAN Messages1' */
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

  /* S-Function (motohawk_sfun_probe): '<S342>/motohawk_probe5' */
  (Engine_On_ABS_Prb_DataStore()) = (Engine_On_DataStore());

  /* Logic: '<S343>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S343>/motohawk_calibration1'
   */
  rtb_Ignition = !((Batt_Ign_Cal_DataStore()) != 0.0);

  /* S-Function Block: <S16>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s16_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_c = ((real_T) delta) * 0.000001;
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S170>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3265p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3265p0001_Receive(0, &msg_id, 0, msg_data);
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
      Mooventure2016_Rev5_B.s170_BatteryVoltage = ((real_T) tmp0) / ((real_T) 10);
      Mooventure2016_Rev5_B.s170_BatteryCurrent = (((real_T) tmp1) / ((real_T)
        10)) + ((real_T) -500);
      Mooventure2016_Rev5_B.s170_BusVoltage = ((real_T) tmp2) / ((real_T) 10);
      Mooventure2016_Rev5_B.s170_PVC_RollingCounter = (real_T) tmp3;
    }
  }

  /* S-Function Block: <S241>/motohawk_delta_time */
  rtb_Switch_mf = 10.0;

  /* Product: '<S241>/Product' incorporates:
   *  MinMax: '<S241>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration'
   */
  rtb_Switch_mf /= (rtb_Switch_mf >= (VFilt_DataStore())) || rtIsNaN
    ((VFilt_DataStore())) ? rtb_Switch_mf : (VFilt_DataStore());

  /* Sum: '<S242>/Sum1' incorporates:
   *  Constant: '<S242>/Constant'
   *  Product: '<S242>/Product'
   *  Product: '<S242>/Product1'
   *  Sum: '<S242>/Sum'
   *  UnitDelay: '<S242>/Unit Delay'
   */
  rtb_Sum1_c = (1.0 - rtb_Switch_mf) *
    Mooventure2016_Rev5_DWork.s242_UnitDelay_DSTATE +
    Mooventure2016_Rev5_B.s170_BatteryVoltage * rtb_Switch_mf;

  /* If: '<S238>/If' incorporates:
   *  Inport: '<S251>/In1'
   *  Inport: '<S252>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S238>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S238>/override_enable'
   */
  if ((Battery_Voltage_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S238>/NewValue' incorporates:
     *  ActionPort: '<S251>/Action Port'
     */
    rtb_Merge_o0 = (Battery_Voltage_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S251>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(61);
    }

    /* End of Outputs for SubSystem: '<S238>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S238>/OldValue' incorporates:
     *  ActionPort: '<S252>/Action Port'
     */
    rtb_Merge_o0 = rtb_Sum1_c;

    /* S-Function (motohawk_sfun_code_cover): '<S252>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(62);
    }

    /* End of Outputs for SubSystem: '<S238>/OldValue' */
  }

  /* End of If: '<S238>/If' */

  /* Logic: '<S6>/Logical Operator2' incorporates:
   *  Constant: '<S6>/Constant'
   *  RelationalOperator: '<S6>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S6>/motohawk_calibration'
   */
  rtb_RelationalOperator11_d = ((Automatic_Battery_Bootup_DataStore()) &&
    (rtb_Merge_o0 > 50.0));

  /* Switch: '<S16>/Switch' incorporates:
   *  Constant: '<S16>/Constant'
   *  Logic: '<S13>/Logical Operator7'
   *  S-Function (motohawk_sfun_data_read): '<S16>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S16>/motohawk_delta_time'
   *  Sum: '<S16>/Sum'
   */
  if (!rtb_RelationalOperator11_d) {
    rtb_Switch_mf = rtb_motohawk_delta_time_c + Voltage_Filt_DataStore();
  } else {
    rtb_Switch_mf = 0.0;
  }

  /* End of Switch: '<S16>/Switch' */
  /* Logic: '<S13>/Logical Operator8' incorporates:
   *  Logic: '<S13>/Logical Operator1'
   *  RelationalOperator: '<S13>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S13>/motohawk_calibration2'
   */
  rtb_LogicalOperator8 = ((!(rtb_Switch_mf >= (Voltage_Filt_Cal_DataStore()))) ||
    rtb_RelationalOperator11_d);

  /* S-Function Block: <S15>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s15_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_n = ((real_T) delta) * 0.000001;
  }

  /* Logic: '<S6>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S6>/motohawk_data_read1'
   */
  rtb_LogicalOperator5 = !Vehicle_Enable_DataStore();

  /* Logic: '<S6>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S6>/motohawk_data_read3'
   *  S-Function (motohawk_sfun_fault_action): '<S6>/motohawk_fault_action'
   */
  rtb_LogicalOperator5 = (GetFaultActionStatus(1) || rtb_LogicalOperator5 ||
    Shutdown_Req_DataStore());

  /* If: '<S14>/If' incorporates:
   *  Inport: '<S18>/In1'
   *  Inport: '<S19>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S14>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S14>/override_enable'
   */
  if ((Shutdown_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S14>/NewValue' incorporates:
     *  ActionPort: '<S18>/Action Port'
     */
    Mooventure2016_Rev5_B.s14_Merge = (Shutdown_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S18>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Battery/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(1);
    }

    /* End of Outputs for SubSystem: '<S14>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S14>/OldValue' incorporates:
     *  ActionPort: '<S19>/Action Port'
     */
    Mooventure2016_Rev5_B.s14_Merge = rtb_LogicalOperator5;

    /* S-Function (motohawk_sfun_code_cover): '<S19>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Battery/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(2);
    }

    /* End of Outputs for SubSystem: '<S14>/OldValue' */
  }

  /* End of If: '<S14>/If' */

  /* Switch: '<S15>/Switch' incorporates:
   *  Constant: '<S15>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S15>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S15>/motohawk_delta_time'
   *  Sum: '<S15>/Sum'
   */
  if (Mooventure2016_Rev5_B.s14_Merge) {
    rtb_Switch_h = rtb_motohawk_delta_time_n + Contactor_Disable_Timer_DataStore
      ();
  } else {
    rtb_Switch_h = 0.0;
  }

  /* End of Switch: '<S15>/Switch' */
  /* Logic: '<S13>/Logical Operator2' incorporates:
   *  Logic: '<S13>/Logical Operator6'
   *  RelationalOperator: '<S13>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S13>/motohawk_calibration'
   */
  Mooventure2016_Rev5_B.s13_LogicalOperator2 = ((rtb_LogicalOperator8 &&
    (!(rtb_Switch_h >= (Contactor_Disable_Delay_DataStore())))));

  /* DataTypeConversion: '<S343>/Data Type Conversion' */
  Mooventure2016_Rev5_B.s343_ConnectCommand = (int8_T)
    Mooventure2016_Rev5_B.s13_LogicalOperator2;

  /* If: '<S377>/If' incorporates:
   *  Inport: '<S379>/In1'
   *  Inport: '<S380>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S377>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S377>/override_enable'
   */
  if ((Batt_Connect_Cmd_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S377>/NewValue' incorporates:
     *  ActionPort: '<S379>/Action Port'
     */
    rtb_Merge_iq = ((int8_T)(Batt_Connect_Cmd_ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S379>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(125);
    }

    /* End of Outputs for SubSystem: '<S377>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S377>/OldValue' incorporates:
     *  ActionPort: '<S380>/Action Port'
     */
    rtb_Merge_iq = Mooventure2016_Rev5_B.s343_ConnectCommand;

    /* S-Function (motohawk_sfun_code_cover): '<S380>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(126);
    }

    /* End of Outputs for SubSystem: '<S377>/OldValue' */
  }

  /* End of If: '<S377>/If' */

  /* Logic: '<S343>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S343>/motohawk_calibration'
   */
  Mooventure2016_Rev5_B.s343_IsolationMeasurementEnable =
    !((Batt_Isolation_det_Cal_DataStore()) != 0.0);

  /* If: '<S378>/If' incorporates:
   *  Inport: '<S381>/In1'
   *  Inport: '<S382>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S378>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S378>/override_enable'
   */
  if ((Isolation_Measure_Enable_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S378>/NewValue' incorporates:
     *  ActionPort: '<S381>/Action Port'
     */
    rtb_Merge_kj = (Isolation_Measure_Enable_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S381>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(127);
    }

    /* End of Outputs for SubSystem: '<S378>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S378>/OldValue' incorporates:
     *  ActionPort: '<S382>/Action Port'
     */
    rtb_Merge_kj = Mooventure2016_Rev5_B.s343_IsolationMeasurementEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S382>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(128);
    }

    /* End of Outputs for SubSystem: '<S378>/OldValue' */
  }

  /* End of If: '<S378>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S343>/Send CAN Messages' */
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
        if (Mooventure2016_Rev5_ConstB.s343_OdometerValue < 0.0000000000F) {
          tmp3 = (uint32_T)(0UL);
        } else if (Mooventure2016_Rev5_ConstB.s343_OdometerValue >
                   1677721.5000000000F) {
          tmp3 = (uint32_T)(16777215UL);
        } else {
          tmp3 = (uint32_T)(Mooventure2016_Rev5_ConstB.s343_OdometerValue *
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

  /* S-Function (motohawk_sfun_read_canmsg): '<S171>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3478p0004_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3478p0004_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[7] & 0x00000001)) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[6] & 0x00000008) >> 3) ;
      Mooventure2016_Rev5_B.s171_HEV_CC_Defrost_Mode = (real_T) tmp0;
      Mooventure2016_Rev5_B.s171_AC_Engaged_CMD = (real_T) tmp1;
    }
  }

  /* If: '<S253>/If' incorporates:
   *  Inport: '<S255>/In1'
   *  Inport: '<S256>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S253>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S253>/override_enable'
   */
  if ((AC_Cmd_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S253>/NewValue' incorporates:
     *  ActionPort: '<S255>/Action Port'
     */
    rtb_Merge_h = (AC_Cmd_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S255>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(63);
    }

    /* End of Outputs for SubSystem: '<S253>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S253>/OldValue' incorporates:
     *  ActionPort: '<S256>/Action Port'
     */
    rtb_Merge_h = Mooventure2016_Rev5_B.s171_AC_Engaged_CMD;

    /* S-Function (motohawk_sfun_code_cover): '<S256>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(64);
    }

    /* End of Outputs for SubSystem: '<S253>/OldValue' */
  }

  /* End of If: '<S253>/If' */

  /* If: '<S254>/If' incorporates:
   *  Inport: '<S257>/In1'
   *  Inport: '<S258>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S254>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S254>/override_enable'
   */
  if ((Defrost_Mode_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S254>/NewValue' incorporates:
     *  ActionPort: '<S257>/Action Port'
     */
    rtb_Merge_nd = (Defrost_Mode_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S257>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(65);
    }

    /* End of Outputs for SubSystem: '<S254>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S254>/OldValue' incorporates:
     *  ActionPort: '<S258>/Action Port'
     */
    rtb_Merge_nd = Mooventure2016_Rev5_B.s171_HEV_CC_Defrost_Mode;

    /* S-Function (motohawk_sfun_code_cover): '<S258>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/CAN Gateway In/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(66);
    }

    /* End of Outputs for SubSystem: '<S254>/OldValue' */
  }

  /* End of If: '<S254>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S344>/Send CAN Messages' */
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
        if (rtb_Merge_nd < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_nd > 1.0000000000F) {
          tmp0 = (uint8_T)(1U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_nd != 0);
        }

        if (rtb_Merge_h < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_h > 1.0000000000F) {
          tmp1 = (uint8_T)(1U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_h != 0);
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

  /* S-Function Block: <S213>/motohawk_ain2 Resource: Radiator_Blend_Position */
  Mooventure2016_Rev5_B.s213_motohawk_ain2_o1 =
    Radiator_Blend_Position_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S218>/If' incorporates:
   *  Inport: '<S223>/In1'
   *  Inport: '<S224>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S218>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S218>/override_enable'
   */
  if ((Radiator_Blend_Valve_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S218>/NewValue' incorporates:
     *  ActionPort: '<S223>/Action Port'
     */
    rtb_Merge_bn = ((uint16_T)(Radiator_Blend_Valve_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S223>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(45);
    }

    /* End of Outputs for SubSystem: '<S218>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S218>/OldValue' incorporates:
     *  ActionPort: '<S224>/Action Port'
     */
    rtb_Merge_bn = Mooventure2016_Rev5_B.s213_motohawk_ain2_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S224>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(46);
    }

    /* End of Outputs for SubSystem: '<S218>/OldValue' */
  }

  /* End of If: '<S218>/If' */

  /* S-Function Block: <S217>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s217_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_d = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S217>/Product' incorporates:
   *  MinMax: '<S217>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S217>/motohawk_calibration'
   */
  rtb_Switch_d /= (rtb_Switch_d >= (RadLowPass_DataStore())) || rtIsNaN
    ((RadLowPass_DataStore())) ? rtb_Switch_d : (RadLowPass_DataStore());

  /* Sum: '<S222>/Sum1' incorporates:
   *  Constant: '<S222>/Constant'
   *  DataTypeConversion: '<S213>/Data Type Conversion1'
   *  Product: '<S222>/Product'
   *  Product: '<S222>/Product1'
   *  Sum: '<S222>/Sum'
   *  UnitDelay: '<S222>/Unit Delay'
   */
  rtb_Sum1_b = (1.0 - rtb_Switch_d) *
    Mooventure2016_Rev5_DWork.s222_UnitDelay_DSTATE + (real_T)rtb_Merge_bn *
    rtb_Switch_d;

  /* S-Function (motohawk_sfun_read_canmsg): '<S175>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3757p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3757p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s175_AgeCount + 1) >
        Mooventure2016_Rev5_B.s175_AgeCount)
      Mooventure2016_Rev5_B.s175_AgeCount++;
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
      Mooventure2016_Rev5_B.s175_InputVoltage = ((real_T) tmp0) * ((real_T) 2);
      Mooventure2016_Rev5_B.s175_OutputVoltage = ((real_T) tmp1) * ((real_T) 2);
      Mooventure2016_Rev5_B.s175_InputCurrentLimitMax = ((real_T) tmp2) /
        ((real_T) 2);
      Mooventure2016_Rev5_B.s175_InputCurrent = ((real_T) tmp3) / ((real_T) 2);
      Mooventure2016_Rev5_B.s175_OutputCurrent = ((real_T) tmp4) / ((real_T) 2);
      Mooventure2016_Rev5_B.s175_Eaton_HV_Charger_Temperature = ((real_T) tmp5)
        + ((real_T) -40);
      Mooventure2016_Rev5_B.s175_IgnitionStatus = (boolean_T) tmp6;
      Mooventure2016_Rev5_B.s175_ChargerState = (real_T) tmp7;
      Mooventure2016_Rev5_B.s175_FaultSeverityIndicator = (boolean_T) tmp8;
      Mooventure2016_Rev5_B.s175_MessageCounter = (real_T) tmp9;
      Mooventure2016_Rev5_B.s175_MessageChecksum = (real_T) tmp10;
      Mooventure2016_Rev5_B.s175_AgeCount = 0;
    }
  }

  /* If: '<S281>/If' incorporates:
   *  Inport: '<S293>/In1'
   *  Inport: '<S294>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S281>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S281>/override_enable'
   */
  if ((Eaton_HV_Charger_Temperature_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S281>/NewValue' incorporates:
     *  ActionPort: '<S293>/Action Port'
     */
    rtb_Merge_oq = (Eaton_HV_Charger_Temperature_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S293>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(73);
    }

    /* End of Outputs for SubSystem: '<S281>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S281>/OldValue' incorporates:
     *  ActionPort: '<S294>/Action Port'
     */
    rtb_Merge_oq = Mooventure2016_Rev5_B.s175_Eaton_HV_Charger_Temperature;

    /* S-Function (motohawk_sfun_code_cover): '<S294>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(74);
    }

    /* End of Outputs for SubSystem: '<S281>/OldValue' */
  }

  /* End of If: '<S281>/If' */

  /* RelationalOperator: '<S7>/1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration'
   */
  rtb_LogicalOperator5 = (rtb_Merge_oq >= (Pump_On_Temp_DataStore()));

  /* S-Function (motohawk_sfun_read_canmsg): '<S177>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3886p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3886p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s177_AgeCount_m + 1) >
        Mooventure2016_Rev5_B.s177_AgeCount_m)
      Mooventure2016_Rev5_B.s177_AgeCount_m++;
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
      Mooventure2016_Rev5_B.s177_IPT_InverterTemperature = ((real_T) tmp0) +
        ((real_T) -40);
      Mooventure2016_Rev5_B.s177_IPT_MotorTemperature = ((real_T) tmp1) +
        ((real_T) -40);
      Mooventure2016_Rev5_B.s177_IPT_MaxTorqueAvailGen = (real_T) tmp2;
      Mooventure2016_Rev5_B.s177_IPT_MaxTorqueAvailMotor = (real_T) tmp3;
      Mooventure2016_Rev5_B.s177_IPT_HVDCVoltage = (real_T) tmp4;
      Mooventure2016_Rev5_B.s177_IPT_ErrorCategory = (real_T) tmp5;
      Mooventure2016_Rev5_B.s177_IPT_IPTReady = (real_T) tmp6;
      Mooventure2016_Rev5_B.s177_IPT_IPTAwake = (real_T) tmp7;
      Mooventure2016_Rev5_B.s177_IPT_MotorReady = (boolean_T) tmp8;
      Mooventure2016_Rev5_B.s177_IPT_MaxWasteAvailable = ((real_T) tmp9) *
        ((real_T) 50);
      Mooventure2016_Rev5_B.s177_AgeCount_m = 0;
    }
  }

  /* RelationalOperator: '<S7>/2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration'
   */
  rtb_LogicalOperator8 = (Mooventure2016_Rev5_B.s177_IPT_InverterTemperature >=
                          (Pump_On_Temp_DataStore()));

  /* S-Function (motohawk_sfun_read_canmsg): '<S170>/Read CAN Message4' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3266p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3266p0001_Receive(0, &msg_id, 0, msg_data);
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
      Mooventure2016_Rev5_B.s170_MaxCellVoltage = ((real_T) tmp0) / ((real_T)
        1000);
      Mooventure2016_Rev5_B.s170_MinCellVoltage = ((real_T) tmp1) / ((real_T)
        1000);
      Mooventure2016_Rev5_B.s170_MaxCellTemperature = (((real_T) tmp2) /
        ((real_T) 2)) + ((real_T) -40);
      Mooventure2016_Rev5_B.s170_MinCellTemperature = (((real_T) tmp3) /
        ((real_T) 2)) + ((real_T) -40);
      Mooventure2016_Rev5_B.s170_CoolantTemperature = (((real_T) tmp4) /
        ((real_T) 2)) + ((real_T) -40);
      Mooventure2016_Rev5_B.s170_DPI_RollingCounter = (real_T) tmp5;
    }
  }

  /* Logic: '<S7>/Logical Operator7' incorporates:
   *  Logic: '<S7>/Hot'
   *  RelationalOperator: '<S7>/3'
   *  RelationalOperator: '<S7>/4'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration'
   *  S-Function (motohawk_sfun_fault_action): '<S7>/motohawk_fault_action1'
   */
  rtb_LogicalOperator8 = (GetFaultActionStatus(10) || (rtb_LogicalOperator5 ||
    rtb_LogicalOperator8 || (Mooventure2016_Rev5_B.s170_MinCellTemperature >=
    (Pump_On_Temp_DataStore())) ||
    (Mooventure2016_Rev5_B.s170_MaxCellTemperature >= (Pump_On_Temp_DataStore()))));

  /* Logic: '<S7>/Very Cold' incorporates:
   *  Logic: '<S7>/Logical Operator3'
   *  RelationalOperator: '<S7>/10'
   *  RelationalOperator: '<S7>/11'
   *  RelationalOperator: '<S7>/12'
   *  RelationalOperator: '<S7>/9'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_data_read): '<S7>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s7_VeryCold = (((Eaton_Plugged_In_DataStore() &&
    (rtb_Merge_oq <= (Too_Cold_Temp_DataStore()))) ||
    (Mooventure2016_Rev5_B.s177_IPT_InverterTemperature <=
     (Too_Cold_Temp_DataStore())) ||
    (Mooventure2016_Rev5_B.s170_MinCellTemperature <= (Too_Cold_Temp_DataStore()))
    || (Mooventure2016_Rev5_B.s170_MaxCellTemperature <=
        (Too_Cold_Temp_DataStore()))));

  /* Logic: '<S7>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S7>/motohawk_data_read1'
   */
  rtb_LogicalOperator5 = !Eaton_Plugged_In_DataStore();

  /* Logic: '<S7>/Warmed' incorporates:
   *  Logic: '<S7>/Logical Operator4'
   *  RelationalOperator: '<S7>/13'
   *  RelationalOperator: '<S7>/14'
   *  RelationalOperator: '<S7>/15'
   *  RelationalOperator: '<S7>/16'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration3'
   */
  Mooventure2016_Rev5_B.s7_Warmed = (((rtb_LogicalOperator5 || (rtb_Merge_oq >=
                                        (Warmed_Up_Temp_DataStore()))) &&
    (Mooventure2016_Rev5_B.s177_IPT_InverterTemperature >=
     (Warmed_Up_Temp_DataStore())) &&
    (Mooventure2016_Rev5_B.s170_MinCellTemperature >= (Warmed_Up_Temp_DataStore()))
    && (Mooventure2016_Rev5_B.s170_MaxCellTemperature >=
        (Warmed_Up_Temp_DataStore()))));

  /* S-Function (motohawk_sfun_read_canmsg): '<S174>/Read CAN Message6' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3700p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3700p0001_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[1] & 0x0000000F)) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[0] & 0x0000000F)) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[3] & 0x0000000F)) ;
      ((uint8_T *)(&tmp3))[0] = ((msg_data[2] & 0x0000000F)) ;
      Mooventure2016_Rev5_B.s174_DRIVER_1 = (real_T) tmp0;
      Mooventure2016_Rev5_B.s174_DRIVER_10 = (real_T) tmp1;
      Mooventure2016_Rev5_B.s174_PASSENGER_1 = (real_T) tmp2;
      Mooventure2016_Rev5_B.s174_PASSENGER_10 = (real_T) tmp3;
    }
  }

  /* MATLAB Function Block: '<S174>/Embedded MATLAB Function1' */

  /* MATLAB Function 'Foreground/Inputs/Driver Inputs/Embedded MATLAB Function1': '<S276>:1' */
  /* '<S276>:1:3' */
  Mooventure2016_Rev5_B.s276_driverTemp = Mooventure2016_Rev5_B.s174_DRIVER_10 *
    10.0 + Mooventure2016_Rev5_B.s174_DRIVER_1;

  /* RelationalOperator: '<S7>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration10'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s276_driverTemp >
    (Heat_On_Driver_Threshold_DataStore()));

  /* S-Function Block: <S213>/motohawk_ain4 Resource: Heater_Temp */
  Mooventure2016_Rev5_B.s213_motohawk_ain4_o1 = Heater_Temp_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S219>/If' incorporates:
   *  Inport: '<S225>/In1'
   *  Inport: '<S226>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S219>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S219>/override_enable'
   */
  if ((Heater_Temp_Raw_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S219>/NewValue' incorporates:
     *  ActionPort: '<S225>/Action Port'
     */
    rtb_Merge_bn = ((uint16_T)(Heater_Temp_Raw_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S225>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(47);
    }

    /* End of Outputs for SubSystem: '<S219>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S219>/OldValue' incorporates:
     *  ActionPort: '<S226>/Action Port'
     */
    rtb_Merge_bn = Mooventure2016_Rev5_B.s213_motohawk_ain4_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S226>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(48);
    }

    /* End of Outputs for SubSystem: '<S219>/OldValue' */
  }

  /* End of If: '<S219>/If' */

  /* DataTypeConversion: '<S213>/Data Type Conversion2' */
  rtb_Heater_Temp_Raw = rtb_Merge_bn;

  /* MATLAB Function Block: '<S213>/Embedded MATLAB Function' */

  /* MATLAB Function 'Foreground/Inputs/Analog Inputs/Coolant/Embedded MATLAB Function': '<S215>:1' */
  /* '<S215>:1:3' */
  Mooventure2016_Rev5_B.s215_temp_reading = 0.4254 * (real_T)rtb_Heater_Temp_Raw
    - 31.404;

  /* S-Function (motohawk_sfun_data_read): '<S7>/motohawk_data_read2' */
  rtb_RelationalOperator11_d = Eaton_Plugged_In_DataStore();

  /* Product: '<S7>/Product' */
  rtb_Switch_d = (real_T)rtb_RelationalOperator11_d * rtb_Merge_oq;

  /* MinMax: '<S7>/MinMax' */
  rtb_UnitDelay_m = (rtb_Switch_d >=
                     Mooventure2016_Rev5_B.s177_IPT_InverterTemperature) ||
    rtIsNaN(Mooventure2016_Rev5_B.s177_IPT_InverterTemperature) ? rtb_Switch_d :
    Mooventure2016_Rev5_B.s177_IPT_InverterTemperature;
  rtb_UnitDelay_m = (rtb_UnitDelay_m >=
                     Mooventure2016_Rev5_B.s170_MinCellTemperature) || rtIsNaN
    (Mooventure2016_Rev5_B.s170_MinCellTemperature) ? rtb_UnitDelay_m :
    Mooventure2016_Rev5_B.s170_MinCellTemperature;
  rtb_UnitDelay_o = (rtb_UnitDelay_m >=
                     Mooventure2016_Rev5_B.s170_MaxCellTemperature) || rtIsNaN
    (Mooventure2016_Rev5_B.s170_MaxCellTemperature) ? rtb_UnitDelay_m :
    Mooventure2016_Rev5_B.s170_MaxCellTemperature;

  /* Stateflow: '<S7>/BlendValving' incorporates:
   *  MinMax: '<S7>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration9'
   */

  /* Gateway: Foreground/Control/Coolant Control/BlendValving */
  /* During: Foreground/Control/Coolant Control/BlendValving */
  if (Mooventure2016_Rev5_DWork.s20_is_active_c12_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Coolant Control/BlendValving */
    Mooventure2016_Rev5_DWork.s20_is_active_c12_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S20>:10' */
    Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_SystemIdle;
  } else {
    switch (Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Heat1:
      /* During 'Heat1': '<S20>:80' */
      if (rtb_UnitDelay_o < (Heat2_Threshold_DataStore())) {
        /* Transition: '<S20>:95' */
        Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Heat2;
      } else if (Mooventure2016_Rev5_B.s7_Warmed == TRUE) {
        /* Transition: '<S20>:196' */
        Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SystemIdle;
      } else {
        Mooventure2016_Rev5_B.s20_Heat1 = TRUE;
        Mooventure2016_Rev5_B.s20_Heat2 = FALSE;
        Mooventure2016_Rev5_B.s20_Heat3 = FALSE;
        Mooventure2016_Rev5_B.s20_Heat4 = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Heat2:
      /* During 'Heat2': '<S20>:91' */
      if (rtb_UnitDelay_o < (Heat3_Threshold_DataStore())) {
        /* Transition: '<S20>:105' */
        Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Heat3;
      } else if (rtb_UnitDelay_o > (Heat2_Threshold_DataStore())) {
        /* Transition: '<S20>:110' */
        Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Heat1;
      } else if (Mooventure2016_Rev5_B.s7_Warmed == TRUE) {
        /* Transition: '<S20>:197' */
        Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SystemIdle;
      } else {
        Mooventure2016_Rev5_B.s20_Heat1 = TRUE;
        Mooventure2016_Rev5_B.s20_Heat2 = TRUE;
        Mooventure2016_Rev5_B.s20_Heat3 = FALSE;
        Mooventure2016_Rev5_B.s20_Heat4 = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Heat3:
      /* During 'Heat3': '<S20>:93' */
      if (rtb_UnitDelay_o < (Heat4_Threshold_DataStore())) {
        /* Transition: '<S20>:106' */
        Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Heat4;
      } else if (rtb_UnitDelay_o > (Heat3_Threshold_DataStore())) {
        /* Transition: '<S20>:109' */
        Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Heat2;
      } else if (Mooventure2016_Rev5_B.s7_Warmed == TRUE) {
        /* Transition: '<S20>:198' */
        Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SystemIdle;
      } else {
        Mooventure2016_Rev5_B.s20_Heat1 = TRUE;
        Mooventure2016_Rev5_B.s20_Heat2 = TRUE;
        Mooventure2016_Rev5_B.s20_Heat3 = TRUE;
        Mooventure2016_Rev5_B.s20_Heat4 = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Heat4:
      /* During 'Heat4': '<S20>:92' */
      if (rtb_UnitDelay_o > (Heat4_Threshold_DataStore())) {
        /* Transition: '<S20>:107' */
        Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Heat3;
      } else if (Mooventure2016_Rev5_B.s7_Warmed == TRUE) {
        /* Transition: '<S20>:199' */
        Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SystemIdle;
      } else {
        Mooventure2016_Rev5_B.s20_Heat1 = TRUE;
        Mooventure2016_Rev5_B.s20_Heat2 = TRUE;
        Mooventure2016_Rev5_B.s20_Heat3 = TRUE;
        Mooventure2016_Rev5_B.s20_Heat4 = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_HeatOn:
      /* During 'HeatOn': '<S20>:117' */
      if (Mooventure2016_Rev5_B.s215_temp_reading >
          (Heater_Core_Threshold_DataStore()) - 1.0) {
        /* Transition: '<S20>:122' */
        Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_UserWantsHeat_NotHot;
      } else if ((rtb_LogicalOperator5 == FALSE) ||
                 (Mooventure2016_Rev5_B.s7_VeryCold == TRUE)) {
        /* Transition: '<S20>:155' */
        Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SystemIdle;
      } else {
        Mooventure2016_Rev5_B.s20_Heat1 = TRUE;
        Mooventure2016_Rev5_B.s20_Heat2 = TRUE;
        Mooventure2016_Rev5_B.s20_Heat3 = FALSE;
        Mooventure2016_Rev5_B.s20_Heat4 = FALSE;
        Mooventure2016_Rev5_B.s20_HeaterCorePump = TRUE;
        Mooventure2016_Rev5_B.s20_HeaterCoreBlend = 20.0;
      }
      break;

     case Mooventure2016_Rev5_IN_SystemIdle:
      /* During 'SystemIdle': '<S20>:9' */
      if (Mooventure2016_Rev5_B.s7_VeryCold == TRUE) {
        /* Transition: '<S20>:72' */
        Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SystemWarmup;
      } else if ((!Mooventure2016_Rev5_B.s7_VeryCold) && rtb_LogicalOperator5) {
        /* Transition: '<S20>:115' */
        Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_UserWantsHeat_NotHot;
      } else {
        Mooventure2016_Rev5_B.s20_RadiatorBlend = 231.0;
        Mooventure2016_Rev5_B.s20_HeaterCoreBlend = 20.0;
        Mooventure2016_Rev5_B.s20_Heat1 = FALSE;
        Mooventure2016_Rev5_B.s20_Heat2 = FALSE;
        Mooventure2016_Rev5_B.s20_Heat3 = FALSE;
        Mooventure2016_Rev5_B.s20_Heat4 = FALSE;
        Mooventure2016_Rev5_B.s20_RadiatorPump = FALSE;
        Mooventure2016_Rev5_B.s20_HeaterCorePump = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_SystemWarmup:
      /* During 'SystemWarmup': '<S20>:71' */
      if ((Mooventure2016_Rev5_B.s7_VeryCold == TRUE) &&
          (Mooventure2016_Rev5_B.s20_HeaterCorePump == TRUE) &&
          ((Heat1_Threshold_DataStore()) != 2000.0)) {
        /* Transition: '<S20>:84' */
        Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Heat1;
      } else if (Mooventure2016_Rev5_B.s7_Warmed == TRUE) {
        /* Transition: '<S20>:200' */
        Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SystemIdle;
      } else {
        Mooventure2016_Rev5_B.s20_RadiatorBlend = 231.0;
        Mooventure2016_Rev5_B.s20_HeaterCoreBlend = 231.0;
        Mooventure2016_Rev5_B.s20_RadiatorPump = TRUE;
        Mooventure2016_Rev5_B.s20_HeaterCorePump = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_UserWantsHeat_NotHot:
      /* During 'UserWantsHeat_NotHot': '<S20>:112' */
      if (Mooventure2016_Rev5_B.s215_temp_reading <
          (Heater_Core_Threshold_DataStore()) + 1.0) {
        /* Transition: '<S20>:120' */
        Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_HeatOn;
      } else if ((!rtb_LogicalOperator5) || (Mooventure2016_Rev5_B.s7_VeryCold &&
                  (!rtb_LogicalOperator8))) {
        /* Transition: '<S20>:130' */
        Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SystemIdle;
      } else {
        Mooventure2016_Rev5_B.s20_HeaterCoreBlend = 20.0;
        Mooventure2016_Rev5_B.s20_HeaterCorePump = TRUE;
        Mooventure2016_Rev5_B.s20_Heat1 = FALSE;
        Mooventure2016_Rev5_B.s20_Heat2 = FALSE;
      }
      break;

     default:
      /* Transition: '<S20>:10' */
      Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_SystemIdle;
      break;
    }
  }

  /* End of Stateflow: '<S7>/BlendValving' */

  /* MATLAB Function Block: '<S7>/Embedded MATLAB Function' */

  /* MATLAB Function 'Foreground/Control/Coolant Control/Embedded MATLAB Function': '<S21>:1' */
  if (rtb_LogicalOperator8) {
    /* '<S21>:1:3' */
    /* '<S21>:1:4' */
    Mooventure2016_Rev5_B.s21_radBlend = 20.0;
  } else if (Mooventure2016_Rev5_B.s20_RadiatorBlend >= 30.0) {
    /* '<S21>:1:5' */
    /* '<S21>:1:6' */
    Mooventure2016_Rev5_B.s21_radBlend = Mooventure2016_Rev5_B.s20_RadiatorBlend;
  } else {
    /* '<S21>:1:8' */
    Mooventure2016_Rev5_B.s21_radBlend = 231.0;
  }

  /* End of MATLAB Function Block: '<S7>/Embedded MATLAB Function' */
  /* If: '<S401>/If' incorporates:
   *  Inport: '<S430>/In1'
   *  Inport: '<S431>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S401>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S401>/override_enable'
   */
  if ((Radiator_Pos_Request_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S401>/NewValue' incorporates:
     *  ActionPort: '<S430>/Action Port'
     */
    rtb_Merge_i = (Radiator_Pos_Request_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S430>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(149);
    }

    /* End of Outputs for SubSystem: '<S401>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S401>/OldValue' incorporates:
     *  ActionPort: '<S431>/Action Port'
     */
    rtb_Merge_i = Mooventure2016_Rev5_B.s21_radBlend;

    /* S-Function (motohawk_sfun_code_cover): '<S431>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(150);
    }

    /* End of Outputs for SubSystem: '<S401>/OldValue' */
  }

  /* End of If: '<S401>/If' */

  /* MATLAB Function Block: '<S345>/Radiator Motion Control' */
  Mooventure2016_Rev5_HeaterCoreMotionControl(rtb_Sum1_b, rtb_Merge_i,
    (Coolant_Hyst_DataStore()),
    &Mooventure2016_Rev5_B.s345_sf_RadiatorMotionControl);

  /* DataTypeConversion: '<S345>/Data Type Conversion5' */
  Mooventure2016_Rev5_B.s345_DataTypeConversion5 =
    ((Mooventure2016_Rev5_B.s345_sf_RadiatorMotionControl.s389_motorEnable !=
      0.0));

  /* Logic: '<S345>/Logical Operator' incorporates:
   *  Constant: '<S383>/Constant'
   *  RelationalOperator: '<S383>/Compare'
   *  S-Function (motohawk_sfun_data_read): '<S345>/motohawk_data_read1'
   *  S-Function (motohawk_sfun_data_read): '<S345>/motohawk_data_read2'
   */
  rtb_RelationalOperator11_d = (Eaton_Plugged_In_DataStore() ||
    (Hybrid_State_DataStore() >= 2));

  /* S-Function Block: <S409>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s409_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_b = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S409>/Switch' incorporates:
   *  Constant: '<S409>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S409>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S409>/motohawk_delta_time'
   *  Sum: '<S409>/Sum'
   */
  if (Mooventure2016_Rev5_B.s20_Heat4) {
    rtb_Switch_d = rtb_motohawk_delta_time_b + Heat4Timer_DataStore();
  } else {
    rtb_Switch_d = 0.0;
  }

  /* End of Switch: '<S409>/Switch' */
  /* Logic: '<S387>/Logical Operator' incorporates:
   *  RelationalOperator: '<S387>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S345>/motohawk_calibration'
   */
  rtb_LogicalOperator_b2 = ((rtb_Switch_d >= (Startup_Delay_DataStore())) &&
    Mooventure2016_Rev5_B.s20_Heat4);

  /* Logic: '<S345>/Logical Operator8' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S345>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s345_LogicalOperator8 = ((Vehicle_Ready_DataStore() &&
    rtb_RelationalOperator11_d && rtb_LogicalOperator_b2));

  /* Stateflow: '<S7>/PumpState' incorporates:
   *  Logic: '<S7>/Cooled'
   *  RelationalOperator: '<S7>/5'
   *  RelationalOperator: '<S7>/6'
   *  RelationalOperator: '<S7>/7'
   *  RelationalOperator: '<S7>/8'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration1'
   */

  /* Gateway: Foreground/Control/Coolant Control/PumpState */
  /* During: Foreground/Control/Coolant Control/PumpState */
  if (Mooventure2016_Rev5_DWork.s23_is_active_c15_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Coolant Control/PumpState */
    Mooventure2016_Rev5_DWork.s23_is_active_c15_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S23>:10' */
    Mooventure2016_Rev5_DWork.s23_is_c15_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_PumpOff;
  } else {
    switch (Mooventure2016_Rev5_DWork.s23_is_c15_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_PumpOff:
      /* During 'PumpOff': '<S23>:9' */
      if (rtb_LogicalOperator8) {
        /* Transition: '<S23>:30' */
        Mooventure2016_Rev5_DWork.s23_is_c15_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_PumpOn;
      } else {
        Mooventure2016_Rev5_B.s23_PumpOn = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_PumpOn:
      /* During 'PumpOn': '<S23>:21' */
      if ((rtb_Merge_oq <= (Pump_Off_Temp_DataStore())) &&
          (Mooventure2016_Rev5_B.s177_IPT_InverterTemperature <=
           (Pump_Off_Temp_DataStore())) &&
          (Mooventure2016_Rev5_B.s170_MinCellTemperature <=
           (Pump_Off_Temp_DataStore())) &&
          (Mooventure2016_Rev5_B.s170_MaxCellTemperature <=
           (Pump_Off_Temp_DataStore()))) {
        /* Transition: '<S23>:32' */
        Mooventure2016_Rev5_DWork.s23_is_c15_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_PumpOff;
      } else {
        Mooventure2016_Rev5_B.s23_PumpOn = TRUE;
      }
      break;

     default:
      /* Transition: '<S23>:10' */
      Mooventure2016_Rev5_DWork.s23_is_c15_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_PumpOff;
      break;
    }
  }

  /* End of Stateflow: '<S7>/PumpState' */

  /* Logic: '<S7>/Logical Operator1' */
  Mooventure2016_Rev5_B.s7_LogicalOperator1 =
    ((Mooventure2016_Rev5_B.s20_RadiatorPump || Mooventure2016_Rev5_B.s23_PumpOn));

  /* If: '<S25>/If' incorporates:
   *  Inport: '<S28>/In1'
   *  Inport: '<S29>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S25>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S25>/override_enable'
   */
  if ((Cooling_Pump_Radiator_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S25>/NewValue' incorporates:
     *  ActionPort: '<S28>/Action Port'
     */
    Mooventure2016_Rev5_B.s25_Merge = (Cooling_Pump_Radiator_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S28>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(5);
    }

    /* End of Outputs for SubSystem: '<S25>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S25>/OldValue' incorporates:
     *  ActionPort: '<S29>/Action Port'
     */
    Mooventure2016_Rev5_B.s25_Merge = Mooventure2016_Rev5_B.s7_LogicalOperator1;

    /* S-Function (motohawk_sfun_code_cover): '<S29>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(6);
    }

    /* End of Outputs for SubSystem: '<S25>/OldValue' */
  }

  /* End of If: '<S25>/If' */

  /* S-Function Block: <S213>/motohawk_ain1 Resource: Heater_Core_Blend_Position */
  Mooventure2016_Rev5_B.s213_motohawk_ain1_o1 =
    Heater_Core_Blend_Position_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S220>/If' incorporates:
   *  Inport: '<S227>/In1'
   *  Inport: '<S228>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S220>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S220>/override_enable'
   */
  if ((Heater_Core_Blend_Valve_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S220>/NewValue' incorporates:
     *  ActionPort: '<S227>/Action Port'
     */
    rtb_Merge_bn = ((uint16_T)(Heater_Core_Blend_Valve_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S227>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(49);
    }

    /* End of Outputs for SubSystem: '<S220>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S220>/OldValue' incorporates:
     *  ActionPort: '<S228>/Action Port'
     */
    rtb_Merge_bn = Mooventure2016_Rev5_B.s213_motohawk_ain1_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S228>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(50);
    }

    /* End of Outputs for SubSystem: '<S220>/OldValue' */
  }

  /* End of If: '<S220>/If' */

  /* S-Function Block: <S216>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s216_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_fi = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S216>/Product' incorporates:
   *  MinMax: '<S216>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration'
   */
  rtb_Switch_fi /= (rtb_Switch_fi >= (HtrCoreLowPass_DataStore())) || rtIsNaN
    ((HtrCoreLowPass_DataStore())) ? rtb_Switch_fi : (HtrCoreLowPass_DataStore());

  /* Sum: '<S221>/Sum1' incorporates:
   *  Constant: '<S221>/Constant'
   *  DataTypeConversion: '<S213>/Data Type Conversion'
   *  Product: '<S221>/Product'
   *  Product: '<S221>/Product1'
   *  Sum: '<S221>/Sum'
   *  UnitDelay: '<S221>/Unit Delay'
   */
  rtb_Sum1_e = (1.0 - rtb_Switch_fi) *
    Mooventure2016_Rev5_DWork.s221_UnitDelay_DSTATE + (real_T)rtb_Merge_bn *
    rtb_Switch_fi;

  /* Logic: '<S7>/Logical Operator2' incorporates:
   *  Logic: '<S7>/Logical Operator'
   *  RelationalOperator: '<S7>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration4'
   */
  Mooventure2016_Rev5_B.s7_LogicalOperator2 =
    ((Mooventure2016_Rev5_B.s20_HeaterCorePump ||
      (Mooventure2016_Rev5_B.s23_PumpOn && (rtb_Sum1_e >=
        (Blend_Pump_On_Threshold_DataStore())))));

  /* If: '<S24>/If' incorporates:
   *  Inport: '<S26>/In1'
   *  Inport: '<S27>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S24>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S24>/override_enable'
   */
  if ((Cooling_Pump_Heater_Core_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S24>/NewValue' incorporates:
     *  ActionPort: '<S26>/Action Port'
     */
    Mooventure2016_Rev5_B.s24_Merge =
      (Cooling_Pump_Heater_Core_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S26>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(3);
    }

    /* End of Outputs for SubSystem: '<S24>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S24>/OldValue' incorporates:
     *  ActionPort: '<S27>/Action Port'
     */
    Mooventure2016_Rev5_B.s24_Merge = Mooventure2016_Rev5_B.s7_LogicalOperator2;

    /* S-Function (motohawk_sfun_code_cover): '<S27>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(4);
    }

    /* End of Outputs for SubSystem: '<S24>/OldValue' */
  }

  /* End of If: '<S24>/If' */

  /* Logic: '<S7>/Logical Operator6' */
  rtb_LogicalOperator5 = ((rtb_Merge_nd != 0.0) || (rtb_Merge_h != 0.0));

  /* S-Function (motohawk_sfun_read_canmsg): '<S176>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3836p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3836p0001_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint8_T tmp4 = 0;
      uint8_T tmp5 = 0;
      uint8_T tmp6 = 0;
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
      Mooventure2016_Rev5_B.s176_ReadCANMessage_o1 = ((real_T) tmp0) * ((real_T)
        10);
      Mooventure2016_Rev5_B.s176_ReadCANMessage_o2 = (real_T) tmp1;
      Mooventure2016_Rev5_B.s176_ReadCANMessage_o3 = ((real_T) tmp2) + ((real_T)
        -40);
      Mooventure2016_Rev5_B.s176_ReadCANMessage_o4 = (real_T) tmp3;
      Mooventure2016_Rev5_B.s176_ReadCANMessage_o5 = (real_T) tmp4;
      Mooventure2016_Rev5_B.s176_ReadCANMessage_o6 = (real_T) tmp5;
      Mooventure2016_Rev5_B.s176_ReadCANMessage_o7 = (real_T) tmp6;
    }
  }

  /* If: '<S307>/If' incorporates:
   *  Inport: '<S316>/In1'
   *  Inport: '<S317>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S307>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S307>/override_enable'
   */
  if ((Temp_Guage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S307>/NewValue' incorporates:
     *  ActionPort: '<S316>/Action Port'
     */
    rtb_Merge_cm = (Temp_Guage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S316>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(89);
    }

    /* End of Outputs for SubSystem: '<S307>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S307>/OldValue' incorporates:
     *  ActionPort: '<S317>/Action Port'
     */
    rtb_Merge_cm = Mooventure2016_Rev5_B.s176_ReadCANMessage_o3;

    /* S-Function (motohawk_sfun_code_cover): '<S317>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(90);
    }

    /* End of Outputs for SubSystem: '<S307>/OldValue' */
  }

  /* End of If: '<S307>/If' */

  /* MATLAB Function Block: '<S7>/Embedded MATLAB Function1' incorporates:
   *  MinMax: '<S7>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_fault_action): '<S7>/motohawk_fault_action5'
   */

  /* MATLAB Function 'Foreground/Control/Coolant Control/Embedded MATLAB Function1': '<S22>:1' */
  if ((GetFaultActionStatus(5) == TRUE) || (rtb_LogicalOperator5 == TRUE)) {
    /* '<S22>:1:3' */
    /* '<S22>:1:4' */
    rtb_UnitDelay_o = 3.0;
  } else if ((rtb_UnitDelay_o < (Low_Threshold_DataStore())) || (rtb_Merge_cm <
              (Low_Threshold_DataStore()))) {
    /* '<S22>:1:5' */
    /* '<S22>:1:6' */
    rtb_UnitDelay_o = 0.0;
  } else if (((rtb_UnitDelay_o >= (Low_Threshold_DataStore())) &&
              (rtb_UnitDelay_o < (Medium_Threshold_DataStore()))) ||
             ((rtb_Merge_cm >= (Low_Threshold_DataStore()) + 25.0) &&
              (rtb_Merge_cm < (Medium_Threshold_DataStore()) + 25.0))) {
    /* '<S22>:1:7' */
    /* '<S22>:1:8' */
    rtb_UnitDelay_o = 1.0;
  } else if (((rtb_UnitDelay_o >= (Medium_Threshold_DataStore())) &&
              (rtb_UnitDelay_o < (High_Threshold_DataStore()))) ||
             ((rtb_Merge_cm >= (Medium_Threshold_DataStore()) + 25.0) &&
              (rtb_Merge_cm < (High_Threshold_DataStore()) + 25.0))) {
    /* '<S22>:1:9' */
    /* '<S22>:1:10' */
    rtb_UnitDelay_o = 2.0;
  } else if ((rtb_UnitDelay_o >= (High_Threshold_DataStore())) || (rtb_Merge_cm >=
              (High_Threshold_DataStore()) + 25.0)) {
    /* '<S22>:1:11' */
    /* '<S22>:1:12' */
    rtb_UnitDelay_o = 3.0;
  } else {
    /* '<S22>:1:14' */
    rtb_UnitDelay_o = 0.0;
  }

  /* End of MATLAB Function Block: '<S7>/Embedded MATLAB Function1' */

  /* MATLAB Function Block: '<S345>/Fan Adapter' */

  /* MATLAB Function 'Foreground/Outputs/Coolant Outputs/Fan Adapter': '<S388>:1' */
  if (rtb_UnitDelay_o == 1.0) {
    /* '<S388>:1:3' */
    /* '<S388>:1:4' */
    Mooventure2016_Rev5_B.s388_fan1 = 1.0;

    /* '<S388>:1:5' */
    Mooventure2016_Rev5_B.s388_fan2 = 0.0;

    /* '<S388>:1:6' */
    Mooventure2016_Rev5_B.s388_fan3 = 0.0;
  } else if (rtb_UnitDelay_o == 2.0) {
    /* '<S388>:1:7' */
    /* '<S388>:1:8' */
    Mooventure2016_Rev5_B.s388_fan1 = 0.0;

    /* '<S388>:1:9' */
    Mooventure2016_Rev5_B.s388_fan2 = 1.0;

    /* '<S388>:1:10' */
    Mooventure2016_Rev5_B.s388_fan3 = 0.0;
  } else if (rtb_UnitDelay_o == 3.0) {
    /* '<S388>:1:11' */
    /* '<S388>:1:12' */
    Mooventure2016_Rev5_B.s388_fan1 = 0.0;

    /* '<S388>:1:13' */
    Mooventure2016_Rev5_B.s388_fan2 = 1.0;

    /* '<S388>:1:14' */
    Mooventure2016_Rev5_B.s388_fan3 = 1.0;
  } else {
    /* '<S388>:1:16' */
    Mooventure2016_Rev5_B.s388_fan1 = 0.0;

    /* '<S388>:1:17' */
    Mooventure2016_Rev5_B.s388_fan2 = 0.0;

    /* '<S388>:1:18' */
    Mooventure2016_Rev5_B.s388_fan3 = 0.0;
  }

  /* End of MATLAB Function Block: '<S345>/Fan Adapter' */

  /* DataTypeConversion: '<S345>/Data Type Conversion4' */
  Mooventure2016_Rev5_B.s345_DataTypeConversion4 =
    ((Mooventure2016_Rev5_B.s345_sf_RadiatorMotionControl.s389_motorDirection !=
      0.0));

  /* If: '<S402>/If' incorporates:
   *  Inport: '<S432>/In1'
   *  Inport: '<S433>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S402>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S402>/override_enable'
   */
  if ((Heater_Core_Pos_Request_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S402>/NewValue' incorporates:
     *  ActionPort: '<S432>/Action Port'
     */
    rtb_Merge_ox = (Heater_Core_Pos_Request_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S432>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(151);
    }

    /* End of Outputs for SubSystem: '<S402>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S402>/OldValue' incorporates:
     *  ActionPort: '<S433>/Action Port'
     */
    rtb_Merge_ox = Mooventure2016_Rev5_B.s20_HeaterCoreBlend;

    /* S-Function (motohawk_sfun_code_cover): '<S433>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(152);
    }

    /* End of Outputs for SubSystem: '<S402>/OldValue' */
  }

  /* End of If: '<S402>/If' */

  /* MATLAB Function Block: '<S345>/Heater Core Motion Control' */
  Mooventure2016_Rev5_HeaterCoreMotionControl(rtb_Sum1_e, rtb_Merge_ox,
    (Coolant_Hyst_DataStore()),
    &Mooventure2016_Rev5_B.s345_sf_HeaterCoreMotionControl);

  /* DataTypeConversion: '<S345>/Data Type Conversion1' */
  Mooventure2016_Rev5_B.s345_DataTypeConversion1 =
    ((Mooventure2016_Rev5_B.s345_sf_HeaterCoreMotionControl.s389_motorEnable !=
      0.0));

  /* DataTypeConversion: '<S345>/Data Type Conversion2' */
  Mooventure2016_Rev5_B.s345_DataTypeConversion2 =
    ((Mooventure2016_Rev5_B.s345_sf_HeaterCoreMotionControl.s389_motorDirection
      != 0.0));

  /* S-Function Block: <S406>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s406_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_i = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S406>/Switch' incorporates:
   *  Constant: '<S406>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S406>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S406>/motohawk_delta_time'
   *  Sum: '<S406>/Sum'
   */
  if (Mooventure2016_Rev5_B.s20_Heat1) {
    rtb_Switch_fi = rtb_motohawk_delta_time_i + Heat1Timer_DataStore();
  } else {
    rtb_Switch_fi = 0.0;
  }

  /* End of Switch: '<S406>/Switch' */

  /* Logic: '<S384>/Logical Operator' incorporates:
   *  RelationalOperator: '<S384>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S345>/motohawk_calibration'
   */
  rtb_RelationalOperator2_id = ((rtb_Switch_fi >= (Startup_Delay_DataStore())) &&
    Mooventure2016_Rev5_B.s20_Heat1);

  /* Logic: '<S345>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S345>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s345_LogicalOperator5 = ((Vehicle_Ready_DataStore() &&
    rtb_RelationalOperator11_d && rtb_RelationalOperator2_id));

  /* S-Function Block: <S407>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s407_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_g = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S407>/Switch' incorporates:
   *  Constant: '<S407>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S407>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S407>/motohawk_delta_time'
   *  Sum: '<S407>/Sum'
   */
  if (Mooventure2016_Rev5_B.s20_Heat2) {
    rtb_Switch_e = rtb_motohawk_delta_time_g + Heat2Timer_DataStore();
  } else {
    rtb_Switch_e = 0.0;
  }

  /* End of Switch: '<S407>/Switch' */

  /* Logic: '<S385>/Logical Operator' incorporates:
   *  RelationalOperator: '<S385>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S345>/motohawk_calibration'
   */
  rtb_RelationalOperator_jg = ((rtb_Switch_e >= (Startup_Delay_DataStore())) &&
    Mooventure2016_Rev5_B.s20_Heat2);

  /* Logic: '<S345>/Logical Operator6' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S345>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s345_LogicalOperator6 = ((Vehicle_Ready_DataStore() &&
    rtb_RelationalOperator11_d && rtb_RelationalOperator_jg));

  /* S-Function Block: <S408>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s408_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_a = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S408>/Switch' incorporates:
   *  Constant: '<S408>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S408>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S408>/motohawk_delta_time'
   *  Sum: '<S408>/Sum'
   */
  if (Mooventure2016_Rev5_B.s20_Heat3) {
    rtb_Switch_c = rtb_motohawk_delta_time_a + Heat3Timer_DataStore();
  } else {
    rtb_Switch_c = 0.0;
  }

  /* End of Switch: '<S408>/Switch' */

  /* Logic: '<S386>/Logical Operator' incorporates:
   *  RelationalOperator: '<S386>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S345>/motohawk_calibration'
   */
  rtb_Compare_nd = ((rtb_Switch_c >= (Startup_Delay_DataStore())) &&
                    Mooventure2016_Rev5_B.s20_Heat3);

  /* Logic: '<S345>/Logical Operator7' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S345>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s345_LogicalOperator7 = ((Vehicle_Ready_DataStore() &&
    rtb_RelationalOperator11_d && rtb_Compare_nd));

  /* If: '<S396>/If' incorporates:
   *  Inport: '<S420>/In1'
   *  Inport: '<S421>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S396>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S396>/override_enable'
   */
  if ((Fan2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S396>/NewValue' incorporates:
     *  ActionPort: '<S420>/Action Port'
     */
    rtb_UnitDelay_o = (Fan2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S420>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(139);
    }

    /* End of Outputs for SubSystem: '<S396>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S396>/OldValue' incorporates:
     *  ActionPort: '<S421>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s388_fan2;

    /* S-Function (motohawk_sfun_code_cover): '<S421>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(140);
    }

    /* End of Outputs for SubSystem: '<S396>/OldValue' */
  }

  /* End of If: '<S396>/If' */

  /* DataTypeConversion: '<S345>/Data Type Conversion' */
  rtb_DataTypeConversion_gi = (rtb_UnitDelay_o != 0.0);

  /* If: '<S397>/If' incorporates:
   *  Inport: '<S422>/In1'
   *  Inport: '<S423>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S397>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S397>/override_enable'
   */
  if ((Fan3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S397>/NewValue' incorporates:
     *  ActionPort: '<S422>/Action Port'
     */
    rtb_UnitDelay_o = (Fan3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S422>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(141);
    }

    /* End of Outputs for SubSystem: '<S397>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S397>/OldValue' incorporates:
     *  ActionPort: '<S423>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s388_fan3;

    /* S-Function (motohawk_sfun_code_cover): '<S423>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(142);
    }

    /* End of Outputs for SubSystem: '<S397>/OldValue' */
  }

  /* End of If: '<S397>/If' */

  /* DataTypeConversion: '<S345>/Data Type Conversion3' */
  rtb_DataTypeConversion3_i = (rtb_UnitDelay_o != 0.0);

  /* If: '<S395>/If' incorporates:
   *  Inport: '<S418>/In1'
   *  Inport: '<S419>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S395>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S395>/override_enable'
   */
  if ((Fan1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S395>/NewValue' incorporates:
     *  ActionPort: '<S418>/Action Port'
     */
    rtb_UnitDelay_o = (Fan1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S418>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(137);
    }

    /* End of Outputs for SubSystem: '<S395>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S395>/OldValue' incorporates:
     *  ActionPort: '<S419>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s388_fan1;

    /* S-Function (motohawk_sfun_code_cover): '<S419>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(138);
    }

    /* End of Outputs for SubSystem: '<S395>/OldValue' */
  }

  /* End of If: '<S395>/If' */

  /* DataTypeConversion: '<S345>/Data Type Conversion6' */
  rtb_DataTypeConversion6 = (rtb_UnitDelay_o != 0.0);

  /* Saturate: '<S406>/Saturation' */
  rtb_Saturation = rtb_Switch_fi >= 86400.0 ? 86400.0 : rtb_Switch_fi <= 0.0 ?
    0.0 : rtb_Switch_fi;

  /* S-Function (motohawk_sfun_data_write): '<S406>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Heat1Timer */
  {
    Heat1Timer_DataStore() = rtb_Saturation;
  }

  /* Saturate: '<S407>/Saturation' */
  rtb_Saturation_i = rtb_Switch_e >= 86400.0 ? 86400.0 : rtb_Switch_e <= 0.0 ?
    0.0 : rtb_Switch_e;

  /* S-Function (motohawk_sfun_data_write): '<S407>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Heat2Timer */
  {
    Heat2Timer_DataStore() = rtb_Saturation_i;
  }

  /* Saturate: '<S408>/Saturation' */
  rtb_Saturation_l = rtb_Switch_c >= 86400.0 ? 86400.0 : rtb_Switch_c <= 0.0 ?
    0.0 : rtb_Switch_c;

  /* S-Function (motohawk_sfun_data_write): '<S408>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Heat3Timer */
  {
    Heat3Timer_DataStore() = rtb_Saturation_l;
  }

  /* Saturate: '<S409>/Saturation' */
  rtb_Saturation_f = rtb_Switch_d >= 86400.0 ? 86400.0 : rtb_Switch_d <= 0.0 ?
    0.0 : rtb_Switch_d;

  /* S-Function (motohawk_sfun_data_write): '<S409>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Heat4Timer */
  {
    Heat4Timer_DataStore() = rtb_Saturation_f;
  }

  /* If: '<S391>/If' incorporates:
   *  Inport: '<S410>/In1'
   *  Inport: '<S411>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S391>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S391>/override_enable'
   */
  if ((Radiator_Motor_Enable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S391>/NewValue' incorporates:
     *  ActionPort: '<S410>/Action Port'
     */
    rtb_Merge_gd = (Radiator_Motor_Enable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S410>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(129);
    }

    /* End of Outputs for SubSystem: '<S391>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S391>/OldValue' incorporates:
     *  ActionPort: '<S411>/Action Port'
     */
    rtb_Merge_gd = Mooventure2016_Rev5_B.s345_DataTypeConversion5;

    /* S-Function (motohawk_sfun_code_cover): '<S411>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(130);
    }

    /* End of Outputs for SubSystem: '<S391>/OldValue' */
  }

  /* End of If: '<S391>/If' */

  /* If: '<S392>/If' incorporates:
   *  Inport: '<S412>/In1'
   *  Inport: '<S413>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S392>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S392>/override_enable'
   */
  if ((Heat4_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S392>/NewValue' incorporates:
     *  ActionPort: '<S412>/Action Port'
     */
    rtb_Merge_dm = (Heat4_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S412>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(131);
    }

    /* End of Outputs for SubSystem: '<S392>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S392>/OldValue' incorporates:
     *  ActionPort: '<S413>/Action Port'
     */
    rtb_Merge_dm = Mooventure2016_Rev5_B.s345_LogicalOperator8;

    /* S-Function (motohawk_sfun_code_cover): '<S413>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(132);
    }

    /* End of Outputs for SubSystem: '<S392>/OldValue' */
  }

  /* End of If: '<S392>/If' */

  /* If: '<S393>/If' incorporates:
   *  Inport: '<S414>/In1'
   *  Inport: '<S415>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S393>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S393>/override_enable'
   */
  if ((Radiator_Pump_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S393>/NewValue' incorporates:
     *  ActionPort: '<S414>/Action Port'
     */
    rtb_Merge_ay5 = (Radiator_Pump_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S414>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(133);
    }

    /* End of Outputs for SubSystem: '<S393>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S393>/OldValue' incorporates:
     *  ActionPort: '<S415>/Action Port'
     */
    rtb_Merge_ay5 = Mooventure2016_Rev5_B.s25_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S415>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(134);
    }

    /* End of Outputs for SubSystem: '<S393>/OldValue' */
  }

  /* End of If: '<S393>/If' */

  /* If: '<S394>/If' incorporates:
   *  Inport: '<S416>/In1'
   *  Inport: '<S417>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S394>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S394>/override_enable'
   */
  if ((Heater_Core_Pump_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S394>/NewValue' incorporates:
     *  ActionPort: '<S416>/Action Port'
     */
    rtb_Merge_lq = (Heater_Core_Pump_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S416>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(135);
    }

    /* End of Outputs for SubSystem: '<S394>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S394>/OldValue' incorporates:
     *  ActionPort: '<S417>/Action Port'
     */
    rtb_Merge_lq = Mooventure2016_Rev5_B.s24_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S417>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(136);
    }

    /* End of Outputs for SubSystem: '<S394>/OldValue' */
  }

  /* End of If: '<S394>/If' */

  /* If: '<S398>/If' incorporates:
   *  Inport: '<S424>/In1'
   *  Inport: '<S425>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S398>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S398>/override_enable'
   */
  if ((Radiator_Motor_Direction_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S398>/NewValue' incorporates:
     *  ActionPort: '<S424>/Action Port'
     */
    rtb_Merge_pi3 = (Radiator_Motor_Direction_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S424>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(143);
    }

    /* End of Outputs for SubSystem: '<S398>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S398>/OldValue' incorporates:
     *  ActionPort: '<S425>/Action Port'
     */
    rtb_Merge_pi3 = Mooventure2016_Rev5_B.s345_DataTypeConversion4;

    /* S-Function (motohawk_sfun_code_cover): '<S425>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(144);
    }

    /* End of Outputs for SubSystem: '<S398>/OldValue' */
  }

  /* End of If: '<S398>/If' */

  /* If: '<S399>/If' incorporates:
   *  Inport: '<S426>/In1'
   *  Inport: '<S427>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S399>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S399>/override_enable'
   */
  if ((Heater_Core_Motor_Enable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S399>/NewValue' incorporates:
     *  ActionPort: '<S426>/Action Port'
     */
    rtb_Merge_of1 = (Heater_Core_Motor_Enable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S426>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(145);
    }

    /* End of Outputs for SubSystem: '<S399>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S399>/OldValue' incorporates:
     *  ActionPort: '<S427>/Action Port'
     */
    rtb_Merge_of1 = Mooventure2016_Rev5_B.s345_DataTypeConversion1;

    /* S-Function (motohawk_sfun_code_cover): '<S427>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(146);
    }

    /* End of Outputs for SubSystem: '<S399>/OldValue' */
  }

  /* End of If: '<S399>/If' */

  /* If: '<S400>/If' incorporates:
   *  Inport: '<S428>/In1'
   *  Inport: '<S429>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S400>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S400>/override_enable'
   */
  if ((Heater_Core_Motor_Direction_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S400>/NewValue' incorporates:
     *  ActionPort: '<S428>/Action Port'
     */
    rtb_Merge_ln = (Heater_Core_Motor_Direction_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S428>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(147);
    }

    /* End of Outputs for SubSystem: '<S400>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S400>/OldValue' incorporates:
     *  ActionPort: '<S429>/Action Port'
     */
    rtb_Merge_ln = Mooventure2016_Rev5_B.s345_DataTypeConversion2;

    /* S-Function (motohawk_sfun_code_cover): '<S429>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(148);
    }

    /* End of Outputs for SubSystem: '<S400>/OldValue' */
  }

  /* End of If: '<S400>/If' */

  /* If: '<S403>/If' incorporates:
   *  Inport: '<S434>/In1'
   *  Inport: '<S435>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S403>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S403>/override_enable'
   */
  if ((Heat1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S403>/NewValue' incorporates:
     *  ActionPort: '<S434>/Action Port'
     */
    rtb_Merge_oqt = (Heat1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S434>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(153);
    }

    /* End of Outputs for SubSystem: '<S403>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S403>/OldValue' incorporates:
     *  ActionPort: '<S435>/Action Port'
     */
    rtb_Merge_oqt = Mooventure2016_Rev5_B.s345_LogicalOperator5;

    /* S-Function (motohawk_sfun_code_cover): '<S435>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(154);
    }

    /* End of Outputs for SubSystem: '<S403>/OldValue' */
  }

  /* End of If: '<S403>/If' */

  /* If: '<S404>/If' incorporates:
   *  Inport: '<S436>/In1'
   *  Inport: '<S437>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S404>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S404>/override_enable'
   */
  if ((Heat2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S404>/NewValue' incorporates:
     *  ActionPort: '<S436>/Action Port'
     */
    rtb_Merge_cg = (Heat2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S436>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(155);
    }

    /* End of Outputs for SubSystem: '<S404>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S404>/OldValue' incorporates:
     *  ActionPort: '<S437>/Action Port'
     */
    rtb_Merge_cg = Mooventure2016_Rev5_B.s345_LogicalOperator6;

    /* S-Function (motohawk_sfun_code_cover): '<S437>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(156);
    }

    /* End of Outputs for SubSystem: '<S404>/OldValue' */
  }

  /* End of If: '<S404>/If' */

  /* If: '<S405>/If' incorporates:
   *  Inport: '<S438>/In1'
   *  Inport: '<S439>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S405>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S405>/override_enable'
   */
  if ((Heat3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S405>/NewValue' incorporates:
     *  ActionPort: '<S438>/Action Port'
     */
    rtb_Merge_l1 = (Heat3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S438>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(157);
    }

    /* End of Outputs for SubSystem: '<S405>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S405>/OldValue' incorporates:
     *  ActionPort: '<S439>/Action Port'
     */
    rtb_Merge_l1 = Mooventure2016_Rev5_B.s345_LogicalOperator7;

    /* S-Function (motohawk_sfun_code_cover): '<S439>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(158);
    }

    /* End of Outputs for SubSystem: '<S405>/OldValue' */
  }

  /* End of If: '<S405>/If' */

  /* S-Function Block: <S11>/motohawk_din Resource: ESTOP2 */
  rtb_motohawk_din = ESTOP2_DigitalInput_Get();

  /* Logic: '<S11>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_din): '<S11>/motohawk_din'
   */
  rtb_LogicalOperator5 = !rtb_motohawk_din;

  /* Logic: '<S11>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S11>/motohawk_data_read1'
   *  S-Function (motohawk_sfun_fault_action): '<S11>/motohawk_fault_action'
   */
  rtb_LogicalOperator5 = (rtb_LogicalOperator5 || GetFaultActionStatus(7) ||
    Shutdown_Req_DataStore());

  /* Logic: '<S11>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S11>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S11>/motohawk_data_read'
   */
  rtb_LogicalOperator8 = (Batt_Load_Enable_DataStore() ||
    ((Auto_Battery_Startup_DataStore()) != 0.0));

  /* If: '<S279>/If' incorporates:
   *  Inport: '<S289>/In1'
   *  Inport: '<S290>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S279>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S279>/override_enable'
   */
  if ((ChargerState_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S279>/NewValue' incorporates:
     *  ActionPort: '<S289>/Action Port'
     */
    rtb_Merge_b = (ChargerState_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S289>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(69);
    }

    /* End of Outputs for SubSystem: '<S279>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S279>/OldValue' incorporates:
     *  ActionPort: '<S290>/Action Port'
     */
    rtb_Merge_b = Mooventure2016_Rev5_B.s175_ChargerState;

    /* S-Function (motohawk_sfun_code_cover): '<S290>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(70);
    }

    /* End of Outputs for SubSystem: '<S279>/OldValue' */
  }

  /* End of If: '<S279>/If' */

  /* RelationalOperator: '<S11>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S11>/motohawk_calibration3'
   */
  rtb_RelationalOperator_b = (rtb_Merge_b >= (Eaton_Is_Charging_DataStore()));

  /* Stateflow: '<S11>/Chart' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S11>/motohawk_data_read2'
   */

  /* Gateway: Foreground/Control/Vehicle Run/Stop Determination/Chart */
  /* During: Foreground/Control/Vehicle Run/Stop Determination/Chart */
  if (Mooventure2016_Rev5_DWork.s167_is_active_c1_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Vehicle Run/Stop Determination/Chart */
    Mooventure2016_Rev5_DWork.s167_is_active_c1_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S167>:10' */
    Mooventure2016_Rev5_DWork.s167_is_c1_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Initial;
  } else {
    switch (Mooventure2016_Rev5_DWork.s167_is_c1_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Batterybootup:
      /* During 'Batterybootup': '<S167>:13' */
      if (rtb_LogicalOperator5) {
        /* Transition: '<S167>:22' */
        Mooventure2016_Rev5_DWork.s167_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Shutdown_Sequence;
      } else if (rtb_LogicalOperator8) {
        /* Transition: '<S167>:37' */
        Mooventure2016_Rev5_DWork.s167_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Charging_and_Temp;
      } else {
        Mooventure2016_Rev5_B.s167_Vehicle_Enable = TRUE;
        Mooventure2016_Rev5_B.s167_Vehicle_Ready = FALSE;
        Mooventure2016_Rev5_B.s167_Torque_Enable = FALSE;
        Mooventure2016_Rev5_B.s167_Keyed_Relay = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_Charging_and_Temp:
      /* During 'Charging_and_Temp': '<S167>:15' */
      if (!rtb_RelationalOperator_b) {
        /* Transition: '<S167>:20' */
        Mooventure2016_Rev5_DWork.s167_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal_Operation;
      } else if (rtb_LogicalOperator5) {
        /* Transition: '<S167>:40' */
        Mooventure2016_Rev5_DWork.s167_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Counting;

        /* Entry 'Counting': '<S167>:39' */
        Mooventure2016_Rev5_DWork.s167_count = 0.0;
      } else {
        Mooventure2016_Rev5_B.s167_Vehicle_Enable = TRUE;
        Mooventure2016_Rev5_B.s167_Vehicle_Ready = TRUE;
        Mooventure2016_Rev5_B.s167_Torque_Enable = FALSE;
        Mooventure2016_Rev5_B.s167_Keyed_Relay = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_Counting:
      /* During 'Counting': '<S167>:39' */
      if (Mooventure2016_Rev5_DWork.s167_count >= 200.0) {
        /* Transition: '<S167>:42' */
        Mooventure2016_Rev5_DWork.s167_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Shutdown_Sequence;
      } else if (!rtb_LogicalOperator5) {
        /* Transition: '<S167>:43' */
        Mooventure2016_Rev5_DWork.s167_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal_Operation;
      } else {
        Mooventure2016_Rev5_DWork.s167_count =
          Mooventure2016_Rev5_DWork.s167_count + 1.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Initial:
      /* During 'Initial': '<S167>:9' */
      if (!rtb_LogicalOperator5) {
        /* Transition: '<S167>:14' */
        Mooventure2016_Rev5_DWork.s167_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Batterybootup;
      } else {
        /* Transition: '<S167>:30' */
        Mooventure2016_Rev5_DWork.s167_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Shutdown_Sequence;
      }
      break;

     case Mooventure2016_Rev5_IN_Kill_Component_Keyed:
      /* During 'Kill_Component_Keyed': '<S167>:26' */
      Mooventure2016_Rev5_B.s167_Vehicle_Enable = FALSE;
      Mooventure2016_Rev5_B.s167_Vehicle_Ready = FALSE;
      Mooventure2016_Rev5_B.s167_Torque_Enable = FALSE;
      Mooventure2016_Rev5_B.s167_Keyed_Relay = FALSE;
      break;

     case Mooventure2016_Rev5_IN_Normal_Operation:
      /* During 'Normal_Operation': '<S167>:18' */
      if (rtb_RelationalOperator_b) {
        /* Transition: '<S167>:25' */
        Mooventure2016_Rev5_DWork.s167_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Charging_and_Temp;
      } else if (rtb_LogicalOperator5) {
        /* Transition: '<S167>:41' */
        Mooventure2016_Rev5_DWork.s167_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Counting;

        /* Entry 'Counting': '<S167>:39' */
        Mooventure2016_Rev5_DWork.s167_count = 0.0;
      } else {
        Mooventure2016_Rev5_B.s167_Vehicle_Enable = TRUE;
        Mooventure2016_Rev5_B.s167_Vehicle_Ready = TRUE;
        Mooventure2016_Rev5_B.s167_Torque_Enable = TRUE;
        Mooventure2016_Rev5_B.s167_Keyed_Relay = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_Shutdown_Sequence:
      /* During 'Shutdown_Sequence': '<S167>:21' */
      if (!Batt_Contactor_Status_DataStore()) {
        /* Transition: '<S167>:27' */
        Mooventure2016_Rev5_DWork.s167_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Kill_Component_Keyed;
      } else {
        Mooventure2016_Rev5_B.s167_Vehicle_Enable = FALSE;
        Mooventure2016_Rev5_B.s167_Vehicle_Ready = FALSE;
        Mooventure2016_Rev5_B.s167_Torque_Enable = FALSE;
        Mooventure2016_Rev5_B.s167_Keyed_Relay = TRUE;
      }
      break;

     default:
      /* Transition: '<S167>:10' */
      Mooventure2016_Rev5_DWork.s167_is_c1_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Initial;
      break;
    }
  }

  /* End of Stateflow: '<S11>/Chart' */

  /* Stateflow: '<S346>/Coil1State' */

  /* Gateway: Foreground/Outputs/DistributionBox/Coil1State */
  /* During: Foreground/Outputs/DistributionBox/Coil1State */
  if (Mooventure2016_Rev5_DWork.s440_is_active_c8_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/DistributionBox/Coil1State */
    Mooventure2016_Rev5_DWork.s440_is_active_c8_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S440>:10' */
    Mooventure2016_Rev5_DWork.s440_is_c8_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Coil1Disabled;
  } else {
    switch (Mooventure2016_Rev5_DWork.s440_is_c8_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Coil1Disabled:
      /* During 'Coil1Disabled': '<S440>:9' */
      if ((Mooventure2016_Rev5_B.s101_Switch == 0.0) && (rtb_Merge_o0 >= 250.0) &&
          Mooventure2016_Rev5_B.s167_Keyed_Relay) {
        /* Transition: '<S440>:30' */
        Mooventure2016_Rev5_DWork.s440_is_c8_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil1Enabled;
      } else {
        Mooventure2016_Rev5_B.s440_Coil1State = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Coil1Enabled:
      /* During 'Coil1Enabled': '<S440>:21' */
      if ((Mooventure2016_Rev5_B.s101_Switch == 0.0) &&
          (!Mooventure2016_Rev5_B.s167_Keyed_Relay)) {
        /* Transition: '<S440>:32' */
        Mooventure2016_Rev5_DWork.s440_is_c8_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil1Disabled;
      } else {
        Mooventure2016_Rev5_B.s440_Coil1State = TRUE;
      }
      break;

     default:
      /* Transition: '<S440>:10' */
      Mooventure2016_Rev5_DWork.s440_is_c8_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Coil1Disabled;
      break;
    }
  }

  /* End of Stateflow: '<S346>/Coil1State' */

  /* DataTypeConversion: '<S346>/Data Type Conversion1' incorporates:
   *  Constant: '<S443>/Constant'
   *  RelationalOperator: '<S443>/Compare'
   */
  rtb_LogicalOperator5 = (rtb_Merge_b == 2.0);

  /* Stateflow: '<S346>/Coil2State' */

  /* Gateway: Foreground/Outputs/DistributionBox/Coil2State */
  /* During: Foreground/Outputs/DistributionBox/Coil2State */
  if (Mooventure2016_Rev5_DWork.s441_is_active_c9_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/DistributionBox/Coil2State */
    Mooventure2016_Rev5_DWork.s441_is_active_c9_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S441>:10' */
    Mooventure2016_Rev5_DWork.s441_is_c9_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Coil2Disabled;
  } else {
    switch (Mooventure2016_Rev5_DWork.s441_is_c9_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Coil2Disabled:
      /* During 'Coil2Disabled': '<S441>:9' */
      if ((!rtb_LogicalOperator5) && Mooventure2016_Rev5_B.s167_Keyed_Relay) {
        /* Transition: '<S441>:48' */
        Mooventure2016_Rev5_DWork.s441_is_c9_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil2Enabled;
      } else {
        Mooventure2016_Rev5_B.s441_Coil2State = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Coil2Enabled:
      /* During 'Coil2Enabled': '<S441>:21' */
      if ((!rtb_LogicalOperator5) && (!Mooventure2016_Rev5_B.s167_Keyed_Relay))
      {
        /* Transition: '<S441>:32' */
        Mooventure2016_Rev5_DWork.s441_is_c9_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil2Disabled;
      } else {
        Mooventure2016_Rev5_B.s441_Coil2State = TRUE;
      }
      break;

     default:
      /* Transition: '<S441>:10' */
      Mooventure2016_Rev5_DWork.s441_is_c9_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Coil2Disabled;
      break;
    }
  }

  /* End of Stateflow: '<S346>/Coil2State' */

  /* Logic: '<S444>/Logical Operator' */
  rtb_LogicalOperator5 = (rtb_RelationalOperator2_id ||
    rtb_RelationalOperator_jg || rtb_Compare_nd || rtb_LogicalOperator_b2);

  /* Stateflow: '<S346>/Coil2State1' */

  /* Gateway: Foreground/Outputs/DistributionBox/Coil2State1 */
  /* During: Foreground/Outputs/DistributionBox/Coil2State1 */
  if (Mooventure2016_Rev5_DWork.s442_is_active_c10_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/DistributionBox/Coil2State1 */
    Mooventure2016_Rev5_DWork.s442_is_active_c10_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S442>:10' */
    Mooventure2016_Rev5_DWork.s442_is_c10_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Coil3Disabled;
  } else {
    switch (Mooventure2016_Rev5_DWork.s442_is_c10_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Coil3Disabled:
      /* During 'Coil3Disabled': '<S442>:9' */
      if ((!rtb_LogicalOperator5) && Mooventure2016_Rev5_B.s167_Keyed_Relay) {
        /* Transition: '<S442>:30' */
        Mooventure2016_Rev5_DWork.s442_is_c10_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil3Enabled;
      } else {
        Mooventure2016_Rev5_B.s442_Coil3State = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Coil3Enabled:
      /* During 'Coil3Enabled': '<S442>:21' */
      if ((!rtb_LogicalOperator5) && (!Mooventure2016_Rev5_B.s167_Keyed_Relay))
      {
        /* Transition: '<S442>:32' */
        Mooventure2016_Rev5_DWork.s442_is_c10_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil3Disabled;
      } else {
        Mooventure2016_Rev5_B.s442_Coil3State = TRUE;
      }
      break;

     default:
      /* Transition: '<S442>:10' */
      Mooventure2016_Rev5_DWork.s442_is_c10_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Coil3Disabled;
      break;
    }
  }

  /* End of Stateflow: '<S346>/Coil2State1' */

  /* If: '<S447>/If' incorporates:
   *  Inport: '<S455>/In1'
   *  Inport: '<S456>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S447>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S447>/override_enable'
   */
  if ((Coil1_IPT_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S447>/NewValue' incorporates:
     *  ActionPort: '<S455>/Action Port'
     */
    rtb_Merge_ef = (Coil1_IPT_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S455>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(163);
    }

    /* End of Outputs for SubSystem: '<S447>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S447>/OldValue' incorporates:
     *  ActionPort: '<S456>/Action Port'
     */
    rtb_Merge_ef = Mooventure2016_Rev5_B.s440_Coil1State;

    /* S-Function (motohawk_sfun_code_cover): '<S456>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(164);
    }

    /* End of Outputs for SubSystem: '<S447>/OldValue' */
  }

  /* End of If: '<S447>/If' */

  /* If: '<S448>/If' incorporates:
   *  Inport: '<S457>/In1'
   *  Inport: '<S458>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S448>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S448>/override_enable'
   */
  if ((Coil2_Charger_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S448>/NewValue' incorporates:
     *  ActionPort: '<S457>/Action Port'
     */
    rtb_Merge_nv = (Coil2_Charger_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S457>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(165);
    }

    /* End of Outputs for SubSystem: '<S448>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S448>/OldValue' incorporates:
     *  ActionPort: '<S458>/Action Port'
     */
    rtb_Merge_nv = Mooventure2016_Rev5_B.s441_Coil2State;

    /* S-Function (motohawk_sfun_code_cover): '<S458>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(166);
    }

    /* End of Outputs for SubSystem: '<S448>/OldValue' */
  }

  /* End of If: '<S448>/If' */

  /* If: '<S449>/If' incorporates:
   *  Inport: '<S459>/In1'
   *  Inport: '<S460>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S449>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S449>/override_enable'
   */
  if ((Coil3_Heater_AC_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S449>/NewValue' incorporates:
     *  ActionPort: '<S459>/Action Port'
     */
    rtb_Merge_iu = (Coil3_Heater_AC_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S459>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(167);
    }

    /* End of Outputs for SubSystem: '<S449>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S449>/OldValue' incorporates:
     *  ActionPort: '<S460>/Action Port'
     */
    rtb_Merge_iu = Mooventure2016_Rev5_B.s442_Coil3State;

    /* S-Function (motohawk_sfun_code_cover): '<S460>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(168);
    }

    /* End of Outputs for SubSystem: '<S449>/OldValue' */
  }

  /* End of If: '<S449>/If' */

  /* If: '<S445>/If' incorporates:
   *  Constant: '<S346>/Constant'
   *  Inport: '<S451>/In1'
   *  Inport: '<S452>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S445>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S445>/override_enable'
   */
  if ((Coil5_AuxCoil_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S445>/NewValue' incorporates:
     *  ActionPort: '<S451>/Action Port'
     */
    rtb_UnitDelay_o = (Coil5_AuxCoil_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S451>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(159);
    }

    /* End of Outputs for SubSystem: '<S445>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S445>/OldValue' incorporates:
     *  ActionPort: '<S452>/Action Port'
     */
    rtb_UnitDelay_o = 0.0;

    /* S-Function (motohawk_sfun_code_cover): '<S452>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(160);
    }

    /* End of Outputs for SubSystem: '<S445>/OldValue' */
  }

  /* End of If: '<S445>/If' */

  /* DataTypeConversion: '<S346>/Data Type Conversion6' */
  rtb_DataTypeConversion6_c = (rtb_UnitDelay_o != 0.0);

  /* If: '<S450>/If' incorporates:
   *  Constant: '<S346>/Constant2'
   *  Inport: '<S461>/In1'
   *  Inport: '<S462>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S450>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S450>/override_enable'
   */
  if ((Coil4_MaleOrangeConnector_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S450>/NewValue' incorporates:
     *  ActionPort: '<S461>/Action Port'
     */
    rtb_UnitDelay_o = (Coil4_MaleOrangeConnector_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S461>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(169);
    }

    /* End of Outputs for SubSystem: '<S450>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S450>/OldValue' incorporates:
     *  ActionPort: '<S462>/Action Port'
     */
    rtb_UnitDelay_o = 0.0;

    /* S-Function (motohawk_sfun_code_cover): '<S462>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(170);
    }

    /* End of Outputs for SubSystem: '<S450>/OldValue' */
  }

  /* End of If: '<S450>/If' */

  /* DataTypeConversion: '<S346>/Data Type Conversion5' */
  rtb_DataTypeConversion5 = (rtb_UnitDelay_o != 0.0);

  /* S-Function (motohawk_sfun_probe): '<S346>/motohawk_probe11' */
  (InterlockEnable_Probe_DataStore()) = (InterlockEnable_DataStore());

  /* If: '<S446>/If' incorporates:
   *  Inport: '<S453>/In1'
   *  Inport: '<S454>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S346>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S446>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S446>/override_enable'
   */
  if ((InterlockEnable_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S446>/NewValue' incorporates:
     *  ActionPort: '<S453>/Action Port'
     */
    rtb_UnitDelay_o = (InterlockEnable_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S453>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(161);
    }

    /* End of Outputs for SubSystem: '<S446>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S446>/OldValue' incorporates:
     *  ActionPort: '<S454>/Action Port'
     */
    rtb_UnitDelay_o = (InterlockEnable_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S454>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(162);
    }

    /* End of Outputs for SubSystem: '<S446>/OldValue' */
  }

  /* End of If: '<S446>/If' */

  /* DataTypeConversion: '<S346>/Data Type Conversion8' */
  rtb_DataTypeConversion8 = (rtb_UnitDelay_o != 0.0);

  /* Stateflow: '<S347>/PowerSteering' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S347>/motohawk_data_read1'
   */

  /* Gateway: Foreground/Outputs/Driver Ouputs/PowerSteering */
  /* During: Foreground/Outputs/Driver Ouputs/PowerSteering */
  if (Mooventure2016_Rev5_DWork.s468_is_active_c28_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/Driver Ouputs/PowerSteering */
    Mooventure2016_Rev5_DWork.s468_is_active_c28_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S468>:10' */
    Mooventure2016_Rev5_DWork.s468_is_c28_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_INIT;
  } else {
    switch (Mooventure2016_Rev5_DWork.s468_is_c28_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_INIT:
      /* During 'INIT': '<S468>:9' */
      if (Mooventure2016_Rev5_B.s177_IPT_MotorReady) {
        /* Transition: '<S468>:42' */
        Mooventure2016_Rev5_DWork.s468_is_c28_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_MotorRunning;
      } else {
        Mooventure2016_Rev5_B.s468_VehicleReadyOutput = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_MotorRunning:
      /* During 'MotorRunning': '<S468>:21' */
      if (!Vehicle_Ready_DataStore()) {
        /* Transition: '<S468>:43' */
        Mooventure2016_Rev5_DWork.s468_is_c28_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_PowerSteeringOn;
      } else {
        Mooventure2016_Rev5_B.s468_VehicleReadyOutput = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_PowerSteeringOff:
      /* During 'PowerSteeringOff': '<S468>:44' */
      Mooventure2016_Rev5_B.s468_VehicleReadyOutput = FALSE;
      break;

     case Mooventure2016_Rev5_IN_PowerSteeringOn:
      /* During 'PowerSteeringOn': '<S468>:39' */
      if (Mooventure2016_Rev5_B.s275_posOut == 2.0) {
        /* Transition: '<S468>:45' */
        Mooventure2016_Rev5_DWork.s468_is_c28_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_PowerSteeringOff;
      } else {
        Mooventure2016_Rev5_B.s468_VehicleReadyOutput = TRUE;
      }
      break;

     default:
      /* Transition: '<S468>:10' */
      Mooventure2016_Rev5_DWork.s468_is_c28_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_INIT;
      break;
    }
  }

  /* End of Stateflow: '<S347>/PowerSteering' */
  /* If: '<S470>/If' incorporates:
   *  Inport: '<S565>/In1'
   *  Inport: '<S566>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S470>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S470>/override_enable'
   */
  if ((Ready_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S470>/NewValue' incorporates:
     *  ActionPort: '<S565>/Action Port'
     */
    rtb_Merge_kn = (Ready_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S565>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(223);
    }

    /* End of Outputs for SubSystem: '<S470>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S470>/OldValue' incorporates:
     *  ActionPort: '<S566>/Action Port'
     */
    rtb_Merge_kn = Mooventure2016_Rev5_B.s468_VehicleReadyOutput;

    /* S-Function (motohawk_sfun_code_cover): '<S566>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(224);
    }

    /* End of Outputs for SubSystem: '<S470>/OldValue' */
  }

  /* End of If: '<S470>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S347>/motohawk_fault_action2'
   *
   * Regarding '<S347>/motohawk_fault_action2':
     Get Fault Action Status: Regen_Brakes_Disabled
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s347_Regen_Brakes_Disabled = GetFaultActionStatus(11);
  }

  /* If: '<S477>/If' incorporates:
   *  Inport: '<S579>/In1'
   *  Inport: '<S580>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S477>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S477>/override_enable'
   */
  if ((Regen_Brakes_Disabled_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S477>/NewValue' incorporates:
     *  ActionPort: '<S579>/Action Port'
     */
    rtb_Merge_pl = (Regen_Brakes_Disabled_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S579>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(237);
    }

    /* End of Outputs for SubSystem: '<S477>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S477>/OldValue' incorporates:
     *  ActionPort: '<S580>/Action Port'
     */
    rtb_Merge_pl = Mooventure2016_Rev5_B.s347_Regen_Brakes_Disabled;

    /* S-Function (motohawk_sfun_code_cover): '<S580>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(238);
    }

    /* End of Outputs for SubSystem: '<S477>/OldValue' */
  }

  /* End of If: '<S477>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S347>/motohawk_fault_action1'
   *
   * Regarding '<S347>/motohawk_fault_action1':
     Get Fault Action Status: HV_Light
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s347_HV_Elec_Sys_Warm = GetFaultActionStatus(9);
  }

  /* If: '<S478>/If' incorporates:
   *  Inport: '<S581>/In1'
   *  Inport: '<S582>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S478>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S478>/override_enable'
   */
  if ((HV_Elec_Sys_Wrn_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S478>/NewValue' incorporates:
     *  ActionPort: '<S581>/Action Port'
     */
    rtb_Merge_e4 = (HV_Elec_Sys_Wrn_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S581>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(239);
    }

    /* End of Outputs for SubSystem: '<S478>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S478>/OldValue' incorporates:
     *  ActionPort: '<S582>/Action Port'
     */
    rtb_Merge_e4 = Mooventure2016_Rev5_B.s347_HV_Elec_Sys_Warm;

    /* S-Function (motohawk_sfun_code_cover): '<S582>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(240);
    }

    /* End of Outputs for SubSystem: '<S478>/OldValue' */
  }

  /* End of If: '<S478>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S347>/motohawk_fault_action'
   *
   * Regarding '<S347>/motohawk_fault_action':
     Get Fault Action Status: Wrench_Light
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s347_Repair_Wrench = GetFaultActionStatus(15);
  }

  /* If: '<S479>/If' incorporates:
   *  Inport: '<S583>/In1'
   *  Inport: '<S584>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S479>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S479>/override_enable'
   */
  if ((Repair_Wrench_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S479>/NewValue' incorporates:
     *  ActionPort: '<S583>/Action Port'
     */
    rtb_Merge_br = (Repair_Wrench_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S583>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(241);
    }

    /* End of Outputs for SubSystem: '<S479>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S479>/OldValue' incorporates:
     *  ActionPort: '<S584>/Action Port'
     */
    rtb_Merge_br = Mooventure2016_Rev5_B.s347_Repair_Wrench;

    /* S-Function (motohawk_sfun_code_cover): '<S584>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(242);
    }

    /* End of Outputs for SubSystem: '<S479>/OldValue' */
  }

  /* End of If: '<S479>/If' */

  /* If: '<S480>/If' incorporates:
   *  Inport: '<S585>/In1'
   *  Inport: '<S586>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S480>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S480>/override_enable'
   */
  if ((Cruise_Ctrl_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S480>/NewValue' incorporates:
     *  ActionPort: '<S585>/Action Port'
     */
    rtb_Merge_gn = (Cruise_Ctrl_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S585>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(243);
    }

    /* End of Outputs for SubSystem: '<S480>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S480>/OldValue' incorporates:
     *  ActionPort: '<S586>/Action Port'
     */
    rtb_Merge_gn = Mooventure2016_Rev5_B.s112_System;

    /* S-Function (motohawk_sfun_code_cover): '<S586>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(244);
    }

    /* End of Outputs for SubSystem: '<S480>/OldValue' */
  }

  /* End of If: '<S480>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S347>/motohawk_fault_action5'
   *
   * Regarding '<S347>/motohawk_fault_action5':
     Get Fault Action Status: Temperature_Solid
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_RelationalOperator11_d = GetFaultActionStatus(14);
  }

  /* DataTypeConversion: '<S347>/Data Type Conversion' */
  rtb_UnitDelay_o = (real_T)rtb_RelationalOperator11_d;

  /* S-Function (motohawk_sfun_fault_action): '<S347>/motohawk_fault_action6'
   *
   * Regarding '<S347>/motohawk_fault_action6':
     Get Fault Action Status: Temperature_Flash
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_RelationalOperator11_d = GetFaultActionStatus(13);
  }

  /* DataTypeConversion: '<S347>/Data Type Conversion1' */
  rtb_UnitDelay_m = (real_T)rtb_RelationalOperator11_d;

  /* Stateflow: '<S347>/Chart' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S347>/motohawk_data_read'
   */

  /* Gateway: Foreground/Outputs/Driver Ouputs/Chart */
  /* During: Foreground/Outputs/Driver Ouputs/Chart */
  if (Mooventure2016_Rev5_DWork.s463_is_active_c22_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/Driver Ouputs/Chart */
    Mooventure2016_Rev5_DWork.s463_is_active_c22_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S463>:2' */
    Mooventure2016_Rev5_DWork.s463_is_c22_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Normal;
  } else {
    switch (Mooventure2016_Rev5_DWork.s463_is_c22_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_FlashOff:
      /* During 'FlashOff': '<S463>:11' */
      if (rtb_UnitDelay_m == 0.0) {
        /* Transition: '<S463>:22' */
        Mooventure2016_Rev5_DWork.s463_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal;
      } else {
        Mooventure2016_Rev5_B.s463_engTemp = 23.0;
        Mooventure2016_Rev5_B.s463_transTemp = 23.0;
        Mooventure2016_Rev5_B.s463_timerOut = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_FlashOn:
      /* During 'FlashOn': '<S463>:8' */
      if (rtb_UnitDelay_m == 0.0) {
        /* Transition: '<S463>:10' */
        Mooventure2016_Rev5_DWork.s463_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal;
      } else if (Mooventure2016_Rev5_B.s463_engTemp == 200.0) {
        /* Transition: '<S463>:24' */
        Mooventure2016_Rev5_DWork.s463_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Wait;
      } else {
        Mooventure2016_Rev5_B.s463_engTemp = 200.0;
        Mooventure2016_Rev5_B.s463_transTemp = 200.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Normal:
      /* During 'Normal': '<S463>:1' */
      if (rtb_UnitDelay_o == 1.0) {
        /* Transition: '<S463>:4' */
        Mooventure2016_Rev5_DWork.s463_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Solid;
      } else if (rtb_UnitDelay_m == 1.0) {
        /* Transition: '<S463>:9' */
        Mooventure2016_Rev5_DWork.s463_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_FlashOn;
      } else {
        Mooventure2016_Rev5_B.s463_engTemp = 23.0;
        Mooventure2016_Rev5_B.s463_transTemp = 23.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Solid:
      /* During 'Solid': '<S463>:3' */
      if (rtb_UnitDelay_o == 0.0) {
        /* Transition: '<S463>:6' */
        Mooventure2016_Rev5_DWork.s463_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal;
      } else {
        Mooventure2016_Rev5_B.s463_engTemp = 200.0;
        Mooventure2016_Rev5_B.s463_transTemp = 200.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Wait:
      /* During 'Wait': '<S463>:23' */
      if (TimerOne1_DataStore() == TRUE) {
        /* Transition: '<S463>:25' */
        Mooventure2016_Rev5_DWork.s463_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_FlashOff;
      } else {
        Mooventure2016_Rev5_B.s463_timerOut = 1.0;
      }
      break;

     default:
      /* Transition: '<S463>:2' */
      Mooventure2016_Rev5_DWork.s463_is_c22_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Normal;
      break;
    }
  }

  /* End of Stateflow: '<S347>/Chart' */
  /* If: '<S481>/If' incorporates:
   *  Inport: '<S587>/In1'
   *  Inport: '<S588>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S481>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S481>/override_enable'
   */
  if ((Eng_Cool_Temp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S481>/NewValue' incorporates:
     *  ActionPort: '<S587>/Action Port'
     */
    rtb_Merge_cu = (Eng_Cool_Temp_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S587>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(245);
    }

    /* End of Outputs for SubSystem: '<S481>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S481>/OldValue' incorporates:
     *  ActionPort: '<S588>/Action Port'
     */
    rtb_Merge_cu = Mooventure2016_Rev5_B.s463_engTemp;

    /* S-Function (motohawk_sfun_code_cover): '<S588>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(246);
    }

    /* End of Outputs for SubSystem: '<S481>/OldValue' */
  }

  /* End of If: '<S481>/If' */

  /* If: '<S482>/If' incorporates:
   *  Inport: '<S589>/In1'
   *  Inport: '<S590>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S482>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S482>/override_enable'
   */
  if ((Me_Cool_Temp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S482>/NewValue' incorporates:
     *  ActionPort: '<S589>/Action Port'
     */
    rtb_Merge_nyh = (Me_Cool_Temp_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S589>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(247);
    }

    /* End of Outputs for SubSystem: '<S482>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S482>/OldValue' incorporates:
     *  ActionPort: '<S590>/Action Port'
     */
    rtb_Merge_nyh = Mooventure2016_Rev5_B.s463_transTemp;

    /* S-Function (motohawk_sfun_code_cover): '<S590>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(248);
    }

    /* End of Outputs for SubSystem: '<S482>/OldValue' */
  }

  /* End of If: '<S482>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S347>/Send CAN Messages' */
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

  /* Abs: '<S347>/Abs1' */
  Mooventure2016_Rev5_B.s347_Engine_Speed = fabs
    (Mooventure2016_Rev5_B.s327_Merge);

  /* If: '<S483>/If' incorporates:
   *  Inport: '<S591>/In1'
   *  Inport: '<S592>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S483>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S483>/override_enable'
   */
  if ((Engine_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S483>/NewValue' incorporates:
     *  ActionPort: '<S591>/Action Port'
     */
    rtb_Merge_m = (Engine_Speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S591>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(249);
    }

    /* End of Outputs for SubSystem: '<S483>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S483>/OldValue' incorporates:
     *  ActionPort: '<S592>/Action Port'
     */
    rtb_Merge_m = Mooventure2016_Rev5_B.s347_Engine_Speed;

    /* S-Function (motohawk_sfun_code_cover): '<S592>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(250);
    }

    /* End of Outputs for SubSystem: '<S483>/OldValue' */
  }

  /* End of If: '<S483>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S347>/Send CAN Messages1' */
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
        if (rtb_Merge_m < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Merge_m > 16383.7500000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(rtb_Merge_m * (4.0000000000F));
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

  /* Product: '<S347>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S347>/motohawk_calibration38'
   */
  rtb_UnitDelay_o = rtb_Sum1 * (SOC_Multiplier_DataStore());

  /* Sum: '<S347>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S347>/motohawk_calibration39'
   */
  Mooventure2016_Rev5_B.s347_Current = rtb_UnitDelay_o - (SOC_Subtract_DataStore
    ());

  /* If: '<S484>/If' incorporates:
   *  Inport: '<S593>/In1'
   *  Inport: '<S594>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S484>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S484>/override_enable'
   */
  if ((Current_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S484>/NewValue' incorporates:
     *  ActionPort: '<S593>/Action Port'
     */
    rtb_Merge_k = (Current_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S593>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(251);
    }

    /* End of Outputs for SubSystem: '<S484>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S484>/OldValue' incorporates:
     *  ActionPort: '<S594>/Action Port'
     */
    rtb_Merge_k = Mooventure2016_Rev5_B.s347_Current;

    /* S-Function (motohawk_sfun_code_cover): '<S594>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(252);
    }

    /* End of Outputs for SubSystem: '<S484>/OldValue' */
  }

  /* End of If: '<S484>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S347>/Send CAN Messages2' */
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
        if (rtb_Merge_k < -150.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Merge_k > 6403.5000000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)((rtb_Merge_k - (-150.0000000000F)) * (10.0000000000F));
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

  /* Product: '<S347>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S347>/motohawk_calibration7'
   */
  rtb_UnitDelay_o = (RPM_to_Wheel_Speed_Multiplier_DataStore()) *
    Mooventure2016_Rev5_B.s327_Merge;

  /* Abs: '<S347>/Abs2' incorporates:
   *  Product: '<S347>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S347>/motohawk_calibration8'
   */
  Mooventure2016_Rev5_B.s347_Vehi_Speed = fabs(rtb_UnitDelay_o *
    (MPH_to_KMH_DataStore()));

  /* If: '<S473>/If' incorporates:
   *  Inport: '<S571>/In1'
   *  Inport: '<S572>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S473>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S473>/override_enable'
   */
  if ((Vehicle_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S473>/NewValue' incorporates:
     *  ActionPort: '<S571>/Action Port'
     */
    rtb_Merge_e3 = (Vehicle_Speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S571>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(229);
    }

    /* End of Outputs for SubSystem: '<S473>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S473>/OldValue' incorporates:
     *  ActionPort: '<S572>/Action Port'
     */
    rtb_Merge_e3 = Mooventure2016_Rev5_B.s347_Vehi_Speed;

    /* S-Function (motohawk_sfun_code_cover): '<S572>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(230);
    }

    /* End of Outputs for SubSystem: '<S473>/OldValue' */
  }

  /* End of If: '<S473>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S347>/Send CAN Messages4' */
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

  /* Outputs for Enabled SubSystem: '<S347>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S465>/Enable'
   */
  if (Mooventure2016_Rev5_B.s463_timerOut > 0.0) {
    /* Stateflow: '<S465>/Bar Chart Reset' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S465>/motohawk_calibration2'
     */

    /* Gateway: Foreground/Outputs/Driver Ouputs/Enabled
       Subsystem/Bar Chart Reset */
    /* During: Foreground/Outputs/Driver Ouputs/Enabled
       Subsystem/Bar Chart Reset */
    if (Mooventure2016_Rev5_DWork.s485_is_active_c55_Mooventure2016_Rev5 == 0) {
      /* Entry: Foreground/Outputs/Driver Ouputs/Enabled
         Subsystem/Bar Chart Reset */
      Mooventure2016_Rev5_DWork.s485_is_active_c55_Mooventure2016_Rev5 = 1U;

      /* Transition: '<S485>:4' */
      Mooventure2016_Rev5_DWork.s485_is_c55_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Init;
    } else {
      switch (Mooventure2016_Rev5_DWork.s485_is_c55_Mooventure2016_Rev5) {
       case Mooventure2016_Rev5_IN_Clear:
        /* During 'Clear': '<S485>:8' */
        if (Mooventure2016_Rev5_B.s485_write == FALSE) {
          /* Transition: '<S485>:10' */
          Mooventure2016_Rev5_DWork.s485_is_c55_Mooventure2016_Rev5 =
            Mooventure2016_Rev5_IN_Init;
        } else {
          Mooventure2016_Rev5_B.s485_write = FALSE;
          Mooventure2016_Rev5_DWork.s485_count = 0.0;
        }
        break;

       case Mooventure2016_Rev5_IN_Counting_n:
        /* During 'Counting': '<S485>:3' */
        if (Mooventure2016_Rev5_DWork.s485_count >= (Temp_Flash_DataStore())) {
          /* Transition: '<S485>:7' */
          Mooventure2016_Rev5_DWork.s485_is_c55_Mooventure2016_Rev5 =
            Mooventure2016_Rev5_IN_Write;
        } else {
          Mooventure2016_Rev5_DWork.s485_count =
            Mooventure2016_Rev5_DWork.s485_count + 1.0;
        }
        break;

       case Mooventure2016_Rev5_IN_Init:
        /* During 'Init': '<S485>:1' */
        if (Mooventure2016_Rev5_B.s485_write == FALSE) {
          /* Transition: '<S485>:5' */
          Mooventure2016_Rev5_DWork.s485_is_c55_Mooventure2016_Rev5 =
            Mooventure2016_Rev5_IN_Counting_n;
        } else {
          Mooventure2016_Rev5_B.s485_write = FALSE;
        }
        break;

       case Mooventure2016_Rev5_IN_Write:
        /* During 'Write': '<S485>:6' */
        if (Mooventure2016_Rev5_B.s485_write == TRUE) {
          /* Transition: '<S485>:9' */
          Mooventure2016_Rev5_DWork.s485_is_c55_Mooventure2016_Rev5 =
            Mooventure2016_Rev5_IN_Clear;
        } else {
          Mooventure2016_Rev5_B.s485_write = TRUE;
        }
        break;

       default:
        /* Transition: '<S485>:4' */
        Mooventure2016_Rev5_DWork.s485_is_c55_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Init;
        break;
      }
    }

    /* End of Stateflow: '<S465>/Bar Chart Reset' */
  }

  /* End of Outputs for SubSystem: '<S347>/Enabled Subsystem' */

  /* S-Function (motohawk_sfun_data_write): '<S347>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimerOne1 */
  {
    TimerOne1_DataStore() = Mooventure2016_Rev5_B.s485_write;
  }

  /* S-Function Block: <S466>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s466_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ka = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S466>/Switch1' incorporates:
   *  Constant: '<S347>/ 1'
   */
  if (Mooventure2016_Rev5_ConstB.s466_DataTypeConversion) {
    rtb_Switch_c = 0.0;
  } else {
    /* MinMax: '<S486>/MinMax' incorporates:
     *  Constant: '<S347>/   '
     *  Gain: '<S347>/Gain'
     *  Product: '<S466>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S466>/motohawk_delta_time'
     */
    rtb_UnitDelay_m = 0.00027777777777777778 * rtb_UnitDelay_o *
      rtb_motohawk_delta_time_ka;
    rtb_UnitDelay_m = rtb_UnitDelay_m >= 0.0 ? rtb_UnitDelay_m : 0.0;

    /* MinMax: '<S486>/MinMax1' incorporates:
     *  Constant: '<S347>/   '
     *  MinMax: '<S486>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S347>/motohawk_calibration'
     */
    rtb_Switch_c = (rtb_UnitDelay_m <= (Max_Dist_Travel_In_Sec_DataStore())) ||
      rtIsNaN((Max_Dist_Travel_In_Sec_DataStore())) ? rtb_UnitDelay_m :
      (Max_Dist_Travel_In_Sec_DataStore());
  }

  /* End of Switch: '<S466>/Switch1' */
  /* Sum: '<S347>/Add' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S347>/motohawk_data_read2'
   */
  rtb_Add = rtb_Switch_c + Dist_Trv_DataStore();

  /* S-Function (motohawk_sfun_data_write): '<S347>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Dist_Trv */
  {
    Dist_Trv_DataStore() = rtb_Add;
  }

  /* MATLAB Function Block: '<S347>/Embedded MATLAB Function' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S347>/motohawk_fault_action3'
   *  S-Function (motohawk_sfun_fault_action): '<S347>/motohawk_fault_action7'
   */

  /* MATLAB Function 'Foreground/Outputs/Driver Ouputs/Embedded MATLAB Function': '<S464>:1' */
  if (GetFaultActionStatus(4) == TRUE) {
    /* '<S464>:1:3' */
    /* '<S464>:1:4' */
    Mooventure2016_Rev5_B.s464_CEL = 2.0;
  } else if (GetFaultActionStatus(3) == TRUE) {
    /* '<S464>:1:5' */
    /* '<S464>:1:6' */
    Mooventure2016_Rev5_B.s464_CEL = 1.0;
  } else {
    /* '<S464>:1:8' */
    Mooventure2016_Rev5_B.s464_CEL = 0.0;
  }

  /* End of MATLAB Function Block: '<S347>/Embedded MATLAB Function' */
  /* If: '<S475>/If' incorporates:
   *  Inport: '<S575>/In1'
   *  Inport: '<S576>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S475>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S475>/override_enable'
   */
  if ((Check_Engine_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S475>/NewValue' incorporates:
     *  ActionPort: '<S575>/Action Port'
     */
    rtb_Merge_of = (Check_Engine_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S575>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(233);
    }

    /* End of Outputs for SubSystem: '<S475>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S475>/OldValue' incorporates:
     *  ActionPort: '<S576>/Action Port'
     */
    rtb_Merge_of = Mooventure2016_Rev5_B.s464_CEL;

    /* S-Function (motohawk_sfun_code_cover): '<S576>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(234);
    }

    /* End of Outputs for SubSystem: '<S475>/OldValue' */
  }

  /* End of If: '<S475>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S347>/motohawk_fault_action4'
   *
   * Regarding '<S347>/motohawk_fault_action4':
     Get Fault Action Status: Batt_Light
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s347_Battery_Light = GetFaultActionStatus(0);
  }

  /* If: '<S476>/If' incorporates:
   *  Inport: '<S577>/In1'
   *  Inport: '<S578>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S476>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S476>/override_enable'
   */
  if ((Battery_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S476>/NewValue' incorporates:
     *  ActionPort: '<S577>/Action Port'
     */
    rtb_Merge_en = (Battery_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S577>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(235);
    }

    /* End of Outputs for SubSystem: '<S476>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S476>/OldValue' incorporates:
     *  ActionPort: '<S578>/Action Port'
     */
    rtb_Merge_en = Mooventure2016_Rev5_B.s347_Battery_Light;

    /* S-Function (motohawk_sfun_code_cover): '<S578>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(236);
    }

    /* End of Outputs for SubSystem: '<S476>/OldValue' */
  }

  /* End of If: '<S476>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S347>/Send CAN Messages6' */
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
        if (rtb_Merge_of < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_of > 3.0000000000F) {
          tmp0 = (uint8_T)(3U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_of);
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

  /* MATLAB Function Block: '<S347>/ODO_CALC' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S347>/motohawk_data_read3'
   *  S-Function (motohawk_sfun_data_read): '<S347>/motohawk_data_read4'
   */

  /* MATLAB Function 'Foreground/Outputs/Driver Ouputs/ODO_CALC': '<S467>:1' */
  if (Dist_Trv_DataStore() >= 0.016666666) {
    /* '<S467>:1:3' */
    if (ODO_INCRE_DataStore() - 0.0001 <= 0.0) {
      /* '<S467>:1:4' */
      /* '<S467>:1:5' */
      rtb_ODO_out = (0.05 + ODO_INCRE_DataStore()) - 0.0001;

      /* '<S467>:1:6' */
      rtb_reset = 0.0;
    } else {
      /* '<S467>:1:8' */
      rtb_ODO_out = ODO_INCRE_DataStore() - 0.0001;

      /* '<S467>:1:9' */
      rtb_reset = 0.0;
    }
  } else {
    /* '<S467>:1:12' */
    rtb_ODO_out = ODO_INCRE_DataStore();

    /* '<S467>:1:13' */
    rtb_reset = Dist_Trv_DataStore();
  }

  /* End of MATLAB Function Block: '<S347>/ODO_CALC' */

  /* S-Function (motohawk_sfun_data_write): '<S347>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: Dist_Trv */
  {
    Dist_Trv_DataStore() = rtb_reset;
  }

  /* S-Function (motohawk_sfun_data_write): '<S347>/motohawk_data_write3' */
  /* Write to Data Storage as scalar: ODO_INCRE */
  {
    ODO_INCRE_DataStore() = rtb_ODO_out;
  }

  /* If: '<S471>/If' incorporates:
   *  Inport: '<S567>/In1'
   *  Inport: '<S568>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S347>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S471>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S471>/override_enable'
   */
  if ((BCU_Caution_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S471>/NewValue' incorporates:
     *  ActionPort: '<S567>/Action Port'
     */
    rtb_Merge_iz = (BCU_Caution_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S567>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(225);
    }

    /* End of Outputs for SubSystem: '<S471>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S471>/OldValue' incorporates:
     *  ActionPort: '<S568>/Action Port'
     */
    rtb_Merge_iz = (BCU_Caution_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S568>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(226);
    }

    /* End of Outputs for SubSystem: '<S471>/OldValue' */
  }

  /* End of If: '<S471>/If' */

  /* If: '<S472>/If' incorporates:
   *  Inport: '<S569>/In1'
   *  Inport: '<S570>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S347>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_calibration): '<S472>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S472>/override_enable'
   */
  if ((BCU_Hazard_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S472>/NewValue' incorporates:
     *  ActionPort: '<S569>/Action Port'
     */
    rtb_Merge_gv = (BCU_Hazard_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S569>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(227);
    }

    /* End of Outputs for SubSystem: '<S472>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S472>/OldValue' incorporates:
     *  ActionPort: '<S570>/Action Port'
     */
    rtb_Merge_gv = (BCU_Hazard_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S570>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(228);
    }

    /* End of Outputs for SubSystem: '<S472>/OldValue' */
  }

  /* End of If: '<S472>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S347>/Send CAN Messages3' */
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

  /* S-Function (motohawk_sfun_probe): '<S347>/motohawk_probe10' */
  (BCU_Caution_Prb_DataStore()) = (BCU_Caution_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S347>/motohawk_probe11' */
  (BCU_Hazard_Prb_DataStore()) = (BCU_Hazard_DataStore());

  /* S-Function (motohawk_sfun_data_read): '<S347>/motohawk_data_read5' */
  Mooventure2016_Rev5_B.s347_ODO_Count = ODO_INCRE_DataStore();

  /* If: '<S474>/If' incorporates:
   *  Inport: '<S573>/In1'
   *  Inport: '<S574>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S474>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S474>/override_enable'
   */
  if ((ODO_Count_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S474>/NewValue' incorporates:
     *  ActionPort: '<S573>/Action Port'
     */
    rtb_Merge_mf = (ODO_Count_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S573>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(231);
    }

    /* End of Outputs for SubSystem: '<S474>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S474>/OldValue' incorporates:
     *  ActionPort: '<S574>/Action Port'
     */
    rtb_Merge_mf = Mooventure2016_Rev5_B.s347_ODO_Count;

    /* S-Function (motohawk_sfun_code_cover): '<S574>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(232);
    }

    /* End of Outputs for SubSystem: '<S474>/OldValue' */
  }

  /* End of If: '<S474>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S347>/Send CAN Messages5' */
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

  /* If: '<S493>/If' incorporates:
   *  Inport: '<S525>/In1'
   *  Inport: '<S526>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration18'
   *  S-Function (motohawk_sfun_calibration): '<S493>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S493>/override_enable'
   */
  if ((DATA_MODE_2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S493>/NewValue' incorporates:
     *  ActionPort: '<S525>/Action Port'
     */
    rtb_Merge_pb = (DATA_MODE_2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S525>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(183);
    }

    /* End of Outputs for SubSystem: '<S493>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S493>/OldValue' incorporates:
     *  ActionPort: '<S526>/Action Port'
     */
    rtb_Merge_pb = (DATA_MODE_2_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S526>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(184);
    }

    /* End of Outputs for SubSystem: '<S493>/OldValue' */
  }

  /* End of If: '<S493>/If' */

  /* If: '<S494>/If' incorporates:
   *  Inport: '<S527>/In1'
   *  Inport: '<S528>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration19'
   *  S-Function (motohawk_sfun_calibration): '<S494>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S494>/override_enable'
   */
  if ((VIN_DATA_BYTE_1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S494>/NewValue' incorporates:
     *  ActionPort: '<S527>/Action Port'
     */
    rtb_Merge_og = (VIN_DATA_BYTE_1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S527>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(185);
    }

    /* End of Outputs for SubSystem: '<S494>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S494>/OldValue' incorporates:
     *  ActionPort: '<S528>/Action Port'
     */
    rtb_Merge_og = (VIN_DATA_BYTE_1_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S528>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(186);
    }

    /* End of Outputs for SubSystem: '<S494>/OldValue' */
  }

  /* End of If: '<S494>/If' */

  /* If: '<S495>/If' incorporates:
   *  Inport: '<S529>/In1'
   *  Inport: '<S530>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration20'
   *  S-Function (motohawk_sfun_calibration): '<S495>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S495>/override_enable'
   */
  if ((VIN_DATA_BYTE_2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S495>/NewValue' incorporates:
     *  ActionPort: '<S529>/Action Port'
     */
    rtb_Merge_d = (VIN_DATA_BYTE_2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S529>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(187);
    }

    /* End of Outputs for SubSystem: '<S495>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S495>/OldValue' incorporates:
     *  ActionPort: '<S530>/Action Port'
     */
    rtb_Merge_d = (VIN_DATA_BYTE_2_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S530>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(188);
    }

    /* End of Outputs for SubSystem: '<S495>/OldValue' */
  }

  /* End of If: '<S495>/If' */

  /* If: '<S496>/If' incorporates:
   *  Inport: '<S531>/In1'
   *  Inport: '<S532>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration21'
   *  S-Function (motohawk_sfun_calibration): '<S496>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S496>/override_enable'
   */
  if ((VIN_DATA_BYTE_3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S496>/NewValue' incorporates:
     *  ActionPort: '<S531>/Action Port'
     */
    rtb_Merge_ho = (VIN_DATA_BYTE_3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S531>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(189);
    }

    /* End of Outputs for SubSystem: '<S496>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S496>/OldValue' incorporates:
     *  ActionPort: '<S532>/Action Port'
     */
    rtb_Merge_ho = (VIN_DATA_BYTE_3_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S532>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(190);
    }

    /* End of Outputs for SubSystem: '<S496>/OldValue' */
  }

  /* End of If: '<S496>/If' */

  /* If: '<S497>/If' incorporates:
   *  Inport: '<S533>/In1'
   *  Inport: '<S534>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration22'
   *  S-Function (motohawk_sfun_calibration): '<S497>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S497>/override_enable'
   */
  if ((VIN_DATA_BYTE_4_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S497>/NewValue' incorporates:
     *  ActionPort: '<S533>/Action Port'
     */
    rtb_Merge_mb = (VIN_DATA_BYTE_4_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S533>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(191);
    }

    /* End of Outputs for SubSystem: '<S497>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S497>/OldValue' incorporates:
     *  ActionPort: '<S534>/Action Port'
     */
    rtb_Merge_mb = (VIN_DATA_BYTE_4_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S534>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(192);
    }

    /* End of Outputs for SubSystem: '<S497>/OldValue' */
  }

  /* End of If: '<S497>/If' */

  /* If: '<S498>/If' incorporates:
   *  Inport: '<S535>/In1'
   *  Inport: '<S536>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration23'
   *  S-Function (motohawk_sfun_calibration): '<S498>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S498>/override_enable'
   */
  if ((VIN_DATA_BYTE_5_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S498>/NewValue' incorporates:
     *  ActionPort: '<S535>/Action Port'
     */
    rtb_Merge_fj = (VIN_DATA_BYTE_5_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S535>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(193);
    }

    /* End of Outputs for SubSystem: '<S498>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S498>/OldValue' incorporates:
     *  ActionPort: '<S536>/Action Port'
     */
    rtb_Merge_fj = (VIN_DATA_BYTE_5_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S536>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(194);
    }

    /* End of Outputs for SubSystem: '<S498>/OldValue' */
  }

  /* End of If: '<S498>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S469>/Send CAN Messages10' */
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

        if (rtb_Merge_og < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_og > 255.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_og);
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

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe26' */
  (DATA_MODE_2_Prb_DataStore()) = (DATA_MODE_2_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe27' */
  (VIN_DATA_BYTE_1_Prb_DataStore()) = (VIN_DATA_BYTE_1_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe28' */
  (VIN_DATA_BYTE_2_Prb_DataStore()) = (VIN_DATA_BYTE_2_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe29' */
  (VIN_DATA_BYTE_3_Prb_DataStore()) = (VIN_DATA_BYTE_3_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe30' */
  (VIN_DATA_BYTE_4_Prb_DataStore()) = (VIN_DATA_BYTE_4_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe31' */
  (VIN_DATA_BYTE_5_Prb_DataStore()) = (VIN_DATA_BYTE_5_DataStore());

  /* If: '<S499>/If' incorporates:
   *  Inport: '<S537>/In1'
   *  Inport: '<S538>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration24'
   *  S-Function (motohawk_sfun_calibration): '<S499>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S499>/override_enable'
   */
  if ((DATA_MODE_3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S499>/NewValue' incorporates:
     *  ActionPort: '<S537>/Action Port'
     */
    rtb_Merge_ah = (DATA_MODE_3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S537>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(195);
    }

    /* End of Outputs for SubSystem: '<S499>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S499>/OldValue' incorporates:
     *  ActionPort: '<S538>/Action Port'
     */
    rtb_Merge_ah = (DATA_MODE_3_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S538>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(196);
    }

    /* End of Outputs for SubSystem: '<S499>/OldValue' */
  }

  /* End of If: '<S499>/If' */

  /* If: '<S500>/If' incorporates:
   *  Inport: '<S539>/In1'
   *  Inport: '<S540>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration25'
   *  S-Function (motohawk_sfun_calibration): '<S500>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S500>/override_enable'
   */
  if ((VIN_DATA_BYTE_6_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S500>/NewValue' incorporates:
     *  ActionPort: '<S539>/Action Port'
     */
    rtb_Merge_ko = (VIN_DATA_BYTE_6_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S539>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(197);
    }

    /* End of Outputs for SubSystem: '<S500>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S500>/OldValue' incorporates:
     *  ActionPort: '<S540>/Action Port'
     */
    rtb_Merge_ko = (VIN_DATA_BYTE_6_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S540>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(198);
    }

    /* End of Outputs for SubSystem: '<S500>/OldValue' */
  }

  /* End of If: '<S500>/If' */

  /* If: '<S501>/If' incorporates:
   *  Inport: '<S541>/In1'
   *  Inport: '<S542>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration26'
   *  S-Function (motohawk_sfun_calibration): '<S501>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S501>/override_enable'
   */
  if ((VIN_DATA_BYTE_7_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S501>/NewValue' incorporates:
     *  ActionPort: '<S541>/Action Port'
     */
    rtb_Merge_pj = (VIN_DATA_BYTE_7_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S541>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(199);
    }

    /* End of Outputs for SubSystem: '<S501>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S501>/OldValue' incorporates:
     *  ActionPort: '<S542>/Action Port'
     */
    rtb_Merge_pj = (VIN_DATA_BYTE_7_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S542>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(200);
    }

    /* End of Outputs for SubSystem: '<S501>/OldValue' */
  }

  /* End of If: '<S501>/If' */

  /* If: '<S502>/If' incorporates:
   *  Inport: '<S543>/In1'
   *  Inport: '<S544>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration27'
   *  S-Function (motohawk_sfun_calibration): '<S502>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S502>/override_enable'
   */
  if ((VIN_DATA_BYTE_8_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S502>/NewValue' incorporates:
     *  ActionPort: '<S543>/Action Port'
     */
    rtb_Merge_cd = (VIN_DATA_BYTE_8_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S543>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(201);
    }

    /* End of Outputs for SubSystem: '<S502>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S502>/OldValue' incorporates:
     *  ActionPort: '<S544>/Action Port'
     */
    rtb_Merge_cd = (VIN_DATA_BYTE_8_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S544>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(202);
    }

    /* End of Outputs for SubSystem: '<S502>/OldValue' */
  }

  /* End of If: '<S502>/If' */

  /* If: '<S503>/If' incorporates:
   *  Inport: '<S545>/In1'
   *  Inport: '<S546>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration28'
   *  S-Function (motohawk_sfun_calibration): '<S503>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S503>/override_enable'
   */
  if ((VIN_DATA_BYTE_9_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S503>/NewValue' incorporates:
     *  ActionPort: '<S545>/Action Port'
     */
    rtb_Merge_ca = (VIN_DATA_BYTE_9_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S545>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(203);
    }

    /* End of Outputs for SubSystem: '<S503>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S503>/OldValue' incorporates:
     *  ActionPort: '<S546>/Action Port'
     */
    rtb_Merge_ca = (VIN_DATA_BYTE_9_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S546>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(204);
    }

    /* End of Outputs for SubSystem: '<S503>/OldValue' */
  }

  /* End of If: '<S503>/If' */

  /* If: '<S504>/If' incorporates:
   *  Inport: '<S547>/In1'
   *  Inport: '<S548>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration29'
   *  S-Function (motohawk_sfun_calibration): '<S504>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S504>/override_enable'
   */
  if ((VIN_DATA_BYTE_10_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S504>/NewValue' incorporates:
     *  ActionPort: '<S547>/Action Port'
     */
    rtb_Merge_mw = (VIN_DATA_BYTE_10_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S547>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(205);
    }

    /* End of Outputs for SubSystem: '<S504>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S504>/OldValue' incorporates:
     *  ActionPort: '<S548>/Action Port'
     */
    rtb_Merge_mw = (VIN_DATA_BYTE_10_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S548>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(206);
    }

    /* End of Outputs for SubSystem: '<S504>/OldValue' */
  }

  /* End of If: '<S504>/If' */

  /* If: '<S505>/If' incorporates:
   *  Inport: '<S549>/In1'
   *  Inport: '<S550>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration30'
   *  S-Function (motohawk_sfun_calibration): '<S505>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S505>/override_enable'
   */
  if ((VIN_DATA_BYTE_11_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S505>/NewValue' incorporates:
     *  ActionPort: '<S549>/Action Port'
     */
    rtb_Merge_bm = (VIN_DATA_BYTE_11_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S549>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(207);
    }

    /* End of Outputs for SubSystem: '<S505>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S505>/OldValue' incorporates:
     *  ActionPort: '<S550>/Action Port'
     */
    rtb_Merge_bm = (VIN_DATA_BYTE_11_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S550>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(208);
    }

    /* End of Outputs for SubSystem: '<S505>/OldValue' */
  }

  /* End of If: '<S505>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S469>/Send CAN Messages11' */
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

        if (rtb_Merge_ko < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_ko > 255.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_ko);
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

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe32' */
  (DATA_MODE_3_Prb_DataStore()) = (DATA_MODE_3_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe33' */
  (VIN_DATA_BYTE_6_Prb_DataStore()) = (VIN_DATA_BYTE_6_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe34' */
  (VIN_DATA_BYTE_7_Prb_DataStore()) = (VIN_DATA_BYTE_7_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe35' */
  (VIN_DATA_BYTE_8_Prb_DataStore()) = (VIN_DATA_BYTE_8_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe36' */
  (VIN_DATA_BYTE_9_Prb_DataStore()) = (VIN_DATA_BYTE_9_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe37' */
  (VIN_DATA_BYTE_10_Prb_DataStore()) = (VIN_DATA_BYTE_10_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe38' */
  (VIN_DATA_BYTE_11_Prb_DataStore()) = (VIN_DATA_BYTE_11_DataStore());

  /* If: '<S506>/If' incorporates:
   *  Inport: '<S551>/In1'
   *  Inport: '<S552>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration31'
   *  S-Function (motohawk_sfun_calibration): '<S506>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S506>/override_enable'
   */
  if ((DATA_MODE_4_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S506>/NewValue' incorporates:
     *  ActionPort: '<S551>/Action Port'
     */
    rtb_Merge_dh = (DATA_MODE_4_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S551>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(209);
    }

    /* End of Outputs for SubSystem: '<S506>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S506>/OldValue' incorporates:
     *  ActionPort: '<S552>/Action Port'
     */
    rtb_Merge_dh = (DATA_MODE_4_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S552>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(210);
    }

    /* End of Outputs for SubSystem: '<S506>/OldValue' */
  }

  /* End of If: '<S506>/If' */

  /* If: '<S507>/If' incorporates:
   *  Inport: '<S553>/In1'
   *  Inport: '<S554>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration32'
   *  S-Function (motohawk_sfun_calibration): '<S507>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S507>/override_enable'
   */
  if ((VIN_DATA_BYTE_12_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S507>/NewValue' incorporates:
     *  ActionPort: '<S553>/Action Port'
     */
    rtb_Merge_j = (VIN_DATA_BYTE_12_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S553>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(211);
    }

    /* End of Outputs for SubSystem: '<S507>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S507>/OldValue' incorporates:
     *  ActionPort: '<S554>/Action Port'
     */
    rtb_Merge_j = (VIN_DATA_BYTE_12_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S554>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(212);
    }

    /* End of Outputs for SubSystem: '<S507>/OldValue' */
  }

  /* End of If: '<S507>/If' */

  /* If: '<S508>/If' incorporates:
   *  Inport: '<S555>/In1'
   *  Inport: '<S556>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration33'
   *  S-Function (motohawk_sfun_calibration): '<S508>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S508>/override_enable'
   */
  if ((VIN_DATA_BYTE_13_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S508>/NewValue' incorporates:
     *  ActionPort: '<S555>/Action Port'
     */
    rtb_Merge_izg = (VIN_DATA_BYTE_13_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S555>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(213);
    }

    /* End of Outputs for SubSystem: '<S508>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S508>/OldValue' incorporates:
     *  ActionPort: '<S556>/Action Port'
     */
    rtb_Merge_izg = (VIN_DATA_BYTE_13_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S556>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(214);
    }

    /* End of Outputs for SubSystem: '<S508>/OldValue' */
  }

  /* End of If: '<S508>/If' */

  /* If: '<S509>/If' incorporates:
   *  Inport: '<S557>/In1'
   *  Inport: '<S558>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration34'
   *  S-Function (motohawk_sfun_calibration): '<S509>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S509>/override_enable'
   */
  if ((VIN_DATA_BYTE_14_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S509>/NewValue' incorporates:
     *  ActionPort: '<S557>/Action Port'
     */
    rtb_Merge_dv = (VIN_DATA_BYTE_14_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S557>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(215);
    }

    /* End of Outputs for SubSystem: '<S509>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S509>/OldValue' incorporates:
     *  ActionPort: '<S558>/Action Port'
     */
    rtb_Merge_dv = (VIN_DATA_BYTE_14_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S558>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(216);
    }

    /* End of Outputs for SubSystem: '<S509>/OldValue' */
  }

  /* End of If: '<S509>/If' */

  /* If: '<S510>/If' incorporates:
   *  Inport: '<S559>/In1'
   *  Inport: '<S560>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration35'
   *  S-Function (motohawk_sfun_calibration): '<S510>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S510>/override_enable'
   */
  if ((VIN_DATA_BYTE_15_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S510>/NewValue' incorporates:
     *  ActionPort: '<S559>/Action Port'
     */
    rtb_Merge_hod = (VIN_DATA_BYTE_15_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S559>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(217);
    }

    /* End of Outputs for SubSystem: '<S510>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S510>/OldValue' incorporates:
     *  ActionPort: '<S560>/Action Port'
     */
    rtb_Merge_hod = (VIN_DATA_BYTE_15_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S560>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(218);
    }

    /* End of Outputs for SubSystem: '<S510>/OldValue' */
  }

  /* End of If: '<S510>/If' */

  /* If: '<S511>/If' incorporates:
   *  Inport: '<S561>/In1'
   *  Inport: '<S562>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration36'
   *  S-Function (motohawk_sfun_calibration): '<S511>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S511>/override_enable'
   */
  if ((VIN_DATA_BYTE_16_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S511>/NewValue' incorporates:
     *  ActionPort: '<S561>/Action Port'
     */
    rtb_Merge_ov = (VIN_DATA_BYTE_16_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S561>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(219);
    }

    /* End of Outputs for SubSystem: '<S511>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S511>/OldValue' incorporates:
     *  ActionPort: '<S562>/Action Port'
     */
    rtb_Merge_ov = (VIN_DATA_BYTE_16_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S562>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(220);
    }

    /* End of Outputs for SubSystem: '<S511>/OldValue' */
  }

  /* End of If: '<S511>/If' */

  /* If: '<S512>/If' incorporates:
   *  Inport: '<S563>/In1'
   *  Inport: '<S564>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration37'
   *  S-Function (motohawk_sfun_calibration): '<S512>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S512>/override_enable'
   */
  if ((VIN_DATA_BYTE_17_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S512>/NewValue' incorporates:
     *  ActionPort: '<S563>/Action Port'
     */
    rtb_Merge_k2 = (VIN_DATA_BYTE_17_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S563>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(221);
    }

    /* End of Outputs for SubSystem: '<S512>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S512>/OldValue' incorporates:
     *  ActionPort: '<S564>/Action Port'
     */
    rtb_Merge_k2 = (VIN_DATA_BYTE_17_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S564>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(222);
    }

    /* End of Outputs for SubSystem: '<S512>/OldValue' */
  }

  /* End of If: '<S512>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S469>/Send CAN Messages12' */
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

        if (rtb_Merge_j < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_j > 255.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_j);
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

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe39' */
  (DATA_MODE_4_Ovr_DataStore()) = (DATA_MODE_4_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe40' */
  (VIN_DATA_BYTE_12_Prb_DataStore()) = (VIN_DATA_BYTE_12_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe41' */
  (VIN_DATA_BYTE_13_Prb_DataStore()) = (VIN_DATA_BYTE_13_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe42' */
  (VIN_DATA_BYTE_14_Prb_DataStore()) = (VIN_DATA_BYTE_14_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe43' */
  (VIN_DATA_BYTE_15_Prb_DataStore()) = (VIN_DATA_BYTE_15_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe44' */
  (VIN_DATA_BYte_16_Prb_DataStore()) = (VIN_DATA_BYTE_16_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe45' */
  (VIN_DATA_BYTE_17_Prb_DataStore()) = (VIN_DATA_BYTE_17_DataStore());

  /* If: '<S487>/If' incorporates:
   *  Inport: '<S513>/In1'
   *  Inport: '<S514>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S487>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S487>/override_enable'
   */
  if ((Mode_1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S487>/NewValue' incorporates:
     *  ActionPort: '<S513>/Action Port'
     */
    rtb_Merge_md = (Mode_1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S513>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(171);
    }

    /* End of Outputs for SubSystem: '<S487>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S487>/OldValue' incorporates:
     *  ActionPort: '<S514>/Action Port'
     */
    rtb_Merge_md = (Mode_1_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S514>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(172);
    }

    /* End of Outputs for SubSystem: '<S487>/OldValue' */
  }

  /* End of If: '<S487>/If' */

  /* If: '<S488>/If' incorporates:
   *  Inport: '<S515>/In1'
   *  Inport: '<S516>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S488>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S488>/override_enable'
   */
  if ((Mode_2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S488>/NewValue' incorporates:
     *  ActionPort: '<S515>/Action Port'
     */
    rtb_Merge_gp = (Mode_2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S515>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(173);
    }

    /* End of Outputs for SubSystem: '<S488>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S488>/OldValue' incorporates:
     *  ActionPort: '<S516>/Action Port'
     */
    rtb_Merge_gp = (Mode_2_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S516>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(174);
    }

    /* End of Outputs for SubSystem: '<S488>/OldValue' */
  }

  /* End of If: '<S488>/If' */

  /* If: '<S489>/If' incorporates:
   *  Inport: '<S517>/In1'
   *  Inport: '<S518>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S489>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S489>/override_enable'
   */
  if ((Mode_3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S489>/NewValue' incorporates:
     *  ActionPort: '<S517>/Action Port'
     */
    rtb_Merge_mt = (Mode_3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S517>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(175);
    }

    /* End of Outputs for SubSystem: '<S489>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S489>/OldValue' incorporates:
     *  ActionPort: '<S518>/Action Port'
     */
    rtb_Merge_mt = (Mode_3_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S518>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(176);
    }

    /* End of Outputs for SubSystem: '<S489>/OldValue' */
  }

  /* End of If: '<S489>/If' */

  /* If: '<S490>/If' incorporates:
   *  Inport: '<S519>/In1'
   *  Inport: '<S520>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S490>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S490>/override_enable'
   */
  if ((Mode_4_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S490>/NewValue' incorporates:
     *  ActionPort: '<S519>/Action Port'
     */
    rtb_Merge_kq = (Mode_4_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S519>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(177);
    }

    /* End of Outputs for SubSystem: '<S490>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S490>/OldValue' incorporates:
     *  ActionPort: '<S520>/Action Port'
     */
    rtb_Merge_kq = (Mode_4_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S520>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(178);
    }

    /* End of Outputs for SubSystem: '<S490>/OldValue' */
  }

  /* End of If: '<S490>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S469>/Send CAN Messages8' */
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

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe20' */
  (Mode_1_Prb_DataStore()) = (Mode_1_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe21' */
  (Mode_2_Prb_DataStore()) = (Mode_2_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe22' */
  (Mode_3_Prb_DataStore()) = (Mode_3_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe23' */
  (Mode_4_Prb_DataStore()) = (Mode_4_DataStore());

  /* If: '<S491>/If' incorporates:
   *  Inport: '<S521>/In1'
   *  Inport: '<S522>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration16'
   *  S-Function (motohawk_sfun_calibration): '<S491>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S491>/override_enable'
   */
  if ((DATA_MODE_1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S491>/NewValue' incorporates:
     *  ActionPort: '<S521>/Action Port'
     */
    rtb_Merge_jo = (DATA_MODE_1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S521>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(179);
    }

    /* End of Outputs for SubSystem: '<S491>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S491>/OldValue' incorporates:
     *  ActionPort: '<S522>/Action Port'
     */
    rtb_Merge_jo = (Data_Mode_1_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S522>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(180);
    }

    /* End of Outputs for SubSystem: '<S491>/OldValue' */
  }

  /* End of If: '<S491>/If' */

  /* If: '<S492>/If' incorporates:
   *  Inport: '<S523>/In1'
   *  Inport: '<S524>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration17'
   *  S-Function (motohawk_sfun_calibration): '<S492>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S492>/override_enable'
   */
  if ((VEH_ID_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S492>/NewValue' incorporates:
     *  ActionPort: '<S523>/Action Port'
     */
    rtb_Merge_kz = (VEH_ID_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S523>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(181);
    }

    /* End of Outputs for SubSystem: '<S492>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S492>/OldValue' incorporates:
     *  ActionPort: '<S524>/Action Port'
     */
    rtb_Merge_kz = (VEH_ID_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S524>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(182);
    }

    /* End of Outputs for SubSystem: '<S492>/OldValue' */
  }

  /* End of If: '<S492>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S469>/Send CAN Messages9' */
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

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe24' */
  (DATA_MODE_1_Prb_DataStore()) = (Data_Mode_1_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S469>/motohawk_probe25' */
  (VEH_ID_Prb_DataStore()) = (VEH_ID_DataStore());

  /* If: '<S597>/If' incorporates:
   *  Inport: '<S602>/In1'
   *  Inport: '<S603>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S172>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S597>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S597>/override_enable'
   */
  if ((Current_Limit_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S597>/NewValue' incorporates:
     *  ActionPort: '<S602>/Action Port'
     */
    rtb_Merge_m4 = (Current_Limit_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S602>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(253);
    }

    /* End of Outputs for SubSystem: '<S597>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S597>/OldValue' incorporates:
     *  ActionPort: '<S603>/Action Port'
     */
    rtb_Merge_m4 = (MaxAmpCal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S603>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(254);
    }

    /* End of Outputs for SubSystem: '<S597>/OldValue' */
  }

  /* End of If: '<S597>/If' */

  /* If: '<S598>/If' incorporates:
   *  Inport: '<S604>/In1'
   *  Inport: '<S605>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S172>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S598>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S598>/override_enable'
   */
  if ((Voltage_Limit_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S598>/NewValue' incorporates:
     *  ActionPort: '<S604>/Action Port'
     */
    rtb_Merge_aq = (Voltage_Limit_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S604>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(255);
    }

    /* End of Outputs for SubSystem: '<S598>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S598>/OldValue' incorporates:
     *  ActionPort: '<S605>/Action Port'
     */
    rtb_Merge_aq = (MaxVoltageCal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S605>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(256);
    }

    /* End of Outputs for SubSystem: '<S598>/OldValue' */
  }

  /* End of If: '<S598>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S348>/motohawk_fault_action'
   *
   * Regarding '<S348>/motohawk_fault_action':
     Get Fault Action Status: EatonChargerFault
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s348_ChargeSystemFault = GetFaultActionStatus(8);
  }

  /* If: '<S599>/If' incorporates:
   *  Inport: '<S606>/In1'
   *  Inport: '<S607>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S599>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S599>/override_enable'
   */
  if ((Charge_Falt_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S599>/NewValue' incorporates:
     *  ActionPort: '<S606>/Action Port'
     */
    rtb_Merge_opu = (Charge_Falt_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S606>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(257);
    }

    /* End of Outputs for SubSystem: '<S599>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S599>/OldValue' incorporates:
     *  ActionPort: '<S607>/Action Port'
     */
    rtb_Merge_opu = Mooventure2016_Rev5_B.s348_ChargeSystemFault;

    /* S-Function (motohawk_sfun_code_cover): '<S607>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(258);
    }

    /* End of Outputs for SubSystem: '<S599>/OldValue' */
  }

  /* End of If: '<S599>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S170>/Read CAN Message5' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3267p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3267p0001_Receive(0, &msg_id, 0, msg_data);
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
      Mooventure2016_Rev5_B.s170_TripAmpHoursIn = ((real_T) tmp0) / ((real_T)
        100);
      Mooventure2016_Rev5_B.s170_TripAmpHoursOut = ((real_T) tmp1) / ((real_T)
        100);
      Mooventure2016_Rev5_B.s170_StateOfChargeMax = ((real_T) tmp2) / ((real_T)
        2);
      Mooventure2016_Rev5_B.s170_StateOfChargeMin = ((real_T) tmp3) / ((real_T)
        2);
      Mooventure2016_Rev5_B.s170_TAH_RollingCounter = (real_T) tmp4;
    }
  }

  /* RelationalOperator: '<S348>/Relational Operator' */
  rtb_RelationalOperator11_d = (rtb_Sum1 <=
    Mooventure2016_Rev5_B.s170_StateOfChargeMax);

  /* Logic: '<S348>/Logical Operator2' */
  Mooventure2016_Rev5_B.s348_ChargeComplete = !rtb_RelationalOperator11_d;

  /* If: '<S600>/If' incorporates:
   *  Inport: '<S608>/In1'
   *  Inport: '<S609>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S600>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S600>/override_enable'
   */
  if ((Charge_Complete_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S600>/NewValue' incorporates:
     *  ActionPort: '<S608>/Action Port'
     */
    rtb_Merge_oz = (Charge_Complete_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S608>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(259);
    }

    /* End of Outputs for SubSystem: '<S600>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S600>/OldValue' incorporates:
     *  ActionPort: '<S609>/Action Port'
     */
    rtb_Merge_oz = Mooventure2016_Rev5_B.s348_ChargeComplete;

    /* S-Function (motohawk_sfun_code_cover): '<S609>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(260);
    }

    /* End of Outputs for SubSystem: '<S600>/OldValue' */
  }

  /* End of If: '<S600>/If' */

  /* If: '<S284>/If' incorporates:
   *  Inport: '<S299>/In1'
   *  Inport: '<S300>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S284>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S284>/override_enable'
   */
  if ((InputCurrentLimitMax_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S284>/NewValue' incorporates:
     *  ActionPort: '<S299>/Action Port'
     */
    rtb_Merge_lf = (InputCurrentLimitMax_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S299>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(79);
    }

    /* End of Outputs for SubSystem: '<S284>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S284>/OldValue' incorporates:
     *  ActionPort: '<S300>/Action Port'
     */
    rtb_Merge_lf = Mooventure2016_Rev5_B.s175_InputCurrentLimitMax;

    /* S-Function (motohawk_sfun_code_cover): '<S300>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(80);
    }

    /* End of Outputs for SubSystem: '<S284>/OldValue' */
  }

  /* End of If: '<S284>/If' */

  /* If: '<S285>/If' incorporates:
   *  Inport: '<S301>/In1'
   *  Inport: '<S302>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S285>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S285>/override_enable'
   */
  if ((InputCurrent_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S285>/NewValue' incorporates:
     *  ActionPort: '<S301>/Action Port'
     */
    rtb_Merge_hn = (InputCurrent_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S301>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(81);
    }

    /* End of Outputs for SubSystem: '<S285>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S285>/OldValue' incorporates:
     *  ActionPort: '<S302>/Action Port'
     */
    rtb_Merge_hn = Mooventure2016_Rev5_B.s175_InputCurrent;

    /* S-Function (motohawk_sfun_code_cover): '<S302>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(82);
    }

    /* End of Outputs for SubSystem: '<S285>/OldValue' */
  }

  /* End of If: '<S285>/If' */

  /* Logic: '<S348>/Logical Operator1' incorporates:
   *  Constant: '<S595>/Constant'
   *  Constant: '<S596>/Constant'
   *  Logic: '<S348>/Logical Operator'
   *  Logic: '<S348>/Logical Operator3'
   *  RelationalOperator: '<S348>/Relational Operator1'
   *  RelationalOperator: '<S595>/Compare'
   *  RelationalOperator: '<S596>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S348>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_data_read): '<S348>/motohawk_data_read'
   *  S-Function (motohawk_sfun_fault_action): '<S348>/motohawk_fault_action1'
   */
  Mooventure2016_Rev5_B.s348_ChargeEnable = ((((rtb_Merge_b == 2.0) ||
    (rtb_Merge_b == 1.0)) && rtb_RelationalOperator11_d && (rtb_Merge_hn <
    rtb_Merge_lf) && ((Charger_Auto_Start_DataStore()) != 0.0) &&
    Vehicle_Ready_DataStore() && (!GetFaultActionStatus(2))));

  /* If: '<S601>/If' incorporates:
   *  Inport: '<S610>/In1'
   *  Inport: '<S611>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S601>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S601>/override_enable'
   */
  if ((Charge_Enable_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S601>/NewValue' incorporates:
     *  ActionPort: '<S610>/Action Port'
     */
    rtb_Merge_ib = (Charge_Enable_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S610>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(261);
    }

    /* End of Outputs for SubSystem: '<S601>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S601>/OldValue' incorporates:
     *  ActionPort: '<S611>/Action Port'
     */
    rtb_Merge_ib = Mooventure2016_Rev5_B.s348_ChargeEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S611>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(262);
    }

    /* End of Outputs for SubSystem: '<S601>/OldValue' */
  }

  /* End of If: '<S601>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S348>/Send CAN Messages' */
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

  /* S-Function (motohawk_sfun_data_write): '<S348>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ChargeEnable */
  {
    ChargeEnable_DataStore() = Mooventure2016_Rev5_B.s348_ChargeEnable;
  }

  /* RelationalOperator: '<S348>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S348>/motohawk_calibration1'
   */
  rtb_RelationalOperator2_l = ((Mooventure2016_Rev5_B.s170_MaxCellVoltage >=
    (Max_Cell_Voltage_Limit_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S348>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Charge_Complete_Cell_Max_Volt */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(14, rtb_RelationalOperator2_l);
    UpdateFault(14);
  }

  /* S-Function (motohawk_sfun_probe): '<S348>/motohawk_probe1' */
  (Current_Limit_Probe_DataStore()) = (MaxAmpCal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S348>/motohawk_probe2' */
  (Voltage_Limit_Probe_DataStore()) = (MaxVoltageCal_DataStore());

  /* S-Function Block: <S39>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s39_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_e = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S32>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S32>/motohawk_calibration'
   */
  rtb_RelationalOperator11_d = (rtb_Sum1 <= (SOC_Low_DataStore()));

  /* Switch: '<S39>/Switch' incorporates:
   *  Constant: '<S39>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S39>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S39>/motohawk_delta_time'
   *  Sum: '<S39>/Sum'
   */
  if (rtb_RelationalOperator11_d) {
    rtb_Switch_c = rtb_motohawk_delta_time_e + SOC_Low_Timer_DataStore();
  } else {
    rtb_Switch_c = 0.0;
  }

  /* End of Switch: '<S39>/Switch' */
  /* Product: '<S32>/Product' incorporates:
   *  RelationalOperator: '<S32>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S32>/motohawk_calibration2'
   */
  rtb_motohawk_ain = (uint16_T)(rtb_Switch_c >= (SOC_Time_Threshold_DataStore())
    ? rtb_RelationalOperator11_d : 0);

  /* DataTypeConversion: '<S8>/Data Type Conversion' */
  rtb_DataTypeConversion_m = (real_T)rtb_motohawk_ain;

  /* S-Function Block: <S40>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s40_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_my = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S32>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S32>/motohawk_calibration1'
   */
  rtb_RelationalOperator11_d = (rtb_Sum1 >= (SOC_High_DataStore()));

  /* Switch: '<S40>/Switch' incorporates:
   *  Constant: '<S40>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S40>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S40>/motohawk_delta_time'
   *  Sum: '<S40>/Sum'
   */
  if (rtb_RelationalOperator11_d) {
    rtb_Switch_fi = rtb_motohawk_delta_time_my + SOC_High_Timer_DataStore();
  } else {
    rtb_Switch_fi = 0.0;
  }

  /* End of Switch: '<S40>/Switch' */

  /* Product: '<S32>/Product1' incorporates:
   *  RelationalOperator: '<S32>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S32>/motohawk_calibration2'
   */
  rtb_motohawk_ain = (uint16_T)(rtb_Switch_fi >= (SOC_Time_Threshold_DataStore())
    ? rtb_RelationalOperator11_d : 0);

  /* DataTypeConversion: '<S8>/Data Type Conversion1' */
  rtb_DataTypeConversion1_m = (real_T)rtb_motohawk_ain;

  /* S-Function Block: <S41>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s41_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_j = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S32>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S32>/motohawk_calibration3'
   */
  rtb_RelationalOperator11_d = (rtb_Sum1 <= (SOC_Critical_DataStore()));

  /* Switch: '<S41>/Switch' incorporates:
   *  Constant: '<S41>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S41>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S41>/motohawk_delta_time'
   *  Sum: '<S41>/Sum'
   */
  if (rtb_RelationalOperator11_d) {
    rtb_Switch_d = rtb_motohawk_delta_time_j + SOC_Critical_Timer_DataStore();
  } else {
    rtb_Switch_d = 0.0;
  }

  /* End of Switch: '<S41>/Switch' */

  /* Product: '<S32>/Product2' incorporates:
   *  RelationalOperator: '<S32>/Relational Operator5'
   *  S-Function (motohawk_sfun_calibration): '<S32>/motohawk_calibration2'
   */
  rtb_motohawk_ain = (uint16_T)(rtb_Switch_d >= (SOC_Time_Threshold_DataStore())
    ? rtb_RelationalOperator11_d : 0);

  /* DataTypeConversion: '<S8>/Data Type Conversion2' */
  rtb_DataTypeConversion2 = (real_T)rtb_motohawk_ain;

  /* S-Function Block: <S42>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s42_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_kg = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S8>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S8>/motohawk_calibration7'
   */
  rtb_Switch_e = Mooventure2016_Rev5_B.s327_Merge *
    (RPM_to_Wheel_Speed_Multiplier4_DataStore());

  /* RelationalOperator: '<S33>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S33>/motohawk_calibration'
   */
  rtb_RelationalOperator11_d = (rtb_Switch_e >= (Vehicle_Speed_On_DataStore()));

  /* Switch: '<S42>/Switch' incorporates:
   *  Constant: '<S42>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S42>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S42>/motohawk_delta_time'
   *  Sum: '<S42>/Sum'
   */
  if (rtb_RelationalOperator11_d) {
    rtb_Switch_f = rtb_motohawk_delta_time_kg + Vehicle_Speed_On_Timer_DataStore
      ();
  } else {
    rtb_Switch_f = 0.0;
  }

  /* End of Switch: '<S42>/Switch' */
  /* Product: '<S33>/Product' incorporates:
   *  RelationalOperator: '<S33>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S33>/motohawk_calibration2'
   */
  rtb_motohawk_ain = (uint16_T)(rtb_Switch_f >=
    (Vehicle_Speed_Time_Threshold_DataStore()) ? rtb_RelationalOperator11_d : 0);

  /* DataTypeConversion: '<S8>/Data Type Conversion3' */
  rtb_DataTypeConversion3 = (real_T)rtb_motohawk_ain;

  /* S-Function Block: <S43>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s43_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_p0 = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S33>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S33>/motohawk_calibration1'
   */
  rtb_RelationalOperator11_d = (rtb_Switch_e <= (Vehicle_Speed_Off_DataStore()));

  /* Switch: '<S43>/Switch' incorporates:
   *  Constant: '<S43>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S43>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S43>/motohawk_delta_time'
   *  Sum: '<S43>/Sum'
   */
  if (rtb_RelationalOperator11_d) {
    rtb_Switch_e = rtb_motohawk_delta_time_p0 +
      Vehicle_Speed_Off_Timer_DataStore();
  } else {
    rtb_Switch_e = 0.0;
  }

  /* End of Switch: '<S43>/Switch' */

  /* Product: '<S33>/Product1' incorporates:
   *  RelationalOperator: '<S33>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S33>/motohawk_calibration2'
   */
  rtb_motohawk_ain = (uint16_T)(rtb_Switch_e >=
    (Vehicle_Speed_Time_Threshold_DataStore()) ? rtb_RelationalOperator11_d : 0);

  /* DataTypeConversion: '<S8>/Data Type Conversion4' */
  rtb_DataTypeConversion4 = (real_T)rtb_motohawk_ain;

  /* S-Function Block: <S38>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s38_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_o = ((real_T) delta) * 0.000001;
  }

  /* If: '<S309>/If' incorporates:
   *  Inport: '<S320>/In1'
   *  Inport: '<S321>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S309>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S309>/override_enable'
   */
  if ((Engine_On_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S309>/NewValue' incorporates:
     *  ActionPort: '<S320>/Action Port'
     */
    rtb_UnitDelay_o = (Engine_On_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S320>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(93);
    }

    /* End of Outputs for SubSystem: '<S309>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S309>/OldValue' incorporates:
     *  ActionPort: '<S321>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s176_ReadCANMessage_o5;

    /* S-Function (motohawk_sfun_code_cover): '<S321>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(94);
    }

    /* End of Outputs for SubSystem: '<S309>/OldValue' */
  }

  /* End of If: '<S309>/If' */

  /* Switch: '<S38>/Switch' incorporates:
   *  Constant: '<S38>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S38>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S38>/motohawk_delta_time'
   *  Sum: '<S38>/Sum'
   */
  if (rtb_UnitDelay_o >= 1.0) {
    rtb_Switch_ja = rtb_motohawk_delta_time_o + Engine_On_Timer_DataStore();
  } else {
    rtb_Switch_ja = 0.0;
  }

  /* End of Switch: '<S38>/Switch' */
  /* RelationalOperator: '<S31>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S31>/motohawk_calibration2'
   */
  rtb_RelationalOperator11_d = (rtb_Switch_ja >=
    (Engine_On_Time_Threshold_DataStore()));

  /* Product: '<S31>/Product' */
  rtb_UnitDelay_o *= (real_T)rtb_RelationalOperator11_d;

  /* If: '<S306>/If' incorporates:
   *  Inport: '<S314>/In1'
   *  Inport: '<S315>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S306>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S306>/override_enable'
   */
  if ((RPM_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S306>/NewValue' incorporates:
     *  ActionPort: '<S314>/Action Port'
     */
    rtb_UnitDelay_m = (RPM_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S314>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(87);
    }

    /* End of Outputs for SubSystem: '<S306>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S306>/OldValue' incorporates:
     *  ActionPort: '<S315>/Action Port'
     */
    rtb_UnitDelay_m = Mooventure2016_Rev5_B.s176_ReadCANMessage_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S315>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(88);
    }

    /* End of Outputs for SubSystem: '<S306>/OldValue' */
  }

  /* End of If: '<S306>/If' */

  /* Stateflow: '<S8>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S8>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S8>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S8>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S8>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S8>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S8>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S8>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_calibration): '<S8>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S8>/motohawk_calibration9'
   */

  /* Gateway: Foreground/Control/Engine Control/Chart */
  /* During: Foreground/Control/Engine Control/Chart */
  if (Mooventure2016_Rev5_DWork.s30_is_active_c33_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Engine Control/Chart */
    Mooventure2016_Rev5_DWork.s30_is_active_c33_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S30>:22' */
    Mooventure2016_Rev5_DWork.s30_is_c33_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_default;
  } else {
    switch (Mooventure2016_Rev5_DWork.s30_is_c33_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Running:
      /* During 'Running': '<S30>:27' */
      if ((rtb_DataTypeConversion1_m != 0.0) || ((rtb_DataTypeConversion4 != 0.0)
           && (!(rtb_DataTypeConversion2 != 0.0)))) {
        /* Transition: '<S30>:56' */
        Mooventure2016_Rev5_DWork.s30_is_Running = (uint8_T)0U;
        Mooventure2016_Rev5_DWork.s30_is_c33_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Shutdown;
      } else {
        Mooventure2016_Rev5_B.s30_Genset_Load = 1.0;
        switch (Mooventure2016_Rev5_DWork.s30_is_Running) {
         case Mooventure2016_Rev5_IN_default_gen:
          /* During 'default_gen': '<S30>:36' */
          if (rtb_Merge_cm > (Coolant_Cold_DataStore())) {
            /* Transition: '<S30>:44' */
            Mooventure2016_Rev5_DWork.s30_is_Running =
              Mooventure2016_Rev5_IN_low_gen;
          } else {
            Mooventure2016_Rev5_B.s30_Genset_RPM = 0.0;
            Mooventure2016_Rev5_B.s30_Genset_Throttle = 0.0;
          }
          break;

         case Mooventure2016_Rev5_IN_high_gen:
          /* During 'high_gen': '<S30>:42' */
          if (!(rtb_DataTypeConversion2 != 0.0)) {
            /* Transition: '<S30>:48' */
            Mooventure2016_Rev5_DWork.s30_is_Running =
              Mooventure2016_Rev5_IN_medium_gen;
          } else {
            Mooventure2016_Rev5_B.s30_Genset_RPM = (High_RPM_DataStore());
            Mooventure2016_Rev5_B.s30_Genset_Throttle = (High_Throttle_DataStore
              ());
          }
          break;

         case Mooventure2016_Rev5_IN_low_gen:
          /* During 'low_gen': '<S30>:38' */
          if (rtb_Merge_cm > (Coolant_Warm_DataStore())) {
            /* Transition: '<S30>:46' */
            Mooventure2016_Rev5_DWork.s30_is_Running =
              Mooventure2016_Rev5_IN_medium_gen;
          } else if ((rtb_Merge_cm < (Coolant_Cold_DataStore()) - 3.0) ||
                     (rtb_DataTypeConversion4 != 0.0)) {
            /* Transition: '<S30>:50' */
            Mooventure2016_Rev5_DWork.s30_is_Running =
              Mooventure2016_Rev5_IN_default_gen;
          } else {
            Mooventure2016_Rev5_B.s30_Genset_RPM = (Low_RPM_DataStore());
            Mooventure2016_Rev5_B.s30_Genset_Throttle = (Low_Throttle_DataStore());
          }
          break;

         case Mooventure2016_Rev5_IN_medium_gen:
          /* During 'medium_gen': '<S30>:41' */
          if ((rtb_Merge_cm > (Coolant_Hot_DataStore())) &&
              (rtb_DataTypeConversion2 != 0.0)) {
            /* Transition: '<S30>:47' */
            Mooventure2016_Rev5_DWork.s30_is_Running =
              Mooventure2016_Rev5_IN_high_gen;
          } else if (rtb_Merge_cm < (Coolant_Warm_DataStore()) - 3.0) {
            /* Transition: '<S30>:49' */
            Mooventure2016_Rev5_DWork.s30_is_Running =
              Mooventure2016_Rev5_IN_low_gen;
          } else if (rtb_DataTypeConversion4 != 0.0) {
            /* Transition: '<S30>:52' */
            Mooventure2016_Rev5_DWork.s30_is_Running =
              Mooventure2016_Rev5_IN_default_gen;
          } else {
            Mooventure2016_Rev5_B.s30_Genset_RPM = (Medium_RPM_DataStore());
            Mooventure2016_Rev5_B.s30_Genset_Throttle =
              (Medium_Throttle_DataStore());
          }
          break;

         default:
          /* Transition: '<S30>:37' */
          Mooventure2016_Rev5_DWork.s30_is_Running =
            Mooventure2016_Rev5_IN_default_gen;
          break;
        }
      }
      break;

     case Mooventure2016_Rev5_IN_Shutdown:
      /* During 'Shutdown': '<S30>:58' */
      if (rtb_UnitDelay_m < 200.0) {
        /* Transition: '<S30>:59' */
        Mooventure2016_Rev5_DWork.s30_is_c33_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default;
      } else {
        Mooventure2016_Rev5_B.s30_Genset_Enable = 0.0;
        Mooventure2016_Rev5_B.s30_Genset_Throttle = 0.0;
        Mooventure2016_Rev5_B.s30_Genset_RPM = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Startup:
      /* During 'Startup': '<S30>:23' */
      if (rtb_UnitDelay_o != 0.0) {
        /* Transition: '<S30>:29' */
        Mooventure2016_Rev5_DWork.s30_is_c33_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Running;

        /* Transition: '<S30>:37' */
        Mooventure2016_Rev5_DWork.s30_is_Running =
          Mooventure2016_Rev5_IN_default_gen;
      } else {
        Mooventure2016_Rev5_B.s30_Genset_Enable = 1.0;
      }
      break;

     case Mooventure2016_Rev5_IN_default:
      /* During 'default': '<S30>:21' */
      if ((rtb_DataTypeConversion2 != 0.0) || ((rtb_DataTypeConversion_m != 0.0)
           && (rtb_DataTypeConversion3 != 0.0))) {
        /* Transition: '<S30>:26' */
        Mooventure2016_Rev5_DWork.s30_is_c33_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Startup;
      } else {
        Mooventure2016_Rev5_B.s30_Genset_Enable = 0.0;
        Mooventure2016_Rev5_B.s30_Genset_Load = 0.0;
        Mooventure2016_Rev5_B.s30_Genset_RPM = 0.0;
        Mooventure2016_Rev5_B.s30_Genset_Throttle = 0.0;
      }
      break;

     default:
      /* Transition: '<S30>:22' */
      Mooventure2016_Rev5_DWork.s30_is_c33_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_default;
      break;
    }
  }

  /* End of Stateflow: '<S8>/Chart' */
  /* If: '<S34>/If' incorporates:
   *  Inport: '<S44>/In1'
   *  Inport: '<S45>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S34>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S34>/override_enable'
   */
  if ((Genset_Load_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S34>/NewValue' incorporates:
     *  ActionPort: '<S44>/Action Port'
     */
    Mooventure2016_Rev5_B.s34_Merge = (Genset_Load_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S44>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(7);
    }

    /* End of Outputs for SubSystem: '<S34>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S34>/OldValue' incorporates:
     *  ActionPort: '<S45>/Action Port'
     */
    Mooventure2016_Rev5_B.s34_Merge = Mooventure2016_Rev5_B.s30_Genset_Load;

    /* S-Function (motohawk_sfun_code_cover): '<S45>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(8);
    }

    /* End of Outputs for SubSystem: '<S34>/OldValue' */
  }

  /* End of If: '<S34>/If' */

  /* If: '<S612>/If' incorporates:
   *  Inport: '<S617>/In1'
   *  Inport: '<S618>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S612>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S612>/override_enable'
   */
  if ((Gen_Load_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S612>/NewValue' incorporates:
     *  ActionPort: '<S617>/Action Port'
     */
    rtb_Merge_ogr = (Gen_Load_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S617>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(263);
    }

    /* End of Outputs for SubSystem: '<S612>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S612>/OldValue' incorporates:
     *  ActionPort: '<S618>/Action Port'
     */
    rtb_Merge_ogr = Mooventure2016_Rev5_B.s34_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S618>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(264);
    }

    /* End of Outputs for SubSystem: '<S612>/OldValue' */
  }

  /* End of If: '<S612>/If' */

  /* If: '<S237>/If' incorporates:
   *  Inport: '<S249>/In1'
   *  Inport: '<S250>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S237>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S237>/override_enable'
   */
  if ((Pack_State_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S237>/NewValue' incorporates:
     *  ActionPort: '<S249>/Action Port'
     */
    Mooventure2016_Rev5_B.s237_Merge = (Pack_State_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S249>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(59);
    }

    /* End of Outputs for SubSystem: '<S237>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S237>/OldValue' incorporates:
     *  ActionPort: '<S250>/Action Port'
     */
    Mooventure2016_Rev5_B.s237_Merge = Mooventure2016_Rev5_B.s170_PackState;

    /* S-Function (motohawk_sfun_code_cover): '<S250>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(60);
    }

    /* End of Outputs for SubSystem: '<S237>/OldValue' */
  }

  /* End of If: '<S237>/If' */

  /* RelationalOperator: '<S349>/Relational Operator' incorporates:
   *  Constant: '<S349>/Constant'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s237_Merge == 4.0);

  /* If: '<S35>/If' incorporates:
   *  Inport: '<S46>/In1'
   *  Inport: '<S47>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S35>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S35>/override_enable'
   */
  if ((Genset_Enable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S35>/NewValue' incorporates:
     *  ActionPort: '<S46>/Action Port'
     */
    rtb_UnitDelay_o = (Genset_Enable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S46>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(9);
    }

    /* End of Outputs for SubSystem: '<S35>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S35>/OldValue' incorporates:
     *  ActionPort: '<S47>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s30_Genset_Enable;

    /* S-Function (motohawk_sfun_code_cover): '<S47>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(10);
    }

    /* End of Outputs for SubSystem: '<S35>/OldValue' */
  }

  /* End of If: '<S35>/If' */

  /* Logic: '<S349>/Logical Operator' */
  Mooventure2016_Rev5_B.s349_Gen_Enable = (((rtb_UnitDelay_o != 0.0) &&
    rtb_LogicalOperator5));

  /* If: '<S613>/If' incorporates:
   *  Inport: '<S619>/In1'
   *  Inport: '<S620>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S613>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S613>/override_enable'
   */
  if ((Gen_Enable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S613>/NewValue' incorporates:
     *  ActionPort: '<S619>/Action Port'
     */
    rtb_Merge_ik = (Gen_Enable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S619>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(265);
    }

    /* End of Outputs for SubSystem: '<S613>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S613>/OldValue' incorporates:
     *  ActionPort: '<S620>/Action Port'
     */
    rtb_Merge_ik = Mooventure2016_Rev5_B.s349_Gen_Enable;

    /* S-Function (motohawk_sfun_code_cover): '<S620>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(266);
    }

    /* End of Outputs for SubSystem: '<S613>/OldValue' */
  }

  /* End of If: '<S613>/If' */

  /* Abs: '<S349>/Abs' */
  rtb_Switch_pn = fabs(Mooventure2016_Rev5_B.s327_Merge);

  /* Product: '<S349>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S349>/motohawk_calibration7'
   */
  Mooventure2016_Rev5_B.s349_Vehicle_Speed = rtb_Switch_pn *
    (RPM_to_Wheel_Speed_Multiplier3_DataStore());

  /* If: '<S614>/If' incorporates:
   *  Inport: '<S621>/In1'
   *  Inport: '<S622>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S614>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S614>/override_enable'
   */
  if ((Vehicle_Speed2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S614>/NewValue' incorporates:
     *  ActionPort: '<S621>/Action Port'
     */
    rtb_Merge_ou = (Vehicle_Speed2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S621>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(267);
    }

    /* End of Outputs for SubSystem: '<S614>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S614>/OldValue' incorporates:
     *  ActionPort: '<S622>/Action Port'
     */
    rtb_Merge_ou = Mooventure2016_Rev5_B.s349_Vehicle_Speed;

    /* S-Function (motohawk_sfun_code_cover): '<S622>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(268);
    }

    /* End of Outputs for SubSystem: '<S614>/OldValue' */
  }

  /* End of If: '<S614>/If' */

  /* If: '<S37>/If' incorporates:
   *  Inport: '<S50>/In1'
   *  Inport: '<S51>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S37>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S37>/override_enable'
   */
  if ((Genset_Throttle_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S37>/NewValue' incorporates:
     *  ActionPort: '<S50>/Action Port'
     */
    Mooventure2016_Rev5_B.s37_Merge = (Genset_Throttle_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S50>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(13);
    }

    /* End of Outputs for SubSystem: '<S37>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S37>/OldValue' incorporates:
     *  ActionPort: '<S51>/Action Port'
     */
    Mooventure2016_Rev5_B.s37_Merge = Mooventure2016_Rev5_B.s30_Genset_Throttle;

    /* S-Function (motohawk_sfun_code_cover): '<S51>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(14);
    }

    /* End of Outputs for SubSystem: '<S37>/OldValue' */
  }

  /* End of If: '<S37>/If' */

  /* If: '<S615>/If' incorporates:
   *  Inport: '<S623>/In1'
   *  Inport: '<S624>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S615>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S615>/override_enable'
   */
  if ((Load_Throttle_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S615>/NewValue' incorporates:
     *  ActionPort: '<S623>/Action Port'
     */
    rtb_Merge_ai = (Load_Throttle_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S623>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(269);
    }

    /* End of Outputs for SubSystem: '<S615>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S615>/OldValue' incorporates:
     *  ActionPort: '<S624>/Action Port'
     */
    rtb_Merge_ai = Mooventure2016_Rev5_B.s37_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S624>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(270);
    }

    /* End of Outputs for SubSystem: '<S615>/OldValue' */
  }

  /* End of If: '<S615>/If' */

  /* If: '<S36>/If' incorporates:
   *  Inport: '<S48>/In1'
   *  Inport: '<S49>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S36>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S36>/override_enable'
   */
  if ((Genset_RPM_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S36>/NewValue' incorporates:
     *  ActionPort: '<S48>/Action Port'
     */
    Mooventure2016_Rev5_B.s36_Merge = (Genset_RPM_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S48>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(11);
    }

    /* End of Outputs for SubSystem: '<S36>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S36>/OldValue' incorporates:
     *  ActionPort: '<S49>/Action Port'
     */
    Mooventure2016_Rev5_B.s36_Merge = Mooventure2016_Rev5_B.s30_Genset_RPM;

    /* S-Function (motohawk_sfun_code_cover): '<S49>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Engine Control/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(12);
    }

    /* End of Outputs for SubSystem: '<S36>/OldValue' */
  }

  /* End of If: '<S36>/If' */

  /* If: '<S616>/If' incorporates:
   *  Inport: '<S625>/In1'
   *  Inport: '<S626>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S616>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S616>/override_enable'
   */
  if ((Load_RPM_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S616>/NewValue' incorporates:
     *  ActionPort: '<S625>/Action Port'
     */
    rtb_Merge_fw = (Load_RPM_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S625>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(271);
    }

    /* End of Outputs for SubSystem: '<S616>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S616>/OldValue' incorporates:
     *  ActionPort: '<S626>/Action Port'
     */
    rtb_Merge_fw = Mooventure2016_Rev5_B.s36_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S626>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Engine Outputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(272);
    }

    /* End of Outputs for SubSystem: '<S616>/OldValue' */
  }

  /* End of If: '<S616>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S349>/Send CAN Messages' */
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
        uint8_T tmp4;
        tmp0 = (uint8_T)(rtb_Merge_ik != 0);
        if (rtb_Merge_ogr < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_ogr > 255.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_ogr);
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
          tmp4 = (uint8_T)(0U);
        } else if (rtb_Merge_fw > 255.0000000000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(rtb_Merge_fw);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x00000001) << 7) |
          ((((uint8_T *)(&tmp1))[0] & 0x00000003) << 6) ;
        msg_data[1] = ((((uint8_T *)(&tmp4))[0])) ;
        msg_data[2] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_3_Transmit(0, 0x210UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_data_read): '<S350>/motohawk_data_read2' */
  rtb_RelationalOperator11_d = Torque_Enable_DataStore();

  /* Product: '<S350>/Product' */
  Mooventure2016_Rev5_B.s350_VSC_WheelTorqueRequest =
    Mooventure2016_Rev5_B.s101_Switch * (real_T)rtb_RelationalOperator11_d;

  /* If: '<S631>/If' incorporates:
   *  Inport: '<S650>/In1'
   *  Inport: '<S651>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S631>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S631>/override_enable'
   */
  if ((VSC_WheelTorqueRequest_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S631>/NewValue' incorporates:
     *  ActionPort: '<S650>/Action Port'
     */
    rtb_Merge_kv = (VSC_WheelTorqueRequest_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S650>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(277);
    }

    /* End of Outputs for SubSystem: '<S631>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S631>/OldValue' incorporates:
     *  ActionPort: '<S651>/Action Port'
     */
    rtb_Merge_kv = Mooventure2016_Rev5_B.s350_VSC_WheelTorqueRequest;

    /* S-Function (motohawk_sfun_code_cover): '<S651>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(278);
    }

    /* End of Outputs for SubSystem: '<S631>/OldValue' */
  }

  /* End of If: '<S631>/If' */

  /* S-Function (motohawk_sfun_data_read): '<S350>/motohawk_data_read3' */
  Mooventure2016_Rev5_B.s350_VSC_IPTEnable = Vehicle_Ready_DataStore();

  /* If: '<S632>/If' incorporates:
   *  Inport: '<S652>/In1'
   *  Inport: '<S653>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S632>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S632>/override_enable'
   */
  if ((VSC_IPTWakeup_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S632>/NewValue' incorporates:
     *  ActionPort: '<S652>/Action Port'
     */
    rtb_Merge_e0 = (VSC_IPTWakeup_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S652>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(279);
    }

    /* End of Outputs for SubSystem: '<S632>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S632>/OldValue' incorporates:
     *  ActionPort: '<S653>/Action Port'
     */
    rtb_Merge_e0 = Mooventure2016_Rev5_B.s350_VSC_IPTEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S653>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(280);
    }

    /* End of Outputs for SubSystem: '<S632>/OldValue' */
  }

  /* End of If: '<S632>/If' */

  /* If: '<S633>/If' incorporates:
   *  Inport: '<S654>/In1'
   *  Inport: '<S655>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S633>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S633>/override_enable'
   */
  if ((VSC_TRSPosition_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S633>/NewValue' incorporates:
     *  ActionPort: '<S654>/Action Port'
     */
    rtb_Merge_kf = (VSC_TRSPosition_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S654>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(281);
    }

    /* End of Outputs for SubSystem: '<S633>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S633>/OldValue' incorporates:
     *  ActionPort: '<S655>/Action Port'
     */
    rtb_Merge_kf = Mooventure2016_Rev5_B.s275_posOut;

    /* S-Function (motohawk_sfun_code_cover): '<S655>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(282);
    }

    /* End of Outputs for SubSystem: '<S633>/OldValue' */
  }

  /* End of If: '<S633>/If' */

  /* DataTypeConversion: '<S10>/Data Type Conversion' */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s10_motor_Enable != 0.0);

  /* Stateflow: '<S350>/OnOff Delay' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_data_read): '<S350>/motohawk_data_read1'
   */
  Mooventure2016_Rev5_DWork.s628_presentTicks =
    Mooventure2016_Rev5_M->Timing.clockTick0;
  Mooventure2016_Rev5_DWork.s628_elapsedTicks =
    Mooventure2016_Rev5_DWork.s628_presentTicks -
    Mooventure2016_Rev5_DWork.s628_previousTicks;
  Mooventure2016_Rev5_DWork.s628_previousTicks =
    Mooventure2016_Rev5_DWork.s628_presentTicks;
  if ((uint32_T)Mooventure2016_Rev5_DWork.s628_temporalCounter_i1 +
      Mooventure2016_Rev5_DWork.s628_elapsedTicks <= 7U) {
    Mooventure2016_Rev5_DWork.s628_temporalCounter_i1 = (uint8_T)((uint32_T)
      Mooventure2016_Rev5_DWork.s628_temporalCounter_i1 +
      Mooventure2016_Rev5_DWork.s628_elapsedTicks);
  } else {
    Mooventure2016_Rev5_DWork.s628_temporalCounter_i1 = 7U;
  }

  /* Gateway: Foreground/Outputs/IPT Outputs/OnOff Delay */
  /* During: Foreground/Outputs/IPT Outputs/OnOff Delay */
  if (Mooventure2016_Rev5_DWork.s628_is_active_c4_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/IPT Outputs/OnOff Delay */
    Mooventure2016_Rev5_DWork.s628_is_active_c4_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S628>:78' */
    Mooventure2016_Rev5_DWork.s628_is_c4_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Init;
    Mooventure2016_Rev5_DWork.s628_temporalCounter_i1 = 0U;
  } else {
    switch (Mooventure2016_Rev5_DWork.s628_is_c4_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_IPTAwake:
      /* During 'IPTAwake': '<S628>:79' */
      if ((uint32_T)Mooventure2016_Rev5_DWork.s628_temporalCounter_i1 >= 3U) {
        /* Transition: '<S628>:83' */
        Mooventure2016_Rev5_DWork.s628_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_IPTEnable;
        Mooventure2016_Rev5_DWork.s628_temporalCounter_i1 = 0U;
      } else {
        Mooventure2016_Rev5_B.s628_IPTWake = TRUE;
        Mooventure2016_Rev5_B.s628_IPTEnable = FALSE;
        Mooventure2016_Rev5_B.s628_MotorEnable = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_IPTEnable:
      /* During 'IPTEnable': '<S628>:82' */
      if (rtb_LogicalOperator5 && ((uint32_T)
           Mooventure2016_Rev5_DWork.s628_temporalCounter_i1 >= 5U)) {
        /* Transition: '<S628>:96' */
        Mooventure2016_Rev5_DWork.s628_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_MotorDisabled;

        /* Entry 'MotorDisabled': '<S628>:9' */
        Mooventure2016_Rev5_DWork.s628_motorcount = 0;
      } else {
        Mooventure2016_Rev5_B.s628_IPTWake = TRUE;
        Mooventure2016_Rev5_B.s628_IPTEnable = TRUE;
        Mooventure2016_Rev5_B.s628_MotorEnable = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Init:
      /* During 'Init': '<S628>:76' */
      if (Vehicle_Ready_DataStore() && ((uint32_T)
           Mooventure2016_Rev5_DWork.s628_temporalCounter_i1 >= 5U)) {
        /* Transition: '<S628>:95' */
        Mooventure2016_Rev5_DWork.s628_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_IPTAwake;
        Mooventure2016_Rev5_DWork.s628_temporalCounter_i1 = 0U;
      } else {
        Mooventure2016_Rev5_B.s628_MotorEnable = FALSE;
        Mooventure2016_Rev5_B.s628_IPTWake = FALSE;
        Mooventure2016_Rev5_B.s628_IPTEnable = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_MotorDisabled:
      /* During 'MotorDisabled': '<S628>:9' */
      if (rtb_LogicalOperator5) {
        /* Transition: '<S628>:60' */
        Mooventure2016_Rev5_DWork.s628_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_TimerRunningOne;
      } else {
        Mooventure2016_Rev5_B.s628_MotorEnable = FALSE;
        Mooventure2016_Rev5_B.s628_IPTWake = TRUE;
        Mooventure2016_Rev5_B.s628_IPTEnable = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_MotorEnabled:
      /* During 'MotorEnabled': '<S628>:59' */
      if (!rtb_LogicalOperator5) {
        /* Transition: '<S628>:65' */
        Mooventure2016_Rev5_DWork.s628_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_TimerRunningTwo;
      } else {
        Mooventure2016_Rev5_B.s628_MotorEnable = TRUE;
        Mooventure2016_Rev5_B.s628_IPTWake = TRUE;
        Mooventure2016_Rev5_B.s628_IPTEnable = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_TimerRunningOne:
      /* During 'TimerRunningOne': '<S628>:50' */
      if (Mooventure2016_Rev5_DWork.s628_motorcount >=
          (Motor_Kill_Delay_DataStore())) {
        /* Transition: '<S628>:62' */
        Mooventure2016_Rev5_DWork.s628_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_MotorEnabled;

        /* Entry 'MotorEnabled': '<S628>:59' */
        Mooventure2016_Rev5_DWork.s628_motorcount = 0;
      } else if (!rtb_LogicalOperator5) {
        /* Transition: '<S628>:64' */
        Mooventure2016_Rev5_DWork.s628_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_MotorDisabled;

        /* Entry 'MotorDisabled': '<S628>:9' */
        Mooventure2016_Rev5_DWork.s628_motorcount = 0;
      } else {
        Mooventure2016_Rev5_DWork.s628_motorcount =
          Mooventure2016_Rev5_DWork.s628_motorcount + 1;
      }
      break;

     case Mooventure2016_Rev5_IN_TimerRunningTwo:
      /* During 'TimerRunningTwo': '<S628>:57' */
      if (rtb_LogicalOperator5) {
        /* Transition: '<S628>:67' */
        Mooventure2016_Rev5_DWork.s628_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_MotorEnabled;

        /* Entry 'MotorEnabled': '<S628>:59' */
        Mooventure2016_Rev5_DWork.s628_motorcount = 0;
      } else if (Mooventure2016_Rev5_DWork.s628_motorcount >=
                 (Motor_Kill_Delay_DataStore())) {
        /* Transition: '<S628>:71' */
        Mooventure2016_Rev5_DWork.s628_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_MotorDisabled;

        /* Entry 'MotorDisabled': '<S628>:9' */
        Mooventure2016_Rev5_DWork.s628_motorcount = 0;
      } else {
        Mooventure2016_Rev5_DWork.s628_motorcount =
          Mooventure2016_Rev5_DWork.s628_motorcount + 1;
      }
      break;

     default:
      /* Transition: '<S628>:78' */
      Mooventure2016_Rev5_DWork.s628_is_c4_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Init;
      Mooventure2016_Rev5_DWork.s628_temporalCounter_i1 = 0U;
      break;
    }
  }

  /* End of Stateflow: '<S350>/OnOff Delay' */
  /* If: '<S634>/If' incorporates:
   *  Inport: '<S656>/In1'
   *  Inport: '<S657>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S634>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S634>/override_enable'
   */
  if ((VSC_MotorEnable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S634>/NewValue' incorporates:
     *  ActionPort: '<S656>/Action Port'
     */
    rtb_Merge_m3 = (VSC_MotorEnable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S656>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(283);
    }

    /* End of Outputs for SubSystem: '<S634>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S634>/OldValue' incorporates:
     *  ActionPort: '<S657>/Action Port'
     */
    rtb_Merge_m3 = Mooventure2016_Rev5_B.s628_MotorEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S657>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(284);
    }

    /* End of Outputs for SubSystem: '<S634>/OldValue' */
  }

  /* End of If: '<S634>/If' */

  /* If: '<S635>/If' incorporates:
   *  Inport: '<S658>/In1'
   *  Inport: '<S659>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S635>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S635>/override_enable'
   */
  if ((VSC_AntishudderDisable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S635>/NewValue' incorporates:
     *  ActionPort: '<S658>/Action Port'
     */
    rtb_Merge_cz = (VSC_AntishudderDisable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S658>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(285);
    }

    /* End of Outputs for SubSystem: '<S635>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S635>/OldValue' incorporates:
     *  ActionPort: '<S659>/Action Port'
     */
    rtb_Merge_cz = (VSC_AntishudderDisable_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S659>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(286);
    }

    /* End of Outputs for SubSystem: '<S635>/OldValue' */
  }

  /* End of If: '<S635>/If' */

  /* If: '<S636>/If' incorporates:
   *  Inport: '<S660>/In1'
   *  Inport: '<S661>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S636>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S636>/override_enable'
   */
  if ((VSC_IPTEnable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S636>/NewValue' incorporates:
     *  ActionPort: '<S660>/Action Port'
     */
    rtb_Merge_nr = (VSC_IPTEnable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S660>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(287);
    }

    /* End of Outputs for SubSystem: '<S636>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S636>/OldValue' incorporates:
     *  ActionPort: '<S661>/Action Port'
     */
    rtb_Merge_nr = Mooventure2016_Rev5_B.s350_VSC_IPTEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S661>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(288);
    }

    /* End of Outputs for SubSystem: '<S636>/OldValue' */
  }

  /* End of If: '<S636>/If' */

  /* If: '<S637>/If' incorporates:
   *  Inport: '<S662>/In1'
   *  Inport: '<S663>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_calibration): '<S637>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S637>/override_enable'
   */
  if ((VSC_SDPTActive_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S637>/NewValue' incorporates:
     *  ActionPort: '<S662>/Action Port'
     */
    rtb_Merge_nzb = (VSC_SDPTActive_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S662>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(289);
    }

    /* End of Outputs for SubSystem: '<S637>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S637>/OldValue' incorporates:
     *  ActionPort: '<S663>/Action Port'
     */
    rtb_Merge_nzb = (VSC_SDPTActive_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S663>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(290);
    }

    /* End of Outputs for SubSystem: '<S637>/OldValue' */
  }

  /* End of If: '<S637>/If' */

  /* If: '<S638>/If' incorporates:
   *  Inport: '<S664>/In1'
   *  Inport: '<S665>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S638>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S638>/override_enable'
   */
  if ((VSC_PowerWasteRequest_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S638>/NewValue' incorporates:
     *  ActionPort: '<S664>/Action Port'
     */
    rtb_Merge_go = (VSC_PowerWasteRequest_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S664>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(291);
    }

    /* End of Outputs for SubSystem: '<S638>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S638>/OldValue' incorporates:
     *  ActionPort: '<S665>/Action Port'
     */
    rtb_Merge_go = (VSC_PowerWasteRequest_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S665>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(292);
    }

    /* End of Outputs for SubSystem: '<S638>/OldValue' */
  }

  /* End of If: '<S638>/If' */

  /* If: '<S645>/If' incorporates:
   *  Inport: '<S678>/In1'
   *  Inport: '<S679>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S645>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S645>/override_enable'
   */
  if ((VSC_ActiveDischargeDisable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S645>/NewValue' incorporates:
     *  ActionPort: '<S678>/Action Port'
     */
    rtb_Merge_il = (VSC_ActiveDischargeDisable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S678>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(305);
    }

    /* End of Outputs for SubSystem: '<S645>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S645>/OldValue' incorporates:
     *  ActionPort: '<S679>/Action Port'
     */
    rtb_Merge_il = (VSC_ActiveDischargeDisable_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S679>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(306);
    }

    /* End of Outputs for SubSystem: '<S645>/OldValue' */
  }

  /* End of If: '<S645>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S350>/Send CAN Messages' */
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
        tmp6 = (uint8_T)(rtb_Merge_nr != 0);
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

  /* S-Function (motohawk_sfun_probe): '<S350>/motohawk_probe14' */
  (VSC_AntishudderDisable_Prb_DataStore()) =
    (VSC_AntishudderDisable_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S350>/motohawk_probe16' */
  (VSC_SDPTActive_Prb_DataStore()) = (VSC_SDPTActive_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S350>/motohawk_probe17' */
  (VSC_PowerWasteRequest_Prb_DataStore()) = (VSC_PowerWasteRequest_Cal_DataStore
    ());

  /* S-Function (motohawk_sfun_probe): '<S350>/motohawk_probe8' */
  (VSC_ActiveDischargeDisable_Prb_DataStore()) =
    (VSC_ActiveDischargeDisable_Cal_DataStore());

  /* Logic: '<S350>/Logical Operator' incorporates:
   *  Constant: '<S627>/Constant'
   *  RelationalOperator: '<S627>/Compare'
   *  S-Function (motohawk_sfun_data_read): '<S350>/motohawk_data_read4'
   *  S-Function (motohawk_sfun_data_read): '<S350>/motohawk_data_read5'
   */
  rtb_LogicalOperator5 = (Eaton_Plugged_In_DataStore() ||
    (Hybrid_State_DataStore() >= 1));

  /* Logic: '<S350>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S350>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s350_VSC_DCDCEnable = ((rtb_LogicalOperator5 &&
    Vehicle_Ready_DataStore()));

  /* If: '<S629>/If' incorporates:
   *  Inport: '<S646>/In1'
   *  Inport: '<S647>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S629>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S629>/override_enable'
   */
  if ((VSC_DCDCEnable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S629>/NewValue' incorporates:
     *  ActionPort: '<S646>/Action Port'
     */
    rtb_Merge_hz = (VSC_DCDCEnable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S646>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(273);
    }

    /* End of Outputs for SubSystem: '<S629>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S629>/OldValue' incorporates:
     *  ActionPort: '<S647>/Action Port'
     */
    rtb_Merge_hz = Mooventure2016_Rev5_B.s350_VSC_DCDCEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S647>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(274);
    }

    /* End of Outputs for SubSystem: '<S629>/OldValue' */
  }

  /* End of If: '<S629>/If' */

  /* If: '<S630>/If' incorporates:
   *  Inport: '<S648>/In1'
   *  Inport: '<S649>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S630>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S630>/override_enable'
   */
  if ((VSC_DCOutputVoltageCmd_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S630>/NewValue' incorporates:
     *  ActionPort: '<S648>/Action Port'
     */
    rtb_Merge_je = (VSC_DCOutputVoltageCmd_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S648>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(275);
    }

    /* End of Outputs for SubSystem: '<S630>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S630>/OldValue' incorporates:
     *  ActionPort: '<S649>/Action Port'
     */
    rtb_Merge_je = (VSC_DCOutputVoltage_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S649>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(276);
    }

    /* End of Outputs for SubSystem: '<S630>/OldValue' */
  }

  /* End of If: '<S630>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S350>/Send CAN Messages3' */
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

  /* S-Function (motohawk_sfun_probe): '<S350>/motohawk_probe1' */
  (VSC_DCOutputVoltageCmd_Prb_DataStore()) = (VSC_DCOutputVoltage_Cal_DataStore());

  /* If: '<S640>/If' incorporates:
   *  Inport: '<S668>/In1'
   *  Inport: '<S669>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S640>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S640>/override_enable'
   */
  if ((IPT_Freq_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S640>/NewValue' incorporates:
     *  ActionPort: '<S668>/Action Port'
     */
    Mooventure2016_Rev5_B.s640_Merge = (IPT_Freq_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S668>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(295);
    }

    /* End of Outputs for SubSystem: '<S640>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S640>/OldValue' incorporates:
     *  ActionPort: '<S669>/Action Port'
     */
    Mooventure2016_Rev5_B.s640_Merge = (IPT_Frequency_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S669>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(296);
    }

    /* End of Outputs for SubSystem: '<S640>/OldValue' */
  }

  /* End of If: '<S640>/If' */

  /* If: '<S641>/If' incorporates:
   *  Inport: '<S670>/In1'
   *  Inport: '<S671>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S641>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S641>/override_enable'
   */
  if ((IPT_DutyCycle_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S641>/NewValue' incorporates:
     *  ActionPort: '<S670>/Action Port'
     */
    Mooventure2016_Rev5_B.s641_Merge = (IPT_DutyCycle_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S670>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(297);
    }

    /* End of Outputs for SubSystem: '<S641>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S641>/OldValue' incorporates:
     *  ActionPort: '<S671>/Action Port'
     */
    Mooventure2016_Rev5_B.s641_Merge = (IPT_Duty_Cycle_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S671>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(298);
    }

    /* End of Outputs for SubSystem: '<S641>/OldValue' */
  }

  /* End of If: '<S641>/If' */

  /* DataTypeConversion: '<S350>/Data Type Conversion1' */
  if (rtIsNaN(Mooventure2016_Rev5_B.s641_Merge) || rtIsInf
      (Mooventure2016_Rev5_B.s641_Merge)) {
    rtb_UnitDelay_m = 0.0;
  } else {
    rtb_UnitDelay_m = fmod(floor(Mooventure2016_Rev5_B.s641_Merge), 65536.0);
  }

  rtb_DataTypeConversion1_o = (int16_T)(rtb_UnitDelay_m < 0.0 ? (int16_T)
    -(int16_T)(uint16_T)-rtb_UnitDelay_m : (int16_T)(uint16_T)rtb_UnitDelay_m);

  /* End of DataTypeConversion: '<S350>/Data Type Conversion1' */

  /* DataTypeConversion: '<S350>/Data Type Conversion2' */
  if (rtIsNaN(Mooventure2016_Rev5_B.s640_Merge) || rtIsInf
      (Mooventure2016_Rev5_B.s640_Merge)) {
    rtb_UnitDelay_m = 0.0;
  } else {
    rtb_UnitDelay_m = fmod(floor(Mooventure2016_Rev5_B.s640_Merge),
      4.294967296E+9);
  }

  rtb_DataTypeConversion2_n = rtb_UnitDelay_m < 0.0 ? (uint32_T)-(int32_T)
    (uint32_T)-rtb_UnitDelay_m : (uint32_T)rtb_UnitDelay_m;

  /* End of DataTypeConversion: '<S350>/Data Type Conversion2' */
  /* If: '<S639>/If' incorporates:
   *  Inport: '<S666>/In1'
   *  Inport: '<S667>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S639>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S639>/override_enable'
   */
  if ((VSC_MinDCVoltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S639>/NewValue' incorporates:
     *  ActionPort: '<S666>/Action Port'
     */
    rtb_Merge_e2 = (VSC_MinDCVoltage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S666>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(293);
    }

    /* End of Outputs for SubSystem: '<S639>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S639>/OldValue' incorporates:
     *  ActionPort: '<S667>/Action Port'
     */
    rtb_Merge_e2 = (VSC_MinDCVoltage_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S667>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(294);
    }

    /* End of Outputs for SubSystem: '<S639>/OldValue' */
  }

  /* End of If: '<S639>/If' */

  /* If: '<S642>/If' incorporates:
   *  Inport: '<S672>/In1'
   *  Inport: '<S673>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S642>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S642>/override_enable'
   */
  if ((VSC_MaxCurrOutputGen_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S642>/NewValue' incorporates:
     *  ActionPort: '<S672>/Action Port'
     */
    rtb_Merge_ee = (VSC_MaxCurrOutputGen_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S672>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(299);
    }

    /* End of Outputs for SubSystem: '<S642>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S642>/OldValue' incorporates:
     *  ActionPort: '<S673>/Action Port'
     */
    rtb_Merge_ee = (VSC_MaxCurrOutputGen_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S673>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(300);
    }

    /* End of Outputs for SubSystem: '<S642>/OldValue' */
  }

  /* End of If: '<S642>/If' */

  /* If: '<S643>/If' incorporates:
   *  Inport: '<S674>/In1'
   *  Inport: '<S675>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_calibration): '<S643>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S643>/override_enable'
   */
  if ((VSC_MaxCurrInputMotor_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S643>/NewValue' incorporates:
     *  ActionPort: '<S674>/Action Port'
     */
    rtb_Merge_pi = (VSC_MaxCurrInputMotor_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S674>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(301);
    }

    /* End of Outputs for SubSystem: '<S643>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S643>/OldValue' incorporates:
     *  ActionPort: '<S675>/Action Port'
     */
    rtb_Merge_pi = (VSC_MaxCurrInputGen_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S675>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(302);
    }

    /* End of Outputs for SubSystem: '<S643>/OldValue' */
  }

  /* End of If: '<S643>/If' */

  /* If: '<S644>/If' incorporates:
   *  Inport: '<S676>/In1'
   *  Inport: '<S677>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S644>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S644>/override_enable'
   */
  if ((VSC_MaxDCVoltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S644>/NewValue' incorporates:
     *  ActionPort: '<S676>/Action Port'
     */
    rtb_Merge_bi = (VSC_MaxDCVoltage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S676>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(303);
    }

    /* End of Outputs for SubSystem: '<S644>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S644>/OldValue' incorporates:
     *  ActionPort: '<S677>/Action Port'
     */
    rtb_Merge_bi = (VSC_MaxDCVoltage_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S677>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(304);
    }

    /* End of Outputs for SubSystem: '<S644>/OldValue' */
  }

  /* End of If: '<S644>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S350>/Send CAN Messages1' */
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

  /* S-Function (motohawk_sfun_probe): '<S350>/motohawk_probe2' */
  (VSC_MinDCVoltage_Prb_DataStore()) = (VSC_MinDCVoltage_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S350>/motohawk_probe4' */
  (VSC_MaxCurrOutputGen_Prb_DataStore()) = (VSC_MaxCurrOutputGen_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S350>/motohawk_probe5' */
  (VSC_MaxCurrInputMotor_Prb_DataStore()) = (VSC_MaxCurrInputGen_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S350>/motohawk_probe7' */
  (VSC_MaxDCVoltage_Prb_DataStore()) = (VSC_MaxDCVoltage_Cal_DataStore());

  /* Abs: '<S56>/Abs1' incorporates:
   *  Sum: '<S56>/Add2'
   *  UnitDelay: '<S56>/Unit Delay1'
   */
  rtb_Switch_pn = fabs(rtb_Sum1_e -
                       Mooventure2016_Rev5_DWork.s56_UnitDelay1_DSTATE);

  /* RelationalOperator: '<S56>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S56>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_c = ((rtb_Switch_pn >=
    (Blend_Valve_Sensor_B_Intermittent_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S56>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_B_Intermittent */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(8, rtb_RelationalOperator1_c);
    UpdateFault(8);
  }

  /* RelationalOperator: '<S56>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S56>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_g = ((rtb_Sum1_e <
    (Blend_Valve_Sensor_B_Low_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S56>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_B_Low_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(9, rtb_RelationalOperator5_g);
    UpdateFault(9);
  }

  /* Abs: '<S56>/Abs' incorporates:
   *  Sum: '<S56>/Add1'
   *  UnitDelay: '<S56>/Unit Delay'
   */
  rtb_Switch_pn = fabs(rtb_Sum1_b -
                       Mooventure2016_Rev5_DWork.s56_UnitDelay_DSTATE);

  /* RelationalOperator: '<S56>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S56>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_mu = ((rtb_Switch_pn >=
    (Blend_Valve_Sensor_A_Intermittent_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S56>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_A_Intermittent */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(5, rtb_RelationalOperator2_mu);
    UpdateFault(5);
  }

  /* RelationalOperator: '<S56>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S56>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_ih = ((rtb_Sum1_b <
    (Blend_Valve_Sensor_A_Low_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S56>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_A_Low_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(6, rtb_RelationalOperator3_ih);
    UpdateFault(6);
  }

  /* RelationalOperator: '<S56>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S56>/motohawk_calibration4'
   */
  rtb_RelationalOperator4 = ((rtb_Sum1_b >
    (Blend_Valve_Sensor_A_High_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S56>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_A_High_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(4, rtb_RelationalOperator4);
    UpdateFault(4);
  }

  /* RelationalOperator: '<S56>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S56>/motohawk_calibration6'
   */
  rtb_RelationalOperator6 = ((rtb_Sum1_e >
    (Blend_Valve_Sensor_B_High_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S56>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_B_High_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(7, rtb_RelationalOperator6);
    UpdateFault(7);
  }

  /* S-Function Block: <S61>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s61_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_iy = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S61>/Switch' incorporates:
   *  Constant: '<S61>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S61>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S61>/motohawk_delta_time'
   *  Sum: '<S61>/Sum'
   */
  if (Mooventure2016_Rev5_B.s345_DataTypeConversion5) {
    rtb_Switch_pn = rtb_motohawk_delta_time_iy + TimeSinceRun1_DataStore();
  } else {
    rtb_Switch_pn = 0.0;
  }

  /* End of Switch: '<S61>/Switch' */
  /* Logic: '<S56>/Logical Operator' incorporates:
   *  RelationalOperator: '<S56>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S56>/motohawk_calibration'
   */
  rtb_LogicalOperator_o = (((rtb_Switch_pn >
    (Blend_Valve_A_No_Response_Fault_DataStore())) &&
    Mooventure2016_Rev5_B.s345_DataTypeConversion5));

  /* S-Function (motohawk_sfun_fault_def): '<S56>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Blend_Valve_A_No_Response */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(2, rtb_LogicalOperator_o);
    UpdateFault(2);
  }

  /* Saturate: '<S61>/Saturation' */
  rtb_Saturation_o = rtb_Switch_pn >= 16000.0 ? 16000.0 : rtb_Switch_pn <= 0.0 ?
    0.0 : rtb_Switch_pn;

  /* S-Function (motohawk_sfun_data_write): '<S61>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceRun1 */
  {
    TimeSinceRun1_DataStore() = rtb_Saturation_o;
  }

  /* S-Function Block: <S62>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s62_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_o5 = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S62>/Switch' incorporates:
   *  Constant: '<S62>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S62>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S62>/motohawk_delta_time'
   *  Sum: '<S62>/Sum'
   */
  if (Mooventure2016_Rev5_B.s345_DataTypeConversion1) {
    rtb_Switch_pn = rtb_motohawk_delta_time_o5 + TimeSinceRun2_DataStore();
  } else {
    rtb_Switch_pn = 0.0;
  }

  /* End of Switch: '<S62>/Switch' */
  /* Logic: '<S56>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S56>/Relational Operator7'
   *  S-Function (motohawk_sfun_calibration): '<S56>/motohawk_calibration7'
   */
  rtb_LogicalOperator1_m = (((rtb_Switch_pn >
    (Blend_Valve_B_No_Response_Fault_DataStore())) &&
    Mooventure2016_Rev5_B.s345_DataTypeConversion1));

  /* S-Function (motohawk_sfun_fault_def): '<S56>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Blend_Valve_B_No_Response */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(3, rtb_LogicalOperator1_m);
    UpdateFault(3);
  }

  /* Saturate: '<S62>/Saturation' */
  rtb_Saturation_d = rtb_Switch_pn >= 16000.0 ? 16000.0 : rtb_Switch_pn <= 0.0 ?
    0.0 : rtb_Switch_pn;

  /* S-Function (motohawk_sfun_data_write): '<S62>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceRun2 */
  {
    TimeSinceRun2_DataStore() = rtb_Saturation_d;
  }

  /* S-Function (motohawk_sfun_data_read): '<S52>/motohawk_data_read' */
  rtb_motohawk_data_read_mb = ChargeEnable_DataStore();

  /* If: '<S278>/If' incorporates:
   *  Inport: '<S287>/In1'
   *  Inport: '<S288>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S278>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S278>/override_enable'
   */
  if ((FaultSeverityIndicator_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S278>/NewValue' incorporates:
     *  ActionPort: '<S287>/Action Port'
     */
    rtb_Merge_ck = (FaultSeverityIndicator_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S287>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(67);
    }

    /* End of Outputs for SubSystem: '<S278>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S278>/OldValue' incorporates:
     *  ActionPort: '<S288>/Action Port'
     */
    rtb_Merge_ck = Mooventure2016_Rev5_B.s175_FaultSeverityIndicator;

    /* S-Function (motohawk_sfun_code_cover): '<S288>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(68);
    }

    /* End of Outputs for SubSystem: '<S278>/OldValue' */
  }

  /* End of If: '<S278>/If' */

  /* If: '<S280>/If' incorporates:
   *  Inport: '<S291>/In1'
   *  Inport: '<S292>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S280>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S280>/override_enable'
   */
  if ((IgnitionStatus_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S280>/NewValue' incorporates:
     *  ActionPort: '<S291>/Action Port'
     */
    rtb_LogicalOperator5 = (IgnitionStatus_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S291>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(71);
    }

    /* End of Outputs for SubSystem: '<S280>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S280>/OldValue' incorporates:
     *  ActionPort: '<S292>/Action Port'
     */
    rtb_LogicalOperator5 = Mooventure2016_Rev5_B.s175_IgnitionStatus;

    /* S-Function (motohawk_sfun_code_cover): '<S292>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(72);
    }

    /* End of Outputs for SubSystem: '<S280>/OldValue' */
  }

  /* End of If: '<S280>/If' */

  /* If: '<S286>/If' incorporates:
   *  Inport: '<S303>/In1'
   *  Inport: '<S304>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S286>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S286>/override_enable'
   */
  if ((InputVoltage_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S286>/NewValue' incorporates:
     *  ActionPort: '<S303>/Action Port'
     */
    rtb_UnitDelay_o = (InputVoltage_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S303>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(83);
    }

    /* End of Outputs for SubSystem: '<S286>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S286>/OldValue' incorporates:
     *  ActionPort: '<S304>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s175_InputVoltage;

    /* S-Function (motohawk_sfun_code_cover): '<S304>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(84);
    }

    /* End of Outputs for SubSystem: '<S286>/OldValue' */
  }

  /* End of If: '<S286>/If' */

  /* Outputs for Enabled SubSystem: '<S52>/Charger' incorporates:
   *  EnablePort: '<S57>/Enable'
   */
  if (rtb_motohawk_data_read_mb) {
    /* RelationalOperator: '<S57>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S57>/motohawk_calibration1'
     */
    rtb_RelationalOperator1_j = ((rtb_Merge_oq <=
      (Charger_Derated_Under_Temperature_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S57>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: Charger_Derated_Under_Temperature */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(17, rtb_RelationalOperator1_j);
      UpdateFault(17);
    }

    /* S-Function (motohawk_sfun_fault_def): '<S57>/motohawk_fault_def10' */

    /* Set Fault Suspected Status: Charger_Internal_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(18, rtb_Merge_ck);
      UpdateFault(18);
    }

    /* RelationalOperator: '<S57>/Relational Operator12' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S57>/motohawk_calibration9'
     */
    rtb_RelationalOperator12_h = ((rtb_UnitDelay_o <
      (Charger_Line_Voltage_Too_Low_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S57>/motohawk_fault_def11' */

    /* Set Fault Suspected Status: Charger_Line_Voltage_Too_Low */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(19, rtb_RelationalOperator12_h);
      UpdateFault(19);
    }

    /* RelationalOperator: '<S57>/Relational Operator11' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S57>/motohawk_calibration10'
     */
    rtb_RelationalOperator11_l = ((rtb_UnitDelay_o >
      (Charger_Line_Votlage_Too_High_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S57>/motohawk_fault_def12' */

    /* Set Fault Suspected Status: Charger_Line_Votlage_Too_High */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(20, rtb_RelationalOperator11_l);
      UpdateFault(20);
    }

    /* RelationalOperator: '<S57>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S57>/motohawk_calibration2'
     */
    rtb_RelationalOperator2_i = ((rtb_Merge_oq >=
      (Charger_Derated_Over_Temperature_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S57>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: Charger_Derated_Over_Temperature */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(16, rtb_RelationalOperator2_i);
      UpdateFault(16);
    }

    /* RelationalOperator: '<S57>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S172>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S57>/motohawk_calibration3'
     */
    rtb_RelationalOperator3_jh = (((MaxAmpCal_DataStore()) >
      (Charger_Requested_Current_Too_High_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S57>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: Charger_Requested_Current_Too_High */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(23, rtb_RelationalOperator3_jh);
      UpdateFault(23);
    }

    /* RelationalOperator: '<S57>/Relational Operator4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S172>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S57>/motohawk_calibration4'
     */
    rtb_LogicalOperator8 = ((MaxVoltageCal_DataStore()) <
      (Charger_Requested_Voltage_Out_of_Bounds_Fault_Lower_DataStore()));

    /* Logic: '<S57>/Logical Operator' incorporates:
     *  RelationalOperator: '<S57>/Relational Operator5'
     *  S-Function (motohawk_sfun_calibration): '<S172>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S57>/motohawk_calibration5'
     */
    rtb_LogicalOperator_hw = ((rtb_LogicalOperator8 || ((MaxVoltageCal_DataStore
                                 ()) >
      (Charger_Requested_Voltage_Out_of_Bounds_Fault_Upper_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S57>/motohawk_fault_def4' */

    /* Set Fault Suspected Status: Charger_Requested_Voltage_Out_of_Bounds */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(24, rtb_LogicalOperator_hw);
      UpdateFault(24);
    }

    /* RelationalOperator: '<S57>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S57>/motohawk_data_read'
     */
    rtb_RelationalOperator_lk = ((ChargeEnable_DataStore() >
      rtb_LogicalOperator5));

    /* S-Function (motohawk_sfun_fault_def): '<S57>/motohawk_fault_def5' */

    /* Set Fault Suspected Status: Charger_Requested_But_No_Key_Singal */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(22, rtb_RelationalOperator_lk);
      UpdateFault(22);
    }

    /* Logic: '<S57>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S57>/Relational Operator6'
     *  S-Function (motohawk_sfun_calibration): '<S57>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_data_read): '<S57>/motohawk_data_read'
     */
    rtb_LogicalOperator1_lt = ((ChargeEnable_DataStore() &&
      (Mooventure2016_Rev5_B.s177_IPT_HVDCVoltage <
       (Charger_Requested_But_No_High_Voltage_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S57>/motohawk_fault_def6' */

    /* Set Fault Suspected Status: Charger_Requested_But_No_High_Voltage */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(21, rtb_LogicalOperator1_lt);
      UpdateFault(21);
    }

    /* RelationalOperator: '<S57>/Relational Operator8' */
    rtb_RelationalOperator8_e = ((rtb_Merge_hn > rtb_Merge_lf));

    /* S-Function (motohawk_sfun_fault_def): '<S57>/motohawk_fault_def7' */

    /* Set Fault Suspected Status: Charger_Amperage_Draw_Greater_Then_Supply */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(15, rtb_RelationalOperator8_e);
      UpdateFault(15);
    }

    /* RelationalOperator: '<S57>/Relational Operator9' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S57>/motohawk_calibration7'
     */
    rtb_RelationalOperator9_k = ((Mooventure2016_Rev5_B.s177_IPT_HVDCVoltage <
      (Battery_Voltage_Too_Low_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S57>/motohawk_fault_def8' */

    /* Set Fault Suspected Status: Battery_Voltage_Too_Low */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(1, rtb_RelationalOperator9_k);
      UpdateFault(1);
    }

    /* RelationalOperator: '<S57>/Relational Operator10' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S57>/motohawk_calibration8'
     */
    rtb_RelationalOperator10_b = ((Mooventure2016_Rev5_B.s177_IPT_HVDCVoltage >
                                   (Battery_Voltage_Too_High_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S57>/motohawk_fault_def9' */

    /* Set Fault Suspected Status: Battery_Voltage_Too_High */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(0, rtb_RelationalOperator10_b);
      UpdateFault(0);
    }
  }

  /* End of Outputs for SubSystem: '<S52>/Charger' */
  /* S-Function Block: <S214>/motohawk_ain4 Resource: DCDC_Conveter */
  Mooventure2016_Rev5_B.s214_motohawk_ain4_o1 = DCDC_Conveter_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S229>/If' incorporates:
   *  Inport: '<S230>/In1'
   *  Inport: '<S231>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S229>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S229>/override_enable'
   */
  if ((DCDC_Status_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S229>/NewValue' incorporates:
     *  ActionPort: '<S230>/Action Port'
     */
    rtb_Merge_bn = ((uint16_T)(DCDC_Status_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S230>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(51);
    }

    /* End of Outputs for SubSystem: '<S229>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S229>/OldValue' incorporates:
     *  ActionPort: '<S231>/Action Port'
     */
    rtb_Merge_bn = Mooventure2016_Rev5_B.s214_motohawk_ain4_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S231>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(52);
    }

    /* End of Outputs for SubSystem: '<S229>/OldValue' */
  }

  /* End of If: '<S229>/If' */

  /* RelationalOperator: '<S58>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S58>/motohawk_calibration1'
   */
  rtb_RelationalOperator11_d = ((real_T)rtb_Merge_bn <
    (DCDC_Converter_Not_Running_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S58>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: DCDC_Converter_Not_Running */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(45, rtb_RelationalOperator11_d);
    UpdateFault(45);
  }

  /* RelationalOperator: '<S59>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S212>/motohawk_calibration'
   */
  rtb_RelationalOperator11_d = ((Contactor1_DataStore()) < (real_T)
    Mooventure2016_Rev5_B.s440_Coil1State);

  /* S-Function (motohawk_sfun_fault_def): '<S59>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Contactor_1_Failure_To_Close */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(25, rtb_RelationalOperator11_d);
    UpdateFault(25);
  }

  /* RelationalOperator: '<S59>/Relational Operator12' incorporates:
   *  Constant: '<S346>/Constant2'
   *  S-Function (motohawk_sfun_calibration): '<S212>/motohawk_calibration3'
   */
  rtb_RelationalOperator12 = (((Contactor4_DataStore()) < 0.0));

  /* S-Function (motohawk_sfun_fault_def): '<S59>/motohawk_fault_def10' */

  /* Set Fault Suspected Status: Contactor_4_Failure_To_Close */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(34, rtb_RelationalOperator12);
    UpdateFault(34);
  }

  /* RelationalOperator: '<S59>/Relational Operator13' incorporates:
   *  Constant: '<S346>/Constant2'
   *  S-Function (motohawk_sfun_calibration): '<S212>/motohawk_calibration3'
   */
  rtb_LogicalOperator5 = ((Contactor4_DataStore()) < 0.0);

  /* Logic: '<S59>/Logical Operator3' incorporates:
   *  Constant: '<S66>/Constant'
   *  RelationalOperator: '<S59>/Relational Operator14'
   *  S-Function (motohawk_sfun_calibration): '<S59>/motohawk_calibration3'
   */
  rtb_LogicalOperator3_p = ((rtb_LogicalOperator5 && (0.0 >
    (Contactor4_Unexpected_Open_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S59>/motohawk_fault_def11' */

  /* Set Fault Suspected Status: Contactor_4_Unexpected_Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(36, rtb_LogicalOperator3_p);
    UpdateFault(36);
  }

  /* RelationalOperator: '<S59>/Relational Operator15' incorporates:
   *  Constant: '<S346>/Constant2'
   *  S-Function (motohawk_sfun_calibration): '<S212>/motohawk_calibration3'
   */
  rtb_RelationalOperator15 = (((Contactor4_DataStore()) > 0.0));

  /* S-Function (motohawk_sfun_fault_def): '<S59>/motohawk_fault_def12' */

  /* Set Fault Suspected Status: Contactor_4_Fused */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(35, rtb_RelationalOperator15);
    UpdateFault(35);
  }

  /* RelationalOperator: '<S59>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S212>/motohawk_calibration'
   */
  rtb_RelationalOperator11_d = ((Contactor1_DataStore()) < (real_T)
    Mooventure2016_Rev5_B.s440_Coil1State);

  /* S-Function Block: <S63>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s63_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_es = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S63>/Switch' incorporates:
   *  Constant: '<S63>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S63>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S63>/motohawk_delta_time'
   *  Sum: '<S63>/Sum'
   */
  if (Mooventure2016_Rev5_B.s440_Coil1State) {
    rtb_Switch_pn = rtb_motohawk_delta_time_es + ContactorOne_DataStore();
  } else {
    rtb_Switch_pn = 0.0;
  }

  /* End of Switch: '<S63>/Switch' */
  /* Logic: '<S59>/Logical Operator' incorporates:
   *  RelationalOperator: '<S59>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S59>/motohawk_calibration'
   */
  rtb_LogicalOperator_cw = ((rtb_RelationalOperator11_d && (rtb_Switch_pn >
    (Contactor1_Unexpected_Open_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S59>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Contactor_1_Unexpected_Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(27, rtb_LogicalOperator_cw);
    UpdateFault(27);
  }

  /* RelationalOperator: '<S59>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S212>/motohawk_calibration'
   */
  rtb_RelationalOperator11_d = ((Contactor1_DataStore()) > (real_T)
    Mooventure2016_Rev5_B.s440_Coil1State);

  /* S-Function (motohawk_sfun_fault_def): '<S59>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Contactor_1_Fused */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(26, rtb_RelationalOperator11_d);
    UpdateFault(26);
  }

  /* RelationalOperator: '<S59>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S212>/motohawk_calibration1'
   */
  rtb_RelationalOperator11_d = ((Contactor2_DataStore()) < (real_T)
    Mooventure2016_Rev5_B.s441_Coil2State);

  /* S-Function (motohawk_sfun_fault_def): '<S59>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Contactor_2_Failure_To_Close */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(28, rtb_RelationalOperator11_d);
    UpdateFault(28);
  }

  /* RelationalOperator: '<S59>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S212>/motohawk_calibration1'
   */
  rtb_RelationalOperator11_d = ((Contactor2_DataStore()) < (real_T)
    Mooventure2016_Rev5_B.s441_Coil2State);

  /* S-Function Block: <S64>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s64_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_jt = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S64>/Switch' incorporates:
   *  Constant: '<S64>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S64>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S64>/motohawk_delta_time'
   *  Sum: '<S64>/Sum'
   */
  if (Mooventure2016_Rev5_B.s441_Coil2State) {
    rtb_Merge_cm = rtb_motohawk_delta_time_jt + ContactorTwo_DataStore();
  } else {
    rtb_Merge_cm = 0.0;
  }

  /* End of Switch: '<S64>/Switch' */
  /* Logic: '<S59>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S59>/Relational Operator6'
   *  S-Function (motohawk_sfun_calibration): '<S59>/motohawk_calibration1'
   */
  rtb_LogicalOperator1_h = ((rtb_RelationalOperator11_d && (rtb_Merge_cm >
    (Contactor2_Unexpected_Open_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S59>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Contactor_2_Unexpected_Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(30, rtb_LogicalOperator1_h);
    UpdateFault(30);
  }

  /* RelationalOperator: '<S59>/Relational Operator7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S212>/motohawk_calibration1'
   */
  rtb_RelationalOperator11_d = ((Contactor2_DataStore()) > (real_T)
    Mooventure2016_Rev5_B.s441_Coil2State);

  /* S-Function (motohawk_sfun_fault_def): '<S59>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Contactor_2_Fused */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(29, rtb_RelationalOperator11_d);
    UpdateFault(29);
  }

  /* RelationalOperator: '<S59>/Relational Operator8' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S212>/motohawk_calibration2'
   */
  rtb_RelationalOperator11_d = ((Contactor3_DataStore()) < (real_T)
    Mooventure2016_Rev5_B.s442_Coil3State);

  /* S-Function (motohawk_sfun_fault_def): '<S59>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Contactor_3_Failure_To_Close */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(31, rtb_RelationalOperator11_d);
    UpdateFault(31);
  }

  /* RelationalOperator: '<S59>/Relational Operator9' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S212>/motohawk_calibration2'
   */
  rtb_RelationalOperator11_d = ((Contactor3_DataStore()) < (real_T)
    Mooventure2016_Rev5_B.s442_Coil3State);

  /* S-Function Block: <S65>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s65_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_nm = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S65>/Switch' incorporates:
   *  Constant: '<S65>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S65>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S65>/motohawk_delta_time'
   *  Sum: '<S65>/Sum'
   */
  if (Mooventure2016_Rev5_B.s442_Coil3State) {
    rtb_Switch_hc = rtb_motohawk_delta_time_nm + ContactorThree_DataStore();
  } else {
    rtb_Switch_hc = 0.0;
  }

  /* End of Switch: '<S65>/Switch' */
  /* Logic: '<S59>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S59>/Relational Operator10'
   *  S-Function (motohawk_sfun_calibration): '<S59>/motohawk_calibration2'
   */
  rtb_LogicalOperator2_k = ((rtb_RelationalOperator11_d && (rtb_Switch_hc >
    (Contactor3_Unexpected_Open_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S59>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Contactor_3_Unexpected_Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(33, rtb_LogicalOperator2_k);
    UpdateFault(33);
  }

  /* RelationalOperator: '<S59>/Relational Operator11' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S212>/motohawk_calibration2'
   */
  rtb_RelationalOperator11_d = ((Contactor3_DataStore()) > (real_T)
    Mooventure2016_Rev5_B.s442_Coil3State);

  /* S-Function (motohawk_sfun_fault_def): '<S59>/motohawk_fault_def9' */

  /* Set Fault Suspected Status: Contactor_3_Fused */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(32, rtb_RelationalOperator11_d);
    UpdateFault(32);
  }

  /* Saturate: '<S63>/Saturation' */
  rtb_Saturation_f0 = rtb_Switch_pn >= 16000.0 ? 16000.0 : rtb_Switch_pn <= 0.0 ?
    0.0 : rtb_Switch_pn;

  /* S-Function (motohawk_sfun_data_write): '<S63>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ContactorOne */
  {
    ContactorOne_DataStore() = rtb_Saturation_f0;
  }

  /* Saturate: '<S64>/Saturation' */
  rtb_Saturation_k = rtb_Merge_cm >= 16000.0 ? 16000.0 : rtb_Merge_cm <= 0.0 ?
    0.0 : rtb_Merge_cm;

  /* S-Function (motohawk_sfun_data_write): '<S64>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ContactorTwo */
  {
    ContactorTwo_DataStore() = rtb_Saturation_k;
  }

  /* Saturate: '<S65>/Saturation' */
  rtb_Saturation_b = rtb_Switch_hc >= 16000.0 ? 16000.0 : rtb_Switch_hc <= 0.0 ?
    0.0 : rtb_Switch_hc;

  /* S-Function (motohawk_sfun_data_write): '<S65>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ContactorThree */
  {
    ContactorThree_DataStore() = rtb_Saturation_b;
  }

  /* Saturate: '<S66>/Saturation' */
  rtb_Saturation_o2 = 0.0;

  /* S-Function (motohawk_sfun_data_write): '<S66>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ContactorFour */
  {
    ContactorFour_DataStore() = rtb_Saturation_o2;
  }

  /* S-Function (motohawk_sfun_data_read): '<S66>/motohawk_data_read' */
  rtb_Switch_hc = ContactorFour_DataStore();

  /* S-Function Block: <S66>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s66_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hc = ((real_T) delta) * 0.000001;
  }

  /* Logic: '<S60>/Logical Operator' */
  rtb_LogicalOperator5 = (rtb_RelationalOperator2_id ||
    rtb_RelationalOperator_jg || rtb_Compare_nd || rtb_LogicalOperator_b2);

  /* Outputs for Triggered SubSystem: '<S60>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S67>/Trigger'
   */
  if (rtb_LogicalOperator5 &&
      (Mooventure2016_Rev5_PrevZCSigState.TriggeredSubsystem_Trig_ZCE !=
       POS_ZCSIG)) {
    /* S-Function (motohawk_sfun_data_write): '<S67>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TempReading */
    {
      TempReading_DataStore() = Mooventure2016_Rev5_B.s215_temp_reading;
    }
  }

  Mooventure2016_Rev5_PrevZCSigState.TriggeredSubsystem_Trig_ZCE = (uint8_T)
    (rtb_LogicalOperator5 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

  /* End of Outputs for SubSystem: '<S60>/Triggered Subsystem' */
  /* Sum: '<S60>/Add' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S60>/motohawk_calibration'
   */
  rtb_UnitDelay_o = (Temp_Fault_Hyst_DataStore()) +
    Mooventure2016_Rev5_B.s215_temp_reading;

  /* Logic: '<S60>/Logical Operator2' incorporates:
   *  Logic: '<S60>/Logical Operator1'
   *  RelationalOperator: '<S60>/Relational Operator'
   *  S-Function (motohawk_sfun_data_read): '<S60>/motohawk_data_read'
   */
  rtb_LogicalOperator2_p = (((!(rtb_UnitDelay_o >= TempReading_DataStore())) &&
    rtb_LogicalOperator5));

  /* S-Function (motohawk_sfun_fault_def): '<S60>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: HV_Heater_Poor_Performance */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(72, rtb_LogicalOperator2_p);
    UpdateFault(72);
  }

  /* RelationalOperator: '<S60>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S60>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_p = ((Mooventure2016_Rev5_B.s215_temp_reading >
    (HV_Heater_Over_Temperature_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S60>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: HV_Heater_Over_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(71, rtb_RelationalOperator1_p);
    UpdateFault(71);
  }

  /* Sum: '<S60>/Add1' incorporates:
   *  UnitDelay: '<S60>/Unit Delay'
   */
  rtb_Switch_hc = (real_T)rtb_Heater_Temp_Raw -
    Mooventure2016_Rev5_DWork.s60_UnitDelay_DSTATE;

  /* Abs: '<S60>/Abs' */
  rtb_Switch_hc = fabs(rtb_Switch_hc);

  /* RelationalOperator: '<S60>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S60>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_d = ((rtb_Switch_hc >=
    (HV_Heater_Temperature_Sensor_A_Intermittent_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S60>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: HV_Heater_Temperature_Sensor_A_Intermittent */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(74, rtb_RelationalOperator2_d);
    UpdateFault(74);
  }

  /* RelationalOperator: '<S60>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S60>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_h = (((real_T)rtb_Heater_Temp_Raw <
    (HV_Heater_Temperature_Sensor_A_Low_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S60>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: HV_Heater_Temperature_Sensor_A_Low_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(75, rtb_RelationalOperator3_h);
    UpdateFault(75);
  }

  /* RelationalOperator: '<S60>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S60>/motohawk_calibration4'
   */
  rtb_RelationalOperator4_m = (((real_T)rtb_Heater_Temp_Raw >
    (HV_Heater_Temperature_Sensor_A_High_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S60>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: HV_Heater_Temperature_Sensor_A_High_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(73, rtb_RelationalOperator4_m);
    UpdateFault(73);
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S170>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3263p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3263p0001_Receive(0, &msg_id, 0, msg_data);
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
      Mooventure2016_Rev5_B.s170_MaximumDischargePower_10s = ((real_T) tmp0) /
        ((real_T) 100);
      Mooventure2016_Rev5_B.s170_MaximumRegenPower_10s = ((real_T) tmp1) /
        ((real_T) 100);
      Mooventure2016_Rev5_B.s170_IsolationLevel = ((real_T) tmp2) * ((real_T) 4);
      Mooventure2016_Rev5_B.s170_ActiveDTC = (real_T) tmp3;
      Mooventure2016_Rev5_B.s170_PPL10s_RollingCounter = (real_T) tmp4;
    }
  }

  /* RelationalOperator: '<S68>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S68>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_cg = ((Mooventure2016_Rev5_B.s170_ActiveDTC >
    (HV_Battery_2G_BMS_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S68>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: HV_Battery_2G_BMS_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(60, rtb_RelationalOperator1_cg);
    UpdateFault(60);
  }

  /* RelationalOperator: '<S68>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S68>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_a = ((rtb_Sum1 ==
    (HV_Battery_Too_Low_For_Load_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S68>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: HV_Battery_Too_Low_For_Load */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(69, rtb_RelationalOperator5_a);
    UpdateFault(69);
  }

  /* If: '<S235>/If' incorporates:
   *  Inport: '<S245>/In1'
   *  Inport: '<S246>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S235>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S235>/override_enable'
   */
  if ((Batt_Current_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S235>/NewValue' incorporates:
     *  ActionPort: '<S245>/Action Port'
     */
    Mooventure2016_Rev5_B.s235_Merge = (Batt_Current_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S245>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(55);
    }

    /* End of Outputs for SubSystem: '<S235>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S235>/OldValue' incorporates:
     *  ActionPort: '<S246>/Action Port'
     */
    Mooventure2016_Rev5_B.s235_Merge = Mooventure2016_Rev5_B.s170_BatteryCurrent;

    /* S-Function (motohawk_sfun_code_cover): '<S246>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(56);
    }

    /* End of Outputs for SubSystem: '<S235>/OldValue' */
  }

  /* End of If: '<S235>/If' */

  /* Logic: '<S68>/Logical Operator' incorporates:
   *  RelationalOperator: '<S68>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S68>/motohawk_calibration3'
   */
  rtb_LogicalOperator_a = (((Mooventure2016_Rev5_B.s235_Merge >
    (HV_Battery_Try_To_Balance_Under_Load_Fault_DataStore())) &&
    Mooventure2016_Rev5_B.s170_CellBalanceingActive));

  /* S-Function (motohawk_sfun_fault_def): '<S68>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: HV_Battery_Try_To_Balance_Under_Load */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(70, rtb_LogicalOperator_a);
    UpdateFault(70);
  }

  /* Sum: '<S68>/Add' */
  rtb_UnitDelay_o = Mooventure2016_Rev5_B.s170_MaxCellVoltage -
    Mooventure2016_Rev5_B.s170_MinCellVoltage;

  /* RelationalOperator: '<S68>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S68>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_la = ((rtb_UnitDelay_o >
    (HV_Battery_Cell_Balancing_Required_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S68>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: HV_Battery_Cell_Balancing_Required_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(63, rtb_RelationalOperator2_la);
    UpdateFault(63);
  }

  /* If: '<S236>/If' incorporates:
   *  Inport: '<S247>/In1'
   *  Inport: '<S248>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S236>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S236>/override_enable'
   */
  if ((Batt_Age_Count_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S236>/NewValue' incorporates:
     *  ActionPort: '<S247>/Action Port'
     */
    rtb_Merge_nu = (Batt_Age_Count_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S247>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(57);
    }

    /* End of Outputs for SubSystem: '<S236>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S236>/OldValue' incorporates:
     *  ActionPort: '<S248>/Action Port'
     */
    rtb_Merge_nu = Mooventure2016_Rev5_B.s170_AgeCount;

    /* S-Function (motohawk_sfun_code_cover): '<S248>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(58);
    }

    /* End of Outputs for SubSystem: '<S236>/OldValue' */
  }

  /* End of If: '<S236>/If' */

  /* RelationalOperator: '<S68>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S68>/motohawk_calibration4'
   */
  rtb_Compare_nd = ((real_T)rtb_Merge_nu >=
                    (HV_Battery_48_Controller_Communication_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S68>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: HV_Battery_48_Controller_Communication_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(61, rtb_Compare_nd);
    UpdateFault(61);
  }

  /* RelationalOperator: '<S68>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S68>/motohawk_calibration6'
   */
  rtb_RelationalOperator6_i = ((rtb_Merge_o0 >
    (HV_Battery_Above_Safe_Charge_Point_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S68>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: HV_Battery_Above_Safe_Charge_Point */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(62, rtb_RelationalOperator6_i);
    UpdateFault(62);
  }

  /* RelationalOperator: '<S69>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S69>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_cc = ((Mooventure2016_Rev5_B.s170_PrechargeState ==
    (HV_Battery_Precharge_Failure_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S69>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: HV_Battery_Precharge_Failure */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(68, rtb_RelationalOperator2_cc);
    UpdateFault(68);
  }

  /* RelationalOperator: '<S70>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S70>/motohawk_calibration3'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s170_MinCellTemperature >
    (HV_Battery_Pack_Low_Temperature_Fault_Low_DataStore()));

  /* Logic: '<S70>/Logical Operator' incorporates:
   *  RelationalOperator: '<S70>/Relational Operator7'
   *  S-Function (motohawk_sfun_calibration): '<S70>/motohawk_calibration4'
   */
  rtb_LogicalOperator_oh = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s170_MinCellTemperature <=
     (HV_Battery_Pack_Low_Temperature_Fault_High_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S70>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: HV_Battery_Pack_Low_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(67, rtb_LogicalOperator_oh);
    UpdateFault(67);
  }

  /* RelationalOperator: '<S70>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S70>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_lg = ((Mooventure2016_Rev5_B.s170_MinCellTemperature <=
                                 
    (HV_Battery_Pack_Below_Operating_Temperature_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S70>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: HV_Battery_Pack_Below_Operating_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(65, rtb_RelationalOperator2_lg);
    UpdateFault(65);
  }

  /* RelationalOperator: '<S70>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S70>/motohawk_calibration5'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s170_MaxCellTemperature >
    (HV_Battery_Pack_High_Temperature_Fault_Low_DataStore()));

  /* Logic: '<S70>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S70>/Relational Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S70>/motohawk_calibration6'
   */
  rtb_LogicalOperator1_a = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s170_MaxCellTemperature <=
     (HV_Battery_Pack_High_Temperature_Fault_High_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S70>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: HV_Battery_Pack_High_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(66, rtb_LogicalOperator1_a);
    UpdateFault(66);
  }

  /* RelationalOperator: '<S70>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S70>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_pt = ((Mooventure2016_Rev5_B.s170_MaxCellTemperature >
                                 
    (HV_Battery_Pack_Above_Operating_Temperature_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S70>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: HV_Battery_Pack_Above_Operating_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(64, rtb_RelationalOperator1_pt);
    UpdateFault(64);
  }

  /* RelationalOperator: '<S268>/Compare' incorporates:
   *  Constant: '<S268>/Constant'
   */
  rtb_Compare_nd = (Mooventure2016_Rev5_B.s264_Out == 4.0);

  /* S-Function Block: <S273>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s273_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_f = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S273>/Switch' incorporates:
   *  Constant: '<S273>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S273>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S273>/motohawk_delta_time'
   *  Sum: '<S273>/Sum'
   */
  if (rtb_Compare_nd) {
    rtb_Switch_hc = rtb_motohawk_delta_time_f + ButtonDelay4_DataStore();
  } else {
    rtb_Switch_hc = 0.0;
  }

  /* End of Switch: '<S273>/Switch' */

  /* Logic: '<S262>/Logical Operator' incorporates:
   *  RelationalOperator: '<S262>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S173>/motohawk_calibration7'
   */
  rtb_LogicalOperator_b2 = (rtb_Compare_nd && (rtb_Switch_hc >= (Delay_DataStore
                              ())));

  /* RelationalOperator: '<S267>/Compare' incorporates:
   *  Constant: '<S267>/Constant'
   */
  rtb_Compare_nd = (Mooventure2016_Rev5_B.s264_Out == 3.0);

  /* S-Function Block: <S272>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s272_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_cz = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S272>/Switch' incorporates:
   *  Constant: '<S272>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S272>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S272>/motohawk_delta_time'
   *  Sum: '<S272>/Sum'
   */
  if (rtb_Compare_nd) {
    rtb_Merge_cm = rtb_motohawk_delta_time_cz + ButtonDelay3_DataStore();
  } else {
    rtb_Merge_cm = 0.0;
  }

  /* End of Switch: '<S272>/Switch' */

  /* Logic: '<S261>/Logical Operator' incorporates:
   *  RelationalOperator: '<S261>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S173>/motohawk_calibration7'
   */
  rtb_LogicalOperator_pl = (rtb_Compare_nd && (rtb_Merge_cm >= (Delay_DataStore())));

  /* RelationalOperator: '<S266>/Compare' incorporates:
   *  Constant: '<S266>/Constant'
   */
  rtb_Compare_nd = (Mooventure2016_Rev5_B.s264_Out == 2.0);

  /* S-Function Block: <S271>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s271_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_p1 = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S271>/Switch' incorporates:
   *  Constant: '<S271>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S271>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S271>/motohawk_delta_time'
   *  Sum: '<S271>/Sum'
   */
  if (rtb_Compare_nd) {
    rtb_Switch_pn = rtb_motohawk_delta_time_p1 + ButtonDelay2_DataStore();
  } else {
    rtb_Switch_pn = 0.0;
  }

  /* End of Switch: '<S271>/Switch' */

  /* Logic: '<S260>/Logical Operator' incorporates:
   *  RelationalOperator: '<S260>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S173>/motohawk_calibration7'
   */
  rtb_LogicalOperator_e = (rtb_Compare_nd && (rtb_Switch_pn >= (Delay_DataStore())));

  /* MATLAB Function Block: '<S174>/Embedded MATLAB Function2' */

  /* MATLAB Function 'Foreground/Inputs/Driver Inputs/Embedded MATLAB Function2': '<S277>:1' */
  /* '<S277>:1:3' */
  Mooventure2016_Rev5_B.s277_passengerTemp =
    Mooventure2016_Rev5_B.s174_PASSENGER_10 * 10.0 +
    Mooventure2016_Rev5_B.s174_PASSENGER_1;

  /* S-Function (motohawk_sfun_read_canmsg): '<S174>/Read CAN Message4' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3699p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3699p0001_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint8_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[4])) ;
      Mooventure2016_Rev5_B.s174_Button_Pressed = (real_T) tmp0;
    }
  }

  /* RelationalOperator: '<S175>/Relational Operator' incorporates:
   *  Constant: '<S175>/Constant'
   */
  rtb_Eaton_Plugged_In = ((rtb_Merge_b >= 1.0));

  /* S-Function (motohawk_sfun_read_canmsg): '<S177>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3887p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3887p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s177_AgeCount_j + 1) >
        Mooventure2016_Rev5_B.s177_AgeCount_j)
      Mooventure2016_Rev5_B.s177_AgeCount_j++;
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
      Mooventure2016_Rev5_B.s177_IPT_DCErrorCategory = (real_T) tmp0;
      Mooventure2016_Rev5_B.s177_IPT_DCLVOn = (real_T) tmp1;
      Mooventure2016_Rev5_B.s177_IPT_DCLVGeneralError = (real_T) tmp2;
      Mooventure2016_Rev5_B.s177_IPT_DCLVMaxPower = ((real_T) tmp3) * ((real_T)
        20);
      Mooventure2016_Rev5_B.s177_IPT_DCLVBusCurrent = (real_T) tmp4;
      Mooventure2016_Rev5_B.s177_IPT_DCLVBusVoltage = ((real_T) tmp5) / ((real_T)
        10);
      Mooventure2016_Rev5_B.s177_IPT_DCHVBusCurrent = ((real_T) tmp6) / ((real_T)
        10);
      Mooventure2016_Rev5_B.s177_AgeCount_j = 0;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S177>/Read CAN Message4' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3889p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3889p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s177_AgeCount_o + 1) >
        Mooventure2016_Rev5_B.s177_AgeCount_o)
      Mooventure2016_Rev5_B.s177_AgeCount_o++;
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
      Mooventure2016_Rev5_B.s177_Heading = ((real_T) tmp0) * ((real_T) 2);
      Mooventure2016_Rev5_B.s177_Speed = (real_T) tmp1;
      Mooventure2016_Rev5_B.s177_Altitude = ((real_T) tmp2) + ((real_T) -500);
      Mooventure2016_Rev5_B.s177_GPSQuality = (real_T) tmp3;
      Mooventure2016_Rev5_B.s177_DateTime = (real_T) tmp4;
      Mooventure2016_Rev5_B.s177_AgeCount_o = 0;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S170>/Read CAN Message6' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3268p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3268p0001_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint32_T tmp0 = 0;
      uint8_T tmp1 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp0))[2] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp0))[3] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[4])) ;
      Mooventure2016_Rev5_B.s170_LifeTimeAmpHoursOut = ((real_T) tmp0) /
        ((real_T) 10);
      Mooventure2016_Rev5_B.s170_LTAHI_RollingCounter = (real_T) tmp1;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S170>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3264p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3264p0001_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint8_T tmp2 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[7])) ;
      Mooventure2016_Rev5_B.s170_MaximumDischargePower_Continuous = ((real_T)
        tmp0) / ((real_T) 100);
      Mooventure2016_Rev5_B.s170_MaximumRegenPower_Continuous = ((real_T) tmp1) /
        ((real_T) 100);
      Mooventure2016_Rev5_B.s170_PPLCont_RollingCounter = (real_T) tmp2;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S168>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3064p0002_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3064p0002_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s168_AgeCount + 1) >
        Mooventure2016_Rev5_B.s168_AgeCount)
      Mooventure2016_Rev5_B.s168_AgeCount++;
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint8_T tmp2 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[4])) ;
      Mooventure2016_Rev5_B.s168_LF_Wheel_Rolling_Count = (real_T) tmp0;
      Mooventure2016_Rev5_B.s168_RT_Wheel_Rolling_Count = (real_T) tmp1;
      Mooventure2016_Rev5_B.s168_Wheel_Rolling_Timestamp = (real_T) tmp2;
      Mooventure2016_Rev5_B.s168_AgeCount = 0;
    }
  }

  /* If: '<S179>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S179>/override_enable'
   */
  if ((RT_Wheel_Rolling_Count_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S179>/NewValue' incorporates:
     *  ActionPort: '<S190>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S190>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(23);
    }

    /* End of Outputs for SubSystem: '<S179>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S179>/OldValue' incorporates:
     *  ActionPort: '<S191>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S191>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(24);
    }

    /* End of Outputs for SubSystem: '<S179>/OldValue' */
  }

  /* End of If: '<S179>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S168>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3066p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3066p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s168_AgeCount_e + 1) >
        Mooventure2016_Rev5_B.s168_AgeCount_e)
      Mooventure2016_Rev5_B.s168_AgeCount_e++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0] & 0x00000008) >> 3) ;
      Mooventure2016_Rev5_B.s168_TCS_ENG_EVNT_IN_PROGRESS = (real_T) tmp0;
      Mooventure2016_Rev5_B.s168_AgeCount_e = 0;
    }
  }

  /* If: '<S180>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S180>/override_enable'
   */
  if ((TCS_ENG_EVNT_IN_PROGRESS_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S180>/NewValue' incorporates:
     *  ActionPort: '<S192>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S192>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(25);
    }

    /* End of Outputs for SubSystem: '<S180>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S180>/OldValue' incorporates:
     *  ActionPort: '<S193>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S193>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(26);
    }

    /* End of Outputs for SubSystem: '<S180>/OldValue' */
  }

  /* End of If: '<S180>/If' */

  /* If: '<S181>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S181>/override_enable'
   */
  if ((ABS_417_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S181>/NewValue' incorporates:
     *  ActionPort: '<S194>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S194>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(27);
    }

    /* End of Outputs for SubSystem: '<S181>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S181>/OldValue' incorporates:
     *  ActionPort: '<S195>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S195>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(28);
    }

    /* End of Outputs for SubSystem: '<S181>/OldValue' */
  }

  /* End of If: '<S181>/If' */

  /* If: '<S182>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S182>/override_enable'
   */
  if ((Wheel_Rolling_Timestamp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S182>/NewValue' incorporates:
     *  ActionPort: '<S196>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S196>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(29);
    }

    /* End of Outputs for SubSystem: '<S182>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S182>/OldValue' incorporates:
     *  ActionPort: '<S197>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S197>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(30);
    }

    /* End of Outputs for SubSystem: '<S182>/OldValue' */
  }

  /* End of If: '<S182>/If' */

  /* If: '<S183>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S183>/override_enable'
   */
  if ((ABS_217_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S183>/NewValue' incorporates:
     *  ActionPort: '<S198>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S198>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(31);
    }

    /* End of Outputs for SubSystem: '<S183>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S183>/OldValue' incorporates:
     *  ActionPort: '<S199>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S199>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(32);
    }

    /* End of Outputs for SubSystem: '<S183>/OldValue' */
  }

  /* End of If: '<S183>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S168>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3065p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3065p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s168_AgeCount_n + 1) >
        Mooventure2016_Rev5_B.s168_AgeCount_n)
      Mooventure2016_Rev5_B.s168_AgeCount_n++;
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
      Mooventure2016_Rev5_B.s168_Front_left_whl_speed = (((real_T) tmp0) /
        ((real_T) 100)) + ((real_T) -1000);
      Mooventure2016_Rev5_B.s168_Front_right_whl_speed = (((real_T) tmp1) /
        ((real_T) 100)) + ((real_T) -1000);
      Mooventure2016_Rev5_B.s168_Rear_left_whl_speed = (((real_T) tmp2) /
        ((real_T) 100)) + ((real_T) -1000);
      Mooventure2016_Rev5_B.s168_Rear_right_whl_speed = (((real_T) tmp3) /
        ((real_T) 100)) + ((real_T) -1000);
      Mooventure2016_Rev5_B.s168_AgeCount_n = 0;
    }
  }

  /* If: '<S184>/If' incorporates:
   *  Inport: '<S200>/In1'
   *  Inport: '<S201>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S184>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S184>/override_enable'
   */
  if ((Front_right_whl_speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S184>/NewValue' incorporates:
     *  ActionPort: '<S200>/Action Port'
     */
    rtb_DataTypeConversion_m = (Front_right_whl_speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S200>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(33);
    }

    /* End of Outputs for SubSystem: '<S184>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S184>/OldValue' incorporates:
     *  ActionPort: '<S201>/Action Port'
     */
    rtb_DataTypeConversion_m = Mooventure2016_Rev5_B.s168_Front_right_whl_speed;

    /* S-Function (motohawk_sfun_code_cover): '<S201>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(34);
    }

    /* End of Outputs for SubSystem: '<S184>/OldValue' */
  }

  /* End of If: '<S184>/If' */

  /* If: '<S185>/If' incorporates:
   *  Inport: '<S202>/In1'
   *  Inport: '<S203>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S185>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S185>/override_enable'
   */
  if ((Rear_left_whl_speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S185>/NewValue' incorporates:
     *  ActionPort: '<S202>/Action Port'
     */
    rtb_DataTypeConversion1_m = (Rear_left_whl_speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S202>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(35);
    }

    /* End of Outputs for SubSystem: '<S185>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S185>/OldValue' incorporates:
     *  ActionPort: '<S203>/Action Port'
     */
    rtb_DataTypeConversion1_m = Mooventure2016_Rev5_B.s168_Rear_left_whl_speed;

    /* S-Function (motohawk_sfun_code_cover): '<S203>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(36);
    }

    /* End of Outputs for SubSystem: '<S185>/OldValue' */
  }

  /* End of If: '<S185>/If' */

  /* If: '<S186>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S186>/override_enable'
   */
  if ((ABS_4B0_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S186>/NewValue' incorporates:
     *  ActionPort: '<S204>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S204>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(37);
    }

    /* End of Outputs for SubSystem: '<S186>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S186>/OldValue' incorporates:
     *  ActionPort: '<S205>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S205>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(38);
    }

    /* End of Outputs for SubSystem: '<S186>/OldValue' */
  }

  /* End of If: '<S186>/If' */

  /* If: '<S187>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S187>/override_enable'
   */
  if ((LF_Wheel_Rolling_Count_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S187>/NewValue' incorporates:
     *  ActionPort: '<S206>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S206>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(39);
    }

    /* End of Outputs for SubSystem: '<S187>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S187>/OldValue' incorporates:
     *  ActionPort: '<S207>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S207>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(40);
    }

    /* End of Outputs for SubSystem: '<S187>/OldValue' */
  }

  /* End of If: '<S187>/If' */

  /* If: '<S188>/If' incorporates:
   *  Inport: '<S208>/In1'
   *  Inport: '<S209>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S188>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S188>/override_enable'
   */
  if ((Front_left_whl_speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S188>/NewValue' incorporates:
     *  ActionPort: '<S208>/Action Port'
     */
    rtb_UnitDelay_o = (Front_left_whl_speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S208>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(41);
    }

    /* End of Outputs for SubSystem: '<S188>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S188>/OldValue' incorporates:
     *  ActionPort: '<S209>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s168_Front_left_whl_speed;

    /* S-Function (motohawk_sfun_code_cover): '<S209>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(42);
    }

    /* End of Outputs for SubSystem: '<S188>/OldValue' */
  }

  /* End of If: '<S188>/If' */

  /* If: '<S189>/If' incorporates:
   *  Inport: '<S210>/In1'
   *  Inport: '<S211>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S189>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S189>/override_enable'
   */
  if ((Rear_right_whl_speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S189>/NewValue' incorporates:
     *  ActionPort: '<S210>/Action Port'
     */
    rtb_DataTypeConversion3 = (Rear_right_whl_speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S210>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(43);
    }

    /* End of Outputs for SubSystem: '<S189>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S189>/OldValue' incorporates:
     *  ActionPort: '<S211>/Action Port'
     */
    rtb_DataTypeConversion3 = Mooventure2016_Rev5_B.s168_Rear_right_whl_speed;

    /* S-Function (motohawk_sfun_code_cover): '<S211>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(44);
    }

    /* End of Outputs for SubSystem: '<S189>/OldValue' */
  }

  /* End of If: '<S189>/If' */

  /* If: '<S234>/If' incorporates:
   *  Inport: '<S243>/In1'
   *  Inport: '<S244>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S234>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S234>/override_enable'
   */
  if ((Batt_Coolant_Temp_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S234>/NewValue' incorporates:
     *  ActionPort: '<S243>/Action Port'
     */
    Mooventure2016_Rev5_B.s234_Merge = (Batt_Coolant_Temp_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S243>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(53);
    }

    /* End of Outputs for SubSystem: '<S234>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S234>/OldValue' incorporates:
     *  ActionPort: '<S244>/Action Port'
     */
    Mooventure2016_Rev5_B.s234_Merge =
      Mooventure2016_Rev5_B.s170_CoolantTemperature;

    /* S-Function (motohawk_sfun_code_cover): '<S244>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(54);
    }

    /* End of Outputs for SubSystem: '<S234>/OldValue' */
  }

  /* End of If: '<S234>/If' */

  /* If: '<S282>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S282>/override_enable'
   */
  if ((OutputCurrent_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S282>/NewValue' incorporates:
     *  ActionPort: '<S295>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S295>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(75);
    }

    /* End of Outputs for SubSystem: '<S282>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S282>/OldValue' incorporates:
     *  ActionPort: '<S296>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S296>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(76);
    }

    /* End of Outputs for SubSystem: '<S282>/OldValue' */
  }

  /* End of If: '<S282>/If' */

  /* If: '<S283>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S283>/override_enable'
   */
  if ((OutputVoltage_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S283>/NewValue' incorporates:
     *  ActionPort: '<S297>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S297>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(77);
    }

    /* End of Outputs for SubSystem: '<S283>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S283>/OldValue' incorporates:
     *  ActionPort: '<S298>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S298>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(78);
    }

    /* End of Outputs for SubSystem: '<S283>/OldValue' */
  }

  /* End of If: '<S283>/If' */

  /* If: '<S305>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S305>/override_enable'
   */
  if ((Oil_Pressure_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S305>/NewValue' incorporates:
     *  ActionPort: '<S312>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S312>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(85);
    }

    /* End of Outputs for SubSystem: '<S305>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S305>/OldValue' incorporates:
     *  ActionPort: '<S313>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S313>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(86);
    }

    /* End of Outputs for SubSystem: '<S305>/OldValue' */
  }

  /* End of If: '<S305>/If' */

  /* If: '<S308>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S308>/override_enable'
   */
  if ((Engine_Crank_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S308>/NewValue' incorporates:
     *  ActionPort: '<S318>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S318>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(91);
    }

    /* End of Outputs for SubSystem: '<S308>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S308>/OldValue' incorporates:
     *  ActionPort: '<S319>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S319>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(92);
    }

    /* End of Outputs for SubSystem: '<S308>/OldValue' */
  }

  /* End of If: '<S308>/If' */

  /* If: '<S310>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S310>/override_enable'
   */
  if ((Load_On_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S310>/NewValue' incorporates:
     *  ActionPort: '<S322>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S322>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(95);
    }

    /* End of Outputs for SubSystem: '<S310>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S310>/OldValue' incorporates:
     *  ActionPort: '<S323>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S323>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(96);
    }

    /* End of Outputs for SubSystem: '<S310>/OldValue' */
  }

  /* End of If: '<S310>/If' */

  /* If: '<S311>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S311>/override_enable'
   */
  if ((Fault_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S311>/NewValue' incorporates:
     *  ActionPort: '<S324>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S324>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(97);
    }

    /* End of Outputs for SubSystem: '<S311>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S311>/OldValue' incorporates:
     *  ActionPort: '<S325>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S325>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Engine Inputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(98);
    }

    /* End of Outputs for SubSystem: '<S311>/OldValue' */
  }

  /* End of If: '<S311>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S178>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4047p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4047p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s178_AgeCount + 1) >
        Mooventure2016_Rev5_B.s178_AgeCount)
      Mooventure2016_Rev5_B.s178_AgeCount++;
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
      Mooventure2016_Rev5_B.s178_STR_WHL_ANGLE_CNTR_FND = (real_T) tmp0;
      Mooventure2016_Rev5_B.s178_STR_WHL_ANGLE = (((real_T) tmp1) / ((real_T) 10))
        + ((real_T) -1000);
      Mooventure2016_Rev5_B.s178_RELATIVE_STR_WHL_ANGLE = (((real_T) tmp2) /
        ((real_T) 10)) + ((real_T) -2000);
      Mooventure2016_Rev5_B.s178_AgeCount = 0;
    }
  }

  /* If: '<S330>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S330>/override_enable'
   */
  if ((STR_WHL_ANGLE_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S330>/NewValue' incorporates:
     *  ActionPort: '<S334>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S334>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(101);
    }

    /* End of Outputs for SubSystem: '<S330>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S330>/OldValue' incorporates:
     *  ActionPort: '<S335>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S335>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(102);
    }

    /* End of Outputs for SubSystem: '<S330>/OldValue' */
  }

  /* End of If: '<S330>/If' */

  /* If: '<S331>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S331>/override_enable'
   */
  if ((RELATIVE_STR_WHL_ANGLE_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S331>/NewValue' incorporates:
     *  ActionPort: '<S336>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S336>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(103);
    }

    /* End of Outputs for SubSystem: '<S331>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S331>/OldValue' incorporates:
     *  ActionPort: '<S337>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S337>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(104);
    }

    /* End of Outputs for SubSystem: '<S331>/OldValue' */
  }

  /* End of If: '<S331>/If' */

  /* If: '<S332>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S332>/override_enable'
   */
  if ((PSCM_80_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S332>/NewValue' incorporates:
     *  ActionPort: '<S338>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S338>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(105);
    }

    /* End of Outputs for SubSystem: '<S332>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S332>/OldValue' incorporates:
     *  ActionPort: '<S339>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S339>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(106);
    }

    /* End of Outputs for SubSystem: '<S332>/OldValue' */
  }

  /* End of If: '<S332>/If' */

  /* If: '<S333>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S333>/override_enable'
   */
  if ((STR_WHL_ANGLE_CNTR_FND_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S333>/NewValue' incorporates:
     *  ActionPort: '<S340>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S340>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(107);
    }

    /* End of Outputs for SubSystem: '<S333>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S333>/OldValue' incorporates:
     *  ActionPort: '<S341>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S341>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(108);
    }

    /* End of Outputs for SubSystem: '<S333>/OldValue' */
  }

  /* End of If: '<S333>/If' */

  /* RelationalOperator: '<S74>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S74>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_a = ((Mooventure2016_Rev5_B.s174_Brake_Position >=
    (Brake_Pedal_Position_High_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S74>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Brake_Pedal_Position_Sensor_A_Circuit_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(13, rtb_RelationalOperator3_a);
    UpdateFault(13);
  }

  /* Abs: '<S74>/Abs' incorporates:
   *  Sum: '<S74>/Add'
   *  UnitDelay: '<S74>/Unit Delay'
   */
  rtb_UnitDelay_m = fabs(Mooventure2016_Rev5_B.s174_Brake_Position -
    Mooventure2016_Rev5_DWork.s74_UnitDelay_DSTATE);

  /* RelationalOperator: '<S74>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S74>/motohawk_calibration'
   */
  rtb_RelationalOperator_l1 = ((rtb_UnitDelay_m >=
    (Brake_Pedal_Position_Intermiitent_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S74>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Brake_Pedal_Position_Intermiitent */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(11, rtb_RelationalOperator_l1);
    UpdateFault(11);
  }

  /* RelationalOperator: '<S74>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S74>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_da = ((Mooventure2016_Rev5_B.s174_Brake_Position <=
    (Brake_Pedal_Position_Low_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S74>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Brake_Pedal_Position_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(12, rtb_RelationalOperator2_da);
    UpdateFault(12);
  }

  /* RelationalOperator: '<S74>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S74>/motohawk_calibration4'
   */
  rtb_Compare_nd = ((real_T)Mooventure2016_Rev5_B.s174_AgeCount_j >=
                    (Brake_Pedal_Position_Communication_Loss_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S74>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Brake_Pedal_Position_Communication_Loss */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(10, rtb_Compare_nd);
    UpdateFault(10);
  }

  /* DataTypeConversion: '<S75>/Data Type Conversion1' incorporates:
   *  RelationalOperator: '<S83>/FixPt Relational Operator'
   *  UnitDelay: '<S83>/Delay Input1'
   */
  rtb_Compare_nd = (rtb_LogicalOperator_h !=
                    Mooventure2016_Rev5_DWork.s83_DelayInput1_DSTATE);

  /* S-Function (motohawk_sfun_fault_def): '<S75>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Cruise_Control_Off_Signal_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(41, rtb_Compare_nd);
    UpdateFault(41);
  }

  /* DataTypeConversion: '<S75>/Data Type Conversion2' incorporates:
   *  RelationalOperator: '<S84>/FixPt Relational Operator'
   *  UnitDelay: '<S84>/Delay Input1'
   */
  rtb_Compare_nd = (rtb_LogicalOperator_b2 !=
                    Mooventure2016_Rev5_DWork.s84_DelayInput1_DSTATE);

  /* S-Function (motohawk_sfun_fault_def): '<S75>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Cruise_Control_Resume_Signal_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(43, rtb_Compare_nd);
    UpdateFault(43);
  }

  /* DataTypeConversion: '<S75>/Data Type Conversion3' incorporates:
   *  RelationalOperator: '<S85>/FixPt Relational Operator'
   *  UnitDelay: '<S85>/Delay Input1'
   */
  rtb_Compare_nd = (rtb_LogicalOperator_pl !=
                    Mooventure2016_Rev5_DWork.s85_DelayInput1_DSTATE);

  /* S-Function (motohawk_sfun_fault_def): '<S75>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Cruise_Control_Set_Signal_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(44, rtb_Compare_nd);
    UpdateFault(44);
  }

  /* DataTypeConversion: '<S75>/Data Type Conversion4' incorporates:
   *  RelationalOperator: '<S86>/FixPt Relational Operator'
   *  UnitDelay: '<S86>/Delay Input1'
   */
  rtb_Compare_nd = (rtb_LogicalOperator_e !=
                    Mooventure2016_Rev5_DWork.s86_DelayInput1_DSTATE);

  /* S-Function (motohawk_sfun_fault_def): '<S75>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Cruise_Control_Coast_Signal_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(40, rtb_Compare_nd);
    UpdateFault(40);
  }

  /* RelationalOperator: '<S75>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration2'
   */
  rtb_RelationalOperator1_f = ((Mooventure2016_Rev5_B.s174_Brake_Position >
    (Cruise_Disable_Brake_Fault1_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S75>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Cruise_Control_Brake_Switch_A_Circuit_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(37, rtb_RelationalOperator1_f);
    UpdateFault(37);
  }

  /* RelationalOperator: '<S75>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration1'
   */
  rtb_RelationalOperator2_j = ((Mooventure2016_Rev5_B.s174_Brake_Position <=
    (Cruise_Disable_Brake_Fault2_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S75>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Cruise_Control_Brake_Switch_A_Circuit_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(38, rtb_RelationalOperator2_j);
    UpdateFault(38);
  }

  /* DataTypeConversion: '<S75>/Data Type Conversion' incorporates:
   *  RelationalOperator: '<S82>/FixPt Relational Operator'
   *  UnitDelay: '<S82>/Delay Input1'
   */
  rtb_Compare_nd = (rtb_LogicalOperator_f !=
                    Mooventure2016_Rev5_DWork.s82_DelayInput1_DSTATE);

  /* S-Function (motohawk_sfun_fault_def): '<S75>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Cruise_Control_On_Signal_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(42, rtb_Compare_nd);
    UpdateFault(42);
  }

  /* Logic: '<S75>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S75>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S75>/motohawk_fault_status1'
   */
  rtb_LogicalOperator2_i = ((IsFaultActive(37) || IsFaultActive(38)));

  /* S-Function (motohawk_sfun_fault_def): '<S75>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Cruise_Control_Brake_Switch_A_Circuit_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(39, rtb_LogicalOperator2_i);
    UpdateFault(39);
  }

  /* Product: '<S76>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration7'
   */
  rtb_UnitDelay_m = (RPM_to_Wheel_Speed_Multiplier2_DataStore()) *
    Mooventure2016_Rev5_B.s327_Merge;

  /* RelationalOperator: '<S76>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_i3 = ((rtb_UnitDelay_m <=
    (Electric_Motor_Over_Speed_Reverse_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S76>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Electric_Motor_Over_Speed_Reverse */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(56, rtb_RelationalOperator3_i3);
    UpdateFault(56);
  }

  /* MATLAB Function Block: '<S76>/Data Correction Motor Fault' */
  Mooventure2016_Rev5_DataCorrectionMotorFault
    (Mooventure2016_Rev5_B.s177_IPT_WheelTorqueDelivered,
     &Mooventure2016_Rev5_B.s76_sf_DataCorrectionMotorFault);

  /* Abs: '<S76>/Abs' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S76>/motohawk_data_read'
   *  Sum: '<S76>/Add'
   */
  rtb_DataTypeConversion2 = fabs
    (Mooventure2016_Rev5_B.s76_sf_DataCorrectionMotorFault.s87_torqueOut -
     TorqueRequest_DataStore());

  /* RelationalOperator: '<S76>/Relational Operator12' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration13'
   */
  rtb_RelationalOperator12_d = ((rtb_DataTypeConversion2 >=
    (Electric_Motor_Torque_Output_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S76>/motohawk_fault_def10' */

  /* Set Fault Suspected Status: Electric_Motor_Torque_Output_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(58, rtb_RelationalOperator12_d);
    UpdateFault(58);
  }

  /* RelationalOperator: '<S76>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_ad = ((Mooventure2016_Rev5_B.s177_IPT_HVDCVoltage <
    (Electric_Motor_Derated_Under_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S76>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Electric_Motor_Derated_Under_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(53, rtb_RelationalOperator1_ad);
    UpdateFault(53);
  }

  /* RelationalOperator: '<S76>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration4'
   */
  rtb_RelationalOperator4_d = ((Mooventure2016_Rev5_B.s177_IPT_HVDCVoltage >
    (Electric_Motor_Derated_Over_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S76>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Electric_Motor_Derated_Over_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(51, rtb_RelationalOperator4_d);
    UpdateFault(51);
  }

  /* RelationalOperator: '<S76>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_e = ((rtb_UnitDelay_m >=
    (Electric_Motor_Over_Speed_Forward_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S76>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Electric_Motor_Over_Speed_Forward */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(55, rtb_RelationalOperator2_e);
    UpdateFault(55);
  }

  /* RelationalOperator: '<S76>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_k =
    ((Mooventure2016_Rev5_B.s177_IPT_InverterTemperature <
      (Electric_Motor_Derated_Under_Temperature_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S76>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Electric_Motor_Derated_Under_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(52, rtb_RelationalOperator5_k);
    UpdateFault(52);
  }

  /* RelationalOperator: '<S76>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration6'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s177_IPT_InverterTemperature >
    (Electric_Motor_Derated_Approaching_Over_Temperature_Fault_Under_DataStore()));

  /* Logic: '<S76>/Logical Operator' incorporates:
   *  RelationalOperator: '<S76>/Relational Operator7'
   *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration8'
   */
  rtb_LogicalOperator_j = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s177_IPT_InverterTemperature <
     (Electric_Motor_Derated_Approaching_Over_Temperature_Fault_Over_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S76>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Electric_Motor_Approaching_Over_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(49, rtb_LogicalOperator_j);
    UpdateFault(49);
  }

  /* RelationalOperator: '<S76>/Relational Operator8' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration9'
   */
  rtb_RelationalOperator8 = ((Mooventure2016_Rev5_B.s177_IPT_InverterTemperature
    >= (Electric_Motor_Derated_Over_Temperature_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S76>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Electric_Motor_Derated_Over_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(50, rtb_RelationalOperator8);
    UpdateFault(50);
  }

  /* RelationalOperator: '<S76>/Relational Operator9' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration10'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s177_IPT_ErrorCategory >
    (Electric_Motor_General_Error_Fault_Under_DataStore()));

  /* Logic: '<S76>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S76>/Relational Operator10'
   *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration11'
   */
  rtb_LogicalOperator1_j = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s177_IPT_ErrorCategory <
     (Electric_Motor_General_Error_Fault_Over_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S76>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Electric_Motor_General_Error */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(54, rtb_LogicalOperator1_j);
    UpdateFault(54);
  }

  /* RelationalOperator: '<S76>/Relational Operator11' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration12'
   */
  rtb_RelationalOperator11 = ((Mooventure2016_Rev5_B.s177_IPT_ErrorCategory >=
    (Electric_Motor_Shutdown_Error_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S76>/motohawk_fault_def9' */

  /* Set Fault Suspected Status: Electric_Motor_Shutodwn_Error */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(57, rtb_RelationalOperator11);
    UpdateFault(57);
  }

  /* RelationalOperator: '<S77>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration3'
   */
  rtb_Compare_nd = ((real_T)Mooventure2016_Rev5_B.s174_Throttle_Position >=
                    (Pedal_Position_Sensor_A_Circuit_High_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S77>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Pedal_Position_Sensor_A_Circuit_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(81, rtb_Compare_nd);
    UpdateFault(81);
  }

  /* Sum: '<S77>/Add' incorporates:
   *  UnitDelay: '<S77>/Unit Delay'
   */
  rtb_motohawk_ain = (uint16_T)(Mooventure2016_Rev5_B.s174_Throttle_Position -
    Mooventure2016_Rev5_DWork.s77_UnitDelay_DSTATE);

  /* RelationalOperator: '<S77>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration'
   */
  rtb_Compare_nd = ((real_T)rtb_motohawk_ain >=
                    (Pedal_Poition_Sensor_A_Intermittent_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S77>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Pedal_Position_Sensor_A_Circuit_Intermittent */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    boolean_T update;
    if (Mooventure2016_Rev5_DWork.s77_motohawk_fault_def2_DWORK1 >= 3) {
      update = 1;
      Mooventure2016_Rev5_DWork.s77_motohawk_fault_def2_DWORK1 = 0;
    } else {
      update = 0;
      Mooventure2016_Rev5_DWork.s77_motohawk_fault_def2_DWORK1++;
    }

    SetFaultSuspected(82, rtb_Compare_nd);
    if (update)
      UpdateFault(82);
  }

  /* RelationalOperator: '<S77>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration2'
   */
  rtb_Compare_nd = ((real_T)Mooventure2016_Rev5_B.s174_Throttle_Position <=
                    (Pedal_Position_Sensor_A_Circuit_Low_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S77>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Pedal_Position_Sensor_A_Circuit_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(83, rtb_Compare_nd);
    UpdateFault(83);
  }

  /* RelationalOperator: '<S78>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration1'
   */
  rtb_Compare_nd = (Mooventure2016_Rev5_B.s275_posOut >=
                    (Park_Nuetral_Switch_Input_High_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S78>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Park_Nuetral_Switch_Input_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(79, rtb_Compare_nd);
    UpdateFault(79);
  }

  /* RelationalOperator: '<S78>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_f = ((Mooventure2016_Rev5_B.s275_posOut >=
    (Drive_Switch_Input_High_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S78>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Drive_Switch_Input_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(47, rtb_RelationalOperator3_f);
    UpdateFault(47);
  }

  /* RelationalOperator: '<S78>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration2'
   */
  rtb_RelationalOperator_jg = (Mooventure2016_Rev5_B.s275_posOut <=
    (Drive_Switch_Input_Low_Fault_DataStore()));

  /* Logic: '<S78>/Logical Operator1' */
  rtb_LogicalOperator1_ax = rtb_RelationalOperator_jg;

  /* S-Function (motohawk_sfun_fault_def): '<S78>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Drive_Switch_Input_Circuit */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(46, rtb_LogicalOperator1_ax);
    UpdateFault(46);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S78>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Drive_Switch_Input_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(48, rtb_RelationalOperator_jg);
    UpdateFault(48);
  }

  /* RelationalOperator: '<S78>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration4'
   */
  rtb_RelationalOperator_jg = ((real_T)Mooventure2016_Rev5_B.s174_AgeCount >=
    (Gear_Shift_Module_Communication_Circuit_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S78>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Gear_Shift_Communication_Circuit */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(59, rtb_RelationalOperator_jg);
    UpdateFault(59);
  }

  /* RelationalOperator: '<S78>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration'
   */
  rtb_RelationalOperator_jg = (Mooventure2016_Rev5_B.s275_posOut <=
    (Park_Nuetral_Switch_Input_Low_Fault_DataStore()));

  /* Logic: '<S78>/Logical Operator2' */
  rtb_LogicalOperator2_m = ((rtb_Compare_nd || rtb_RelationalOperator_jg));

  /* S-Function (motohawk_sfun_fault_def): '<S78>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Park_Nuetral_Switch_Input_Circuit */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(78, rtb_LogicalOperator2_m);
    UpdateFault(78);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S78>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Park_Nuetral_Switch_Input_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(80, rtb_RelationalOperator_jg);
    UpdateFault(80);
  }

  /* Abs: '<S80>/Abs' */
  rtb_Merge_hn = fabs(rtb_UnitDelay_o);

  /* Sum: '<S88>/Sum2' incorporates:
   *  UnitDelay: '<S88>/Unit Delay'
   */
  rtb_UnitDelay_o = rtb_Merge_hn -
    Mooventure2016_Rev5_DWork.s88_UnitDelay_DSTATE;

  /* S-Function Block: <S88>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s88_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_an = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S88>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S88>/motohawk_delta_time'
   */
  rtb_UnitDelay_o /= rtb_motohawk_delta_time_an;

  /* RelationalOperator: '<S80>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration'
   */
  rtb_LogicalOperator5 = (rtb_UnitDelay_o >
    (Traction_Control_System_Maulfunction_Fault_DataStore()));

  /* Abs: '<S80>/Abs1' */
  rtb_Merge_lf = fabs(rtb_DataTypeConversion_m);

  /* Sum: '<S89>/Sum2' incorporates:
   *  UnitDelay: '<S89>/Unit Delay'
   */
  rtb_UnitDelay_o = rtb_Merge_lf -
    Mooventure2016_Rev5_DWork.s89_UnitDelay_DSTATE;

  /* S-Function Block: <S89>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s89_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_iv = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S80>/Relational Operator1' incorporates:
   *  Product: '<S89>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration'
   *  S-Function (motohawk_sfun_delta_time): '<S89>/motohawk_delta_time'
   */
  rtb_LogicalOperator8 = (rtb_UnitDelay_o / rtb_motohawk_delta_time_iv >
    (Traction_Control_System_Maulfunction_Fault_DataStore()));

  /* Abs: '<S80>/Abs2' */
  rtb_DataTypeConversion4 = fabs(rtb_DataTypeConversion1_m);

  /* Sum: '<S90>/Sum2' incorporates:
   *  UnitDelay: '<S90>/Unit Delay'
   */
  rtb_UnitDelay_o = rtb_DataTypeConversion4 -
    Mooventure2016_Rev5_DWork.s90_UnitDelay_DSTATE;

  /* S-Function Block: <S90>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s90_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_d = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S80>/Relational Operator2' incorporates:
   *  Product: '<S90>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration'
   *  S-Function (motohawk_sfun_delta_time): '<S90>/motohawk_delta_time'
   */
  rtb_RelationalOperator_b = (rtb_UnitDelay_o / rtb_motohawk_delta_time_d >
    (Traction_Control_System_Maulfunction_Fault_DataStore()));

  /* Abs: '<S80>/Abs3' */
  rtb_DataTypeConversion3 = fabs(rtb_DataTypeConversion3);

  /* Sum: '<S91>/Sum2' incorporates:
   *  UnitDelay: '<S91>/Unit Delay'
   */
  rtb_UnitDelay_o = rtb_DataTypeConversion3 -
    Mooventure2016_Rev5_DWork.s91_UnitDelay_DSTATE;

  /* S-Function Block: <S91>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s91_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_gg = ((real_T) delta) * 0.000001;
  }

  /* Logic: '<S80>/Logical Operator' incorporates:
   *  Product: '<S91>/Product'
   *  RelationalOperator: '<S80>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration'
   *  S-Function (motohawk_sfun_delta_time): '<S91>/motohawk_delta_time'
   */
  rtb_LogicalOperator_l = ((rtb_LogicalOperator5 || rtb_LogicalOperator8 ||
    rtb_RelationalOperator_b || (rtb_UnitDelay_o / rtb_motohawk_delta_time_gg >
                             
    (Traction_Control_System_Maulfunction_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S80>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Traction_Control_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(88, rtb_LogicalOperator_l);
    UpdateFault(88);
  }

  /* MATLAB Function Block: '<S81>/Data Correction' */
  Mooventure2016_Rev5_DataCorrectionMotorFault
    (Mooventure2016_Rev5_B.s177_IPT_WheelTorqueDelivered,
     &Mooventure2016_Rev5_B.s81_sf_DataCorrection);

  /* RelationalOperator: '<S81>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S81>/motohawk_calibration2'
   */
  rtb_LogicalOperator5 =
    (Mooventure2016_Rev5_B.s81_sf_DataCorrection.s87_torqueOut >
     (Vehicle_Speed_Sensor_Circuit_Low_Fault_DataStore()));

  /* Logic: '<S81>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S81>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S81>/motohawk_calibration3'
   */
  rtb_LogicalOperator1_hq = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s327_Merge < (Motor_Speed_TorqueRPM_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S81>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Vehicle_Speed_Sensor_Circuit_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(90, rtb_LogicalOperator1_hq);
    UpdateFault(90);
  }

  /* Abs: '<S81>/Abs' incorporates:
   *  Sum: '<S81>/Add'
   *  UnitDelay: '<S81>/Unit Delay'
   */
  rtb_DataTypeConversion2 = fabs(Mooventure2016_Rev5_B.s327_Merge -
    Mooventure2016_Rev5_DWork.s81_UnitDelay_DSTATE);

  /* RelationalOperator: '<S81>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S81>/motohawk_calibration4'
   */
  rtb_RelationalOperator_ox = ((rtb_DataTypeConversion2 >=
    (Motor_Speed_Torque_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S81>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Vehicle_Speed_Sensor_Erratic */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(91, rtb_RelationalOperator_ox);
    UpdateFault(91);
  }

  /* RelationalOperator: '<S81>/Relational Operator7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S81>/motohawk_calibration7'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s327_Merge <
    (Motor_Speed_Low_Fault_DataStore()));

  /* Logic: '<S81>/Logical Operator' incorporates:
   *  RelationalOperator: '<S81>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S81>/motohawk_calibration1'
   */
  rtb_LogicalOperator_fz = ((rtb_LogicalOperator5 ||
    (Mooventure2016_Rev5_B.s327_Merge > (Motor_Speed_High_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S81>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Vehicle_Speed_Sensor_Rang_Performance */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(92, rtb_LogicalOperator_fz);
    UpdateFault(92);
  }

  /* Logic: '<S81>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S81>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S81>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S81>/motohawk_fault_status2'
   */
  rtb_LogicalOperator2_ax = ((IsFaultActive(92) || IsFaultActive(90) ||
    IsFaultActive(91)));

  /* S-Function (motohawk_sfun_fault_def): '<S81>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Vehcile_Speed_Sensor_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(89, rtb_LogicalOperator2_ax);
    UpdateFault(89);
  }

  /* S-Function Block: <S73>/motohawk_ain Resource: DRVP */
  rtb_motohawk_ain = DRVP_AnalogInput_Get();

  /* Product: '<S73>/Product' incorporates:
   *  Constant: '<S73>/Constant'
   */
  rtb_DataTypeConversion1_m = (real_T)rtb_motohawk_ain * 0.02697;

  /* RelationalOperator: '<S73>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S73>/motohawk_calibration1'
   */
  rtb_Compare_nd = (rtb_DataTypeConversion1_m <= (V12_Low_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S73>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: System_Voltage_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(85, rtb_Compare_nd);
    UpdateFault(85);
  }

  /* Abs: '<S73>/Abs' incorporates:
   *  Sum: '<S73>/Add'
   *  UnitDelay: '<S73>/Unit Delay'
   */
  rtb_DataTypeConversion2 = fabs(rtb_DataTypeConversion1_m -
    Mooventure2016_Rev5_DWork.s73_UnitDelay_DSTATE);

  /* RelationalOperator: '<S73>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S73>/motohawk_calibration4'
   */
  rtb_RelationalOperator_jg = (rtb_DataTypeConversion2 >=
    (V12_Battery_Erratic_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S73>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: System_Voltage_Unstable */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(87, rtb_RelationalOperator_jg);
    UpdateFault(87);
  }

  /* RelationalOperator: '<S73>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S73>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_id = (rtb_DataTypeConversion1_m >= (V12_High_DataStore
                                 ()));

  /* S-Function (motohawk_sfun_fault_def): '<S73>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: System_Voltage_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(84, rtb_RelationalOperator2_id);
    UpdateFault(84);
  }

  /* Logic: '<S73>/Logical Operator2' */
  rtb_LogicalOperator2_kg = ((rtb_RelationalOperator_jg || rtb_Compare_nd ||
    rtb_RelationalOperator2_id));

  /* S-Function (motohawk_sfun_fault_def): '<S73>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: System_Voltage_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(86, rtb_LogicalOperator2_kg);
    UpdateFault(86);
  }

  /* RelationalOperator: '<S79>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S79>/motohawk_data_read1'
   */
  rtb_RelationalOperator1_e = ((ECUP_DataStore() >=
    (Key_Line_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S79>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Key_Line_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(76, rtb_RelationalOperator1_e);
    UpdateFault(76);
  }

  /* RelationalOperator: '<S79>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_data_read): '<S79>/motohawk_data_read1'
   */
  rtb_LogicalOperator5 = (ECUP_DataStore() >=
    (Key_Off_Coltage_High_Fault_DataStore()));

  /* Logic: '<S79>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S79>/motohawk_data_read'
   */
  rtb_LogicalOperator_pw = ((rtb_LogicalOperator5 && Shutdown_Req_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S79>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Key_Off_Voltage_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(77, rtb_LogicalOperator_pw);
    UpdateFault(77);
  }

  /* Logic: '<S13>/Logical Operator3' */
  rtb_LogicalOperator5 = !Mooventure2016_Rev5_B.s14_Merge;

  /* S-Function Block: <S17>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s17_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ey = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S17>/Switch' incorporates:
   *  Constant: '<S17>/Constant'
   *  Logic: '<S13>/Logical Operator5'
   *  S-Function (motohawk_sfun_data_read): '<S17>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S17>/motohawk_delta_time'
   *  Sum: '<S17>/Sum'
   */
  if (!Mooventure2016_Rev5_B.s14_Merge) {
    rtb_DataTypeConversion2 = rtb_motohawk_delta_time_ey +
      Solectria_Enable_timer_DataStore();
  } else {
    rtb_DataTypeConversion2 = 0.0;
  }

  /* End of Switch: '<S17>/Switch' */
  /* RelationalOperator: '<S12>/Compare' incorporates:
   *  Constant: '<S12>/Constant'
   */
  rtb_Compare_nd = (Mooventure2016_Rev5_B.s237_Merge == 4.0);

  /* Logic: '<S13>/Logical Operator4' incorporates:
   *  RelationalOperator: '<S13>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S13>/motohawk_calibration1'
   */
  rtb_LogicalOperator4_j = ((rtb_LogicalOperator5 && (rtb_DataTypeConversion2 >=
                              (Load_Enable_Delay_DataStore())) && rtb_Compare_nd));

  /* S-Function (motohawk_sfun_data_write): '<S6>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Batt_Load_Enable */
  {
    Batt_Load_Enable_DataStore() = rtb_LogicalOperator4_j;
  }

  /* S-Function (motohawk_sfun_data_write): '<S6>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Batt_Contactor_Status */
  {
    Batt_Contactor_Status_DataStore() = rtb_Compare_nd;
  }

  /* Logic: '<S13>/Logical Operator' */
  rtb_LogicalOperator_dp = ((Mooventure2016_Rev5_B.s13_LogicalOperator2 ||
    Mooventure2016_Rev5_B.s468_VehicleReadyOutput));

  /* S-Function (motohawk_sfun_data_write): '<S13>/motohawk_data_write' */
  /* Write to Data Storage as scalar: MPRD_KeepAlive */
  {
    MPRD_KeepAlive_DataStore() = rtb_LogicalOperator_dp;
  }

  /* Saturate: '<S15>/Saturation' */
  rtb_Saturation_im = rtb_Switch_h >= 86400.0 ? 86400.0 : rtb_Switch_h <= 0.0 ?
    0.0 : rtb_Switch_h;

  /* S-Function (motohawk_sfun_data_write): '<S15>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Contactor_Disable_Timer */
  {
    Contactor_Disable_Timer_DataStore() = rtb_Saturation_im;
  }

  /* Saturate: '<S16>/Saturation' */
  rtb_Saturation_ds = rtb_Switch_mf >= 86400.0 ? 86400.0 : rtb_Switch_mf <= 0.0 ?
    0.0 : rtb_Switch_mf;

  /* S-Function (motohawk_sfun_data_write): '<S16>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Voltage_Filt */
  {
    Voltage_Filt_DataStore() = rtb_Saturation_ds;
  }

  /* Saturate: '<S17>/Saturation' */
  rtb_Saturation_b3 = rtb_DataTypeConversion2 >= 86400.0 ? 86400.0 :
    rtb_DataTypeConversion2 <= 0.0 ? 0.0 : rtb_DataTypeConversion2;

  /* S-Function (motohawk_sfun_data_write): '<S17>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Solectria_Enable_timer */
  {
    Solectria_Enable_timer_DataStore() = rtb_Saturation_b3;
  }

  /* Saturate: '<S38>/Saturation' */
  rtb_Saturation_a = rtb_Switch_ja >= 16000.0 ? 16000.0 : rtb_Switch_ja <= 0.0 ?
    0.0 : rtb_Switch_ja;

  /* S-Function (motohawk_sfun_data_write): '<S38>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Engine_On_Timer */
  {
    Engine_On_Timer_DataStore() = rtb_Saturation_a;
  }

  /* Saturate: '<S39>/Saturation' */
  rtb_Saturation_kb = rtb_Switch_c >= 16000.0 ? 16000.0 : rtb_Switch_c <= 0.0 ?
    0.0 : rtb_Switch_c;

  /* S-Function (motohawk_sfun_data_write): '<S39>/motohawk_data_write' */
  /* Write to Data Storage as scalar: SOC_Low_Timer */
  {
    SOC_Low_Timer_DataStore() = rtb_Saturation_kb;
  }

  /* Saturate: '<S40>/Saturation' */
  rtb_Saturation_m = rtb_Switch_fi >= 16000.0 ? 16000.0 : rtb_Switch_fi <= 0.0 ?
    0.0 : rtb_Switch_fi;

  /* S-Function (motohawk_sfun_data_write): '<S40>/motohawk_data_write' */
  /* Write to Data Storage as scalar: SOC_High_Timer */
  {
    SOC_High_Timer_DataStore() = rtb_Saturation_m;
  }

  /* Saturate: '<S41>/Saturation' */
  rtb_Saturation_br = rtb_Switch_d >= 16000.0 ? 16000.0 : rtb_Switch_d <= 0.0 ?
    0.0 : rtb_Switch_d;

  /* S-Function (motohawk_sfun_data_write): '<S41>/motohawk_data_write' */
  /* Write to Data Storage as scalar: SOC_Critical_Timer */
  {
    SOC_Critical_Timer_DataStore() = rtb_Saturation_br;
  }

  /* Saturate: '<S42>/Saturation' */
  rtb_Saturation_e = rtb_Switch_f >= 16000.0 ? 16000.0 : rtb_Switch_f <= 0.0 ?
    0.0 : rtb_Switch_f;

  /* S-Function (motohawk_sfun_data_write): '<S42>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Vehicle_Speed_On_Timer */
  {
    Vehicle_Speed_On_Timer_DataStore() = rtb_Saturation_e;
  }

  /* Saturate: '<S43>/Saturation' */
  rtb_Saturation_in = rtb_Switch_e >= 16000.0 ? 16000.0 : rtb_Switch_e <= 0.0 ?
    0.0 : rtb_Switch_e;

  /* S-Function (motohawk_sfun_data_write): '<S43>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Vehicle_Speed_Off_Timer */
  {
    Vehicle_Speed_Off_Timer_DataStore() = rtb_Saturation_in;
  }

  /* S-Function (motohawk_sfun_data_write): '<S10>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TorqueRequest */
  {
    TorqueRequest_DataStore() = Mooventure2016_Rev5_B.s101_Switch;
  }

  /* DataTypeConversion: '<S10>/Data Type Conversion1' */
  if (rtIsNaN(rtb_Merge_l) || rtIsInf(rtb_Merge_l)) {
    rtb_UnitDelay_m = 0.0;
  } else {
    rtb_UnitDelay_m = fmod(floor(rtb_Merge_l), 4.294967296E+9);
  }

  rtb_DataTypeConversion1_g = rtb_UnitDelay_m < 0.0 ? -(int32_T)(uint32_T)
    -rtb_UnitDelay_m : (int32_T)(uint32_T)rtb_UnitDelay_m;

  /* End of DataTypeConversion: '<S10>/Data Type Conversion1' */

  /* S-Function (motohawk_sfun_data_write): '<S10>/motohawk_data_write3' */
  /* Write to Data Storage as scalar: Hybrid_State */
  {
    Hybrid_State_DataStore() = rtb_DataTypeConversion1_g;
  }

  /* Outputs for Enabled SubSystem: '<S94>/Brake Disable' incorporates:
   *  EnablePort: '<S107>/Enable'
   */
  /* RelationalOperator: '<S94>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S94>/motohawk_calibration2'
   */
  if (Mooventure2016_Rev5_B.s174_Brake_Position <
      (Cruise_Disable_Brake_DataStore())) {
    /* S-Function (motohawk_sfun_data_write): '<S107>/motohawk_data_write1' incorporates:
     *  Constant: '<S107>/Constant'
     */
    /* Write to Data Storage as scalar: CruiseOn */
    {
      CruiseOn_DataStore() = FALSE;
    }
  }

  /* End of RelationalOperator: '<S94>/Relational Operator1' */
  /* End of Outputs for SubSystem: '<S94>/Brake Disable' */
  /* Outputs for Enabled SubSystem: '<S108>/Speed Decrease' incorporates:
   *  EnablePort: '<S115>/Enable'
   */
  /* Logic: '<S108>/Logical Operator' incorporates:
   *  RelationalOperator: '<S113>/FixPt Relational Operator'
   *  S-Function (motohawk_sfun_data_read): '<S108>/motohawk_data_read'
   *  UnitDelay: '<S113>/Delay Input1'
   */
  if (CruiseOn_DataStore() && (rtb_LogicalOperator_e >
       Mooventure2016_Rev5_DWork.s113_DelayInput1_DSTATE)) {
    /* Sum: '<S115>/Add' incorporates:
     *  Constant: '<S115>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S115>/motohawk_data_read1'
     */
    rtb_Add_l = CruiseSpeed_DataStore() - 1.0;

    /* S-Function (motohawk_sfun_data_write): '<S115>/motohawk_data_write' */
    /* Write to Data Storage as scalar: CruiseSpeed */
    {
      CruiseSpeed_DataStore() = rtb_Add_l;
    }
  }

  /* End of Logic: '<S108>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S108>/Speed Decrease' */

  /* Outputs for Enabled SubSystem: '<S108>/Speed Increase' incorporates:
   *  EnablePort: '<S116>/Enable'
   */
  /* Logic: '<S108>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S114>/FixPt Relational Operator'
   *  S-Function (motohawk_sfun_data_read): '<S108>/motohawk_data_read'
   *  UnitDelay: '<S114>/Delay Input1'
   */
  if (CruiseOn_DataStore() && (rtb_LogicalOperator_pl >
       Mooventure2016_Rev5_DWork.s114_DelayInput1_DSTATE)) {
    /* Sum: '<S116>/Add' incorporates:
     *  Constant: '<S116>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S116>/motohawk_data_read1'
     */
    rtb_Add_e = CruiseSpeed_DataStore() + 1.0;

    /* S-Function (motohawk_sfun_data_write): '<S116>/motohawk_data_write' */
    /* Write to Data Storage as scalar: CruiseSpeed */
    {
      CruiseSpeed_DataStore() = rtb_Add_e;
    }
  }

  /* End of Logic: '<S108>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S108>/Speed Increase' */

  /* Outputs for Enabled SubSystem: '<S110>/Enabled Subsystem1' incorporates:
   *  EnablePort: '<S129>/Enable'
   */
  /* RelationalOperator: '<S128>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S128>/Delay Input1'
   */
  if ((rtb_LogicalOperator_b2 >
       Mooventure2016_Rev5_DWork.s128_DelayInput1_DSTATE) > 0) {
    /* S-Function (motohawk_sfun_data_write): '<S129>/motohawk_data_write1' incorporates:
     *  Constant: '<S129>/Constant'
     */
    /* Write to Data Storage as scalar: CruiseOn */
    {
      CruiseOn_DataStore() = TRUE;
    }
  }

  /* End of RelationalOperator: '<S128>/FixPt Relational Operator' */
  /* End of Outputs for SubSystem: '<S110>/Enabled Subsystem1' */
  /* RelationalOperator: '<S94>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S94>/motohawk_calibration1'
   */
  rtb_LogicalOperator5 = (rtb_Product >= (Cruise_On_Speed_DataStore()));

  /* Logic: '<S94>/Logical Operator1' incorporates:
   *  Logic: '<S94>/Logical Operator'
   *  Logic: '<S94>/Logical Operator2'
   *  S-Function (motohawk_sfun_data_read): '<S94>/motohawk_data_read'
   */
  rtb_LogicalOperator5 = (rtb_LogicalOperator5 && (rtb_LogicalOperator_e ||
    rtb_LogicalOperator_pl) && Mooventure2016_Rev5_B.s112_System &&
    (!CruiseOn_DataStore()));

  /* Product: '<S94>/Product1' */
  rtb_Product1_h = rtb_Product * (real_T)rtb_LogicalOperator5;

  /* Outputs for Enabled SubSystem: '<S94>/System Start' incorporates:
   *  EnablePort: '<S111>/Enable'
   */
  if (rtb_LogicalOperator5) {
    /* S-Function (motohawk_sfun_data_write): '<S111>/motohawk_data_write' */
    /* Write to Data Storage as scalar: CruiseSpeed */
    {
      CruiseSpeed_DataStore() = rtb_Product1_h;
    }

    /* S-Function (motohawk_sfun_data_write): '<S111>/motohawk_data_write1' incorporates:
     *  Constant: '<S111>/Constant'
     */
    /* Write to Data Storage as scalar: CruiseOn */
    {
      CruiseOn_DataStore() = TRUE;
    }
  }

  /* End of Outputs for SubSystem: '<S94>/System Start' */

  /* Product: '<S120>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration2'
   */
  rtb_UnitDelay_o = rtb_Product5 * (ETC_IGain_DataStore());

  /* S-Function Block: <S125>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s125_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ok = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S125>/Sum' incorporates:
   *  Product: '<S125>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S125>/motohawk_delta_time'
   */
  rtb_DataTypeConversion2 = rtb_UnitDelay_o * rtb_motohawk_delta_time_ok +
    Mooventure2016_Rev5_B.s125_Switch1;

  /* MinMax: '<S126>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration3'
   */
  rtb_UnitDelay_o = (rtb_DataTypeConversion2 >= (ETC_IMin_DataStore())) ||
    rtIsNaN((ETC_IMin_DataStore())) ? rtb_DataTypeConversion2 :
    (ETC_IMin_DataStore());

  /* MinMax: '<S126>/MinMax1' incorporates:
   *  MinMax: '<S126>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration4'
   */
  rtb_DataTypeConversion_m = (rtb_UnitDelay_o <= (ETC_IMax_DataStore())) ||
    rtIsNaN((ETC_IMax_DataStore())) ? rtb_UnitDelay_o : (ETC_IMax_DataStore());

  /* Gain: '<S138>/Gain' */
  rtb_UnitDelay_o = -Mooventure2016_Rev5_B.s235_Merge;

  /* Sum: '<S148>/Sum' incorporates:
   *  Constant: '<S148>/LimitingBegins'
   */
  rtb_UnitDelay_m = rtb_UnitDelay_o - 125.0;

  /* Switch: '<S148>/Switch1' incorporates:
   *  Constant: '<S150>/Constant'
   *  RelationalOperator: '<S150>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S148>/motohawk_calibration'
   */
  if (rtb_UnitDelay_m >= 0.0) {
    /* Switch: '<S148>/Switch' incorporates:
     *  Constant: '<S148>/LimitingBegins1'
     *  Constant: '<S148>/LimitingBegins2'
     *  Constant: '<S148>/exponentiallimt'
     *  Constant: '<S148>/slope'
     *  Constant: '<S148>/yintercept'
     *  Math: '<S148>/Math Function'
     *  Product: '<S148>/Divide'
     *  Product: '<S148>/Product'
     *  RelationalOperator: '<S148>/Relational Operator'
     *  Sum: '<S148>/Sum1'
     */
    if (160.0 > rtb_UnitDelay_o) {
      rtb_DataTypeConversion2 = 0.0197 * rtb_UnitDelay_m + 0.1003;
    } else {
      rtb_DataTypeConversion2 = rt_powd_snf(rtb_UnitDelay_m, 3.172) / 100000.0;
    }

    /* End of Switch: '<S148>/Switch' */
  } else {
    rtb_DataTypeConversion2 = (TorqueRecoveryValue_DataStore());
  }

  /* End of Switch: '<S148>/Switch1' */
  /* S-Function Block: <S149>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s149_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_kf = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S149>/Sum' incorporates:
   *  Product: '<S149>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S149>/motohawk_delta_time'
   */
  rtb_DataTypeConversion2 = rtb_DataTypeConversion2 * rtb_motohawk_delta_time_kf
    + Mooventure2016_Rev5_B.s149_Switch1;

  /* MinMax: '<S151>/MinMax' incorporates:
   *  Constant: '<S145>/Constant'
   */
  rtb_UnitDelay_m = rtb_DataTypeConversion2 >= 0.0 ? rtb_DataTypeConversion2 :
    0.0;

  /* S-Function (motohawk_sfun_data_write): '<S11>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Vehicle_Enable */
  {
    Vehicle_Enable_DataStore() = Mooventure2016_Rev5_B.s167_Vehicle_Enable;
  }

  /* S-Function (motohawk_sfun_data_write): '<S11>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Torque_Enable */
  {
    Torque_Enable_DataStore() = Mooventure2016_Rev5_B.s167_Torque_Enable;
  }

  /* S-Function (motohawk_sfun_data_write): '<S11>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: Vehicle_Ready */
  {
    Vehicle_Ready_DataStore() = Mooventure2016_Rev5_B.s167_Vehicle_Ready;
  }

  /* Saturate: '<S270>/Saturation' */
  rtb_Saturation_ib = rtb_Switch_m >= 86400.0 ? 86400.0 : rtb_Switch_m <= 0.0 ?
    0.0 : rtb_Switch_m;

  /* S-Function (motohawk_sfun_data_write): '<S270>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay1 */
  {
    ButtonDelay1_DataStore() = rtb_Saturation_ib;
  }

  /* Saturate: '<S271>/Saturation' */
  rtb_Saturation_kw = rtb_Switch_pn >= 86400.0 ? 86400.0 : rtb_Switch_pn <= 0.0 ?
    0.0 : rtb_Switch_pn;

  /* S-Function (motohawk_sfun_data_write): '<S271>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay2 */
  {
    ButtonDelay2_DataStore() = rtb_Saturation_kw;
  }

  /* Saturate: '<S272>/Saturation' */
  rtb_Saturation_ij = rtb_Merge_cm >= 86400.0 ? 86400.0 : rtb_Merge_cm <= 0.0 ?
    0.0 : rtb_Merge_cm;

  /* S-Function (motohawk_sfun_data_write): '<S272>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay3 */
  {
    ButtonDelay3_DataStore() = rtb_Saturation_ij;
  }

  /* Saturate: '<S273>/Saturation' */
  rtb_Saturation_df = rtb_Switch_hc >= 86400.0 ? 86400.0 : rtb_Switch_hc <= 0.0 ?
    0.0 : rtb_Switch_hc;

  /* S-Function (motohawk_sfun_data_write): '<S273>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay4 */
  {
    ButtonDelay4_DataStore() = rtb_Saturation_df;
  }

  /* Saturate: '<S274>/Saturation' */
  rtb_Saturation_ig = rtb_Switch_n >= 86400.0 ? 86400.0 : rtb_Switch_n <= 0.0 ?
    0.0 : rtb_Switch_n;

  /* S-Function (motohawk_sfun_data_write): '<S274>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay5 */
  {
    ButtonDelay5_DataStore() = rtb_Saturation_ig;
  }

  /* S-Function (motohawk_sfun_data_write): '<S175>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Eaton_Plugged_In */
  {
    Eaton_Plugged_In_DataStore() = rtb_Eaton_Plugged_In;
  }

  /* S-Function (motohawk_sfun_code_cover): '<S1>/motohawk_code_coverage' */
  /* Code Coverage Test: Mooventure2016_Rev5/Foreground */
  {
    extern void MH_CodeCovered(uint32_T idx);
    MH_CodeCovered(0);
  }

  /* Update for UnitDelay: '<S122>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s122_UnitDelay_DSTATE = rtb_Product3;

  /* Update for UnitDelay: '<S123>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s123_UnitDelay_DSTATE = rtb_Product;

  /* Update for UnitDelay: '<S124>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s124_UnitDelay_DSTATE = rtb_Product4;

  /* Update for UnitDelay: '<S117>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s117_DelayInput1_DSTATE = rtb_Compare;

  /* Update for UnitDelay: '<S125>/Unit Delay' incorporates:
   *  MinMax: '<S126>/MinMax1'
   */
  Mooventure2016_Rev5_DWork.s125_UnitDelay_DSTATE = rtb_DataTypeConversion_m;

  /* Update for UnitDelay: '<S149>/Unit Delay' incorporates:
   *  Constant: '<S145>/Constant'
   *  Constant: '<S145>/Constant1'
   *  MinMax: '<S151>/MinMax'
   *  MinMax: '<S151>/MinMax1'
   */
  Mooventure2016_Rev5_DWork.s149_UnitDelay_DSTATE = rtb_UnitDelay_m <= 1500.0 ?
    rtb_UnitDelay_m : 1500.0;

  /* Update for UnitDelay: '<S147>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s147_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s147_Sum1;

  /* Update for UnitDelay: '<S240>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s240_UnitDelay_DSTATE = rtb_Sum1;

  /* Update for UnitDelay: '<S155>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s155_UnitDelay_DSTATE = rtb_Sum1_j;

  /* Update for UnitDelay: '<S242>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s242_UnitDelay_DSTATE = rtb_Sum1_c;

  /* Update for S-Function (motohawk_sfun_dout): '<S345>/motohawk_dout1' */

  /* S-Function Block: DOut4362p0004 */
  {
    DOut4362p0004_DiscreteOutput_Set(rtb_Merge_lq);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S345>/motohawk_dout10' */

  /* S-Function Block: DOut4363p0004 */
  {
    DOut4363p0004_DiscreteOutput_Set(rtb_Merge_of1);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S345>/motohawk_dout11' */

  /* S-Function Block: DOut4364p0004 */
  {
    DOut4364p0004_DiscreteOutput_Set(rtb_DataTypeConversion6);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S345>/motohawk_dout12' */

  /* S-Function Block: DOut4365p0004 */
  {
    DOut4365p0004_DiscreteOutput_Set(rtb_DataTypeConversion_gi);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S345>/motohawk_dout13' */

  /* S-Function Block: DOut4366p0004 */
  {
    DOut4366p0004_DiscreteOutput_Set(rtb_DataTypeConversion3_i);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S345>/motohawk_dout2' */

  /* S-Function Block: DOut4367p0004 */
  {
    DOut4367p0004_DiscreteOutput_Set(rtb_Merge_dm);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S345>/motohawk_dout3' */

  /* S-Function Block: DOut4368p0004 */
  {
    DOut4368p0004_DiscreteOutput_Set(rtb_Merge_ay5);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S345>/motohawk_dout4' */

  /* S-Function Block: DOut4369p0004 */
  {
    DOut4369p0004_DiscreteOutput_Set(rtb_Merge_l1);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S345>/motohawk_dout5' */

  /* S-Function Block: DOut4370p0004 */
  {
    DOut4370p0004_DiscreteOutput_Set(rtb_Merge_cg);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S345>/motohawk_dout6' */

  /* S-Function Block: DOut4371p0004 */
  {
    DOut4371p0004_DiscreteOutput_Set(rtb_Merge_oqt);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S345>/motohawk_dout7' */

  /* S-Function Block: DOut4372p0004 */
  {
    DOut4372p0004_DiscreteOutput_Set(rtb_Merge_pi3);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S345>/motohawk_dout8' */

  /* S-Function Block: DOut4373p0004 */
  {
    DOut4373p0004_DiscreteOutput_Set(rtb_Merge_gd);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S345>/motohawk_dout9' */

  /* S-Function Block: DOut4374p0004 */
  {
    DOut4374p0004_DiscreteOutput_Set(rtb_Merge_ln);
  }

  /* Update for UnitDelay: '<S222>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s222_UnitDelay_DSTATE = rtb_Sum1_b;

  /* Update for UnitDelay: '<S221>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s221_UnitDelay_DSTATE = rtb_Sum1_e;

  /* Update for S-Function (motohawk_sfun_dout): '<S346>/motohawk_dout1' */

  /* S-Function Block: DOut4600p0004 */
  {
    DOut4600p0004_DiscreteOutput_Set(rtb_Merge_iu);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S346>/motohawk_dout2' */

  /* S-Function Block: DOut4601p0004 */
  {
    DOut4601p0004_DiscreteOutput_Set(rtb_Merge_nv);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S346>/motohawk_dout6' */

  /* S-Function Block: DOut4605p0004 */
  {
    DOut4605p0004_DiscreteOutput_Set(rtb_Merge_ef);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S346>/motohawk_dout4' */

  /* S-Function Block: DOut4603p0004 */
  {
    DOut4603p0004_DiscreteOutput_Set(rtb_DataTypeConversion6_c);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S346>/motohawk_dout5' */

  /* S-Function Block: DOut4604p0004 */
  {
    DOut4604p0004_DiscreteOutput_Set(rtb_DataTypeConversion5);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S346>/motohawk_dout3' */

  /* S-Function Block: DOut4602p0004 */
  {
    DOut4602p0004_DiscreteOutput_Set(rtb_DataTypeConversion8);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S350>/motohawk_pwm' */

  /* S-Function Block: H1m_PWMOutput */
  {
    H1m_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_n,
      rtb_DataTypeConversion1_o, 0, 1);
  }

  /* Update for UnitDelay: '<S56>/Unit Delay1' */
  Mooventure2016_Rev5_DWork.s56_UnitDelay1_DSTATE = rtb_Sum1_e;

  /* Update for UnitDelay: '<S56>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s56_UnitDelay_DSTATE = rtb_Sum1_b;

  /* Update for UnitDelay: '<S60>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s60_UnitDelay_DSTATE = (real_T)rtb_Heater_Temp_Raw;

  /* Update for UnitDelay: '<S74>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s74_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s174_Brake_Position;

  /* Update for UnitDelay: '<S83>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s83_DelayInput1_DSTATE = rtb_LogicalOperator_h;

  /* Update for UnitDelay: '<S84>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s84_DelayInput1_DSTATE = rtb_LogicalOperator_b2;

  /* Update for UnitDelay: '<S85>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s85_DelayInput1_DSTATE = rtb_LogicalOperator_pl;

  /* Update for UnitDelay: '<S86>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s86_DelayInput1_DSTATE = rtb_LogicalOperator_e;

  /* Update for UnitDelay: '<S82>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s82_DelayInput1_DSTATE = rtb_LogicalOperator_f;

  /* Update for UnitDelay: '<S77>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s77_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s174_Throttle_Position;

  /* Update for UnitDelay: '<S88>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s88_UnitDelay_DSTATE = rtb_Merge_hn;

  /* Update for UnitDelay: '<S89>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s89_UnitDelay_DSTATE = rtb_Merge_lf;

  /* Update for UnitDelay: '<S90>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s90_UnitDelay_DSTATE = rtb_DataTypeConversion4;

  /* Update for UnitDelay: '<S91>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s91_UnitDelay_DSTATE = rtb_DataTypeConversion3;

  /* Update for UnitDelay: '<S81>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s81_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s327_Merge;

  /* Update for UnitDelay: '<S73>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s73_UnitDelay_DSTATE = rtb_DataTypeConversion1_m;

  /* Update for UnitDelay: '<S113>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s113_DelayInput1_DSTATE = rtb_LogicalOperator_e;

  /* Update for UnitDelay: '<S114>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s114_DelayInput1_DSTATE = rtb_LogicalOperator_pl;

  /* Update for UnitDelay: '<S128>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s128_DelayInput1_DSTATE = rtb_LogicalOperator_b2;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
