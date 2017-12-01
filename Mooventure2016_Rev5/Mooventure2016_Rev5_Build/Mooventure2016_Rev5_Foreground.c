/*
 * File: Mooventure2016_Rev5_Foreground.c
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

#include "Mooventure2016_Rev5_Foreground.h"

/* Include model header file for global data */
#include "Mooventure2016_Rev5.h"
#include "Mooventure2016_Rev5_private.h"

/* Named constants for Stateflow: '<S72>/Chart' */
#define Mooventure2016_Rev5_IN_Driving (1U)
#define Mooventure2016_Rev5_IN_Nuetral (2U)
#define Mooventure2016_Rev5_IN_RegenBrake (3U)
#define Mooventure2016_Rev5_IN_RegenDrag (4U)

/* Named constants for Stateflow: '<S170>/Chart' */
#define Mooventure2016_Rev5_IN_Clear   (1U)
#define Mooventure2016_Rev5_IN_Counting (2U)
#define Mooventure2016_Rev5_IN_Init    (3U)
#define Mooventure2016_Rev5_IN_Write   (4U)

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

/* Named constants for Stateflow: '<S73>/SystemState' */
#define Mooventure2016_Rev5_IN_Off     (1U)
#define Mooventure2016_Rev5_IN_On      (2U)

/* Named constants for Stateflow: '<S12>/Chart' */
#define Mooventure2016_Rev5_IN_Batterybootup (1U)
#define Mooventure2016_Rev5_IN_Charging_and_Temp (2U)
#define Mooventure2016_Rev5_IN_Counting_b (3U)
#define Mooventure2016_Rev5_IN_Initial (4U)
#define Mooventure2016_Rev5_IN_Kill_Component_Keyed (5U)
#define Mooventure2016_Rev5_IN_Normal_Operation (6U)
#define Mooventure2016_Rev5_IN_Shutdown_Sequence (7U)

/* Named constants for Stateflow: '<S203>/Chart' */
#define Mooventure2016_Rev5_IN_ON      (1U)
#define Mooventure2016_Rev5_IN_Off_d   (2U)
#define Mooventure2016_Rev5_IN_RSM     (3U)
#define Mooventure2016_Rev5_IN_SetMinus (4U)
#define Mooventure2016_Rev5_IN_SetPlus (5U)
#define Mooventure2016_Rev5_IN_default (6U)

/* Named constants for Stateflow: '<S369>/Coil1State' */
#define Mooventure2016_Rev5_IN_Coil1Disabled (1U)
#define Mooventure2016_Rev5_IN_Coil1Enabled (2U)

/* Named constants for Stateflow: '<S369>/Coil2State' */
#define Mooventure2016_Rev5_IN_Coil2Disabled (1U)
#define Mooventure2016_Rev5_IN_Coil2Enabled (2U)

/* Named constants for Stateflow: '<S369>/Coil2State1' */
#define Mooventure2016_Rev5_IN_Coil3Disabled (1U)
#define Mooventure2016_Rev5_IN_Coil3Enabled (2U)

/* Named constants for Stateflow: '<S370>/Chart' */
#define Mooventure2016_Rev5_IN_FlashOff (1U)
#define Mooventure2016_Rev5_IN_FlashOn (2U)
#define Mooventure2016_Rev5_IN_Normal  (3U)
#define Mooventure2016_Rev5_IN_Solid   (4U)
#define Mooventure2016_Rev5_IN_Wait    (5U)

/* Named constants for Stateflow: '<S370>/PowerSteering' */
#define Mooventure2016_Rev5_IN_INIT    (1U)
#define Mooventure2016_Rev5_IN_MotorRunning (2U)
#define Mooventure2016_Rev5_IN_PowerSteeringOff (3U)
#define Mooventure2016_Rev5_IN_PowerSteeringOn (4U)

/* Named constants for Stateflow: '<S372>/OnOff Delay' */
#define Mooventure2016_Rev5_IN_IPTAwake (1U)
#define Mooventure2016_Rev5_IN_IPTEnable (2U)
#define Mooventure2016_Rev5_IN_Init_j  (3U)
#define Mooventure2016_Rev5_IN_MotorDisabled (4U)
#define Mooventure2016_Rev5_IN_MotorEnabled (5U)
#define Mooventure2016_Rev5_IN_TimerRunningOne (6U)
#define Mooventure2016_Rev5_IN_TimerRunningTwo (7U)

/*
 * Output and update for atomic system:
 *    '<S55>/Data Correction Motor Fault'
 *    '<S60>/Data Correction'
 *    '<S148>/Data Correction'
 *    '<S151>/Data Correction Motor'
 *    '<S366>/Data Correction Motor ABS'
 */
void Mooventure2016_Rev5_DataCorrectionMotorFault(real_T rtu_torqueIn,
  rtB_DataCorrectionMotorFault_Mooventure2016_Rev5 *localB)
{
  /* MATLAB Function 'Foreground/Control/Faults/Power Train/Electric Motor/Data Correction Motor Fault': '<S66>:1' */
  if (rtu_torqueIn > 0.0) {
    /* '<S66>:1:3' */
    /* '<S66>:1:4' */
    localB->s66_torqueOut = -(4000.0 - rtu_torqueIn);
  } else if (rtu_torqueIn < 0.0) {
    /* '<S66>:1:5' */
    /* '<S66>:1:6' */
    localB->s66_torqueOut = -(-4000.0 - rtu_torqueIn);
  } else {
    /* '<S66>:1:8' */
    localB->s66_torqueOut = 0.0;
  }
}

/*
 * Output and update for atomic system:
 *    '<S72>/Brake Pedal Scaling'
 *    '<S74>/Brake Pedal Scaling'
 *    '<S78>/Brake Pedal Scaling'
 */
void Mooventure2016_Rev5_BrakePedalScaling(real_T rtu_brakeIn, boolean_T
  rtu_inReverse, rtB_BrakePedalScaling_Mooventure2016_Rev5 *localB)
{
  /* MATLAB Function 'Foreground/Control/Hybrid Control Code/CrawlHomeMode/Brake Pedal Scaling': '<S82>:1' */
  if (!rtu_inReverse) {
    /* '<S82>:1:2' */
    /* '<S82>:1:3' */
    localB->s82_brakeOut = 1.0 - (rtu_brakeIn - 23900.0) / 8900.0;
  } else {
    /* '<S82>:1:5' */
    localB->s82_brakeOut = 1.0 - (41700.0 - rtu_brakeIn) / 8900.0;
  }
}

/*
 * Initial conditions for atomic system:
 *    '<S72>/Chart'
 *    '<S74>/Chart'
 *    '<S78>/Chart'
 */
void Mooventure2016_Rev5_Chart_Init(rtB_Chart_Mooventure2016_Rev5 *localB,
  rtDW_Chart_Mooventure2016_Rev5 *localDW)
{
  localDW->s83_is_active_c20_Mooventure2016_Rev5 = 0U;
  localDW->s83_is_c20_Mooventure2016_Rev5 = 0U;
  localB->s83_driveTorque = 0.0;
  localB->s83_regenTorque = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S72>/Chart'
 *    '<S74>/Chart'
 *    '<S78>/Chart'
 */
void Mooventure2016_Rev5_Chart(real_T rtu_accel, real_T rtu_brake, real_T
  rtu_speed, real_T rtu_accelStart, real_T rtu_accelEnd, real_T rtu_brakeStart,
  real_T rtu_brakeEnd, real_T rtu_regenStart, real_T rtu_regenEnd, real_T
  rtu_dragTorque, rtB_Chart_Mooventure2016_Rev5 *localB,
  rtDW_Chart_Mooventure2016_Rev5 *localDW)
{
  /* Gateway: Foreground/Control/Hybrid Control Code/CrawlHomeMode/Chart */
  /* During: Foreground/Control/Hybrid Control Code/CrawlHomeMode/Chart */
  if (localDW->s83_is_active_c20_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Hybrid Control Code/CrawlHomeMode/Chart */
    localDW->s83_is_active_c20_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S83>:2' */
    localDW->s83_is_c20_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Nuetral;
  } else {
    switch (localDW->s83_is_c20_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Driving:
      /* During 'Driving': '<S83>:3' */
      if ((rtu_accel <= rtu_accelEnd) && (rtu_speed >= rtu_regenStart)) {
        /* Transition: '<S83>:13' */
        localDW->s83_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RegenDrag;
      } else {
        localB->s83_driveTorque = rtu_accel;
        localB->s83_regenTorque = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Nuetral:
      /* During 'Nuetral': '<S83>:1' */
      if (rtu_accel >= rtu_accelStart) {
        /* Transition: '<S83>:11' */
        localDW->s83_is_c20_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Driving;
      } else {
        localB->s83_driveTorque = 0.0;
        localB->s83_regenTorque = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_RegenBrake:
      /* During 'RegenBrake': '<S83>:10' */
      if (rtu_speed <= rtu_regenEnd) {
        /* Transition: '<S83>:15' */
        localDW->s83_is_c20_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Nuetral;
      } else if (rtu_brake <= rtu_brakeEnd) {
        /* Transition: '<S83>:18' */
        localDW->s83_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RegenDrag;
      } else {
        localB->s83_regenTorque = rtu_brake + rtu_dragTorque;
        localB->s83_driveTorque = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_RegenDrag:
      /* During 'RegenDrag': '<S83>:4' */
      if (rtu_speed <= rtu_regenEnd) {
        /* Transition: '<S83>:14' */
        localDW->s83_is_c20_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Nuetral;
      } else if (rtu_brake >= rtu_brakeStart) {
        /* Transition: '<S83>:16' */
        localDW->s83_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RegenBrake;
      } else if (rtu_accel >= rtu_accelStart) {
        /* Transition: '<S83>:17' */
        localDW->s83_is_c20_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Driving;
      } else {
        localB->s83_regenTorque = rtu_dragTorque;
        localB->s83_driveTorque = 0.0;
      }
      break;

     default:
      /* Transition: '<S83>:2' */
      localDW->s83_is_c20_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Nuetral;
      break;
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S72>/Gas Pedal Scaling'
 *    '<S74>/Gas Pedal Scaling'
 *    '<S78>/Gas Pedal Scaling'
 */
void Mooventure2016_Rev5_GasPedalScaling(real_T rtu_throttleIn,
  rtB_GasPedalScaling_Mooventure2016_Rev5 *localB)
{
  /* MATLAB Function 'Foreground/Control/Hybrid Control Code/CrawlHomeMode/Gas Pedal Scaling': '<S84>:1' */
  /* '<S84>:1:2' */
  localB->s84_throttleOut = (rtu_throttleIn - 16.0) / 91.0;
}

/*
 * Initial conditions for atomic system:
 *    '<S170>/Chart'
 *    '<S150>/Bar Chart'
 *    '<S150>/Bar Chart Reset'
 *    '<S488>/Bar Chart Reset'
 */
void Mooventure2016_Rev5_Chart_o_Init(rtB_Chart_Mooventure2016_Rev5_d *localB,
  rtDW_Chart_Mooventure2016_Rev5_o *localDW)
{
  localDW->s173_is_active_c34_Mooventure2016_Rev5 = 0U;
  localDW->s173_is_c34_Mooventure2016_Rev5 = 0U;
  localDW->s173_count = 0.0;
  localB->s173_write = FALSE;
}

/*
 * Output and update for atomic system:
 *    '<S170>/Chart'
 *    '<S150>/Bar Chart'
 *    '<S150>/Bar Chart Reset'
 *    '<S488>/Bar Chart Reset'
 */
void Mooventure2016_Rev5_Chart_a(real_T rtu_delay,
  rtB_Chart_Mooventure2016_Rev5_d *localB, rtDW_Chart_Mooventure2016_Rev5_o
  *localDW)
{
  /* Gateway: Foreground/Control/Infotainment/MPGe Averages/Global Average/Chart */
  /* During: Foreground/Control/Infotainment/MPGe Averages/Global Average/Chart */
  if (localDW->s173_is_active_c34_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Infotainment/MPGe Averages/Global Average/Chart */
    localDW->s173_is_active_c34_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S173>:4' */
    localDW->s173_is_c34_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Init;
  } else {
    switch (localDW->s173_is_c34_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Clear:
      /* During 'Clear': '<S173>:8' */
      if (localB->s173_write == FALSE) {
        /* Transition: '<S173>:10' */
        localDW->s173_is_c34_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Init;
      } else {
        localB->s173_write = FALSE;
        localDW->s173_count = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Counting:
      /* During 'Counting': '<S173>:3' */
      if (localDW->s173_count >= rtu_delay) {
        /* Transition: '<S173>:7' */
        localDW->s173_is_c34_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Write;
      } else {
        localDW->s173_count = localDW->s173_count + 1.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Init:
      /* During 'Init': '<S173>:1' */
      if (localB->s173_write == FALSE) {
        /* Transition: '<S173>:5' */
        localDW->s173_is_c34_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Counting;
      } else {
        localB->s173_write = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Write:
      /* During 'Write': '<S173>:6' */
      if (localB->s173_write == TRUE) {
        /* Transition: '<S173>:9' */
        localDW->s173_is_c34_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Clear;
      } else {
        localB->s173_write = TRUE;
      }
      break;

     default:
      /* Transition: '<S173>:4' */
      localDW->s173_is_c34_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Init;
      break;
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S150>/Color1'
 *    '<S150>/Color10'
 *    '<S150>/Color11'
 *    '<S150>/Color13'
 *    '<S150>/Color14'
 *    '<S150>/Color15'
 *    '<S150>/Color2'
 *    '<S150>/Color3'
 *    '<S150>/Color4'
 *    '<S150>/Color5'
 *    ...
 */
void Mooventure2016_Rev5_Color1(real_T rtu_threshold, const real_T rtu_MPGe[15],
  rtB_Color1_Mooventure2016_Rev5 *localB)
{
  /* MATLAB Function 'Foreground/Control/Infotainment/MPGe Bar Calculations/Color1': '<S180>:1' */
  if (rtu_MPGe[0] >= rtu_threshold) {
    /* '<S180>:1:3' */
    /* '<S180>:1:4' */
    localB->s180_color = 1.0;
  } else {
    /* '<S180>:1:6' */
    localB->s180_color = 0.0;
  }
}

/*
 * Output and update for atomic system:
 *    '<S368>/Heater Core Motion Control'
 *    '<S368>/Radiator Motion Control'
 */
void Mooventure2016_Rev5_HeaterCoreMotionControl(real_T rtu_currPos, real_T
  rtu_posRequest, real_T rtu_hyst,
  rtB_HeaterCoreMotionControl_Mooventure2016_Rev5 *localB)
{
  /* MATLAB Function 'Foreground/Outputs/Coolant Outputs/Heater Core Motion Control': '<S412>:1' */
  if ((rtu_currPos <= rtu_posRequest + rtu_hyst) && (rtu_currPos >=
       rtu_posRequest - rtu_hyst)) {
    /* '<S412>:1:3' */
    /* '<S412>:1:4' */
    localB->s412_motorEnable = 0.0;

    /* '<S412>:1:5' */
    localB->s412_motorDirection = 0.0;
  } else if (rtu_currPos < rtu_posRequest) {
    /* '<S412>:1:6' */
    /* '<S412>:1:7' */
    localB->s412_motorEnable = 1.0;

    /* '<S412>:1:8' */
    localB->s412_motorDirection = 0.0;
  } else if (rtu_currPos > rtu_posRequest) {
    /* '<S412>:1:9' */
    /* '<S412>:1:10' */
    localB->s412_motorEnable = 1.0;

    /* '<S412>:1:11' */
    localB->s412_motorDirection = 1.0;
  } else {
    /* '<S412>:1:13' */
    localB->s412_motorEnable = 0.0;

    /* '<S412>:1:14' */
    localB->s412_motorDirection = 0.0;
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
  /* InitializeConditions for Stateflow: '<S203>/Chart' */
  Mooventure2016_Rev5_DWork.s288_is_active_c29_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s288_is_c29_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s288_Out = 0.0;

  /* S-Function Block: <S294>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s294_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S298>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s298_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S73>/SystemState' */
  Mooventure2016_Rev5_DWork.s91_is_active_c30_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s91_is_c30_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s91_System = FALSE;

  /* S-Function Block: <S123>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s123_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S119>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s119_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
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

  /* S-Function Block: <S247>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s247_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S7>/BlendValving' */
  Mooventure2016_Rev5_DWork.s21_is_active_c12_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s21_RadiatorBlend = 0.0;
  Mooventure2016_Rev5_B.s21_HeaterCoreBlend = 0.0;
  Mooventure2016_Rev5_B.s21_Heat1 = FALSE;
  Mooventure2016_Rev5_B.s21_Heat2 = FALSE;
  Mooventure2016_Rev5_B.s21_Heat3 = FALSE;
  Mooventure2016_Rev5_B.s21_Heat4 = FALSE;
  Mooventure2016_Rev5_B.s21_RadiatorPump = FALSE;
  Mooventure2016_Rev5_B.s21_HeaterCorePump = FALSE;

  /* S-Function Block: <S432>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s432_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S7>/PumpState' */
  Mooventure2016_Rev5_DWork.s24_is_active_c15_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s24_is_c15_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s24_PumpOn = FALSE;

  /* S-Function Block: <S246>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s246_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S429>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s429_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S430>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s430_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S431>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s431_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S12>/Chart' */
  Mooventure2016_Rev5_DWork.s198_is_active_c1_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s198_is_c1_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s198_count = 0.0;
  Mooventure2016_Rev5_B.s198_Vehicle_Enable = FALSE;
  Mooventure2016_Rev5_B.s198_Vehicle_Ready = FALSE;
  Mooventure2016_Rev5_B.s198_Torque_Enable = FALSE;
  Mooventure2016_Rev5_B.s198_Keyed_Relay = FALSE;

  /* InitializeConditions for Stateflow: '<S369>/Coil1State' */
  Mooventure2016_Rev5_DWork.s463_is_active_c8_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s463_is_c8_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s463_Coil1State = FALSE;

  /* InitializeConditions for Stateflow: '<S369>/Coil2State' */
  Mooventure2016_Rev5_DWork.s464_is_active_c9_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s464_is_c9_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s464_Coil2State = FALSE;

  /* InitializeConditions for Stateflow: '<S369>/Coil2State1' */
  Mooventure2016_Rev5_DWork.s465_is_active_c10_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s465_is_c10_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s465_Coil3State = FALSE;

  /* InitializeConditions for Stateflow: '<S370>/PowerSteering' */
  Mooventure2016_Rev5_DWork.s491_is_active_c28_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s491_is_c28_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s491_VehicleReadyOutput = FALSE;

  /* InitializeConditions for Stateflow: '<S370>/Chart' */
  Mooventure2016_Rev5_DWork.s486_is_active_c22_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s486_is_c22_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s486_engTemp = 0.0;
  Mooventure2016_Rev5_B.s486_transTemp = 0.0;
  Mooventure2016_Rev5_B.s486_timerOut = 0.0;

  /* S-Function Block: <S489>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s489_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S372>/OnOff Delay' */
  Mooventure2016_Rev5_DWork.s636_is_active_c4_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s636_is_c4_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s636_motorcount = 0;
  Mooventure2016_Rev5_B.s636_MotorEnable = FALSE;
  Mooventure2016_Rev5_B.s636_IPTWake = FALSE;
  Mooventure2016_Rev5_B.s636_IPTEnable = FALSE;
  Mooventure2016_Rev5_DWork.s636_presentTicks = 0U;
  Mooventure2016_Rev5_DWork.s636_elapsedTicks = 0U;
  Mooventure2016_Rev5_DWork.s636_previousTicks = 0U;

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

  /* S-Function Block: <S44>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s44_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S45>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s45_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S297>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s297_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S296>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s296_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S295>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s295_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for S-Function (motohawk_sfun_fault_def): '<S56>/motohawk_fault_def2' */
  /* Reset Fault Downsample Counter: Pedal_Position_Sensor_A_Circuit_Intermittent */
  {
    Mooventure2016_Rev5_DWork.s56_motohawk_fault_def2_DWORK1 = 0;
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
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
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
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
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
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
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
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* S-Function Block: <S18>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s18_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S104>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s104_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S128>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s128_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S155>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s155_motohawk_delta_time_DWORK1 = now -
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

  /* S-Function Block: <S161>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s161_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S170>/Chart' */
  Mooventure2016_Rev5_Chart_o_Init(&Mooventure2016_Rev5_B.s170_sf_Chart,
    &Mooventure2016_Rev5_DWork.s170_sf_Chart);

  /* InitializeConditions for Stateflow: '<S150>/Bar Chart' */
  Mooventure2016_Rev5_Chart_o_Init(&Mooventure2016_Rev5_B.s150_sf_BarChart,
    &Mooventure2016_Rev5_DWork.s150_sf_BarChart);

  /* InitializeConditions for Stateflow: '<S150>/Bar Chart Reset' */
  Mooventure2016_Rev5_Chart_o_Init(&Mooventure2016_Rev5_B.s150_sf_BarChartReset,
    &Mooventure2016_Rev5_DWork.s150_sf_BarChartReset);
}

/* Enable for function-call system: '<Root>/Foreground' */
void Mooventure2016_Rev5_Foreground_Enable(void)
{
  /* Enable for Stateflow: '<S372>/OnOff Delay' */
  Mooventure2016_Rev5_DWork.s636_presentTicks =
    Mooventure2016_Rev5_M->Timing.clockTick0;
  Mooventure2016_Rev5_DWork.s636_previousTicks =
    Mooventure2016_Rev5_DWork.s636_presentTicks;
}

/* Disable for function-call system: '<Root>/Foreground' */
void Mooventure2016_Rev5_Foreground_Disable(void)
{
  /* Disable for Enabled SubSystem: '<S77>/Drive' */
  /* Disable for Outport: '<S118>/IPT_Torque' */
  Mooventure2016_Rev5_B.s77_Torque_Direction = 0.0;
  Mooventure2016_Rev5_DWork.s77_Drive_MODE = FALSE;

  /* End of Disable for SubSystem: '<S77>/Drive' */

  /* Disable for Enabled SubSystem: '<S77>/Reverse' */
  Mooventure2016_Rev5_DWork.s77_Reverse_MODE = FALSE;

  /* End of Disable for SubSystem: '<S77>/Reverse' */

  /* Disable for Stateflow: '<S372>/OnOff Delay' */
  Mooventure2016_Rev5_DWork.s636_presentTicks =
    Mooventure2016_Rev5_M->Timing.clockTick0;
  Mooventure2016_Rev5_DWork.s636_elapsedTicks =
    Mooventure2016_Rev5_DWork.s636_presentTicks -
    Mooventure2016_Rev5_DWork.s636_previousTicks;
  Mooventure2016_Rev5_DWork.s636_previousTicks =
    Mooventure2016_Rev5_DWork.s636_presentTicks;
  if ((uint32_T)Mooventure2016_Rev5_DWork.s636_temporalCounter_i1 +
      Mooventure2016_Rev5_DWork.s636_elapsedTicks <= 7U) {
    Mooventure2016_Rev5_DWork.s636_temporalCounter_i1 = (uint8_T)((uint32_T)
      Mooventure2016_Rev5_DWork.s636_temporalCounter_i1 +
      Mooventure2016_Rev5_DWork.s636_elapsedTicks);
  } else {
    Mooventure2016_Rev5_DWork.s636_temporalCounter_i1 = 7U;
  }

  /* End of Stateflow: '<S372>/OnOff Delay' */
}

/* Start for function-call system: '<Root>/Foreground' */
void Mooventure2016_Rev5_Foreground_Start(void)
{
  /* Start for IfAction SubSystem: '<S9>/CrawlHomeMode' */

  /* InitializeConditions for Stateflow: '<S72>/Chart' */
  Mooventure2016_Rev5_Chart_Init(&Mooventure2016_Rev5_B.s72_sf_Chart,
    &Mooventure2016_Rev5_DWork.s72_sf_Chart);

  /* End of Start for SubSystem: '<S9>/CrawlHomeMode' */

  /* Start for IfAction SubSystem: '<S9>/EcoMode' */

  /* InitializeConditions for Stateflow: '<S74>/Chart' */
  Mooventure2016_Rev5_Chart_Init(&Mooventure2016_Rev5_B.s74_sf_Chart,
    &Mooventure2016_Rev5_DWork.s74_sf_Chart);

  /* End of Start for SubSystem: '<S9>/EcoMode' */

  /* Start for IfAction SubSystem: '<S9>/SUVMode' */

  /* InitializeConditions for Stateflow: '<S78>/Chart' */
  Mooventure2016_Rev5_Chart_Init(&Mooventure2016_Rev5_B.s78_sf_Chart,
    &Mooventure2016_Rev5_DWork.s78_sf_Chart);

  /* End of Start for SubSystem: '<S9>/SUVMode' */

  /* Start for Enabled SubSystem: '<S370>/Enabled Subsystem' */

  /* InitializeConditions for Stateflow: '<S488>/Bar Chart Reset' */
  Mooventure2016_Rev5_Chart_o_Init(&Mooventure2016_Rev5_B.s488_sf_BarChartReset,
    &Mooventure2016_Rev5_DWork.s488_sf_BarChartReset);

  /* End of Start for SubSystem: '<S370>/Enabled Subsystem' */

  /* S-Function Block: <S195>/S-Function  */
  {
    static real_T dnls_buffer[1 * 15];
    Mooventure2016_Rev5_DWork.s195_SFunction_PWORK.uBuffers = (void *)
      &dnls_buffer[0];
  }

  {
    int ids;

    /* Assign default sample(s) */
    if (Mooventure2016_Rev5_DWork.s195_SFunction_PWORK.uBuffers != NULL) {
      for (ids = 0; ids < 15; ++ids)
        ((real_T *)Mooventure2016_Rev5_DWork.s195_SFunction_PWORK.uBuffers)[ids]
          = (real_T)0.0;
    }

    /* Set work values */
    Mooventure2016_Rev5_DWork.s195_SFunction_IWORK.indPs = 0;
  }

  /* S-Function (motohawk_sfun_probe): '<S369>/motohawk_probe10' */
  (Coil5_AuxCoil_Probe_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S369>/motohawk_probe9' */
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
  real_T rtb_Sum1;
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
  real_T rtb_Merge_gr;
  real_T rtb_MPGe1[15];
  real_T rtb_MPGe2[15];
  real_T rtb_MPGe3[15];
  real_T rtb_MPGe4[15];
  real_T rtb_MPGe5[15];
  real_T rtb_MPGe6[15];
  real_T rtb_MPGe7[15];
  real_T rtb_MPGe8[15];
  real_T rtb_MPGe9[15];
  real_T rtb_MPGe10[15];
  real_T rtb_MPGe11[15];
  real_T rtb_MPGe12[15];
  real_T rtb_MPGe13[15];
  real_T rtb_MPGe14[15];
  real_T rtb_MPGe15[15];
  real_T rtb_Average;
  real_T rtb_motohawk_delta_time_iy;
  real_T rtb_Saturation_o;
  real_T rtb_motohawk_delta_time_o;
  real_T rtb_Saturation_d;
  real_T rtb_motohawk_delta_time_e;
  real_T rtb_motohawk_delta_time_j;
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
  real_T rtb_Product1_hm;
  real_T rtb_motohawk_delta_time_ok;
  real_T rtb_motohawk_delta_time_kf;
  real_T rtb_motohawk_abs_time_a;
  real_T rtb_Product3_l2;
  real_T rtb_motohawk_delta_time_ap;
  real_T rtb_motohawk_delta_time_c0;
  real_T rtb_motohawk_delta_time_mt;
  real_T rtb_motohawk_delta_time_jk;
  real_T rtb_Saturation_ib;
  real_T rtb_Saturation_kw;
  real_T rtb_Saturation_ij;
  real_T rtb_Saturation_df;
  real_T rtb_Saturation_ig;
  real_T rtb_reset;
  real_T rtb_ODO_out;
  real_T rtb_color;
  real_T rtb_Add1;
  real_T rtb_Add_o;
  real_T rtb_Add1_f;
  real_T rtb_Add_f;
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
  real_T rtb_Switch_pm;
  real_T rtb_Switch_mf;
  real_T rtb_Switch_hc;
  real_T rtb_MinMax_l2;
  int32_T rtb_DataTypeConversion1_g;
  uint32_T rtb_DataTypeConversion2;
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
  boolean_T rtb_DataTypeConversion3;
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
  boolean_T rtb_Merge_e0;
  boolean_T rtb_Merge_m3;
  boolean_T rtb_Merge_nr;
  boolean_T rtb_Merge_hz;
  boolean_T rtb_RelationalOperator1_c;
  boolean_T rtb_RelationalOperator5;
  boolean_T rtb_RelationalOperator2_m;
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
  boolean_T rtb_motohawk_fault_action1_g;
  boolean_T rtb_RelationalOperator11_d;
  int32_T row;
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
  real_T rtb_Switch_p;
  real_T rtb_Merge_oq;
  int32_T rtb_Heater_Temp_Raw;
  boolean_T rtb_LogicalOperator_b2;
  real_T rtb_Product2_f;
  real_T rtb_Merge_b;
  boolean_T rtb_RelationalOperator_b;
  real_T rtb_Merge_lf;
  real_T rtb_Merge_hn;
  real_T rtb_Merge_gq;
  uint32_T rtb_Merge_nu;
  boolean_T rtb_LogicalOperator_pl;
  boolean_T rtb_LogicalOperator_e;
  real_T rtb_Abs;
  real_T rtb_Abs1;
  real_T rtb_Abs2;
  real_T rtb_Abs3;
  real_T rtb_Merge_ld;
  real_T rtb_Sum1_c;

  /* UnitDelay: '<S101>/Unit Delay' */
  rtb_UnitDelay_m = Mooventure2016_Rev5_DWork.s101_UnitDelay_DSTATE;

  /* UnitDelay: '<S102>/Unit Delay' */
  rtb_UnitDelay_o = Mooventure2016_Rev5_DWork.s102_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_read_canmsg): '<S206>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4637p0005_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4637p0005_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s206_AgeCount + 1) >
        Mooventure2016_Rev5_B.s206_AgeCount)
      Mooventure2016_Rev5_B.s206_AgeCount++;
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
      Mooventure2016_Rev5_B.s206_IPT_CurrentUsed = (((real_T) tmp0) / ((real_T)
        10)) + ((real_T) -600);
      Mooventure2016_Rev5_B.s206_IPT_CurrentRequest = (((real_T) tmp1) /
        ((real_T) 10)) + ((real_T) -600);
      Mooventure2016_Rev5_B.s206_IPT_MotorSpeed = ((real_T) tmp2) + ((real_T)
        -15000);
      Mooventure2016_Rev5_B.s206_IPT_WheelTorqueDelivered = ((real_T) tmp3) +
        ((real_T) -4000);
      Mooventure2016_Rev5_B.s206_IPT_CurrentLimit = (real_T) tmp4;
      Mooventure2016_Rev5_B.s206_IPT_Antishudder = (real_T) tmp5;
      Mooventure2016_Rev5_B.s206_AgeCount = 0;
    }
  }

  /* If: '<S330>/If' incorporates:
   *  Inport: '<S331>/In1'
   *  Inport: '<S332>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S330>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S330>/override_enable'
   */
  if ((Motor_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S330>/NewValue' incorporates:
     *  ActionPort: '<S331>/Action Port'
     */
    Mooventure2016_Rev5_B.s330_Merge = (Motor_Speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S331>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(75);
    }

    /* End of Outputs for SubSystem: '<S330>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S330>/OldValue' incorporates:
     *  ActionPort: '<S332>/Action Port'
     */
    Mooventure2016_Rev5_B.s330_Merge = Mooventure2016_Rev5_B.s206_IPT_MotorSpeed;

    /* S-Function (motohawk_sfun_code_cover): '<S332>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(76);
    }

    /* End of Outputs for SubSystem: '<S330>/OldValue' */
  }

  /* End of If: '<S330>/If' */

  /* Product: '<S73>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S73>/motohawk_calibration7'
   */
  rtb_Product = Mooventure2016_Rev5_B.s330_Merge * (MPH_Conversion_DataStore());

  /* S-Function Block: <S102>/motohawk_delta_time */
  rtb_motohawk_delta_time = 0.005;

  /* Switch: '<S99>/Switch' incorporates:
   *  Constant: '<S99>/Constant'
   *  Product: '<S102>/Product'
   *  RelationalOperator: '<S99>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_delta_time): '<S102>/motohawk_delta_time'
   *  Sum: '<S102>/Sum2'
   */
  if ((rtb_Product - rtb_UnitDelay_o) / rtb_motohawk_delta_time > 0.0) {
    rtb_Product5 = (ETC_DampGainUp_DataStore());
  } else {
    rtb_Product5 = (ETC_DampGainDown_DataStore());
  }

  /* End of Switch: '<S99>/Switch' */

  /* Product: '<S99>/Product3' */
  rtb_Product3 = rtb_Product5 * rtb_Product;

  /* S-Function Block: <S101>/motohawk_delta_time */
  rtb_motohawk_delta_time_k = 0.005;

  /* Product: '<S101>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S101>/motohawk_delta_time'
   *  Sum: '<S101>/Sum2'
   */
  Mooventure2016_Rev5_B.s101_Product = (rtb_Product3 - rtb_UnitDelay_m) /
    rtb_motohawk_delta_time_k;

  /* UnitDelay: '<S103>/Unit Delay' */
  rtb_UnitDelay_o = Mooventure2016_Rev5_DWork.s103_UnitDelay_DSTATE;

  /* Sum: '<S99>/Sum2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S73>/motohawk_data_read2'
   */
  Mooventure2016_Rev5_B.s99_Sum2 = CruiseSpeed_DataStore() - rtb_Product;

  /* Product: '<S99>/Product5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration6'
   */
  rtb_Product5 = Mooventure2016_Rev5_B.s99_Sum2 * (ETC_ErrorGain_DataStore());

  /* Product: '<S99>/Product4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration1'
   */
  rtb_Product4 = (ETC_DGain_DataStore()) * rtb_Product5;

  /* S-Function Block: <S103>/motohawk_delta_time */
  rtb_motohawk_delta_time_p = 0.005;

  /* Product: '<S103>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S103>/motohawk_delta_time'
   *  Sum: '<S103>/Sum2'
   */
  Mooventure2016_Rev5_B.s103_Product = (rtb_Product4 - rtb_UnitDelay_o) /
    rtb_motohawk_delta_time_p;

  /* Product: '<S99>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration'
   */
  Mooventure2016_Rev5_B.s99_Product2 = (ETC_PGain_DataStore()) * rtb_Product5;

  /* RelationalOperator: '<S98>/Compare' incorporates:
   *  Constant: '<S98>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S88>/motohawk_data_read1'
   */
  rtb_Compare = CruiseOn_DataStore();

  /* Switch: '<S104>/Switch1' incorporates:
   *  RelationalOperator: '<S96>/FixPt Relational Operator'
   *  UnitDelay: '<S104>/Unit Delay'
   *  UnitDelay: '<S96>/Delay Input1'
   */
  if (rtb_Compare > Mooventure2016_Rev5_DWork.s96_DelayInput1_DSTATE) {
    Mooventure2016_Rev5_B.s104_Switch1 = 0.0;
  } else {
    Mooventure2016_Rev5_B.s104_Switch1 =
      Mooventure2016_Rev5_DWork.s104_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S104>/Switch1' */

  /* Sum: '<S97>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration5'
   *  Sum: '<S99>/Sum'
   */
  rtb_Switch_m = (((Mooventure2016_Rev5_B.s103_Product -
                    Mooventure2016_Rev5_B.s101_Product) +
                   Mooventure2016_Rev5_B.s99_Product2) +
                  Mooventure2016_Rev5_B.s104_Switch1) + (ETC_DCOffset_DataStore());

  /* MinMax: '<S106>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration'
   */
  rtb_UnitDelay_o = (rtb_Switch_m >= (ETC_LwrLim_DataStore())) || rtIsNaN
    ((ETC_LwrLim_DataStore())) ? rtb_Switch_m : (ETC_LwrLim_DataStore());

  /* MinMax: '<S106>/MinMax1' incorporates:
   *  MinMax: '<S106>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration1'
   */
  Mooventure2016_Rev5_B.s106_MinMax1 = (rtb_UnitDelay_o <= (ETC_UprLim_DataStore
    ())) || rtIsNaN((ETC_UprLim_DataStore())) ? rtb_UnitDelay_o :
    (ETC_UprLim_DataStore());

  /* S-Function Block: <S203>/motohawk_ain4 Resource: Cruise_Control */
  Mooventure2016_Rev5_B.s203_RawSignal = Cruise_Control_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* DataTypeConversion: '<S203>/Data Type Conversion' */
  rtb_UnitDelay_o = (real_T)Mooventure2016_Rev5_B.s203_RawSignal;

  /* Stateflow: '<S203>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration6'
   */

  /* Gateway: Foreground/Inputs/Cruise Control/Chart */
  /* During: Foreground/Inputs/Cruise Control/Chart */
  if (Mooventure2016_Rev5_DWork.s288_is_active_c29_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Inputs/Cruise Control/Chart */
    Mooventure2016_Rev5_DWork.s288_is_active_c29_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S288>:10' */
    Mooventure2016_Rev5_DWork.s288_is_c29_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_default;
  } else {
    switch (Mooventure2016_Rev5_DWork.s288_is_c29_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_ON:
      /* During 'ON': '<S288>:16' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S288>:34' */
        Mooventure2016_Rev5_DWork.s288_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default;
      } else {
        Mooventure2016_Rev5_B.s288_Out = 5.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Off_d:
      /* During 'Off': '<S288>:12' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S288>:35' */
        Mooventure2016_Rev5_DWork.s288_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default;
      } else {
        Mooventure2016_Rev5_B.s288_Out = 1.0;
      }
      break;

     case Mooventure2016_Rev5_IN_RSM:
      /* During 'RSM': '<S288>:15' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S288>:32' */
        Mooventure2016_Rev5_DWork.s288_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default;
      } else {
        Mooventure2016_Rev5_B.s288_Out = 4.0;
      }
      break;

     case Mooventure2016_Rev5_IN_SetMinus:
      /* During 'SetMinus': '<S288>:13' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S288>:26' */
        Mooventure2016_Rev5_DWork.s288_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default;
      } else {
        Mooventure2016_Rev5_B.s288_Out = 2.0;
      }
      break;

     case Mooventure2016_Rev5_IN_SetPlus:
      /* During 'SetPlus': '<S288>:14' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S288>:30' */
        Mooventure2016_Rev5_DWork.s288_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default;
      } else {
        Mooventure2016_Rev5_B.s288_Out = 3.0;
      }
      break;

     case Mooventure2016_Rev5_IN_default:
      /* During 'default': '<S288>:9' */
      if ((rtb_UnitDelay_o < (Off_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (Off_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S288>:22' */
        Mooventure2016_Rev5_DWork.s288_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Off_d;
      } else if ((rtb_UnitDelay_o < (SetPlus_DataStore()) + (HYST_DataStore())) &&
                 (rtb_UnitDelay_o > (SetPlus_DataStore()) - (HYST_DataStore())))
      {
        /* Transition: '<S288>:29' */
        Mooventure2016_Rev5_DWork.s288_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SetPlus;
      } else if ((rtb_UnitDelay_o < (RSM_DataStore()) + (HYST_DataStore())) &&
                 (rtb_UnitDelay_o > (RSM_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S288>:31' */
        Mooventure2016_Rev5_DWork.s288_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RSM;
      } else if ((rtb_UnitDelay_o < (ON_DataStore()) + (HYST_DataStore())) &&
                 (rtb_UnitDelay_o > (ON_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S288>:33' */
        Mooventure2016_Rev5_DWork.s288_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_ON;
      } else if ((rtb_UnitDelay_o < (SetMinus_DataStore()) + (HYST_DataStore()))
                 && (rtb_UnitDelay_o > (SetMinus_DataStore()) - (HYST_DataStore())))
      {
        /* Transition: '<S288>:38' */
        Mooventure2016_Rev5_DWork.s288_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SetMinus;
      } else {
        Mooventure2016_Rev5_B.s288_Out = 0.0;
      }
      break;

     default:
      /* Transition: '<S288>:10' */
      Mooventure2016_Rev5_DWork.s288_is_c29_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_default;
      break;
    }
  }

  /* End of Stateflow: '<S203>/Chart' */

  /* RelationalOperator: '<S289>/Compare' incorporates:
   *  Constant: '<S289>/Constant'
   */
  rtb_RelationalOperator11_d = (Mooventure2016_Rev5_B.s288_Out == 1.0);

  /* S-Function Block: <S294>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s294_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_m = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S294>/Switch' incorporates:
   *  Constant: '<S294>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S294>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S294>/motohawk_delta_time'
   *  Sum: '<S294>/Sum'
   */
  if (rtb_RelationalOperator11_d) {
    rtb_Switch_m = rtb_motohawk_delta_time_m + ButtonDelay1_DataStore();
  } else {
    rtb_Switch_m = 0.0;
  }

  /* End of Switch: '<S294>/Switch' */
  /* Logic: '<S283>/Logical Operator' incorporates:
   *  RelationalOperator: '<S283>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration7'
   */
  rtb_LogicalOperator_h = (rtb_RelationalOperator11_d && (rtb_Switch_m >=
    (Delay_DataStore())));

  /* RelationalOperator: '<S293>/Compare' incorporates:
   *  Constant: '<S293>/Constant'
   */
  rtb_RelationalOperator11_d = (Mooventure2016_Rev5_B.s288_Out == 5.0);

  /* S-Function Block: <S298>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s298_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_pj = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S298>/Switch' incorporates:
   *  Constant: '<S298>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S298>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S298>/motohawk_delta_time'
   *  Sum: '<S298>/Sum'
   */
  if (rtb_RelationalOperator11_d) {
    rtb_Switch_n = rtb_motohawk_delta_time_pj + ButtonDelay5_DataStore();
  } else {
    rtb_Switch_n = 0.0;
  }

  /* End of Switch: '<S298>/Switch' */

  /* Logic: '<S287>/Logical Operator' incorporates:
   *  RelationalOperator: '<S287>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration7'
   */
  rtb_LogicalOperator_f = (rtb_RelationalOperator11_d && (rtb_Switch_n >=
    (Delay_DataStore())));

  /* Logic: '<S73>/Logical Operator5' incorporates:
   *  Logic: '<S73>/Logical Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S73>/motohawk_calibration'
   *  S-Function (motohawk_sfun_fault_action): '<S73>/motohawk_fault_action3'
   */
  rtb_LogicalOperator5 = (((Cruise_Control_Enable_DataStore()) != 0.0) &&
    (!GetFaultActionStatus(6)));

  /* Stateflow: '<S73>/SystemState' */

  /* Gateway: Foreground/Control/Hybrid Control Code/Cruise Control/SystemState */
  /* During: Foreground/Control/Hybrid Control Code/Cruise Control/SystemState */
  if (Mooventure2016_Rev5_DWork.s91_is_active_c30_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Hybrid Control Code/Cruise Control/SystemState */
    Mooventure2016_Rev5_DWork.s91_is_active_c30_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S91>:4' */
    Mooventure2016_Rev5_DWork.s91_is_c30_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Off;
  } else {
    switch (Mooventure2016_Rev5_DWork.s91_is_c30_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Off:
      /* During 'Off': '<S91>:1' */
      if ((rtb_LogicalOperator_f == TRUE) && (rtb_LogicalOperator5 == TRUE)) {
        /* Transition: '<S91>:5' */
        Mooventure2016_Rev5_DWork.s91_is_c30_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_On;
      } else {
        Mooventure2016_Rev5_B.s91_System = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_On:
      /* During 'On': '<S91>:2' */
      if ((rtb_LogicalOperator_h == TRUE) || (rtb_LogicalOperator5 == FALSE)) {
        /* Transition: '<S91>:6' */
        Mooventure2016_Rev5_DWork.s91_is_c30_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Off;
      } else {
        Mooventure2016_Rev5_B.s91_System = TRUE;
      }
      break;

     default:
      /* Transition: '<S91>:4' */
      Mooventure2016_Rev5_DWork.s91_is_c30_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Off;
      break;
    }
  }

  /* End of Stateflow: '<S73>/SystemState' */

  /* Logic: '<S73>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S73>/motohawk_data_read1'
   */
  rtb_LogicalOperator5 = (CruiseOn_DataStore() &&
    Mooventure2016_Rev5_B.s91_System);

  /* Switch: '<S128>/Switch1' incorporates:
   *  Constant: '<S124>/Constant2'
   *  UnitDelay: '<S128>/Unit Delay'
   */
  if (Mooventure2016_Rev5_ConstB.s128_DataTypeConversion) {
    Mooventure2016_Rev5_B.s128_Switch1 = 0.0;
  } else {
    Mooventure2016_Rev5_B.s128_Switch1 =
      Mooventure2016_Rev5_DWork.s128_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S128>/Switch1' */
  /* S-Function Block: <S125>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ModifiedAmpSecIn_DataStore()) = Mooventure2016_Rev5_B.s128_Switch1;
    (ModifiedAmpSecIdx_DataStore()) = TablePrelookup_real_T
      (Mooventure2016_Rev5_B.s128_Switch1, (ModifiedAmpSecIdxArr_DataStore()), 4,
       (ModifiedAmpSecIdx_DataStore()));
    rtb_motohawk_prelookup = (ModifiedAmpSecIdx_DataStore());
  }

  /* S-Function Block: <S125>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup, (real_T *) ((TorqueLimMultiplierTbl_DataStore())),
       4);
    (TorqueLimMultiplier_DataStore()) = rtb_motohawk_interpolation_1d;
  }

  /* S-Function Block: <S123>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s123_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_h = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S123>/Product' incorporates:
   *  MinMax: '<S123>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S123>/motohawk_calibration'
   */
  rtb_Switch_h /= (rtb_Switch_h >= (Overcurrent_Tq_Lim_Filter_DataStore())) ||
    rtIsNaN((Overcurrent_Tq_Lim_Filter_DataStore())) ? rtb_Switch_h :
    (Overcurrent_Tq_Lim_Filter_DataStore());

  /* Sum: '<S126>/Sum1' incorporates:
   *  Constant: '<S126>/Constant'
   *  Product: '<S126>/Product'
   *  Product: '<S126>/Product1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S125>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S125>/motohawk_prelookup'
   *  Sum: '<S126>/Sum'
   *  UnitDelay: '<S126>/Unit Delay'
   */
  Mooventure2016_Rev5_B.s126_Sum1 = (1.0 - rtb_Switch_h) *
    Mooventure2016_Rev5_DWork.s126_UnitDelay_DSTATE +
    rtb_motohawk_interpolation_1d * rtb_Switch_h;

  /* Switch: '<S77>/Switch1' incorporates:
   *  Constant: '<S77>/Constant1'
   *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration1'
   */
  if ((CurrentLimitingEnabled_DataStore()) != 0.0) {
    rtb_Switch_h = Mooventure2016_Rev5_B.s126_Sum1;
  } else {
    rtb_Switch_h = 1.0;
  }

  /* End of Switch: '<S77>/Switch1' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S204>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4494p0004_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4494p0004_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s204_AgeCount + 1) >
        Mooventure2016_Rev5_B.s204_AgeCount)
      Mooventure2016_Rev5_B.s204_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0] & 0x0000000F)) ;
      Mooventure2016_Rev5_B.s204_Shift_Position = (real_T) tmp0;
      Mooventure2016_Rev5_B.s204_AgeCount = 0;
    }
  }

  /* MATLAB Function Block: '<S204>/Embedded MATLAB Function' */

  /* MATLAB Function 'Foreground/Inputs/Driver Inputs/Embedded MATLAB Function': '<S299>:1' */
  /*  Park, Reverse, Drive, Low */
  if (Mooventure2016_Rev5_B.s204_Shift_Position == 12.0) {
    /* '<S299>:1:4' */
    /* '<S299>:1:5' */
    Mooventure2016_Rev5_B.s299_posOut = 1.0;

    /*  in reverse */
    /* '<S299>:1:6' */
    rtb_UnitDelay_o = 0.0;
  } else if (Mooventure2016_Rev5_B.s204_Shift_Position == 8.0) {
    /* '<S299>:1:7' */
    /* '<S299>:1:8' */
    Mooventure2016_Rev5_B.s299_posOut = 3.0;

    /*  in drive */
    /* '<S299>:1:9' */
    rtb_UnitDelay_o = 0.0;
  } else if (Mooventure2016_Rev5_B.s204_Shift_Position == 4.0) {
    /* '<S299>:1:10' */
    /* '<S299>:1:11' */
    Mooventure2016_Rev5_B.s299_posOut = 3.0;

    /*  in ecoMode drive */
    /* '<S299>:1:12' */
    rtb_UnitDelay_o = 1.0;
  } else {
    /* '<S299>:1:14' */
    Mooventure2016_Rev5_B.s299_posOut = 2.0;

    /*  in neutral */
    /* '<S299>:1:15' */
    rtb_UnitDelay_o = 0.0;
  }

  /* End of MATLAB Function Block: '<S204>/Embedded MATLAB Function' */

  /* Outputs for Enabled SubSystem: '<S77>/Neutral' incorporates:
   *  EnablePort: '<S120>/Enable'
   */
  /* RelationalOperator: '<S114>/Compare' incorporates:
   *  Constant: '<S114>/Constant'
   *  Constant: '<S120>/Constant'
   */
  if (Mooventure2016_Rev5_B.s299_posOut == 2.0) {
    Mooventure2016_Rev5_B.s77_Torque_Direction = 0.0;
  }

  /* End of RelationalOperator: '<S114>/Compare' */
  /* End of Outputs for SubSystem: '<S77>/Neutral' */

  /* Outputs for Enabled SubSystem: '<S77>/Drive' incorporates:
   *  EnablePort: '<S118>/Enable'
   */
  /* RelationalOperator: '<S115>/Compare' incorporates:
   *  Constant: '<S115>/Constant'
   */
  if (Mooventure2016_Rev5_B.s299_posOut == 3.0) {
    if (!Mooventure2016_Rev5_DWork.s77_Drive_MODE) {
      Mooventure2016_Rev5_DWork.s77_Drive_MODE = TRUE;
    }

    /* If: '<S131>/If' incorporates:
     *  Constant: '<S118>/Constant1'
     *  Inport: '<S132>/In1'
     *  Inport: '<S133>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S131>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S131>/override_enable'
     */
    if ((Torque_Reverse_Override_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S131>/NewValue' incorporates:
       *  ActionPort: '<S132>/Action Port'
       */
      Mooventure2016_Rev5_B.s77_Torque_Direction =
        (Torque_Reverse_Override_new_DataStore());

      /* S-Function (motohawk_sfun_code_cover): '<S132>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(7);
      }

      /* End of Outputs for SubSystem: '<S131>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S131>/OldValue' incorporates:
       *  ActionPort: '<S133>/Action Port'
       */
      Mooventure2016_Rev5_B.s77_Torque_Direction = 1.0;

      /* S-Function (motohawk_sfun_code_cover): '<S133>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(8);
      }

      /* End of Outputs for SubSystem: '<S131>/OldValue' */
    }

    /* End of If: '<S131>/If' */
  } else {
    if (Mooventure2016_Rev5_DWork.s77_Drive_MODE) {
      /* Disable for Outport: '<S118>/IPT_Torque' */
      Mooventure2016_Rev5_B.s77_Torque_Direction = 0.0;
      Mooventure2016_Rev5_DWork.s77_Drive_MODE = FALSE;
    }
  }

  /* End of RelationalOperator: '<S115>/Compare' */
  /* End of Outputs for SubSystem: '<S77>/Drive' */

  /* RelationalOperator: '<S116>/Compare' incorporates:
   *  Constant: '<S116>/Constant'
   */
  rtb_Compare_nm = (Mooventure2016_Rev5_B.s299_posOut == 1.0);

  /* Outputs for Enabled SubSystem: '<S77>/Reverse' incorporates:
   *  EnablePort: '<S121>/Enable'
   */
  if (rtb_Compare_nm) {
    if (!Mooventure2016_Rev5_DWork.s77_Reverse_MODE) {
      Mooventure2016_Rev5_DWork.s77_Reverse_MODE = TRUE;
    }

    /* If: '<S135>/If' incorporates:
     *  Constant: '<S121>/Constant1'
     *  Inport: '<S136>/In1'
     *  Inport: '<S137>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S135>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S135>/override_enable'
     */
    if ((Torque_Reverse_Override69_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S135>/NewValue' incorporates:
       *  ActionPort: '<S136>/Action Port'
       */
      Mooventure2016_Rev5_B.s77_Torque_Direction =
        (Torque_Reverse_Override69_new_DataStore());

      /* S-Function (motohawk_sfun_code_cover): '<S136>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(9);
      }

      /* End of Outputs for SubSystem: '<S135>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S135>/OldValue' incorporates:
       *  ActionPort: '<S137>/Action Port'
       */
      Mooventure2016_Rev5_B.s77_Torque_Direction = -1.0;

      /* S-Function (motohawk_sfun_code_cover): '<S137>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(10);
      }

      /* End of Outputs for SubSystem: '<S135>/OldValue' */
    }

    /* End of If: '<S135>/If' */
  } else {
    if (Mooventure2016_Rev5_DWork.s77_Reverse_MODE) {
      /* Disable for Outport: '<S121>/IPT_Torque' */
      Mooventure2016_Rev5_B.s77_Torque_Direction = 0.0;
      Mooventure2016_Rev5_DWork.s77_Reverse_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S77>/Reverse' */
  /* S-Function Block: <S204>/motohawk_ain4 Resource: Throttle_Position */
  Mooventure2016_Rev5_B.s204_Throttle_Position =
    Throttle_Position_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* S-Function (motohawk_sfun_read_canmsg): '<S204>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4495p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4495p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s204_AgeCount_j + 1) >
        Mooventure2016_Rev5_B.s204_AgeCount_j)
      Mooventure2016_Rev5_B.s204_AgeCount_j++;
    if (msg_valid) {
      uint16_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      Mooventure2016_Rev5_B.s204_Brake_Position = (real_T) tmp0;
      Mooventure2016_Rev5_B.s204_AgeCount_j = 0;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S201>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4018p0004_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4018p0004_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s201_AgeCount + 1) >
        Mooventure2016_Rev5_B.s201_AgeCount)
      Mooventure2016_Rev5_B.s201_AgeCount++;
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
      Mooventure2016_Rev5_B.s201_JCS_PackIdentifier = (real_T) tmp0;
      Mooventure2016_Rev5_B.s201_PackState = (real_T) tmp1;
      Mooventure2016_Rev5_B.s201_PrechargeState = (real_T) tmp2;
      Mooventure2016_Rev5_B.s201_HVIL_Status = (real_T) tmp3;
      Mooventure2016_Rev5_B.s201_IsolationStatus = (real_T) tmp4;
      Mooventure2016_Rev5_B.s201_WakeSignal = (real_T) tmp5;
      Mooventure2016_Rev5_B.s201_SleepInhibited = (real_T) tmp6;
      Mooventure2016_Rev5_B.s201_CellBalanceingActive = (boolean_T) tmp7;
      Mooventure2016_Rev5_B.s201_MILState = (real_T) tmp8;
      Mooventure2016_Rev5_B.s201_StateOfCharge = ((real_T) tmp9) / ((real_T) 2);
      Mooventure2016_Rev5_B.s201_PS_RollingCounter = (real_T) tmp10;
      Mooventure2016_Rev5_B.s201_AgeCount = 0;
    }
  }

  /* S-Function Block: <S269>/motohawk_delta_time */
  rtb_Switch_mf = 10.0;

  /* Product: '<S269>/Product' incorporates:
   *  MinMax: '<S269>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S269>/motohawk_calibration'
   */
  rtb_Switch_mf /= (rtb_Switch_mf >= (SOCFilt_DataStore())) || rtIsNaN
    ((SOCFilt_DataStore())) ? rtb_Switch_mf : (SOCFilt_DataStore());

  /* Sum: '<S270>/Sum1' incorporates:
   *  Constant: '<S270>/Constant'
   *  Product: '<S270>/Product'
   *  Product: '<S270>/Product1'
   *  Sum: '<S270>/Sum'
   *  UnitDelay: '<S270>/Unit Delay'
   */
  rtb_Sum1 = (1.0 - rtb_Switch_mf) *
    Mooventure2016_Rev5_DWork.s270_UnitDelay_DSTATE +
    Mooventure2016_Rev5_B.s201_StateOfCharge * rtb_Switch_mf;

  /* Outputs for Atomic SubSystem: '<S76>/Embedded MATLAB Function' */
  /* MATLAB Function Block: '<S112>/Embedded MATLAB Function' incorporates:
   *  Logic: '<S76>/Logical Operator5'
   *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_data_read): '<S76>/motohawk_data_read'
   */

  /* MATLAB Function 'Foreground/Control/Hybrid Control Code/Hybrid state limits1/Embedded MATLAB Function/Embedded MATLAB Function': '<S113>:1' */
  if ((!Torque_Enable_DataStore()) || (rtb_Sum1 <= (SafetyModeEnterSOC_DataStore
        ()))) {
    /* '<S113>:1:2' */
    /* '<S113>:1:3' */
    rtb_UnitDelay_o = 0.0;
  } else if ((rtb_Sum1 > (SafetyModeEnterSOC_DataStore())) && (rtb_Sum1 <=
              (CrawlHomeEnterSOC_DataStore()))) {
    /* '<S113>:1:4' */
    /* '<S113>:1:5' */
    rtb_UnitDelay_o = 1.0;
  } else if ((rtb_UnitDelay_o == 1.0) && (rtb_Sum1 >
              (CrawlHomeEnterSOC_DataStore()))) {
    /* '<S113>:1:6' */
    /* '<S113>:1:7' */
    rtb_UnitDelay_o = 2.0;
  } else {
    /* '<S113>:1:9' */
    rtb_UnitDelay_o = 3.0;
  }

  /* End of MATLAB Function Block: '<S112>/Embedded MATLAB Function' */
  /* End of Outputs for SubSystem: '<S76>/Embedded MATLAB Function' */

  /* MATLAB Function Block: '<S9>/Embedded MATLAB Function' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S9>/motohawk_fault_action'
   */

  /* MATLAB Function 'Foreground/Control/Hybrid Control Code/Embedded MATLAB Function': '<S75>:1' */
  if (GetFaultActionStatus(13)) {
    /* '<S75>:1:2' */
    /* '<S75>:1:3' */
    Mooventure2016_Rev5_B.s75_state = 1.0;
  } else {
    /* '<S75>:1:5' */
    Mooventure2016_Rev5_B.s75_state = rtb_UnitDelay_o;
  }

  /* End of MATLAB Function Block: '<S9>/Embedded MATLAB Function' */
  /* If: '<S81>/If' incorporates:
   *  Inport: '<S144>/In1'
   *  Inport: '<S145>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S81>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S81>/override_enable'
   */
  if ((HybridStateOverride_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S81>/NewValue' incorporates:
     *  ActionPort: '<S144>/Action Port'
     */
    rtb_Merge_l = (HybridStateOverride_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S144>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(13);
    }

    /* End of Outputs for SubSystem: '<S81>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S81>/OldValue' incorporates:
     *  ActionPort: '<S145>/Action Port'
     */
    rtb_Merge_l = Mooventure2016_Rev5_B.s75_state;

    /* S-Function (motohawk_sfun_code_cover): '<S145>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(14);
    }

    /* End of Outputs for SubSystem: '<S81>/OldValue' */
  }

  /* End of If: '<S81>/If' */

  /* SwitchCase: '<S9>/Switch Case1' incorporates:
   *  Constant: '<S72>/Constant'
   *  Constant: '<S74>/Constant'
   *  Constant: '<S78>/Constant'
   *  Constant: '<S79>/Constant'
   *  Constant: '<S79>/Constant2'
   */
  switch ((int32_T)rtb_Merge_l) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S9>/Safety' incorporates:
     *  ActionPort: '<S79>/Action Port'
     */
    Mooventure2016_Rev5_B.s9_motor_Torque = 0.0;
    Mooventure2016_Rev5_B.s9_motor_Enable = 0.0;

    /* End of Outputs for SubSystem: '<S9>/Safety' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S9>/CrawlHomeMode' incorporates:
     *  ActionPort: '<S72>/Action Port'
     */
    /* DataTypeConversion: '<S72>/Data Type Conversion' */
    rtb_motor_Torque_g = (real_T)Mooventure2016_Rev5_B.s204_Throttle_Position;

    /* MATLAB Function Block: '<S72>/Gas Pedal Scaling' */
    Mooventure2016_Rev5_GasPedalScaling(rtb_motor_Torque_g,
      &Mooventure2016_Rev5_B.s72_sf_GasPedalScaling);

    /* S-Function Block: <S72>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (safetyMode_AccelIn_DataStore()) =
        Mooventure2016_Rev5_B.s72_sf_GasPedalScaling.s84_throttleOut;
      (safetyMode_AccelIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s72_sf_GasPedalScaling.s84_throttleOut,
         (safetyMode_AccelIdxArr_DataStore()), 21,
         (safetyMode_AccelIdx_DataStore()));
      rtb_motohawk_prelookup_m = (safetyMode_AccelIdx_DataStore());
    }

    /* S-Function Block: <S72>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_d = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_m, (real_T *)
         ((safetyMode_Accel_MapTbl_DataStore())), 21);
      (safetyMode_Accel_Map_DataStore()) = rtb_motohawk_interpolation_1d_d;
    }

    /* MATLAB Function Block: '<S72>/Brake Pedal Scaling' */
    Mooventure2016_Rev5_BrakePedalScaling
      (Mooventure2016_Rev5_B.s204_Brake_Position, rtb_Compare_nm,
       &Mooventure2016_Rev5_B.s72_sf_BrakePedalScaling);

    /* S-Function Block: <S72>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (safetyMode_BrakeIn_DataStore()) =
        Mooventure2016_Rev5_B.s72_sf_BrakePedalScaling.s82_brakeOut;
      (safetyMode_BrakeIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s72_sf_BrakePedalScaling.s82_brakeOut,
         (safetyMode_BrakeIdxArr_DataStore()), 21,
         (safetyMode_BrakeIdx_DataStore()));
      rtb_motohawk_prelookup1_o = (safetyMode_BrakeIdx_DataStore());
    }

    /* S-Function Block: <S72>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_n = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_o, (real_T *)
         ((safetyMode_Brake_MapTbl_DataStore())), 21);
      (safetyMode_Brake_Map_DataStore()) = rtb_motohawk_interpolation_1d1_n;
    }

    /* Product: '<S72>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S72>/motohawk_calibration7'
     */
    rtb_Product_j = (RPM_to_Wheel_Speed_Multiplier_safetyMode_DataStore()) *
      Mooventure2016_Rev5_B.s330_Merge;

    /* Stateflow: '<S72>/Chart' */
    Mooventure2016_Rev5_Chart(rtb_motohawk_interpolation_1d_d,
      rtb_motohawk_interpolation_1d1_n, rtb_Product_j,
      (accelStart_Pedal_safetyMode_DataStore()),
      (accelEnd_Pedal_safetyMode_DataStore()),
      (brakeStart_Pedal_safetyMode_DataStore()),
      (brakeEnd_Pedal_safetyMode_DataStore()),
      (regenStart_Speed_safetyMode_DataStore()),
      (regenEnd_Speed_safetyMode_DataStore()), (dragTorque_safetyMode_DataStore()),
      &Mooventure2016_Rev5_B.s72_sf_Chart,
      &Mooventure2016_Rev5_DWork.s72_sf_Chart);

    /* Product: '<S72>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S72>/motohawk_calibration8'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s72_sf_Chart.s83_driveTorque *
      (driveMaxTorque_safetyMode_DataStore());

    /* Sum: '<S85>/Add' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration2'
     */
    rtb_UnitDelay_m = (CrawlHomeEnterSOC_DataStore()) -
      (SafetyModeEnterSOC_DataStore());

    /* Product: '<S85>/Divide' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration1'
     *  Sum: '<S85>/Sum'
     */
    rtb_UnitDelay_m = ((rtb_Sum1 - (CrawlHomeEnterSOC_DataStore())) +
                       rtb_UnitDelay_m) / rtb_UnitDelay_m;

    /* Product: '<S85>/Product' incorporates:
     *  Product: '<S72>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S72>/motohawk_calibration9'
     *  Saturate: '<S85>/Saturation'
     *  Sum: '<S72>/Sum'
     */
    Mooventure2016_Rev5_B.s9_motor_Torque =
      (Mooventure2016_Rev5_B.s72_sf_Chart.s83_regenTorque *
       (regenMaxTorque_safetyMode_DataStore()) + rtb_UnitDelay_o) *
      (rtb_UnitDelay_m >= 1.0 ? 1.0 : rtb_UnitDelay_m <= 0.0 ? 0.0 :
       rtb_UnitDelay_m);
    Mooventure2016_Rev5_B.s9_motor_Enable = 1.0;

    /* End of Outputs for SubSystem: '<S9>/CrawlHomeMode' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S9>/EcoMode' incorporates:
     *  ActionPort: '<S74>/Action Port'
     */
    /* DataTypeConversion: '<S74>/Data Type Conversion' */
    rtb_motor_Torque_p = (real_T)Mooventure2016_Rev5_B.s204_Throttle_Position;

    /* MATLAB Function Block: '<S74>/Gas Pedal Scaling' */
    Mooventure2016_Rev5_GasPedalScaling(rtb_motor_Torque_p,
      &Mooventure2016_Rev5_B.s74_sf_GasPedalScaling);

    /* S-Function Block: <S74>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (EcoMode_AccelIn_DataStore()) =
        Mooventure2016_Rev5_B.s74_sf_GasPedalScaling.s84_throttleOut;
      (EcoMode_AccelIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s74_sf_GasPedalScaling.s84_throttleOut,
         (EcoMode_AccelIdxArr_DataStore()), 21, (EcoMode_AccelIdx_DataStore()));
      rtb_motohawk_prelookup_f = (EcoMode_AccelIdx_DataStore());
    }

    /* S-Function Block: <S74>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_n = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_f, (real_T *) ((EcoMode_Accel_MapTbl_DataStore())),
         21);
      (EcoMode_Accel_Map_DataStore()) = rtb_motohawk_interpolation_1d_n;
    }

    /* MATLAB Function Block: '<S74>/Brake Pedal Scaling' */
    Mooventure2016_Rev5_BrakePedalScaling
      (Mooventure2016_Rev5_B.s204_Brake_Position, rtb_Compare_nm,
       &Mooventure2016_Rev5_B.s74_sf_BrakePedalScaling);

    /* S-Function Block: <S74>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (EcoMode_BrakeIn_DataStore()) =
        Mooventure2016_Rev5_B.s74_sf_BrakePedalScaling.s82_brakeOut;
      (EcoMode_BrakeIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s74_sf_BrakePedalScaling.s82_brakeOut,
         (EcoMode_BrakeIdxArr_DataStore()), 21, (EcoMode_BrakeIdx_DataStore()));
      rtb_motohawk_prelookup1_p = (EcoMode_BrakeIdx_DataStore());
    }

    /* S-Function Block: <S74>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_p = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_p, (real_T *) ((EcoMode_Brake_MapTbl_DataStore())),
         21);
      (EcoMode_Brake_Map_DataStore()) = rtb_motohawk_interpolation_1d1_p;
    }

    /* Product: '<S74>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S74>/motohawk_calibration7'
     */
    rtb_Product_le = (RPM_to_Wheel_Speed_Multiplier_ecoMode_DataStore()) *
      Mooventure2016_Rev5_B.s330_Merge;

    /* Stateflow: '<S74>/Chart' */
    Mooventure2016_Rev5_Chart(rtb_motohawk_interpolation_1d_n,
      rtb_motohawk_interpolation_1d1_p, rtb_Product_le,
      (accelStart_Pedal_ecoMode_DataStore()), (accelEnd_Pedal_ecoMode_DataStore()),
                              (brakeStart_Pedal_ecoMode_DataStore()),
      (brakeEnd_Pedal_ecoMode_DataStore()), (regenStart_Speed_ecoMode_DataStore()),
                              (regenEnd_Speed_ecoMode_DataStore()),
      (dragTorque_ecoMode_DataStore()), &Mooventure2016_Rev5_B.s74_sf_Chart,
      &Mooventure2016_Rev5_DWork.s74_sf_Chart);

    /* Product: '<S74>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S74>/motohawk_calibration8'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s74_sf_Chart.s83_driveTorque *
      (driveMaxTorque_ecoMode_DataStore());

    /* Sum: '<S74>/Sum' incorporates:
     *  Product: '<S74>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S74>/motohawk_calibration9'
     */
    Mooventure2016_Rev5_B.s9_motor_Torque =
      Mooventure2016_Rev5_B.s74_sf_Chart.s83_regenTorque *
      (regenMaxTorque_ecoMode_DataStore()) + rtb_UnitDelay_o;
    Mooventure2016_Rev5_B.s9_motor_Enable = 1.0;

    /* End of Outputs for SubSystem: '<S9>/EcoMode' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S9>/SUVMode' incorporates:
     *  ActionPort: '<S78>/Action Port'
     */
    /* DataTypeConversion: '<S78>/Data Type Conversion' */
    rtb_motor_Torque = (real_T)Mooventure2016_Rev5_B.s204_Throttle_Position;

    /* MATLAB Function Block: '<S78>/Gas Pedal Scaling' */
    Mooventure2016_Rev5_GasPedalScaling(rtb_motor_Torque,
      &Mooventure2016_Rev5_B.s78_sf_GasPedalScaling);

    /* S-Function Block: <S78>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (SUVMode_AccelIn_DataStore()) =
        Mooventure2016_Rev5_B.s78_sf_GasPedalScaling.s84_throttleOut;
      (SUVMode_AccelIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s78_sf_GasPedalScaling.s84_throttleOut,
         (SUVMode_AccelIdxArr_DataStore()), 21, (SUVMode_AccelIdx_DataStore()));
      rtb_motohawk_prelookup_h = (SUVMode_AccelIdx_DataStore());
    }

    /* S-Function Block: <S78>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_c = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_h, (real_T *) ((SUVMode_Accel_MapTbl_DataStore())),
         21);
      (SUVMode_Accel_Map_DataStore()) = rtb_motohawk_interpolation_1d_c;
    }

    /* MATLAB Function Block: '<S78>/Brake Pedal Scaling' */
    Mooventure2016_Rev5_BrakePedalScaling
      (Mooventure2016_Rev5_B.s204_Brake_Position, rtb_Compare_nm,
       &Mooventure2016_Rev5_B.s78_sf_BrakePedalScaling);

    /* S-Function Block: <S78>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (SUVMode_BrakeIn_DataStore()) =
        Mooventure2016_Rev5_B.s78_sf_BrakePedalScaling.s82_brakeOut;
      (SUVMode_BrakeIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s78_sf_BrakePedalScaling.s82_brakeOut,
         (SUVMode_BrakeIdxArr_DataStore()), 21, (SUVMode_BrakeIdx_DataStore()));
      rtb_motohawk_prelookup1 = (SUVMode_BrakeIdx_DataStore());
    }

    /* S-Function Block: <S78>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1, (real_T *) ((SUVMode_Brake_MapTbl_DataStore())),
         21);
      (SUVMode_Brake_Map_DataStore()) = rtb_motohawk_interpolation_1d1;
    }

    /* Product: '<S78>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration7'
     */
    rtb_Product_dp = (RPM_to_Wheel_Speed_Multiplier_SUVMode_DataStore()) *
      Mooventure2016_Rev5_B.s330_Merge;

    /* Stateflow: '<S78>/Chart' */
    Mooventure2016_Rev5_Chart(rtb_motohawk_interpolation_1d_c,
      rtb_motohawk_interpolation_1d1, rtb_Product_dp,
      (accelStart_Pedal_SUVMode_DataStore()), (accelEnd_Pedal_SUVMode_DataStore()),
                              (brakeStart_Pedal_SUVMode_DataStore()),
      (brakeEnd_Pedal_SUVMode_DataStore()), (regenStart_Speed_SUVMode_DataStore()),
                              (regenEnd_Speed_SUVMode_DataStore()),
      (dragTorque_SUVMode_DataStore()), &Mooventure2016_Rev5_B.s78_sf_Chart,
      &Mooventure2016_Rev5_DWork.s78_sf_Chart);

    /* Product: '<S78>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration8'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s78_sf_Chart.s83_driveTorque *
      (driveMaxTorque_SUVMode_DataStore());

    /* Sum: '<S78>/Sum' incorporates:
     *  Product: '<S78>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration9'
     */
    Mooventure2016_Rev5_B.s9_motor_Torque =
      Mooventure2016_Rev5_B.s78_sf_Chart.s83_regenTorque *
      (regenMaxTorque_SUVMode_DataStore()) + rtb_UnitDelay_o;
    Mooventure2016_Rev5_B.s9_motor_Enable = 1.0;

    /* End of Outputs for SubSystem: '<S9>/SUVMode' */
    break;
  }

  /* End of SwitchCase: '<S9>/Switch Case1' */

  /* Product: '<S77>/Product' */
  Mooventure2016_Rev5_B.s77_IPT_Torque_Request = rtb_Switch_h *
    Mooventure2016_Rev5_B.s77_Torque_Direction *
    Mooventure2016_Rev5_B.s9_motor_Torque;

  /* S-Function Block: <S119>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s119_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_mf = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S119>/Product' incorporates:
   *  MinMax: '<S119>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration'
   */
  rtb_Switch_mf /= (rtb_Switch_mf >= (FiltConst_DataStore())) || rtIsNaN
    ((FiltConst_DataStore())) ? rtb_Switch_mf : (FiltConst_DataStore());

  /* Sum: '<S134>/Sum1' incorporates:
   *  Constant: '<S134>/Constant'
   *  Product: '<S134>/Product'
   *  Product: '<S134>/Product1'
   *  Sum: '<S134>/Sum'
   *  UnitDelay: '<S134>/Unit Delay'
   */
  rtb_Sum1_j = (1.0 - rtb_Switch_mf) *
    Mooventure2016_Rev5_DWork.s134_UnitDelay_DSTATE +
    Mooventure2016_Rev5_B.s77_IPT_Torque_Request * rtb_Switch_mf;

  /* Saturate: '<S77>/Saturation' */
  Mooventure2016_Rev5_B.s77_Saturation = rtb_Sum1_j >= 2500.0 ? 2500.0 :
    rtb_Sum1_j <= -2500.0 ? -2500.0 : rtb_Sum1_j;

  /* If: '<S122>/If' incorporates:
   *  Inport: '<S138>/In1'
   *  Inport: '<S139>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S122>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S122>/override_enable'
   */
  if ((Torque_Request_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S122>/NewValue' incorporates:
     *  ActionPort: '<S138>/Action Port'
     */
    rtb_UnitDelay_m = (Torque_Request_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S138>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(11);
    }

    /* End of Outputs for SubSystem: '<S122>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S122>/OldValue' incorporates:
     *  ActionPort: '<S139>/Action Port'
     */
    rtb_UnitDelay_m = Mooventure2016_Rev5_B.s77_Saturation;

    /* S-Function (motohawk_sfun_code_cover): '<S139>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(12);
    }

    /* End of Outputs for SubSystem: '<S122>/OldValue' */
  }

  /* End of If: '<S122>/If' */

  /* Switch: '<S88>/Switch' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S88>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S88>/motohawk_prelookup'
   */
  if (rtb_LogicalOperator5) {
    /* S-Function Block: <S88>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (Cruise_Control_PreIn_DataStore()) = Mooventure2016_Rev5_B.s106_MinMax1;
      (Cruise_Control_PreIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s106_MinMax1, (Cruise_Control_PreIdxArr_DataStore
          ()), 121, (Cruise_Control_PreIdx_DataStore()));
      rtb_motohawk_prelookup_k = (Cruise_Control_PreIdx_DataStore());
    }

    /* S-Function Block: <S88>/motohawk_interpolation_1d */
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

  /* End of Switch: '<S88>/Switch' */

  /* MATLAB Function Block: '<S80>/Torque Limiter' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration1'
   */

  /* MATLAB Function 'Foreground/Control/Hybrid Control Code/Traction Control/Torque Limiter': '<S143>:1' */
  if (fabs(rtb_UnitDelay_m) < (Traction_Control_Max_Torque_DataStore())) {
    /* '<S143>:1:3' */
    /* '<S143>:1:4' */
    rtb_UnitDelay_o = rtb_UnitDelay_m;
  } else if (fabs(rtb_UnitDelay_m) >= (Traction_Control_Max_Torque_DataStore()))
  {
    /* '<S143>:1:5' */
    /* '<S143>:1:6' */
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
    /* '<S143>:1:8' */
    rtb_UnitDelay_o = rtb_UnitDelay_m;
  }

  /* End of MATLAB Function Block: '<S80>/Torque Limiter' */
  /* Switch: '<S80>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration'
   */
  if ((Traction_Control_Enable_DataStore()) >= 1.0) {
    Mooventure2016_Rev5_B.s80_Switch = rtb_UnitDelay_o;
  } else {
    Mooventure2016_Rev5_B.s80_Switch = rtb_UnitDelay_m;
  }

  /* End of Switch: '<S80>/Switch' */
  /* If: '<S376>/If' incorporates:
   *  Inport: '<S384>/In1'
   *  Inport: '<S385>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S376>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S376>/override_enable'
   */
  if ((ACC_torq_rqstd_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S376>/NewValue' incorporates:
     *  ActionPort: '<S384>/Action Port'
     */
    rtb_Merge_c = (ACC_torq_rqstd_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S384>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(99);
    }

    /* End of Outputs for SubSystem: '<S376>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S376>/OldValue' incorporates:
     *  ActionPort: '<S385>/Action Port'
     */
    rtb_Merge_c = Mooventure2016_Rev5_B.s80_Switch;

    /* S-Function (motohawk_sfun_code_cover): '<S385>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(100);
    }

    /* End of Outputs for SubSystem: '<S376>/OldValue' */
  }

  /* End of If: '<S376>/If' */

  /* Abs: '<S366>/Abs' */
  rtb_Switch_mf = fabs(Mooventure2016_Rev5_B.s80_Switch);

  /* Product: '<S366>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration'
   */
  Mooventure2016_Rev5_B.s366_Pct_whl_trq_desired = rtb_Switch_mf /
    (Max_Motor_Torque_DataStore());

  /* If: '<S377>/If' incorporates:
   *  Inport: '<S386>/In1'
   *  Inport: '<S387>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S377>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S377>/override_enable'
   */
  if ((Pct_whl_trq_desired_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S377>/NewValue' incorporates:
     *  ActionPort: '<S386>/Action Port'
     */
    rtb_Merge_lu = (Pct_whl_trq_desired_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S386>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(101);
    }

    /* End of Outputs for SubSystem: '<S377>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S377>/OldValue' incorporates:
     *  ActionPort: '<S387>/Action Port'
     */
    rtb_Merge_lu = Mooventure2016_Rev5_B.s366_Pct_whl_trq_desired;

    /* S-Function (motohawk_sfun_code_cover): '<S387>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(102);
    }

    /* End of Outputs for SubSystem: '<S377>/OldValue' */
  }

  /* End of If: '<S377>/If' */

  /* MATLAB Function Block: '<S366>/Data Correction Motor ABS' */
  Mooventure2016_Rev5_DataCorrectionMotorFault
    (Mooventure2016_Rev5_B.s206_IPT_WheelTorqueDelivered,
     &Mooventure2016_Rev5_B.s366_sf_DataCorrectionMotorABS);

  /* If: '<S378>/If' incorporates:
   *  Inport: '<S388>/In1'
   *  Inport: '<S389>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S378>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S378>/override_enable'
   */
  if ((Power_train_torq_actual_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S378>/NewValue' incorporates:
     *  ActionPort: '<S388>/Action Port'
     */
    rtb_Merge_ny = (Power_train_torq_actual_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S388>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(103);
    }

    /* End of Outputs for SubSystem: '<S378>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S378>/OldValue' incorporates:
     *  ActionPort: '<S389>/Action Port'
     */
    rtb_Merge_ny =
      Mooventure2016_Rev5_B.s366_sf_DataCorrectionMotorABS.s66_torqueOut;

    /* S-Function (motohawk_sfun_code_cover): '<S389>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(104);
    }

    /* End of Outputs for SubSystem: '<S378>/OldValue' */
  }

  /* End of If: '<S378>/If' */

  /* MATLAB Function Block: '<S366>/Shift Position Conditioner' */

  /* MATLAB Function 'Foreground/Outputs/ABS Outputs/Shift Position Conditioner': '<S375>:1' */
  if (Mooventure2016_Rev5_B.s299_posOut == 1.0) {
    /* '<S375>:1:3' */
    /* '<S375>:1:4' */
    Mooventure2016_Rev5_B.s375_dirOut = 0.0;
  } else {
    /* '<S375>:1:6' */
    Mooventure2016_Rev5_B.s375_dirOut = 1.0;
  }

  /* End of MATLAB Function Block: '<S366>/Shift Position Conditioner' */
  /* If: '<S379>/If' incorporates:
   *  Inport: '<S390>/In1'
   *  Inport: '<S391>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S379>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S379>/override_enable'
   */
  if ((prndl_dir_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S379>/NewValue' incorporates:
     *  ActionPort: '<S390>/Action Port'
     */
    rtb_Merge_e = (prndl_dir_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S390>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(105);
    }

    /* End of Outputs for SubSystem: '<S379>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S379>/OldValue' incorporates:
     *  ActionPort: '<S391>/Action Port'
     */
    rtb_Merge_e = Mooventure2016_Rev5_B.s375_dirOut;

    /* S-Function (motohawk_sfun_code_cover): '<S391>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(106);
    }

    /* End of Outputs for SubSystem: '<S379>/OldValue' */
  }

  /* End of If: '<S379>/If' */

  /* If: '<S380>/If' incorporates:
   *  Inport: '<S392>/In1'
   *  Inport: '<S393>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S380>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S380>/override_enable'
   */
  if ((regen_torq_limit_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S380>/NewValue' incorporates:
     *  ActionPort: '<S392>/Action Port'
     */
    rtb_Merge_nz = (regen_torq_limit_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S392>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(107);
    }

    /* End of Outputs for SubSystem: '<S380>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S380>/OldValue' incorporates:
     *  ActionPort: '<S393>/Action Port'
     */
    rtb_Merge_nz = (Max_Regen_Torque_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S393>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(108);
    }

    /* End of Outputs for SubSystem: '<S380>/OldValue' */
  }

  /* End of If: '<S380>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S366>/Send CAN Messages' */
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

  /* If: '<S382>/If' incorporates:
   *  Inport: '<S396>/In1'
   *  Inport: '<S397>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S382>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S382>/override_enable'
   */
  if ((Commanded_gen_torq_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S382>/NewValue' incorporates:
     *  ActionPort: '<S396>/Action Port'
     */
    rtb_Merge_o = (Commanded_gen_torq_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S396>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(111);
    }

    /* End of Outputs for SubSystem: '<S382>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S382>/OldValue' incorporates:
     *  ActionPort: '<S397>/Action Port'
     */
    rtb_Merge_o = (Commanded_gen_trq_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S397>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(112);
    }

    /* End of Outputs for SubSystem: '<S382>/OldValue' */
  }

  /* End of If: '<S382>/If' */

  /* Product: '<S366>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration4'
   */
  Mooventure2016_Rev5_B.s366_Commanded_mot_torq =
    Mooventure2016_Rev5_B.s80_Switch / (Commanded_motor_trq_div_DataStore());

  /* If: '<S383>/If' incorporates:
   *  Inport: '<S398>/In1'
   *  Inport: '<S399>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S383>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S383>/override_enable'
   */
  if ((Commanded_motor_torq_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S383>/NewValue' incorporates:
     *  ActionPort: '<S398>/Action Port'
     */
    rtb_Merge_er = (Commanded_motor_torq_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S398>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(113);
    }

    /* End of Outputs for SubSystem: '<S383>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S383>/OldValue' incorporates:
     *  ActionPort: '<S399>/Action Port'
     */
    rtb_Merge_er = Mooventure2016_Rev5_B.s366_Commanded_mot_torq;

    /* S-Function (motohawk_sfun_code_cover): '<S399>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(114);
    }

    /* End of Outputs for SubSystem: '<S383>/OldValue' */
  }

  /* End of If: '<S383>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S366>/Send CAN Messages2' */
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

  /* S-Function (motohawk_sfun_probe): '<S366>/motohawk_probe4' */
  (regen_torq_limit_prb_DataStore()) = (Max_Regen_Torque_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S366>/motohawk_probe6' */
  (Commanded_gen_torq_Prb_DataStore()) = (Commanded_gen_trq_DataStore());

  /* If: '<S381>/If' incorporates:
   *  Inport: '<S394>/In1'
   *  Inport: '<S395>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S381>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S381>/override_enable'
   */
  if ((Engine_On_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S381>/NewValue' incorporates:
     *  ActionPort: '<S394>/Action Port'
     */
    rtb_Merge_a = (Engine_On_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S394>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(109);
    }

    /* End of Outputs for SubSystem: '<S381>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S381>/OldValue' incorporates:
     *  ActionPort: '<S395>/Action Port'
     */
    rtb_Merge_a = (Engine_On_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S395>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(110);
    }

    /* End of Outputs for SubSystem: '<S381>/OldValue' */
  }

  /* End of If: '<S381>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S366>/Send CAN Messages1' */
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

  /* S-Function (motohawk_sfun_probe): '<S366>/motohawk_probe5' */
  (Engine_On_Prb_DataStore()) = (Engine_On_DataStore());

  /* Logic: '<S367>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S367>/motohawk_calibration1'
   */
  rtb_Ignition = !((Batt_Ign_Cal_DataStore()) != 0.0);

  /* S-Function Block: <S17>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s17_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_c = ((real_T) delta) * 0.000001;
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S201>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4021p0004_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4021p0004_Receive(0, &msg_id, 0, msg_data);
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
      Mooventure2016_Rev5_B.s201_BatteryVoltage = ((real_T) tmp0) / ((real_T) 10);
      Mooventure2016_Rev5_B.s201_BatteryCurrent = (((real_T) tmp1) / ((real_T)
        10)) + ((real_T) -500);
      Mooventure2016_Rev5_B.s201_BusVoltage = ((real_T) tmp2) / ((real_T) 10);
      Mooventure2016_Rev5_B.s201_PVC_RollingCounter = (real_T) tmp3;
    }
  }

  /* S-Function Block: <S271>/motohawk_delta_time */
  rtb_Switch_mf = 10.0;

  /* Product: '<S271>/Product' incorporates:
   *  MinMax: '<S271>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S271>/motohawk_calibration'
   */
  rtb_Switch_mf /= (rtb_Switch_mf >= (VFilt_DataStore())) || rtIsNaN
    ((VFilt_DataStore())) ? rtb_Switch_mf : (VFilt_DataStore());

  /* Sum: '<S272>/Sum1' incorporates:
   *  Constant: '<S272>/Constant'
   *  Product: '<S272>/Product'
   *  Product: '<S272>/Product1'
   *  Sum: '<S272>/Sum'
   *  UnitDelay: '<S272>/Unit Delay'
   */
  rtb_Sum1_c = (1.0 - rtb_Switch_mf) *
    Mooventure2016_Rev5_DWork.s272_UnitDelay_DSTATE +
    Mooventure2016_Rev5_B.s201_BatteryVoltage * rtb_Switch_mf;

  /* If: '<S268>/If' incorporates:
   *  Inport: '<S281>/In1'
   *  Inport: '<S282>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S268>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S268>/override_enable'
   */
  if ((Battery_Voltage_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S268>/NewValue' incorporates:
     *  ActionPort: '<S281>/Action Port'
     */
    rtb_Merge_o0 = (Battery_Voltage_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S281>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(55);
    }

    /* End of Outputs for SubSystem: '<S268>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S268>/OldValue' incorporates:
     *  ActionPort: '<S282>/Action Port'
     */
    rtb_Merge_o0 = rtb_Sum1_c;

    /* S-Function (motohawk_sfun_code_cover): '<S282>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(56);
    }

    /* End of Outputs for SubSystem: '<S268>/OldValue' */
  }

  /* End of If: '<S268>/If' */

  /* Logic: '<S6>/Logical Operator2' incorporates:
   *  Constant: '<S6>/Constant'
   *  RelationalOperator: '<S6>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S6>/motohawk_calibration'
   */
  rtb_RelationalOperator11_d = ((Automatic_Battery_Bootup_DataStore()) &&
    (rtb_Merge_o0 > 50.0));

  /* Switch: '<S17>/Switch' incorporates:
   *  Constant: '<S17>/Constant'
   *  Logic: '<S14>/Logical Operator7'
   *  S-Function (motohawk_sfun_data_read): '<S17>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S17>/motohawk_delta_time'
   *  Sum: '<S17>/Sum'
   */
  if (!rtb_RelationalOperator11_d) {
    rtb_Switch_mf = rtb_motohawk_delta_time_c + Voltage_Filt_DataStore();
  } else {
    rtb_Switch_mf = 0.0;
  }

  /* End of Switch: '<S17>/Switch' */
  /* Logic: '<S14>/Logical Operator8' incorporates:
   *  Logic: '<S14>/Logical Operator1'
   *  RelationalOperator: '<S14>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S14>/motohawk_calibration2'
   */
  rtb_LogicalOperator8 = ((!(rtb_Switch_mf >= (Voltage_Filt_Cal_DataStore()))) ||
    rtb_RelationalOperator11_d);

  /* S-Function Block: <S16>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s16_motohawk_delta_time_DWORK1, NULL);
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

  /* If: '<S15>/If' incorporates:
   *  Inport: '<S19>/In1'
   *  Inport: '<S20>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S15>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S15>/override_enable'
   */
  if ((Shutdown_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S15>/NewValue' incorporates:
     *  ActionPort: '<S19>/Action Port'
     */
    Mooventure2016_Rev5_B.s15_Merge = (Shutdown_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S19>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Battery/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(1);
    }

    /* End of Outputs for SubSystem: '<S15>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S15>/OldValue' incorporates:
     *  ActionPort: '<S20>/Action Port'
     */
    Mooventure2016_Rev5_B.s15_Merge = rtb_LogicalOperator5;

    /* S-Function (motohawk_sfun_code_cover): '<S20>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Battery/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(2);
    }

    /* End of Outputs for SubSystem: '<S15>/OldValue' */
  }

  /* End of If: '<S15>/If' */

  /* Switch: '<S16>/Switch' incorporates:
   *  Constant: '<S16>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S16>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S16>/motohawk_delta_time'
   *  Sum: '<S16>/Sum'
   */
  if (Mooventure2016_Rev5_B.s15_Merge) {
    rtb_Switch_h = rtb_motohawk_delta_time_n + Contactor_Disable_Timer_DataStore
      ();
  } else {
    rtb_Switch_h = 0.0;
  }

  /* End of Switch: '<S16>/Switch' */
  /* Logic: '<S14>/Logical Operator2' incorporates:
   *  Logic: '<S14>/Logical Operator6'
   *  RelationalOperator: '<S14>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S14>/motohawk_calibration'
   */
  Mooventure2016_Rev5_B.s14_LogicalOperator2 = ((rtb_LogicalOperator8 &&
    (!(rtb_Switch_h >= (Contactor_Disable_Delay_DataStore())))));

  /* DataTypeConversion: '<S367>/Data Type Conversion' */
  Mooventure2016_Rev5_B.s367_ConnectCommand = (int8_T)
    Mooventure2016_Rev5_B.s14_LogicalOperator2;

  /* If: '<S400>/If' incorporates:
   *  Inport: '<S402>/In1'
   *  Inport: '<S403>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S400>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S400>/override_enable'
   */
  if ((Batt_Connect_Cmd_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S400>/NewValue' incorporates:
     *  ActionPort: '<S402>/Action Port'
     */
    rtb_Merge_iq = ((int8_T)(Batt_Connect_Cmd_ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S402>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(115);
    }

    /* End of Outputs for SubSystem: '<S400>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S400>/OldValue' incorporates:
     *  ActionPort: '<S403>/Action Port'
     */
    rtb_Merge_iq = Mooventure2016_Rev5_B.s367_ConnectCommand;

    /* S-Function (motohawk_sfun_code_cover): '<S403>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(116);
    }

    /* End of Outputs for SubSystem: '<S400>/OldValue' */
  }

  /* End of If: '<S400>/If' */

  /* Logic: '<S367>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S367>/motohawk_calibration'
   */
  Mooventure2016_Rev5_B.s367_IsolationMeasurementEnable =
    !((Batt_Isolation_det_Cal_DataStore()) != 0.0);

  /* If: '<S401>/If' incorporates:
   *  Inport: '<S404>/In1'
   *  Inport: '<S405>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S401>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S401>/override_enable'
   */
  if ((Isolation_Measure_Enable_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S401>/NewValue' incorporates:
     *  ActionPort: '<S404>/Action Port'
     */
    rtb_Merge_kj = (Isolation_Measure_Enable_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S404>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(117);
    }

    /* End of Outputs for SubSystem: '<S401>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S401>/OldValue' incorporates:
     *  ActionPort: '<S405>/Action Port'
     */
    rtb_Merge_kj = Mooventure2016_Rev5_B.s367_IsolationMeasurementEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S405>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(118);
    }

    /* End of Outputs for SubSystem: '<S401>/OldValue' */
  }

  /* End of If: '<S401>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S367>/Send CAN Messages' */
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
        if (Mooventure2016_Rev5_ConstB.s367_OdometerValue < 0.0000000000F) {
          tmp3 = (uint32_T)(0UL);
        } else if (Mooventure2016_Rev5_ConstB.s367_OdometerValue >
                   1677721.5000000000F) {
          tmp3 = (uint32_T)(16777215UL);
        } else {
          tmp3 = (uint32_T)(Mooventure2016_Rev5_ConstB.s367_OdometerValue *
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

  /* S-Function Block: <S243>/motohawk_ain2 Resource: Radiator_Blend_Position */
  Mooventure2016_Rev5_B.s243_motohawk_ain2_o1 =
    Radiator_Blend_Position_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S248>/If' incorporates:
   *  Inport: '<S253>/In1'
   *  Inport: '<S254>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S248>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S248>/override_enable'
   */
  if ((Radiator_Blend_Valve_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S248>/NewValue' incorporates:
     *  ActionPort: '<S253>/Action Port'
     */
    rtb_Merge_bn = ((uint16_T)(Radiator_Blend_Valve_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S253>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(39);
    }

    /* End of Outputs for SubSystem: '<S248>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S248>/OldValue' incorporates:
     *  ActionPort: '<S254>/Action Port'
     */
    rtb_Merge_bn = Mooventure2016_Rev5_B.s243_motohawk_ain2_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S254>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(40);
    }

    /* End of Outputs for SubSystem: '<S248>/OldValue' */
  }

  /* End of If: '<S248>/If' */

  /* S-Function Block: <S247>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s247_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_pm = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S247>/Product' incorporates:
   *  MinMax: '<S247>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration'
   */
  rtb_Switch_pm /= (rtb_Switch_pm >= (RadLowPass_DataStore())) || rtIsNaN
    ((RadLowPass_DataStore())) ? rtb_Switch_pm : (RadLowPass_DataStore());

  /* Sum: '<S252>/Sum1' incorporates:
   *  Constant: '<S252>/Constant'
   *  DataTypeConversion: '<S243>/Data Type Conversion1'
   *  Product: '<S252>/Product'
   *  Product: '<S252>/Product1'
   *  Sum: '<S252>/Sum'
   *  UnitDelay: '<S252>/Unit Delay'
   */
  rtb_Sum1_b = (1.0 - rtb_Switch_pm) *
    Mooventure2016_Rev5_DWork.s252_UnitDelay_DSTATE + (real_T)rtb_Merge_bn *
    rtb_Switch_pm;

  /* S-Function (motohawk_sfun_read_canmsg): '<S205>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4553p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4553p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s205_AgeCount + 1) >
        Mooventure2016_Rev5_B.s205_AgeCount)
      Mooventure2016_Rev5_B.s205_AgeCount++;
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
      Mooventure2016_Rev5_B.s205_InputVoltage = ((real_T) tmp0) * ((real_T) 2);
      Mooventure2016_Rev5_B.s205_OutputVoltage = ((real_T) tmp1) * ((real_T) 2);
      Mooventure2016_Rev5_B.s205_InputCurrentLimitMax = ((real_T) tmp2) /
        ((real_T) 2);
      Mooventure2016_Rev5_B.s205_InputCurrent = ((real_T) tmp3) / ((real_T) 2);
      Mooventure2016_Rev5_B.s205_OutputCurrent = ((real_T) tmp4) / ((real_T) 2);
      Mooventure2016_Rev5_B.s205_Eaton_HV_Charger_Temperature = ((real_T) tmp5)
        + ((real_T) -40);
      Mooventure2016_Rev5_B.s205_IgnitionStatus = (boolean_T) tmp6;
      Mooventure2016_Rev5_B.s205_ChargerState = (real_T) tmp7;
      Mooventure2016_Rev5_B.s205_FaultSeverityIndicator = (boolean_T) tmp8;
      Mooventure2016_Rev5_B.s205_MessageCounter = (real_T) tmp9;
      Mooventure2016_Rev5_B.s205_MessageChecksum = (real_T) tmp10;
      Mooventure2016_Rev5_B.s205_AgeCount = 0;
    }
  }

  /* If: '<S305>/If' incorporates:
   *  Inport: '<S317>/In1'
   *  Inport: '<S318>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S305>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S305>/override_enable'
   */
  if ((Eaton_HV_Charger_Temperature_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S305>/NewValue' incorporates:
     *  ActionPort: '<S317>/Action Port'
     */
    rtb_Merge_oq = (Eaton_HV_Charger_Temperature_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S317>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(63);
    }

    /* End of Outputs for SubSystem: '<S305>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S305>/OldValue' incorporates:
     *  ActionPort: '<S318>/Action Port'
     */
    rtb_Merge_oq = Mooventure2016_Rev5_B.s205_Eaton_HV_Charger_Temperature;

    /* S-Function (motohawk_sfun_code_cover): '<S318>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(64);
    }

    /* End of Outputs for SubSystem: '<S305>/OldValue' */
  }

  /* End of If: '<S305>/If' */

  /* RelationalOperator: '<S7>/1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration'
   */
  rtb_LogicalOperator5 = (rtb_Merge_oq >= (Pump_On_Temp_DataStore()));

  /* S-Function (motohawk_sfun_read_canmsg): '<S206>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4635p0005_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4635p0005_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s206_AgeCount_m + 1) >
        Mooventure2016_Rev5_B.s206_AgeCount_m)
      Mooventure2016_Rev5_B.s206_AgeCount_m++;
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
      Mooventure2016_Rev5_B.s206_IPT_InverterTemperature = ((real_T) tmp0) +
        ((real_T) -40);
      Mooventure2016_Rev5_B.s206_IPT_MotorTemperature = ((real_T) tmp1) +
        ((real_T) -40);
      Mooventure2016_Rev5_B.s206_IPT_MaxTorqueAvailGen = (real_T) tmp2;
      Mooventure2016_Rev5_B.s206_IPT_MaxTorqueAvailMotor = (real_T) tmp3;
      Mooventure2016_Rev5_B.s206_IPT_HVDCVoltage = (real_T) tmp4;
      Mooventure2016_Rev5_B.s206_IPT_ErrorCategory = (real_T) tmp5;
      Mooventure2016_Rev5_B.s206_IPT_IPTReady = (real_T) tmp6;
      Mooventure2016_Rev5_B.s206_IPT_IPTAwake = (real_T) tmp7;
      Mooventure2016_Rev5_B.s206_IPT_MotorReady = (boolean_T) tmp8;
      Mooventure2016_Rev5_B.s206_IPT_MaxWasteAvailable = ((real_T) tmp9) *
        ((real_T) 50);
      Mooventure2016_Rev5_B.s206_AgeCount_m = 0;
    }
  }

  /* RelationalOperator: '<S7>/2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration'
   */
  rtb_LogicalOperator8 = (Mooventure2016_Rev5_B.s206_IPT_InverterTemperature >=
                          (Pump_On_Temp_DataStore()));

  /* S-Function (motohawk_sfun_read_canmsg): '<S201>/Read CAN Message4' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4022p0004_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4022p0004_Receive(0, &msg_id, 0, msg_data);
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
      Mooventure2016_Rev5_B.s201_MaxCellVoltage = ((real_T) tmp0) / ((real_T)
        1000);
      Mooventure2016_Rev5_B.s201_MinCellVoltage = ((real_T) tmp1) / ((real_T)
        1000);
      Mooventure2016_Rev5_B.s201_MaxCellTemperature = (((real_T) tmp2) /
        ((real_T) 2)) + ((real_T) -40);
      Mooventure2016_Rev5_B.s201_MinCellTemperature = (((real_T) tmp3) /
        ((real_T) 2)) + ((real_T) -40);
      Mooventure2016_Rev5_B.s201_CoolantTemperature = (((real_T) tmp4) /
        ((real_T) 2)) + ((real_T) -40);
      Mooventure2016_Rev5_B.s201_DPI_RollingCounter = (real_T) tmp5;
    }
  }

  /* Logic: '<S7>/Logical Operator7' incorporates:
   *  Logic: '<S7>/Hot'
   *  RelationalOperator: '<S7>/3'
   *  RelationalOperator: '<S7>/4'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration'
   *  S-Function (motohawk_sfun_fault_action): '<S7>/motohawk_fault_action1'
   */
  rtb_LogicalOperator8 = (GetFaultActionStatus(11) || (rtb_LogicalOperator5 ||
    rtb_LogicalOperator8 || (Mooventure2016_Rev5_B.s201_MinCellTemperature >=
    (Pump_On_Temp_DataStore())) ||
    (Mooventure2016_Rev5_B.s201_MaxCellTemperature >= (Pump_On_Temp_DataStore()))));

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
    (Mooventure2016_Rev5_B.s206_IPT_InverterTemperature <=
     (Too_Cold_Temp_DataStore())) ||
    (Mooventure2016_Rev5_B.s201_MinCellTemperature <= (Too_Cold_Temp_DataStore()))
    || (Mooventure2016_Rev5_B.s201_MaxCellTemperature <=
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
    (Mooventure2016_Rev5_B.s206_IPT_InverterTemperature >=
     (Warmed_Up_Temp_DataStore())) &&
    (Mooventure2016_Rev5_B.s201_MinCellTemperature >= (Warmed_Up_Temp_DataStore()))
    && (Mooventure2016_Rev5_B.s201_MaxCellTemperature >=
        (Warmed_Up_Temp_DataStore()))));

  /* S-Function (motohawk_sfun_read_canmsg): '<S204>/Read CAN Message6' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4497p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4497p0001_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[1] & 0x0000000F)) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[0] & 0x0000000F)) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[3] & 0x0000000F)) ;
      ((uint8_T *)(&tmp3))[0] = ((msg_data[2] & 0x0000000F)) ;
      Mooventure2016_Rev5_B.s204_DRIVER_1 = (real_T) tmp0;
      Mooventure2016_Rev5_B.s204_DRIVER_10 = (real_T) tmp1;
      Mooventure2016_Rev5_B.s204_PASSENGER_1 = (real_T) tmp2;
      Mooventure2016_Rev5_B.s204_PASSENGER_10 = (real_T) tmp3;
    }
  }

  /* MATLAB Function Block: '<S204>/Embedded MATLAB Function1' */

  /* MATLAB Function 'Foreground/Inputs/Driver Inputs/Embedded MATLAB Function1': '<S300>:1' */
  /* '<S300>:1:3' */
  Mooventure2016_Rev5_B.s300_driverTemp = Mooventure2016_Rev5_B.s204_DRIVER_10 *
    10.0 + Mooventure2016_Rev5_B.s204_DRIVER_1;

  /* RelationalOperator: '<S7>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration10'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s300_driverTemp >
    (Heat_On_Driver_Threshold_DataStore()));

  /* S-Function Block: <S243>/motohawk_ain4 Resource: Heater_Temp */
  Mooventure2016_Rev5_B.s243_motohawk_ain4_o1 = Heater_Temp_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S249>/If' incorporates:
   *  Inport: '<S255>/In1'
   *  Inport: '<S256>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S249>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S249>/override_enable'
   */
  if ((Heater_Temp_Raw_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S249>/NewValue' incorporates:
     *  ActionPort: '<S255>/Action Port'
     */
    rtb_Merge_bn = ((uint16_T)(Heater_Temp_Raw_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S255>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(41);
    }

    /* End of Outputs for SubSystem: '<S249>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S249>/OldValue' incorporates:
     *  ActionPort: '<S256>/Action Port'
     */
    rtb_Merge_bn = Mooventure2016_Rev5_B.s243_motohawk_ain4_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S256>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(42);
    }

    /* End of Outputs for SubSystem: '<S249>/OldValue' */
  }

  /* End of If: '<S249>/If' */

  /* DataTypeConversion: '<S243>/Data Type Conversion2' */
  rtb_Heater_Temp_Raw = rtb_Merge_bn;

  /* MATLAB Function Block: '<S243>/Embedded MATLAB Function' */

  /* MATLAB Function 'Foreground/Inputs/Analog Inputs/Coolant/Embedded MATLAB Function': '<S245>:1' */
  /* '<S245>:1:3' */
  Mooventure2016_Rev5_B.s245_temp_reading = 0.4254 * (real_T)rtb_Heater_Temp_Raw
    - 31.404;

  /* S-Function (motohawk_sfun_data_read): '<S7>/motohawk_data_read2' */
  rtb_RelationalOperator11_d = Eaton_Plugged_In_DataStore();

  /* Product: '<S7>/Product' */
  rtb_Switch_pm = (real_T)rtb_RelationalOperator11_d * rtb_Merge_oq;

  /* MinMax: '<S7>/MinMax' */
  rtb_UnitDelay_m = (rtb_Switch_pm >=
                     Mooventure2016_Rev5_B.s206_IPT_InverterTemperature) ||
    rtIsNaN(Mooventure2016_Rev5_B.s206_IPT_InverterTemperature) ? rtb_Switch_pm :
    Mooventure2016_Rev5_B.s206_IPT_InverterTemperature;
  rtb_UnitDelay_m = (rtb_UnitDelay_m >=
                     Mooventure2016_Rev5_B.s201_MinCellTemperature) || rtIsNaN
    (Mooventure2016_Rev5_B.s201_MinCellTemperature) ? rtb_UnitDelay_m :
    Mooventure2016_Rev5_B.s201_MinCellTemperature;
  rtb_UnitDelay_o = (rtb_UnitDelay_m >=
                     Mooventure2016_Rev5_B.s201_MaxCellTemperature) || rtIsNaN
    (Mooventure2016_Rev5_B.s201_MaxCellTemperature) ? rtb_UnitDelay_m :
    Mooventure2016_Rev5_B.s201_MaxCellTemperature;

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
  if (Mooventure2016_Rev5_DWork.s21_is_active_c12_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Coolant Control/BlendValving */
    Mooventure2016_Rev5_DWork.s21_is_active_c12_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S21>:10' */
    Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_SystemIdle;
  } else {
    switch (Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Heat1:
      /* During 'Heat1': '<S21>:80' */
      if (rtb_UnitDelay_o < (Heat2_Threshold_DataStore())) {
        /* Transition: '<S21>:95' */
        Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Heat2;
      } else if (Mooventure2016_Rev5_B.s7_Warmed == TRUE) {
        /* Transition: '<S21>:196' */
        Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SystemIdle;
      } else {
        Mooventure2016_Rev5_B.s21_Heat1 = TRUE;
        Mooventure2016_Rev5_B.s21_Heat2 = FALSE;
        Mooventure2016_Rev5_B.s21_Heat3 = FALSE;
        Mooventure2016_Rev5_B.s21_Heat4 = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Heat2:
      /* During 'Heat2': '<S21>:91' */
      if (rtb_UnitDelay_o < (Heat3_Threshold_DataStore())) {
        /* Transition: '<S21>:105' */
        Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Heat3;
      } else if (rtb_UnitDelay_o > (Heat2_Threshold_DataStore())) {
        /* Transition: '<S21>:110' */
        Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Heat1;
      } else if (Mooventure2016_Rev5_B.s7_Warmed == TRUE) {
        /* Transition: '<S21>:197' */
        Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SystemIdle;
      } else {
        Mooventure2016_Rev5_B.s21_Heat1 = TRUE;
        Mooventure2016_Rev5_B.s21_Heat2 = TRUE;
        Mooventure2016_Rev5_B.s21_Heat3 = FALSE;
        Mooventure2016_Rev5_B.s21_Heat4 = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Heat3:
      /* During 'Heat3': '<S21>:93' */
      if (rtb_UnitDelay_o < (Heat4_Threshold_DataStore())) {
        /* Transition: '<S21>:106' */
        Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Heat4;
      } else if (rtb_UnitDelay_o > (Heat3_Threshold_DataStore())) {
        /* Transition: '<S21>:109' */
        Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Heat2;
      } else if (Mooventure2016_Rev5_B.s7_Warmed == TRUE) {
        /* Transition: '<S21>:198' */
        Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SystemIdle;
      } else {
        Mooventure2016_Rev5_B.s21_Heat1 = TRUE;
        Mooventure2016_Rev5_B.s21_Heat2 = TRUE;
        Mooventure2016_Rev5_B.s21_Heat3 = TRUE;
        Mooventure2016_Rev5_B.s21_Heat4 = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Heat4:
      /* During 'Heat4': '<S21>:92' */
      if (rtb_UnitDelay_o > (Heat4_Threshold_DataStore())) {
        /* Transition: '<S21>:107' */
        Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Heat3;
      } else if (Mooventure2016_Rev5_B.s7_Warmed == TRUE) {
        /* Transition: '<S21>:199' */
        Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SystemIdle;
      } else {
        Mooventure2016_Rev5_B.s21_Heat1 = TRUE;
        Mooventure2016_Rev5_B.s21_Heat2 = TRUE;
        Mooventure2016_Rev5_B.s21_Heat3 = TRUE;
        Mooventure2016_Rev5_B.s21_Heat4 = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_HeatOn:
      /* During 'HeatOn': '<S21>:117' */
      if (Mooventure2016_Rev5_B.s245_temp_reading >
          (Heater_Core_Threshold_DataStore()) - 1.0) {
        /* Transition: '<S21>:122' */
        Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_UserWantsHeat_NotHot;
      } else if ((rtb_LogicalOperator5 == FALSE) ||
                 (Mooventure2016_Rev5_B.s7_VeryCold == TRUE)) {
        /* Transition: '<S21>:155' */
        Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SystemIdle;
      } else {
        Mooventure2016_Rev5_B.s21_Heat1 = TRUE;
        Mooventure2016_Rev5_B.s21_Heat2 = TRUE;
        Mooventure2016_Rev5_B.s21_Heat3 = FALSE;
        Mooventure2016_Rev5_B.s21_Heat4 = FALSE;
        Mooventure2016_Rev5_B.s21_HeaterCorePump = TRUE;
        Mooventure2016_Rev5_B.s21_HeaterCoreBlend = 20.0;
      }
      break;

     case Mooventure2016_Rev5_IN_SystemIdle:
      /* During 'SystemIdle': '<S21>:9' */
      if (Mooventure2016_Rev5_B.s7_VeryCold == TRUE) {
        /* Transition: '<S21>:72' */
        Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SystemWarmup;
      } else if ((!Mooventure2016_Rev5_B.s7_VeryCold) && rtb_LogicalOperator5) {
        /* Transition: '<S21>:115' */
        Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_UserWantsHeat_NotHot;
      } else {
        Mooventure2016_Rev5_B.s21_RadiatorBlend = 231.0;
        Mooventure2016_Rev5_B.s21_HeaterCoreBlend = 20.0;
        Mooventure2016_Rev5_B.s21_Heat1 = FALSE;
        Mooventure2016_Rev5_B.s21_Heat2 = FALSE;
        Mooventure2016_Rev5_B.s21_Heat3 = FALSE;
        Mooventure2016_Rev5_B.s21_Heat4 = FALSE;
        Mooventure2016_Rev5_B.s21_RadiatorPump = FALSE;
        Mooventure2016_Rev5_B.s21_HeaterCorePump = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_SystemWarmup:
      /* During 'SystemWarmup': '<S21>:71' */
      if ((Mooventure2016_Rev5_B.s7_VeryCold == TRUE) &&
          (Mooventure2016_Rev5_B.s21_HeaterCorePump == TRUE) &&
          ((Heat1_Threshold_DataStore()) != 2000.0)) {
        /* Transition: '<S21>:84' */
        Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Heat1;
      } else if (Mooventure2016_Rev5_B.s7_Warmed == TRUE) {
        /* Transition: '<S21>:200' */
        Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SystemIdle;
      } else {
        Mooventure2016_Rev5_B.s21_RadiatorBlend = 231.0;
        Mooventure2016_Rev5_B.s21_HeaterCoreBlend = 231.0;
        Mooventure2016_Rev5_B.s21_RadiatorPump = TRUE;
        Mooventure2016_Rev5_B.s21_HeaterCorePump = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_UserWantsHeat_NotHot:
      /* During 'UserWantsHeat_NotHot': '<S21>:112' */
      if (Mooventure2016_Rev5_B.s245_temp_reading <
          (Heater_Core_Threshold_DataStore()) + 1.0) {
        /* Transition: '<S21>:120' */
        Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_HeatOn;
      } else if ((!rtb_LogicalOperator5) || (Mooventure2016_Rev5_B.s7_VeryCold &&
                  (!rtb_LogicalOperator8))) {
        /* Transition: '<S21>:130' */
        Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SystemIdle;
      } else {
        Mooventure2016_Rev5_B.s21_HeaterCoreBlend = 20.0;
        Mooventure2016_Rev5_B.s21_HeaterCorePump = TRUE;
        Mooventure2016_Rev5_B.s21_Heat1 = FALSE;
        Mooventure2016_Rev5_B.s21_Heat2 = FALSE;
      }
      break;

     default:
      /* Transition: '<S21>:10' */
      Mooventure2016_Rev5_DWork.s21_is_c12_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_SystemIdle;
      break;
    }
  }

  /* End of Stateflow: '<S7>/BlendValving' */

  /* MATLAB Function Block: '<S7>/Embedded MATLAB Function' */

  /* MATLAB Function 'Foreground/Control/Coolant Control/Embedded MATLAB Function': '<S22>:1' */
  if (rtb_LogicalOperator8) {
    /* '<S22>:1:3' */
    /* '<S22>:1:4' */
    Mooventure2016_Rev5_B.s22_radBlend = 20.0;
  } else if (Mooventure2016_Rev5_B.s21_RadiatorBlend >= 30.0) {
    /* '<S22>:1:5' */
    /* '<S22>:1:6' */
    Mooventure2016_Rev5_B.s22_radBlend = Mooventure2016_Rev5_B.s21_RadiatorBlend;
  } else {
    /* '<S22>:1:8' */
    Mooventure2016_Rev5_B.s22_radBlend = 231.0;
  }

  /* End of MATLAB Function Block: '<S7>/Embedded MATLAB Function' */
  /* If: '<S424>/If' incorporates:
   *  Inport: '<S453>/In1'
   *  Inport: '<S454>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S424>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S424>/override_enable'
   */
  if ((Radiator_Pos_Request_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S424>/NewValue' incorporates:
     *  ActionPort: '<S453>/Action Port'
     */
    rtb_Merge_i = (Radiator_Pos_Request_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S453>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(139);
    }

    /* End of Outputs for SubSystem: '<S424>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S424>/OldValue' incorporates:
     *  ActionPort: '<S454>/Action Port'
     */
    rtb_Merge_i = Mooventure2016_Rev5_B.s22_radBlend;

    /* S-Function (motohawk_sfun_code_cover): '<S454>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(140);
    }

    /* End of Outputs for SubSystem: '<S424>/OldValue' */
  }

  /* End of If: '<S424>/If' */

  /* MATLAB Function Block: '<S368>/Radiator Motion Control' */
  Mooventure2016_Rev5_HeaterCoreMotionControl(rtb_Sum1_b, rtb_Merge_i,
    (Coolant_Hyst_DataStore()),
    &Mooventure2016_Rev5_B.s368_sf_RadiatorMotionControl);

  /* DataTypeConversion: '<S368>/Data Type Conversion5' */
  Mooventure2016_Rev5_B.s368_DataTypeConversion5 =
    ((Mooventure2016_Rev5_B.s368_sf_RadiatorMotionControl.s412_motorEnable !=
      0.0));

  /* Logic: '<S368>/Logical Operator' incorporates:
   *  Constant: '<S406>/Constant'
   *  RelationalOperator: '<S406>/Compare'
   *  S-Function (motohawk_sfun_data_read): '<S368>/motohawk_data_read1'
   *  S-Function (motohawk_sfun_data_read): '<S368>/motohawk_data_read2'
   */
  rtb_RelationalOperator11_d = (Eaton_Plugged_In_DataStore() ||
    (Hybrid_State_DataStore() >= 2));

  /* S-Function Block: <S432>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s432_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_b = ((real_T) delta) * 0.000001;
  }

  /* UnitDelay: '<S7>/Unit Delay3' */
  rtb_LogicalOperator5 = Mooventure2016_Rev5_DWork.s7_UnitDelay3_DSTATE;

  /* Switch: '<S432>/Switch' incorporates:
   *  Constant: '<S432>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S432>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S432>/motohawk_delta_time'
   *  Sum: '<S432>/Sum'
   *  UnitDelay: '<S7>/Unit Delay3'
   */
  if (Mooventure2016_Rev5_DWork.s7_UnitDelay3_DSTATE) {
    rtb_Switch_pm = rtb_motohawk_delta_time_b + Heat4Timer_DataStore();
  } else {
    rtb_Switch_pm = 0.0;
  }

  /* End of Switch: '<S432>/Switch' */
  /* Logic: '<S410>/Logical Operator' incorporates:
   *  RelationalOperator: '<S410>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S368>/motohawk_calibration'
   */
  rtb_LogicalOperator_b2 = ((rtb_Switch_pm >= (Startup_Delay_DataStore())) &&
    rtb_LogicalOperator5);

  /* Logic: '<S368>/Logical Operator8' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S368>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s368_LogicalOperator8 = ((Vehicle_Ready_DataStore() &&
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
  if (Mooventure2016_Rev5_DWork.s24_is_active_c15_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Coolant Control/PumpState */
    Mooventure2016_Rev5_DWork.s24_is_active_c15_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S24>:10' */
    Mooventure2016_Rev5_DWork.s24_is_c15_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_PumpOff;
  } else {
    switch (Mooventure2016_Rev5_DWork.s24_is_c15_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_PumpOff:
      /* During 'PumpOff': '<S24>:9' */
      if (rtb_LogicalOperator8) {
        /* Transition: '<S24>:30' */
        Mooventure2016_Rev5_DWork.s24_is_c15_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_PumpOn;
      } else {
        Mooventure2016_Rev5_B.s24_PumpOn = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_PumpOn:
      /* During 'PumpOn': '<S24>:21' */
      if ((rtb_Merge_oq <= (Pump_Off_Temp_DataStore())) &&
          (Mooventure2016_Rev5_B.s206_IPT_InverterTemperature <=
           (Pump_Off_Temp_DataStore())) &&
          (Mooventure2016_Rev5_B.s201_MinCellTemperature <=
           (Pump_Off_Temp_DataStore())) &&
          (Mooventure2016_Rev5_B.s201_MaxCellTemperature <=
           (Pump_Off_Temp_DataStore()))) {
        /* Transition: '<S24>:32' */
        Mooventure2016_Rev5_DWork.s24_is_c15_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_PumpOff;
      } else {
        Mooventure2016_Rev5_B.s24_PumpOn = TRUE;
      }
      break;

     default:
      /* Transition: '<S24>:10' */
      Mooventure2016_Rev5_DWork.s24_is_c15_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_PumpOff;
      break;
    }
  }

  /* End of Stateflow: '<S7>/PumpState' */

  /* Logic: '<S7>/Logical Operator1' */
  Mooventure2016_Rev5_B.s7_LogicalOperator1 =
    ((Mooventure2016_Rev5_B.s21_RadiatorPump || Mooventure2016_Rev5_B.s24_PumpOn));

  /* If: '<S26>/If' incorporates:
   *  Inport: '<S29>/In1'
   *  Inport: '<S30>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S26>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S26>/override_enable'
   */
  if ((Cooling_Pump_Radiator_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S26>/NewValue' incorporates:
     *  ActionPort: '<S29>/Action Port'
     */
    Mooventure2016_Rev5_B.s26_Merge = (Cooling_Pump_Radiator_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S29>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(5);
    }

    /* End of Outputs for SubSystem: '<S26>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S26>/OldValue' incorporates:
     *  ActionPort: '<S30>/Action Port'
     */
    Mooventure2016_Rev5_B.s26_Merge = Mooventure2016_Rev5_B.s7_LogicalOperator1;

    /* S-Function (motohawk_sfun_code_cover): '<S30>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(6);
    }

    /* End of Outputs for SubSystem: '<S26>/OldValue' */
  }

  /* End of If: '<S26>/If' */

  /* S-Function Block: <S243>/motohawk_ain1 Resource: Heater_Core_Blend_Position */
  Mooventure2016_Rev5_B.s243_motohawk_ain1_o1 =
    Heater_Core_Blend_Position_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S250>/If' incorporates:
   *  Inport: '<S257>/In1'
   *  Inport: '<S258>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S250>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S250>/override_enable'
   */
  if ((Heater_Core_Blend_Valve_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S250>/NewValue' incorporates:
     *  ActionPort: '<S257>/Action Port'
     */
    rtb_Merge_bn = ((uint16_T)(Heater_Core_Blend_Valve_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S257>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(43);
    }

    /* End of Outputs for SubSystem: '<S250>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S250>/OldValue' incorporates:
     *  ActionPort: '<S258>/Action Port'
     */
    rtb_Merge_bn = Mooventure2016_Rev5_B.s243_motohawk_ain1_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S258>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(44);
    }

    /* End of Outputs for SubSystem: '<S250>/OldValue' */
  }

  /* End of If: '<S250>/If' */

  /* S-Function Block: <S246>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s246_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hc = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S246>/Product' incorporates:
   *  MinMax: '<S246>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration'
   */
  rtb_Switch_hc /= (rtb_Switch_hc >= (HtrCoreLowPass_DataStore())) || rtIsNaN
    ((HtrCoreLowPass_DataStore())) ? rtb_Switch_hc : (HtrCoreLowPass_DataStore());

  /* Sum: '<S251>/Sum1' incorporates:
   *  Constant: '<S251>/Constant'
   *  DataTypeConversion: '<S243>/Data Type Conversion'
   *  Product: '<S251>/Product'
   *  Product: '<S251>/Product1'
   *  Sum: '<S251>/Sum'
   *  UnitDelay: '<S251>/Unit Delay'
   */
  rtb_Sum1_e = (1.0 - rtb_Switch_hc) *
    Mooventure2016_Rev5_DWork.s251_UnitDelay_DSTATE + (real_T)rtb_Merge_bn *
    rtb_Switch_hc;

  /* Logic: '<S7>/Logical Operator2' incorporates:
   *  Logic: '<S7>/Logical Operator'
   *  RelationalOperator: '<S7>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration4'
   */
  Mooventure2016_Rev5_B.s7_LogicalOperator2 =
    ((Mooventure2016_Rev5_B.s21_HeaterCorePump ||
      (Mooventure2016_Rev5_B.s24_PumpOn && (rtb_Sum1_e >=
        (Blend_Pump_On_Threshold_DataStore())))));

  /* If: '<S25>/If' incorporates:
   *  Inport: '<S27>/In1'
   *  Inport: '<S28>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S25>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S25>/override_enable'
   */
  if ((Cooling_Pump_Heater_Core_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S25>/NewValue' incorporates:
     *  ActionPort: '<S27>/Action Port'
     */
    Mooventure2016_Rev5_B.s25_Merge =
      (Cooling_Pump_Heater_Core_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S27>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(3);
    }

    /* End of Outputs for SubSystem: '<S25>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S25>/OldValue' incorporates:
     *  ActionPort: '<S28>/Action Port'
     */
    Mooventure2016_Rev5_B.s25_Merge = Mooventure2016_Rev5_B.s7_LogicalOperator2;

    /* S-Function (motohawk_sfun_code_cover): '<S28>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Coolant Control/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(4);
    }

    /* End of Outputs for SubSystem: '<S25>/OldValue' */
  }

  /* End of If: '<S25>/If' */

  /* MATLAB Function Block: '<S7>/Embedded MATLAB Function1' incorporates:
   *  MinMax: '<S7>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_fault_action): '<S7>/motohawk_fault_action5'
   */

  /* MATLAB Function 'Foreground/Control/Coolant Control/Embedded MATLAB Function1': '<S23>:1' */
  if ((GetFaultActionStatus(5) == TRUE) || ((AC_On_FIXME_DataStore()) == TRUE))
  {
    /* '<S23>:1:3' */
    /* '<S23>:1:4' */
    rtb_UnitDelay_o = 3.0;
  } else if (rtb_UnitDelay_o < (Low_Threshold_DataStore())) {
    /* '<S23>:1:5' */
    /* '<S23>:1:6' */
    rtb_UnitDelay_o = 0.0;
  } else if ((rtb_UnitDelay_o >= (Low_Threshold_DataStore())) &&
             (rtb_UnitDelay_o < (Medium_Threshold_DataStore()))) {
    /* '<S23>:1:7' */
    /* '<S23>:1:8' */
    rtb_UnitDelay_o = 1.0;
  } else if ((rtb_UnitDelay_o >= (Medium_Threshold_DataStore())) &&
             (rtb_UnitDelay_o < (High_Threshold_DataStore()))) {
    /* '<S23>:1:9' */
    /* '<S23>:1:10' */
    rtb_UnitDelay_o = 2.0;
  } else if (rtb_UnitDelay_o >= (High_Threshold_DataStore())) {
    /* '<S23>:1:11' */
    /* '<S23>:1:12' */
    rtb_UnitDelay_o = 3.0;
  } else {
    /* '<S23>:1:14' */
    rtb_UnitDelay_o = 0.0;
  }

  /* End of MATLAB Function Block: '<S7>/Embedded MATLAB Function1' */

  /* MATLAB Function Block: '<S368>/Fan Adapter' */

  /* MATLAB Function 'Foreground/Outputs/Coolant Outputs/Fan Adapter': '<S411>:1' */
  if (rtb_UnitDelay_o == 1.0) {
    /* '<S411>:1:3' */
    /* '<S411>:1:4' */
    Mooventure2016_Rev5_B.s411_fan1 = 1.0;

    /* '<S411>:1:5' */
    Mooventure2016_Rev5_B.s411_fan2 = 0.0;

    /* '<S411>:1:6' */
    Mooventure2016_Rev5_B.s411_fan3 = 0.0;
  } else if (rtb_UnitDelay_o == 2.0) {
    /* '<S411>:1:7' */
    /* '<S411>:1:8' */
    Mooventure2016_Rev5_B.s411_fan1 = 0.0;

    /* '<S411>:1:9' */
    Mooventure2016_Rev5_B.s411_fan2 = 1.0;

    /* '<S411>:1:10' */
    Mooventure2016_Rev5_B.s411_fan3 = 0.0;
  } else if (rtb_UnitDelay_o == 3.0) {
    /* '<S411>:1:11' */
    /* '<S411>:1:12' */
    Mooventure2016_Rev5_B.s411_fan1 = 0.0;

    /* '<S411>:1:13' */
    Mooventure2016_Rev5_B.s411_fan2 = 1.0;

    /* '<S411>:1:14' */
    Mooventure2016_Rev5_B.s411_fan3 = 1.0;
  } else {
    /* '<S411>:1:16' */
    Mooventure2016_Rev5_B.s411_fan1 = 0.0;

    /* '<S411>:1:17' */
    Mooventure2016_Rev5_B.s411_fan2 = 0.0;

    /* '<S411>:1:18' */
    Mooventure2016_Rev5_B.s411_fan3 = 0.0;
  }

  /* End of MATLAB Function Block: '<S368>/Fan Adapter' */

  /* DataTypeConversion: '<S368>/Data Type Conversion4' */
  Mooventure2016_Rev5_B.s368_DataTypeConversion4 =
    ((Mooventure2016_Rev5_B.s368_sf_RadiatorMotionControl.s412_motorDirection !=
      0.0));

  /* If: '<S425>/If' incorporates:
   *  Inport: '<S455>/In1'
   *  Inport: '<S456>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S425>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S425>/override_enable'
   */
  if ((Heater_Core_Pos_Request_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S425>/NewValue' incorporates:
     *  ActionPort: '<S455>/Action Port'
     */
    rtb_Merge_ox = (Heater_Core_Pos_Request_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S455>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(141);
    }

    /* End of Outputs for SubSystem: '<S425>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S425>/OldValue' incorporates:
     *  ActionPort: '<S456>/Action Port'
     */
    rtb_Merge_ox = Mooventure2016_Rev5_B.s21_HeaterCoreBlend;

    /* S-Function (motohawk_sfun_code_cover): '<S456>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(142);
    }

    /* End of Outputs for SubSystem: '<S425>/OldValue' */
  }

  /* End of If: '<S425>/If' */

  /* MATLAB Function Block: '<S368>/Heater Core Motion Control' */
  Mooventure2016_Rev5_HeaterCoreMotionControl(rtb_Sum1_e, rtb_Merge_ox,
    (Coolant_Hyst_DataStore()),
    &Mooventure2016_Rev5_B.s368_sf_HeaterCoreMotionControl);

  /* DataTypeConversion: '<S368>/Data Type Conversion1' */
  Mooventure2016_Rev5_B.s368_DataTypeConversion1 =
    ((Mooventure2016_Rev5_B.s368_sf_HeaterCoreMotionControl.s412_motorEnable !=
      0.0));

  /* DataTypeConversion: '<S368>/Data Type Conversion2' */
  Mooventure2016_Rev5_B.s368_DataTypeConversion2 =
    ((Mooventure2016_Rev5_B.s368_sf_HeaterCoreMotionControl.s412_motorDirection
      != 0.0));

  /* S-Function Block: <S429>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s429_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_i = ((real_T) delta) * 0.000001;
  }

  /* UnitDelay: '<S7>/Unit Delay' */
  rtb_LogicalOperator5 = Mooventure2016_Rev5_DWork.s7_UnitDelay_DSTATE;

  /* Switch: '<S429>/Switch' incorporates:
   *  Constant: '<S429>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S429>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S429>/motohawk_delta_time'
   *  Sum: '<S429>/Sum'
   *  UnitDelay: '<S7>/Unit Delay'
   */
  if (Mooventure2016_Rev5_DWork.s7_UnitDelay_DSTATE) {
    rtb_Switch_hc = rtb_motohawk_delta_time_i + Heat1Timer_DataStore();
  } else {
    rtb_Switch_hc = 0.0;
  }

  /* End of Switch: '<S429>/Switch' */

  /* Logic: '<S407>/Logical Operator' incorporates:
   *  RelationalOperator: '<S407>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S368>/motohawk_calibration'
   */
  rtb_RelationalOperator2_id = ((rtb_Switch_hc >= (Startup_Delay_DataStore())) &&
    rtb_LogicalOperator5);

  /* Logic: '<S368>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S368>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s368_LogicalOperator5 = ((Vehicle_Ready_DataStore() &&
    rtb_RelationalOperator11_d && rtb_RelationalOperator2_id));

  /* S-Function Block: <S430>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s430_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_g = ((real_T) delta) * 0.000001;
  }

  /* UnitDelay: '<S7>/Unit Delay1' */
  rtb_LogicalOperator5 = Mooventure2016_Rev5_DWork.s7_UnitDelay1_DSTATE;

  /* Switch: '<S430>/Switch' incorporates:
   *  Constant: '<S430>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S430>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S430>/motohawk_delta_time'
   *  Sum: '<S430>/Sum'
   *  UnitDelay: '<S7>/Unit Delay1'
   */
  if (Mooventure2016_Rev5_DWork.s7_UnitDelay1_DSTATE) {
    rtb_Switch_p = rtb_motohawk_delta_time_g + Heat2Timer_DataStore();
  } else {
    rtb_Switch_p = 0.0;
  }

  /* End of Switch: '<S430>/Switch' */

  /* Logic: '<S408>/Logical Operator' incorporates:
   *  RelationalOperator: '<S408>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S368>/motohawk_calibration'
   */
  rtb_RelationalOperator_jg = ((rtb_Switch_p >= (Startup_Delay_DataStore())) &&
    rtb_LogicalOperator5);

  /* Logic: '<S368>/Logical Operator6' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S368>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s368_LogicalOperator6 = ((Vehicle_Ready_DataStore() &&
    rtb_RelationalOperator11_d && rtb_RelationalOperator_jg));

  /* S-Function Block: <S431>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s431_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_a = ((real_T) delta) * 0.000001;
  }

  /* UnitDelay: '<S7>/Unit Delay2' */
  rtb_LogicalOperator5 = Mooventure2016_Rev5_DWork.s7_UnitDelay2_DSTATE;

  /* Switch: '<S431>/Switch' incorporates:
   *  Constant: '<S431>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S431>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S431>/motohawk_delta_time'
   *  Sum: '<S431>/Sum'
   *  UnitDelay: '<S7>/Unit Delay2'
   */
  if (Mooventure2016_Rev5_DWork.s7_UnitDelay2_DSTATE) {
    rtb_Product2_f = rtb_motohawk_delta_time_a + Heat3Timer_DataStore();
  } else {
    rtb_Product2_f = 0.0;
  }

  /* End of Switch: '<S431>/Switch' */

  /* Logic: '<S409>/Logical Operator' incorporates:
   *  RelationalOperator: '<S409>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S368>/motohawk_calibration'
   */
  rtb_motohawk_fault_action1_g = ((rtb_Product2_f >= (Startup_Delay_DataStore()))
    && rtb_LogicalOperator5);

  /* Logic: '<S368>/Logical Operator7' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S368>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s368_LogicalOperator7 = ((Vehicle_Ready_DataStore() &&
    rtb_RelationalOperator11_d && rtb_motohawk_fault_action1_g));

  /* If: '<S419>/If' incorporates:
   *  Inport: '<S443>/In1'
   *  Inport: '<S444>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S419>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S419>/override_enable'
   */
  if ((Fan2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S419>/NewValue' incorporates:
     *  ActionPort: '<S443>/Action Port'
     */
    rtb_UnitDelay_o = (Fan2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S443>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(129);
    }

    /* End of Outputs for SubSystem: '<S419>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S419>/OldValue' incorporates:
     *  ActionPort: '<S444>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s411_fan2;

    /* S-Function (motohawk_sfun_code_cover): '<S444>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(130);
    }

    /* End of Outputs for SubSystem: '<S419>/OldValue' */
  }

  /* End of If: '<S419>/If' */

  /* DataTypeConversion: '<S368>/Data Type Conversion' */
  rtb_DataTypeConversion_gi = (rtb_UnitDelay_o != 0.0);

  /* If: '<S420>/If' incorporates:
   *  Inport: '<S445>/In1'
   *  Inport: '<S446>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S420>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S420>/override_enable'
   */
  if ((Fan3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S420>/NewValue' incorporates:
     *  ActionPort: '<S445>/Action Port'
     */
    rtb_UnitDelay_o = (Fan3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S445>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(131);
    }

    /* End of Outputs for SubSystem: '<S420>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S420>/OldValue' incorporates:
     *  ActionPort: '<S446>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s411_fan3;

    /* S-Function (motohawk_sfun_code_cover): '<S446>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(132);
    }

    /* End of Outputs for SubSystem: '<S420>/OldValue' */
  }

  /* End of If: '<S420>/If' */

  /* DataTypeConversion: '<S368>/Data Type Conversion3' */
  rtb_DataTypeConversion3 = (rtb_UnitDelay_o != 0.0);

  /* If: '<S418>/If' incorporates:
   *  Inport: '<S441>/In1'
   *  Inport: '<S442>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S418>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S418>/override_enable'
   */
  if ((Fan1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S418>/NewValue' incorporates:
     *  ActionPort: '<S441>/Action Port'
     */
    rtb_UnitDelay_o = (Fan1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S441>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(127);
    }

    /* End of Outputs for SubSystem: '<S418>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S418>/OldValue' incorporates:
     *  ActionPort: '<S442>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s411_fan1;

    /* S-Function (motohawk_sfun_code_cover): '<S442>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(128);
    }

    /* End of Outputs for SubSystem: '<S418>/OldValue' */
  }

  /* End of If: '<S418>/If' */

  /* DataTypeConversion: '<S368>/Data Type Conversion6' */
  rtb_DataTypeConversion6 = (rtb_UnitDelay_o != 0.0);

  /* Saturate: '<S429>/Saturation' */
  rtb_Saturation = rtb_Switch_hc >= 86400.0 ? 86400.0 : rtb_Switch_hc <= 0.0 ?
    0.0 : rtb_Switch_hc;

  /* S-Function (motohawk_sfun_data_write): '<S429>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Heat1Timer */
  {
    Heat1Timer_DataStore() = rtb_Saturation;
  }

  /* Saturate: '<S430>/Saturation' */
  rtb_Saturation_i = rtb_Switch_p >= 86400.0 ? 86400.0 : rtb_Switch_p <= 0.0 ?
    0.0 : rtb_Switch_p;

  /* S-Function (motohawk_sfun_data_write): '<S430>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Heat2Timer */
  {
    Heat2Timer_DataStore() = rtb_Saturation_i;
  }

  /* Saturate: '<S431>/Saturation' */
  rtb_Saturation_l = rtb_Product2_f >= 86400.0 ? 86400.0 : rtb_Product2_f <= 0.0
    ? 0.0 : rtb_Product2_f;

  /* S-Function (motohawk_sfun_data_write): '<S431>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Heat3Timer */
  {
    Heat3Timer_DataStore() = rtb_Saturation_l;
  }

  /* Saturate: '<S432>/Saturation' */
  rtb_Saturation_f = rtb_Switch_pm >= 86400.0 ? 86400.0 : rtb_Switch_pm <= 0.0 ?
    0.0 : rtb_Switch_pm;

  /* S-Function (motohawk_sfun_data_write): '<S432>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Heat4Timer */
  {
    Heat4Timer_DataStore() = rtb_Saturation_f;
  }

  /* If: '<S414>/If' incorporates:
   *  Inport: '<S433>/In1'
   *  Inport: '<S434>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S414>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S414>/override_enable'
   */
  if ((Radiator_Motor_Enable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S414>/NewValue' incorporates:
     *  ActionPort: '<S433>/Action Port'
     */
    rtb_Merge_gd = (Radiator_Motor_Enable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S433>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(119);
    }

    /* End of Outputs for SubSystem: '<S414>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S414>/OldValue' incorporates:
     *  ActionPort: '<S434>/Action Port'
     */
    rtb_Merge_gd = Mooventure2016_Rev5_B.s368_DataTypeConversion5;

    /* S-Function (motohawk_sfun_code_cover): '<S434>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(120);
    }

    /* End of Outputs for SubSystem: '<S414>/OldValue' */
  }

  /* End of If: '<S414>/If' */

  /* If: '<S415>/If' incorporates:
   *  Inport: '<S435>/In1'
   *  Inport: '<S436>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S415>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S415>/override_enable'
   */
  if ((Heat4_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S415>/NewValue' incorporates:
     *  ActionPort: '<S435>/Action Port'
     */
    rtb_Merge_dm = (Heat4_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S435>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(121);
    }

    /* End of Outputs for SubSystem: '<S415>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S415>/OldValue' incorporates:
     *  ActionPort: '<S436>/Action Port'
     */
    rtb_Merge_dm = Mooventure2016_Rev5_B.s368_LogicalOperator8;

    /* S-Function (motohawk_sfun_code_cover): '<S436>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(122);
    }

    /* End of Outputs for SubSystem: '<S415>/OldValue' */
  }

  /* End of If: '<S415>/If' */

  /* If: '<S416>/If' incorporates:
   *  Inport: '<S437>/In1'
   *  Inport: '<S438>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S416>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S416>/override_enable'
   */
  if ((Radiator_Pump_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S416>/NewValue' incorporates:
     *  ActionPort: '<S437>/Action Port'
     */
    rtb_Merge_ay5 = (Radiator_Pump_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S437>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(123);
    }

    /* End of Outputs for SubSystem: '<S416>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S416>/OldValue' incorporates:
     *  ActionPort: '<S438>/Action Port'
     */
    rtb_Merge_ay5 = Mooventure2016_Rev5_B.s26_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S438>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(124);
    }

    /* End of Outputs for SubSystem: '<S416>/OldValue' */
  }

  /* End of If: '<S416>/If' */

  /* If: '<S417>/If' incorporates:
   *  Inport: '<S439>/In1'
   *  Inport: '<S440>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S417>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S417>/override_enable'
   */
  if ((Heater_Core_Pump_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S417>/NewValue' incorporates:
     *  ActionPort: '<S439>/Action Port'
     */
    rtb_Merge_lq = (Heater_Core_Pump_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S439>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(125);
    }

    /* End of Outputs for SubSystem: '<S417>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S417>/OldValue' incorporates:
     *  ActionPort: '<S440>/Action Port'
     */
    rtb_Merge_lq = Mooventure2016_Rev5_B.s25_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S440>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(126);
    }

    /* End of Outputs for SubSystem: '<S417>/OldValue' */
  }

  /* End of If: '<S417>/If' */

  /* If: '<S421>/If' incorporates:
   *  Inport: '<S447>/In1'
   *  Inport: '<S448>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S421>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S421>/override_enable'
   */
  if ((Radiator_Motor_Direction_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S421>/NewValue' incorporates:
     *  ActionPort: '<S447>/Action Port'
     */
    rtb_Merge_pi3 = (Radiator_Motor_Direction_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S447>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(133);
    }

    /* End of Outputs for SubSystem: '<S421>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S421>/OldValue' incorporates:
     *  ActionPort: '<S448>/Action Port'
     */
    rtb_Merge_pi3 = Mooventure2016_Rev5_B.s368_DataTypeConversion4;

    /* S-Function (motohawk_sfun_code_cover): '<S448>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(134);
    }

    /* End of Outputs for SubSystem: '<S421>/OldValue' */
  }

  /* End of If: '<S421>/If' */

  /* If: '<S422>/If' incorporates:
   *  Inport: '<S449>/In1'
   *  Inport: '<S450>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S422>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S422>/override_enable'
   */
  if ((Heater_Core_Motor_Enable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S422>/NewValue' incorporates:
     *  ActionPort: '<S449>/Action Port'
     */
    rtb_Merge_of1 = (Heater_Core_Motor_Enable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S449>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(135);
    }

    /* End of Outputs for SubSystem: '<S422>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S422>/OldValue' incorporates:
     *  ActionPort: '<S450>/Action Port'
     */
    rtb_Merge_of1 = Mooventure2016_Rev5_B.s368_DataTypeConversion1;

    /* S-Function (motohawk_sfun_code_cover): '<S450>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(136);
    }

    /* End of Outputs for SubSystem: '<S422>/OldValue' */
  }

  /* End of If: '<S422>/If' */

  /* If: '<S423>/If' incorporates:
   *  Inport: '<S451>/In1'
   *  Inport: '<S452>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S423>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S423>/override_enable'
   */
  if ((Heater_Core_Motor_Direction_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S423>/NewValue' incorporates:
     *  ActionPort: '<S451>/Action Port'
     */
    rtb_Merge_ln = (Heater_Core_Motor_Direction_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S451>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(137);
    }

    /* End of Outputs for SubSystem: '<S423>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S423>/OldValue' incorporates:
     *  ActionPort: '<S452>/Action Port'
     */
    rtb_Merge_ln = Mooventure2016_Rev5_B.s368_DataTypeConversion2;

    /* S-Function (motohawk_sfun_code_cover): '<S452>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(138);
    }

    /* End of Outputs for SubSystem: '<S423>/OldValue' */
  }

  /* End of If: '<S423>/If' */

  /* If: '<S426>/If' incorporates:
   *  Inport: '<S457>/In1'
   *  Inport: '<S458>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S426>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S426>/override_enable'
   */
  if ((Heat1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S426>/NewValue' incorporates:
     *  ActionPort: '<S457>/Action Port'
     */
    rtb_Merge_oqt = (Heat1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S457>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(143);
    }

    /* End of Outputs for SubSystem: '<S426>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S426>/OldValue' incorporates:
     *  ActionPort: '<S458>/Action Port'
     */
    rtb_Merge_oqt = Mooventure2016_Rev5_B.s368_LogicalOperator5;

    /* S-Function (motohawk_sfun_code_cover): '<S458>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(144);
    }

    /* End of Outputs for SubSystem: '<S426>/OldValue' */
  }

  /* End of If: '<S426>/If' */

  /* If: '<S427>/If' incorporates:
   *  Inport: '<S459>/In1'
   *  Inport: '<S460>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S427>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S427>/override_enable'
   */
  if ((Heat2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S427>/NewValue' incorporates:
     *  ActionPort: '<S459>/Action Port'
     */
    rtb_Merge_cg = (Heat2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S459>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(145);
    }

    /* End of Outputs for SubSystem: '<S427>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S427>/OldValue' incorporates:
     *  ActionPort: '<S460>/Action Port'
     */
    rtb_Merge_cg = Mooventure2016_Rev5_B.s368_LogicalOperator6;

    /* S-Function (motohawk_sfun_code_cover): '<S460>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(146);
    }

    /* End of Outputs for SubSystem: '<S427>/OldValue' */
  }

  /* End of If: '<S427>/If' */

  /* If: '<S428>/If' incorporates:
   *  Inport: '<S461>/In1'
   *  Inport: '<S462>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S428>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S428>/override_enable'
   */
  if ((Heat3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S428>/NewValue' incorporates:
     *  ActionPort: '<S461>/Action Port'
     */
    rtb_Merge_l1 = (Heat3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S461>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(147);
    }

    /* End of Outputs for SubSystem: '<S428>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S428>/OldValue' incorporates:
     *  ActionPort: '<S462>/Action Port'
     */
    rtb_Merge_l1 = Mooventure2016_Rev5_B.s368_LogicalOperator7;

    /* S-Function (motohawk_sfun_code_cover): '<S462>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(148);
    }

    /* End of Outputs for SubSystem: '<S428>/OldValue' */
  }

  /* End of If: '<S428>/If' */

  /* S-Function Block: <S12>/motohawk_din Resource: ESTOP2 */
  rtb_motohawk_din = ESTOP2_DigitalInput_Get();

  /* Logic: '<S12>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_din): '<S12>/motohawk_din'
   */
  rtb_LogicalOperator5 = !rtb_motohawk_din;

  /* Logic: '<S12>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S12>/motohawk_data_read1'
   *  S-Function (motohawk_sfun_fault_action): '<S12>/motohawk_fault_action'
   */
  rtb_LogicalOperator5 = (rtb_LogicalOperator5 || GetFaultActionStatus(7) ||
    Shutdown_Req_DataStore());

  /* Logic: '<S12>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S12>/motohawk_data_read'
   */
  rtb_LogicalOperator8 = (Batt_Load_Enable_DataStore() ||
    ((Auto_Battery_Startup_DataStore()) != 0.0));

  /* If: '<S303>/If' incorporates:
   *  Inport: '<S313>/In1'
   *  Inport: '<S314>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S303>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S303>/override_enable'
   */
  if ((ChargerState_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S303>/NewValue' incorporates:
     *  ActionPort: '<S313>/Action Port'
     */
    rtb_Merge_b = (ChargerState_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S313>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(59);
    }

    /* End of Outputs for SubSystem: '<S303>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S303>/OldValue' incorporates:
     *  ActionPort: '<S314>/Action Port'
     */
    rtb_Merge_b = Mooventure2016_Rev5_B.s205_ChargerState;

    /* S-Function (motohawk_sfun_code_cover): '<S314>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(60);
    }

    /* End of Outputs for SubSystem: '<S303>/OldValue' */
  }

  /* End of If: '<S303>/If' */

  /* RelationalOperator: '<S12>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration3'
   */
  rtb_RelationalOperator_b = (rtb_Merge_b >= (Eaton_Is_Charging_DataStore()));

  /* Stateflow: '<S12>/Chart' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S12>/motohawk_data_read2'
   */

  /* Gateway: Foreground/Control/Vehicle Run/Stop Determination/Chart */
  /* During: Foreground/Control/Vehicle Run/Stop Determination/Chart */
  if (Mooventure2016_Rev5_DWork.s198_is_active_c1_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Vehicle Run/Stop Determination/Chart */
    Mooventure2016_Rev5_DWork.s198_is_active_c1_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S198>:10' */
    Mooventure2016_Rev5_DWork.s198_is_c1_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Initial;
  } else {
    switch (Mooventure2016_Rev5_DWork.s198_is_c1_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Batterybootup:
      /* During 'Batterybootup': '<S198>:13' */
      if (rtb_LogicalOperator5) {
        /* Transition: '<S198>:22' */
        Mooventure2016_Rev5_DWork.s198_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Shutdown_Sequence;
      } else if (rtb_LogicalOperator8) {
        /* Transition: '<S198>:37' */
        Mooventure2016_Rev5_DWork.s198_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Charging_and_Temp;
      } else {
        Mooventure2016_Rev5_B.s198_Vehicle_Enable = TRUE;
        Mooventure2016_Rev5_B.s198_Vehicle_Ready = FALSE;
        Mooventure2016_Rev5_B.s198_Torque_Enable = FALSE;
        Mooventure2016_Rev5_B.s198_Keyed_Relay = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_Charging_and_Temp:
      /* During 'Charging_and_Temp': '<S198>:15' */
      if (!rtb_RelationalOperator_b) {
        /* Transition: '<S198>:20' */
        Mooventure2016_Rev5_DWork.s198_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal_Operation;
      } else if (rtb_LogicalOperator5) {
        /* Transition: '<S198>:40' */
        Mooventure2016_Rev5_DWork.s198_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Counting_b;

        /* Entry 'Counting': '<S198>:39' */
        Mooventure2016_Rev5_DWork.s198_count = 0.0;
      } else {
        Mooventure2016_Rev5_B.s198_Vehicle_Enable = TRUE;
        Mooventure2016_Rev5_B.s198_Vehicle_Ready = TRUE;
        Mooventure2016_Rev5_B.s198_Torque_Enable = FALSE;
        Mooventure2016_Rev5_B.s198_Keyed_Relay = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_Counting_b:
      /* During 'Counting': '<S198>:39' */
      if (Mooventure2016_Rev5_DWork.s198_count >= 200.0) {
        /* Transition: '<S198>:42' */
        Mooventure2016_Rev5_DWork.s198_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Shutdown_Sequence;
      } else if (!rtb_LogicalOperator5) {
        /* Transition: '<S198>:43' */
        Mooventure2016_Rev5_DWork.s198_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal_Operation;
      } else {
        Mooventure2016_Rev5_DWork.s198_count =
          Mooventure2016_Rev5_DWork.s198_count + 1.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Initial:
      /* During 'Initial': '<S198>:9' */
      if (!rtb_LogicalOperator5) {
        /* Transition: '<S198>:14' */
        Mooventure2016_Rev5_DWork.s198_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Batterybootup;
      } else {
        /* Transition: '<S198>:30' */
        Mooventure2016_Rev5_DWork.s198_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Shutdown_Sequence;
      }
      break;

     case Mooventure2016_Rev5_IN_Kill_Component_Keyed:
      /* During 'Kill_Component_Keyed': '<S198>:26' */
      Mooventure2016_Rev5_B.s198_Vehicle_Enable = FALSE;
      Mooventure2016_Rev5_B.s198_Vehicle_Ready = FALSE;
      Mooventure2016_Rev5_B.s198_Torque_Enable = FALSE;
      Mooventure2016_Rev5_B.s198_Keyed_Relay = FALSE;
      break;

     case Mooventure2016_Rev5_IN_Normal_Operation:
      /* During 'Normal_Operation': '<S198>:18' */
      if (rtb_RelationalOperator_b) {
        /* Transition: '<S198>:25' */
        Mooventure2016_Rev5_DWork.s198_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Charging_and_Temp;
      } else if (rtb_LogicalOperator5) {
        /* Transition: '<S198>:41' */
        Mooventure2016_Rev5_DWork.s198_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Counting_b;

        /* Entry 'Counting': '<S198>:39' */
        Mooventure2016_Rev5_DWork.s198_count = 0.0;
      } else {
        Mooventure2016_Rev5_B.s198_Vehicle_Enable = TRUE;
        Mooventure2016_Rev5_B.s198_Vehicle_Ready = TRUE;
        Mooventure2016_Rev5_B.s198_Torque_Enable = TRUE;
        Mooventure2016_Rev5_B.s198_Keyed_Relay = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_Shutdown_Sequence:
      /* During 'Shutdown_Sequence': '<S198>:21' */
      if (!Batt_Contactor_Status_DataStore()) {
        /* Transition: '<S198>:27' */
        Mooventure2016_Rev5_DWork.s198_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Kill_Component_Keyed;
      } else {
        Mooventure2016_Rev5_B.s198_Vehicle_Enable = FALSE;
        Mooventure2016_Rev5_B.s198_Vehicle_Ready = FALSE;
        Mooventure2016_Rev5_B.s198_Torque_Enable = FALSE;
        Mooventure2016_Rev5_B.s198_Keyed_Relay = TRUE;
      }
      break;

     default:
      /* Transition: '<S198>:10' */
      Mooventure2016_Rev5_DWork.s198_is_c1_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Initial;
      break;
    }
  }

  /* End of Stateflow: '<S12>/Chart' */

  /* Stateflow: '<S369>/Coil1State' */

  /* Gateway: Foreground/Outputs/DistributionBox/Coil1State */
  /* During: Foreground/Outputs/DistributionBox/Coil1State */
  if (Mooventure2016_Rev5_DWork.s463_is_active_c8_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/DistributionBox/Coil1State */
    Mooventure2016_Rev5_DWork.s463_is_active_c8_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S463>:10' */
    Mooventure2016_Rev5_DWork.s463_is_c8_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Coil1Disabled;
  } else {
    switch (Mooventure2016_Rev5_DWork.s463_is_c8_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Coil1Disabled:
      /* During 'Coil1Disabled': '<S463>:9' */
      if ((Mooventure2016_Rev5_B.s80_Switch == 0.0) && (rtb_Merge_o0 >= 250.0) &&
          Mooventure2016_Rev5_B.s198_Keyed_Relay) {
        /* Transition: '<S463>:30' */
        Mooventure2016_Rev5_DWork.s463_is_c8_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil1Enabled;
      } else {
        Mooventure2016_Rev5_B.s463_Coil1State = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Coil1Enabled:
      /* During 'Coil1Enabled': '<S463>:21' */
      if ((Mooventure2016_Rev5_B.s80_Switch == 0.0) &&
          (!Mooventure2016_Rev5_B.s198_Keyed_Relay)) {
        /* Transition: '<S463>:32' */
        Mooventure2016_Rev5_DWork.s463_is_c8_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil1Disabled;
      } else {
        Mooventure2016_Rev5_B.s463_Coil1State = TRUE;
      }
      break;

     default:
      /* Transition: '<S463>:10' */
      Mooventure2016_Rev5_DWork.s463_is_c8_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Coil1Disabled;
      break;
    }
  }

  /* End of Stateflow: '<S369>/Coil1State' */

  /* DataTypeConversion: '<S369>/Data Type Conversion1' incorporates:
   *  Constant: '<S466>/Constant'
   *  RelationalOperator: '<S466>/Compare'
   */
  rtb_LogicalOperator5 = (rtb_Merge_b == 2.0);

  /* Stateflow: '<S369>/Coil2State' */

  /* Gateway: Foreground/Outputs/DistributionBox/Coil2State */
  /* During: Foreground/Outputs/DistributionBox/Coil2State */
  if (Mooventure2016_Rev5_DWork.s464_is_active_c9_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/DistributionBox/Coil2State */
    Mooventure2016_Rev5_DWork.s464_is_active_c9_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S464>:10' */
    Mooventure2016_Rev5_DWork.s464_is_c9_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Coil2Disabled;
  } else {
    switch (Mooventure2016_Rev5_DWork.s464_is_c9_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Coil2Disabled:
      /* During 'Coil2Disabled': '<S464>:9' */
      if ((!rtb_LogicalOperator5) && Mooventure2016_Rev5_B.s198_Keyed_Relay) {
        /* Transition: '<S464>:48' */
        Mooventure2016_Rev5_DWork.s464_is_c9_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil2Enabled;
      } else {
        Mooventure2016_Rev5_B.s464_Coil2State = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Coil2Enabled:
      /* During 'Coil2Enabled': '<S464>:21' */
      if ((!rtb_LogicalOperator5) && (!Mooventure2016_Rev5_B.s198_Keyed_Relay))
      {
        /* Transition: '<S464>:32' */
        Mooventure2016_Rev5_DWork.s464_is_c9_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil2Disabled;
      } else {
        Mooventure2016_Rev5_B.s464_Coil2State = TRUE;
      }
      break;

     default:
      /* Transition: '<S464>:10' */
      Mooventure2016_Rev5_DWork.s464_is_c9_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Coil2Disabled;
      break;
    }
  }

  /* End of Stateflow: '<S369>/Coil2State' */

  /* Logic: '<S467>/Logical Operator' */
  rtb_LogicalOperator5 = (rtb_RelationalOperator2_id ||
    rtb_RelationalOperator_jg || rtb_motohawk_fault_action1_g ||
    rtb_LogicalOperator_b2);

  /* Stateflow: '<S369>/Coil2State1' */

  /* Gateway: Foreground/Outputs/DistributionBox/Coil2State1 */
  /* During: Foreground/Outputs/DistributionBox/Coil2State1 */
  if (Mooventure2016_Rev5_DWork.s465_is_active_c10_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/DistributionBox/Coil2State1 */
    Mooventure2016_Rev5_DWork.s465_is_active_c10_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S465>:10' */
    Mooventure2016_Rev5_DWork.s465_is_c10_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Coil3Disabled;
  } else {
    switch (Mooventure2016_Rev5_DWork.s465_is_c10_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Coil3Disabled:
      /* During 'Coil3Disabled': '<S465>:9' */
      if ((!rtb_LogicalOperator5) && Mooventure2016_Rev5_B.s198_Keyed_Relay) {
        /* Transition: '<S465>:30' */
        Mooventure2016_Rev5_DWork.s465_is_c10_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil3Enabled;
      } else {
        Mooventure2016_Rev5_B.s465_Coil3State = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Coil3Enabled:
      /* During 'Coil3Enabled': '<S465>:21' */
      if ((!rtb_LogicalOperator5) && (!Mooventure2016_Rev5_B.s198_Keyed_Relay))
      {
        /* Transition: '<S465>:32' */
        Mooventure2016_Rev5_DWork.s465_is_c10_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil3Disabled;
      } else {
        Mooventure2016_Rev5_B.s465_Coil3State = TRUE;
      }
      break;

     default:
      /* Transition: '<S465>:10' */
      Mooventure2016_Rev5_DWork.s465_is_c10_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Coil3Disabled;
      break;
    }
  }

  /* End of Stateflow: '<S369>/Coil2State1' */

  /* If: '<S470>/If' incorporates:
   *  Inport: '<S478>/In1'
   *  Inport: '<S479>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S470>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S470>/override_enable'
   */
  if ((Coil1_IPT_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S470>/NewValue' incorporates:
     *  ActionPort: '<S478>/Action Port'
     */
    rtb_Merge_ef = (Coil1_IPT_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S478>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(153);
    }

    /* End of Outputs for SubSystem: '<S470>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S470>/OldValue' incorporates:
     *  ActionPort: '<S479>/Action Port'
     */
    rtb_Merge_ef = Mooventure2016_Rev5_B.s463_Coil1State;

    /* S-Function (motohawk_sfun_code_cover): '<S479>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(154);
    }

    /* End of Outputs for SubSystem: '<S470>/OldValue' */
  }

  /* End of If: '<S470>/If' */

  /* If: '<S471>/If' incorporates:
   *  Inport: '<S480>/In1'
   *  Inport: '<S481>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S471>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S471>/override_enable'
   */
  if ((Coil2_Charger_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S471>/NewValue' incorporates:
     *  ActionPort: '<S480>/Action Port'
     */
    rtb_Merge_nv = (Coil2_Charger_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S480>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(155);
    }

    /* End of Outputs for SubSystem: '<S471>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S471>/OldValue' incorporates:
     *  ActionPort: '<S481>/Action Port'
     */
    rtb_Merge_nv = Mooventure2016_Rev5_B.s464_Coil2State;

    /* S-Function (motohawk_sfun_code_cover): '<S481>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(156);
    }

    /* End of Outputs for SubSystem: '<S471>/OldValue' */
  }

  /* End of If: '<S471>/If' */

  /* If: '<S472>/If' incorporates:
   *  Inport: '<S482>/In1'
   *  Inport: '<S483>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S472>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S472>/override_enable'
   */
  if ((Coil3_Heater_AC_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S472>/NewValue' incorporates:
     *  ActionPort: '<S482>/Action Port'
     */
    rtb_Merge_iu = (Coil3_Heater_AC_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S482>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(157);
    }

    /* End of Outputs for SubSystem: '<S472>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S472>/OldValue' incorporates:
     *  ActionPort: '<S483>/Action Port'
     */
    rtb_Merge_iu = Mooventure2016_Rev5_B.s465_Coil3State;

    /* S-Function (motohawk_sfun_code_cover): '<S483>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(158);
    }

    /* End of Outputs for SubSystem: '<S472>/OldValue' */
  }

  /* End of If: '<S472>/If' */

  /* If: '<S468>/If' incorporates:
   *  Constant: '<S369>/Constant'
   *  Inport: '<S474>/In1'
   *  Inport: '<S475>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S468>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S468>/override_enable'
   */
  if ((Coil5_AuxCoil_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S468>/NewValue' incorporates:
     *  ActionPort: '<S474>/Action Port'
     */
    rtb_UnitDelay_o = (Coil5_AuxCoil_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S474>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(149);
    }

    /* End of Outputs for SubSystem: '<S468>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S468>/OldValue' incorporates:
     *  ActionPort: '<S475>/Action Port'
     */
    rtb_UnitDelay_o = 0.0;

    /* S-Function (motohawk_sfun_code_cover): '<S475>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(150);
    }

    /* End of Outputs for SubSystem: '<S468>/OldValue' */
  }

  /* End of If: '<S468>/If' */

  /* DataTypeConversion: '<S369>/Data Type Conversion6' */
  rtb_DataTypeConversion6_c = (rtb_UnitDelay_o != 0.0);

  /* If: '<S473>/If' incorporates:
   *  Constant: '<S369>/Constant2'
   *  Inport: '<S484>/In1'
   *  Inport: '<S485>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S473>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S473>/override_enable'
   */
  if ((Coil4_MaleOrangeConnector_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S473>/NewValue' incorporates:
     *  ActionPort: '<S484>/Action Port'
     */
    rtb_UnitDelay_o = (Coil4_MaleOrangeConnector_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S484>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(159);
    }

    /* End of Outputs for SubSystem: '<S473>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S473>/OldValue' incorporates:
     *  ActionPort: '<S485>/Action Port'
     */
    rtb_UnitDelay_o = 0.0;

    /* S-Function (motohawk_sfun_code_cover): '<S485>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(160);
    }

    /* End of Outputs for SubSystem: '<S473>/OldValue' */
  }

  /* End of If: '<S473>/If' */

  /* DataTypeConversion: '<S369>/Data Type Conversion5' */
  rtb_DataTypeConversion5 = (rtb_UnitDelay_o != 0.0);

  /* S-Function (motohawk_sfun_probe): '<S369>/motohawk_probe11' */
  (InterlockEnable_Probe_DataStore()) = (InterlockEnable_DataStore());

  /* If: '<S469>/If' incorporates:
   *  Inport: '<S476>/In1'
   *  Inport: '<S477>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S369>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S469>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S469>/override_enable'
   */
  if ((InterlockEnable_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S469>/NewValue' incorporates:
     *  ActionPort: '<S476>/Action Port'
     */
    rtb_UnitDelay_o = (InterlockEnable_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S476>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(151);
    }

    /* End of Outputs for SubSystem: '<S469>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S469>/OldValue' incorporates:
     *  ActionPort: '<S477>/Action Port'
     */
    rtb_UnitDelay_o = (InterlockEnable_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S477>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(152);
    }

    /* End of Outputs for SubSystem: '<S469>/OldValue' */
  }

  /* End of If: '<S469>/If' */

  /* DataTypeConversion: '<S369>/Data Type Conversion8' */
  rtb_DataTypeConversion8 = (rtb_UnitDelay_o != 0.0);

  /* Stateflow: '<S370>/PowerSteering' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S370>/motohawk_data_read1'
   */

  /* Gateway: Foreground/Outputs/Driver Ouputs/PowerSteering */
  /* During: Foreground/Outputs/Driver Ouputs/PowerSteering */
  if (Mooventure2016_Rev5_DWork.s491_is_active_c28_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/Driver Ouputs/PowerSteering */
    Mooventure2016_Rev5_DWork.s491_is_active_c28_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S491>:10' */
    Mooventure2016_Rev5_DWork.s491_is_c28_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_INIT;
  } else {
    switch (Mooventure2016_Rev5_DWork.s491_is_c28_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_INIT:
      /* During 'INIT': '<S491>:9' */
      if (Mooventure2016_Rev5_B.s206_IPT_MotorReady) {
        /* Transition: '<S491>:42' */
        Mooventure2016_Rev5_DWork.s491_is_c28_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_MotorRunning;
      } else {
        Mooventure2016_Rev5_B.s491_VehicleReadyOutput = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_MotorRunning:
      /* During 'MotorRunning': '<S491>:21' */
      if (!Vehicle_Ready_DataStore()) {
        /* Transition: '<S491>:43' */
        Mooventure2016_Rev5_DWork.s491_is_c28_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_PowerSteeringOn;
      } else {
        Mooventure2016_Rev5_B.s491_VehicleReadyOutput = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_PowerSteeringOff:
      /* During 'PowerSteeringOff': '<S491>:44' */
      Mooventure2016_Rev5_B.s491_VehicleReadyOutput = FALSE;
      break;

     case Mooventure2016_Rev5_IN_PowerSteeringOn:
      /* During 'PowerSteeringOn': '<S491>:39' */
      if (Mooventure2016_Rev5_B.s299_posOut == 2.0) {
        /* Transition: '<S491>:45' */
        Mooventure2016_Rev5_DWork.s491_is_c28_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_PowerSteeringOff;
      } else {
        Mooventure2016_Rev5_B.s491_VehicleReadyOutput = TRUE;
      }
      break;

     default:
      /* Transition: '<S491>:10' */
      Mooventure2016_Rev5_DWork.s491_is_c28_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_INIT;
      break;
    }
  }

  /* End of Stateflow: '<S370>/PowerSteering' */
  /* If: '<S493>/If' incorporates:
   *  Inport: '<S588>/In1'
   *  Inport: '<S589>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S493>/override_enable'
   */
  if ((Ready_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S493>/NewValue' incorporates:
     *  ActionPort: '<S588>/Action Port'
     */
    rtb_Merge_kn = (Ready_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S588>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(213);
    }

    /* End of Outputs for SubSystem: '<S493>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S493>/OldValue' incorporates:
     *  ActionPort: '<S589>/Action Port'
     */
    rtb_Merge_kn = Mooventure2016_Rev5_B.s491_VehicleReadyOutput;

    /* S-Function (motohawk_sfun_code_cover): '<S589>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(214);
    }

    /* End of Outputs for SubSystem: '<S493>/OldValue' */
  }

  /* End of If: '<S493>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S370>/motohawk_fault_action2'
   *
   * Regarding '<S370>/motohawk_fault_action2':
     Get Fault Action Status: Regen_Brakes_Disabled
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s370_Regen_Brakes_Disabled = GetFaultActionStatus(12);
  }

  /* If: '<S500>/If' incorporates:
   *  Inport: '<S602>/In1'
   *  Inport: '<S603>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S500>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S500>/override_enable'
   */
  if ((Regen_Brakes_Disabled_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S500>/NewValue' incorporates:
     *  ActionPort: '<S602>/Action Port'
     */
    rtb_Merge_pl = (Regen_Brakes_Disabled_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S602>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(227);
    }

    /* End of Outputs for SubSystem: '<S500>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S500>/OldValue' incorporates:
     *  ActionPort: '<S603>/Action Port'
     */
    rtb_Merge_pl = Mooventure2016_Rev5_B.s370_Regen_Brakes_Disabled;

    /* S-Function (motohawk_sfun_code_cover): '<S603>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(228);
    }

    /* End of Outputs for SubSystem: '<S500>/OldValue' */
  }

  /* End of If: '<S500>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S370>/motohawk_fault_action1'
   *
   * Regarding '<S370>/motohawk_fault_action1':
     Get Fault Action Status: HV_Light
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s370_HV_Elec_Sys_Warm = GetFaultActionStatus(10);
  }

  /* If: '<S501>/If' incorporates:
   *  Inport: '<S604>/In1'
   *  Inport: '<S605>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S501>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S501>/override_enable'
   */
  if ((HV_Elec_Sys_Wrn_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S501>/NewValue' incorporates:
     *  ActionPort: '<S604>/Action Port'
     */
    rtb_Merge_e4 = (HV_Elec_Sys_Wrn_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S604>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(229);
    }

    /* End of Outputs for SubSystem: '<S501>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S501>/OldValue' incorporates:
     *  ActionPort: '<S605>/Action Port'
     */
    rtb_Merge_e4 = Mooventure2016_Rev5_B.s370_HV_Elec_Sys_Warm;

    /* S-Function (motohawk_sfun_code_cover): '<S605>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(230);
    }

    /* End of Outputs for SubSystem: '<S501>/OldValue' */
  }

  /* End of If: '<S501>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S370>/motohawk_fault_action'
   *
   * Regarding '<S370>/motohawk_fault_action':
     Get Fault Action Status: Wrench_Light
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s370_Repair_Wrench = GetFaultActionStatus(16);
  }

  /* If: '<S502>/If' incorporates:
   *  Inport: '<S606>/In1'
   *  Inport: '<S607>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S502>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S502>/override_enable'
   */
  if ((Repair_Wrench_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S502>/NewValue' incorporates:
     *  ActionPort: '<S606>/Action Port'
     */
    rtb_Merge_br = (Repair_Wrench_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S606>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(231);
    }

    /* End of Outputs for SubSystem: '<S502>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S502>/OldValue' incorporates:
     *  ActionPort: '<S607>/Action Port'
     */
    rtb_Merge_br = Mooventure2016_Rev5_B.s370_Repair_Wrench;

    /* S-Function (motohawk_sfun_code_cover): '<S607>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(232);
    }

    /* End of Outputs for SubSystem: '<S502>/OldValue' */
  }

  /* End of If: '<S502>/If' */

  /* If: '<S503>/If' incorporates:
   *  Inport: '<S608>/In1'
   *  Inport: '<S609>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S503>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S503>/override_enable'
   */
  if ((Cruise_Ctrl_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S503>/NewValue' incorporates:
     *  ActionPort: '<S608>/Action Port'
     */
    rtb_Merge_gn = (Cruise_Ctrl_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S608>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(233);
    }

    /* End of Outputs for SubSystem: '<S503>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S503>/OldValue' incorporates:
     *  ActionPort: '<S609>/Action Port'
     */
    rtb_Merge_gn = Mooventure2016_Rev5_B.s91_System;

    /* S-Function (motohawk_sfun_code_cover): '<S609>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(234);
    }

    /* End of Outputs for SubSystem: '<S503>/OldValue' */
  }

  /* End of If: '<S503>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S370>/motohawk_fault_action5'
   *
   * Regarding '<S370>/motohawk_fault_action5':
     Get Fault Action Status: Temperature_Solid
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_RelationalOperator11_d = GetFaultActionStatus(15);
  }

  /* DataTypeConversion: '<S370>/Data Type Conversion' */
  rtb_UnitDelay_o = (real_T)rtb_RelationalOperator11_d;

  /* S-Function (motohawk_sfun_fault_action): '<S370>/motohawk_fault_action6'
   *
   * Regarding '<S370>/motohawk_fault_action6':
     Get Fault Action Status: Temperature_Flash
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_RelationalOperator11_d = GetFaultActionStatus(14);
  }

  /* DataTypeConversion: '<S370>/Data Type Conversion1' */
  rtb_UnitDelay_m = (real_T)rtb_RelationalOperator11_d;

  /* Stateflow: '<S370>/Chart' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S370>/motohawk_data_read'
   */

  /* Gateway: Foreground/Outputs/Driver Ouputs/Chart */
  /* During: Foreground/Outputs/Driver Ouputs/Chart */
  if (Mooventure2016_Rev5_DWork.s486_is_active_c22_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/Driver Ouputs/Chart */
    Mooventure2016_Rev5_DWork.s486_is_active_c22_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S486>:2' */
    Mooventure2016_Rev5_DWork.s486_is_c22_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Normal;
  } else {
    switch (Mooventure2016_Rev5_DWork.s486_is_c22_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_FlashOff:
      /* During 'FlashOff': '<S486>:11' */
      if (rtb_UnitDelay_m == 0.0) {
        /* Transition: '<S486>:22' */
        Mooventure2016_Rev5_DWork.s486_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal;
      } else {
        Mooventure2016_Rev5_B.s486_engTemp = 23.0;
        Mooventure2016_Rev5_B.s486_transTemp = 23.0;
        Mooventure2016_Rev5_B.s486_timerOut = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_FlashOn:
      /* During 'FlashOn': '<S486>:8' */
      if (rtb_UnitDelay_m == 0.0) {
        /* Transition: '<S486>:10' */
        Mooventure2016_Rev5_DWork.s486_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal;
      } else if (Mooventure2016_Rev5_B.s486_engTemp == 200.0) {
        /* Transition: '<S486>:24' */
        Mooventure2016_Rev5_DWork.s486_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Wait;
      } else {
        Mooventure2016_Rev5_B.s486_engTemp = 200.0;
        Mooventure2016_Rev5_B.s486_transTemp = 200.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Normal:
      /* During 'Normal': '<S486>:1' */
      if (rtb_UnitDelay_o == 1.0) {
        /* Transition: '<S486>:4' */
        Mooventure2016_Rev5_DWork.s486_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Solid;
      } else if (rtb_UnitDelay_m == 1.0) {
        /* Transition: '<S486>:9' */
        Mooventure2016_Rev5_DWork.s486_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_FlashOn;
      } else {
        Mooventure2016_Rev5_B.s486_engTemp = 23.0;
        Mooventure2016_Rev5_B.s486_transTemp = 23.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Solid:
      /* During 'Solid': '<S486>:3' */
      if (rtb_UnitDelay_o == 0.0) {
        /* Transition: '<S486>:6' */
        Mooventure2016_Rev5_DWork.s486_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal;
      } else {
        Mooventure2016_Rev5_B.s486_engTemp = 200.0;
        Mooventure2016_Rev5_B.s486_transTemp = 200.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Wait:
      /* During 'Wait': '<S486>:23' */
      if (TimerOne1_DataStore() == TRUE) {
        /* Transition: '<S486>:25' */
        Mooventure2016_Rev5_DWork.s486_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_FlashOff;
      } else {
        Mooventure2016_Rev5_B.s486_timerOut = 1.0;
      }
      break;

     default:
      /* Transition: '<S486>:2' */
      Mooventure2016_Rev5_DWork.s486_is_c22_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Normal;
      break;
    }
  }

  /* End of Stateflow: '<S370>/Chart' */
  /* If: '<S504>/If' incorporates:
   *  Inport: '<S610>/In1'
   *  Inport: '<S611>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S504>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S504>/override_enable'
   */
  if ((Eng_Cool_Temp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S504>/NewValue' incorporates:
     *  ActionPort: '<S610>/Action Port'
     */
    rtb_Merge_cu = (Eng_Cool_Temp_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S610>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(235);
    }

    /* End of Outputs for SubSystem: '<S504>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S504>/OldValue' incorporates:
     *  ActionPort: '<S611>/Action Port'
     */
    rtb_Merge_cu = Mooventure2016_Rev5_B.s486_engTemp;

    /* S-Function (motohawk_sfun_code_cover): '<S611>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(236);
    }

    /* End of Outputs for SubSystem: '<S504>/OldValue' */
  }

  /* End of If: '<S504>/If' */

  /* If: '<S505>/If' incorporates:
   *  Inport: '<S612>/In1'
   *  Inport: '<S613>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S505>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S505>/override_enable'
   */
  if ((Me_Cool_Temp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S505>/NewValue' incorporates:
     *  ActionPort: '<S612>/Action Port'
     */
    rtb_Merge_nyh = (Me_Cool_Temp_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S612>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(237);
    }

    /* End of Outputs for SubSystem: '<S505>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S505>/OldValue' incorporates:
     *  ActionPort: '<S613>/Action Port'
     */
    rtb_Merge_nyh = Mooventure2016_Rev5_B.s486_transTemp;

    /* S-Function (motohawk_sfun_code_cover): '<S613>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(238);
    }

    /* End of Outputs for SubSystem: '<S505>/OldValue' */
  }

  /* End of If: '<S505>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S370>/Send CAN Messages' */
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

  /* Abs: '<S370>/Abs1' */
  Mooventure2016_Rev5_B.s370_Engine_Speed = fabs
    (Mooventure2016_Rev5_B.s330_Merge);

  /* If: '<S506>/If' incorporates:
   *  Inport: '<S614>/In1'
   *  Inport: '<S615>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S506>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S506>/override_enable'
   */
  if ((Engine_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S506>/NewValue' incorporates:
     *  ActionPort: '<S614>/Action Port'
     */
    rtb_Merge_m = (Engine_Speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S614>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(239);
    }

    /* End of Outputs for SubSystem: '<S506>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S506>/OldValue' incorporates:
     *  ActionPort: '<S615>/Action Port'
     */
    rtb_Merge_m = Mooventure2016_Rev5_B.s370_Engine_Speed;

    /* S-Function (motohawk_sfun_code_cover): '<S615>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(240);
    }

    /* End of Outputs for SubSystem: '<S506>/OldValue' */
  }

  /* End of If: '<S506>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S370>/Send CAN Messages1' */
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

  /* Product: '<S370>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S370>/motohawk_calibration38'
   */
  rtb_UnitDelay_o = rtb_Sum1 * (SOC_Multiplier_DataStore());

  /* Sum: '<S370>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S370>/motohawk_calibration39'
   */
  Mooventure2016_Rev5_B.s370_Current = rtb_UnitDelay_o - (SOC_Subtract_DataStore
    ());

  /* If: '<S507>/If' incorporates:
   *  Inport: '<S616>/In1'
   *  Inport: '<S617>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S507>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S507>/override_enable'
   */
  if ((Current_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S507>/NewValue' incorporates:
     *  ActionPort: '<S616>/Action Port'
     */
    rtb_Merge_k = (Current_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S616>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(241);
    }

    /* End of Outputs for SubSystem: '<S507>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S507>/OldValue' incorporates:
     *  ActionPort: '<S617>/Action Port'
     */
    rtb_Merge_k = Mooventure2016_Rev5_B.s370_Current;

    /* S-Function (motohawk_sfun_code_cover): '<S617>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(242);
    }

    /* End of Outputs for SubSystem: '<S507>/OldValue' */
  }

  /* End of If: '<S507>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S370>/Send CAN Messages2' */
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

  /* Product: '<S370>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S370>/motohawk_calibration7'
   */
  rtb_UnitDelay_o = (RPM_to_Wheel_Speed_Multiplier_DataStore()) *
    Mooventure2016_Rev5_B.s330_Merge;

  /* Abs: '<S370>/Abs2' incorporates:
   *  Product: '<S370>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S370>/motohawk_calibration8'
   */
  Mooventure2016_Rev5_B.s370_Vehi_Speed = fabs(rtb_UnitDelay_o *
    (MPH_to_KMH_DataStore()));

  /* If: '<S496>/If' incorporates:
   *  Inport: '<S594>/In1'
   *  Inport: '<S595>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S496>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S496>/override_enable'
   */
  if ((Vehicle_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S496>/NewValue' incorporates:
     *  ActionPort: '<S594>/Action Port'
     */
    rtb_Merge_e3 = (Vehicle_Speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S594>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(219);
    }

    /* End of Outputs for SubSystem: '<S496>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S496>/OldValue' incorporates:
     *  ActionPort: '<S595>/Action Port'
     */
    rtb_Merge_e3 = Mooventure2016_Rev5_B.s370_Vehi_Speed;

    /* S-Function (motohawk_sfun_code_cover): '<S595>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(220);
    }

    /* End of Outputs for SubSystem: '<S496>/OldValue' */
  }

  /* End of If: '<S496>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S370>/Send CAN Messages4' */
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

  /* Outputs for Enabled SubSystem: '<S370>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S488>/Enable'
   */
  if (Mooventure2016_Rev5_B.s486_timerOut > 0.0) {
    /* Stateflow: '<S488>/Bar Chart Reset' */
    Mooventure2016_Rev5_Chart_a((Temp_Flash_DataStore()),
      &Mooventure2016_Rev5_B.s488_sf_BarChartReset,
      &Mooventure2016_Rev5_DWork.s488_sf_BarChartReset);
  }

  /* End of Outputs for SubSystem: '<S370>/Enabled Subsystem' */

  /* S-Function (motohawk_sfun_data_write): '<S370>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimerOne1 */
  {
    TimerOne1_DataStore() =
      Mooventure2016_Rev5_B.s488_sf_BarChartReset.s173_write;
  }

  /* S-Function Block: <S489>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s489_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ka = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S489>/Switch1' incorporates:
   *  Constant: '<S370>/ 1'
   */
  if (Mooventure2016_Rev5_ConstB.s489_DataTypeConversion) {
    rtb_Product2_f = 0.0;
  } else {
    /* MinMax: '<S509>/MinMax' incorporates:
     *  Constant: '<S370>/   '
     *  Gain: '<S370>/Gain'
     *  Product: '<S489>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S489>/motohawk_delta_time'
     */
    rtb_UnitDelay_m = 0.00027777777777777778 * rtb_UnitDelay_o *
      rtb_motohawk_delta_time_ka;
    rtb_UnitDelay_m = rtb_UnitDelay_m >= 0.0 ? rtb_UnitDelay_m : 0.0;

    /* MinMax: '<S509>/MinMax1' incorporates:
     *  Constant: '<S370>/   '
     *  MinMax: '<S509>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S370>/motohawk_calibration'
     */
    rtb_Product2_f = (rtb_UnitDelay_m <= (Max_Dist_Travel_In_Sec_DataStore())) ||
      rtIsNaN((Max_Dist_Travel_In_Sec_DataStore())) ? rtb_UnitDelay_m :
      (Max_Dist_Travel_In_Sec_DataStore());
  }

  /* End of Switch: '<S489>/Switch1' */
  /* Sum: '<S370>/Add' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S370>/motohawk_data_read2'
   */
  rtb_Add = rtb_Product2_f + Dist_Trv_DataStore();

  /* S-Function (motohawk_sfun_data_write): '<S370>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Dist_Trv */
  {
    Dist_Trv_DataStore() = rtb_Add;
  }

  /* MATLAB Function Block: '<S370>/Embedded MATLAB Function' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S370>/motohawk_fault_action3'
   *  S-Function (motohawk_sfun_fault_action): '<S370>/motohawk_fault_action7'
   */

  /* MATLAB Function 'Foreground/Outputs/Driver Ouputs/Embedded MATLAB Function': '<S487>:1' */
  if (GetFaultActionStatus(4) == TRUE) {
    /* '<S487>:1:3' */
    /* '<S487>:1:4' */
    Mooventure2016_Rev5_B.s487_CEL = 2.0;
  } else if (GetFaultActionStatus(3) == TRUE) {
    /* '<S487>:1:5' */
    /* '<S487>:1:6' */
    Mooventure2016_Rev5_B.s487_CEL = 1.0;
  } else {
    /* '<S487>:1:8' */
    Mooventure2016_Rev5_B.s487_CEL = 0.0;
  }

  /* End of MATLAB Function Block: '<S370>/Embedded MATLAB Function' */
  /* If: '<S498>/If' incorporates:
   *  Inport: '<S598>/In1'
   *  Inport: '<S599>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S498>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S498>/override_enable'
   */
  if ((Check_Engine_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S498>/NewValue' incorporates:
     *  ActionPort: '<S598>/Action Port'
     */
    rtb_Merge_of = (Check_Engine_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S598>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(223);
    }

    /* End of Outputs for SubSystem: '<S498>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S498>/OldValue' incorporates:
     *  ActionPort: '<S599>/Action Port'
     */
    rtb_Merge_of = Mooventure2016_Rev5_B.s487_CEL;

    /* S-Function (motohawk_sfun_code_cover): '<S599>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(224);
    }

    /* End of Outputs for SubSystem: '<S498>/OldValue' */
  }

  /* End of If: '<S498>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S370>/motohawk_fault_action4'
   *
   * Regarding '<S370>/motohawk_fault_action4':
     Get Fault Action Status: Batt_Light
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s370_Battery_Light = GetFaultActionStatus(0);
  }

  /* If: '<S499>/If' incorporates:
   *  Inport: '<S600>/In1'
   *  Inport: '<S601>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S499>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S499>/override_enable'
   */
  if ((Battery_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S499>/NewValue' incorporates:
     *  ActionPort: '<S600>/Action Port'
     */
    rtb_Merge_en = (Battery_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S600>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(225);
    }

    /* End of Outputs for SubSystem: '<S499>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S499>/OldValue' incorporates:
     *  ActionPort: '<S601>/Action Port'
     */
    rtb_Merge_en = Mooventure2016_Rev5_B.s370_Battery_Light;

    /* S-Function (motohawk_sfun_code_cover): '<S601>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(226);
    }

    /* End of Outputs for SubSystem: '<S499>/OldValue' */
  }

  /* End of If: '<S499>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S370>/Send CAN Messages6' */
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

  /* MATLAB Function Block: '<S370>/ODO_CALC' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S370>/motohawk_data_read3'
   *  S-Function (motohawk_sfun_data_read): '<S370>/motohawk_data_read4'
   */

  /* MATLAB Function 'Foreground/Outputs/Driver Ouputs/ODO_CALC': '<S490>:1' */
  if (Dist_Trv_DataStore() >= 0.016666666) {
    /* '<S490>:1:3' */
    if (ODO_INCRE_DataStore() - 0.0001 <= 0.0) {
      /* '<S490>:1:4' */
      /* '<S490>:1:5' */
      rtb_ODO_out = (0.05 + ODO_INCRE_DataStore()) - 0.0001;

      /* '<S490>:1:6' */
      rtb_reset = 0.0;
    } else {
      /* '<S490>:1:8' */
      rtb_ODO_out = ODO_INCRE_DataStore() - 0.0001;

      /* '<S490>:1:9' */
      rtb_reset = 0.0;
    }
  } else {
    /* '<S490>:1:12' */
    rtb_ODO_out = ODO_INCRE_DataStore();

    /* '<S490>:1:13' */
    rtb_reset = Dist_Trv_DataStore();
  }

  /* End of MATLAB Function Block: '<S370>/ODO_CALC' */

  /* S-Function (motohawk_sfun_data_write): '<S370>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: Dist_Trv */
  {
    Dist_Trv_DataStore() = rtb_reset;
  }

  /* S-Function (motohawk_sfun_data_write): '<S370>/motohawk_data_write3' */
  /* Write to Data Storage as scalar: ODO_INCRE */
  {
    ODO_INCRE_DataStore() = rtb_ODO_out;
  }

  /* If: '<S494>/If' incorporates:
   *  Inport: '<S590>/In1'
   *  Inport: '<S591>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S370>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S494>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S494>/override_enable'
   */
  if ((BCU_Caution_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S494>/NewValue' incorporates:
     *  ActionPort: '<S590>/Action Port'
     */
    rtb_Merge_iz = (BCU_Caution_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S590>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(215);
    }

    /* End of Outputs for SubSystem: '<S494>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S494>/OldValue' incorporates:
     *  ActionPort: '<S591>/Action Port'
     */
    rtb_Merge_iz = (BCU_Caution_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S591>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(216);
    }

    /* End of Outputs for SubSystem: '<S494>/OldValue' */
  }

  /* End of If: '<S494>/If' */

  /* If: '<S495>/If' incorporates:
   *  Inport: '<S592>/In1'
   *  Inport: '<S593>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S370>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_calibration): '<S495>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S495>/override_enable'
   */
  if ((BCU_Hazard_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S495>/NewValue' incorporates:
     *  ActionPort: '<S592>/Action Port'
     */
    rtb_Merge_gv = (BCU_Hazard_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S592>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(217);
    }

    /* End of Outputs for SubSystem: '<S495>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S495>/OldValue' incorporates:
     *  ActionPort: '<S593>/Action Port'
     */
    rtb_Merge_gv = (BCU_Hazard_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S593>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(218);
    }

    /* End of Outputs for SubSystem: '<S495>/OldValue' */
  }

  /* End of If: '<S495>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S370>/Send CAN Messages3' */
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

  /* S-Function (motohawk_sfun_probe): '<S370>/motohawk_probe10' */
  (BCU_Caution_Prb_DataStore()) = (BCU_Caution_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S370>/motohawk_probe11' */
  (BCU_Hazard_Prb_DataStore()) = (BCU_Hazard_DataStore());

  /* S-Function (motohawk_sfun_data_read): '<S370>/motohawk_data_read5' */
  Mooventure2016_Rev5_B.s370_ODO_Count = ODO_INCRE_DataStore();

  /* If: '<S497>/If' incorporates:
   *  Inport: '<S596>/In1'
   *  Inport: '<S597>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S497>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S497>/override_enable'
   */
  if ((ODO_Count_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S497>/NewValue' incorporates:
     *  ActionPort: '<S596>/Action Port'
     */
    rtb_Merge_mf = (ODO_Count_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S596>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(221);
    }

    /* End of Outputs for SubSystem: '<S497>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S497>/OldValue' incorporates:
     *  ActionPort: '<S597>/Action Port'
     */
    rtb_Merge_mf = Mooventure2016_Rev5_B.s370_ODO_Count;

    /* S-Function (motohawk_sfun_code_cover): '<S597>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(222);
    }

    /* End of Outputs for SubSystem: '<S497>/OldValue' */
  }

  /* End of If: '<S497>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S370>/Send CAN Messages5' */
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

  /* If: '<S516>/If' incorporates:
   *  Inport: '<S548>/In1'
   *  Inport: '<S549>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration18'
   *  S-Function (motohawk_sfun_calibration): '<S516>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S516>/override_enable'
   */
  if ((DATA_MODE_2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S516>/NewValue' incorporates:
     *  ActionPort: '<S548>/Action Port'
     */
    rtb_Merge_pb = (DATA_MODE_2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S548>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(173);
    }

    /* End of Outputs for SubSystem: '<S516>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S516>/OldValue' incorporates:
     *  ActionPort: '<S549>/Action Port'
     */
    rtb_Merge_pb = (DATA_MODE_2_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S549>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(174);
    }

    /* End of Outputs for SubSystem: '<S516>/OldValue' */
  }

  /* End of If: '<S516>/If' */

  /* If: '<S517>/If' incorporates:
   *  Inport: '<S550>/In1'
   *  Inport: '<S551>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration19'
   *  S-Function (motohawk_sfun_calibration): '<S517>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S517>/override_enable'
   */
  if ((VIN_DATA_BYTE_1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S517>/NewValue' incorporates:
     *  ActionPort: '<S550>/Action Port'
     */
    rtb_Merge_og = (VIN_DATA_BYTE_1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S550>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(175);
    }

    /* End of Outputs for SubSystem: '<S517>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S517>/OldValue' incorporates:
     *  ActionPort: '<S551>/Action Port'
     */
    rtb_Merge_og = (VIN_DATA_BYTE_1_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S551>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(176);
    }

    /* End of Outputs for SubSystem: '<S517>/OldValue' */
  }

  /* End of If: '<S517>/If' */

  /* If: '<S518>/If' incorporates:
   *  Inport: '<S552>/In1'
   *  Inport: '<S553>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration20'
   *  S-Function (motohawk_sfun_calibration): '<S518>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S518>/override_enable'
   */
  if ((VIN_DATA_BYTE_2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S518>/NewValue' incorporates:
     *  ActionPort: '<S552>/Action Port'
     */
    rtb_Merge_d = (VIN_DATA_BYTE_2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S552>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(177);
    }

    /* End of Outputs for SubSystem: '<S518>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S518>/OldValue' incorporates:
     *  ActionPort: '<S553>/Action Port'
     */
    rtb_Merge_d = (VIN_DATA_BYTE_2_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S553>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(178);
    }

    /* End of Outputs for SubSystem: '<S518>/OldValue' */
  }

  /* End of If: '<S518>/If' */

  /* If: '<S519>/If' incorporates:
   *  Inport: '<S554>/In1'
   *  Inport: '<S555>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration21'
   *  S-Function (motohawk_sfun_calibration): '<S519>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S519>/override_enable'
   */
  if ((VIN_DATA_BYTE_3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S519>/NewValue' incorporates:
     *  ActionPort: '<S554>/Action Port'
     */
    rtb_Merge_ho = (VIN_DATA_BYTE_3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S554>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(179);
    }

    /* End of Outputs for SubSystem: '<S519>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S519>/OldValue' incorporates:
     *  ActionPort: '<S555>/Action Port'
     */
    rtb_Merge_ho = (VIN_DATA_BYTE_3_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S555>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(180);
    }

    /* End of Outputs for SubSystem: '<S519>/OldValue' */
  }

  /* End of If: '<S519>/If' */

  /* If: '<S520>/If' incorporates:
   *  Inport: '<S556>/In1'
   *  Inport: '<S557>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration22'
   *  S-Function (motohawk_sfun_calibration): '<S520>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S520>/override_enable'
   */
  if ((VIN_DATA_BYTE_4_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S520>/NewValue' incorporates:
     *  ActionPort: '<S556>/Action Port'
     */
    rtb_Merge_mb = (VIN_DATA_BYTE_4_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S556>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(181);
    }

    /* End of Outputs for SubSystem: '<S520>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S520>/OldValue' incorporates:
     *  ActionPort: '<S557>/Action Port'
     */
    rtb_Merge_mb = (VIN_DATA_BYTE_4_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S557>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(182);
    }

    /* End of Outputs for SubSystem: '<S520>/OldValue' */
  }

  /* End of If: '<S520>/If' */

  /* If: '<S521>/If' incorporates:
   *  Inport: '<S558>/In1'
   *  Inport: '<S559>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration23'
   *  S-Function (motohawk_sfun_calibration): '<S521>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S521>/override_enable'
   */
  if ((VIN_DATA_BYTE_5_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S521>/NewValue' incorporates:
     *  ActionPort: '<S558>/Action Port'
     */
    rtb_Merge_fj = (VIN_DATA_BYTE_5_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S558>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(183);
    }

    /* End of Outputs for SubSystem: '<S521>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S521>/OldValue' incorporates:
     *  ActionPort: '<S559>/Action Port'
     */
    rtb_Merge_fj = (VIN_DATA_BYTE_5_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S559>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(184);
    }

    /* End of Outputs for SubSystem: '<S521>/OldValue' */
  }

  /* End of If: '<S521>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S492>/Send CAN Messages10' */
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

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe26' */
  (DATA_MODE_2_Prb_DataStore()) = (DATA_MODE_2_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe27' */
  (VIN_DATA_BYTE_1_Prb_DataStore()) = (VIN_DATA_BYTE_1_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe28' */
  (VIN_DATA_BYTE_2_Prb_DataStore()) = (VIN_DATA_BYTE_2_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe29' */
  (VIN_DATA_BYTE_3_Prb_DataStore()) = (VIN_DATA_BYTE_3_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe30' */
  (VIN_DATA_BYTE_4_Prb_DataStore()) = (VIN_DATA_BYTE_4_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe31' */
  (VIN_DATA_BYTE_5_Prb_DataStore()) = (VIN_DATA_BYTE_5_DataStore());

  /* If: '<S522>/If' incorporates:
   *  Inport: '<S560>/In1'
   *  Inport: '<S561>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration24'
   *  S-Function (motohawk_sfun_calibration): '<S522>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S522>/override_enable'
   */
  if ((DATA_MODE_3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S522>/NewValue' incorporates:
     *  ActionPort: '<S560>/Action Port'
     */
    rtb_Merge_ah = (DATA_MODE_3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S560>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(185);
    }

    /* End of Outputs for SubSystem: '<S522>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S522>/OldValue' incorporates:
     *  ActionPort: '<S561>/Action Port'
     */
    rtb_Merge_ah = (DATA_MODE_3_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S561>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(186);
    }

    /* End of Outputs for SubSystem: '<S522>/OldValue' */
  }

  /* End of If: '<S522>/If' */

  /* If: '<S523>/If' incorporates:
   *  Inport: '<S562>/In1'
   *  Inport: '<S563>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration25'
   *  S-Function (motohawk_sfun_calibration): '<S523>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S523>/override_enable'
   */
  if ((VIN_DATA_BYTE_6_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S523>/NewValue' incorporates:
     *  ActionPort: '<S562>/Action Port'
     */
    rtb_Merge_ko = (VIN_DATA_BYTE_6_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S562>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(187);
    }

    /* End of Outputs for SubSystem: '<S523>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S523>/OldValue' incorporates:
     *  ActionPort: '<S563>/Action Port'
     */
    rtb_Merge_ko = (VIN_DATA_BYTE_6_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S563>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(188);
    }

    /* End of Outputs for SubSystem: '<S523>/OldValue' */
  }

  /* End of If: '<S523>/If' */

  /* If: '<S524>/If' incorporates:
   *  Inport: '<S564>/In1'
   *  Inport: '<S565>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration26'
   *  S-Function (motohawk_sfun_calibration): '<S524>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S524>/override_enable'
   */
  if ((VIN_DATA_BYTE_7_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S524>/NewValue' incorporates:
     *  ActionPort: '<S564>/Action Port'
     */
    rtb_Merge_pj = (VIN_DATA_BYTE_7_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S564>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(189);
    }

    /* End of Outputs for SubSystem: '<S524>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S524>/OldValue' incorporates:
     *  ActionPort: '<S565>/Action Port'
     */
    rtb_Merge_pj = (VIN_DATA_BYTE_7_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S565>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(190);
    }

    /* End of Outputs for SubSystem: '<S524>/OldValue' */
  }

  /* End of If: '<S524>/If' */

  /* If: '<S525>/If' incorporates:
   *  Inport: '<S566>/In1'
   *  Inport: '<S567>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration27'
   *  S-Function (motohawk_sfun_calibration): '<S525>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S525>/override_enable'
   */
  if ((VIN_DATA_BYTE_8_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S525>/NewValue' incorporates:
     *  ActionPort: '<S566>/Action Port'
     */
    rtb_Merge_cd = (VIN_DATA_BYTE_8_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S566>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(191);
    }

    /* End of Outputs for SubSystem: '<S525>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S525>/OldValue' incorporates:
     *  ActionPort: '<S567>/Action Port'
     */
    rtb_Merge_cd = (VIN_DATA_BYTE_8_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S567>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(192);
    }

    /* End of Outputs for SubSystem: '<S525>/OldValue' */
  }

  /* End of If: '<S525>/If' */

  /* If: '<S526>/If' incorporates:
   *  Inport: '<S568>/In1'
   *  Inport: '<S569>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration28'
   *  S-Function (motohawk_sfun_calibration): '<S526>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S526>/override_enable'
   */
  if ((VIN_DATA_BYTE_9_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S526>/NewValue' incorporates:
     *  ActionPort: '<S568>/Action Port'
     */
    rtb_Merge_ca = (VIN_DATA_BYTE_9_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S568>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(193);
    }

    /* End of Outputs for SubSystem: '<S526>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S526>/OldValue' incorporates:
     *  ActionPort: '<S569>/Action Port'
     */
    rtb_Merge_ca = (VIN_DATA_BYTE_9_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S569>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(194);
    }

    /* End of Outputs for SubSystem: '<S526>/OldValue' */
  }

  /* End of If: '<S526>/If' */

  /* If: '<S527>/If' incorporates:
   *  Inport: '<S570>/In1'
   *  Inport: '<S571>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration29'
   *  S-Function (motohawk_sfun_calibration): '<S527>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S527>/override_enable'
   */
  if ((VIN_DATA_BYTE_10_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S527>/NewValue' incorporates:
     *  ActionPort: '<S570>/Action Port'
     */
    rtb_Merge_mw = (VIN_DATA_BYTE_10_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S570>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(195);
    }

    /* End of Outputs for SubSystem: '<S527>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S527>/OldValue' incorporates:
     *  ActionPort: '<S571>/Action Port'
     */
    rtb_Merge_mw = (VIN_DATA_BYTE_10_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S571>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(196);
    }

    /* End of Outputs for SubSystem: '<S527>/OldValue' */
  }

  /* End of If: '<S527>/If' */

  /* If: '<S528>/If' incorporates:
   *  Inport: '<S572>/In1'
   *  Inport: '<S573>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration30'
   *  S-Function (motohawk_sfun_calibration): '<S528>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S528>/override_enable'
   */
  if ((VIN_DATA_BYTE_11_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S528>/NewValue' incorporates:
     *  ActionPort: '<S572>/Action Port'
     */
    rtb_Merge_bm = (VIN_DATA_BYTE_11_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S572>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(197);
    }

    /* End of Outputs for SubSystem: '<S528>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S528>/OldValue' incorporates:
     *  ActionPort: '<S573>/Action Port'
     */
    rtb_Merge_bm = (VIN_DATA_BYTE_11_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S573>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(198);
    }

    /* End of Outputs for SubSystem: '<S528>/OldValue' */
  }

  /* End of If: '<S528>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S492>/Send CAN Messages11' */
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

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe32' */
  (DATA_MODE_3_Prb_DataStore()) = (DATA_MODE_3_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe33' */
  (VIN_DATA_BYTE_6_Prb_DataStore()) = (VIN_DATA_BYTE_6_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe34' */
  (VIN_DATA_BYTE_7_Prb_DataStore()) = (VIN_DATA_BYTE_7_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe35' */
  (VIN_DATA_BYTE_8_Prb_DataStore()) = (VIN_DATA_BYTE_8_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe36' */
  (VIN_DATA_BYTE_9_Prb_DataStore()) = (VIN_DATA_BYTE_9_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe37' */
  (VIN_DATA_BYTE_10_Prb_DataStore()) = (VIN_DATA_BYTE_10_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe38' */
  (VIN_DATA_BYTE_11_Prb_DataStore()) = (VIN_DATA_BYTE_11_DataStore());

  /* If: '<S529>/If' incorporates:
   *  Inport: '<S574>/In1'
   *  Inport: '<S575>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration31'
   *  S-Function (motohawk_sfun_calibration): '<S529>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S529>/override_enable'
   */
  if ((DATA_MODE_4_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S529>/NewValue' incorporates:
     *  ActionPort: '<S574>/Action Port'
     */
    rtb_Merge_dh = (DATA_MODE_4_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S574>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(199);
    }

    /* End of Outputs for SubSystem: '<S529>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S529>/OldValue' incorporates:
     *  ActionPort: '<S575>/Action Port'
     */
    rtb_Merge_dh = (DATA_MODE_4_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S575>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(200);
    }

    /* End of Outputs for SubSystem: '<S529>/OldValue' */
  }

  /* End of If: '<S529>/If' */

  /* If: '<S530>/If' incorporates:
   *  Inport: '<S576>/In1'
   *  Inport: '<S577>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration32'
   *  S-Function (motohawk_sfun_calibration): '<S530>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S530>/override_enable'
   */
  if ((VIN_DATA_BYTE_12_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S530>/NewValue' incorporates:
     *  ActionPort: '<S576>/Action Port'
     */
    rtb_Merge_j = (VIN_DATA_BYTE_12_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S576>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(201);
    }

    /* End of Outputs for SubSystem: '<S530>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S530>/OldValue' incorporates:
     *  ActionPort: '<S577>/Action Port'
     */
    rtb_Merge_j = (VIN_DATA_BYTE_12_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S577>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(202);
    }

    /* End of Outputs for SubSystem: '<S530>/OldValue' */
  }

  /* End of If: '<S530>/If' */

  /* If: '<S531>/If' incorporates:
   *  Inport: '<S578>/In1'
   *  Inport: '<S579>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration33'
   *  S-Function (motohawk_sfun_calibration): '<S531>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S531>/override_enable'
   */
  if ((VIN_DATA_BYTE_13_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S531>/NewValue' incorporates:
     *  ActionPort: '<S578>/Action Port'
     */
    rtb_Merge_izg = (VIN_DATA_BYTE_13_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S578>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(203);
    }

    /* End of Outputs for SubSystem: '<S531>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S531>/OldValue' incorporates:
     *  ActionPort: '<S579>/Action Port'
     */
    rtb_Merge_izg = (VIN_DATA_BYTE_13_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S579>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(204);
    }

    /* End of Outputs for SubSystem: '<S531>/OldValue' */
  }

  /* End of If: '<S531>/If' */

  /* If: '<S532>/If' incorporates:
   *  Inport: '<S580>/In1'
   *  Inport: '<S581>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration34'
   *  S-Function (motohawk_sfun_calibration): '<S532>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S532>/override_enable'
   */
  if ((VIN_DATA_BYTE_14_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S532>/NewValue' incorporates:
     *  ActionPort: '<S580>/Action Port'
     */
    rtb_Merge_dv = (VIN_DATA_BYTE_14_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S580>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(205);
    }

    /* End of Outputs for SubSystem: '<S532>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S532>/OldValue' incorporates:
     *  ActionPort: '<S581>/Action Port'
     */
    rtb_Merge_dv = (VIN_DATA_BYTE_14_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S581>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(206);
    }

    /* End of Outputs for SubSystem: '<S532>/OldValue' */
  }

  /* End of If: '<S532>/If' */

  /* If: '<S533>/If' incorporates:
   *  Inport: '<S582>/In1'
   *  Inport: '<S583>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration35'
   *  S-Function (motohawk_sfun_calibration): '<S533>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S533>/override_enable'
   */
  if ((VIN_DATA_BYTE_15_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S533>/NewValue' incorporates:
     *  ActionPort: '<S582>/Action Port'
     */
    rtb_Merge_hod = (VIN_DATA_BYTE_15_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S582>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(207);
    }

    /* End of Outputs for SubSystem: '<S533>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S533>/OldValue' incorporates:
     *  ActionPort: '<S583>/Action Port'
     */
    rtb_Merge_hod = (VIN_DATA_BYTE_15_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S583>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(208);
    }

    /* End of Outputs for SubSystem: '<S533>/OldValue' */
  }

  /* End of If: '<S533>/If' */

  /* If: '<S534>/If' incorporates:
   *  Inport: '<S584>/In1'
   *  Inport: '<S585>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration36'
   *  S-Function (motohawk_sfun_calibration): '<S534>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S534>/override_enable'
   */
  if ((VIN_DATA_BYTE_16_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S534>/NewValue' incorporates:
     *  ActionPort: '<S584>/Action Port'
     */
    rtb_Merge_ov = (VIN_DATA_BYTE_16_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S584>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(209);
    }

    /* End of Outputs for SubSystem: '<S534>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S534>/OldValue' incorporates:
     *  ActionPort: '<S585>/Action Port'
     */
    rtb_Merge_ov = (VIN_DATA_BYTE_16_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S585>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(210);
    }

    /* End of Outputs for SubSystem: '<S534>/OldValue' */
  }

  /* End of If: '<S534>/If' */

  /* If: '<S535>/If' incorporates:
   *  Inport: '<S586>/In1'
   *  Inport: '<S587>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration37'
   *  S-Function (motohawk_sfun_calibration): '<S535>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S535>/override_enable'
   */
  if ((VIN_DATA_BYTE_17_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S535>/NewValue' incorporates:
     *  ActionPort: '<S586>/Action Port'
     */
    rtb_Merge_k2 = (VIN_DATA_BYTE_17_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S586>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(211);
    }

    /* End of Outputs for SubSystem: '<S535>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S535>/OldValue' incorporates:
     *  ActionPort: '<S587>/Action Port'
     */
    rtb_Merge_k2 = (VIN_DATA_BYTE_17_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S587>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(212);
    }

    /* End of Outputs for SubSystem: '<S535>/OldValue' */
  }

  /* End of If: '<S535>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S492>/Send CAN Messages12' */
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

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe39' */
  (DATA_MODE_4_Ovr_DataStore()) = (DATA_MODE_4_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe40' */
  (VIN_DATA_BYTE_12_Prb_DataStore()) = (VIN_DATA_BYTE_12_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe41' */
  (VIN_DATA_BYTE_13_Prb_DataStore()) = (VIN_DATA_BYTE_13_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe42' */
  (VIN_DATA_BYTE_14_Prb_DataStore()) = (VIN_DATA_BYTE_14_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe43' */
  (VIN_DATA_BYTE_15_Prb_DataStore()) = (VIN_DATA_BYTE_15_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe44' */
  (VIN_DATA_BYte_16_Prb_DataStore()) = (VIN_DATA_BYTE_16_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe45' */
  (VIN_DATA_BYTE_17_Prb_DataStore()) = (VIN_DATA_BYTE_17_DataStore());

  /* If: '<S510>/If' incorporates:
   *  Inport: '<S536>/In1'
   *  Inport: '<S537>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S510>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S510>/override_enable'
   */
  if ((Mode_1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S510>/NewValue' incorporates:
     *  ActionPort: '<S536>/Action Port'
     */
    rtb_Merge_md = (Mode_1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S536>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(161);
    }

    /* End of Outputs for SubSystem: '<S510>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S510>/OldValue' incorporates:
     *  ActionPort: '<S537>/Action Port'
     */
    rtb_Merge_md = (Mode_1_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S537>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(162);
    }

    /* End of Outputs for SubSystem: '<S510>/OldValue' */
  }

  /* End of If: '<S510>/If' */

  /* If: '<S511>/If' incorporates:
   *  Inport: '<S538>/In1'
   *  Inport: '<S539>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S511>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S511>/override_enable'
   */
  if ((Mode_2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S511>/NewValue' incorporates:
     *  ActionPort: '<S538>/Action Port'
     */
    rtb_Merge_gp = (Mode_2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S538>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(163);
    }

    /* End of Outputs for SubSystem: '<S511>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S511>/OldValue' incorporates:
     *  ActionPort: '<S539>/Action Port'
     */
    rtb_Merge_gp = (Mode_2_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S539>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(164);
    }

    /* End of Outputs for SubSystem: '<S511>/OldValue' */
  }

  /* End of If: '<S511>/If' */

  /* If: '<S512>/If' incorporates:
   *  Inport: '<S540>/In1'
   *  Inport: '<S541>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S512>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S512>/override_enable'
   */
  if ((Mode_3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S512>/NewValue' incorporates:
     *  ActionPort: '<S540>/Action Port'
     */
    rtb_Merge_mt = (Mode_3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S540>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(165);
    }

    /* End of Outputs for SubSystem: '<S512>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S512>/OldValue' incorporates:
     *  ActionPort: '<S541>/Action Port'
     */
    rtb_Merge_mt = (Mode_3_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S541>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(166);
    }

    /* End of Outputs for SubSystem: '<S512>/OldValue' */
  }

  /* End of If: '<S512>/If' */

  /* If: '<S513>/If' incorporates:
   *  Inport: '<S542>/In1'
   *  Inport: '<S543>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S513>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S513>/override_enable'
   */
  if ((Mode_4_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S513>/NewValue' incorporates:
     *  ActionPort: '<S542>/Action Port'
     */
    rtb_Merge_kq = (Mode_4_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S542>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(167);
    }

    /* End of Outputs for SubSystem: '<S513>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S513>/OldValue' incorporates:
     *  ActionPort: '<S543>/Action Port'
     */
    rtb_Merge_kq = (Mode_4_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S543>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(168);
    }

    /* End of Outputs for SubSystem: '<S513>/OldValue' */
  }

  /* End of If: '<S513>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S492>/Send CAN Messages8' */
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

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe20' */
  (Mode_1_Prb_DataStore()) = (Mode_1_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe21' */
  (Mode_2_Prb_DataStore()) = (Mode_2_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe22' */
  (Mode_3_Prb_DataStore()) = (Mode_3_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe23' */
  (Mode_4_Prb_DataStore()) = (Mode_4_DataStore());

  /* If: '<S514>/If' incorporates:
   *  Inport: '<S544>/In1'
   *  Inport: '<S545>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration16'
   *  S-Function (motohawk_sfun_calibration): '<S514>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S514>/override_enable'
   */
  if ((DATA_MODE_1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S514>/NewValue' incorporates:
     *  ActionPort: '<S544>/Action Port'
     */
    rtb_Merge_jo = (DATA_MODE_1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S544>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(169);
    }

    /* End of Outputs for SubSystem: '<S514>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S514>/OldValue' incorporates:
     *  ActionPort: '<S545>/Action Port'
     */
    rtb_Merge_jo = (Data_Mode_1_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S545>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(170);
    }

    /* End of Outputs for SubSystem: '<S514>/OldValue' */
  }

  /* End of If: '<S514>/If' */

  /* If: '<S515>/If' incorporates:
   *  Inport: '<S546>/In1'
   *  Inport: '<S547>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/motohawk_calibration17'
   *  S-Function (motohawk_sfun_calibration): '<S515>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S515>/override_enable'
   */
  if ((VEH_ID_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S515>/NewValue' incorporates:
     *  ActionPort: '<S546>/Action Port'
     */
    rtb_Merge_kz = (VEH_ID_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S546>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(171);
    }

    /* End of Outputs for SubSystem: '<S515>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S515>/OldValue' incorporates:
     *  ActionPort: '<S547>/Action Port'
     */
    rtb_Merge_kz = (VEH_ID_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S547>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(172);
    }

    /* End of Outputs for SubSystem: '<S515>/OldValue' */
  }

  /* End of If: '<S515>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S492>/Send CAN Messages9' */
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

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe24' */
  (DATA_MODE_1_Prb_DataStore()) = (Data_Mode_1_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S492>/motohawk_probe25' */
  (VEH_ID_Prb_DataStore()) = (VEH_ID_DataStore());

  /* If: '<S620>/If' incorporates:
   *  Inport: '<S625>/In1'
   *  Inport: '<S626>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S620>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S620>/override_enable'
   */
  if ((Current_Limit_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S620>/NewValue' incorporates:
     *  ActionPort: '<S625>/Action Port'
     */
    rtb_Merge_m4 = (Current_Limit_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S625>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(243);
    }

    /* End of Outputs for SubSystem: '<S620>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S620>/OldValue' incorporates:
     *  ActionPort: '<S626>/Action Port'
     */
    rtb_Merge_m4 = (MaxAmpCal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S626>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(244);
    }

    /* End of Outputs for SubSystem: '<S620>/OldValue' */
  }

  /* End of If: '<S620>/If' */

  /* If: '<S621>/If' incorporates:
   *  Inport: '<S627>/In1'
   *  Inport: '<S628>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S621>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S621>/override_enable'
   */
  if ((Voltage_Limit_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S621>/NewValue' incorporates:
     *  ActionPort: '<S627>/Action Port'
     */
    rtb_Merge_aq = (Voltage_Limit_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S627>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(245);
    }

    /* End of Outputs for SubSystem: '<S621>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S621>/OldValue' incorporates:
     *  ActionPort: '<S628>/Action Port'
     */
    rtb_Merge_aq = (MaxVoltageCal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S628>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(246);
    }

    /* End of Outputs for SubSystem: '<S621>/OldValue' */
  }

  /* End of If: '<S621>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S371>/motohawk_fault_action'
   *
   * Regarding '<S371>/motohawk_fault_action':
     Get Fault Action Status: EatonChargerFault
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s371_ChargeSystemFault = GetFaultActionStatus(8);
  }

  /* If: '<S622>/If' incorporates:
   *  Inport: '<S629>/In1'
   *  Inport: '<S630>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S622>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S622>/override_enable'
   */
  if ((Charge_Falt_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S622>/NewValue' incorporates:
     *  ActionPort: '<S629>/Action Port'
     */
    rtb_Merge_opu = (Charge_Falt_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S629>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(247);
    }

    /* End of Outputs for SubSystem: '<S622>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S622>/OldValue' incorporates:
     *  ActionPort: '<S630>/Action Port'
     */
    rtb_Merge_opu = Mooventure2016_Rev5_B.s371_ChargeSystemFault;

    /* S-Function (motohawk_sfun_code_cover): '<S630>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(248);
    }

    /* End of Outputs for SubSystem: '<S622>/OldValue' */
  }

  /* End of If: '<S622>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S201>/Read CAN Message5' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4023p0004_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4023p0004_Receive(0, &msg_id, 0, msg_data);
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
      Mooventure2016_Rev5_B.s201_TripAmpHoursIn = ((real_T) tmp0) / ((real_T)
        100);
      Mooventure2016_Rev5_B.s201_TripAmpHoursOut = ((real_T) tmp1) / ((real_T)
        100);
      Mooventure2016_Rev5_B.s201_StateOfChargeMax = ((real_T) tmp2) / ((real_T)
        2);
      Mooventure2016_Rev5_B.s201_StateOfChargeMin = ((real_T) tmp3) / ((real_T)
        2);
      Mooventure2016_Rev5_B.s201_TAH_RollingCounter = (real_T) tmp4;
    }
  }

  /* RelationalOperator: '<S371>/Relational Operator' */
  rtb_RelationalOperator11_d = (rtb_Sum1 <=
    Mooventure2016_Rev5_B.s201_StateOfChargeMax);

  /* Logic: '<S371>/Logical Operator2' */
  Mooventure2016_Rev5_B.s371_ChargeComplete = !rtb_RelationalOperator11_d;

  /* If: '<S623>/If' incorporates:
   *  Inport: '<S631>/In1'
   *  Inport: '<S632>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S623>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S623>/override_enable'
   */
  if ((Charge_Complete_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S623>/NewValue' incorporates:
     *  ActionPort: '<S631>/Action Port'
     */
    rtb_Merge_oz = (Charge_Complete_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S631>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(249);
    }

    /* End of Outputs for SubSystem: '<S623>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S623>/OldValue' incorporates:
     *  ActionPort: '<S632>/Action Port'
     */
    rtb_Merge_oz = Mooventure2016_Rev5_B.s371_ChargeComplete;

    /* S-Function (motohawk_sfun_code_cover): '<S632>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(250);
    }

    /* End of Outputs for SubSystem: '<S623>/OldValue' */
  }

  /* End of If: '<S623>/If' */

  /* If: '<S308>/If' incorporates:
   *  Inport: '<S323>/In1'
   *  Inport: '<S324>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S308>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S308>/override_enable'
   */
  if ((InputCurrentLimitMax_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S308>/NewValue' incorporates:
     *  ActionPort: '<S323>/Action Port'
     */
    rtb_Merge_lf = (InputCurrentLimitMax_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S323>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(69);
    }

    /* End of Outputs for SubSystem: '<S308>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S308>/OldValue' incorporates:
     *  ActionPort: '<S324>/Action Port'
     */
    rtb_Merge_lf = Mooventure2016_Rev5_B.s205_InputCurrentLimitMax;

    /* S-Function (motohawk_sfun_code_cover): '<S324>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(70);
    }

    /* End of Outputs for SubSystem: '<S308>/OldValue' */
  }

  /* End of If: '<S308>/If' */

  /* If: '<S309>/If' incorporates:
   *  Inport: '<S325>/In1'
   *  Inport: '<S326>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S309>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S309>/override_enable'
   */
  if ((InputCurrent_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S309>/NewValue' incorporates:
     *  ActionPort: '<S325>/Action Port'
     */
    rtb_Merge_hn = (InputCurrent_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S325>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(71);
    }

    /* End of Outputs for SubSystem: '<S309>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S309>/OldValue' incorporates:
     *  ActionPort: '<S326>/Action Port'
     */
    rtb_Merge_hn = Mooventure2016_Rev5_B.s205_InputCurrent;

    /* S-Function (motohawk_sfun_code_cover): '<S326>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(72);
    }

    /* End of Outputs for SubSystem: '<S309>/OldValue' */
  }

  /* End of If: '<S309>/If' */

  /* Logic: '<S371>/Logical Operator1' incorporates:
   *  Constant: '<S618>/Constant'
   *  Constant: '<S619>/Constant'
   *  Logic: '<S371>/Logical Operator'
   *  Logic: '<S371>/Logical Operator3'
   *  RelationalOperator: '<S371>/Relational Operator1'
   *  RelationalOperator: '<S618>/Compare'
   *  RelationalOperator: '<S619>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S371>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_data_read): '<S371>/motohawk_data_read'
   *  S-Function (motohawk_sfun_fault_action): '<S371>/motohawk_fault_action1'
   */
  Mooventure2016_Rev5_B.s371_ChargeEnable = ((((rtb_Merge_b == 2.0) ||
    (rtb_Merge_b == 1.0)) && rtb_RelationalOperator11_d && (rtb_Merge_hn <
    rtb_Merge_lf) && ((Charger_Auto_Start_DataStore()) != 0.0) &&
    Vehicle_Ready_DataStore() && (!GetFaultActionStatus(2))));

  /* If: '<S624>/If' incorporates:
   *  Inport: '<S633>/In1'
   *  Inport: '<S634>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S624>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S624>/override_enable'
   */
  if ((Charge_Enable_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S624>/NewValue' incorporates:
     *  ActionPort: '<S633>/Action Port'
     */
    rtb_Merge_ib = (Charge_Enable_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S633>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(251);
    }

    /* End of Outputs for SubSystem: '<S624>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S624>/OldValue' incorporates:
     *  ActionPort: '<S634>/Action Port'
     */
    rtb_Merge_ib = Mooventure2016_Rev5_B.s371_ChargeEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S634>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(252);
    }

    /* End of Outputs for SubSystem: '<S624>/OldValue' */
  }

  /* End of If: '<S624>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S371>/Send CAN Messages' */
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

  /* S-Function (motohawk_sfun_data_write): '<S371>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ChargeEnable */
  {
    ChargeEnable_DataStore() = Mooventure2016_Rev5_B.s371_ChargeEnable;
  }

  /* RelationalOperator: '<S371>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S371>/motohawk_calibration1'
   */
  rtb_RelationalOperator2_l = ((Mooventure2016_Rev5_B.s201_MaxCellVoltage >=
    (Max_Cell_Voltage_Limit_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S371>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Charge_Complete_Cell_Max_Volt */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(14, rtb_RelationalOperator2_l);
    UpdateFault(14);
  }

  /* S-Function (motohawk_sfun_probe): '<S371>/motohawk_probe1' */
  (Current_Limit_Probe_DataStore()) = (MaxAmpCal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S371>/motohawk_probe2' */
  (Voltage_Limit_Probe_DataStore()) = (MaxVoltageCal_DataStore());

  /* S-Function (motohawk_sfun_data_read): '<S372>/motohawk_data_read2' */
  rtb_RelationalOperator11_d = Torque_Enable_DataStore();

  /* Product: '<S372>/Product' */
  Mooventure2016_Rev5_B.s372_VSC_WheelTorqueRequest =
    Mooventure2016_Rev5_B.s80_Switch * (real_T)rtb_RelationalOperator11_d;

  /* If: '<S639>/If' incorporates:
   *  Inport: '<S658>/In1'
   *  Inport: '<S659>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S639>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S639>/override_enable'
   */
  if ((VSC_WheelTorqueRequest_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S639>/NewValue' incorporates:
     *  ActionPort: '<S658>/Action Port'
     */
    rtb_Merge_kv = (VSC_WheelTorqueRequest_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S658>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(257);
    }

    /* End of Outputs for SubSystem: '<S639>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S639>/OldValue' incorporates:
     *  ActionPort: '<S659>/Action Port'
     */
    rtb_Merge_kv = Mooventure2016_Rev5_B.s372_VSC_WheelTorqueRequest;

    /* S-Function (motohawk_sfun_code_cover): '<S659>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(258);
    }

    /* End of Outputs for SubSystem: '<S639>/OldValue' */
  }

  /* End of If: '<S639>/If' */

  /* S-Function (motohawk_sfun_data_read): '<S372>/motohawk_data_read3' */
  Mooventure2016_Rev5_B.s372_VSC_IPTEnable = Vehicle_Ready_DataStore();

  /* If: '<S640>/If' incorporates:
   *  Inport: '<S660>/In1'
   *  Inport: '<S661>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S640>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S640>/override_enable'
   */
  if ((VSC_IPTWakeup_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S640>/NewValue' incorporates:
     *  ActionPort: '<S660>/Action Port'
     */
    rtb_Merge_e0 = (VSC_IPTWakeup_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S660>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(259);
    }

    /* End of Outputs for SubSystem: '<S640>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S640>/OldValue' incorporates:
     *  ActionPort: '<S661>/Action Port'
     */
    rtb_Merge_e0 = Mooventure2016_Rev5_B.s372_VSC_IPTEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S661>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(260);
    }

    /* End of Outputs for SubSystem: '<S640>/OldValue' */
  }

  /* End of If: '<S640>/If' */

  /* If: '<S641>/If' incorporates:
   *  Inport: '<S662>/In1'
   *  Inport: '<S663>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S641>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S641>/override_enable'
   */
  if ((VSC_TRSPosition_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S641>/NewValue' incorporates:
     *  ActionPort: '<S662>/Action Port'
     */
    rtb_Merge_kf = (VSC_TRSPosition_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S662>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(261);
    }

    /* End of Outputs for SubSystem: '<S641>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S641>/OldValue' incorporates:
     *  ActionPort: '<S663>/Action Port'
     */
    rtb_Merge_kf = Mooventure2016_Rev5_B.s299_posOut;

    /* S-Function (motohawk_sfun_code_cover): '<S663>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(262);
    }

    /* End of Outputs for SubSystem: '<S641>/OldValue' */
  }

  /* End of If: '<S641>/If' */

  /* DataTypeConversion: '<S9>/Data Type Conversion' */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s9_motor_Enable != 0.0);

  /* Stateflow: '<S372>/OnOff Delay' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_data_read): '<S372>/motohawk_data_read1'
   */
  Mooventure2016_Rev5_DWork.s636_presentTicks =
    Mooventure2016_Rev5_M->Timing.clockTick0;
  Mooventure2016_Rev5_DWork.s636_elapsedTicks =
    Mooventure2016_Rev5_DWork.s636_presentTicks -
    Mooventure2016_Rev5_DWork.s636_previousTicks;
  Mooventure2016_Rev5_DWork.s636_previousTicks =
    Mooventure2016_Rev5_DWork.s636_presentTicks;
  if ((uint32_T)Mooventure2016_Rev5_DWork.s636_temporalCounter_i1 +
      Mooventure2016_Rev5_DWork.s636_elapsedTicks <= 7U) {
    Mooventure2016_Rev5_DWork.s636_temporalCounter_i1 = (uint8_T)((uint32_T)
      Mooventure2016_Rev5_DWork.s636_temporalCounter_i1 +
      Mooventure2016_Rev5_DWork.s636_elapsedTicks);
  } else {
    Mooventure2016_Rev5_DWork.s636_temporalCounter_i1 = 7U;
  }

  /* Gateway: Foreground/Outputs/IPT Outputs/OnOff Delay */
  /* During: Foreground/Outputs/IPT Outputs/OnOff Delay */
  if (Mooventure2016_Rev5_DWork.s636_is_active_c4_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/IPT Outputs/OnOff Delay */
    Mooventure2016_Rev5_DWork.s636_is_active_c4_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S636>:78' */
    Mooventure2016_Rev5_DWork.s636_is_c4_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Init_j;
    Mooventure2016_Rev5_DWork.s636_temporalCounter_i1 = 0U;
  } else {
    switch (Mooventure2016_Rev5_DWork.s636_is_c4_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_IPTAwake:
      /* During 'IPTAwake': '<S636>:79' */
      if ((uint32_T)Mooventure2016_Rev5_DWork.s636_temporalCounter_i1 >= 3U) {
        /* Transition: '<S636>:83' */
        Mooventure2016_Rev5_DWork.s636_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_IPTEnable;
        Mooventure2016_Rev5_DWork.s636_temporalCounter_i1 = 0U;
      } else {
        Mooventure2016_Rev5_B.s636_IPTWake = TRUE;
        Mooventure2016_Rev5_B.s636_IPTEnable = FALSE;
        Mooventure2016_Rev5_B.s636_MotorEnable = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_IPTEnable:
      /* During 'IPTEnable': '<S636>:82' */
      if (rtb_LogicalOperator5 && ((uint32_T)
           Mooventure2016_Rev5_DWork.s636_temporalCounter_i1 >= 5U)) {
        /* Transition: '<S636>:96' */
        Mooventure2016_Rev5_DWork.s636_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_MotorDisabled;

        /* Entry 'MotorDisabled': '<S636>:9' */
        Mooventure2016_Rev5_DWork.s636_motorcount = 0;
      } else {
        Mooventure2016_Rev5_B.s636_IPTWake = TRUE;
        Mooventure2016_Rev5_B.s636_IPTEnable = TRUE;
        Mooventure2016_Rev5_B.s636_MotorEnable = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Init_j:
      /* During 'Init': '<S636>:76' */
      if (Vehicle_Ready_DataStore() && ((uint32_T)
           Mooventure2016_Rev5_DWork.s636_temporalCounter_i1 >= 5U)) {
        /* Transition: '<S636>:95' */
        Mooventure2016_Rev5_DWork.s636_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_IPTAwake;
        Mooventure2016_Rev5_DWork.s636_temporalCounter_i1 = 0U;
      } else {
        Mooventure2016_Rev5_B.s636_MotorEnable = FALSE;
        Mooventure2016_Rev5_B.s636_IPTWake = FALSE;
        Mooventure2016_Rev5_B.s636_IPTEnable = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_MotorDisabled:
      /* During 'MotorDisabled': '<S636>:9' */
      if (rtb_LogicalOperator5) {
        /* Transition: '<S636>:60' */
        Mooventure2016_Rev5_DWork.s636_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_TimerRunningOne;
      } else {
        Mooventure2016_Rev5_B.s636_MotorEnable = FALSE;
        Mooventure2016_Rev5_B.s636_IPTWake = TRUE;
        Mooventure2016_Rev5_B.s636_IPTEnable = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_MotorEnabled:
      /* During 'MotorEnabled': '<S636>:59' */
      if (!rtb_LogicalOperator5) {
        /* Transition: '<S636>:65' */
        Mooventure2016_Rev5_DWork.s636_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_TimerRunningTwo;
      } else {
        Mooventure2016_Rev5_B.s636_MotorEnable = TRUE;
        Mooventure2016_Rev5_B.s636_IPTWake = TRUE;
        Mooventure2016_Rev5_B.s636_IPTEnable = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_TimerRunningOne:
      /* During 'TimerRunningOne': '<S636>:50' */
      if (Mooventure2016_Rev5_DWork.s636_motorcount >=
          (Motor_Kill_Delay_DataStore())) {
        /* Transition: '<S636>:62' */
        Mooventure2016_Rev5_DWork.s636_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_MotorEnabled;

        /* Entry 'MotorEnabled': '<S636>:59' */
        Mooventure2016_Rev5_DWork.s636_motorcount = 0;
      } else if (!rtb_LogicalOperator5) {
        /* Transition: '<S636>:64' */
        Mooventure2016_Rev5_DWork.s636_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_MotorDisabled;

        /* Entry 'MotorDisabled': '<S636>:9' */
        Mooventure2016_Rev5_DWork.s636_motorcount = 0;
      } else {
        Mooventure2016_Rev5_DWork.s636_motorcount =
          Mooventure2016_Rev5_DWork.s636_motorcount + 1;
      }
      break;

     case Mooventure2016_Rev5_IN_TimerRunningTwo:
      /* During 'TimerRunningTwo': '<S636>:57' */
      if (rtb_LogicalOperator5) {
        /* Transition: '<S636>:67' */
        Mooventure2016_Rev5_DWork.s636_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_MotorEnabled;

        /* Entry 'MotorEnabled': '<S636>:59' */
        Mooventure2016_Rev5_DWork.s636_motorcount = 0;
      } else if (Mooventure2016_Rev5_DWork.s636_motorcount >=
                 (Motor_Kill_Delay_DataStore())) {
        /* Transition: '<S636>:71' */
        Mooventure2016_Rev5_DWork.s636_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_MotorDisabled;

        /* Entry 'MotorDisabled': '<S636>:9' */
        Mooventure2016_Rev5_DWork.s636_motorcount = 0;
      } else {
        Mooventure2016_Rev5_DWork.s636_motorcount =
          Mooventure2016_Rev5_DWork.s636_motorcount + 1;
      }
      break;

     default:
      /* Transition: '<S636>:78' */
      Mooventure2016_Rev5_DWork.s636_is_c4_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Init_j;
      Mooventure2016_Rev5_DWork.s636_temporalCounter_i1 = 0U;
      break;
    }
  }

  /* End of Stateflow: '<S372>/OnOff Delay' */
  /* If: '<S642>/If' incorporates:
   *  Inport: '<S664>/In1'
   *  Inport: '<S665>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S642>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S642>/override_enable'
   */
  if ((VSC_MotorEnable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S642>/NewValue' incorporates:
     *  ActionPort: '<S664>/Action Port'
     */
    rtb_Merge_m3 = (VSC_MotorEnable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S664>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(263);
    }

    /* End of Outputs for SubSystem: '<S642>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S642>/OldValue' incorporates:
     *  ActionPort: '<S665>/Action Port'
     */
    rtb_Merge_m3 = Mooventure2016_Rev5_B.s636_MotorEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S665>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(264);
    }

    /* End of Outputs for SubSystem: '<S642>/OldValue' */
  }

  /* End of If: '<S642>/If' */

  /* If: '<S643>/If' incorporates:
   *  Inport: '<S666>/In1'
   *  Inport: '<S667>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S643>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S643>/override_enable'
   */
  if ((VSC_AntishudderDisable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S643>/NewValue' incorporates:
     *  ActionPort: '<S666>/Action Port'
     */
    rtb_Merge_cz = (VSC_AntishudderDisable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S666>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(265);
    }

    /* End of Outputs for SubSystem: '<S643>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S643>/OldValue' incorporates:
     *  ActionPort: '<S667>/Action Port'
     */
    rtb_Merge_cz = (VSC_AntishudderDisable_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S667>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(266);
    }

    /* End of Outputs for SubSystem: '<S643>/OldValue' */
  }

  /* End of If: '<S643>/If' */

  /* If: '<S644>/If' incorporates:
   *  Inport: '<S668>/In1'
   *  Inport: '<S669>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S644>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S644>/override_enable'
   */
  if ((VSC_IPTEnable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S644>/NewValue' incorporates:
     *  ActionPort: '<S668>/Action Port'
     */
    rtb_Merge_nr = (VSC_IPTEnable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S668>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(267);
    }

    /* End of Outputs for SubSystem: '<S644>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S644>/OldValue' incorporates:
     *  ActionPort: '<S669>/Action Port'
     */
    rtb_Merge_nr = Mooventure2016_Rev5_B.s372_VSC_IPTEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S669>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(268);
    }

    /* End of Outputs for SubSystem: '<S644>/OldValue' */
  }

  /* End of If: '<S644>/If' */

  /* If: '<S645>/If' incorporates:
   *  Inport: '<S670>/In1'
   *  Inport: '<S671>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_calibration): '<S645>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S645>/override_enable'
   */
  if ((VSC_SDPTActive_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S645>/NewValue' incorporates:
     *  ActionPort: '<S670>/Action Port'
     */
    rtb_Merge_nzb = (VSC_SDPTActive_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S670>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(269);
    }

    /* End of Outputs for SubSystem: '<S645>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S645>/OldValue' incorporates:
     *  ActionPort: '<S671>/Action Port'
     */
    rtb_Merge_nzb = (VSC_SDPTActive_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S671>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(270);
    }

    /* End of Outputs for SubSystem: '<S645>/OldValue' */
  }

  /* End of If: '<S645>/If' */

  /* If: '<S646>/If' incorporates:
   *  Inport: '<S672>/In1'
   *  Inport: '<S673>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S646>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S646>/override_enable'
   */
  if ((VSC_PowerWasteRequest_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S646>/NewValue' incorporates:
     *  ActionPort: '<S672>/Action Port'
     */
    rtb_Merge_go = (VSC_PowerWasteRequest_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S672>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(271);
    }

    /* End of Outputs for SubSystem: '<S646>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S646>/OldValue' incorporates:
     *  ActionPort: '<S673>/Action Port'
     */
    rtb_Merge_go = (VSC_PowerWasteRequest_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S673>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(272);
    }

    /* End of Outputs for SubSystem: '<S646>/OldValue' */
  }

  /* End of If: '<S646>/If' */

  /* If: '<S653>/If' incorporates:
   *  Inport: '<S686>/In1'
   *  Inport: '<S687>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S653>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S653>/override_enable'
   */
  if ((VSC_ActiveDischargeDisable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S653>/NewValue' incorporates:
     *  ActionPort: '<S686>/Action Port'
     */
    rtb_Merge_il = (VSC_ActiveDischargeDisable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S686>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(285);
    }

    /* End of Outputs for SubSystem: '<S653>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S653>/OldValue' incorporates:
     *  ActionPort: '<S687>/Action Port'
     */
    rtb_Merge_il = (VSC_ActiveDischargeDisable_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S687>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(286);
    }

    /* End of Outputs for SubSystem: '<S653>/OldValue' */
  }

  /* End of If: '<S653>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S372>/Send CAN Messages' */
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

  /* S-Function (motohawk_sfun_probe): '<S372>/motohawk_probe14' */
  (VSC_AntishudderDisable_Prb_DataStore()) =
    (VSC_AntishudderDisable_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S372>/motohawk_probe16' */
  (VSC_SDPTActive_Prb_DataStore()) = (VSC_SDPTActive_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S372>/motohawk_probe17' */
  (VSC_PowerWasteRequest_Prb_DataStore()) = (VSC_PowerWasteRequest_Cal_DataStore
    ());

  /* S-Function (motohawk_sfun_probe): '<S372>/motohawk_probe8' */
  (VSC_ActiveDischargeDisable_Prb_DataStore()) =
    (VSC_ActiveDischargeDisable_Cal_DataStore());

  /* Logic: '<S372>/Logical Operator' incorporates:
   *  Constant: '<S635>/Constant'
   *  RelationalOperator: '<S635>/Compare'
   *  S-Function (motohawk_sfun_data_read): '<S372>/motohawk_data_read4'
   *  S-Function (motohawk_sfun_data_read): '<S372>/motohawk_data_read5'
   */
  rtb_LogicalOperator5 = (Eaton_Plugged_In_DataStore() ||
    (Hybrid_State_DataStore() >= 1));

  /* Logic: '<S372>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S372>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s372_VSC_DCDCEnable = ((rtb_LogicalOperator5 &&
    Vehicle_Ready_DataStore()));

  /* If: '<S637>/If' incorporates:
   *  Inport: '<S654>/In1'
   *  Inport: '<S655>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S637>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S637>/override_enable'
   */
  if ((VSC_DCDCEnable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S637>/NewValue' incorporates:
     *  ActionPort: '<S654>/Action Port'
     */
    rtb_Merge_hz = (VSC_DCDCEnable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S654>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(253);
    }

    /* End of Outputs for SubSystem: '<S637>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S637>/OldValue' incorporates:
     *  ActionPort: '<S655>/Action Port'
     */
    rtb_Merge_hz = Mooventure2016_Rev5_B.s372_VSC_DCDCEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S655>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(254);
    }

    /* End of Outputs for SubSystem: '<S637>/OldValue' */
  }

  /* End of If: '<S637>/If' */

  /* If: '<S638>/If' incorporates:
   *  Inport: '<S656>/In1'
   *  Inport: '<S657>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S638>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S638>/override_enable'
   */
  if ((VSC_DCOutputVoltageCmd_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S638>/NewValue' incorporates:
     *  ActionPort: '<S656>/Action Port'
     */
    rtb_Merge_je = (VSC_DCOutputVoltageCmd_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S656>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(255);
    }

    /* End of Outputs for SubSystem: '<S638>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S638>/OldValue' incorporates:
     *  ActionPort: '<S657>/Action Port'
     */
    rtb_Merge_je = (VSC_DCOutputVoltage_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S657>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(256);
    }

    /* End of Outputs for SubSystem: '<S638>/OldValue' */
  }

  /* End of If: '<S638>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S372>/Send CAN Messages3' */
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

  /* S-Function (motohawk_sfun_probe): '<S372>/motohawk_probe1' */
  (VSC_DCOutputVoltageCmd_Prb_DataStore()) = (VSC_DCOutputVoltage_Cal_DataStore());

  /* If: '<S648>/If' incorporates:
   *  Inport: '<S676>/In1'
   *  Inport: '<S677>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S648>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S648>/override_enable'
   */
  if ((IPT_Freq_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S648>/NewValue' incorporates:
     *  ActionPort: '<S676>/Action Port'
     */
    Mooventure2016_Rev5_B.s648_Merge = (IPT_Freq_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S676>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(275);
    }

    /* End of Outputs for SubSystem: '<S648>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S648>/OldValue' incorporates:
     *  ActionPort: '<S677>/Action Port'
     */
    Mooventure2016_Rev5_B.s648_Merge = (IPT_Frequency_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S677>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(276);
    }

    /* End of Outputs for SubSystem: '<S648>/OldValue' */
  }

  /* End of If: '<S648>/If' */

  /* If: '<S649>/If' incorporates:
   *  Inport: '<S678>/In1'
   *  Inport: '<S679>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S649>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S649>/override_enable'
   */
  if ((IPT_DutyCycle_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S649>/NewValue' incorporates:
     *  ActionPort: '<S678>/Action Port'
     */
    Mooventure2016_Rev5_B.s649_Merge = (IPT_DutyCycle_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S678>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(277);
    }

    /* End of Outputs for SubSystem: '<S649>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S649>/OldValue' incorporates:
     *  ActionPort: '<S679>/Action Port'
     */
    Mooventure2016_Rev5_B.s649_Merge = (IPT_Duty_Cycle_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S679>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(278);
    }

    /* End of Outputs for SubSystem: '<S649>/OldValue' */
  }

  /* End of If: '<S649>/If' */

  /* DataTypeConversion: '<S372>/Data Type Conversion1' */
  if (rtIsNaN(Mooventure2016_Rev5_B.s649_Merge) || rtIsInf
      (Mooventure2016_Rev5_B.s649_Merge)) {
    rtb_UnitDelay_m = 0.0;
  } else {
    rtb_UnitDelay_m = fmod(floor(Mooventure2016_Rev5_B.s649_Merge), 65536.0);
  }

  rtb_DataTypeConversion1_o = (int16_T)(rtb_UnitDelay_m < 0.0 ? (int16_T)
    -(int16_T)(uint16_T)-rtb_UnitDelay_m : (int16_T)(uint16_T)rtb_UnitDelay_m);

  /* End of DataTypeConversion: '<S372>/Data Type Conversion1' */

  /* DataTypeConversion: '<S372>/Data Type Conversion2' */
  if (rtIsNaN(Mooventure2016_Rev5_B.s648_Merge) || rtIsInf
      (Mooventure2016_Rev5_B.s648_Merge)) {
    rtb_UnitDelay_m = 0.0;
  } else {
    rtb_UnitDelay_m = fmod(floor(Mooventure2016_Rev5_B.s648_Merge),
      4.294967296E+9);
  }

  rtb_DataTypeConversion2 = rtb_UnitDelay_m < 0.0 ? (uint32_T)-(int32_T)
    (uint32_T)-rtb_UnitDelay_m : (uint32_T)rtb_UnitDelay_m;

  /* End of DataTypeConversion: '<S372>/Data Type Conversion2' */
  /* If: '<S647>/If' incorporates:
   *  Inport: '<S674>/In1'
   *  Inport: '<S675>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S647>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S647>/override_enable'
   */
  if ((VSC_MinDCVoltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S647>/NewValue' incorporates:
     *  ActionPort: '<S674>/Action Port'
     */
    rtb_Merge_e2 = (VSC_MinDCVoltage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S674>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(273);
    }

    /* End of Outputs for SubSystem: '<S647>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S647>/OldValue' incorporates:
     *  ActionPort: '<S675>/Action Port'
     */
    rtb_Merge_e2 = (VSC_MinDCVoltage_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S675>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(274);
    }

    /* End of Outputs for SubSystem: '<S647>/OldValue' */
  }

  /* End of If: '<S647>/If' */

  /* If: '<S650>/If' incorporates:
   *  Inport: '<S680>/In1'
   *  Inport: '<S681>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S650>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S650>/override_enable'
   */
  if ((VSC_MaxCurrOutputGen_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S650>/NewValue' incorporates:
     *  ActionPort: '<S680>/Action Port'
     */
    rtb_Merge_ee = (VSC_MaxCurrOutputGen_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S680>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(279);
    }

    /* End of Outputs for SubSystem: '<S650>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S650>/OldValue' incorporates:
     *  ActionPort: '<S681>/Action Port'
     */
    rtb_Merge_ee = (VSC_MaxCurrOutputGen_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S681>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(280);
    }

    /* End of Outputs for SubSystem: '<S650>/OldValue' */
  }

  /* End of If: '<S650>/If' */

  /* If: '<S651>/If' incorporates:
   *  Inport: '<S682>/In1'
   *  Inport: '<S683>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_calibration): '<S651>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S651>/override_enable'
   */
  if ((VSC_MaxCurrInputMotor_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S651>/NewValue' incorporates:
     *  ActionPort: '<S682>/Action Port'
     */
    rtb_Merge_pi = (VSC_MaxCurrInputMotor_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S682>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(281);
    }

    /* End of Outputs for SubSystem: '<S651>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S651>/OldValue' incorporates:
     *  ActionPort: '<S683>/Action Port'
     */
    rtb_Merge_pi = (VSC_MaxCurrInputGen_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S683>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(282);
    }

    /* End of Outputs for SubSystem: '<S651>/OldValue' */
  }

  /* End of If: '<S651>/If' */

  /* If: '<S652>/If' incorporates:
   *  Inport: '<S684>/In1'
   *  Inport: '<S685>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S652>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S652>/override_enable'
   */
  if ((VSC_MaxDCVoltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S652>/NewValue' incorporates:
     *  ActionPort: '<S684>/Action Port'
     */
    rtb_Merge_bi = (VSC_MaxDCVoltage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S684>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(283);
    }

    /* End of Outputs for SubSystem: '<S652>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S652>/OldValue' incorporates:
     *  ActionPort: '<S685>/Action Port'
     */
    rtb_Merge_bi = (VSC_MaxDCVoltage_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S685>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(284);
    }

    /* End of Outputs for SubSystem: '<S652>/OldValue' */
  }

  /* End of If: '<S652>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S372>/Send CAN Messages1' */
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

  /* S-Function (motohawk_sfun_probe): '<S372>/motohawk_probe2' */
  (VSC_MinDCVoltage_Prb_DataStore()) = (VSC_MinDCVoltage_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S372>/motohawk_probe4' */
  (VSC_MaxCurrOutputGen_Prb_DataStore()) = (VSC_MaxCurrOutputGen_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S372>/motohawk_probe5' */
  (VSC_MaxCurrInputMotor_Prb_DataStore()) = (VSC_MaxCurrInputGen_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S372>/motohawk_probe7' */
  (VSC_MaxDCVoltage_Prb_DataStore()) = (VSC_MaxDCVoltage_Cal_DataStore());

  /* Product: '<S170>/Product' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S170>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S170>/motohawk_data_read1'
   */
  Mooventure2016_Rev5_B.s170_MPGeGlobalAverage = MPGe_Average_Sum_DataStore() /
    MPGe_Average_Count_DataStore();

  /* MATLAB Function Block: '<S148>/Data Correction' */
  Mooventure2016_Rev5_DataCorrectionMotorFault
    (Mooventure2016_Rev5_B.s206_IPT_WheelTorqueDelivered,
     &Mooventure2016_Rev5_B.s148_sf_DataCorrection);

  /* Abs: '<S148>/Abs' */
  rtb_Product2_f = fabs(Mooventure2016_Rev5_B.s330_Merge);

  /* Product: '<S148>/Product1' incorporates:
   *  Product: '<S148>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S148>/motohawk_calibration'
   */
  rtb_UnitDelay_o = rtb_Product2_f / (Gear_Ratio_DataStore()) *
    Mooventure2016_Rev5_B.s148_sf_DataCorrection.s66_torqueOut;

  /* Product: '<S148>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S148>/motohawk_calibration1'
   */
  rtb_Product2_f = rtb_UnitDelay_o / (kW_Divisor_DataStore());

  /* Abs: '<S148>/Abs1' */
  rtb_Switch_hc = fabs(Mooventure2016_Rev5_B.s330_Merge);

  /* Product: '<S148>/Product4' incorporates:
   *  Product: '<S148>/Product3'
   *  S-Function (motohawk_sfun_calibration): '<S148>/motohawk_calibration2'
   */
  rtb_UnitDelay_o = rtb_Product2_f / ((Wheel_Ratio_DataStore()) * rtb_Switch_hc);

  /* Product: '<S148>/Product5' incorporates:
   *  Product: '<S148>/Product6'
   *  S-Function (motohawk_sfun_calibration): '<S148>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S148>/motohawk_calibration4'
   */
  rtb_Switch_hc = (Gasoline_Specific_Energy_DataStore()) / (rtb_UnitDelay_o *
    (Efficiency_Multiplier_DataStore()));

  /* Saturate: '<S148>/Saturation' */
  Mooventure2016_Rev5_B.s148_Saturation = rtb_Switch_hc >= 99.0 ? 99.0 :
    rtb_Switch_hc <= 0.0 ? 0.0 : rtb_Switch_hc;

  /* If: '<S166>/If' incorporates:
   *  Inport: '<S167>/In1'
   *  Inport: '<S168>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S166>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S166>/override_enable'
   */
  if ((MPGe_Instant_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S166>/NewValue' incorporates:
     *  ActionPort: '<S167>/Action Port'
     */
    rtb_Merge_gr = (MPGe_Instant_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S167>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(15);
    }

    /* End of Outputs for SubSystem: '<S166>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S166>/OldValue' incorporates:
     *  ActionPort: '<S168>/Action Port'
     */
    rtb_Merge_gr = Mooventure2016_Rev5_B.s148_Saturation;

    /* S-Function (motohawk_sfun_code_cover): '<S168>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(16);
    }

    /* End of Outputs for SubSystem: '<S166>/OldValue' */
  }

  /* End of If: '<S166>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S373>/Send CAN Messages1' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (95.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (94500U)
         )) {
      /* 0x610 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        tmp0 = (uint8_T)(16U);
        if ((Engine_Status_DataStore()) < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if ((Engine_Status_DataStore()) > 1.0000000000F) {
          tmp1 = (uint8_T)(1U);
        } else {
          tmp1 = (uint8_T)((Engine_Status_DataStore()) != 0);
        }

        if (Mooventure2016_Rev5_B.s170_MPGeGlobalAverage < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s170_MPGeGlobalAverage >
                   255.0000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(Mooventure2016_Rev5_B.s170_MPGeGlobalAverage);
        }

        if (rtb_Merge_gr < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_Merge_gr > 255.0000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_Merge_gr);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp1))[0] & 0x00000001)) ;
        msg_data[2] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(0, 0x610UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_data_read): '<S171>/motohawk_data_read1' */
  Mooventure2016_Rev5_B.s171_motohawk_data_read1 = Previous_Average_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S169>/motohawk_data_read2' */
  Mooventure2016_Rev5_B.s169_motohawk_data_read2 = MPGe_Best_Average_DataStore();

  /* S-Function (motohawk_sfun_send_canmsgs): '<S373>/Send CAN Messages2' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (90.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (89500U)
         )) {
      /* 0x610 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint16_T tmp2;
        uint16_T tmp3;
        uint16_T tmp4;
        tmp0 = (uint8_T)(17U);
        if ((Selected_Trip_DataStore()) < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if ((Selected_Trip_DataStore()) > 1.0000000000F) {
          tmp1 = (uint8_T)(1U);
        } else {
          tmp1 = (uint8_T)((Selected_Trip_DataStore()) != 0);
        }

        if (Mooventure2016_Rev5_B.s171_motohawk_data_read1 < 0.0000000000F) {
          tmp2 = (uint16_T)(0U);
        } else if (Mooventure2016_Rev5_B.s171_motohawk_data_read1 >
                   655.3500000000F) {
          tmp2 = (uint16_T)(65535U);
        } else {
          tmp2 = (uint16_T)(Mooventure2016_Rev5_B.s171_motohawk_data_read1 *
                            (100.0000000000F));
        }

        if (Mooventure2016_Rev5_B.s169_motohawk_data_read2 < 0.0000000000F) {
          tmp3 = (uint16_T)(0U);
        } else if (Mooventure2016_Rev5_B.s169_motohawk_data_read2 >
                   655.3500000000F) {
          tmp3 = (uint16_T)(65535U);
        } else {
          tmp3 = (uint16_T)(Mooventure2016_Rev5_B.s169_motohawk_data_read2 *
                            (100.0000000000F));
        }

        if (Mooventure2016_Rev5_B.s170_MPGeGlobalAverage < 0.0000000000F) {
          tmp4 = (uint16_T)(0U);
        } else if (Mooventure2016_Rev5_B.s170_MPGeGlobalAverage >
                   655.3500000000F) {
          tmp4 = (uint16_T)(65535U);
        } else {
          tmp4 = (uint16_T)(Mooventure2016_Rev5_B.s170_MPGeGlobalAverage *
                            (100.0000000000F));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp1))[0] & 0x00000001)) ;
        msg_data[2] = ((((uint8_T *)(&tmp4))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp4))[1])) ;
        msg_data[4] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp2))[1])) ;
        msg_data[6] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[7] = ((((uint8_T *)(&tmp3))[1])) ;
        CAN_1_Transmit(0, 0x610UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* Product: '<S150>/Product' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S150>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S150>/motohawk_data_read1'
   */
  Mooventure2016_Rev5_B.s150_MPGe1MinuteAverage = Bar_MPGe_Average_Sum_DataStore
    () / Bar_MPGe_Average_Count_DataStore();

  /* S-Function block: <S195>/S-Function  */
  {
    int nSamples = 15 ;
    int io = 0;
    int iv;
    int ind_Ps = Mooventure2016_Rev5_DWork.s195_SFunction_IWORK.indPs;

    /* Input present value(s) */
    ((real_T *)Mooventure2016_Rev5_DWork.s195_SFunction_PWORK.uBuffers)[ind_Ps] =
      Mooventure2016_Rev5_B.s150_MPGe1MinuteAverage;

    /* Output past value(s) */
    /* Output from present sample index to 0 */
    for (iv = ind_Ps; iv >= 0; --iv)
      (Mooventure2016_Rev5_B.s195_SFunction)[io++] = ((real_T *)
        Mooventure2016_Rev5_DWork.s195_SFunction_PWORK.uBuffers)[iv];

    /* Output from end of buffer to present sample index excl. */
    for (iv = nSamples-1; iv > ind_Ps; --iv)
      (Mooventure2016_Rev5_B.s195_SFunction)[io++] = ((real_T *)
        Mooventure2016_Rev5_DWork.s195_SFunction_PWORK.uBuffers)[iv];

    /* Update ring buffer index */
    if (++(Mooventure2016_Rev5_DWork.s195_SFunction_IWORK.indPs) == nSamples)
      Mooventure2016_Rev5_DWork.s195_SFunction_IWORK.indPs = 0;
  }

  /* S-Function (sdspmultiportsel): '<S150>/Multiport Selector' */
  for (row = 0; row < 15; row++) {
    rtb_MPGe1[row] = Mooventure2016_Rev5_B.s195_SFunction[row];
    rtb_MPGe2[row] = Mooventure2016_Rev5_B.s195_SFunction[row];
    rtb_MPGe3[row] = Mooventure2016_Rev5_B.s195_SFunction[row];
    rtb_MPGe4[row] = Mooventure2016_Rev5_B.s195_SFunction[row];
    rtb_MPGe5[row] = Mooventure2016_Rev5_B.s195_SFunction[row];
    rtb_MPGe6[row] = Mooventure2016_Rev5_B.s195_SFunction[row];
    rtb_MPGe7[row] = Mooventure2016_Rev5_B.s195_SFunction[row];
    rtb_MPGe8[row] = Mooventure2016_Rev5_B.s195_SFunction[row];
    rtb_MPGe9[row] = Mooventure2016_Rev5_B.s195_SFunction[row];
    rtb_MPGe10[row] = Mooventure2016_Rev5_B.s195_SFunction[row];
    rtb_MPGe11[row] = Mooventure2016_Rev5_B.s195_SFunction[row];
    rtb_MPGe12[row] = Mooventure2016_Rev5_B.s195_SFunction[row];
    rtb_MPGe13[row] = Mooventure2016_Rev5_B.s195_SFunction[row];
    rtb_MPGe14[row] = Mooventure2016_Rev5_B.s195_SFunction[row];
    rtb_MPGe15[row] = Mooventure2016_Rev5_B.s195_SFunction[row];
  }

  /* End of S-Function (sdspmultiportsel): '<S150>/Multiport Selector' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S373>/Send CAN Messages3' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (85.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (84500U)
         )) {
      /* 0x610 */
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
        tmp0 = (uint8_T)(32U);
        if (rtb_MPGe6[0] < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_MPGe6[0] > 255.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_MPGe6[0]);
        }

        if (rtb_MPGe5[0] < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_MPGe5[0] > 255.0000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_MPGe5[0]);
        }

        if (rtb_MPGe4[0] < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_MPGe4[0] > 255.0000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_MPGe4[0]);
        }

        if (rtb_MPGe3[0] < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_MPGe3[0] > 255.0000000000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(rtb_MPGe3[0]);
        }

        if (rtb_MPGe2[0] < 0.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if (rtb_MPGe2[0] > 255.0000000000F) {
          tmp5 = (uint8_T)(255U);
        } else {
          tmp5 = (uint8_T)(rtb_MPGe2[0]);
        }

        if (rtb_MPGe1[0] < 0.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if (rtb_MPGe1[0] > 255.0000000000F) {
          tmp6 = (uint8_T)(255U);
        } else {
          tmp6 = (uint8_T)(rtb_MPGe1[0]);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = 0 ;
        msg_data[2] = ((((uint8_T *)(&tmp6))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp5))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp4))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[6] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[7] = ((((uint8_T *)(&tmp1))[0])) ;
        CAN_1_Transmit(0, 0x610UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S373>/Send CAN Messages4' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (80.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (79500U)
         )) {
      /* 0x610 */
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
        tmp0 = (uint8_T)(33U);
        if (rtb_MPGe9[0] < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_MPGe9[0] > 255.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_MPGe9[0]);
        }

        if (rtb_MPGe8[0] < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_MPGe8[0] > 255.0000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_MPGe8[0]);
        }

        if (rtb_MPGe7[0] < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_MPGe7[0] > 255.0000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_MPGe7[0]);
        }

        if (rtb_MPGe12[0] < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_MPGe12[0] > 255.0000000000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(rtb_MPGe12[0]);
        }

        if (rtb_MPGe11[0] < 0.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if (rtb_MPGe11[0] > 255.0000000000F) {
          tmp5 = (uint8_T)(255U);
        } else {
          tmp5 = (uint8_T)(rtb_MPGe11[0]);
        }

        if (rtb_MPGe10[0] < 0.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if (rtb_MPGe10[0] > 255.0000000000F) {
          tmp6 = (uint8_T)(255U);
        } else {
          tmp6 = (uint8_T)(rtb_MPGe10[0]);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = 0 ;
        msg_data[2] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp6))[0])) ;
        msg_data[6] = ((((uint8_T *)(&tmp5))[0])) ;
        msg_data[7] = ((((uint8_T *)(&tmp4))[0])) ;
        CAN_1_Transmit(0, 0x610UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* Product: '<S150>/Product1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S150>/motohawk_data_read2'
   *  S-Function (motohawk_sfun_data_read): '<S150>/motohawk_data_read3'
   */
  rtb_Average = Bar_MPGe_Average_Sum_DataStore() /
    Bar_MPGe_Average_Count_DataStore();

  /* MATLAB Function Block: '<S150>/Color9' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe9,
    &Mooventure2016_Rev5_B.s150_sf_Color9);

  /* MATLAB Function Block: '<S150>/Color8' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe8,
    &Mooventure2016_Rev5_B.s150_sf_Color8);

  /* MATLAB Function Block: '<S150>/Color7' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe7,
    &Mooventure2016_Rev5_B.s150_sf_Color7);

  /* MATLAB Function Block: '<S150>/Color6' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe6,
    &Mooventure2016_Rev5_B.s150_sf_Color6);

  /* MATLAB Function Block: '<S150>/Color5' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe5,
    &Mooventure2016_Rev5_B.s150_sf_Color5);

  /* MATLAB Function Block: '<S150>/Color4' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe4,
    &Mooventure2016_Rev5_B.s150_sf_Color4);

  /* MATLAB Function Block: '<S150>/Color3' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe3,
    &Mooventure2016_Rev5_B.s150_sf_Color3);

  /* MATLAB Function Block: '<S150>/Color2' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe2,
    &Mooventure2016_Rev5_B.s150_sf_Color2);

  /* MATLAB Function Block: '<S150>/Color15' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe15,
    &Mooventure2016_Rev5_B.s150_sf_Color15);

  /* MATLAB Function Block: '<S150>/Color14' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe14,
    &Mooventure2016_Rev5_B.s150_sf_Color14);

  /* MATLAB Function Block: '<S150>/Color13' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe13,
    &Mooventure2016_Rev5_B.s150_sf_Color13);

  /* MATLAB Function Block: '<S150>/Color12' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S150>/motohawk_calibration2'
   */

  /* MATLAB Function 'Foreground/Control/Infotainment/MPGe Bar Calculations/Color12': '<S183>:1' */
  if (rtb_MPGe12[11] >= (Bar_Color_DataStore())) {
    /* '<S183>:1:3' */
    /* '<S183>:1:4' */
    rtb_color = 1.0;
  } else {
    /* '<S183>:1:6' */
    rtb_color = 0.0;
  }

  /* End of MATLAB Function Block: '<S150>/Color12' */

  /* MATLAB Function Block: '<S150>/Color11' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe11,
    &Mooventure2016_Rev5_B.s150_sf_Color11);

  /* MATLAB Function Block: '<S150>/Color10' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe10,
    &Mooventure2016_Rev5_B.s150_sf_Color10);

  /* MATLAB Function Block: '<S150>/Color1' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe1,
    &Mooventure2016_Rev5_B.s150_sf_Color1);

  /* S-Function (motohawk_sfun_send_canmsgs): '<S373>/Send CAN Messages5' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (75.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (74500U)
         )) {
      /* 0x610 */
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
        uint8_T tmp8;
        uint8_T tmp9;
        uint8_T tmp10;
        uint8_T tmp11;
        uint8_T tmp12;
        uint8_T tmp13;
        uint8_T tmp14;
        uint8_T tmp15;
        uint8_T tmp16;
        uint8_T tmp17;
        uint8_T tmp18;
        uint8_T tmp19;
        tmp0 = (uint8_T)(34U);
        if (rtb_Average < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Average > 255.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_Average);
        }

        if (Mooventure2016_Rev5_B.s150_sf_Color9.s180_color < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s150_sf_Color9.s180_color >
                   1.0000000000F) {
          tmp2 = (uint8_T)(1U);
        } else {
          tmp2 = (uint8_T)(Mooventure2016_Rev5_B.s150_sf_Color9.s180_color != 0);
        }

        if (Mooventure2016_Rev5_B.s150_sf_Color8.s180_color < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s150_sf_Color8.s180_color >
                   1.0000000000F) {
          tmp3 = (uint8_T)(1U);
        } else {
          tmp3 = (uint8_T)(Mooventure2016_Rev5_B.s150_sf_Color8.s180_color != 0);
        }

        if (Mooventure2016_Rev5_B.s150_sf_Color7.s180_color < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s150_sf_Color7.s180_color >
                   1.0000000000F) {
          tmp4 = (uint8_T)(1U);
        } else {
          tmp4 = (uint8_T)(Mooventure2016_Rev5_B.s150_sf_Color7.s180_color != 0);
        }

        if (Mooventure2016_Rev5_B.s150_sf_Color6.s180_color < 0.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s150_sf_Color6.s180_color >
                   1.0000000000F) {
          tmp5 = (uint8_T)(1U);
        } else {
          tmp5 = (uint8_T)(Mooventure2016_Rev5_B.s150_sf_Color6.s180_color != 0);
        }

        if (Mooventure2016_Rev5_B.s150_sf_Color5.s180_color < 0.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s150_sf_Color5.s180_color >
                   1.0000000000F) {
          tmp6 = (uint8_T)(1U);
        } else {
          tmp6 = (uint8_T)(Mooventure2016_Rev5_B.s150_sf_Color5.s180_color != 0);
        }

        if (Mooventure2016_Rev5_B.s150_sf_Color4.s180_color < 0.0000000000F) {
          tmp7 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s150_sf_Color4.s180_color >
                   1.0000000000F) {
          tmp7 = (uint8_T)(1U);
        } else {
          tmp7 = (uint8_T)(Mooventure2016_Rev5_B.s150_sf_Color4.s180_color != 0);
        }

        if (Mooventure2016_Rev5_B.s150_sf_Color3.s180_color < 0.0000000000F) {
          tmp8 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s150_sf_Color3.s180_color >
                   1.0000000000F) {
          tmp8 = (uint8_T)(1U);
        } else {
          tmp8 = (uint8_T)(Mooventure2016_Rev5_B.s150_sf_Color3.s180_color != 0);
        }

        if (Mooventure2016_Rev5_B.s150_sf_Color2.s180_color < 0.0000000000F) {
          tmp9 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s150_sf_Color2.s180_color >
                   1.0000000000F) {
          tmp9 = (uint8_T)(1U);
        } else {
          tmp9 = (uint8_T)(Mooventure2016_Rev5_B.s150_sf_Color2.s180_color != 0);
        }

        if (Mooventure2016_Rev5_B.s150_sf_Color15.s180_color < 0.0000000000F) {
          tmp10 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s150_sf_Color15.s180_color >
                   1.0000000000F) {
          tmp10 = (uint8_T)(1U);
        } else {
          tmp10 = (uint8_T)(Mooventure2016_Rev5_B.s150_sf_Color15.s180_color !=
                            0);
        }

        if (Mooventure2016_Rev5_B.s150_sf_Color14.s180_color < 0.0000000000F) {
          tmp11 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s150_sf_Color14.s180_color >
                   1.0000000000F) {
          tmp11 = (uint8_T)(1U);
        } else {
          tmp11 = (uint8_T)(Mooventure2016_Rev5_B.s150_sf_Color14.s180_color !=
                            0);
        }

        if (Mooventure2016_Rev5_B.s150_sf_Color13.s180_color < 0.0000000000F) {
          tmp12 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s150_sf_Color13.s180_color >
                   1.0000000000F) {
          tmp12 = (uint8_T)(1U);
        } else {
          tmp12 = (uint8_T)(Mooventure2016_Rev5_B.s150_sf_Color13.s180_color !=
                            0);
        }

        if (rtb_color < 0.0000000000F) {
          tmp13 = (uint8_T)(0U);
        } else if (rtb_color > 1.0000000000F) {
          tmp13 = (uint8_T)(1U);
        } else {
          tmp13 = (uint8_T)(rtb_color != 0);
        }

        if (Mooventure2016_Rev5_B.s150_sf_Color11.s180_color < 0.0000000000F) {
          tmp14 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s150_sf_Color11.s180_color >
                   1.0000000000F) {
          tmp14 = (uint8_T)(1U);
        } else {
          tmp14 = (uint8_T)(Mooventure2016_Rev5_B.s150_sf_Color11.s180_color !=
                            0);
        }

        if (Mooventure2016_Rev5_B.s150_sf_Color10.s180_color < 0.0000000000F) {
          tmp15 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s150_sf_Color10.s180_color >
                   1.0000000000F) {
          tmp15 = (uint8_T)(1U);
        } else {
          tmp15 = (uint8_T)(Mooventure2016_Rev5_B.s150_sf_Color10.s180_color !=
                            0);
        }

        if (Mooventure2016_Rev5_B.s150_sf_Color1.s180_color < 0.0000000000F) {
          tmp16 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s150_sf_Color1.s180_color >
                   1.0000000000F) {
          tmp16 = (uint8_T)(1U);
        } else {
          tmp16 = (uint8_T)(Mooventure2016_Rev5_B.s150_sf_Color1.s180_color != 0);
        }

        if (rtb_MPGe15[0] < 0.0000000000F) {
          tmp17 = (uint8_T)(0U);
        } else if (rtb_MPGe15[0] > 255.0000000000F) {
          tmp17 = (uint8_T)(255U);
        } else {
          tmp17 = (uint8_T)(rtb_MPGe15[0]);
        }

        if (rtb_MPGe14[0] < 0.0000000000F) {
          tmp18 = (uint8_T)(0U);
        } else if (rtb_MPGe14[0] > 255.0000000000F) {
          tmp18 = (uint8_T)(255U);
        } else {
          tmp18 = (uint8_T)(rtb_MPGe14[0]);
        }

        if (rtb_MPGe13[0] < 0.0000000000F) {
          tmp19 = (uint8_T)(0U);
        } else if (rtb_MPGe13[0] > 255.0000000000F) {
          tmp19 = (uint8_T)(255U);
        } else {
          tmp19 = (uint8_T)(rtb_MPGe13[0]);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = 0 ;
        msg_data[2] = ((((uint8_T *)(&tmp19))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp18))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp17))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[6] = ((((uint8_T *)(&tmp3))[0] & 0x00000001) << 7) |
          ((((uint8_T *)(&tmp4))[0] & 0x00000001) << 6) | ((((uint8_T *)(&tmp5))
          [0] & 0x00000001) << 5) | ((((uint8_T *)(&tmp6))[0] & 0x00000001) << 4)
          | ((((uint8_T *)(&tmp7))[0] & 0x00000001) << 3) | ((((uint8_T *)(&tmp8))
          [0] & 0x00000001) << 2) | ((((uint8_T *)(&tmp9))[0] & 0x00000001) << 1)
          | ((((uint8_T *)(&tmp16))[0] & 0x00000001)) ;
        msg_data[7] = ((((uint8_T *)(&tmp2))[0] & 0x00000001)) | ((((uint8_T *)(
          &tmp10))[0] & 0x00000001) << 6) | ((((uint8_T *)(&tmp11))[0] &
          0x00000001) << 5) | ((((uint8_T *)(&tmp12))[0] & 0x00000001) << 4) |
          ((((uint8_T *)(&tmp13))[0] & 0x00000001) << 3) | ((((uint8_T *)(&tmp14))
          [0] & 0x00000001) << 2) | ((((uint8_T *)(&tmp15))[0] & 0x00000001) <<
          1) ;
        CAN_1_Transmit(0, 0x610UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* MATLAB Function Block: '<S151>/Data Correction Motor' */
  Mooventure2016_Rev5_DataCorrectionMotorFault
    (Mooventure2016_Rev5_B.s206_IPT_WheelTorqueDelivered,
     &Mooventure2016_Rev5_B.s151_sf_DataCorrectionMotor);

  /* Rounding: '<S151>/Rounding Function1' incorporates:
   *  Product: '<S151>/Product3'
   *  S-Function (motohawk_sfun_calibration): '<S151>/motohawk_calibration1'
   */
  rtb_Switch_hc = floor
    (Mooventure2016_Rev5_B.s151_sf_DataCorrectionMotor.s66_torqueOut /
     (Power_Flow_Divisor_Battery_DataStore()));

  /* Abs: '<S151>/Abs' */
  rtb_Switch_hc = fabs(rtb_Switch_hc);

  /* Saturate: '<S151>/Saturation1' */
  Mooventure2016_Rev5_B.s151_BatteryUsePCT = rtb_Switch_hc >= 100.0 ? 100.0 :
    rtb_Switch_hc <= 0.0 ? 0.0 : rtb_Switch_hc;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S373>/Send CAN Messages6' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (105.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (104500U)
         )) {
      /* 0x610 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        tmp0 = (uint8_T)(48U);
        if (Mooventure2016_Rev5_B.s151_BatteryUsePCT < -100.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s151_BatteryUsePCT > 155.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(Mooventure2016_Rev5_B.s151_BatteryUsePCT -
                           (-100.0000000000F));
        }

        if (rtb_Sum1 < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Sum1 > 255.0000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_Sum1);
        }

        if ((Battery_Drive_Mode_DataStore()) < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if ((Battery_Drive_Mode_DataStore()) > 3.0000000000F) {
          tmp3 = (uint8_T)(3U);
        } else {
          tmp3 = (uint8_T)((Battery_Drive_Mode_DataStore()));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp3))[0] & 0x00000003)) ;
        msg_data[2] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(0, 0x610UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* Rounding: '<S151>/Rounding Function' incorporates:
   *  Product: '<S151>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S151>/motohawk_calibration'
   */
  rtb_Switch_hc = floor
    (Mooventure2016_Rev5_B.s151_sf_DataCorrectionMotor.s66_torqueOut /
     (Power_Flow_Divisor_DataStore()));

  /* Saturate: '<S151>/Saturation' */
  rtb_Switch_hc = rtb_Switch_hc >= 3.0 ? 3.0 : rtb_Switch_hc <= -3.0 ? -3.0 :
    rtb_Switch_hc;

  /* Signum: '<S151>/Sign' */
  rtb_Switch_pm = Mooventure2016_Rev5_B.s330_Merge < 0.0 ? -1.0 :
    Mooventure2016_Rev5_B.s330_Merge > 0.0 ? 1.0 :
    Mooventure2016_Rev5_B.s330_Merge == 0.0 ? 0.0 :
    Mooventure2016_Rev5_B.s330_Merge;

  /* Product: '<S151>/Product2' */
  Mooventure2016_Rev5_B.s151_Battery2Motor = rtb_Switch_hc * rtb_Switch_pm;

  /* Product: '<S151>/Product1' */
  Mooventure2016_Rev5_B.s151_Motor2Axle = rtb_Switch_hc * rtb_Switch_pm;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S373>/Send CAN Messages7' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (110.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (109500U)
         )) {
      /* 0x610 */
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
        tmp0 = (uint8_T)(64U);
        if (Mooventure2016_Rev5_B.s151_Battery2Motor < -3.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s151_Battery2Motor > 12.0000000000F) {
          tmp1 = (uint8_T)(15U);
        } else {
          tmp1 = (uint8_T)(Mooventure2016_Rev5_B.s151_Battery2Motor -
                           (-3.0000000000F));
        }

        if (Mooventure2016_Rev5_B.s151_Motor2Axle < -3.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s151_Motor2Axle > 12.0000000000F) {
          tmp2 = (uint8_T)(15U);
        } else {
          tmp2 = (uint8_T)(Mooventure2016_Rev5_B.s151_Motor2Axle -
                           (-3.0000000000F));
        }

        if ((Engine2Axle_DataStore()) < -3.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if ((Engine2Axle_DataStore()) > 12.0000000000F) {
          tmp3 = (uint8_T)(15U);
        } else {
          tmp3 = (uint8_T)((Engine2Axle_DataStore()) - (-3.0000000000F));
        }

        if ((Engine2Motor_DataStore()) < -3.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if ((Engine2Motor_DataStore()) > 12.0000000000F) {
          tmp4 = (uint8_T)(15U);
        } else {
          tmp4 = (uint8_T)((Engine2Motor_DataStore()) - (-3.0000000000F));
        }

        if ((Gas_Use_Pct_DataStore()) < 0.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if ((Gas_Use_Pct_DataStore()) > 255.0000000000F) {
          tmp5 = (uint8_T)(255U);
        } else {
          tmp5 = (uint8_T)((Gas_Use_Pct_DataStore()));
        }

        if (Mooventure2016_Rev5_B.s151_BatteryUsePCT < -100.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s151_BatteryUsePCT > 155.0000000000F) {
          tmp6 = (uint8_T)(255U);
        } else {
          tmp6 = (uint8_T)(Mooventure2016_Rev5_B.s151_BatteryUsePCT -
                           (-100.0000000000F));
        }

        if ((Engine_Status_2_DataStore()) < 0.0000000000F) {
          tmp7 = (uint8_T)(0U);
        } else if ((Engine_Status_2_DataStore()) > 1.0000000000F) {
          tmp7 = (uint8_T)(1U);
        } else {
          tmp7 = (uint8_T)((Engine_Status_2_DataStore()) != 0);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp7))[0] & 0x00000001)) ;
        msg_data[2] = ((((uint8_T *)(&tmp5))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp6))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp3))[0] & 0x0000000F)) ;
        msg_data[5] = ((((uint8_T *)(&tmp2))[0] & 0x0000000F)) ;
        msg_data[6] = ((((uint8_T *)(&tmp4))[0] & 0x0000000F)) ;
        msg_data[7] = ((((uint8_T *)(&tmp1))[0] & 0x0000000F)) ;
        CAN_1_Transmit(0, 0x610UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S207>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4796p0005_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4796p0005_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s207_AgeCount + 1) >
        Mooventure2016_Rev5_B.s207_AgeCount)
      Mooventure2016_Rev5_B.s207_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint16_T tmp4 = 0;
      uint16_T tmp5 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[1] & 0x00000001)) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[7] & 0x00000001)) ;
      ((uint8_T *)(&tmp3))[0] = ((msg_data[6] & 0x00000001)) ;
      ((uint8_T *)(&tmp4))[0] = ((msg_data[4])) ;
      ((uint8_T *)(&tmp4))[1] = ((msg_data[5])) ;
      ((uint8_T *)(&tmp5))[0] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp5))[1] = ((msg_data[2])) ;
      Mooventure2016_Rev5_B.s207_Subfunction_Select = (real_T) tmp0;
      Mooventure2016_Rev5_B.s207_Confirm_Active_Trip = (real_T) tmp1;
      Mooventure2016_Rev5_B.s207_Confirm_Reset_Trip_B = (real_T) tmp2;
      Mooventure2016_Rev5_B.s207_Confirm_Reset_Trip_A = (real_T) tmp3;
      Mooventure2016_Rev5_B.s207_Electricity_Cost_Setting = ((real_T) tmp4) /
        ((real_T) 1000);
      Mooventure2016_Rev5_B.s207_Fuel_Cost_Setting = ((real_T) tmp5) / ((real_T)
        1000);
      Mooventure2016_Rev5_B.s207_AgeCount = 0;
    }
  }

  /* If: '<S339>/If' incorporates:
   *  Inport: '<S352>/In1'
   *  Inport: '<S353>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S339>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S339>/override_enable'
   */
  if ((Fuel_Cost_Setting_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S339>/NewValue' incorporates:
     *  ActionPort: '<S352>/Action Port'
     */
    rtb_UnitDelay_o = (Fuel_Cost_Setting_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S352>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(89);
    }

    /* End of Outputs for SubSystem: '<S339>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S339>/OldValue' incorporates:
     *  ActionPort: '<S353>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s207_Fuel_Cost_Setting;

    /* S-Function (motohawk_sfun_code_cover): '<S353>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(90);
    }

    /* End of Outputs for SubSystem: '<S339>/OldValue' */
  }

  /* End of If: '<S339>/If' */

  /* Product: '<S153>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_data_read): '<S153>/motohawk_data_read1'
   */
  rtb_UnitDelay_m = rtb_UnitDelay_o * Trip_A_Dist_Traveled_DataStore() *
    (Average_Vehicle_MPG_DataStore());

  /* If: '<S338>/If' incorporates:
   *  Inport: '<S350>/In1'
   *  Inport: '<S351>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S338>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S338>/override_enable'
   */
  if ((Electricity_Cost_Setting_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S338>/NewValue' incorporates:
     *  ActionPort: '<S350>/Action Port'
     */
    rtb_Merge_gq = (Electricity_Cost_Setting_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S350>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(87);
    }

    /* End of Outputs for SubSystem: '<S338>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S338>/OldValue' incorporates:
     *  ActionPort: '<S351>/Action Port'
     */
    rtb_Merge_gq = Mooventure2016_Rev5_B.s207_Electricity_Cost_Setting;

    /* S-Function (motohawk_sfun_code_cover): '<S351>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(88);
    }

    /* End of Outputs for SubSystem: '<S338>/OldValue' */
  }

  /* End of If: '<S338>/If' */

  /* Product: '<S153>/Product2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S153>/motohawk_data_read2'
   */
  Mooventure2016_Rev5_B.s153_TripACost = rtb_Merge_gq *
    Trip_A_Batt_Used_DataStore();

  /* Sum: '<S153>/Add2' */
  Mooventure2016_Rev5_B.s153_TripASavings = rtb_UnitDelay_m -
    Mooventure2016_Rev5_B.s153_TripACost;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S373>/Send CAN Messages8' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (120.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (119500U)
         )) {
      /* 0x610 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint16_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        tmp0 = (uint8_T)(81U);
        if (Mooventure2016_Rev5_B.s153_TripASavings < 0.0000000000F) {
          tmp1 = (uint16_T)(0U);
        } else if (Mooventure2016_Rev5_B.s153_TripASavings > 655.3500000000F) {
          tmp1 = (uint16_T)(65535U);
        } else {
          tmp1 = (uint16_T)(Mooventure2016_Rev5_B.s153_TripASavings *
                            (100.0000000000F));
        }

        if (Mooventure2016_Rev5_B.s153_TripACost < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s153_TripACost > 0.0100000000F) {
          tmp2 = (uint8_T)(1U);
        } else {
          tmp2 = (uint8_T)(Mooventure2016_Rev5_B.s153_TripACost *
                           (100.0000000000F));
        }

        if ((Trip_A_Fuel_Used_DataStore()) < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if ((Trip_A_Fuel_Used_DataStore()) > 1.0000000000F) {
          tmp3 = (uint8_T)(1U);
        } else {
          tmp3 = (uint8_T)((Trip_A_Fuel_Used_DataStore()) != 0);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = 0 ;
        msg_data[2] = 0 ;
        msg_data[3] = ((((uint8_T *)(&tmp3))[0] & 0x00000001)) ;
        msg_data[4] = 0 ;
        msg_data[5] = ((((uint8_T *)(&tmp2))[0] & 0x00000001)) ;
        msg_data[6] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[7] = ((((uint8_T *)(&tmp1))[1])) ;
        CAN_1_Transmit(0, 0x610UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* Product: '<S154>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S154>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_data_read): '<S154>/motohawk_data_read1'
   */
  rtb_UnitDelay_o = rtb_UnitDelay_o * Trip_B_Dist_Traveled_DataStore() *
    (Average_Vehicle_MPG_Trip_B_DataStore());

  /* Product: '<S154>/Product2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S154>/motohawk_data_read2'
   */
  Mooventure2016_Rev5_B.s154_TripBCost = rtb_Merge_gq *
    Trip_B_Batt_Used_DataStore();

  /* Sum: '<S154>/Add2' */
  Mooventure2016_Rev5_B.s154_TripBSavings = rtb_UnitDelay_o -
    Mooventure2016_Rev5_B.s154_TripBCost;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S373>/Send CAN Messages9' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (125.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (124500U)
         )) {
      /* 0x610 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint16_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        tmp0 = (uint8_T)(82U);
        if (Mooventure2016_Rev5_B.s154_TripBSavings < 0.0000000000F) {
          tmp1 = (uint16_T)(0U);
        } else if (Mooventure2016_Rev5_B.s154_TripBSavings > 655.3500000000F) {
          tmp1 = (uint16_T)(65535U);
        } else {
          tmp1 = (uint16_T)(Mooventure2016_Rev5_B.s154_TripBSavings *
                            (100.0000000000F));
        }

        if (Mooventure2016_Rev5_B.s154_TripBCost < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s154_TripBCost > 0.0100000000F) {
          tmp2 = (uint8_T)(1U);
        } else {
          tmp2 = (uint8_T)(Mooventure2016_Rev5_B.s154_TripBCost *
                           (100.0000000000F));
        }

        if ((Trip_B_Fuel_Used_DataStore()) < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if ((Trip_B_Fuel_Used_DataStore()) > 1.0000000000F) {
          tmp3 = (uint8_T)(1U);
        } else {
          tmp3 = (uint8_T)((Trip_B_Fuel_Used_DataStore()) != 0);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = 0 ;
        msg_data[2] = 0 ;
        msg_data[3] = ((((uint8_T *)(&tmp3))[0] & 0x00000001)) ;
        msg_data[4] = 0 ;
        msg_data[5] = ((((uint8_T *)(&tmp2))[0] & 0x00000001)) ;
        msg_data[6] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[7] = ((((uint8_T *)(&tmp1))[1])) ;
        CAN_1_Transmit(0, 0x610UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S373>/Send CAN Messages' */
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
      /* 0x610 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        tmp0 = (uint8_T)(0U);
        if ((Setting_Screen_Select_DataStore()) < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if ((Setting_Screen_Select_DataStore()) > 15.0000000000F) {
          tmp1 = (uint8_T)(15U);
        } else {
          tmp1 = (uint8_T)((Setting_Screen_Select_DataStore()));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp1))[0] & 0x0000000F)) ;
        msg_data[2] = 0 ;
        msg_data[3] = 0 ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(0, 0x610UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* Sum: '<S35>/Add2' incorporates:
   *  UnitDelay: '<S35>/Unit Delay1'
   */
  rtb_Switch_hc = rtb_Sum1_e - Mooventure2016_Rev5_DWork.s35_UnitDelay1_DSTATE;

  /* Abs: '<S35>/Abs1' */
  rtb_Switch_hc = fabs(rtb_Switch_hc);

  /* RelationalOperator: '<S35>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_c = ((rtb_Switch_hc >=
    (Blend_Valve_Sensor_B_Intermittent_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S35>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_B_Intermittent */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(8, rtb_RelationalOperator1_c);
    UpdateFault(8);
  }

  /* RelationalOperator: '<S35>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration5'
   */
  rtb_RelationalOperator5 = ((rtb_Sum1_e <
    (Blend_Valve_Sensor_B_Low_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S35>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_B_Low_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(9, rtb_RelationalOperator5);
    UpdateFault(9);
  }

  /* Sum: '<S35>/Add1' incorporates:
   *  UnitDelay: '<S35>/Unit Delay'
   */
  rtb_Switch_hc = rtb_Sum1_b - Mooventure2016_Rev5_DWork.s35_UnitDelay_DSTATE;

  /* Abs: '<S35>/Abs' */
  rtb_Switch_hc = fabs(rtb_Switch_hc);

  /* RelationalOperator: '<S35>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_m = ((rtb_Switch_hc >=
    (Blend_Valve_Sensor_A_Intermittent_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S35>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_A_Intermittent */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(5, rtb_RelationalOperator2_m);
    UpdateFault(5);
  }

  /* RelationalOperator: '<S35>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_ih = ((rtb_Sum1_b <
    (Blend_Valve_Sensor_A_Low_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S35>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_A_Low_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(6, rtb_RelationalOperator3_ih);
    UpdateFault(6);
  }

  /* RelationalOperator: '<S35>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration4'
   */
  rtb_RelationalOperator4 = ((rtb_Sum1_b >
    (Blend_Valve_Sensor_A_High_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S35>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_A_High_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(4, rtb_RelationalOperator4);
    UpdateFault(4);
  }

  /* RelationalOperator: '<S35>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration6'
   */
  rtb_RelationalOperator6 = ((rtb_Sum1_e >
    (Blend_Valve_Sensor_B_High_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S35>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_B_High_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(7, rtb_RelationalOperator6);
    UpdateFault(7);
  }

  /* S-Function Block: <S40>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s40_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_iy = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S40>/Switch' incorporates:
   *  Constant: '<S40>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S40>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S40>/motohawk_delta_time'
   *  Sum: '<S40>/Sum'
   */
  if (Mooventure2016_Rev5_B.s368_DataTypeConversion5) {
    rtb_Switch_hc = rtb_motohawk_delta_time_iy + TimeSinceRun1_DataStore();
  } else {
    rtb_Switch_hc = 0.0;
  }

  /* End of Switch: '<S40>/Switch' */
  /* Logic: '<S35>/Logical Operator' incorporates:
   *  RelationalOperator: '<S35>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration'
   */
  rtb_LogicalOperator_o = (((rtb_Switch_hc >
    (Blend_Valve_A_No_Response_Fault_DataStore())) &&
    Mooventure2016_Rev5_B.s368_DataTypeConversion5));

  /* S-Function (motohawk_sfun_fault_def): '<S35>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Blend_Valve_A_No_Response */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(2, rtb_LogicalOperator_o);
    UpdateFault(2);
  }

  /* Saturate: '<S40>/Saturation' */
  rtb_Saturation_o = rtb_Switch_hc >= 16000.0 ? 16000.0 : rtb_Switch_hc <= 0.0 ?
    0.0 : rtb_Switch_hc;

  /* S-Function (motohawk_sfun_data_write): '<S40>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceRun1 */
  {
    TimeSinceRun1_DataStore() = rtb_Saturation_o;
  }

  /* S-Function Block: <S41>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s41_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_o = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S41>/Switch' incorporates:
   *  Constant: '<S41>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S41>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S41>/motohawk_delta_time'
   *  Sum: '<S41>/Sum'
   */
  if (Mooventure2016_Rev5_B.s368_DataTypeConversion1) {
    rtb_Switch_hc = rtb_motohawk_delta_time_o + TimeSinceRun2_DataStore();
  } else {
    rtb_Switch_hc = 0.0;
  }

  /* End of Switch: '<S41>/Switch' */
  /* Logic: '<S35>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S35>/Relational Operator7'
   *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration7'
   */
  rtb_LogicalOperator1_m = (((rtb_Switch_hc >
    (Blend_Valve_B_No_Response_Fault_DataStore())) &&
    Mooventure2016_Rev5_B.s368_DataTypeConversion1));

  /* S-Function (motohawk_sfun_fault_def): '<S35>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Blend_Valve_B_No_Response */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(3, rtb_LogicalOperator1_m);
    UpdateFault(3);
  }

  /* Saturate: '<S41>/Saturation' */
  rtb_Saturation_d = rtb_Switch_hc >= 16000.0 ? 16000.0 : rtb_Switch_hc <= 0.0 ?
    0.0 : rtb_Switch_hc;

  /* S-Function (motohawk_sfun_data_write): '<S41>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceRun2 */
  {
    TimeSinceRun2_DataStore() = rtb_Saturation_d;
  }

  /* S-Function (motohawk_sfun_data_read): '<S31>/motohawk_data_read' */
  rtb_motohawk_data_read_mb = ChargeEnable_DataStore();

  /* If: '<S302>/If' incorporates:
   *  Inport: '<S311>/In1'
   *  Inport: '<S312>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S302>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S302>/override_enable'
   */
  if ((FaultSeverityIndicator_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S302>/NewValue' incorporates:
     *  ActionPort: '<S311>/Action Port'
     */
    rtb_Merge_ck = (FaultSeverityIndicator_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S311>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(57);
    }

    /* End of Outputs for SubSystem: '<S302>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S302>/OldValue' incorporates:
     *  ActionPort: '<S312>/Action Port'
     */
    rtb_Merge_ck = Mooventure2016_Rev5_B.s205_FaultSeverityIndicator;

    /* S-Function (motohawk_sfun_code_cover): '<S312>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(58);
    }

    /* End of Outputs for SubSystem: '<S302>/OldValue' */
  }

  /* End of If: '<S302>/If' */

  /* If: '<S304>/If' incorporates:
   *  Inport: '<S315>/In1'
   *  Inport: '<S316>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S304>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S304>/override_enable'
   */
  if ((IgnitionStatus_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S304>/NewValue' incorporates:
     *  ActionPort: '<S315>/Action Port'
     */
    rtb_LogicalOperator5 = (IgnitionStatus_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S315>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(61);
    }

    /* End of Outputs for SubSystem: '<S304>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S304>/OldValue' incorporates:
     *  ActionPort: '<S316>/Action Port'
     */
    rtb_LogicalOperator5 = Mooventure2016_Rev5_B.s205_IgnitionStatus;

    /* S-Function (motohawk_sfun_code_cover): '<S316>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(62);
    }

    /* End of Outputs for SubSystem: '<S304>/OldValue' */
  }

  /* End of If: '<S304>/If' */

  /* If: '<S310>/If' incorporates:
   *  Inport: '<S327>/In1'
   *  Inport: '<S328>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S310>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S310>/override_enable'
   */
  if ((InputVoltage_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S310>/NewValue' incorporates:
     *  ActionPort: '<S327>/Action Port'
     */
    rtb_UnitDelay_o = (InputVoltage_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S327>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(73);
    }

    /* End of Outputs for SubSystem: '<S310>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S310>/OldValue' incorporates:
     *  ActionPort: '<S328>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s205_InputVoltage;

    /* S-Function (motohawk_sfun_code_cover): '<S328>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(74);
    }

    /* End of Outputs for SubSystem: '<S310>/OldValue' */
  }

  /* End of If: '<S310>/If' */

  /* Outputs for Enabled SubSystem: '<S31>/Charger' incorporates:
   *  EnablePort: '<S36>/Enable'
   */
  if (rtb_motohawk_data_read_mb) {
    /* RelationalOperator: '<S36>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S36>/motohawk_calibration1'
     */
    rtb_RelationalOperator1_j = ((rtb_Merge_oq <=
      (Charger_Derated_Under_Temperature_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S36>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: Charger_Derated_Under_Temperature */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(17, rtb_RelationalOperator1_j);
      UpdateFault(17);
    }

    /* S-Function (motohawk_sfun_fault_def): '<S36>/motohawk_fault_def10' */

    /* Set Fault Suspected Status: Charger_Internal_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(18, rtb_Merge_ck);
      UpdateFault(18);
    }

    /* RelationalOperator: '<S36>/Relational Operator12' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S36>/motohawk_calibration9'
     */
    rtb_RelationalOperator12_h = ((rtb_UnitDelay_o <
      (Charger_Line_Voltage_Too_Low_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S36>/motohawk_fault_def11' */

    /* Set Fault Suspected Status: Charger_Line_Voltage_Too_Low */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(19, rtb_RelationalOperator12_h);
      UpdateFault(19);
    }

    /* RelationalOperator: '<S36>/Relational Operator11' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S36>/motohawk_calibration10'
     */
    rtb_RelationalOperator11_l = ((rtb_UnitDelay_o >
      (Charger_Line_Votlage_Too_High_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S36>/motohawk_fault_def12' */

    /* Set Fault Suspected Status: Charger_Line_Votlage_Too_High */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(20, rtb_RelationalOperator11_l);
      UpdateFault(20);
    }

    /* RelationalOperator: '<S36>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S36>/motohawk_calibration2'
     */
    rtb_RelationalOperator2_i = ((rtb_Merge_oq >=
      (Charger_Derated_Over_Temperature_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S36>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: Charger_Derated_Over_Temperature */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(16, rtb_RelationalOperator2_i);
      UpdateFault(16);
    }

    /* RelationalOperator: '<S36>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S36>/motohawk_calibration3'
     */
    rtb_RelationalOperator3_jh = (((MaxAmpCal_DataStore()) >
      (Charger_Requested_Current_Too_High_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S36>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: Charger_Requested_Current_Too_High */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(23, rtb_RelationalOperator3_jh);
      UpdateFault(23);
    }

    /* RelationalOperator: '<S36>/Relational Operator4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S36>/motohawk_calibration4'
     */
    rtb_LogicalOperator8 = ((MaxVoltageCal_DataStore()) <
      (Charger_Requested_Voltage_Out_of_Bounds_Fault_Lower_DataStore()));

    /* Logic: '<S36>/Logical Operator' incorporates:
     *  RelationalOperator: '<S36>/Relational Operator5'
     *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S36>/motohawk_calibration5'
     */
    rtb_LogicalOperator_hw = ((rtb_LogicalOperator8 || ((MaxVoltageCal_DataStore
                                 ()) >
      (Charger_Requested_Voltage_Out_of_Bounds_Fault_Upper_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S36>/motohawk_fault_def4' */

    /* Set Fault Suspected Status: Charger_Requested_Voltage_Out_of_Bounds */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(24, rtb_LogicalOperator_hw);
      UpdateFault(24);
    }

    /* RelationalOperator: '<S36>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S36>/motohawk_data_read'
     */
    rtb_RelationalOperator_lk = ((ChargeEnable_DataStore() >
      rtb_LogicalOperator5));

    /* S-Function (motohawk_sfun_fault_def): '<S36>/motohawk_fault_def5' */

    /* Set Fault Suspected Status: Charger_Requested_But_No_Key_Singal */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(22, rtb_RelationalOperator_lk);
      UpdateFault(22);
    }

    /* Logic: '<S36>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S36>/Relational Operator6'
     *  S-Function (motohawk_sfun_calibration): '<S36>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_data_read): '<S36>/motohawk_data_read'
     */
    rtb_LogicalOperator1_lt = ((ChargeEnable_DataStore() &&
      (Mooventure2016_Rev5_B.s206_IPT_HVDCVoltage <
       (Charger_Requested_But_No_High_Voltage_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S36>/motohawk_fault_def6' */

    /* Set Fault Suspected Status: Charger_Requested_But_No_High_Voltage */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(21, rtb_LogicalOperator1_lt);
      UpdateFault(21);
    }

    /* RelationalOperator: '<S36>/Relational Operator8' */
    rtb_RelationalOperator8_e = ((rtb_Merge_hn > rtb_Merge_lf));

    /* S-Function (motohawk_sfun_fault_def): '<S36>/motohawk_fault_def7' */

    /* Set Fault Suspected Status: Charger_Amperage_Draw_Greater_Then_Supply */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(15, rtb_RelationalOperator8_e);
      UpdateFault(15);
    }

    /* RelationalOperator: '<S36>/Relational Operator9' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S36>/motohawk_calibration7'
     */
    rtb_RelationalOperator9_k = ((Mooventure2016_Rev5_B.s206_IPT_HVDCVoltage <
      (Battery_Voltage_Too_Low_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S36>/motohawk_fault_def8' */

    /* Set Fault Suspected Status: Battery_Voltage_Too_Low */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(1, rtb_RelationalOperator9_k);
      UpdateFault(1);
    }

    /* RelationalOperator: '<S36>/Relational Operator10' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S36>/motohawk_calibration8'
     */
    rtb_RelationalOperator10_b = ((Mooventure2016_Rev5_B.s206_IPT_HVDCVoltage >
                                   (Battery_Voltage_Too_High_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S36>/motohawk_fault_def9' */

    /* Set Fault Suspected Status: Battery_Voltage_Too_High */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(0, rtb_RelationalOperator10_b);
      UpdateFault(0);
    }
  }

  /* End of Outputs for SubSystem: '<S31>/Charger' */
  /* S-Function Block: <S244>/motohawk_ain4 Resource: DCDC_Conveter */
  Mooventure2016_Rev5_B.s244_motohawk_ain4_o1 = DCDC_Conveter_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S259>/If' incorporates:
   *  Inport: '<S260>/In1'
   *  Inport: '<S261>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S259>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S259>/override_enable'
   */
  if ((DCDC_Status_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S259>/NewValue' incorporates:
     *  ActionPort: '<S260>/Action Port'
     */
    rtb_Merge_bn = ((uint16_T)(DCDC_Status_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S260>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(45);
    }

    /* End of Outputs for SubSystem: '<S259>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S259>/OldValue' incorporates:
     *  ActionPort: '<S261>/Action Port'
     */
    rtb_Merge_bn = Mooventure2016_Rev5_B.s244_motohawk_ain4_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S261>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(46);
    }

    /* End of Outputs for SubSystem: '<S259>/OldValue' */
  }

  /* End of If: '<S259>/If' */

  /* RelationalOperator: '<S37>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S37>/motohawk_calibration1'
   */
  rtb_RelationalOperator11_d = ((real_T)rtb_Merge_bn <
    (DCDC_Converter_Not_Running_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S37>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: DCDC_Converter_Not_Running */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(45, rtb_RelationalOperator11_d);
    UpdateFault(45);
  }

  /* RelationalOperator: '<S38>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration'
   */
  rtb_RelationalOperator11_d = ((Contactor1_DataStore()) < (real_T)
    Mooventure2016_Rev5_B.s463_Coil1State);

  /* S-Function (motohawk_sfun_fault_def): '<S38>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Contactor_1_Failure_To_Close */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(25, rtb_RelationalOperator11_d);
    UpdateFault(25);
  }

  /* RelationalOperator: '<S38>/Relational Operator12' incorporates:
   *  Constant: '<S369>/Constant2'
   *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration3'
   */
  rtb_RelationalOperator12 = (((Contactor4_DataStore()) < 0.0));

  /* S-Function (motohawk_sfun_fault_def): '<S38>/motohawk_fault_def10' */

  /* Set Fault Suspected Status: Contactor_4_Failure_To_Close */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(34, rtb_RelationalOperator12);
    UpdateFault(34);
  }

  /* RelationalOperator: '<S38>/Relational Operator13' incorporates:
   *  Constant: '<S369>/Constant2'
   *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration3'
   */
  rtb_LogicalOperator5 = ((Contactor4_DataStore()) < 0.0);

  /* Logic: '<S38>/Logical Operator3' incorporates:
   *  Constant: '<S45>/Constant'
   *  RelationalOperator: '<S38>/Relational Operator14'
   *  S-Function (motohawk_sfun_calibration): '<S38>/motohawk_calibration3'
   */
  rtb_LogicalOperator3_p = ((rtb_LogicalOperator5 && (0.0 >
    (Contactor4_Unexpected_Open_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S38>/motohawk_fault_def11' */

  /* Set Fault Suspected Status: Contactor_4_Unexpected_Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(36, rtb_LogicalOperator3_p);
    UpdateFault(36);
  }

  /* RelationalOperator: '<S38>/Relational Operator15' incorporates:
   *  Constant: '<S369>/Constant2'
   *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration3'
   */
  rtb_RelationalOperator15 = (((Contactor4_DataStore()) > 0.0));

  /* S-Function (motohawk_sfun_fault_def): '<S38>/motohawk_fault_def12' */

  /* Set Fault Suspected Status: Contactor_4_Fused */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(35, rtb_RelationalOperator15);
    UpdateFault(35);
  }

  /* RelationalOperator: '<S38>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration'
   */
  rtb_RelationalOperator11_d = ((Contactor1_DataStore()) < (real_T)
    Mooventure2016_Rev5_B.s463_Coil1State);

  /* S-Function Block: <S42>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s42_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_e = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S42>/Switch' incorporates:
   *  Constant: '<S42>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S42>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S42>/motohawk_delta_time'
   *  Sum: '<S42>/Sum'
   */
  if (Mooventure2016_Rev5_B.s463_Coil1State) {
    rtb_Switch_hc = rtb_motohawk_delta_time_e + ContactorOne_DataStore();
  } else {
    rtb_Switch_hc = 0.0;
  }

  /* End of Switch: '<S42>/Switch' */
  /* Logic: '<S38>/Logical Operator' incorporates:
   *  RelationalOperator: '<S38>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S38>/motohawk_calibration'
   */
  rtb_LogicalOperator_cw = ((rtb_RelationalOperator11_d && (rtb_Switch_hc >
    (Contactor1_Unexpected_Open_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S38>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Contactor_1_Unexpected_Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(27, rtb_LogicalOperator_cw);
    UpdateFault(27);
  }

  /* RelationalOperator: '<S38>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration'
   */
  rtb_RelationalOperator11_d = ((Contactor1_DataStore()) > (real_T)
    Mooventure2016_Rev5_B.s463_Coil1State);

  /* S-Function (motohawk_sfun_fault_def): '<S38>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Contactor_1_Fused */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(26, rtb_RelationalOperator11_d);
    UpdateFault(26);
  }

  /* RelationalOperator: '<S38>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration1'
   */
  rtb_RelationalOperator11_d = ((Contactor2_DataStore()) < (real_T)
    Mooventure2016_Rev5_B.s464_Coil2State);

  /* S-Function (motohawk_sfun_fault_def): '<S38>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Contactor_2_Failure_To_Close */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(28, rtb_RelationalOperator11_d);
    UpdateFault(28);
  }

  /* RelationalOperator: '<S38>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration1'
   */
  rtb_RelationalOperator11_d = ((Contactor2_DataStore()) < (real_T)
    Mooventure2016_Rev5_B.s464_Coil2State);

  /* S-Function Block: <S43>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s43_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_j = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S43>/Switch' incorporates:
   *  Constant: '<S43>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S43>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S43>/motohawk_delta_time'
   *  Sum: '<S43>/Sum'
   */
  if (Mooventure2016_Rev5_B.s464_Coil2State) {
    rtb_Switch_pm = rtb_motohawk_delta_time_j + ContactorTwo_DataStore();
  } else {
    rtb_Switch_pm = 0.0;
  }

  /* End of Switch: '<S43>/Switch' */
  /* Logic: '<S38>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S38>/Relational Operator6'
   *  S-Function (motohawk_sfun_calibration): '<S38>/motohawk_calibration1'
   */
  rtb_LogicalOperator1_h = ((rtb_RelationalOperator11_d && (rtb_Switch_pm >
    (Contactor2_Unexpected_Open_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S38>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Contactor_2_Unexpected_Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(30, rtb_LogicalOperator1_h);
    UpdateFault(30);
  }

  /* RelationalOperator: '<S38>/Relational Operator7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration1'
   */
  rtb_RelationalOperator11_d = ((Contactor2_DataStore()) > (real_T)
    Mooventure2016_Rev5_B.s464_Coil2State);

  /* S-Function (motohawk_sfun_fault_def): '<S38>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Contactor_2_Fused */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(29, rtb_RelationalOperator11_d);
    UpdateFault(29);
  }

  /* RelationalOperator: '<S38>/Relational Operator8' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration2'
   */
  rtb_RelationalOperator11_d = ((Contactor3_DataStore()) < (real_T)
    Mooventure2016_Rev5_B.s465_Coil3State);

  /* S-Function (motohawk_sfun_fault_def): '<S38>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Contactor_3_Failure_To_Close */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(31, rtb_RelationalOperator11_d);
    UpdateFault(31);
  }

  /* RelationalOperator: '<S38>/Relational Operator9' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration2'
   */
  rtb_RelationalOperator11_d = ((Contactor3_DataStore()) < (real_T)
    Mooventure2016_Rev5_B.s465_Coil3State);

  /* S-Function Block: <S44>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s44_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_nm = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S44>/Switch' incorporates:
   *  Constant: '<S44>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S44>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S44>/motohawk_delta_time'
   *  Sum: '<S44>/Sum'
   */
  if (Mooventure2016_Rev5_B.s465_Coil3State) {
    rtb_Switch_p = rtb_motohawk_delta_time_nm + ContactorThree_DataStore();
  } else {
    rtb_Switch_p = 0.0;
  }

  /* End of Switch: '<S44>/Switch' */
  /* Logic: '<S38>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S38>/Relational Operator10'
   *  S-Function (motohawk_sfun_calibration): '<S38>/motohawk_calibration2'
   */
  rtb_LogicalOperator2_k = ((rtb_RelationalOperator11_d && (rtb_Switch_p >
    (Contactor3_Unexpected_Open_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S38>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Contactor_3_Unexpected_Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(33, rtb_LogicalOperator2_k);
    UpdateFault(33);
  }

  /* RelationalOperator: '<S38>/Relational Operator11' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration2'
   */
  rtb_RelationalOperator11_d = ((Contactor3_DataStore()) > (real_T)
    Mooventure2016_Rev5_B.s465_Coil3State);

  /* S-Function (motohawk_sfun_fault_def): '<S38>/motohawk_fault_def9' */

  /* Set Fault Suspected Status: Contactor_3_Fused */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(32, rtb_RelationalOperator11_d);
    UpdateFault(32);
  }

  /* Saturate: '<S42>/Saturation' */
  rtb_Saturation_f0 = rtb_Switch_hc >= 16000.0 ? 16000.0 : rtb_Switch_hc <= 0.0 ?
    0.0 : rtb_Switch_hc;

  /* S-Function (motohawk_sfun_data_write): '<S42>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ContactorOne */
  {
    ContactorOne_DataStore() = rtb_Saturation_f0;
  }

  /* Saturate: '<S43>/Saturation' */
  rtb_Saturation_k = rtb_Switch_pm >= 16000.0 ? 16000.0 : rtb_Switch_pm <= 0.0 ?
    0.0 : rtb_Switch_pm;

  /* S-Function (motohawk_sfun_data_write): '<S43>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ContactorTwo */
  {
    ContactorTwo_DataStore() = rtb_Saturation_k;
  }

  /* Saturate: '<S44>/Saturation' */
  rtb_Saturation_b = rtb_Switch_p >= 16000.0 ? 16000.0 : rtb_Switch_p <= 0.0 ?
    0.0 : rtb_Switch_p;

  /* S-Function (motohawk_sfun_data_write): '<S44>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ContactorThree */
  {
    ContactorThree_DataStore() = rtb_Saturation_b;
  }

  /* Saturate: '<S45>/Saturation' */
  rtb_Saturation_o2 = 0.0;

  /* S-Function (motohawk_sfun_data_write): '<S45>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ContactorFour */
  {
    ContactorFour_DataStore() = rtb_Saturation_o2;
  }

  /* S-Function (motohawk_sfun_data_read): '<S45>/motohawk_data_read' */
  rtb_Switch_hc = ContactorFour_DataStore();

  /* S-Function Block: <S45>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s45_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hc = ((real_T) delta) * 0.000001;
  }

  /* Logic: '<S39>/Logical Operator' */
  rtb_LogicalOperator5 = (rtb_RelationalOperator2_id ||
    rtb_RelationalOperator_jg || rtb_motohawk_fault_action1_g ||
    rtb_LogicalOperator_b2);

  /* Outputs for Triggered SubSystem: '<S39>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S46>/Trigger'
   */
  if (rtb_LogicalOperator5 &&
      (Mooventure2016_Rev5_PrevZCSigState.TriggeredSubsystem_Trig_ZCE !=
       POS_ZCSIG)) {
    /* S-Function (motohawk_sfun_data_write): '<S46>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TempReading */
    {
      TempReading_DataStore() = Mooventure2016_Rev5_B.s245_temp_reading;
    }
  }

  Mooventure2016_Rev5_PrevZCSigState.TriggeredSubsystem_Trig_ZCE = (uint8_T)
    (rtb_LogicalOperator5 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

  /* End of Outputs for SubSystem: '<S39>/Triggered Subsystem' */
  /* Sum: '<S39>/Add' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S39>/motohawk_calibration'
   */
  rtb_UnitDelay_o = (Temp_Fault_Hyst_DataStore()) +
    Mooventure2016_Rev5_B.s245_temp_reading;

  /* Logic: '<S39>/Logical Operator2' incorporates:
   *  Logic: '<S39>/Logical Operator1'
   *  RelationalOperator: '<S39>/Relational Operator'
   *  S-Function (motohawk_sfun_data_read): '<S39>/motohawk_data_read'
   */
  rtb_LogicalOperator2_p = (((!(rtb_UnitDelay_o >= TempReading_DataStore())) &&
    rtb_LogicalOperator5));

  /* S-Function (motohawk_sfun_fault_def): '<S39>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: HV_Heater_Poor_Performance */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(72, rtb_LogicalOperator2_p);
    UpdateFault(72);
  }

  /* RelationalOperator: '<S39>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S39>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_p = ((Mooventure2016_Rev5_B.s245_temp_reading >
    (HV_Heater_Over_Temperature_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S39>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: HV_Heater_Over_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(71, rtb_RelationalOperator1_p);
    UpdateFault(71);
  }

  /* Sum: '<S39>/Add1' incorporates:
   *  UnitDelay: '<S39>/Unit Delay'
   */
  rtb_Switch_hc = (real_T)rtb_Heater_Temp_Raw -
    Mooventure2016_Rev5_DWork.s39_UnitDelay_DSTATE;

  /* Abs: '<S39>/Abs' */
  rtb_Switch_hc = fabs(rtb_Switch_hc);

  /* RelationalOperator: '<S39>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S39>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_d = ((rtb_Switch_hc >=
    (HV_Heater_Temperature_Sensor_A_Intermittent_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S39>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: HV_Heater_Temperature_Sensor_A_Intermittent */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(74, rtb_RelationalOperator2_d);
    UpdateFault(74);
  }

  /* RelationalOperator: '<S39>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S39>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_h = (((real_T)rtb_Heater_Temp_Raw <
    (HV_Heater_Temperature_Sensor_A_Low_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S39>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: HV_Heater_Temperature_Sensor_A_Low_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(75, rtb_RelationalOperator3_h);
    UpdateFault(75);
  }

  /* RelationalOperator: '<S39>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S39>/motohawk_calibration4'
   */
  rtb_RelationalOperator4_m = (((real_T)rtb_Heater_Temp_Raw >
    (HV_Heater_Temperature_Sensor_A_High_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S39>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: HV_Heater_Temperature_Sensor_A_High_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(73, rtb_RelationalOperator4_m);
    UpdateFault(73);
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S201>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4019p0004_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4019p0004_Receive(0, &msg_id, 0, msg_data);
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
      Mooventure2016_Rev5_B.s201_MaximumDischargePower_10s = ((real_T) tmp0) /
        ((real_T) 100);
      Mooventure2016_Rev5_B.s201_MaximumRegenPower_10s = ((real_T) tmp1) /
        ((real_T) 100);
      Mooventure2016_Rev5_B.s201_IsolationLevel = ((real_T) tmp2) * ((real_T) 4);
      Mooventure2016_Rev5_B.s201_ActiveDTC = (real_T) tmp3;
      Mooventure2016_Rev5_B.s201_PPL10s_RollingCounter = (real_T) tmp4;
    }
  }

  /* RelationalOperator: '<S47>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S47>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_cg = ((Mooventure2016_Rev5_B.s201_ActiveDTC >
    (HV_Battery_2G_BMS_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S47>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: HV_Battery_2G_BMS_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(60, rtb_RelationalOperator1_cg);
    UpdateFault(60);
  }

  /* RelationalOperator: '<S47>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S47>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_a = ((rtb_Sum1 ==
    (HV_Battery_Too_Low_For_Load_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S47>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: HV_Battery_Too_Low_For_Load */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(69, rtb_RelationalOperator5_a);
    UpdateFault(69);
  }

  /* If: '<S265>/If' incorporates:
   *  Inport: '<S275>/In1'
   *  Inport: '<S276>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S265>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S265>/override_enable'
   */
  if ((Batt_Current_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S265>/NewValue' incorporates:
     *  ActionPort: '<S275>/Action Port'
     */
    Mooventure2016_Rev5_B.s265_Merge = (Batt_Current_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S275>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(49);
    }

    /* End of Outputs for SubSystem: '<S265>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S265>/OldValue' incorporates:
     *  ActionPort: '<S276>/Action Port'
     */
    Mooventure2016_Rev5_B.s265_Merge = Mooventure2016_Rev5_B.s201_BatteryCurrent;

    /* S-Function (motohawk_sfun_code_cover): '<S276>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(50);
    }

    /* End of Outputs for SubSystem: '<S265>/OldValue' */
  }

  /* End of If: '<S265>/If' */

  /* Logic: '<S47>/Logical Operator' incorporates:
   *  RelationalOperator: '<S47>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S47>/motohawk_calibration3'
   */
  rtb_LogicalOperator_a = (((Mooventure2016_Rev5_B.s265_Merge >
    (HV_Battery_Try_To_Balance_Under_Load_Fault_DataStore())) &&
    Mooventure2016_Rev5_B.s201_CellBalanceingActive));

  /* S-Function (motohawk_sfun_fault_def): '<S47>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: HV_Battery_Try_To_Balance_Under_Load */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(70, rtb_LogicalOperator_a);
    UpdateFault(70);
  }

  /* Sum: '<S47>/Add' */
  rtb_UnitDelay_o = Mooventure2016_Rev5_B.s201_MaxCellVoltage -
    Mooventure2016_Rev5_B.s201_MinCellVoltage;

  /* RelationalOperator: '<S47>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S47>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_la = ((rtb_UnitDelay_o >
    (HV_Battery_Cell_Balancing_Required_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S47>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: HV_Battery_Cell_Balancing_Required_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(63, rtb_RelationalOperator2_la);
    UpdateFault(63);
  }

  /* If: '<S266>/If' incorporates:
   *  Inport: '<S277>/In1'
   *  Inport: '<S278>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S266>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S266>/override_enable'
   */
  if ((Batt_Age_Count_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S266>/NewValue' incorporates:
     *  ActionPort: '<S277>/Action Port'
     */
    rtb_Merge_nu = (Batt_Age_Count_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S277>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(51);
    }

    /* End of Outputs for SubSystem: '<S266>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S266>/OldValue' incorporates:
     *  ActionPort: '<S278>/Action Port'
     */
    rtb_Merge_nu = Mooventure2016_Rev5_B.s201_AgeCount;

    /* S-Function (motohawk_sfun_code_cover): '<S278>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(52);
    }

    /* End of Outputs for SubSystem: '<S266>/OldValue' */
  }

  /* End of If: '<S266>/If' */

  /* RelationalOperator: '<S47>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S47>/motohawk_calibration4'
   */
  rtb_motohawk_fault_action1_g = ((real_T)rtb_Merge_nu >=
    (HV_Battery_48_Controller_Communication_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S47>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: HV_Battery_48_Controller_Communication_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(61, rtb_motohawk_fault_action1_g);
    UpdateFault(61);
  }

  /* RelationalOperator: '<S47>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S47>/motohawk_calibration6'
   */
  rtb_RelationalOperator6_i = ((rtb_Merge_o0 >
    (HV_Battery_Above_Safe_Charge_Point_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S47>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: HV_Battery_Above_Safe_Charge_Point */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(62, rtb_RelationalOperator6_i);
    UpdateFault(62);
  }

  /* RelationalOperator: '<S48>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S48>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_cc = ((Mooventure2016_Rev5_B.s201_PrechargeState ==
    (HV_Battery_Precharge_Failure_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S48>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: HV_Battery_Precharge_Failure */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(68, rtb_RelationalOperator2_cc);
    UpdateFault(68);
  }

  /* RelationalOperator: '<S49>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S49>/motohawk_calibration3'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s201_MinCellTemperature >
    (HV_Battery_Pack_Low_Temperature_Fault_Low_DataStore()));

  /* Logic: '<S49>/Logical Operator' incorporates:
   *  RelationalOperator: '<S49>/Relational Operator7'
   *  S-Function (motohawk_sfun_calibration): '<S49>/motohawk_calibration4'
   */
  rtb_LogicalOperator_oh = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s201_MinCellTemperature <=
     (HV_Battery_Pack_Low_Temperature_Fault_High_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S49>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: HV_Battery_Pack_Low_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(67, rtb_LogicalOperator_oh);
    UpdateFault(67);
  }

  /* RelationalOperator: '<S49>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S49>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_lg = ((Mooventure2016_Rev5_B.s201_MinCellTemperature <=
                                 
    (HV_Battery_Pack_Below_Operating_Temperature_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S49>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: HV_Battery_Pack_Below_Operating_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(65, rtb_RelationalOperator2_lg);
    UpdateFault(65);
  }

  /* RelationalOperator: '<S49>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S49>/motohawk_calibration5'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s201_MaxCellTemperature >
    (HV_Battery_Pack_High_Temperature_Fault_Low_DataStore()));

  /* Logic: '<S49>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S49>/Relational Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S49>/motohawk_calibration6'
   */
  rtb_LogicalOperator1_a = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s201_MaxCellTemperature <=
     (HV_Battery_Pack_High_Temperature_Fault_High_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S49>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: HV_Battery_Pack_High_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(66, rtb_LogicalOperator1_a);
    UpdateFault(66);
  }

  /* RelationalOperator: '<S49>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S49>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_pt = ((Mooventure2016_Rev5_B.s201_MaxCellTemperature >
                                 
    (HV_Battery_Pack_Above_Operating_Temperature_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S49>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: HV_Battery_Pack_Above_Operating_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(64, rtb_RelationalOperator1_pt);
    UpdateFault(64);
  }

  /* RelationalOperator: '<S292>/Compare' incorporates:
   *  Constant: '<S292>/Constant'
   */
  rtb_motohawk_fault_action1_g = (Mooventure2016_Rev5_B.s288_Out == 4.0);

  /* S-Function Block: <S297>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s297_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_f = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S297>/Switch' incorporates:
   *  Constant: '<S297>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S297>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S297>/motohawk_delta_time'
   *  Sum: '<S297>/Sum'
   */
  if (rtb_motohawk_fault_action1_g) {
    rtb_Switch_hc = rtb_motohawk_delta_time_f + ButtonDelay4_DataStore();
  } else {
    rtb_Switch_hc = 0.0;
  }

  /* End of Switch: '<S297>/Switch' */

  /* Logic: '<S286>/Logical Operator' incorporates:
   *  RelationalOperator: '<S286>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration7'
   */
  rtb_LogicalOperator_b2 = (rtb_motohawk_fault_action1_g && (rtb_Switch_hc >=
    (Delay_DataStore())));

  /* RelationalOperator: '<S291>/Compare' incorporates:
   *  Constant: '<S291>/Constant'
   */
  rtb_motohawk_fault_action1_g = (Mooventure2016_Rev5_B.s288_Out == 3.0);

  /* S-Function Block: <S296>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s296_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_cz = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S296>/Switch' incorporates:
   *  Constant: '<S296>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S296>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S296>/motohawk_delta_time'
   *  Sum: '<S296>/Sum'
   */
  if (rtb_motohawk_fault_action1_g) {
    rtb_Switch_pm = rtb_motohawk_delta_time_cz + ButtonDelay3_DataStore();
  } else {
    rtb_Switch_pm = 0.0;
  }

  /* End of Switch: '<S296>/Switch' */

  /* Logic: '<S285>/Logical Operator' incorporates:
   *  RelationalOperator: '<S285>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration7'
   */
  rtb_LogicalOperator_pl = (rtb_motohawk_fault_action1_g && (rtb_Switch_pm >=
    (Delay_DataStore())));

  /* RelationalOperator: '<S290>/Compare' incorporates:
   *  Constant: '<S290>/Constant'
   */
  rtb_motohawk_fault_action1_g = (Mooventure2016_Rev5_B.s288_Out == 2.0);

  /* S-Function Block: <S295>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s295_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_p1 = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S295>/Switch' incorporates:
   *  Constant: '<S295>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S295>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S295>/motohawk_delta_time'
   *  Sum: '<S295>/Sum'
   */
  if (rtb_motohawk_fault_action1_g) {
    rtb_Switch_p = rtb_motohawk_delta_time_p1 + ButtonDelay2_DataStore();
  } else {
    rtb_Switch_p = 0.0;
  }

  /* End of Switch: '<S295>/Switch' */

  /* Logic: '<S284>/Logical Operator' incorporates:
   *  RelationalOperator: '<S284>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration7'
   */
  rtb_LogicalOperator_e = (rtb_motohawk_fault_action1_g && (rtb_Switch_p >=
    (Delay_DataStore())));

  /* MATLAB Function Block: '<S204>/Embedded MATLAB Function2' */

  /* MATLAB Function 'Foreground/Inputs/Driver Inputs/Embedded MATLAB Function2': '<S301>:1' */
  /* '<S301>:1:3' */
  Mooventure2016_Rev5_B.s301_passengerTemp =
    Mooventure2016_Rev5_B.s204_PASSENGER_10 * 10.0 +
    Mooventure2016_Rev5_B.s204_PASSENGER_1;

  /* S-Function (motohawk_sfun_read_canmsg): '<S204>/Read CAN Message4' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4496p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4496p0001_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint8_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[4])) ;
      Mooventure2016_Rev5_B.s204_Button_Pressed = (real_T) tmp0;
    }
  }

  /* RelationalOperator: '<S205>/Relational Operator' incorporates:
   *  Constant: '<S205>/Constant'
   */
  rtb_Eaton_Plugged_In = ((rtb_Merge_b >= 1.0));

  /* S-Function (motohawk_sfun_read_canmsg): '<S206>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4636p0005_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4636p0005_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s206_AgeCount_j + 1) >
        Mooventure2016_Rev5_B.s206_AgeCount_j)
      Mooventure2016_Rev5_B.s206_AgeCount_j++;
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
      Mooventure2016_Rev5_B.s206_IPT_DCErrorCategory = (real_T) tmp0;
      Mooventure2016_Rev5_B.s206_IPT_DCLVOn = (real_T) tmp1;
      Mooventure2016_Rev5_B.s206_IPT_DCLVGeneralError = (real_T) tmp2;
      Mooventure2016_Rev5_B.s206_IPT_DCLVMaxPower = ((real_T) tmp3) * ((real_T)
        20);
      Mooventure2016_Rev5_B.s206_IPT_DCLVBusCurrent = (real_T) tmp4;
      Mooventure2016_Rev5_B.s206_IPT_DCLVBusVoltage = ((real_T) tmp5) / ((real_T)
        10);
      Mooventure2016_Rev5_B.s206_IPT_DCHVBusCurrent = ((real_T) tmp6) / ((real_T)
        10);
      Mooventure2016_Rev5_B.s206_AgeCount_j = 0;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S206>/Read CAN Message4' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4638p0005_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4638p0005_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s206_AgeCount_o + 1) >
        Mooventure2016_Rev5_B.s206_AgeCount_o)
      Mooventure2016_Rev5_B.s206_AgeCount_o++;
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
      Mooventure2016_Rev5_B.s206_Heading = ((real_T) tmp0) * ((real_T) 2);
      Mooventure2016_Rev5_B.s206_Speed = (real_T) tmp1;
      Mooventure2016_Rev5_B.s206_Altitude = ((real_T) tmp2) + ((real_T) -500);
      Mooventure2016_Rev5_B.s206_GPSQuality = (real_T) tmp3;
      Mooventure2016_Rev5_B.s206_DateTime = (real_T) tmp4;
      Mooventure2016_Rev5_B.s206_AgeCount_o = 0;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S201>/Read CAN Message6' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4024p0004_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4024p0004_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint32_T tmp0 = 0;
      uint8_T tmp1 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp0))[2] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp0))[3] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[4])) ;
      Mooventure2016_Rev5_B.s201_LifeTimeAmpHoursOut = ((real_T) tmp0) /
        ((real_T) 10);
      Mooventure2016_Rev5_B.s201_LTAHI_RollingCounter = (real_T) tmp1;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S201>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4020p0004_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4020p0004_Receive(0, &msg_id, 0, msg_data);
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint8_T tmp2 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[7])) ;
      Mooventure2016_Rev5_B.s201_MaximumDischargePower_Continuous = ((real_T)
        tmp0) / ((real_T) 100);
      Mooventure2016_Rev5_B.s201_MaximumRegenPower_Continuous = ((real_T) tmp1) /
        ((real_T) 100);
      Mooventure2016_Rev5_B.s201_PPLCont_RollingCounter = (real_T) tmp2;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S199>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3820p0005_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3820p0005_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s199_AgeCount + 1) >
        Mooventure2016_Rev5_B.s199_AgeCount)
      Mooventure2016_Rev5_B.s199_AgeCount++;
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint8_T tmp2 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[4])) ;
      Mooventure2016_Rev5_B.s199_LF_Wheel_Rolling_Count = (real_T) tmp0;
      Mooventure2016_Rev5_B.s199_RT_Wheel_Rolling_Count = (real_T) tmp1;
      Mooventure2016_Rev5_B.s199_Wheel_Rolling_Timestamp = (real_T) tmp2;
      Mooventure2016_Rev5_B.s199_AgeCount = 0;
    }
  }

  /* If: '<S209>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S209>/override_enable'
   */
  if ((RT_Wheel_Rolling_Count_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S209>/NewValue' incorporates:
     *  ActionPort: '<S220>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S220>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(17);
    }

    /* End of Outputs for SubSystem: '<S209>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S209>/OldValue' incorporates:
     *  ActionPort: '<S221>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S221>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(18);
    }

    /* End of Outputs for SubSystem: '<S209>/OldValue' */
  }

  /* End of If: '<S209>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S199>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3822p0004_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3822p0004_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s199_AgeCount_e + 1) >
        Mooventure2016_Rev5_B.s199_AgeCount_e)
      Mooventure2016_Rev5_B.s199_AgeCount_e++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0] & 0x00000008) >> 3) ;
      Mooventure2016_Rev5_B.s199_TCS_ENG_EVNT_IN_PROGRESS = (real_T) tmp0;
      Mooventure2016_Rev5_B.s199_AgeCount_e = 0;
    }
  }

  /* If: '<S210>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S210>/override_enable'
   */
  if ((TCS_ENG_EVNT_IN_PROGRESS_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S210>/NewValue' incorporates:
     *  ActionPort: '<S222>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S222>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(19);
    }

    /* End of Outputs for SubSystem: '<S210>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S210>/OldValue' incorporates:
     *  ActionPort: '<S223>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S223>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(20);
    }

    /* End of Outputs for SubSystem: '<S210>/OldValue' */
  }

  /* End of If: '<S210>/If' */

  /* If: '<S211>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S211>/override_enable'
   */
  if ((ABS_417_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S211>/NewValue' incorporates:
     *  ActionPort: '<S224>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S224>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(21);
    }

    /* End of Outputs for SubSystem: '<S211>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S211>/OldValue' incorporates:
     *  ActionPort: '<S225>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S225>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(22);
    }

    /* End of Outputs for SubSystem: '<S211>/OldValue' */
  }

  /* End of If: '<S211>/If' */

  /* If: '<S212>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S212>/override_enable'
   */
  if ((Wheel_Rolling_Timestamp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S212>/NewValue' incorporates:
     *  ActionPort: '<S226>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S226>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(23);
    }

    /* End of Outputs for SubSystem: '<S212>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S212>/OldValue' incorporates:
     *  ActionPort: '<S227>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S227>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(24);
    }

    /* End of Outputs for SubSystem: '<S212>/OldValue' */
  }

  /* End of If: '<S212>/If' */

  /* If: '<S213>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S213>/override_enable'
   */
  if ((ABS_217_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S213>/NewValue' incorporates:
     *  ActionPort: '<S228>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S228>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(25);
    }

    /* End of Outputs for SubSystem: '<S213>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S213>/OldValue' incorporates:
     *  ActionPort: '<S229>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S229>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(26);
    }

    /* End of Outputs for SubSystem: '<S213>/OldValue' */
  }

  /* End of If: '<S213>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S199>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3821p0004_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3821p0004_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s199_AgeCount_n + 1) >
        Mooventure2016_Rev5_B.s199_AgeCount_n)
      Mooventure2016_Rev5_B.s199_AgeCount_n++;
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
      Mooventure2016_Rev5_B.s199_Front_left_whl_speed = (((real_T) tmp0) /
        ((real_T) 100)) + ((real_T) -1000);
      Mooventure2016_Rev5_B.s199_Front_right_whl_speed = (((real_T) tmp1) /
        ((real_T) 100)) + ((real_T) -1000);
      Mooventure2016_Rev5_B.s199_Rear_left_whl_speed = (((real_T) tmp2) /
        ((real_T) 100)) + ((real_T) -1000);
      Mooventure2016_Rev5_B.s199_Rear_right_whl_speed = (((real_T) tmp3) /
        ((real_T) 100)) + ((real_T) -1000);
      Mooventure2016_Rev5_B.s199_AgeCount_n = 0;
    }
  }

  /* If: '<S214>/If' incorporates:
   *  Inport: '<S230>/In1'
   *  Inport: '<S231>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S214>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S214>/override_enable'
   */
  if ((Front_right_whl_speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S214>/NewValue' incorporates:
     *  ActionPort: '<S230>/Action Port'
     */
    rtb_UnitDelay_m = (Front_right_whl_speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S230>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(27);
    }

    /* End of Outputs for SubSystem: '<S214>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S214>/OldValue' incorporates:
     *  ActionPort: '<S231>/Action Port'
     */
    rtb_UnitDelay_m = Mooventure2016_Rev5_B.s199_Front_right_whl_speed;

    /* S-Function (motohawk_sfun_code_cover): '<S231>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(28);
    }

    /* End of Outputs for SubSystem: '<S214>/OldValue' */
  }

  /* End of If: '<S214>/If' */

  /* If: '<S215>/If' incorporates:
   *  Inport: '<S232>/In1'
   *  Inport: '<S233>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S215>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S215>/override_enable'
   */
  if ((Rear_left_whl_speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S215>/NewValue' incorporates:
     *  ActionPort: '<S232>/Action Port'
     */
    rtb_Merge_gq = (Rear_left_whl_speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S232>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(29);
    }

    /* End of Outputs for SubSystem: '<S215>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S215>/OldValue' incorporates:
     *  ActionPort: '<S233>/Action Port'
     */
    rtb_Merge_gq = Mooventure2016_Rev5_B.s199_Rear_left_whl_speed;

    /* S-Function (motohawk_sfun_code_cover): '<S233>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(30);
    }

    /* End of Outputs for SubSystem: '<S215>/OldValue' */
  }

  /* End of If: '<S215>/If' */

  /* If: '<S216>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S216>/override_enable'
   */
  if ((ABS_4B0_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S216>/NewValue' incorporates:
     *  ActionPort: '<S234>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S234>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(31);
    }

    /* End of Outputs for SubSystem: '<S216>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S216>/OldValue' incorporates:
     *  ActionPort: '<S235>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S235>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(32);
    }

    /* End of Outputs for SubSystem: '<S216>/OldValue' */
  }

  /* End of If: '<S216>/If' */

  /* If: '<S217>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S217>/override_enable'
   */
  if ((LF_Wheel_Rolling_Count_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S217>/NewValue' incorporates:
     *  ActionPort: '<S236>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S236>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(33);
    }

    /* End of Outputs for SubSystem: '<S217>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S217>/OldValue' incorporates:
     *  ActionPort: '<S237>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S237>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(34);
    }

    /* End of Outputs for SubSystem: '<S217>/OldValue' */
  }

  /* End of If: '<S217>/If' */

  /* If: '<S218>/If' incorporates:
   *  Inport: '<S238>/In1'
   *  Inport: '<S239>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S218>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S218>/override_enable'
   */
  if ((Front_left_whl_speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S218>/NewValue' incorporates:
     *  ActionPort: '<S238>/Action Port'
     */
    rtb_UnitDelay_o = (Front_left_whl_speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S238>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(35);
    }

    /* End of Outputs for SubSystem: '<S218>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S218>/OldValue' incorporates:
     *  ActionPort: '<S239>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s199_Front_left_whl_speed;

    /* S-Function (motohawk_sfun_code_cover): '<S239>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(36);
    }

    /* End of Outputs for SubSystem: '<S218>/OldValue' */
  }

  /* End of If: '<S218>/If' */

  /* If: '<S219>/If' incorporates:
   *  Inport: '<S240>/In1'
   *  Inport: '<S241>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S219>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S219>/override_enable'
   */
  if ((Rear_right_whl_speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S219>/NewValue' incorporates:
     *  ActionPort: '<S240>/Action Port'
     */
    rtb_Merge_lf = (Rear_right_whl_speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S240>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(37);
    }

    /* End of Outputs for SubSystem: '<S219>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S219>/OldValue' incorporates:
     *  ActionPort: '<S241>/Action Port'
     */
    rtb_Merge_lf = Mooventure2016_Rev5_B.s199_Rear_right_whl_speed;

    /* S-Function (motohawk_sfun_code_cover): '<S241>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(38);
    }

    /* End of Outputs for SubSystem: '<S219>/OldValue' */
  }

  /* End of If: '<S219>/If' */

  /* If: '<S264>/If' incorporates:
   *  Inport: '<S273>/In1'
   *  Inport: '<S274>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S264>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S264>/override_enable'
   */
  if ((Batt_Coolant_Temp_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S264>/NewValue' incorporates:
     *  ActionPort: '<S273>/Action Port'
     */
    Mooventure2016_Rev5_B.s264_Merge = (Batt_Coolant_Temp_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S273>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(47);
    }

    /* End of Outputs for SubSystem: '<S264>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S264>/OldValue' incorporates:
     *  ActionPort: '<S274>/Action Port'
     */
    Mooventure2016_Rev5_B.s264_Merge =
      Mooventure2016_Rev5_B.s201_CoolantTemperature;

    /* S-Function (motohawk_sfun_code_cover): '<S274>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(48);
    }

    /* End of Outputs for SubSystem: '<S264>/OldValue' */
  }

  /* End of If: '<S264>/If' */

  /* If: '<S267>/If' incorporates:
   *  Inport: '<S279>/In1'
   *  Inport: '<S280>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S267>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S267>/override_enable'
   */
  if ((Pack_State_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S267>/NewValue' incorporates:
     *  ActionPort: '<S279>/Action Port'
     */
    Mooventure2016_Rev5_B.s267_Merge = (Pack_State_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S279>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(53);
    }

    /* End of Outputs for SubSystem: '<S267>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S267>/OldValue' incorporates:
     *  ActionPort: '<S280>/Action Port'
     */
    Mooventure2016_Rev5_B.s267_Merge = Mooventure2016_Rev5_B.s201_PackState;

    /* S-Function (motohawk_sfun_code_cover): '<S280>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(54);
    }

    /* End of Outputs for SubSystem: '<S267>/OldValue' */
  }

  /* End of If: '<S267>/If' */

  /* If: '<S306>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S306>/override_enable'
   */
  if ((OutputCurrent_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S306>/NewValue' incorporates:
     *  ActionPort: '<S319>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S319>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(65);
    }

    /* End of Outputs for SubSystem: '<S306>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S306>/OldValue' incorporates:
     *  ActionPort: '<S320>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S320>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(66);
    }

    /* End of Outputs for SubSystem: '<S306>/OldValue' */
  }

  /* End of If: '<S306>/If' */

  /* If: '<S307>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S307>/override_enable'
   */
  if ((OutputVoltage_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S307>/NewValue' incorporates:
     *  ActionPort: '<S321>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S321>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(67);
    }

    /* End of Outputs for SubSystem: '<S307>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S307>/OldValue' incorporates:
     *  ActionPort: '<S322>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S322>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(68);
    }

    /* End of Outputs for SubSystem: '<S307>/OldValue' */
  }

  /* End of If: '<S307>/If' */

  /* If: '<S333>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S333>/override_enable'
   */
  if ((Subfunction_Select_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S333>/NewValue' incorporates:
     *  ActionPort: '<S340>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S340>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(77);
    }

    /* End of Outputs for SubSystem: '<S333>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S333>/OldValue' incorporates:
     *  ActionPort: '<S341>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S341>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(78);
    }

    /* End of Outputs for SubSystem: '<S333>/OldValue' */
  }

  /* End of If: '<S333>/If' */

  /* If: '<S334>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S334>/override_enable'
   */
  if ((Confirm_Actve_Trip_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S334>/NewValue' incorporates:
     *  ActionPort: '<S342>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S342>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(79);
    }

    /* End of Outputs for SubSystem: '<S334>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S334>/OldValue' incorporates:
     *  ActionPort: '<S343>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S343>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(80);
    }

    /* End of Outputs for SubSystem: '<S334>/OldValue' */
  }

  /* End of If: '<S334>/If' */

  /* If: '<S335>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S335>/override_enable'
   */
  if ((INFO_610_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S335>/NewValue' incorporates:
     *  ActionPort: '<S344>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S344>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(81);
    }

    /* End of Outputs for SubSystem: '<S335>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S335>/OldValue' incorporates:
     *  ActionPort: '<S345>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S345>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(82);
    }

    /* End of Outputs for SubSystem: '<S335>/OldValue' */
  }

  /* End of If: '<S335>/If' */

  /* If: '<S336>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S336>/override_enable'
   */
  if ((Confirm_Reset_Trip_B_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S336>/NewValue' incorporates:
     *  ActionPort: '<S346>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S346>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(83);
    }

    /* End of Outputs for SubSystem: '<S336>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S336>/OldValue' incorporates:
     *  ActionPort: '<S347>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S347>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(84);
    }

    /* End of Outputs for SubSystem: '<S336>/OldValue' */
  }

  /* End of If: '<S336>/If' */

  /* If: '<S337>/If' incorporates:
   *  Inport: '<S348>/In1'
   *  Inport: '<S349>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S337>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S337>/override_enable'
   */
  if ((Confirm_Reset_Trip_A_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S337>/NewValue' incorporates:
     *  ActionPort: '<S348>/Action Port'
     */
    rtb_Merge_ld = (Confirm_Reset_Trip_A_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S348>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(85);
    }

    /* End of Outputs for SubSystem: '<S337>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S337>/OldValue' incorporates:
     *  ActionPort: '<S349>/Action Port'
     */
    rtb_Merge_ld = Mooventure2016_Rev5_B.s207_Confirm_Reset_Trip_A;

    /* S-Function (motohawk_sfun_code_cover): '<S349>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(86);
    }

    /* End of Outputs for SubSystem: '<S337>/OldValue' */
  }

  /* End of If: '<S337>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S208>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4843p0005_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4843p0005_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s208_AgeCount + 1) >
        Mooventure2016_Rev5_B.s208_AgeCount)
      Mooventure2016_Rev5_B.s208_AgeCount++;
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
      Mooventure2016_Rev5_B.s208_STR_WHL_ANGLE_CNTR_FND = (real_T) tmp0;
      Mooventure2016_Rev5_B.s208_STR_WHL_ANGLE = (((real_T) tmp1) / ((real_T) 10))
        + ((real_T) -1000);
      Mooventure2016_Rev5_B.s208_RELATIVE_STR_WHL_ANGLE = (((real_T) tmp2) /
        ((real_T) 10)) + ((real_T) -2000);
      Mooventure2016_Rev5_B.s208_AgeCount = 0;
    }
  }

  /* If: '<S354>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S354>/override_enable'
   */
  if ((STR_WHL_ANGLE_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S354>/NewValue' incorporates:
     *  ActionPort: '<S358>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S358>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(91);
    }

    /* End of Outputs for SubSystem: '<S354>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S354>/OldValue' incorporates:
     *  ActionPort: '<S359>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S359>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(92);
    }

    /* End of Outputs for SubSystem: '<S354>/OldValue' */
  }

  /* End of If: '<S354>/If' */

  /* If: '<S355>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S355>/override_enable'
   */
  if ((RELATIVE_STR_WHL_ANGLE_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S355>/NewValue' incorporates:
     *  ActionPort: '<S360>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S360>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(93);
    }

    /* End of Outputs for SubSystem: '<S355>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S355>/OldValue' incorporates:
     *  ActionPort: '<S361>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S361>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(94);
    }

    /* End of Outputs for SubSystem: '<S355>/OldValue' */
  }

  /* End of If: '<S355>/If' */

  /* If: '<S356>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S356>/override_enable'
   */
  if ((PSCM_80_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S356>/NewValue' incorporates:
     *  ActionPort: '<S362>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S362>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(95);
    }

    /* End of Outputs for SubSystem: '<S356>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S356>/OldValue' incorporates:
     *  ActionPort: '<S363>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S363>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(96);
    }

    /* End of Outputs for SubSystem: '<S356>/OldValue' */
  }

  /* End of If: '<S356>/If' */

  /* If: '<S357>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S357>/override_enable'
   */
  if ((STR_WHL_ANGLE_CNTR_FND_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S357>/NewValue' incorporates:
     *  ActionPort: '<S364>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S364>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(97);
    }

    /* End of Outputs for SubSystem: '<S357>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S357>/OldValue' incorporates:
     *  ActionPort: '<S365>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S365>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(98);
    }

    /* End of Outputs for SubSystem: '<S357>/OldValue' */
  }

  /* End of If: '<S357>/If' */

  /* RelationalOperator: '<S53>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S53>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_a = ((Mooventure2016_Rev5_B.s204_Brake_Position >=
    (Brake_Pedal_Position_High_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S53>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Brake_Pedal_Position_Sensor_A_Circuit_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(13, rtb_RelationalOperator3_a);
    UpdateFault(13);
  }

  /* Abs: '<S53>/Abs' incorporates:
   *  Sum: '<S53>/Add'
   *  UnitDelay: '<S53>/Unit Delay'
   */
  rtb_Merge_hn = fabs(Mooventure2016_Rev5_B.s204_Brake_Position -
                      Mooventure2016_Rev5_DWork.s53_UnitDelay_DSTATE);

  /* RelationalOperator: '<S53>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S53>/motohawk_calibration'
   */
  rtb_RelationalOperator_l1 = ((rtb_Merge_hn >=
    (Brake_Pedal_Position_Intermiitent_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S53>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Brake_Pedal_Position_Intermiitent */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(11, rtb_RelationalOperator_l1);
    UpdateFault(11);
  }

  /* RelationalOperator: '<S53>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S53>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_da = ((Mooventure2016_Rev5_B.s204_Brake_Position <=
    (Brake_Pedal_Position_Low_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S53>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Brake_Pedal_Position_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(12, rtb_RelationalOperator2_da);
    UpdateFault(12);
  }

  /* RelationalOperator: '<S53>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S53>/motohawk_calibration4'
   */
  rtb_motohawk_fault_action1_g = ((real_T)Mooventure2016_Rev5_B.s204_AgeCount_j >=
                                  
    (Brake_Pedal_Position_Communication_Loss_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S53>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Brake_Pedal_Position_Communication_Loss */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(10, rtb_motohawk_fault_action1_g);
    UpdateFault(10);
  }

  /* DataTypeConversion: '<S54>/Data Type Conversion1' incorporates:
   *  RelationalOperator: '<S62>/FixPt Relational Operator'
   *  UnitDelay: '<S62>/Delay Input1'
   */
  rtb_motohawk_fault_action1_g = (rtb_LogicalOperator_h !=
    Mooventure2016_Rev5_DWork.s62_DelayInput1_DSTATE);

  /* S-Function (motohawk_sfun_fault_def): '<S54>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Cruise_Control_Off_Signal_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(41, rtb_motohawk_fault_action1_g);
    UpdateFault(41);
  }

  /* DataTypeConversion: '<S54>/Data Type Conversion2' incorporates:
   *  RelationalOperator: '<S63>/FixPt Relational Operator'
   *  UnitDelay: '<S63>/Delay Input1'
   */
  rtb_motohawk_fault_action1_g = (rtb_LogicalOperator_b2 !=
    Mooventure2016_Rev5_DWork.s63_DelayInput1_DSTATE);

  /* S-Function (motohawk_sfun_fault_def): '<S54>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Cruise_Control_Resume_Signal_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(43, rtb_motohawk_fault_action1_g);
    UpdateFault(43);
  }

  /* DataTypeConversion: '<S54>/Data Type Conversion3' incorporates:
   *  RelationalOperator: '<S64>/FixPt Relational Operator'
   *  UnitDelay: '<S64>/Delay Input1'
   */
  rtb_motohawk_fault_action1_g = (rtb_LogicalOperator_pl !=
    Mooventure2016_Rev5_DWork.s64_DelayInput1_DSTATE);

  /* S-Function (motohawk_sfun_fault_def): '<S54>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Cruise_Control_Set_Signal_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(44, rtb_motohawk_fault_action1_g);
    UpdateFault(44);
  }

  /* DataTypeConversion: '<S54>/Data Type Conversion4' incorporates:
   *  RelationalOperator: '<S65>/FixPt Relational Operator'
   *  UnitDelay: '<S65>/Delay Input1'
   */
  rtb_motohawk_fault_action1_g = (rtb_LogicalOperator_e !=
    Mooventure2016_Rev5_DWork.s65_DelayInput1_DSTATE);

  /* S-Function (motohawk_sfun_fault_def): '<S54>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Cruise_Control_Coast_Signal_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(40, rtb_motohawk_fault_action1_g);
    UpdateFault(40);
  }

  /* RelationalOperator: '<S54>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration2'
   */
  rtb_RelationalOperator1_f = ((Mooventure2016_Rev5_B.s204_Brake_Position >
    (Cruise_Disable_Brake_Fault1_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S54>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Cruise_Control_Brake_Switch_A_Circuit_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(37, rtb_RelationalOperator1_f);
    UpdateFault(37);
  }

  /* RelationalOperator: '<S54>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration1'
   */
  rtb_RelationalOperator2_j = ((Mooventure2016_Rev5_B.s204_Brake_Position <=
    (Cruise_Disable_Brake_Fault2_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S54>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Cruise_Control_Brake_Switch_A_Circuit_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(38, rtb_RelationalOperator2_j);
    UpdateFault(38);
  }

  /* DataTypeConversion: '<S54>/Data Type Conversion' incorporates:
   *  RelationalOperator: '<S61>/FixPt Relational Operator'
   *  UnitDelay: '<S61>/Delay Input1'
   */
  rtb_motohawk_fault_action1_g = (rtb_LogicalOperator_f !=
    Mooventure2016_Rev5_DWork.s61_DelayInput1_DSTATE);

  /* S-Function (motohawk_sfun_fault_def): '<S54>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Cruise_Control_On_Signal_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(42, rtb_motohawk_fault_action1_g);
    UpdateFault(42);
  }

  /* Logic: '<S54>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S54>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S54>/motohawk_fault_status1'
   */
  rtb_LogicalOperator2_i = ((IsFaultActive(37) || IsFaultActive(38)));

  /* S-Function (motohawk_sfun_fault_def): '<S54>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Cruise_Control_Brake_Switch_A_Circuit_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(39, rtb_LogicalOperator2_i);
    UpdateFault(39);
  }

  /* Product: '<S55>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S55>/motohawk_calibration7'
   */
  rtb_Merge_hn = (RPM_to_Wheel_Speed_Multiplier2_DataStore()) *
    Mooventure2016_Rev5_B.s330_Merge;

  /* RelationalOperator: '<S55>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S55>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_i3 = ((rtb_Merge_hn <=
    (Electric_Motor_Over_Speed_Reverse_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S55>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Electric_Motor_Over_Speed_Reverse */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(56, rtb_RelationalOperator3_i3);
    UpdateFault(56);
  }

  /* MATLAB Function Block: '<S55>/Data Correction Motor Fault' */
  Mooventure2016_Rev5_DataCorrectionMotorFault
    (Mooventure2016_Rev5_B.s206_IPT_WheelTorqueDelivered,
     &Mooventure2016_Rev5_B.s55_sf_DataCorrectionMotorFault);

  /* Sum: '<S55>/Add' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S55>/motohawk_data_read'
   */
  rtb_MinMax_l2 =
    Mooventure2016_Rev5_B.s55_sf_DataCorrectionMotorFault.s66_torqueOut -
    TorqueRequest_DataStore();

  /* Abs: '<S55>/Abs' */
  rtb_MinMax_l2 = fabs(rtb_MinMax_l2);

  /* RelationalOperator: '<S55>/Relational Operator12' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S55>/motohawk_calibration13'
   */
  rtb_RelationalOperator12_d = ((rtb_MinMax_l2 >=
    (Electric_Motor_Torque_Output_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S55>/motohawk_fault_def10' */

  /* Set Fault Suspected Status: Electric_Motor_Torque_Output_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(58, rtb_RelationalOperator12_d);
    UpdateFault(58);
  }

  /* RelationalOperator: '<S55>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S55>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_ad = ((Mooventure2016_Rev5_B.s206_IPT_HVDCVoltage <
    (Electric_Motor_Derated_Under_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S55>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Electric_Motor_Derated_Under_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(53, rtb_RelationalOperator1_ad);
    UpdateFault(53);
  }

  /* RelationalOperator: '<S55>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S55>/motohawk_calibration4'
   */
  rtb_RelationalOperator4_d = ((Mooventure2016_Rev5_B.s206_IPT_HVDCVoltage >
    (Electric_Motor_Derated_Over_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S55>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Electric_Motor_Derated_Over_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(51, rtb_RelationalOperator4_d);
    UpdateFault(51);
  }

  /* RelationalOperator: '<S55>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S55>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_e = ((rtb_Merge_hn >=
    (Electric_Motor_Over_Speed_Forward_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S55>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Electric_Motor_Over_Speed_Forward */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(55, rtb_RelationalOperator2_e);
    UpdateFault(55);
  }

  /* RelationalOperator: '<S55>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S55>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_k =
    ((Mooventure2016_Rev5_B.s206_IPT_InverterTemperature <
      (Electric_Motor_Derated_Under_Temperature_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S55>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Electric_Motor_Derated_Under_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(52, rtb_RelationalOperator5_k);
    UpdateFault(52);
  }

  /* RelationalOperator: '<S55>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S55>/motohawk_calibration6'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s206_IPT_InverterTemperature >
    (Electric_Motor_Derated_Approaching_Over_Temperature_Fault_Under_DataStore()));

  /* Logic: '<S55>/Logical Operator' incorporates:
   *  RelationalOperator: '<S55>/Relational Operator7'
   *  S-Function (motohawk_sfun_calibration): '<S55>/motohawk_calibration8'
   */
  rtb_LogicalOperator_j = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s206_IPT_InverterTemperature <
     (Electric_Motor_Derated_Approaching_Over_Temperature_Fault_Over_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S55>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Electric_Motor_Approaching_Over_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(49, rtb_LogicalOperator_j);
    UpdateFault(49);
  }

  /* RelationalOperator: '<S55>/Relational Operator8' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S55>/motohawk_calibration9'
   */
  rtb_RelationalOperator8 = ((Mooventure2016_Rev5_B.s206_IPT_InverterTemperature
    >= (Electric_Motor_Derated_Over_Temperature_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S55>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Electric_Motor_Derated_Over_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(50, rtb_RelationalOperator8);
    UpdateFault(50);
  }

  /* RelationalOperator: '<S55>/Relational Operator9' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S55>/motohawk_calibration10'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s206_IPT_ErrorCategory >
    (Electric_Motor_General_Error_Fault_Under_DataStore()));

  /* Logic: '<S55>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S55>/Relational Operator10'
   *  S-Function (motohawk_sfun_calibration): '<S55>/motohawk_calibration11'
   */
  rtb_LogicalOperator1_j = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s206_IPT_ErrorCategory <
     (Electric_Motor_General_Error_Fault_Over_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S55>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Electric_Motor_General_Error */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(54, rtb_LogicalOperator1_j);
    UpdateFault(54);
  }

  /* RelationalOperator: '<S55>/Relational Operator11' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S55>/motohawk_calibration12'
   */
  rtb_RelationalOperator11 = ((Mooventure2016_Rev5_B.s206_IPT_ErrorCategory >=
    (Electric_Motor_Shutdown_Error_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S55>/motohawk_fault_def9' */

  /* Set Fault Suspected Status: Electric_Motor_Shutodwn_Error */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(57, rtb_RelationalOperator11);
    UpdateFault(57);
  }

  /* RelationalOperator: '<S56>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S56>/motohawk_calibration3'
   */
  rtb_motohawk_fault_action1_g = ((real_T)
    Mooventure2016_Rev5_B.s204_Throttle_Position >=
    (Pedal_Position_Sensor_A_Circuit_High_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S56>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Pedal_Position_Sensor_A_Circuit_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(81, rtb_motohawk_fault_action1_g);
    UpdateFault(81);
  }

  /* Sum: '<S56>/Add' incorporates:
   *  UnitDelay: '<S56>/Unit Delay'
   */
  rtb_motohawk_ain = (uint16_T)(Mooventure2016_Rev5_B.s204_Throttle_Position -
    Mooventure2016_Rev5_DWork.s56_UnitDelay_DSTATE);

  /* RelationalOperator: '<S56>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S56>/motohawk_calibration'
   */
  rtb_motohawk_fault_action1_g = ((real_T)rtb_motohawk_ain >=
    (Pedal_Poition_Sensor_A_Intermittent_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S56>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Pedal_Position_Sensor_A_Circuit_Intermittent */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    boolean_T update;
    if (Mooventure2016_Rev5_DWork.s56_motohawk_fault_def2_DWORK1 >= 3) {
      update = 1;
      Mooventure2016_Rev5_DWork.s56_motohawk_fault_def2_DWORK1 = 0;
    } else {
      update = 0;
      Mooventure2016_Rev5_DWork.s56_motohawk_fault_def2_DWORK1++;
    }

    SetFaultSuspected(82, rtb_motohawk_fault_action1_g);
    if (update)
      UpdateFault(82);
  }

  /* RelationalOperator: '<S56>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S56>/motohawk_calibration2'
   */
  rtb_motohawk_fault_action1_g = ((real_T)
    Mooventure2016_Rev5_B.s204_Throttle_Position <=
    (Pedal_Position_Sensor_A_Circuit_Low_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S56>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Pedal_Position_Sensor_A_Circuit_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(83, rtb_motohawk_fault_action1_g);
    UpdateFault(83);
  }

  /* RelationalOperator: '<S57>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S57>/motohawk_calibration1'
   */
  rtb_motohawk_fault_action1_g = (Mooventure2016_Rev5_B.s299_posOut >=
    (Park_Nuetral_Switch_Input_High_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S57>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Park_Nuetral_Switch_Input_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(79, rtb_motohawk_fault_action1_g);
    UpdateFault(79);
  }

  /* RelationalOperator: '<S57>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S57>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_f = ((Mooventure2016_Rev5_B.s299_posOut >=
    (Drive_Switch_Input_High_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S57>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Drive_Switch_Input_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(47, rtb_RelationalOperator3_f);
    UpdateFault(47);
  }

  /* RelationalOperator: '<S57>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S57>/motohawk_calibration2'
   */
  rtb_RelationalOperator_jg = (Mooventure2016_Rev5_B.s299_posOut <=
    (Drive_Switch_Input_Low_Fault_DataStore()));

  /* Logic: '<S57>/Logical Operator1' */
  rtb_LogicalOperator1_ax = rtb_RelationalOperator_jg;

  /* S-Function (motohawk_sfun_fault_def): '<S57>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Drive_Switch_Input_Circuit */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(46, rtb_LogicalOperator1_ax);
    UpdateFault(46);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S57>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Drive_Switch_Input_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(48, rtb_RelationalOperator_jg);
    UpdateFault(48);
  }

  /* RelationalOperator: '<S57>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S57>/motohawk_calibration4'
   */
  rtb_RelationalOperator_jg = ((real_T)Mooventure2016_Rev5_B.s204_AgeCount >=
    (Gear_Shift_Module_Communication_Circuit_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S57>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Gear_Shift_Communication_Circuit */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(59, rtb_RelationalOperator_jg);
    UpdateFault(59);
  }

  /* RelationalOperator: '<S57>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S57>/motohawk_calibration'
   */
  rtb_RelationalOperator_jg = (Mooventure2016_Rev5_B.s299_posOut <=
    (Park_Nuetral_Switch_Input_Low_Fault_DataStore()));

  /* Logic: '<S57>/Logical Operator2' */
  rtb_LogicalOperator2_m = ((rtb_motohawk_fault_action1_g ||
    rtb_RelationalOperator_jg));

  /* S-Function (motohawk_sfun_fault_def): '<S57>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Park_Nuetral_Switch_Input_Circuit */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(78, rtb_LogicalOperator2_m);
    UpdateFault(78);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S57>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Park_Nuetral_Switch_Input_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(80, rtb_RelationalOperator_jg);
    UpdateFault(80);
  }

  /* Abs: '<S59>/Abs' */
  rtb_Abs = fabs(rtb_UnitDelay_o);

  /* Sum: '<S67>/Sum2' incorporates:
   *  UnitDelay: '<S67>/Unit Delay'
   */
  rtb_UnitDelay_o = rtb_Abs - Mooventure2016_Rev5_DWork.s67_UnitDelay_DSTATE;

  /* S-Function Block: <S67>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s67_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_an = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S67>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S67>/motohawk_delta_time'
   */
  rtb_UnitDelay_o /= rtb_motohawk_delta_time_an;

  /* RelationalOperator: '<S59>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S59>/motohawk_calibration'
   */
  rtb_LogicalOperator5 = (rtb_UnitDelay_o >
    (Traction_Control_System_Maulfunction_Fault_DataStore()));

  /* Abs: '<S59>/Abs1' */
  rtb_Abs1 = fabs(rtb_UnitDelay_m);

  /* Sum: '<S68>/Sum2' incorporates:
   *  UnitDelay: '<S68>/Unit Delay'
   */
  rtb_UnitDelay_o = rtb_Abs1 - Mooventure2016_Rev5_DWork.s68_UnitDelay_DSTATE;

  /* S-Function Block: <S68>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s68_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_iv = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S59>/Relational Operator1' incorporates:
   *  Product: '<S68>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S59>/motohawk_calibration'
   *  S-Function (motohawk_sfun_delta_time): '<S68>/motohawk_delta_time'
   */
  rtb_LogicalOperator8 = (rtb_UnitDelay_o / rtb_motohawk_delta_time_iv >
    (Traction_Control_System_Maulfunction_Fault_DataStore()));

  /* Abs: '<S59>/Abs2' */
  rtb_Abs2 = fabs(rtb_Merge_gq);

  /* Sum: '<S69>/Sum2' incorporates:
   *  UnitDelay: '<S69>/Unit Delay'
   */
  rtb_UnitDelay_o = rtb_Abs2 - Mooventure2016_Rev5_DWork.s69_UnitDelay_DSTATE;

  /* S-Function Block: <S69>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s69_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_d = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S59>/Relational Operator2' incorporates:
   *  Product: '<S69>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S59>/motohawk_calibration'
   *  S-Function (motohawk_sfun_delta_time): '<S69>/motohawk_delta_time'
   */
  rtb_RelationalOperator_b = (rtb_UnitDelay_o / rtb_motohawk_delta_time_d >
    (Traction_Control_System_Maulfunction_Fault_DataStore()));

  /* Abs: '<S59>/Abs3' */
  rtb_Abs3 = fabs(rtb_Merge_lf);

  /* Sum: '<S70>/Sum2' incorporates:
   *  UnitDelay: '<S70>/Unit Delay'
   */
  rtb_UnitDelay_o = rtb_Abs3 - Mooventure2016_Rev5_DWork.s70_UnitDelay_DSTATE;

  /* S-Function Block: <S70>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s70_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_gg = ((real_T) delta) * 0.000001;
  }

  /* Logic: '<S59>/Logical Operator' incorporates:
   *  Product: '<S70>/Product'
   *  RelationalOperator: '<S59>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S59>/motohawk_calibration'
   *  S-Function (motohawk_sfun_delta_time): '<S70>/motohawk_delta_time'
   */
  rtb_LogicalOperator_l = ((rtb_LogicalOperator5 || rtb_LogicalOperator8 ||
    rtb_RelationalOperator_b || (rtb_UnitDelay_o / rtb_motohawk_delta_time_gg >
                             
    (Traction_Control_System_Maulfunction_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S59>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Traction_Control_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(88, rtb_LogicalOperator_l);
    UpdateFault(88);
  }

  /* MATLAB Function Block: '<S60>/Data Correction' */
  Mooventure2016_Rev5_DataCorrectionMotorFault
    (Mooventure2016_Rev5_B.s206_IPT_WheelTorqueDelivered,
     &Mooventure2016_Rev5_B.s60_sf_DataCorrection);

  /* RelationalOperator: '<S60>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S60>/motohawk_calibration2'
   */
  rtb_LogicalOperator5 =
    (Mooventure2016_Rev5_B.s60_sf_DataCorrection.s66_torqueOut >
     (Vehicle_Speed_Sensor_Circuit_Low_Fault_DataStore()));

  /* Logic: '<S60>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S60>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S60>/motohawk_calibration3'
   */
  rtb_LogicalOperator1_hq = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s330_Merge < (Motor_Speed_TorqueRPM_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S60>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Vehicle_Speed_Sensor_Circuit_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(90, rtb_LogicalOperator1_hq);
    UpdateFault(90);
  }

  /* Sum: '<S60>/Add' incorporates:
   *  UnitDelay: '<S60>/Unit Delay'
   */
  rtb_MinMax_l2 = Mooventure2016_Rev5_B.s330_Merge -
    Mooventure2016_Rev5_DWork.s60_UnitDelay_DSTATE;

  /* Abs: '<S60>/Abs' */
  rtb_MinMax_l2 = fabs(rtb_MinMax_l2);

  /* RelationalOperator: '<S60>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S60>/motohawk_calibration4'
   */
  rtb_RelationalOperator_ox = ((rtb_MinMax_l2 >=
    (Motor_Speed_Torque_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S60>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Vehicle_Speed_Sensor_Erratic */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(91, rtb_RelationalOperator_ox);
    UpdateFault(91);
  }

  /* RelationalOperator: '<S60>/Relational Operator7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S60>/motohawk_calibration7'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s330_Merge <
    (Motor_Speed_Low_Fault_DataStore()));

  /* Logic: '<S60>/Logical Operator' incorporates:
   *  RelationalOperator: '<S60>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S60>/motohawk_calibration1'
   */
  rtb_LogicalOperator_fz = ((rtb_LogicalOperator5 ||
    (Mooventure2016_Rev5_B.s330_Merge > (Motor_Speed_High_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S60>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Vehicle_Speed_Sensor_Rang_Performance */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(92, rtb_LogicalOperator_fz);
    UpdateFault(92);
  }

  /* Logic: '<S60>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S60>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S60>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S60>/motohawk_fault_status2'
   */
  rtb_LogicalOperator2_ax = ((IsFaultActive(92) || IsFaultActive(90) ||
    IsFaultActive(91)));

  /* S-Function (motohawk_sfun_fault_def): '<S60>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Vehcile_Speed_Sensor_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(89, rtb_LogicalOperator2_ax);
    UpdateFault(89);
  }

  /* S-Function Block: <S52>/motohawk_ain Resource: DRVP */
  rtb_motohawk_ain = DRVP_AnalogInput_Get();

  /* Product: '<S52>/Product' incorporates:
   *  Constant: '<S52>/Constant'
   */
  rtb_Merge_o0 = (real_T)rtb_motohawk_ain * 0.02697;

  /* RelationalOperator: '<S52>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S52>/motohawk_calibration1'
   */
  rtb_motohawk_fault_action1_g = (rtb_Merge_o0 <= (V12_Low_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S52>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: System_Voltage_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(85, rtb_motohawk_fault_action1_g);
    UpdateFault(85);
  }

  /* Sum: '<S52>/Add' incorporates:
   *  UnitDelay: '<S52>/Unit Delay'
   */
  rtb_MinMax_l2 = rtb_Merge_o0 - Mooventure2016_Rev5_DWork.s52_UnitDelay_DSTATE;

  /* Abs: '<S52>/Abs' */
  rtb_MinMax_l2 = fabs(rtb_MinMax_l2);

  /* RelationalOperator: '<S52>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S52>/motohawk_calibration4'
   */
  rtb_RelationalOperator_jg = (rtb_MinMax_l2 >=
    (V12_Battery_Erratic_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S52>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: System_Voltage_Unstable */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(87, rtb_RelationalOperator_jg);
    UpdateFault(87);
  }

  /* RelationalOperator: '<S52>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S52>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_id = (rtb_Merge_o0 >= (V12_High_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S52>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: System_Voltage_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(84, rtb_RelationalOperator2_id);
    UpdateFault(84);
  }

  /* Logic: '<S52>/Logical Operator2' */
  rtb_LogicalOperator2_kg = ((rtb_RelationalOperator_jg ||
    rtb_motohawk_fault_action1_g || rtb_RelationalOperator2_id));

  /* S-Function (motohawk_sfun_fault_def): '<S52>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: System_Voltage_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(86, rtb_LogicalOperator2_kg);
    UpdateFault(86);
  }

  /* RelationalOperator: '<S58>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S58>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S58>/motohawk_data_read1'
   */
  rtb_RelationalOperator1_e = ((ECUP_DataStore() >=
    (Key_Line_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S58>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Key_Line_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(76, rtb_RelationalOperator1_e);
    UpdateFault(76);
  }

  /* RelationalOperator: '<S58>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S58>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_data_read): '<S58>/motohawk_data_read1'
   */
  rtb_LogicalOperator5 = (ECUP_DataStore() >=
    (Key_Off_Coltage_High_Fault_DataStore()));

  /* Logic: '<S58>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S58>/motohawk_data_read'
   */
  rtb_LogicalOperator_pw = ((rtb_LogicalOperator5 && Shutdown_Req_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S58>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Key_Off_Voltage_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(77, rtb_LogicalOperator_pw);
    UpdateFault(77);
  }

  /* S-Function (motohawk_sfun_calibration): '<S11>/motohawk_calibration' */
  rtb_MinMax_l2 = (SoC_Threshold_DataStore());

  /* S-Function (motohawk_sfun_calibration): '<S11>/motohawk_calibration1' */
  rtb_MinMax_l2 = (Suspension_Threshold_DataStore());

  /* S-Function (motohawk_sfun_calibration): '<S11>/motohawk_calibration2' */
  rtb_MinMax_l2 = (RPM_Threshold_DataStore());

  /* S-Function (motohawk_sfun_calibration): '<S11>/motohawk_calibration3' */
  rtb_MinMax_l2 = (Suspension_Switch_Input_DataStore());

  /* S-Function (motohawk_sfun_calibration): '<S11>/motohawk_calibration4' */
  rtb_MinMax_l2 = (Suspension_Height_Sensor_DataStore());

  /* Logic: '<S14>/Logical Operator3' */
  rtb_LogicalOperator5 = !Mooventure2016_Rev5_B.s15_Merge;

  /* S-Function Block: <S18>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s18_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ey = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S18>/Switch' incorporates:
   *  Constant: '<S18>/Constant'
   *  Logic: '<S14>/Logical Operator5'
   *  S-Function (motohawk_sfun_data_read): '<S18>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S18>/motohawk_delta_time'
   *  Sum: '<S18>/Sum'
   */
  if (!Mooventure2016_Rev5_B.s15_Merge) {
    rtb_MinMax_l2 = rtb_motohawk_delta_time_ey +
      Solectria_Enable_timer_DataStore();
  } else {
    rtb_MinMax_l2 = 0.0;
  }

  /* End of Switch: '<S18>/Switch' */
  /* RelationalOperator: '<S13>/Compare' incorporates:
   *  Constant: '<S13>/Constant'
   */
  rtb_motohawk_fault_action1_g = (Mooventure2016_Rev5_B.s267_Merge == 4.0);

  /* Logic: '<S14>/Logical Operator4' incorporates:
   *  RelationalOperator: '<S14>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S14>/motohawk_calibration1'
   */
  rtb_LogicalOperator4_j = ((rtb_LogicalOperator5 && (rtb_MinMax_l2 >=
    (Load_Enable_Delay_DataStore())) && rtb_motohawk_fault_action1_g));

  /* S-Function (motohawk_sfun_data_write): '<S6>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Batt_Load_Enable */
  {
    Batt_Load_Enable_DataStore() = rtb_LogicalOperator4_j;
  }

  /* S-Function (motohawk_sfun_data_write): '<S6>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Batt_Contactor_Status */
  {
    Batt_Contactor_Status_DataStore() = rtb_motohawk_fault_action1_g;
  }

  /* Logic: '<S14>/Logical Operator' */
  rtb_LogicalOperator_dp = ((Mooventure2016_Rev5_B.s14_LogicalOperator2 ||
    Mooventure2016_Rev5_B.s491_VehicleReadyOutput));

  /* S-Function (motohawk_sfun_data_write): '<S14>/motohawk_data_write' */
  /* Write to Data Storage as scalar: MPRD_KeepAlive */
  {
    MPRD_KeepAlive_DataStore() = rtb_LogicalOperator_dp;
  }

  /* Saturate: '<S16>/Saturation' */
  rtb_Saturation_im = rtb_Switch_h >= 86400.0 ? 86400.0 : rtb_Switch_h <= 0.0 ?
    0.0 : rtb_Switch_h;

  /* S-Function (motohawk_sfun_data_write): '<S16>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Contactor_Disable_Timer */
  {
    Contactor_Disable_Timer_DataStore() = rtb_Saturation_im;
  }

  /* Saturate: '<S17>/Saturation' */
  rtb_Saturation_ds = rtb_Switch_mf >= 86400.0 ? 86400.0 : rtb_Switch_mf <= 0.0 ?
    0.0 : rtb_Switch_mf;

  /* S-Function (motohawk_sfun_data_write): '<S17>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Voltage_Filt */
  {
    Voltage_Filt_DataStore() = rtb_Saturation_ds;
  }

  /* Saturate: '<S18>/Saturation' */
  rtb_Saturation_b3 = rtb_MinMax_l2 >= 86400.0 ? 86400.0 : rtb_MinMax_l2 <= 0.0 ?
    0.0 : rtb_MinMax_l2;

  /* S-Function (motohawk_sfun_data_write): '<S18>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Solectria_Enable_timer */
  {
    Solectria_Enable_timer_DataStore() = rtb_Saturation_b3;
  }

  /* S-Function (motohawk_sfun_fault_action): '<S6>/motohawk_fault_action1'
   *
   * Regarding '<S6>/motohawk_fault_action1':
     Get Fault Action Status: GFI_LED
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action1_g = GetFaultActionStatus(9);
  }

  /* S-Function (motohawk_sfun_data_write): '<S9>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TorqueRequest */
  {
    TorqueRequest_DataStore() = Mooventure2016_Rev5_B.s80_Switch;
  }

  /* DataTypeConversion: '<S9>/Data Type Conversion1' */
  if (rtIsNaN(rtb_Merge_l) || rtIsInf(rtb_Merge_l)) {
    rtb_UnitDelay_m = 0.0;
  } else {
    rtb_UnitDelay_m = fmod(floor(rtb_Merge_l), 4.294967296E+9);
  }

  rtb_DataTypeConversion1_g = rtb_UnitDelay_m < 0.0 ? -(int32_T)(uint32_T)
    -rtb_UnitDelay_m : (int32_T)(uint32_T)rtb_UnitDelay_m;

  /* End of DataTypeConversion: '<S9>/Data Type Conversion1' */

  /* S-Function (motohawk_sfun_data_write): '<S9>/motohawk_data_write3' */
  /* Write to Data Storage as scalar: Hybrid_State */
  {
    Hybrid_State_DataStore() = rtb_DataTypeConversion1_g;
  }

  /* Outputs for Enabled SubSystem: '<S73>/Brake Disable' incorporates:
   *  EnablePort: '<S86>/Enable'
   */
  /* RelationalOperator: '<S73>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S73>/motohawk_calibration2'
   */
  if (Mooventure2016_Rev5_B.s204_Brake_Position <
      (Cruise_Disable_Brake_DataStore())) {
    /* S-Function (motohawk_sfun_data_write): '<S86>/motohawk_data_write1' incorporates:
     *  Constant: '<S86>/Constant'
     */
    /* Write to Data Storage as scalar: CruiseOn */
    {
      CruiseOn_DataStore() = FALSE;
    }
  }

  /* End of RelationalOperator: '<S73>/Relational Operator1' */
  /* End of Outputs for SubSystem: '<S73>/Brake Disable' */
  /* Outputs for Enabled SubSystem: '<S87>/Speed Decrease' incorporates:
   *  EnablePort: '<S94>/Enable'
   */
  /* Logic: '<S87>/Logical Operator' incorporates:
   *  RelationalOperator: '<S92>/FixPt Relational Operator'
   *  S-Function (motohawk_sfun_data_read): '<S87>/motohawk_data_read'
   *  UnitDelay: '<S92>/Delay Input1'
   */
  if (CruiseOn_DataStore() && (rtb_LogicalOperator_e >
       Mooventure2016_Rev5_DWork.s92_DelayInput1_DSTATE)) {
    /* Sum: '<S94>/Add' incorporates:
     *  Constant: '<S94>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S94>/motohawk_data_read1'
     */
    rtb_Add_l = CruiseSpeed_DataStore() - 1.0;

    /* S-Function (motohawk_sfun_data_write): '<S94>/motohawk_data_write' */
    /* Write to Data Storage as scalar: CruiseSpeed */
    {
      CruiseSpeed_DataStore() = rtb_Add_l;
    }
  }

  /* End of Logic: '<S87>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S87>/Speed Decrease' */

  /* Outputs for Enabled SubSystem: '<S87>/Speed Increase' incorporates:
   *  EnablePort: '<S95>/Enable'
   */
  /* Logic: '<S87>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S93>/FixPt Relational Operator'
   *  S-Function (motohawk_sfun_data_read): '<S87>/motohawk_data_read'
   *  UnitDelay: '<S93>/Delay Input1'
   */
  if (CruiseOn_DataStore() && (rtb_LogicalOperator_pl >
       Mooventure2016_Rev5_DWork.s93_DelayInput1_DSTATE)) {
    /* Sum: '<S95>/Add' incorporates:
     *  Constant: '<S95>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S95>/motohawk_data_read1'
     */
    rtb_Add_e = CruiseSpeed_DataStore() + 1.0;

    /* S-Function (motohawk_sfun_data_write): '<S95>/motohawk_data_write' */
    /* Write to Data Storage as scalar: CruiseSpeed */
    {
      CruiseSpeed_DataStore() = rtb_Add_e;
    }
  }

  /* End of Logic: '<S87>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S87>/Speed Increase' */

  /* Outputs for Enabled SubSystem: '<S89>/Enabled Subsystem1' incorporates:
   *  EnablePort: '<S108>/Enable'
   */
  /* RelationalOperator: '<S107>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S107>/Delay Input1'
   */
  if ((rtb_LogicalOperator_b2 >
       Mooventure2016_Rev5_DWork.s107_DelayInput1_DSTATE) > 0) {
    /* S-Function (motohawk_sfun_data_write): '<S108>/motohawk_data_write1' incorporates:
     *  Constant: '<S108>/Constant'
     */
    /* Write to Data Storage as scalar: CruiseOn */
    {
      CruiseOn_DataStore() = TRUE;
    }
  }

  /* End of RelationalOperator: '<S107>/FixPt Relational Operator' */
  /* End of Outputs for SubSystem: '<S89>/Enabled Subsystem1' */
  /* RelationalOperator: '<S73>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S73>/motohawk_calibration1'
   */
  rtb_LogicalOperator5 = (rtb_Product >= (Cruise_On_Speed_DataStore()));

  /* Logic: '<S73>/Logical Operator1' incorporates:
   *  Logic: '<S73>/Logical Operator'
   *  Logic: '<S73>/Logical Operator2'
   *  S-Function (motohawk_sfun_data_read): '<S73>/motohawk_data_read'
   */
  rtb_LogicalOperator5 = (rtb_LogicalOperator5 && (rtb_LogicalOperator_e ||
    rtb_LogicalOperator_pl) && Mooventure2016_Rev5_B.s91_System &&
    (!CruiseOn_DataStore()));

  /* Product: '<S73>/Product1' */
  rtb_Product1_hm = rtb_Product * (real_T)rtb_LogicalOperator5;

  /* Outputs for Enabled SubSystem: '<S73>/System Start' incorporates:
   *  EnablePort: '<S90>/Enable'
   */
  if (rtb_LogicalOperator5) {
    /* S-Function (motohawk_sfun_data_write): '<S90>/motohawk_data_write' */
    /* Write to Data Storage as scalar: CruiseSpeed */
    {
      CruiseSpeed_DataStore() = rtb_Product1_hm;
    }

    /* S-Function (motohawk_sfun_data_write): '<S90>/motohawk_data_write1' incorporates:
     *  Constant: '<S90>/Constant'
     */
    /* Write to Data Storage as scalar: CruiseOn */
    {
      CruiseOn_DataStore() = TRUE;
    }
  }

  /* End of Outputs for SubSystem: '<S73>/System Start' */

  /* Product: '<S99>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration2'
   */
  rtb_UnitDelay_o = rtb_Product5 * (ETC_IGain_DataStore());

  /* S-Function Block: <S104>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s104_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ok = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S104>/Sum' incorporates:
   *  Product: '<S104>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S104>/motohawk_delta_time'
   */
  rtb_MinMax_l2 = rtb_UnitDelay_o * rtb_motohawk_delta_time_ok +
    Mooventure2016_Rev5_B.s104_Switch1;

  /* MinMax: '<S105>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration3'
   */
  rtb_MinMax_l2 = (rtb_MinMax_l2 >= (ETC_IMin_DataStore())) || rtIsNaN
    ((ETC_IMin_DataStore())) ? rtb_MinMax_l2 : (ETC_IMin_DataStore());

  /* MinMax: '<S105>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration4'
   */
  rtb_Merge_oq = (rtb_MinMax_l2 <= (ETC_IMax_DataStore())) || rtIsNaN
    ((ETC_IMax_DataStore())) ? rtb_MinMax_l2 : (ETC_IMax_DataStore());

  /* Gain: '<S117>/Gain' */
  rtb_UnitDelay_o = -Mooventure2016_Rev5_B.s265_Merge;

  /* Sum: '<S127>/Sum' incorporates:
   *  Constant: '<S127>/LimitingBegins'
   */
  rtb_UnitDelay_m = rtb_UnitDelay_o - 125.0;

  /* Switch: '<S127>/Switch1' incorporates:
   *  Constant: '<S129>/Constant'
   *  RelationalOperator: '<S129>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S127>/motohawk_calibration'
   */
  if (rtb_UnitDelay_m >= 0.0) {
    /* Switch: '<S127>/Switch' incorporates:
     *  Constant: '<S127>/LimitingBegins1'
     *  Constant: '<S127>/LimitingBegins2'
     *  Constant: '<S127>/exponentiallimt'
     *  Constant: '<S127>/slope'
     *  Constant: '<S127>/yintercept'
     *  Math: '<S127>/Math Function'
     *  Product: '<S127>/Divide'
     *  Product: '<S127>/Product'
     *  RelationalOperator: '<S127>/Relational Operator'
     *  Sum: '<S127>/Sum1'
     */
    if (160.0 > rtb_UnitDelay_o) {
      rtb_MinMax_l2 = 0.0197 * rtb_UnitDelay_m + 0.1003;
    } else {
      rtb_MinMax_l2 = rt_powd_snf(rtb_UnitDelay_m, 3.172) / 100000.0;
    }

    /* End of Switch: '<S127>/Switch' */
  } else {
    rtb_MinMax_l2 = (TorqueRecoveryValue_DataStore());
  }

  /* End of Switch: '<S127>/Switch1' */
  /* S-Function Block: <S128>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s128_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_kf = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S128>/Sum' incorporates:
   *  Product: '<S128>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S128>/motohawk_delta_time'
   */
  rtb_MinMax_l2 = rtb_MinMax_l2 * rtb_motohawk_delta_time_kf +
    Mooventure2016_Rev5_B.s128_Switch1;

  /* MinMax: '<S130>/MinMax' incorporates:
   *  Constant: '<S124>/Constant'
   */
  rtb_MinMax_l2 = rtb_MinMax_l2 >= 0.0 ? rtb_MinMax_l2 : 0.0;

  /* MinMax: '<S130>/MinMax1' incorporates:
   *  Constant: '<S124>/Constant1'
   */
  rtb_Merge_b = rtb_MinMax_l2 <= 1500.0 ? rtb_MinMax_l2 : 1500.0;

  /* S-Function Block: <S146>/motohawk_abs_time */
  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits_us,
      uint32_T *upper32Bits_us);
    real_T now;
    uint32_T low32;
    uint32_T high32;
    Timer_FreeRunningCounter_GetTime(&low32, &high32);
    now = (real_T) (high32 * 4294.967296);
    now += (real_T) (low32 * 0.000001);
    rtb_motohawk_abs_time_a = now;
  }

  /* Outputs for Enabled SubSystem: '<S146>/Batt Enabled Subsystem' incorporates:
   *  EnablePort: '<S152>/Enable'
   */
  /* RelationalOperator: '<S146>/Relational Operator' incorporates:
   *  Constant: '<S146>/Constant'
   *  S-Function (motohawk_sfun_abs_time): '<S146>/motohawk_abs_time'
   */
  if (rtb_motohawk_abs_time_a <= 5.0) {
    /* S-Function (motohawk_sfun_data_write): '<S152>/motohawk_data_write' */
    /* Write to Data Storage as scalar: Battery_Initial */
    {
      Battery_Initial_DataStore() = rtb_Sum1;
    }
  }

  /* End of RelationalOperator: '<S146>/Relational Operator' */
  /* End of Outputs for SubSystem: '<S146>/Batt Enabled Subsystem' */
  /* Sum: '<S146>/Add' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S146>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s146_Add = Battery_Initial_DataStore() - rtb_Sum1;

  /* Outputs for Enabled SubSystem: '<S153>/Trip A Reset' incorporates:
   *  EnablePort: '<S157>/Enable'
   */
  if (rtb_Merge_ld > 0.0) {
    /* S-Function (motohawk_sfun_data_write): '<S157>/motohawk_data_write' incorporates:
     *  Constant: '<S157>/Constant'
     */
    /* Write to Data Storage as scalar: Trip_A_Dist_Traveled */
    {
      Trip_A_Dist_Traveled_DataStore() = 0.0;
    }

    /* S-Function (motohawk_sfun_data_write): '<S157>/motohawk_data_write1' incorporates:
     *  Constant: '<S157>/Constant1'
     */
    /* Write to Data Storage as scalar: Trip_A_Batt_Used */
    {
      Trip_A_Batt_Used_DataStore() = 0.0;
    }
  }

  /* End of Outputs for SubSystem: '<S153>/Trip A Reset' */

  /* Switch: '<S155>/Switch1' incorporates:
   *  Constant: '<S153>/Constant1'
   *  UnitDelay: '<S155>/Unit Delay'
   */
  if (Mooventure2016_Rev5_ConstB.s155_DataTypeConversion) {
    rtb_MinMax_l2 = 0.0;
  } else {
    rtb_MinMax_l2 = Mooventure2016_Rev5_DWork.s155_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S155>/Switch1' */
  /* Product: '<S153>/Product3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration5'
   */
  rtb_Product3_l2 = rtb_MinMax_l2 *
    (Distance_Trip_A_Integrator_Multiplier_DataStore());

  /* S-Function (motohawk_sfun_data_write): '<S153>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Trip_A_Dist_Traveled */
  {
    Trip_A_Dist_Traveled_DataStore() = rtb_Product3_l2;
  }

  /* Abs: '<S153>/Abs' */
  rtb_Merge_hn = fabs(Mooventure2016_Rev5_B.s330_Merge);

  /* Product: '<S153>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration2'
   */
  rtb_UnitDelay_o = rtb_Merge_hn * (Wheel_Ratio_Trip_A_DataStore());

  /* S-Function Block: <S155>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s155_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ap = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S155>/Sum' incorporates:
   *  Product: '<S155>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S155>/motohawk_delta_time'
   */
  rtb_MinMax_l2 += rtb_UnitDelay_o * rtb_motohawk_delta_time_ap;

  /* MinMax: '<S158>/MinMax' incorporates:
   *  Constant: '<S153>/Constant2'
   */
  rtb_MinMax_l2 = rtb_MinMax_l2 >= 0.0 ? rtb_MinMax_l2 : 0.0;

  /* MinMax: '<S158>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration1'
   */
  rtb_Merge_gq = (rtb_MinMax_l2 <= (Max_Trip_A_Dist_DataStore())) || rtIsNaN
    ((Max_Trip_A_Dist_DataStore())) ? rtb_MinMax_l2 : (Max_Trip_A_Dist_DataStore
    ());

  /* Switch: '<S156>/Switch1' incorporates:
   *  Constant: '<S153>/Constant4'
   *  UnitDelay: '<S156>/Unit Delay'
   */
  if (Mooventure2016_Rev5_ConstB.s156_DataTypeConversion) {
    Mooventure2016_Rev5_B.s156_Switch1 = 0.0;
  } else {
    Mooventure2016_Rev5_B.s156_Switch1 =
      Mooventure2016_Rev5_DWork.s156_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S156>/Switch1' */

  /* S-Function (motohawk_sfun_data_write): '<S153>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Trip_A_Batt_Used */
  {
    Trip_A_Batt_Used_DataStore() = Mooventure2016_Rev5_B.s156_Switch1;
  }

  /* S-Function Block: <S156>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s156_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_c0 = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S156>/Sum' incorporates:
   *  Product: '<S156>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S156>/motohawk_delta_time'
   */
  rtb_MinMax_l2 = rtb_Product2_f * rtb_motohawk_delta_time_c0 +
    Mooventure2016_Rev5_B.s156_Switch1;

  /* MinMax: '<S159>/MinMax' incorporates:
   *  Constant: '<S153>/Constant5'
   */
  rtb_MinMax_l2 = rtb_MinMax_l2 >= 0.0 ? rtb_MinMax_l2 : 0.0;

  /* MinMax: '<S159>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration4'
   */
  rtb_Merge_lf = (rtb_MinMax_l2 <= (Max_Trip_A_kW_DataStore())) || rtIsNaN
    ((Max_Trip_A_kW_DataStore())) ? rtb_MinMax_l2 : (Max_Trip_A_kW_DataStore());

  /* Outputs for Enabled SubSystem: '<S154>/Trip B Reset' incorporates:
   *  EnablePort: '<S162>/Enable'
   */
  if (rtb_Merge_ld > 0.0) {
    /* S-Function (motohawk_sfun_data_write): '<S162>/motohawk_data_write' incorporates:
     *  Constant: '<S162>/Constant'
     */
    /* Write to Data Storage as scalar: Trip_B_Dist_Traveled */
    {
      Trip_B_Dist_Traveled_DataStore() = 0.0;
    }

    /* S-Function (motohawk_sfun_data_write): '<S162>/motohawk_data_write1' incorporates:
     *  Constant: '<S162>/Constant1'
     */
    /* Write to Data Storage as scalar: Trip_B_Batt_Used */
    {
      Trip_B_Batt_Used_DataStore() = 0.0;
    }
  }

  /* End of Outputs for SubSystem: '<S154>/Trip B Reset' */

  /* Switch: '<S160>/Switch1' incorporates:
   *  Constant: '<S154>/Constant1'
   *  UnitDelay: '<S160>/Unit Delay'
   */
  if (Mooventure2016_Rev5_ConstB.s160_DataTypeConversion) {
    rtb_MinMax_l2 = 0.0;
  } else {
    rtb_MinMax_l2 = Mooventure2016_Rev5_DWork.s160_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S160>/Switch1' */
  /* Product: '<S154>/Product3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S154>/motohawk_calibration5'
   */
  rtb_UnitDelay_o = rtb_MinMax_l2 *
    (Distance_Trip_B_Integrator_Multiplier_DataStore());

  /* Sum: '<S154>/Add' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S154>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s154_Add = rtb_UnitDelay_o +
    Trip_B_Dist_Traveled_DataStore();

  /* S-Function (motohawk_sfun_data_write): '<S154>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Trip_B_Dist_Traveled */
  {
    Trip_B_Dist_Traveled_DataStore() = Mooventure2016_Rev5_B.s154_Add;
  }

  /* Abs: '<S154>/Abs' */
  rtb_Merge_hn = fabs(Mooventure2016_Rev5_B.s330_Merge);

  /* Product: '<S154>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S154>/motohawk_calibration2'
   */
  rtb_UnitDelay_o = rtb_Merge_hn * (Wheel_Ratio_Trip_B_DataStore());

  /* S-Function Block: <S160>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s160_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_mt = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S160>/Sum' incorporates:
   *  Product: '<S160>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S160>/motohawk_delta_time'
   */
  rtb_MinMax_l2 += rtb_UnitDelay_o * rtb_motohawk_delta_time_mt;

  /* MinMax: '<S163>/MinMax' incorporates:
   *  Constant: '<S154>/Constant2'
   */
  rtb_MinMax_l2 = rtb_MinMax_l2 >= 0.0 ? rtb_MinMax_l2 : 0.0;

  /* MinMax: '<S163>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S154>/motohawk_calibration1'
   */
  rtb_UnitDelay_m = (rtb_MinMax_l2 <= (Max_Trip_B_Dist_DataStore())) || rtIsNaN
    ((Max_Trip_B_Dist_DataStore())) ? rtb_MinMax_l2 : (Max_Trip_B_Dist_DataStore
    ());

  /* Switch: '<S161>/Switch1' incorporates:
   *  Constant: '<S154>/Constant4'
   *  UnitDelay: '<S161>/Unit Delay'
   */
  if (Mooventure2016_Rev5_ConstB.s161_DataTypeConversion) {
    rtb_MinMax_l2 = 0.0;
  } else {
    rtb_MinMax_l2 = Mooventure2016_Rev5_DWork.s161_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S161>/Switch1' */
  /* Product: '<S154>/Product4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S154>/motohawk_calibration6'
   */
  rtb_UnitDelay_o = rtb_MinMax_l2 * (kW_Trip_B_Integrator_Multiplier_DataStore());

  /* Sum: '<S154>/Add1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S154>/motohawk_data_read3'
   */
  Mooventure2016_Rev5_B.s154_Add1 = rtb_UnitDelay_o + Trip_B_Batt_Used_DataStore
    ();

  /* S-Function (motohawk_sfun_data_write): '<S154>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Trip_B_Batt_Used */
  {
    Trip_B_Batt_Used_DataStore() = Mooventure2016_Rev5_B.s154_Add1;
  }

  /* S-Function Block: <S161>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s161_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_jk = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S161>/Sum' incorporates:
   *  Product: '<S161>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S161>/motohawk_delta_time'
   */
  rtb_MinMax_l2 += rtb_Product2_f * rtb_motohawk_delta_time_jk;

  /* MinMax: '<S164>/MinMax' incorporates:
   *  Constant: '<S154>/Constant5'
   */
  rtb_MinMax_l2 = rtb_MinMax_l2 >= 0.0 ? rtb_MinMax_l2 : 0.0;

  /* MinMax: '<S164>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S154>/motohawk_calibration4'
   */
  rtb_UnitDelay_o = (rtb_MinMax_l2 <= (Max_Trip_B_kW_DataStore())) || rtIsNaN
    ((Max_Trip_B_kW_DataStore())) ? rtb_MinMax_l2 : (Max_Trip_B_kW_DataStore());

  /* Outputs for Enabled SubSystem: '<S169>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S172>/Enable'
   */
  /* RelationalOperator: '<S169>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S169>/motohawk_data_read1'
   */
  if (MPGe_Average_DataStore() >= Mooventure2016_Rev5_B.s169_motohawk_data_read2)
  {
    /* S-Function (motohawk_sfun_data_write): '<S172>/motohawk_data_write1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S169>/motohawk_data_read1'
     */
    /* Write to Data Storage as scalar: MPGe_Best_Average */
    {
      MPGe_Best_Average_DataStore() = MPGe_Average_DataStore();
    }
  }

  /* End of RelationalOperator: '<S169>/Relational Operator' */
  /* End of Outputs for SubSystem: '<S169>/Enabled Subsystem' */

  /* RelationalOperator: '<S170>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S170>/motohawk_calibration'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s330_Merge <=
    (Min_RPM_For_Calc_DataStore()));

  /* Stateflow: '<S170>/Chart' */
  Mooventure2016_Rev5_Chart_a((Write_Interval_MPGe_DataStore()),
    &Mooventure2016_Rev5_B.s170_sf_Chart,
    &Mooventure2016_Rev5_DWork.s170_sf_Chart);

  /* Outputs for Enabled SubSystem: '<S170>/Enabled Subsystem MPGe' incorporates:
   *  EnablePort: '<S174>/Enable'
   */
  /* Logic: '<S170>/Logical Operator' */
  if (rtb_LogicalOperator5 && Mooventure2016_Rev5_B.s170_sf_Chart.s173_write) {
    /* Sum: '<S174>/Add1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S174>/motohawk_data_read1'
     */
    rtb_Add1_f = MPGe_Average_Sum_DataStore() + rtb_Merge_gr;

    /* S-Function (motohawk_sfun_data_write): '<S174>/motohawk_data_write1' */
    /* Write to Data Storage as scalar: MPGe_Average_Sum */
    {
      MPGe_Average_Sum_DataStore() = rtb_Add1_f;
    }

    /* Sum: '<S174>/Add' incorporates:
     *  Constant: '<S174>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S174>/motohawk_data_read'
     */
    rtb_Add_f = MPGe_Average_Count_DataStore() + 1.0;

    /* S-Function (motohawk_sfun_data_write): '<S174>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MPGe_Average_Count */
    {
      MPGe_Average_Count_DataStore() = rtb_Add_f;
    }
  }

  /* End of Logic: '<S170>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S170>/Enabled Subsystem MPGe' */

  /* Outputs for Enabled SubSystem: '<S171>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S175>/Enable'
   */
  /* S-Function (motohawk_sfun_data_read): '<S171>/motohawk_data_read' */
  if (Shutdown_Req_DataStore()) {
    /* S-Function (motohawk_sfun_data_write): '<S175>/motohawk_data_write' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S175>/motohawk_data_read1'
     */
    /* Write to Data Storage as scalar: Previous_Average */
    {
      Previous_Average_DataStore() = MPGe_Average_DataStore();
    }
  }

  /* End of S-Function (motohawk_sfun_data_read): '<S171>/motohawk_data_read' */
  /* End of Outputs for SubSystem: '<S171>/Enabled Subsystem' */

  /* RelationalOperator: '<S150>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S150>/motohawk_calibration'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s330_Merge <=
    (Bar_Min_RPM_For_Calc_DataStore()));

  /* Stateflow: '<S150>/Bar Chart' */
  Mooventure2016_Rev5_Chart_a((Bar_Write_Interval_MPGe_DataStore()),
    &Mooventure2016_Rev5_B.s150_sf_BarChart,
    &Mooventure2016_Rev5_DWork.s150_sf_BarChart);

  /* Outputs for Enabled SubSystem: '<S150>/Bar Enabled Subsystem' incorporates:
   *  EnablePort: '<S178>/Enable'
   */
  /* Logic: '<S150>/Logical Operator' */
  if (rtb_LogicalOperator5 && Mooventure2016_Rev5_B.s150_sf_BarChart.s173_write)
  {
    /* Sum: '<S178>/Add1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S178>/motohawk_data_read1'
     */
    rtb_Add1 = Bar_MPGe_Average_Sum_DataStore() + rtb_Merge_gr;

    /* S-Function (motohawk_sfun_data_write): '<S178>/motohawk_data_write1' */
    /* Write to Data Storage as scalar: Bar_MPGe_Average_Sum */
    {
      Bar_MPGe_Average_Sum_DataStore() = rtb_Add1;
    }

    /* Sum: '<S178>/Add' incorporates:
     *  Constant: '<S178>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S178>/motohawk_data_read'
     */
    rtb_Add_o = Bar_MPGe_Average_Count_DataStore() + 1.0;

    /* S-Function (motohawk_sfun_data_write): '<S178>/motohawk_data_write' */
    /* Write to Data Storage as scalar: Bar_MPGe_Average_Count */
    {
      Bar_MPGe_Average_Count_DataStore() = rtb_Add_o;
    }
  }

  /* End of Logic: '<S150>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S150>/Bar Enabled Subsystem' */
  /* Stateflow: '<S150>/Bar Chart Reset' */
  Mooventure2016_Rev5_Chart_a((Bar_Reset_Interval_MPGe_DataStore()),
    &Mooventure2016_Rev5_B.s150_sf_BarChartReset,
    &Mooventure2016_Rev5_DWork.s150_sf_BarChartReset);

  /* Outputs for Enabled SubSystem: '<S150>/Bar Reset' incorporates:
   *  EnablePort: '<S179>/Enable'
   */
  if (Mooventure2016_Rev5_B.s150_sf_BarChartReset.s173_write) {
    /* S-Function (motohawk_sfun_data_write): '<S179>/motohawk_data_write' incorporates:
     *  Constant: '<S179>/Constant'
     */
    /* Write to Data Storage as scalar: Bar_MPGe_Average_Count */
    {
      Bar_MPGe_Average_Count_DataStore() = 0.0;
    }

    /* S-Function (motohawk_sfun_data_write): '<S179>/motohawk_data_write1' incorporates:
     *  Constant: '<S179>/Constant1'
     */
    /* Write to Data Storage as scalar: Bar_MPGe_Average_Sum */
    {
      Bar_MPGe_Average_Sum_DataStore() = 0.0;
    }
  }

  /* End of Outputs for SubSystem: '<S150>/Bar Reset' */

  /* S-Function (motohawk_sfun_data_write): '<S12>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Vehicle_Enable */
  {
    Vehicle_Enable_DataStore() = Mooventure2016_Rev5_B.s198_Vehicle_Enable;
  }

  /* S-Function (motohawk_sfun_data_write): '<S12>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Torque_Enable */
  {
    Torque_Enable_DataStore() = Mooventure2016_Rev5_B.s198_Torque_Enable;
  }

  /* S-Function (motohawk_sfun_data_write): '<S12>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: Vehicle_Ready */
  {
    Vehicle_Ready_DataStore() = Mooventure2016_Rev5_B.s198_Vehicle_Ready;
  }

  /* Saturate: '<S294>/Saturation' */
  rtb_Saturation_ib = rtb_Switch_m >= 86400.0 ? 86400.0 : rtb_Switch_m <= 0.0 ?
    0.0 : rtb_Switch_m;

  /* S-Function (motohawk_sfun_data_write): '<S294>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay1 */
  {
    ButtonDelay1_DataStore() = rtb_Saturation_ib;
  }

  /* Saturate: '<S295>/Saturation' */
  rtb_Saturation_kw = rtb_Switch_p >= 86400.0 ? 86400.0 : rtb_Switch_p <= 0.0 ?
    0.0 : rtb_Switch_p;

  /* S-Function (motohawk_sfun_data_write): '<S295>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay2 */
  {
    ButtonDelay2_DataStore() = rtb_Saturation_kw;
  }

  /* Saturate: '<S296>/Saturation' */
  rtb_Saturation_ij = rtb_Switch_pm >= 86400.0 ? 86400.0 : rtb_Switch_pm <= 0.0 ?
    0.0 : rtb_Switch_pm;

  /* S-Function (motohawk_sfun_data_write): '<S296>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay3 */
  {
    ButtonDelay3_DataStore() = rtb_Saturation_ij;
  }

  /* Saturate: '<S297>/Saturation' */
  rtb_Saturation_df = rtb_Switch_hc >= 86400.0 ? 86400.0 : rtb_Switch_hc <= 0.0 ?
    0.0 : rtb_Switch_hc;

  /* S-Function (motohawk_sfun_data_write): '<S297>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay4 */
  {
    ButtonDelay4_DataStore() = rtb_Saturation_df;
  }

  /* Saturate: '<S298>/Saturation' */
  rtb_Saturation_ig = rtb_Switch_n >= 86400.0 ? 86400.0 : rtb_Switch_n <= 0.0 ?
    0.0 : rtb_Switch_n;

  /* S-Function (motohawk_sfun_data_write): '<S298>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay5 */
  {
    ButtonDelay5_DataStore() = rtb_Saturation_ig;
  }

  /* S-Function (motohawk_sfun_data_write): '<S205>/motohawk_data_write' */
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

  /* Update for UnitDelay: '<S101>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s101_UnitDelay_DSTATE = rtb_Product3;

  /* Update for UnitDelay: '<S102>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s102_UnitDelay_DSTATE = rtb_Product;

  /* Update for UnitDelay: '<S103>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s103_UnitDelay_DSTATE = rtb_Product4;

  /* Update for UnitDelay: '<S96>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s96_DelayInput1_DSTATE = rtb_Compare;

  /* Update for UnitDelay: '<S104>/Unit Delay' incorporates:
   *  MinMax: '<S105>/MinMax1'
   */
  Mooventure2016_Rev5_DWork.s104_UnitDelay_DSTATE = rtb_Merge_oq;

  /* Update for UnitDelay: '<S128>/Unit Delay' incorporates:
   *  MinMax: '<S130>/MinMax1'
   */
  Mooventure2016_Rev5_DWork.s128_UnitDelay_DSTATE = rtb_Merge_b;

  /* Update for UnitDelay: '<S126>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s126_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s126_Sum1;

  /* Update for UnitDelay: '<S270>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s270_UnitDelay_DSTATE = rtb_Sum1;

  /* Update for UnitDelay: '<S134>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s134_UnitDelay_DSTATE = rtb_Sum1_j;

  /* Update for UnitDelay: '<S272>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s272_UnitDelay_DSTATE = rtb_Sum1_c;

  /* Update for S-Function (motohawk_sfun_dout): '<S368>/motohawk_dout1' */

  /* S-Function Block: DOut5146p0001 */
  {
    DOut5146p0001_DiscreteOutput_Set(rtb_Merge_lq);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S368>/motohawk_dout10' */

  /* S-Function Block: DOut5147p0001 */
  {
    DOut5147p0001_DiscreteOutput_Set(rtb_Merge_of1);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S368>/motohawk_dout11' */

  /* S-Function Block: DOut5148p0001 */
  {
    DOut5148p0001_DiscreteOutput_Set(rtb_DataTypeConversion6);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S368>/motohawk_dout12' */

  /* S-Function Block: DOut5149p0001 */
  {
    DOut5149p0001_DiscreteOutput_Set(rtb_DataTypeConversion_gi);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S368>/motohawk_dout13' */

  /* S-Function Block: DOut5150p0001 */
  {
    DOut5150p0001_DiscreteOutput_Set(rtb_DataTypeConversion3);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S368>/motohawk_dout2' */

  /* S-Function Block: DOut5151p0001 */
  {
    DOut5151p0001_DiscreteOutput_Set(rtb_Merge_dm);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S368>/motohawk_dout3' */

  /* S-Function Block: DOut5152p0001 */
  {
    DOut5152p0001_DiscreteOutput_Set(rtb_Merge_ay5);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S368>/motohawk_dout4' */

  /* S-Function Block: DOut5153p0001 */
  {
    DOut5153p0001_DiscreteOutput_Set(rtb_Merge_l1);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S368>/motohawk_dout5' */

  /* S-Function Block: DOut5154p0001 */
  {
    DOut5154p0001_DiscreteOutput_Set(rtb_Merge_cg);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S368>/motohawk_dout6' */

  /* S-Function Block: DOut5155p0001 */
  {
    DOut5155p0001_DiscreteOutput_Set(rtb_Merge_oqt);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S368>/motohawk_dout7' */

  /* S-Function Block: DOut5156p0001 */
  {
    DOut5156p0001_DiscreteOutput_Set(rtb_Merge_pi3);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S368>/motohawk_dout8' */

  /* S-Function Block: DOut5157p0001 */
  {
    DOut5157p0001_DiscreteOutput_Set(rtb_Merge_gd);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S368>/motohawk_dout9' */

  /* S-Function Block: DOut5158p0001 */
  {
    DOut5158p0001_DiscreteOutput_Set(rtb_Merge_ln);
  }

  /* Update for UnitDelay: '<S252>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s252_UnitDelay_DSTATE = rtb_Sum1_b;

  /* Update for UnitDelay: '<S7>/Unit Delay3' */
  Mooventure2016_Rev5_DWork.s7_UnitDelay3_DSTATE =
    Mooventure2016_Rev5_B.s21_Heat4;

  /* Update for UnitDelay: '<S251>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s251_UnitDelay_DSTATE = rtb_Sum1_e;

  /* Update for UnitDelay: '<S7>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s7_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s21_Heat1;

  /* Update for UnitDelay: '<S7>/Unit Delay1' */
  Mooventure2016_Rev5_DWork.s7_UnitDelay1_DSTATE =
    Mooventure2016_Rev5_B.s21_Heat2;

  /* Update for UnitDelay: '<S7>/Unit Delay2' */
  Mooventure2016_Rev5_DWork.s7_UnitDelay2_DSTATE =
    Mooventure2016_Rev5_B.s21_Heat3;

  /* Update for S-Function (motohawk_sfun_dout): '<S369>/motohawk_dout1' */

  /* S-Function Block: DOut5384p0001 */
  {
    DOut5384p0001_DiscreteOutput_Set(rtb_Merge_iu);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S369>/motohawk_dout2' */

  /* S-Function Block: DOut5385p0001 */
  {
    DOut5385p0001_DiscreteOutput_Set(rtb_Merge_nv);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S369>/motohawk_dout6' */

  /* S-Function Block: DOut5389p0001 */
  {
    DOut5389p0001_DiscreteOutput_Set(rtb_Merge_ef);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S369>/motohawk_dout4' */

  /* S-Function Block: DOut5387p0001 */
  {
    DOut5387p0001_DiscreteOutput_Set(rtb_DataTypeConversion6_c);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S369>/motohawk_dout5' */

  /* S-Function Block: DOut5388p0001 */
  {
    DOut5388p0001_DiscreteOutput_Set(rtb_DataTypeConversion5);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S369>/motohawk_dout3' */

  /* S-Function Block: DOut5386p0001 */
  {
    DOut5386p0001_DiscreteOutput_Set(rtb_DataTypeConversion8);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S372>/motohawk_pwm' */

  /* S-Function Block: H1m_PWMOutput */
  {
    H1m_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2,
      rtb_DataTypeConversion1_o, 0, 1);
  }

  /* Update for UnitDelay: '<S35>/Unit Delay1' */
  Mooventure2016_Rev5_DWork.s35_UnitDelay1_DSTATE = rtb_Sum1_e;

  /* Update for UnitDelay: '<S35>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s35_UnitDelay_DSTATE = rtb_Sum1_b;

  /* Update for UnitDelay: '<S39>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s39_UnitDelay_DSTATE = (real_T)rtb_Heater_Temp_Raw;

  /* Update for UnitDelay: '<S53>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s53_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s204_Brake_Position;

  /* Update for UnitDelay: '<S62>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s62_DelayInput1_DSTATE = rtb_LogicalOperator_h;

  /* Update for UnitDelay: '<S63>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s63_DelayInput1_DSTATE = rtb_LogicalOperator_b2;

  /* Update for UnitDelay: '<S64>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s64_DelayInput1_DSTATE = rtb_LogicalOperator_pl;

  /* Update for UnitDelay: '<S65>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s65_DelayInput1_DSTATE = rtb_LogicalOperator_e;

  /* Update for UnitDelay: '<S61>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s61_DelayInput1_DSTATE = rtb_LogicalOperator_f;

  /* Update for UnitDelay: '<S56>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s56_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s204_Throttle_Position;

  /* Update for UnitDelay: '<S67>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s67_UnitDelay_DSTATE = rtb_Abs;

  /* Update for UnitDelay: '<S68>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s68_UnitDelay_DSTATE = rtb_Abs1;

  /* Update for UnitDelay: '<S69>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s69_UnitDelay_DSTATE = rtb_Abs2;

  /* Update for UnitDelay: '<S70>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s70_UnitDelay_DSTATE = rtb_Abs3;

  /* Update for UnitDelay: '<S60>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s60_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s330_Merge;

  /* Update for UnitDelay: '<S52>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s52_UnitDelay_DSTATE = rtb_Merge_o0;

  /* Update for UnitDelay: '<S92>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s92_DelayInput1_DSTATE = rtb_LogicalOperator_e;

  /* Update for UnitDelay: '<S93>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s93_DelayInput1_DSTATE = rtb_LogicalOperator_pl;

  /* Update for UnitDelay: '<S107>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s107_DelayInput1_DSTATE = rtb_LogicalOperator_b2;

  /* Update for UnitDelay: '<S155>/Unit Delay' incorporates:
   *  MinMax: '<S158>/MinMax1'
   */
  Mooventure2016_Rev5_DWork.s155_UnitDelay_DSTATE = rtb_Merge_gq;

  /* Update for UnitDelay: '<S156>/Unit Delay' incorporates:
   *  MinMax: '<S159>/MinMax1'
   */
  Mooventure2016_Rev5_DWork.s156_UnitDelay_DSTATE = rtb_Merge_lf;

  /* Update for UnitDelay: '<S160>/Unit Delay' incorporates:
   *  MinMax: '<S163>/MinMax1'
   */
  Mooventure2016_Rev5_DWork.s160_UnitDelay_DSTATE = rtb_UnitDelay_m;

  /* Update for UnitDelay: '<S161>/Unit Delay' incorporates:
   *  MinMax: '<S164>/MinMax1'
   */
  Mooventure2016_Rev5_DWork.s161_UnitDelay_DSTATE = rtb_UnitDelay_o;
}

/* Termination for function-call system: '<Root>/Foreground' */
void Mooventure2016_Rev5_Foreground_Term(void)
{
  /* S-Function block: <S195>/S-Function  */
  {
    /* Nothing to do! */
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
