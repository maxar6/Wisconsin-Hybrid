/*
 * File: Mooventure2016_Rev5_Foreground.c
 *
 * Code generated for Simulink model 'Mooventure2016_Rev5'.
 *
 * Model version                  : 1.2015
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Mon Nov 20 13:47:00 2017
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

/* Named constants for Stateflow: '<S71>/Chart' */
#define Mooventure2016_Rev5_IN_Driving (1U)
#define Mooventure2016_Rev5_IN_Nuetral (2U)
#define Mooventure2016_Rev5_IN_RegenBrake (3U)
#define Mooventure2016_Rev5_IN_RegenDrag (4U)

/* Named constants for Stateflow: '<S169>/Chart' */
#define Mooventure2016_Rev5_IN_Clear   (1U)
#define Mooventure2016_Rev5_IN_Counting (2U)
#define Mooventure2016_Rev5_IN_Init    (3U)
#define Mooventure2016_Rev5_IN_Write   (4U)

/* Named constants for Stateflow: '<S261>/Chart' */
#define Mooventure2016_Rev5_IN_CommsLost (1U)
#define Mooventure2016_Rev5_IN_Default (2U)

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

/* Named constants for Stateflow: '<S72>/SystemState' */
#define Mooventure2016_Rev5_IN_Off     (1U)
#define Mooventure2016_Rev5_IN_On      (2U)

/* Named constants for Stateflow: '<S12>/Chart' */
#define Mooventure2016_Rev5_IN_Batterybootup (1U)
#define Mooventure2016_Rev5_IN_Charging_and_Temp (2U)
#define Mooventure2016_Rev5_IN_Initial (3U)
#define Mooventure2016_Rev5_IN_Kill_Component_Keyed (4U)
#define Mooventure2016_Rev5_IN_Normal_Operation (5U)
#define Mooventure2016_Rev5_IN_Shutdown_Sequence (6U)

/* Named constants for Stateflow: '<S202>/Chart' */
#define Mooventure2016_Rev5_IN_ON      (1U)
#define Mooventure2016_Rev5_IN_Off_d   (2U)
#define Mooventure2016_Rev5_IN_RSM     (3U)
#define Mooventure2016_Rev5_IN_SetMinus (4U)
#define Mooventure2016_Rev5_IN_SetPlus (5U)
#define Mooventure2016_Rev5_IN_default (6U)

/* Named constants for Stateflow: '<S370>/Coil1State' */
#define Mooventure2016_Rev5_IN_Coil1Disabled (1U)
#define Mooventure2016_Rev5_IN_Coil1Enabled (2U)

/* Named constants for Stateflow: '<S370>/Coil2State' */
#define Mooventure2016_Rev5_IN_Coil2Disabled (1U)
#define Mooventure2016_Rev5_IN_Coil2Enabled (2U)

/* Named constants for Stateflow: '<S370>/Coil2State1' */
#define Mooventure2016_Rev5_IN_Coil3Disabled (1U)
#define Mooventure2016_Rev5_IN_Coil3Enabled (2U)

/* Named constants for Stateflow: '<S371>/Chart' */
#define Mooventure2016_Rev5_IN_FlashOff (1U)
#define Mooventure2016_Rev5_IN_FlashOn (2U)
#define Mooventure2016_Rev5_IN_Normal  (3U)
#define Mooventure2016_Rev5_IN_Solid   (4U)
#define Mooventure2016_Rev5_IN_Wait    (5U)

/* Named constants for Stateflow: '<S371>/PowerSteering' */
#define Mooventure2016_Rev5_IN_INIT    (1U)
#define Mooventure2016_Rev5_IN_MotorRunning (2U)
#define Mooventure2016_Rev5_IN_PowerSteeringOff (3U)
#define Mooventure2016_Rev5_IN_PowerSteeringOn (4U)

/* Named constants for Stateflow: '<S373>/OnOff Delay' */
#define Mooventure2016_Rev5_IN_IPTAwake (1U)
#define Mooventure2016_Rev5_IN_IPTEnable (2U)
#define Mooventure2016_Rev5_IN_Init_n  (3U)
#define Mooventure2016_Rev5_IN_MotorDisabled (4U)
#define Mooventure2016_Rev5_IN_MotorEnabled (5U)
#define Mooventure2016_Rev5_IN_TimerRunningOne (6U)
#define Mooventure2016_Rev5_IN_TimerRunningTwo (7U)

/*
 * Output and update for atomic system:
 *    '<S54>/Data Correction Motor Fault'
 *    '<S59>/Data Correction'
 *    '<S147>/Data Correction'
 *    '<S150>/Data Correction Motor'
 *    '<S367>/Data Correction Motor ABS'
 */
void Mooventure2016_Rev5_DataCorrectionMotorFault(real_T rtu_torqueIn,
  rtB_DataCorrectionMotorFault_Mooventure2016_Rev5 *localB)
{
  /* MATLAB Function 'Foreground/Control/Faults/Power Train/Electric Motor/Data Correction Motor Fault': '<S65>:1' */
  if (rtu_torqueIn > 0.0) {
    /* '<S65>:1:3' */
    /* '<S65>:1:4' */
    localB->s65_torqueOut = -(4000.0 - rtu_torqueIn);
  } else if (rtu_torqueIn < 0.0) {
    /* '<S65>:1:5' */
    /* '<S65>:1:6' */
    localB->s65_torqueOut = -(-4000.0 - rtu_torqueIn);
  } else {
    /* '<S65>:1:8' */
    localB->s65_torqueOut = 0.0;
  }
}

/*
 * Output and update for atomic system:
 *    '<S71>/Brake Pedal Scaling'
 *    '<S73>/Brake Pedal Scaling'
 *    '<S77>/Brake Pedal Scaling'
 */
void Mooventure2016_Rev5_BrakePedalScaling(real_T rtu_brakeIn, boolean_T
  rtu_inReverse, rtB_BrakePedalScaling_Mooventure2016_Rev5 *localB)
{
  /* MATLAB Function 'Foreground/Control/Hybrid Control Code/CrawlHomeMode/Brake Pedal Scaling': '<S81>:1' */
  if (!rtu_inReverse) {
    /* '<S81>:1:2' */
    /* '<S81>:1:3' */
    localB->s81_brakeOut = 1.0 - (rtu_brakeIn - 23900.0) / 8900.0;
  } else {
    /* '<S81>:1:5' */
    localB->s81_brakeOut = 1.0 - (41700.0 - rtu_brakeIn) / 8900.0;
  }
}

/*
 * Initial conditions for atomic system:
 *    '<S71>/Chart'
 *    '<S73>/Chart'
 *    '<S77>/Chart'
 */
void Mooventure2016_Rev5_Chart_Init(rtB_Chart_Mooventure2016_Rev5 *localB,
  rtDW_Chart_Mooventure2016_Rev5 *localDW)
{
  localDW->s82_is_active_c20_Mooventure2016_Rev5 = 0U;
  localDW->s82_is_c20_Mooventure2016_Rev5 = 0U;
  localB->s82_driveTorque = 0.0;
  localB->s82_regenTorque = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S71>/Chart'
 *    '<S73>/Chart'
 *    '<S77>/Chart'
 */
void Mooventure2016_Rev5_Chart(real_T rtu_accel, real_T rtu_brake, real_T
  rtu_speed, real_T rtu_accelStart, real_T rtu_accelEnd, real_T rtu_brakeStart,
  real_T rtu_brakeEnd, real_T rtu_regenStart, real_T rtu_regenEnd, real_T
  rtu_dragTorque, rtB_Chart_Mooventure2016_Rev5 *localB,
  rtDW_Chart_Mooventure2016_Rev5 *localDW)
{
  /* Gateway: Foreground/Control/Hybrid Control Code/CrawlHomeMode/Chart */
  /* During: Foreground/Control/Hybrid Control Code/CrawlHomeMode/Chart */
  if (localDW->s82_is_active_c20_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Hybrid Control Code/CrawlHomeMode/Chart */
    localDW->s82_is_active_c20_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S82>:2' */
    localDW->s82_is_c20_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Nuetral;
  } else {
    switch (localDW->s82_is_c20_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Driving:
      /* During 'Driving': '<S82>:3' */
      if ((rtu_accel <= rtu_accelEnd) && (rtu_speed >= rtu_regenStart)) {
        /* Transition: '<S82>:13' */
        localDW->s82_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RegenDrag;
      } else {
        localB->s82_driveTorque = rtu_accel;
        localB->s82_regenTorque = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Nuetral:
      /* During 'Nuetral': '<S82>:1' */
      if (rtu_accel >= rtu_accelStart) {
        /* Transition: '<S82>:11' */
        localDW->s82_is_c20_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Driving;
      } else {
        localB->s82_driveTorque = 0.0;
        localB->s82_regenTorque = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_RegenBrake:
      /* During 'RegenBrake': '<S82>:10' */
      if (rtu_speed <= rtu_regenEnd) {
        /* Transition: '<S82>:15' */
        localDW->s82_is_c20_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Nuetral;
      } else if (rtu_brake <= rtu_brakeEnd) {
        /* Transition: '<S82>:18' */
        localDW->s82_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RegenDrag;
      } else {
        localB->s82_regenTorque = rtu_brake + rtu_dragTorque;
        localB->s82_driveTorque = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_RegenDrag:
      /* During 'RegenDrag': '<S82>:4' */
      if (rtu_speed <= rtu_regenEnd) {
        /* Transition: '<S82>:14' */
        localDW->s82_is_c20_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Nuetral;
      } else if (rtu_brake >= rtu_brakeStart) {
        /* Transition: '<S82>:16' */
        localDW->s82_is_c20_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RegenBrake;
      } else if (rtu_accel >= rtu_accelStart) {
        /* Transition: '<S82>:17' */
        localDW->s82_is_c20_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Driving;
      } else {
        localB->s82_regenTorque = rtu_dragTorque;
        localB->s82_driveTorque = 0.0;
      }
      break;

     default:
      /* Transition: '<S82>:2' */
      localDW->s82_is_c20_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Nuetral;
      break;
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S71>/Gas Pedal Scaling'
 *    '<S73>/Gas Pedal Scaling'
 *    '<S77>/Gas Pedal Scaling'
 */
void Mooventure2016_Rev5_GasPedalScaling(real_T rtu_throttleIn,
  rtB_GasPedalScaling_Mooventure2016_Rev5 *localB)
{
  /* MATLAB Function 'Foreground/Control/Hybrid Control Code/CrawlHomeMode/Gas Pedal Scaling': '<S83>:1' */
  /* '<S83>:1:2' */
  localB->s83_throttleOut = (rtu_throttleIn - 16.0) / 91.0;
}

/*
 * Initial conditions for atomic system:
 *    '<S169>/Chart'
 *    '<S149>/Bar Chart'
 *    '<S149>/Bar Chart Reset'
 *    '<S489>/Bar Chart Reset'
 */
void Mooventure2016_Rev5_Chart_o_Init(rtB_Chart_Mooventure2016_Rev5_d *localB,
  rtDW_Chart_Mooventure2016_Rev5_o *localDW)
{
  localDW->s172_is_active_c34_Mooventure2016_Rev5 = 0U;
  localDW->s172_is_c34_Mooventure2016_Rev5 = 0U;
  localDW->s172_count = 0.0;
  localB->s172_write = FALSE;
}

/*
 * Output and update for atomic system:
 *    '<S169>/Chart'
 *    '<S149>/Bar Chart'
 *    '<S149>/Bar Chart Reset'
 *    '<S489>/Bar Chart Reset'
 */
void Mooventure2016_Rev5_Chart_a(real_T rtu_delay,
  rtB_Chart_Mooventure2016_Rev5_d *localB, rtDW_Chart_Mooventure2016_Rev5_o
  *localDW)
{
  /* Gateway: Foreground/Control/Infotainment/MPGe Averages/Global Average/Chart */
  /* During: Foreground/Control/Infotainment/MPGe Averages/Global Average/Chart */
  if (localDW->s172_is_active_c34_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Infotainment/MPGe Averages/Global Average/Chart */
    localDW->s172_is_active_c34_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S172>:4' */
    localDW->s172_is_c34_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Init;
  } else {
    switch (localDW->s172_is_c34_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Clear:
      /* During 'Clear': '<S172>:8' */
      if (localB->s172_write == FALSE) {
        /* Transition: '<S172>:10' */
        localDW->s172_is_c34_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Init;
      } else {
        localB->s172_write = FALSE;
        localDW->s172_count = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Counting:
      /* During 'Counting': '<S172>:3' */
      if (localDW->s172_count >= rtu_delay) {
        /* Transition: '<S172>:7' */
        localDW->s172_is_c34_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Write;
      } else {
        localDW->s172_count = localDW->s172_count + 1.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Init:
      /* During 'Init': '<S172>:1' */
      if (localB->s172_write == FALSE) {
        /* Transition: '<S172>:5' */
        localDW->s172_is_c34_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Counting;
      } else {
        localB->s172_write = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Write:
      /* During 'Write': '<S172>:6' */
      if (localB->s172_write == TRUE) {
        /* Transition: '<S172>:9' */
        localDW->s172_is_c34_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Clear;
      } else {
        localB->s172_write = TRUE;
      }
      break;

     default:
      /* Transition: '<S172>:4' */
      localDW->s172_is_c34_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Init;
      break;
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S149>/Color1'
 *    '<S149>/Color10'
 *    '<S149>/Color11'
 *    '<S149>/Color13'
 *    '<S149>/Color14'
 *    '<S149>/Color15'
 *    '<S149>/Color2'
 *    '<S149>/Color3'
 *    '<S149>/Color4'
 *    '<S149>/Color5'
 *    ...
 */
void Mooventure2016_Rev5_Color1(real_T rtu_threshold, const real_T rtu_MPGe[15],
  rtB_Color1_Mooventure2016_Rev5 *localB)
{
  /* MATLAB Function 'Foreground/Control/Infotainment/MPGe Bar Calculations/Color1': '<S179>:1' */
  if (rtu_MPGe[0] >= rtu_threshold) {
    /* '<S179>:1:3' */
    /* '<S179>:1:4' */
    localB->s179_color = 1.0;
  } else {
    /* '<S179>:1:6' */
    localB->s179_color = 0.0;
  }
}

/*
 * Initial conditions for atomic system:
 *    '<S261>/Chart'
 *    '<S262>/Chart'
 */
void Mooventure2016_Rev5_Chart_b_Init(rtB_Chart_Mooventure2016_Rev5_e *localB,
  rtDW_Chart_Mooventure2016_Rev5_f *localDW)
{
  localDW->s268_is_active_c62_Mooventure2016_Rev5 = 0U;
  localDW->s268_is_c62_Mooventure2016_Rev5 = 0U;
  localDW->s268_tempval = 0.0;
  localB->s268_val = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S261>/Chart'
 *    '<S262>/Chart'
 */
void Mooventure2016_Rev5_Chart_f(real_T rtu_cval, boolean_T rtu_zval, real_T
  rtu_lval, boolean_T rtu_znow, rtB_Chart_Mooventure2016_Rev5_e *localB,
  rtDW_Chart_Mooventure2016_Rev5_f *localDW)
{
  /* Gateway: Foreground/Inputs/Battery_Inputs/SOC Filter/Chart */
  /* During: Foreground/Inputs/Battery_Inputs/SOC Filter/Chart */
  if (localDW->s268_is_active_c62_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Inputs/Battery_Inputs/SOC Filter/Chart */
    localDW->s268_is_active_c62_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S268>:6' */
    localDW->s268_is_c62_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Default;
  } else {
    switch (localDW->s268_is_c62_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_CommsLost:
      /* During 'CommsLost': '<S268>:7' */
      if (rtu_zval || (rtu_znow == FALSE)) {
        /* Transition: '<S268>:13' */
        localDW->s268_is_c62_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Default;
      } else {
        localB->s268_val = localDW->s268_tempval;
      }
      break;

     case Mooventure2016_Rev5_IN_Default:
      /* During 'Default': '<S268>:5' */
      if (rtu_znow == TRUE) {
        /* Transition: '<S268>:10' */
        localDW->s268_is_c62_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_CommsLost;

        /* Entry 'CommsLost': '<S268>:7' */
        localDW->s268_tempval = rtu_lval;
      } else {
        localB->s268_val = rtu_cval;
      }
      break;

     default:
      /* Transition: '<S268>:6' */
      localDW->s268_is_c62_Mooventure2016_Rev5 = Mooventure2016_Rev5_IN_Default;
      break;
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S369>/Heater Core Motion Control'
 *    '<S369>/Radiator Motion Control'
 */
void Mooventure2016_Rev5_HeaterCoreMotionControl(real_T rtu_currPos, real_T
  rtu_posRequest, real_T rtu_hyst,
  rtB_HeaterCoreMotionControl_Mooventure2016_Rev5 *localB)
{
  /* MATLAB Function 'Foreground/Outputs/Coolant Outputs/Heater Core Motion Control': '<S413>:1' */
  if ((rtu_currPos <= rtu_posRequest + rtu_hyst) && (rtu_currPos >=
       rtu_posRequest - rtu_hyst)) {
    /* '<S413>:1:3' */
    /* '<S413>:1:4' */
    localB->s413_motorEnable = 0.0;

    /* '<S413>:1:5' */
    localB->s413_motorDirection = 0.0;
  } else if (rtu_currPos < rtu_posRequest) {
    /* '<S413>:1:6' */
    /* '<S413>:1:7' */
    localB->s413_motorEnable = 1.0;

    /* '<S413>:1:8' */
    localB->s413_motorDirection = 0.0;
  } else if (rtu_currPos > rtu_posRequest) {
    /* '<S413>:1:9' */
    /* '<S413>:1:10' */
    localB->s413_motorEnable = 1.0;

    /* '<S413>:1:11' */
    localB->s413_motorDirection = 1.0;
  } else {
    /* '<S413>:1:13' */
    localB->s413_motorEnable = 0.0;

    /* '<S413>:1:14' */
    localB->s413_motorDirection = 0.0;
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
  /* InitializeConditions for Stateflow: '<S202>/Chart' */
  Mooventure2016_Rev5_DWork.s289_is_active_c29_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s289_is_c29_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s289_Out = 0.0;

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

  /* InitializeConditions for Stateflow: '<S72>/SystemState' */
  Mooventure2016_Rev5_DWork.s90_is_active_c30_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s90_is_c30_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s90_System = FALSE;

  /* S-Function Block: <S122>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s122_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

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

  /* InitializeConditions for Stateflow: '<S261>/Chart' */
  Mooventure2016_Rev5_Chart_b_Init(&Mooventure2016_Rev5_B.s261_sf_Chart,
    &Mooventure2016_Rev5_DWork.s261_sf_Chart);

  /* S-Function Block: <S269>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s269_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S118>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s118_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
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

  /* InitializeConditions for Stateflow: '<S262>/Chart' */
  Mooventure2016_Rev5_Chart_b_Init(&Mooventure2016_Rev5_B.s262_sf_Chart,
    &Mooventure2016_Rev5_DWork.s262_sf_Chart);

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

  /* S-Function Block: <S433>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s433_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S7>/PumpState' */
  Mooventure2016_Rev5_DWork.s23_is_active_c15_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s23_is_c15_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s23_PumpOn = FALSE;

  /* S-Function Block: <S245>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s245_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
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

  /* InitializeConditions for Stateflow: '<S12>/Chart' */
  Mooventure2016_Rev5_DWork.s197_is_active_c1_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s197_is_c1_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s197_Vehicle_Enable = FALSE;
  Mooventure2016_Rev5_B.s197_Vehicle_Ready = FALSE;
  Mooventure2016_Rev5_B.s197_Torque_Enable = FALSE;
  Mooventure2016_Rev5_B.s197_Keyed_Relay = FALSE;
  Mooventure2016_Rev5_DWork.s197_presentTicks = 0U;
  Mooventure2016_Rev5_DWork.s197_elapsedTicks = 0U;
  Mooventure2016_Rev5_DWork.s197_previousTicks = 0U;

  /* InitializeConditions for Stateflow: '<S370>/Coil1State' */
  Mooventure2016_Rev5_DWork.s464_is_active_c8_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s464_is_c8_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s464_Coil1State = FALSE;

  /* InitializeConditions for Stateflow: '<S370>/Coil2State' */
  Mooventure2016_Rev5_DWork.s465_is_active_c9_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s465_is_c9_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s465_Coil2State = FALSE;

  /* InitializeConditions for Stateflow: '<S370>/Coil2State1' */
  Mooventure2016_Rev5_DWork.s466_is_active_c10_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s466_is_c10_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s466_Coil3State = FALSE;

  /* InitializeConditions for Stateflow: '<S371>/PowerSteering' */
  Mooventure2016_Rev5_DWork.s492_is_active_c28_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s492_is_c28_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s492_VehicleReadyOutput = FALSE;

  /* InitializeConditions for Stateflow: '<S371>/Chart' */
  Mooventure2016_Rev5_DWork.s487_is_active_c22_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s487_is_c22_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_B.s487_engTemp = 0.0;
  Mooventure2016_Rev5_B.s487_transTemp = 0.0;
  Mooventure2016_Rev5_B.s487_timerOut = 0.0;

  /* S-Function Block: <S490>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s490_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S373>/OnOff Delay' */
  Mooventure2016_Rev5_DWork.s637_is_active_c4_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s637_is_c4_Mooventure2016_Rev5 = 0U;
  Mooventure2016_Rev5_DWork.s637_motorcount = 0;
  Mooventure2016_Rev5_B.s637_MotorEnable = FALSE;
  Mooventure2016_Rev5_B.s637_IPTWake = FALSE;
  Mooventure2016_Rev5_B.s637_IPTEnable = FALSE;
  Mooventure2016_Rev5_DWork.s637_presentTicks = 0U;
  Mooventure2016_Rev5_DWork.s637_elapsedTicks = 0U;
  Mooventure2016_Rev5_DWork.s637_previousTicks = 0U;

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

  /* InitializeConditions for S-Function (motohawk_sfun_fault_def): '<S55>/motohawk_fault_def2' */
  /* Reset Fault Downsample Counter: Pedal_Position_Sensor_A_Circuit_Intermittent */
  {
    Mooventure2016_Rev5_DWork.s55_motohawk_fault_def2_DWORK1 = 0;
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
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
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

  /* S-Function Block: <S103>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s103_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S127>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s127_motohawk_delta_time_DWORK1 = now -
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

  /* S-Function Block: <S159>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    Mooventure2016_Rev5_DWork.s159_motohawk_delta_time_DWORK1 = now -
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

  /* InitializeConditions for Stateflow: '<S169>/Chart' */
  Mooventure2016_Rev5_Chart_o_Init(&Mooventure2016_Rev5_B.s169_sf_Chart,
    &Mooventure2016_Rev5_DWork.s169_sf_Chart);

  /* InitializeConditions for Stateflow: '<S149>/Bar Chart' */
  Mooventure2016_Rev5_Chart_o_Init(&Mooventure2016_Rev5_B.s149_sf_BarChart,
    &Mooventure2016_Rev5_DWork.s149_sf_BarChart);

  /* InitializeConditions for Stateflow: '<S149>/Bar Chart Reset' */
  Mooventure2016_Rev5_Chart_o_Init(&Mooventure2016_Rev5_B.s149_sf_BarChartReset,
    &Mooventure2016_Rev5_DWork.s149_sf_BarChartReset);
}

/* Enable for function-call system: '<Root>/Foreground' */
void Mooventure2016_Rev5_Foreground_Enable(void)
{
  /* Enable for Stateflow: '<S12>/Chart' */
  Mooventure2016_Rev5_DWork.s197_presentTicks =
    Mooventure2016_Rev5_M->Timing.clockTick0;
  Mooventure2016_Rev5_DWork.s197_previousTicks =
    Mooventure2016_Rev5_DWork.s197_presentTicks;

  /* Enable for Stateflow: '<S373>/OnOff Delay' */
  Mooventure2016_Rev5_DWork.s637_presentTicks =
    Mooventure2016_Rev5_M->Timing.clockTick0;
  Mooventure2016_Rev5_DWork.s637_previousTicks =
    Mooventure2016_Rev5_DWork.s637_presentTicks;
}

/* Disable for function-call system: '<Root>/Foreground' */
void Mooventure2016_Rev5_Foreground_Disable(void)
{
  /* Disable for Enabled SubSystem: '<S76>/Drive' */
  /* Disable for Outport: '<S117>/IPT_Torque' */
  Mooventure2016_Rev5_B.s76_Torque_Direction = 0.0;
  Mooventure2016_Rev5_DWork.s76_Drive_MODE = FALSE;

  /* End of Disable for SubSystem: '<S76>/Drive' */

  /* Disable for Enabled SubSystem: '<S76>/Reverse' */
  Mooventure2016_Rev5_DWork.s76_Reverse_MODE = FALSE;

  /* End of Disable for SubSystem: '<S76>/Reverse' */

  /* Disable for Stateflow: '<S12>/Chart' */
  Mooventure2016_Rev5_DWork.s197_presentTicks =
    Mooventure2016_Rev5_M->Timing.clockTick0;
  Mooventure2016_Rev5_DWork.s197_elapsedTicks =
    Mooventure2016_Rev5_DWork.s197_presentTicks -
    Mooventure2016_Rev5_DWork.s197_previousTicks;
  Mooventure2016_Rev5_DWork.s197_previousTicks =
    Mooventure2016_Rev5_DWork.s197_presentTicks;
  if ((uint32_T)Mooventure2016_Rev5_DWork.s197_temporalCounter_i1 +
      Mooventure2016_Rev5_DWork.s197_elapsedTicks <= 7U) {
    Mooventure2016_Rev5_DWork.s197_temporalCounter_i1 = (uint8_T)((uint32_T)
      Mooventure2016_Rev5_DWork.s197_temporalCounter_i1 +
      Mooventure2016_Rev5_DWork.s197_elapsedTicks);
  } else {
    Mooventure2016_Rev5_DWork.s197_temporalCounter_i1 = 7U;
  }

  /* End of Stateflow: '<S12>/Chart' */

  /* Disable for Stateflow: '<S373>/OnOff Delay' */
  Mooventure2016_Rev5_DWork.s637_presentTicks =
    Mooventure2016_Rev5_M->Timing.clockTick0;
  Mooventure2016_Rev5_DWork.s637_elapsedTicks =
    Mooventure2016_Rev5_DWork.s637_presentTicks -
    Mooventure2016_Rev5_DWork.s637_previousTicks;
  Mooventure2016_Rev5_DWork.s637_previousTicks =
    Mooventure2016_Rev5_DWork.s637_presentTicks;
  if ((uint32_T)Mooventure2016_Rev5_DWork.s637_temporalCounter_i1 +
      Mooventure2016_Rev5_DWork.s637_elapsedTicks <= 7U) {
    Mooventure2016_Rev5_DWork.s637_temporalCounter_i1 = (uint8_T)((uint32_T)
      Mooventure2016_Rev5_DWork.s637_temporalCounter_i1 +
      Mooventure2016_Rev5_DWork.s637_elapsedTicks);
  } else {
    Mooventure2016_Rev5_DWork.s637_temporalCounter_i1 = 7U;
  }

  /* End of Stateflow: '<S373>/OnOff Delay' */
}

/* Start for function-call system: '<Root>/Foreground' */
void Mooventure2016_Rev5_Foreground_Start(void)
{
  /* Start for IfAction SubSystem: '<S9>/CrawlHomeMode' */

  /* InitializeConditions for Stateflow: '<S71>/Chart' */
  Mooventure2016_Rev5_Chart_Init(&Mooventure2016_Rev5_B.s71_sf_Chart,
    &Mooventure2016_Rev5_DWork.s71_sf_Chart);

  /* End of Start for SubSystem: '<S9>/CrawlHomeMode' */

  /* Start for IfAction SubSystem: '<S9>/EcoMode' */

  /* InitializeConditions for Stateflow: '<S73>/Chart' */
  Mooventure2016_Rev5_Chart_Init(&Mooventure2016_Rev5_B.s73_sf_Chart,
    &Mooventure2016_Rev5_DWork.s73_sf_Chart);

  /* End of Start for SubSystem: '<S9>/EcoMode' */

  /* Start for IfAction SubSystem: '<S9>/SUVMode' */

  /* InitializeConditions for Stateflow: '<S77>/Chart' */
  Mooventure2016_Rev5_Chart_Init(&Mooventure2016_Rev5_B.s77_sf_Chart,
    &Mooventure2016_Rev5_DWork.s77_sf_Chart);

  /* End of Start for SubSystem: '<S9>/SUVMode' */

  /* Start for Enabled SubSystem: '<S371>/Enabled Subsystem' */

  /* InitializeConditions for Stateflow: '<S489>/Bar Chart Reset' */
  Mooventure2016_Rev5_Chart_o_Init(&Mooventure2016_Rev5_B.s489_sf_BarChartReset,
    &Mooventure2016_Rev5_DWork.s489_sf_BarChartReset);

  /* End of Start for SubSystem: '<S371>/Enabled Subsystem' */

  /* S-Function Block: <S194>/S-Function  */
  {
    static real_T dnls_buffer[1 * 15];
    Mooventure2016_Rev5_DWork.s194_SFunction_PWORK.uBuffers = (void *)
      &dnls_buffer[0];
  }

  {
    int ids;

    /* Assign default sample(s) */
    if (Mooventure2016_Rev5_DWork.s194_SFunction_PWORK.uBuffers != NULL) {
      for (ids = 0; ids < 15; ++ids)
        ((real_T *)Mooventure2016_Rev5_DWork.s194_SFunction_PWORK.uBuffers)[ids]
          = (real_T)0.0;
    }

    /* Set work values */
    Mooventure2016_Rev5_DWork.s194_SFunction_IWORK.indPs = 0;
  }

  /* S-Function (motohawk_sfun_probe): '<S370>/motohawk_probe10' */
  (Coil5_AuxCoil_Probe_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S370>/motohawk_probe9' */
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
  real_T rtb_UnitDelay2_p;
  real_T rtb_motohawk_delta_time_h;
  real_T rtb_UnitDelay1_k;
  real_T rtb_Merge_c;
  real_T rtb_Merge_lu;
  real_T rtb_Merge_ny;
  real_T rtb_Merge_e;
  real_T rtb_Merge_nz;
  real_T rtb_Merge_o;
  real_T rtb_Merge_er;
  real_T rtb_Merge_a;
  real_T rtb_UnitDelay2_g;
  real_T rtb_motohawk_delta_time_f;
  real_T rtb_UnitDelay1_i;
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
  real_T rtb_motohawk_delta_time_fv;
  real_T rtb_motohawk_delta_time_c;
  real_T rtb_motohawk_delta_time_p1;
  real_T rtb_motohawk_delta_time_an;
  real_T rtb_motohawk_delta_time_iv;
  real_T rtb_motohawk_delta_time_d;
  real_T rtb_motohawk_delta_time_gg;
  real_T rtb_motohawk_delta_time_ey;
  real_T rtb_Saturation_im;
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
  real_T rtb_Saturation_c;
  real_T rtb_Saturation_i2;
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
  real_T rtb_Switch_hx;
  real_T rtb_Switch_pm;
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
  boolean_T rtb_RelationalOperator_b;
  boolean_T rtb_RelationalOperator1_i;
  boolean_T rtb_Ignition;
  boolean_T rtb_RelationalOperator_p;
  boolean_T rtb_RelationalOperator1_iq;
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
  boolean_T rtb_RelationalOperator2_c;
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
  boolean_T rtb_LogicalOperator5_m;
  boolean_T rtb_RelationalOperator_jg;
  boolean_T rtb_motohawk_fault_action1_g;
  int32_T row;
  real_T rtb_UnitDelay_m;
  real_T rtb_UnitDelay_o;
  real_T rtb_Product;
  real_T rtb_Product5;
  real_T rtb_Product3;
  real_T rtb_Product4;
  uint8_T rtb_Compare;
  real_T rtb_Switch_m4;
  boolean_T rtb_LogicalOperator_h;
  real_T rtb_Switch_n;
  boolean_T rtb_LogicalOperator_f;
  boolean_T rtb_LogicalOperator5;
  real_T rtb_Switch_m;
  real_T rtb_Merge_l;
  real_T rtb_Sum1;
  boolean_T rtb_LogicalOperator2_f;
  uint16_T rtb_Merge_bn;
  real_T rtb_Switch_p;
  real_T rtb_Merge_oq;
  int32_T rtb_Heater_Temp_Raw;
  boolean_T rtb_LogicalOperator_b2;
  boolean_T rtb_LogicalOperator_po;
  real_T rtb_Product2_f;
  real_T rtb_Merge_b;
  boolean_T rtb_RelationalOperator_be;
  real_T rtb_Merge_lf;
  real_T rtb_Merge_hn;
  real_T rtb_Merge_gq;
  uint32_T rtb_Merge_nu;
  boolean_T rtb_LogicalOperator_e;
  real_T rtb_Abs;
  real_T rtb_Abs1;
  real_T rtb_Abs2;
  real_T rtb_Abs3;
  real_T rtb_Product_d;
  real_T rtb_Merge_ld;

  /* UnitDelay: '<S100>/Unit Delay' */
  rtb_UnitDelay_m = Mooventure2016_Rev5_DWork.s100_UnitDelay_DSTATE;

  /* UnitDelay: '<S101>/Unit Delay' */
  rtb_UnitDelay_o = Mooventure2016_Rev5_DWork.s101_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_read_canmsg): '<S205>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4637p0005_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4637p0005_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s205_AgeCount + 1) >
        Mooventure2016_Rev5_B.s205_AgeCount)
      Mooventure2016_Rev5_B.s205_AgeCount++;
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
      Mooventure2016_Rev5_B.s205_IPT_CurrentUsed = (((real_T) tmp0) / ((real_T)
        10)) + ((real_T) -600);
      Mooventure2016_Rev5_B.s205_IPT_CurrentRequest = (((real_T) tmp1) /
        ((real_T) 10)) + ((real_T) -600);
      Mooventure2016_Rev5_B.s205_IPT_MotorSpeed = ((real_T) tmp2) + ((real_T)
        -15000);
      Mooventure2016_Rev5_B.s205_IPT_WheelTorqueDelivered = ((real_T) tmp3) +
        ((real_T) -4000);
      Mooventure2016_Rev5_B.s205_IPT_CurrentLimit = (real_T) tmp4;
      Mooventure2016_Rev5_B.s205_IPT_Antishudder = (real_T) tmp5;
      Mooventure2016_Rev5_B.s205_AgeCount = 0;
    }
  }

  /* If: '<S331>/If' incorporates:
   *  Inport: '<S332>/In1'
   *  Inport: '<S333>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S331>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S331>/override_enable'
   */
  if ((Motor_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S331>/NewValue' incorporates:
     *  ActionPort: '<S332>/Action Port'
     */
    Mooventure2016_Rev5_B.s331_Merge = (Motor_Speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S332>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(75);
    }

    /* End of Outputs for SubSystem: '<S331>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S331>/OldValue' incorporates:
     *  ActionPort: '<S333>/Action Port'
     */
    Mooventure2016_Rev5_B.s331_Merge = Mooventure2016_Rev5_B.s205_IPT_MotorSpeed;

    /* S-Function (motohawk_sfun_code_cover): '<S333>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/IPT CAN Inputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(76);
    }

    /* End of Outputs for SubSystem: '<S331>/OldValue' */
  }

  /* End of If: '<S331>/If' */

  /* Product: '<S72>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S72>/motohawk_calibration7'
   */
  rtb_Product = Mooventure2016_Rev5_B.s331_Merge * (MPH_Conversion_DataStore());

  /* S-Function Block: <S101>/motohawk_delta_time */
  rtb_motohawk_delta_time = 0.005;

  /* Switch: '<S98>/Switch' incorporates:
   *  Constant: '<S98>/Constant'
   *  Product: '<S101>/Product'
   *  RelationalOperator: '<S98>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_delta_time): '<S101>/motohawk_delta_time'
   *  Sum: '<S101>/Sum2'
   */
  if ((rtb_Product - rtb_UnitDelay_o) / rtb_motohawk_delta_time > 0.0) {
    rtb_Product5 = (ETC_DampGainUp_DataStore());
  } else {
    rtb_Product5 = (ETC_DampGainDown_DataStore());
  }

  /* End of Switch: '<S98>/Switch' */

  /* Product: '<S98>/Product3' */
  rtb_Product3 = rtb_Product5 * rtb_Product;

  /* S-Function Block: <S100>/motohawk_delta_time */
  rtb_motohawk_delta_time_k = 0.005;

  /* Product: '<S100>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S100>/motohawk_delta_time'
   *  Sum: '<S100>/Sum2'
   */
  Mooventure2016_Rev5_B.s100_Product = (rtb_Product3 - rtb_UnitDelay_m) /
    rtb_motohawk_delta_time_k;

  /* UnitDelay: '<S102>/Unit Delay' */
  rtb_UnitDelay_o = Mooventure2016_Rev5_DWork.s102_UnitDelay_DSTATE;

  /* Sum: '<S98>/Sum2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S72>/motohawk_data_read2'
   */
  Mooventure2016_Rev5_B.s98_Sum2 = CruiseSpeed_DataStore() - rtb_Product;

  /* Product: '<S98>/Product5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration6'
   */
  rtb_Product5 = Mooventure2016_Rev5_B.s98_Sum2 * (ETC_ErrorGain_DataStore());

  /* Product: '<S98>/Product4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration1'
   */
  rtb_Product4 = (ETC_DGain_DataStore()) * rtb_Product5;

  /* S-Function Block: <S102>/motohawk_delta_time */
  rtb_motohawk_delta_time_p = 0.005;

  /* Product: '<S102>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S102>/motohawk_delta_time'
   *  Sum: '<S102>/Sum2'
   */
  Mooventure2016_Rev5_B.s102_Product = (rtb_Product4 - rtb_UnitDelay_o) /
    rtb_motohawk_delta_time_p;

  /* Product: '<S98>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration'
   */
  Mooventure2016_Rev5_B.s98_Product2 = (ETC_PGain_DataStore()) * rtb_Product5;

  /* RelationalOperator: '<S97>/Compare' incorporates:
   *  Constant: '<S97>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S87>/motohawk_data_read1'
   */
  rtb_Compare = CruiseOn_DataStore();

  /* Switch: '<S103>/Switch1' incorporates:
   *  RelationalOperator: '<S95>/FixPt Relational Operator'
   *  UnitDelay: '<S103>/Unit Delay'
   *  UnitDelay: '<S95>/Delay Input1'
   */
  if (rtb_Compare > Mooventure2016_Rev5_DWork.s95_DelayInput1_DSTATE) {
    Mooventure2016_Rev5_B.s103_Switch1 = 0.0;
  } else {
    Mooventure2016_Rev5_B.s103_Switch1 =
      Mooventure2016_Rev5_DWork.s103_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S103>/Switch1' */

  /* Sum: '<S96>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration5'
   *  Sum: '<S98>/Sum'
   */
  rtb_Switch_m4 = (((Mooventure2016_Rev5_B.s102_Product -
                     Mooventure2016_Rev5_B.s100_Product) +
                    Mooventure2016_Rev5_B.s98_Product2) +
                   Mooventure2016_Rev5_B.s103_Switch1) + (ETC_DCOffset_DataStore
    ());

  /* MinMax: '<S105>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration'
   */
  rtb_UnitDelay_o = (rtb_Switch_m4 >= (ETC_LwrLim_DataStore())) || rtIsNaN
    ((ETC_LwrLim_DataStore())) ? rtb_Switch_m4 : (ETC_LwrLim_DataStore());

  /* MinMax: '<S105>/MinMax1' incorporates:
   *  MinMax: '<S105>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration1'
   */
  Mooventure2016_Rev5_B.s105_MinMax1 = (rtb_UnitDelay_o <= (ETC_UprLim_DataStore
    ())) || rtIsNaN((ETC_UprLim_DataStore())) ? rtb_UnitDelay_o :
    (ETC_UprLim_DataStore());

  /* S-Function Block: <S202>/motohawk_ain4 Resource: Cruise_Control */
  Mooventure2016_Rev5_B.s202_RawSignal = Cruise_Control_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* DataTypeConversion: '<S202>/Data Type Conversion' */
  rtb_UnitDelay_o = (real_T)Mooventure2016_Rev5_B.s202_RawSignal;

  /* Stateflow: '<S202>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration6'
   */

  /* Gateway: Foreground/Inputs/Cruise Control/Chart */
  /* During: Foreground/Inputs/Cruise Control/Chart */
  if (Mooventure2016_Rev5_DWork.s289_is_active_c29_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Inputs/Cruise Control/Chart */
    Mooventure2016_Rev5_DWork.s289_is_active_c29_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S289>:10' */
    Mooventure2016_Rev5_DWork.s289_is_c29_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_default;
  } else {
    switch (Mooventure2016_Rev5_DWork.s289_is_c29_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_ON:
      /* During 'ON': '<S289>:16' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S289>:34' */
        Mooventure2016_Rev5_DWork.s289_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default;
      } else {
        Mooventure2016_Rev5_B.s289_Out = 5.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Off_d:
      /* During 'Off': '<S289>:12' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S289>:35' */
        Mooventure2016_Rev5_DWork.s289_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default;
      } else {
        Mooventure2016_Rev5_B.s289_Out = 1.0;
      }
      break;

     case Mooventure2016_Rev5_IN_RSM:
      /* During 'RSM': '<S289>:15' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S289>:32' */
        Mooventure2016_Rev5_DWork.s289_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default;
      } else {
        Mooventure2016_Rev5_B.s289_Out = 4.0;
      }
      break;

     case Mooventure2016_Rev5_IN_SetMinus:
      /* During 'SetMinus': '<S289>:13' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S289>:26' */
        Mooventure2016_Rev5_DWork.s289_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default;
      } else {
        Mooventure2016_Rev5_B.s289_Out = 2.0;
      }
      break;

     case Mooventure2016_Rev5_IN_SetPlus:
      /* During 'SetPlus': '<S289>:14' */
      if ((rtb_UnitDelay_o < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S289>:30' */
        Mooventure2016_Rev5_DWork.s289_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_default;
      } else {
        Mooventure2016_Rev5_B.s289_Out = 3.0;
      }
      break;

     case Mooventure2016_Rev5_IN_default:
      /* During 'default': '<S289>:9' */
      if ((rtb_UnitDelay_o < (Off_DataStore()) + (HYST_DataStore())) &&
          (rtb_UnitDelay_o > (Off_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S289>:22' */
        Mooventure2016_Rev5_DWork.s289_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Off_d;
      } else if ((rtb_UnitDelay_o < (SetPlus_DataStore()) + (HYST_DataStore())) &&
                 (rtb_UnitDelay_o > (SetPlus_DataStore()) - (HYST_DataStore())))
      {
        /* Transition: '<S289>:29' */
        Mooventure2016_Rev5_DWork.s289_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SetPlus;
      } else if ((rtb_UnitDelay_o < (RSM_DataStore()) + (HYST_DataStore())) &&
                 (rtb_UnitDelay_o > (RSM_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S289>:31' */
        Mooventure2016_Rev5_DWork.s289_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_RSM;
      } else if ((rtb_UnitDelay_o < (ON_DataStore()) + (HYST_DataStore())) &&
                 (rtb_UnitDelay_o > (ON_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S289>:33' */
        Mooventure2016_Rev5_DWork.s289_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_ON;
      } else if ((rtb_UnitDelay_o < (SetMinus_DataStore()) + (HYST_DataStore()))
                 && (rtb_UnitDelay_o > (SetMinus_DataStore()) - (HYST_DataStore())))
      {
        /* Transition: '<S289>:38' */
        Mooventure2016_Rev5_DWork.s289_is_c29_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_SetMinus;
      } else {
        Mooventure2016_Rev5_B.s289_Out = 0.0;
      }
      break;

     default:
      /* Transition: '<S289>:10' */
      Mooventure2016_Rev5_DWork.s289_is_c29_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_default;
      break;
    }
  }

  /* End of Stateflow: '<S202>/Chart' */

  /* RelationalOperator: '<S290>/Compare' incorporates:
   *  Constant: '<S290>/Constant'
   */
  rtb_LogicalOperator5_m = (Mooventure2016_Rev5_B.s289_Out == 1.0);

  /* S-Function Block: <S295>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s295_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_m = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S295>/Switch' incorporates:
   *  Constant: '<S295>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S295>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S295>/motohawk_delta_time'
   *  Sum: '<S295>/Sum'
   */
  if (rtb_LogicalOperator5_m) {
    rtb_Switch_m4 = rtb_motohawk_delta_time_m + ButtonDelay1_DataStore();
  } else {
    rtb_Switch_m4 = 0.0;
  }

  /* End of Switch: '<S295>/Switch' */
  /* Logic: '<S284>/Logical Operator' incorporates:
   *  RelationalOperator: '<S284>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration7'
   */
  rtb_LogicalOperator_h = (rtb_LogicalOperator5_m && (rtb_Switch_m4 >=
    (Delay_DataStore())));

  /* RelationalOperator: '<S294>/Compare' incorporates:
   *  Constant: '<S294>/Constant'
   */
  rtb_LogicalOperator5_m = (Mooventure2016_Rev5_B.s289_Out == 5.0);

  /* S-Function Block: <S299>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s299_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_pj = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S299>/Switch' incorporates:
   *  Constant: '<S299>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S299>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S299>/motohawk_delta_time'
   *  Sum: '<S299>/Sum'
   */
  if (rtb_LogicalOperator5_m) {
    rtb_Switch_n = rtb_motohawk_delta_time_pj + ButtonDelay5_DataStore();
  } else {
    rtb_Switch_n = 0.0;
  }

  /* End of Switch: '<S299>/Switch' */

  /* Logic: '<S288>/Logical Operator' incorporates:
   *  RelationalOperator: '<S288>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration7'
   */
  rtb_LogicalOperator_f = (rtb_LogicalOperator5_m && (rtb_Switch_n >=
    (Delay_DataStore())));

  /* Logic: '<S72>/Logical Operator5' incorporates:
   *  Logic: '<S72>/Logical Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S72>/motohawk_calibration'
   *  S-Function (motohawk_sfun_fault_action): '<S72>/motohawk_fault_action3'
   */
  rtb_LogicalOperator5 = (((Cruise_Control_Enable_DataStore()) != 0.0) &&
    (!GetFaultActionStatus(6)));

  /* Stateflow: '<S72>/SystemState' */

  /* Gateway: Foreground/Control/Hybrid Control Code/Cruise Control/SystemState */
  /* During: Foreground/Control/Hybrid Control Code/Cruise Control/SystemState */
  if (Mooventure2016_Rev5_DWork.s90_is_active_c30_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Hybrid Control Code/Cruise Control/SystemState */
    Mooventure2016_Rev5_DWork.s90_is_active_c30_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S90>:4' */
    Mooventure2016_Rev5_DWork.s90_is_c30_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Off;
  } else {
    switch (Mooventure2016_Rev5_DWork.s90_is_c30_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Off:
      /* During 'Off': '<S90>:1' */
      if ((rtb_LogicalOperator_f == TRUE) && (rtb_LogicalOperator5 == TRUE)) {
        /* Transition: '<S90>:5' */
        Mooventure2016_Rev5_DWork.s90_is_c30_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_On;
      } else {
        Mooventure2016_Rev5_B.s90_System = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_On:
      /* During 'On': '<S90>:2' */
      if ((rtb_LogicalOperator_h == TRUE) || (rtb_LogicalOperator5 == FALSE)) {
        /* Transition: '<S90>:6' */
        Mooventure2016_Rev5_DWork.s90_is_c30_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Off;
      } else {
        Mooventure2016_Rev5_B.s90_System = TRUE;
      }
      break;

     default:
      /* Transition: '<S90>:4' */
      Mooventure2016_Rev5_DWork.s90_is_c30_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Off;
      break;
    }
  }

  /* End of Stateflow: '<S72>/SystemState' */

  /* Logic: '<S72>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S72>/motohawk_data_read1'
   */
  rtb_LogicalOperator5 = (CruiseOn_DataStore() &&
    Mooventure2016_Rev5_B.s90_System);

  /* Switch: '<S127>/Switch1' incorporates:
   *  Constant: '<S123>/Constant2'
   *  UnitDelay: '<S127>/Unit Delay'
   */
  if (Mooventure2016_Rev5_ConstB.s127_DataTypeConversion) {
    Mooventure2016_Rev5_B.s127_Switch1 = 0.0;
  } else {
    Mooventure2016_Rev5_B.s127_Switch1 =
      Mooventure2016_Rev5_DWork.s127_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S127>/Switch1' */
  /* S-Function Block: <S124>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ModifiedAmpSecIn_DataStore()) = Mooventure2016_Rev5_B.s127_Switch1;
    (ModifiedAmpSecIdx_DataStore()) = TablePrelookup_real_T
      (Mooventure2016_Rev5_B.s127_Switch1, (ModifiedAmpSecIdxArr_DataStore()), 4,
       (ModifiedAmpSecIdx_DataStore()));
    rtb_motohawk_prelookup = (ModifiedAmpSecIdx_DataStore());
  }

  /* S-Function Block: <S124>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup, (real_T *) ((TorqueLimMultiplierTbl_DataStore())),
       4);
    (TorqueLimMultiplier_DataStore()) = rtb_motohawk_interpolation_1d;
  }

  /* S-Function Block: <S122>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s122_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_h = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S122>/Product' incorporates:
   *  MinMax: '<S122>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S122>/motohawk_calibration'
   */
  rtb_Switch_h /= (rtb_Switch_h >= (Overcurrent_Tq_Lim_Filter_DataStore())) ||
    rtIsNaN((Overcurrent_Tq_Lim_Filter_DataStore())) ? rtb_Switch_h :
    (Overcurrent_Tq_Lim_Filter_DataStore());

  /* Sum: '<S125>/Sum1' incorporates:
   *  Constant: '<S125>/Constant'
   *  Product: '<S125>/Product'
   *  Product: '<S125>/Product1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S124>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S124>/motohawk_prelookup'
   *  Sum: '<S125>/Sum'
   *  UnitDelay: '<S125>/Unit Delay'
   */
  Mooventure2016_Rev5_B.s125_Sum1 = (1.0 - rtb_Switch_h) *
    Mooventure2016_Rev5_DWork.s125_UnitDelay_DSTATE +
    rtb_motohawk_interpolation_1d * rtb_Switch_h;

  /* Switch: '<S76>/Switch1' incorporates:
   *  Constant: '<S76>/Constant1'
   *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration1'
   */
  if ((CurrentLimitingEnabled_DataStore()) != 0.0) {
    rtb_Switch_h = Mooventure2016_Rev5_B.s125_Sum1;
  } else {
    rtb_Switch_h = 1.0;
  }

  /* End of Switch: '<S76>/Switch1' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S203>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4494p0004_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4494p0004_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s203_AgeCount + 1) >
        Mooventure2016_Rev5_B.s203_AgeCount)
      Mooventure2016_Rev5_B.s203_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0] & 0x0000000F)) ;
      Mooventure2016_Rev5_B.s203_Shift_Position = (real_T) tmp0;
      Mooventure2016_Rev5_B.s203_AgeCount = 0;
    }
  }

  /* MATLAB Function Block: '<S203>/Embedded MATLAB Function' */

  /* MATLAB Function 'Foreground/Inputs/Driver Inputs/Embedded MATLAB Function': '<S300>:1' */
  /*  Park, Reverse, Drive, Low */
  if (Mooventure2016_Rev5_B.s203_Shift_Position == 12.0) {
    /* '<S300>:1:4' */
    /* '<S300>:1:5' */
    Mooventure2016_Rev5_B.s300_posOut = 1.0;

    /*  in reverse */
    /* '<S300>:1:6' */
    rtb_UnitDelay_o = 0.0;
  } else if (Mooventure2016_Rev5_B.s203_Shift_Position == 8.0) {
    /* '<S300>:1:7' */
    /* '<S300>:1:8' */
    Mooventure2016_Rev5_B.s300_posOut = 3.0;

    /*  in drive */
    /* '<S300>:1:9' */
    rtb_UnitDelay_o = 0.0;
  } else if (Mooventure2016_Rev5_B.s203_Shift_Position == 4.0) {
    /* '<S300>:1:10' */
    /* '<S300>:1:11' */
    Mooventure2016_Rev5_B.s300_posOut = 3.0;

    /*  in ecoMode drive */
    /* '<S300>:1:12' */
    rtb_UnitDelay_o = 1.0;
  } else {
    /* '<S300>:1:14' */
    Mooventure2016_Rev5_B.s300_posOut = 2.0;

    /*  in neutral */
    /* '<S300>:1:15' */
    rtb_UnitDelay_o = 0.0;
  }

  /* End of MATLAB Function Block: '<S203>/Embedded MATLAB Function' */

  /* Outputs for Enabled SubSystem: '<S76>/Neutral' incorporates:
   *  EnablePort: '<S119>/Enable'
   */
  /* RelationalOperator: '<S113>/Compare' incorporates:
   *  Constant: '<S113>/Constant'
   *  Constant: '<S119>/Constant'
   */
  if (Mooventure2016_Rev5_B.s300_posOut == 2.0) {
    Mooventure2016_Rev5_B.s76_Torque_Direction = 0.0;
  }

  /* End of RelationalOperator: '<S113>/Compare' */
  /* End of Outputs for SubSystem: '<S76>/Neutral' */

  /* Outputs for Enabled SubSystem: '<S76>/Drive' incorporates:
   *  EnablePort: '<S117>/Enable'
   */
  /* RelationalOperator: '<S114>/Compare' incorporates:
   *  Constant: '<S114>/Constant'
   */
  if (Mooventure2016_Rev5_B.s300_posOut == 3.0) {
    if (!Mooventure2016_Rev5_DWork.s76_Drive_MODE) {
      Mooventure2016_Rev5_DWork.s76_Drive_MODE = TRUE;
    }

    /* If: '<S130>/If' incorporates:
     *  Constant: '<S117>/Constant1'
     *  Inport: '<S131>/In1'
     *  Inport: '<S132>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S130>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S130>/override_enable'
     */
    if ((Torque_Reverse_Override_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S130>/NewValue' incorporates:
       *  ActionPort: '<S131>/Action Port'
       */
      Mooventure2016_Rev5_B.s76_Torque_Direction =
        (Torque_Reverse_Override_new_DataStore());

      /* S-Function (motohawk_sfun_code_cover): '<S131>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(7);
      }

      /* End of Outputs for SubSystem: '<S130>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S130>/OldValue' incorporates:
       *  ActionPort: '<S132>/Action Port'
       */
      Mooventure2016_Rev5_B.s76_Torque_Direction = 1.0;

      /* S-Function (motohawk_sfun_code_cover): '<S132>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Drive/motohawk_override_abs4/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(8);
      }

      /* End of Outputs for SubSystem: '<S130>/OldValue' */
    }

    /* End of If: '<S130>/If' */
  } else {
    if (Mooventure2016_Rev5_DWork.s76_Drive_MODE) {
      /* Disable for Outport: '<S117>/IPT_Torque' */
      Mooventure2016_Rev5_B.s76_Torque_Direction = 0.0;
      Mooventure2016_Rev5_DWork.s76_Drive_MODE = FALSE;
    }
  }

  /* End of RelationalOperator: '<S114>/Compare' */
  /* End of Outputs for SubSystem: '<S76>/Drive' */

  /* RelationalOperator: '<S115>/Compare' incorporates:
   *  Constant: '<S115>/Constant'
   */
  rtb_Compare_nm = (Mooventure2016_Rev5_B.s300_posOut == 1.0);

  /* Outputs for Enabled SubSystem: '<S76>/Reverse' incorporates:
   *  EnablePort: '<S120>/Enable'
   */
  if (rtb_Compare_nm) {
    if (!Mooventure2016_Rev5_DWork.s76_Reverse_MODE) {
      Mooventure2016_Rev5_DWork.s76_Reverse_MODE = TRUE;
    }

    /* If: '<S134>/If' incorporates:
     *  Constant: '<S120>/Constant1'
     *  Inport: '<S135>/In1'
     *  Inport: '<S136>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S134>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S134>/override_enable'
     */
    if ((Torque_Reverse_Override69_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S134>/NewValue' incorporates:
       *  ActionPort: '<S135>/Action Port'
       */
      Mooventure2016_Rev5_B.s76_Torque_Direction =
        (Torque_Reverse_Override69_new_DataStore());

      /* S-Function (motohawk_sfun_code_cover): '<S135>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(9);
      }

      /* End of Outputs for SubSystem: '<S134>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S134>/OldValue' incorporates:
       *  ActionPort: '<S136>/Action Port'
       */
      Mooventure2016_Rev5_B.s76_Torque_Direction = -1.0;

      /* S-Function (motohawk_sfun_code_cover): '<S136>/motohawk_code_coverage' */
      /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/Reverse/motohawk_override_abs4/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(10);
      }

      /* End of Outputs for SubSystem: '<S134>/OldValue' */
    }

    /* End of If: '<S134>/If' */
  } else {
    if (Mooventure2016_Rev5_DWork.s76_Reverse_MODE) {
      /* Disable for Outport: '<S120>/IPT_Torque' */
      Mooventure2016_Rev5_B.s76_Torque_Direction = 0.0;
      Mooventure2016_Rev5_DWork.s76_Reverse_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S76>/Reverse' */
  /* S-Function Block: <S203>/motohawk_ain4 Resource: Throttle_Position */
  Mooventure2016_Rev5_B.s203_Throttle_Position =
    Throttle_Position_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* S-Function (motohawk_sfun_read_canmsg): '<S203>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4495p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4495p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s203_AgeCount_j + 1) >
        Mooventure2016_Rev5_B.s203_AgeCount_j)
      Mooventure2016_Rev5_B.s203_AgeCount_j++;
    if (msg_valid) {
      uint16_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      Mooventure2016_Rev5_B.s203_Brake_Position = (real_T) tmp0;
      Mooventure2016_Rev5_B.s203_AgeCount_j = 0;
    }
  }

  /* UnitDelay: '<S261>/Unit Delay2' */
  rtb_UnitDelay2_p = Mooventure2016_Rev5_DWork.s261_UnitDelay2_DSTATE;

  /* S-Function Block: <S270>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s270_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_h = ((real_T) delta) * 0.000001;
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S200>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4018p0004_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4018p0004_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s200_AgeCount + 1) >
        Mooventure2016_Rev5_B.s200_AgeCount)
      Mooventure2016_Rev5_B.s200_AgeCount++;
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
      Mooventure2016_Rev5_B.s200_JCS_PackIdentifier = (real_T) tmp0;
      Mooventure2016_Rev5_B.s200_PackState = (real_T) tmp1;
      Mooventure2016_Rev5_B.s200_PrechargeState = (real_T) tmp2;
      Mooventure2016_Rev5_B.s200_HVIL_Status = (real_T) tmp3;
      Mooventure2016_Rev5_B.s200_IsolationStatus = (real_T) tmp4;
      Mooventure2016_Rev5_B.s200_WakeSignal = (real_T) tmp5;
      Mooventure2016_Rev5_B.s200_SleepInhibited = (real_T) tmp6;
      Mooventure2016_Rev5_B.s200_CellBalanceingActive = (boolean_T) tmp7;
      Mooventure2016_Rev5_B.s200_MILState = (real_T) tmp8;
      Mooventure2016_Rev5_B.s200_StateOfCharge = ((real_T) tmp9) / ((real_T) 2);
      Mooventure2016_Rev5_B.s200_PS_RollingCounter = (real_T) tmp10;
      Mooventure2016_Rev5_B.s200_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S261>/Relational Operator' incorporates:
   *  Constant: '<S261>/Constant'
   */
  rtb_RelationalOperator_b = (Mooventure2016_Rev5_B.s200_StateOfCharge == 0.0);

  /* Switch: '<S270>/Switch' incorporates:
   *  Constant: '<S270>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S270>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S270>/motohawk_delta_time'
   *  Sum: '<S270>/Sum'
   */
  if (rtb_RelationalOperator_b) {
    rtb_Switch_m = rtb_motohawk_delta_time_h + SOCTimer_DataStore();
  } else {
    rtb_Switch_m = 0.0;
  }

  /* End of Switch: '<S270>/Switch' */
  /* RelationalOperator: '<S261>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S261>/motohawk_calibration'
   */
  rtb_RelationalOperator1_i = (rtb_Switch_m >= (SOC_Filter_Time_DataStore()));

  /* UnitDelay: '<S261>/Unit Delay1' */
  rtb_UnitDelay1_k = Mooventure2016_Rev5_DWork.s261_UnitDelay1_DSTATE;

  /* Stateflow: '<S261>/Chart' */
  Mooventure2016_Rev5_Chart_f(rtb_UnitDelay2_p, rtb_RelationalOperator1_i,
    rtb_UnitDelay1_k, rtb_RelationalOperator_b,
    &Mooventure2016_Rev5_B.s261_sf_Chart,
    &Mooventure2016_Rev5_DWork.s261_sf_Chart);

  /* S-Function Block: <S269>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s269_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S269>/Product' incorporates:
   *  MinMax: '<S269>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S269>/motohawk_calibration'
   */
  rtb_Switch_hx /= (rtb_Switch_hx >= (SOCFilt_DataStore())) || rtIsNaN
    ((SOCFilt_DataStore())) ? rtb_Switch_hx : (SOCFilt_DataStore());

  /* Sum: '<S271>/Sum1' incorporates:
   *  Constant: '<S271>/Constant'
   *  Product: '<S271>/Product'
   *  Product: '<S271>/Product1'
   *  Sum: '<S271>/Sum'
   *  UnitDelay: '<S271>/Unit Delay'
   */
  Mooventure2016_Rev5_B.s271_Sum1 = (1.0 - rtb_Switch_hx) *
    Mooventure2016_Rev5_DWork.s271_UnitDelay_DSTATE +
    Mooventure2016_Rev5_B.s261_sf_Chart.s268_val * rtb_Switch_hx;

  /* Outputs for Atomic SubSystem: '<S75>/Embedded MATLAB Function' */
  /* MATLAB Function Block: '<S111>/Embedded MATLAB Function' incorporates:
   *  Logic: '<S75>/Logical Operator5'
   *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_data_read): '<S75>/motohawk_data_read'
   */

  /* MATLAB Function 'Foreground/Control/Hybrid Control Code/Hybrid state limits1/Embedded MATLAB Function/Embedded MATLAB Function': '<S112>:1' */
  if ((!Torque_Enable_DataStore()) || (Mooventure2016_Rev5_B.s271_Sum1 <=
       (SafetyModeEnterSOC_DataStore()))) {
    /* '<S112>:1:2' */
    /* '<S112>:1:3' */
    rtb_UnitDelay_o = 0.0;
  } else if ((Mooventure2016_Rev5_B.s271_Sum1 > (SafetyModeEnterSOC_DataStore()))
             && (Mooventure2016_Rev5_B.s271_Sum1 <= (CrawlHomeEnterSOC_DataStore
               ()))) {
    /* '<S112>:1:4' */
    /* '<S112>:1:5' */
    rtb_UnitDelay_o = 1.0;
  } else if ((rtb_UnitDelay_o == 1.0) && (Mooventure2016_Rev5_B.s271_Sum1 >
              (CrawlHomeEnterSOC_DataStore()))) {
    /* '<S112>:1:6' */
    /* '<S112>:1:7' */
    rtb_UnitDelay_o = 2.0;
  } else {
    /* '<S112>:1:9' */
    rtb_UnitDelay_o = 3.0;
  }

  /* End of MATLAB Function Block: '<S111>/Embedded MATLAB Function' */
  /* End of Outputs for SubSystem: '<S75>/Embedded MATLAB Function' */

  /* MATLAB Function Block: '<S9>/Embedded MATLAB Function' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S9>/motohawk_fault_action'
   */

  /* MATLAB Function 'Foreground/Control/Hybrid Control Code/Embedded MATLAB Function': '<S74>:1' */
  if (GetFaultActionStatus(13)) {
    /* '<S74>:1:2' */
    /* '<S74>:1:3' */
    Mooventure2016_Rev5_B.s74_state = 1.0;
  } else {
    /* '<S74>:1:5' */
    Mooventure2016_Rev5_B.s74_state = rtb_UnitDelay_o;
  }

  /* End of MATLAB Function Block: '<S9>/Embedded MATLAB Function' */
  /* If: '<S80>/If' incorporates:
   *  Inport: '<S143>/In1'
   *  Inport: '<S144>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S80>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S80>/override_enable'
   */
  if ((HybridStateOverride_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S80>/NewValue' incorporates:
     *  ActionPort: '<S143>/Action Port'
     */
    rtb_Merge_l = (HybridStateOverride_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S143>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(13);
    }

    /* End of Outputs for SubSystem: '<S80>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S80>/OldValue' incorporates:
     *  ActionPort: '<S144>/Action Port'
     */
    rtb_Merge_l = Mooventure2016_Rev5_B.s74_state;

    /* S-Function (motohawk_sfun_code_cover): '<S144>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(14);
    }

    /* End of Outputs for SubSystem: '<S80>/OldValue' */
  }

  /* End of If: '<S80>/If' */

  /* SwitchCase: '<S9>/Switch Case1' incorporates:
   *  Constant: '<S71>/Constant'
   *  Constant: '<S73>/Constant'
   *  Constant: '<S77>/Constant'
   *  Constant: '<S78>/Constant'
   *  Constant: '<S78>/Constant2'
   */
  switch ((int32_T)rtb_Merge_l) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S9>/Safety' incorporates:
     *  ActionPort: '<S78>/Action Port'
     */
    Mooventure2016_Rev5_B.s9_motor_Torque = 0.0;
    Mooventure2016_Rev5_B.s9_motor_Enable = 0.0;

    /* End of Outputs for SubSystem: '<S9>/Safety' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S9>/CrawlHomeMode' incorporates:
     *  ActionPort: '<S71>/Action Port'
     */
    /* DataTypeConversion: '<S71>/Data Type Conversion' */
    rtb_motor_Torque_g = (real_T)Mooventure2016_Rev5_B.s203_Throttle_Position;

    /* MATLAB Function Block: '<S71>/Gas Pedal Scaling' */
    Mooventure2016_Rev5_GasPedalScaling(rtb_motor_Torque_g,
      &Mooventure2016_Rev5_B.s71_sf_GasPedalScaling);

    /* S-Function Block: <S71>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (safetyMode_AccelIn_DataStore()) =
        Mooventure2016_Rev5_B.s71_sf_GasPedalScaling.s83_throttleOut;
      (safetyMode_AccelIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s71_sf_GasPedalScaling.s83_throttleOut,
         (safetyMode_AccelIdxArr_DataStore()), 21,
         (safetyMode_AccelIdx_DataStore()));
      rtb_motohawk_prelookup_m = (safetyMode_AccelIdx_DataStore());
    }

    /* S-Function Block: <S71>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_d = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_m, (real_T *)
         ((safetyMode_Accel_MapTbl_DataStore())), 21);
      (safetyMode_Accel_Map_DataStore()) = rtb_motohawk_interpolation_1d_d;
    }

    /* MATLAB Function Block: '<S71>/Brake Pedal Scaling' */
    Mooventure2016_Rev5_BrakePedalScaling
      (Mooventure2016_Rev5_B.s203_Brake_Position, rtb_Compare_nm,
       &Mooventure2016_Rev5_B.s71_sf_BrakePedalScaling);

    /* S-Function Block: <S71>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (safetyMode_BrakeIn_DataStore()) =
        Mooventure2016_Rev5_B.s71_sf_BrakePedalScaling.s81_brakeOut;
      (safetyMode_BrakeIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s71_sf_BrakePedalScaling.s81_brakeOut,
         (safetyMode_BrakeIdxArr_DataStore()), 21,
         (safetyMode_BrakeIdx_DataStore()));
      rtb_motohawk_prelookup1_o = (safetyMode_BrakeIdx_DataStore());
    }

    /* S-Function Block: <S71>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_n = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_o, (real_T *)
         ((safetyMode_Brake_MapTbl_DataStore())), 21);
      (safetyMode_Brake_Map_DataStore()) = rtb_motohawk_interpolation_1d1_n;
    }

    /* Product: '<S71>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S71>/motohawk_calibration7'
     */
    rtb_Product_j = (RPM_to_Wheel_Speed_Multiplier_safetyMode_DataStore()) *
      Mooventure2016_Rev5_B.s331_Merge;

    /* Stateflow: '<S71>/Chart' */
    Mooventure2016_Rev5_Chart(rtb_motohawk_interpolation_1d_d,
      rtb_motohawk_interpolation_1d1_n, rtb_Product_j,
      (accelStart_Pedal_safetyMode_DataStore()),
      (accelEnd_Pedal_safetyMode_DataStore()),
      (brakeStart_Pedal_safetyMode_DataStore()),
      (brakeEnd_Pedal_safetyMode_DataStore()),
      (regenStart_Speed_safetyMode_DataStore()),
      (regenEnd_Speed_safetyMode_DataStore()), (dragTorque_safetyMode_DataStore()),
      &Mooventure2016_Rev5_B.s71_sf_Chart,
      &Mooventure2016_Rev5_DWork.s71_sf_Chart);

    /* Product: '<S71>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S71>/motohawk_calibration8'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s71_sf_Chart.s82_driveTorque *
      (driveMaxTorque_safetyMode_DataStore());

    /* Sum: '<S84>/Add' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration2'
     */
    rtb_UnitDelay_m = (CrawlHomeEnterSOC_DataStore()) -
      (SafetyModeEnterSOC_DataStore());

    /* Product: '<S84>/Divide' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration1'
     *  Sum: '<S84>/Sum'
     */
    rtb_UnitDelay_m = ((Mooventure2016_Rev5_B.s271_Sum1 -
                        (CrawlHomeEnterSOC_DataStore())) + rtb_UnitDelay_m) /
      rtb_UnitDelay_m;

    /* Product: '<S84>/Product' incorporates:
     *  Product: '<S71>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S71>/motohawk_calibration9'
     *  Saturate: '<S84>/Saturation'
     *  Sum: '<S71>/Sum'
     */
    Mooventure2016_Rev5_B.s9_motor_Torque =
      (Mooventure2016_Rev5_B.s71_sf_Chart.s82_regenTorque *
       (regenMaxTorque_safetyMode_DataStore()) + rtb_UnitDelay_o) *
      (rtb_UnitDelay_m >= 1.0 ? 1.0 : rtb_UnitDelay_m <= 0.0 ? 0.0 :
       rtb_UnitDelay_m);
    Mooventure2016_Rev5_B.s9_motor_Enable = 1.0;

    /* End of Outputs for SubSystem: '<S9>/CrawlHomeMode' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S9>/EcoMode' incorporates:
     *  ActionPort: '<S73>/Action Port'
     */
    /* DataTypeConversion: '<S73>/Data Type Conversion' */
    rtb_motor_Torque_p = (real_T)Mooventure2016_Rev5_B.s203_Throttle_Position;

    /* MATLAB Function Block: '<S73>/Gas Pedal Scaling' */
    Mooventure2016_Rev5_GasPedalScaling(rtb_motor_Torque_p,
      &Mooventure2016_Rev5_B.s73_sf_GasPedalScaling);

    /* S-Function Block: <S73>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (EcoMode_AccelIn_DataStore()) =
        Mooventure2016_Rev5_B.s73_sf_GasPedalScaling.s83_throttleOut;
      (EcoMode_AccelIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s73_sf_GasPedalScaling.s83_throttleOut,
         (EcoMode_AccelIdxArr_DataStore()), 21, (EcoMode_AccelIdx_DataStore()));
      rtb_motohawk_prelookup_f = (EcoMode_AccelIdx_DataStore());
    }

    /* S-Function Block: <S73>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_n = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_f, (real_T *) ((EcoMode_Accel_MapTbl_DataStore())),
         21);
      (EcoMode_Accel_Map_DataStore()) = rtb_motohawk_interpolation_1d_n;
    }

    /* MATLAB Function Block: '<S73>/Brake Pedal Scaling' */
    Mooventure2016_Rev5_BrakePedalScaling
      (Mooventure2016_Rev5_B.s203_Brake_Position, rtb_Compare_nm,
       &Mooventure2016_Rev5_B.s73_sf_BrakePedalScaling);

    /* S-Function Block: <S73>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (EcoMode_BrakeIn_DataStore()) =
        Mooventure2016_Rev5_B.s73_sf_BrakePedalScaling.s81_brakeOut;
      (EcoMode_BrakeIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s73_sf_BrakePedalScaling.s81_brakeOut,
         (EcoMode_BrakeIdxArr_DataStore()), 21, (EcoMode_BrakeIdx_DataStore()));
      rtb_motohawk_prelookup1_p = (EcoMode_BrakeIdx_DataStore());
    }

    /* S-Function Block: <S73>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_p = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_p, (real_T *) ((EcoMode_Brake_MapTbl_DataStore())),
         21);
      (EcoMode_Brake_Map_DataStore()) = rtb_motohawk_interpolation_1d1_p;
    }

    /* Product: '<S73>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S73>/motohawk_calibration7'
     */
    rtb_Product_le = (RPM_to_Wheel_Speed_Multiplier_ecoMode_DataStore()) *
      Mooventure2016_Rev5_B.s331_Merge;

    /* Stateflow: '<S73>/Chart' */
    Mooventure2016_Rev5_Chart(rtb_motohawk_interpolation_1d_n,
      rtb_motohawk_interpolation_1d1_p, rtb_Product_le,
      (accelStart_Pedal_ecoMode_DataStore()), (accelEnd_Pedal_ecoMode_DataStore()),
                              (brakeStart_Pedal_ecoMode_DataStore()),
      (brakeEnd_Pedal_ecoMode_DataStore()), (regenStart_Speed_ecoMode_DataStore()),
                              (regenEnd_Speed_ecoMode_DataStore()),
      (dragTorque_ecoMode_DataStore()), &Mooventure2016_Rev5_B.s73_sf_Chart,
      &Mooventure2016_Rev5_DWork.s73_sf_Chart);

    /* Product: '<S73>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S73>/motohawk_calibration8'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s73_sf_Chart.s82_driveTorque *
      (driveMaxTorque_ecoMode_DataStore());

    /* Sum: '<S73>/Sum' incorporates:
     *  Product: '<S73>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S73>/motohawk_calibration9'
     */
    Mooventure2016_Rev5_B.s9_motor_Torque =
      Mooventure2016_Rev5_B.s73_sf_Chart.s82_regenTorque *
      (regenMaxTorque_ecoMode_DataStore()) + rtb_UnitDelay_o;
    Mooventure2016_Rev5_B.s9_motor_Enable = 1.0;

    /* End of Outputs for SubSystem: '<S9>/EcoMode' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S9>/SUVMode' incorporates:
     *  ActionPort: '<S77>/Action Port'
     */
    /* DataTypeConversion: '<S77>/Data Type Conversion' */
    rtb_motor_Torque = (real_T)Mooventure2016_Rev5_B.s203_Throttle_Position;

    /* MATLAB Function Block: '<S77>/Gas Pedal Scaling' */
    Mooventure2016_Rev5_GasPedalScaling(rtb_motor_Torque,
      &Mooventure2016_Rev5_B.s77_sf_GasPedalScaling);

    /* S-Function Block: <S77>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (SUVMode_AccelIn_DataStore()) =
        Mooventure2016_Rev5_B.s77_sf_GasPedalScaling.s83_throttleOut;
      (SUVMode_AccelIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s77_sf_GasPedalScaling.s83_throttleOut,
         (SUVMode_AccelIdxArr_DataStore()), 21, (SUVMode_AccelIdx_DataStore()));
      rtb_motohawk_prelookup_h = (SUVMode_AccelIdx_DataStore());
    }

    /* S-Function Block: <S77>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_c = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_h, (real_T *) ((SUVMode_Accel_MapTbl_DataStore())),
         21);
      (SUVMode_Accel_Map_DataStore()) = rtb_motohawk_interpolation_1d_c;
    }

    /* MATLAB Function Block: '<S77>/Brake Pedal Scaling' */
    Mooventure2016_Rev5_BrakePedalScaling
      (Mooventure2016_Rev5_B.s203_Brake_Position, rtb_Compare_nm,
       &Mooventure2016_Rev5_B.s77_sf_BrakePedalScaling);

    /* S-Function Block: <S77>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (SUVMode_BrakeIn_DataStore()) =
        Mooventure2016_Rev5_B.s77_sf_BrakePedalScaling.s81_brakeOut;
      (SUVMode_BrakeIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s77_sf_BrakePedalScaling.s81_brakeOut,
         (SUVMode_BrakeIdxArr_DataStore()), 21, (SUVMode_BrakeIdx_DataStore()));
      rtb_motohawk_prelookup1 = (SUVMode_BrakeIdx_DataStore());
    }

    /* S-Function Block: <S77>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1, (real_T *) ((SUVMode_Brake_MapTbl_DataStore())),
         21);
      (SUVMode_Brake_Map_DataStore()) = rtb_motohawk_interpolation_1d1;
    }

    /* Product: '<S77>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration7'
     */
    rtb_Product_dp = (RPM_to_Wheel_Speed_Multiplier_SUVMode_DataStore()) *
      Mooventure2016_Rev5_B.s331_Merge;

    /* Stateflow: '<S77>/Chart' */
    Mooventure2016_Rev5_Chart(rtb_motohawk_interpolation_1d_c,
      rtb_motohawk_interpolation_1d1, rtb_Product_dp,
      (accelStart_Pedal_SUVMode_DataStore()), (accelEnd_Pedal_SUVMode_DataStore()),
                              (brakeStart_Pedal_SUVMode_DataStore()),
      (brakeEnd_Pedal_SUVMode_DataStore()), (regenStart_Speed_SUVMode_DataStore()),
                              (regenEnd_Speed_SUVMode_DataStore()),
      (dragTorque_SUVMode_DataStore()), &Mooventure2016_Rev5_B.s77_sf_Chart,
      &Mooventure2016_Rev5_DWork.s77_sf_Chart);

    /* Product: '<S77>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration8'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s77_sf_Chart.s82_driveTorque *
      (driveMaxTorque_SUVMode_DataStore());

    /* Sum: '<S77>/Sum' incorporates:
     *  Product: '<S77>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration9'
     */
    Mooventure2016_Rev5_B.s9_motor_Torque =
      Mooventure2016_Rev5_B.s77_sf_Chart.s82_regenTorque *
      (regenMaxTorque_SUVMode_DataStore()) + rtb_UnitDelay_o;
    Mooventure2016_Rev5_B.s9_motor_Enable = 1.0;

    /* End of Outputs for SubSystem: '<S9>/SUVMode' */
    break;
  }

  /* End of SwitchCase: '<S9>/Switch Case1' */

  /* Product: '<S76>/Product' */
  Mooventure2016_Rev5_B.s76_IPT_Torque_Request = rtb_Switch_h *
    Mooventure2016_Rev5_B.s76_Torque_Direction *
    Mooventure2016_Rev5_B.s9_motor_Torque;

  /* S-Function Block: <S118>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s118_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S118>/Product' incorporates:
   *  MinMax: '<S118>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration'
   */
  rtb_Switch_hx /= (rtb_Switch_hx >= (FiltConst_DataStore())) || rtIsNaN
    ((FiltConst_DataStore())) ? rtb_Switch_hx : (FiltConst_DataStore());

  /* Sum: '<S133>/Sum1' incorporates:
   *  Constant: '<S133>/Constant'
   *  Product: '<S133>/Product'
   *  Product: '<S133>/Product1'
   *  Sum: '<S133>/Sum'
   *  UnitDelay: '<S133>/Unit Delay'
   */
  rtb_Sum1 = (1.0 - rtb_Switch_hx) *
    Mooventure2016_Rev5_DWork.s133_UnitDelay_DSTATE +
    Mooventure2016_Rev5_B.s76_IPT_Torque_Request * rtb_Switch_hx;

  /* Saturate: '<S76>/Saturation' */
  Mooventure2016_Rev5_B.s76_Saturation = rtb_Sum1 >= 2500.0 ? 2500.0 : rtb_Sum1 <=
    -2500.0 ? -2500.0 : rtb_Sum1;

  /* If: '<S121>/If' incorporates:
   *  Inport: '<S137>/In1'
   *  Inport: '<S138>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S121>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S121>/override_enable'
   */
  if ((Torque_Request_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S121>/NewValue' incorporates:
     *  ActionPort: '<S137>/Action Port'
     */
    rtb_UnitDelay_m = (Torque_Request_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S137>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(11);
    }

    /* End of Outputs for SubSystem: '<S121>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S121>/OldValue' incorporates:
     *  ActionPort: '<S138>/Action Port'
     */
    rtb_UnitDelay_m = Mooventure2016_Rev5_B.s76_Saturation;

    /* S-Function (motohawk_sfun_code_cover): '<S138>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Hybrid Control Code/IPT/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(12);
    }

    /* End of Outputs for SubSystem: '<S121>/OldValue' */
  }

  /* End of If: '<S121>/If' */

  /* Switch: '<S87>/Switch' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S87>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S87>/motohawk_prelookup'
   */
  if (rtb_LogicalOperator5) {
    /* S-Function Block: <S87>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (Cruise_Control_PreIn_DataStore()) = Mooventure2016_Rev5_B.s105_MinMax1;
      (Cruise_Control_PreIdx_DataStore()) = TablePrelookup_real_T
        (Mooventure2016_Rev5_B.s105_MinMax1, (Cruise_Control_PreIdxArr_DataStore
          ()), 121, (Cruise_Control_PreIdx_DataStore()));
      rtb_motohawk_prelookup_k = (Cruise_Control_PreIdx_DataStore());
    }

    /* S-Function Block: <S87>/motohawk_interpolation_1d */
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

  /* End of Switch: '<S87>/Switch' */

  /* MATLAB Function Block: '<S79>/Torque Limiter' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration1'
   */

  /* MATLAB Function 'Foreground/Control/Hybrid Control Code/Traction Control/Torque Limiter': '<S142>:1' */
  if (fabs(rtb_UnitDelay_m) < (Traction_Control_Max_Torque_DataStore())) {
    /* '<S142>:1:3' */
    /* '<S142>:1:4' */
    rtb_UnitDelay_o = rtb_UnitDelay_m;
  } else if (fabs(rtb_UnitDelay_m) >= (Traction_Control_Max_Torque_DataStore()))
  {
    /* '<S142>:1:5' */
    /* '<S142>:1:6' */
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
    /* '<S142>:1:8' */
    rtb_UnitDelay_o = rtb_UnitDelay_m;
  }

  /* End of MATLAB Function Block: '<S79>/Torque Limiter' */
  /* Switch: '<S79>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration'
   */
  if ((Traction_Control_Enable_DataStore()) >= 1.0) {
    Mooventure2016_Rev5_B.s79_Switch = rtb_UnitDelay_o;
  } else {
    Mooventure2016_Rev5_B.s79_Switch = rtb_UnitDelay_m;
  }

  /* End of Switch: '<S79>/Switch' */
  /* If: '<S377>/If' incorporates:
   *  Inport: '<S385>/In1'
   *  Inport: '<S386>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S377>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S377>/override_enable'
   */
  if ((ACC_torq_rqstd_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S377>/NewValue' incorporates:
     *  ActionPort: '<S385>/Action Port'
     */
    rtb_Merge_c = (ACC_torq_rqstd_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S385>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(99);
    }

    /* End of Outputs for SubSystem: '<S377>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S377>/OldValue' incorporates:
     *  ActionPort: '<S386>/Action Port'
     */
    rtb_Merge_c = Mooventure2016_Rev5_B.s79_Switch;

    /* S-Function (motohawk_sfun_code_cover): '<S386>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(100);
    }

    /* End of Outputs for SubSystem: '<S377>/OldValue' */
  }

  /* End of If: '<S377>/If' */

  /* Abs: '<S367>/Abs' */
  rtb_Switch_hx = fabs(Mooventure2016_Rev5_B.s79_Switch);

  /* Product: '<S367>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S367>/motohawk_calibration'
   */
  Mooventure2016_Rev5_B.s367_Pct_whl_trq_desired = rtb_Switch_hx /
    (Max_Motor_Torque_DataStore());

  /* If: '<S378>/If' incorporates:
   *  Inport: '<S387>/In1'
   *  Inport: '<S388>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S378>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S378>/override_enable'
   */
  if ((Pct_whl_trq_desired_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S378>/NewValue' incorporates:
     *  ActionPort: '<S387>/Action Port'
     */
    rtb_Merge_lu = (Pct_whl_trq_desired_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S387>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(101);
    }

    /* End of Outputs for SubSystem: '<S378>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S378>/OldValue' incorporates:
     *  ActionPort: '<S388>/Action Port'
     */
    rtb_Merge_lu = Mooventure2016_Rev5_B.s367_Pct_whl_trq_desired;

    /* S-Function (motohawk_sfun_code_cover): '<S388>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(102);
    }

    /* End of Outputs for SubSystem: '<S378>/OldValue' */
  }

  /* End of If: '<S378>/If' */

  /* MATLAB Function Block: '<S367>/Data Correction Motor ABS' */
  Mooventure2016_Rev5_DataCorrectionMotorFault
    (Mooventure2016_Rev5_B.s205_IPT_WheelTorqueDelivered,
     &Mooventure2016_Rev5_B.s367_sf_DataCorrectionMotorABS);

  /* If: '<S379>/If' incorporates:
   *  Inport: '<S389>/In1'
   *  Inport: '<S390>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S379>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S379>/override_enable'
   */
  if ((Power_train_torq_actual_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S379>/NewValue' incorporates:
     *  ActionPort: '<S389>/Action Port'
     */
    rtb_Merge_ny = (Power_train_torq_actual_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S389>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(103);
    }

    /* End of Outputs for SubSystem: '<S379>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S379>/OldValue' incorporates:
     *  ActionPort: '<S390>/Action Port'
     */
    rtb_Merge_ny =
      Mooventure2016_Rev5_B.s367_sf_DataCorrectionMotorABS.s65_torqueOut;

    /* S-Function (motohawk_sfun_code_cover): '<S390>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(104);
    }

    /* End of Outputs for SubSystem: '<S379>/OldValue' */
  }

  /* End of If: '<S379>/If' */

  /* MATLAB Function Block: '<S367>/Shift Position Conditioner' */

  /* MATLAB Function 'Foreground/Outputs/ABS Outputs/Shift Position Conditioner': '<S376>:1' */
  if (Mooventure2016_Rev5_B.s300_posOut == 1.0) {
    /* '<S376>:1:3' */
    /* '<S376>:1:4' */
    Mooventure2016_Rev5_B.s376_dirOut = 0.0;
  } else {
    /* '<S376>:1:6' */
    Mooventure2016_Rev5_B.s376_dirOut = 1.0;
  }

  /* End of MATLAB Function Block: '<S367>/Shift Position Conditioner' */
  /* If: '<S380>/If' incorporates:
   *  Inport: '<S391>/In1'
   *  Inport: '<S392>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S380>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S380>/override_enable'
   */
  if ((prndl_dir_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S380>/NewValue' incorporates:
     *  ActionPort: '<S391>/Action Port'
     */
    rtb_Merge_e = (prndl_dir_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S391>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(105);
    }

    /* End of Outputs for SubSystem: '<S380>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S380>/OldValue' incorporates:
     *  ActionPort: '<S392>/Action Port'
     */
    rtb_Merge_e = Mooventure2016_Rev5_B.s376_dirOut;

    /* S-Function (motohawk_sfun_code_cover): '<S392>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(106);
    }

    /* End of Outputs for SubSystem: '<S380>/OldValue' */
  }

  /* End of If: '<S380>/If' */

  /* If: '<S381>/If' incorporates:
   *  Inport: '<S393>/In1'
   *  Inport: '<S394>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S367>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S381>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S381>/override_enable'
   */
  if ((regen_torq_limit_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S381>/NewValue' incorporates:
     *  ActionPort: '<S393>/Action Port'
     */
    rtb_Merge_nz = (regen_torq_limit_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S393>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(107);
    }

    /* End of Outputs for SubSystem: '<S381>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S381>/OldValue' incorporates:
     *  ActionPort: '<S394>/Action Port'
     */
    rtb_Merge_nz = (Max_Regen_Torque_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S394>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(108);
    }

    /* End of Outputs for SubSystem: '<S381>/OldValue' */
  }

  /* End of If: '<S381>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S367>/Send CAN Messages' */
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

  /* If: '<S383>/If' incorporates:
   *  Inport: '<S397>/In1'
   *  Inport: '<S398>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S367>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S383>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S383>/override_enable'
   */
  if ((Commanded_gen_torq_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S383>/NewValue' incorporates:
     *  ActionPort: '<S397>/Action Port'
     */
    rtb_Merge_o = (Commanded_gen_torq_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S397>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(111);
    }

    /* End of Outputs for SubSystem: '<S383>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S383>/OldValue' incorporates:
     *  ActionPort: '<S398>/Action Port'
     */
    rtb_Merge_o = (Commanded_gen_trq_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S398>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(112);
    }

    /* End of Outputs for SubSystem: '<S383>/OldValue' */
  }

  /* End of If: '<S383>/If' */

  /* Product: '<S367>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S367>/motohawk_calibration4'
   */
  Mooventure2016_Rev5_B.s367_Commanded_mot_torq =
    Mooventure2016_Rev5_B.s79_Switch / (Commanded_motor_trq_div_DataStore());

  /* If: '<S384>/If' incorporates:
   *  Inport: '<S399>/In1'
   *  Inport: '<S400>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S384>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S384>/override_enable'
   */
  if ((Commanded_motor_torq_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S384>/NewValue' incorporates:
     *  ActionPort: '<S399>/Action Port'
     */
    rtb_Merge_er = (Commanded_motor_torq_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S399>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(113);
    }

    /* End of Outputs for SubSystem: '<S384>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S384>/OldValue' incorporates:
     *  ActionPort: '<S400>/Action Port'
     */
    rtb_Merge_er = Mooventure2016_Rev5_B.s367_Commanded_mot_torq;

    /* S-Function (motohawk_sfun_code_cover): '<S400>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(114);
    }

    /* End of Outputs for SubSystem: '<S384>/OldValue' */
  }

  /* End of If: '<S384>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S367>/Send CAN Messages2' */
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

  /* S-Function (motohawk_sfun_probe): '<S367>/motohawk_probe4' */
  (regen_torq_limit_prb_DataStore()) = (Max_Regen_Torque_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S367>/motohawk_probe6' */
  (Commanded_gen_torq_Prb_DataStore()) = (Commanded_gen_trq_DataStore());

  /* If: '<S382>/If' incorporates:
   *  Inport: '<S395>/In1'
   *  Inport: '<S396>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S367>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S382>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S382>/override_enable'
   */
  if ((Engine_On_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S382>/NewValue' incorporates:
     *  ActionPort: '<S395>/Action Port'
     */
    rtb_Merge_a = (Engine_On_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S395>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(109);
    }

    /* End of Outputs for SubSystem: '<S382>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S382>/OldValue' incorporates:
     *  ActionPort: '<S396>/Action Port'
     */
    rtb_Merge_a = (Engine_On_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S396>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/ABS Outputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(110);
    }

    /* End of Outputs for SubSystem: '<S382>/OldValue' */
  }

  /* End of If: '<S382>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S367>/Send CAN Messages1' */
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

  /* S-Function (motohawk_sfun_probe): '<S367>/motohawk_probe5' */
  (Engine_On_Prb_DataStore()) = (Engine_On_DataStore());

  /* Logic: '<S368>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S368>/motohawk_calibration1'
   */
  rtb_Ignition = !((Batt_Ign_Cal_DataStore()) != 0.0);

  /* UnitDelay: '<S262>/Unit Delay2' */
  rtb_UnitDelay2_g = Mooventure2016_Rev5_DWork.s262_UnitDelay2_DSTATE;

  /* S-Function Block: <S273>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s273_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_f = ((real_T) delta) * 0.000001;
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S200>/Read CAN Message3' */
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
      Mooventure2016_Rev5_B.s200_BatteryVoltage = ((real_T) tmp0) / ((real_T) 10);
      Mooventure2016_Rev5_B.s200_BatteryCurrent = (((real_T) tmp1) / ((real_T)
        10)) + ((real_T) -500);
      Mooventure2016_Rev5_B.s200_BusVoltage = ((real_T) tmp2) / ((real_T) 10);
      Mooventure2016_Rev5_B.s200_PVC_RollingCounter = (real_T) tmp3;
    }
  }

  /* RelationalOperator: '<S262>/Relational Operator' incorporates:
   *  Constant: '<S262>/Constant'
   */
  rtb_RelationalOperator_p = (Mooventure2016_Rev5_B.s200_BatteryVoltage == 0.0);

  /* Switch: '<S273>/Switch' incorporates:
   *  Constant: '<S273>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S273>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S273>/motohawk_delta_time'
   *  Sum: '<S273>/Sum'
   */
  if (rtb_RelationalOperator_p) {
    rtb_Switch_hx = rtb_motohawk_delta_time_f + VTimer_DataStore();
  } else {
    rtb_Switch_hx = 0.0;
  }

  /* End of Switch: '<S273>/Switch' */
  /* RelationalOperator: '<S262>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S262>/motohawk_calibration'
   */
  rtb_RelationalOperator1_iq = (rtb_Switch_hx >= (V_Filter_Time_DataStore()));

  /* UnitDelay: '<S262>/Unit Delay1' */
  rtb_UnitDelay1_i = Mooventure2016_Rev5_DWork.s262_UnitDelay1_DSTATE;

  /* Stateflow: '<S262>/Chart' */
  Mooventure2016_Rev5_Chart_f(rtb_UnitDelay2_g, rtb_RelationalOperator1_iq,
    rtb_UnitDelay1_i, rtb_RelationalOperator_p,
    &Mooventure2016_Rev5_B.s262_sf_Chart,
    &Mooventure2016_Rev5_DWork.s262_sf_Chart);

  /* If: '<S267>/If' incorporates:
   *  Inport: '<S282>/In1'
   *  Inport: '<S283>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S267>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S267>/override_enable'
   */
  if ((Battery_Voltage_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S267>/NewValue' incorporates:
     *  ActionPort: '<S282>/Action Port'
     */
    Mooventure2016_Rev5_B.s267_Merge = (Battery_Voltage_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S282>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(55);
    }

    /* End of Outputs for SubSystem: '<S267>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S267>/OldValue' incorporates:
     *  ActionPort: '<S283>/Action Port'
     */
    Mooventure2016_Rev5_B.s267_Merge =
      Mooventure2016_Rev5_B.s262_sf_Chart.s268_val;

    /* S-Function (motohawk_sfun_code_cover): '<S283>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(56);
    }

    /* End of Outputs for SubSystem: '<S267>/OldValue' */
  }

  /* End of If: '<S267>/If' */

  /* Logic: '<S6>/Logical Operator2' incorporates:
   *  Constant: '<S6>/Constant'
   *  RelationalOperator: '<S6>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S6>/motohawk_calibration'
   */
  rtb_LogicalOperator2_f = ((Automatic_Battery_Bootup_DataStore()) &&
    (Mooventure2016_Rev5_B.s267_Merge > 50.0));

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
   *  Inport: '<S18>/In1'
   *  Inport: '<S19>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S15>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S15>/override_enable'
   */
  if ((Shutdown_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S15>/NewValue' incorporates:
     *  ActionPort: '<S18>/Action Port'
     */
    Mooventure2016_Rev5_B.s15_Merge = (Shutdown_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S18>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Battery/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(1);
    }

    /* End of Outputs for SubSystem: '<S15>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S15>/OldValue' incorporates:
     *  ActionPort: '<S19>/Action Port'
     */
    Mooventure2016_Rev5_B.s15_Merge = rtb_LogicalOperator5;

    /* S-Function (motohawk_sfun_code_cover): '<S19>/motohawk_code_coverage' */
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
  Mooventure2016_Rev5_B.s14_LogicalOperator2 = ((rtb_LogicalOperator2_f &&
    (!(rtb_Switch_h >= (Contactor_Disable_Delay_DataStore())))));

  /* DataTypeConversion: '<S368>/Data Type Conversion' */
  Mooventure2016_Rev5_B.s368_ConnectCommand = (int8_T)
    Mooventure2016_Rev5_B.s14_LogicalOperator2;

  /* If: '<S401>/If' incorporates:
   *  Inport: '<S403>/In1'
   *  Inport: '<S404>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S401>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S401>/override_enable'
   */
  if ((Batt_Connect_Cmd_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S401>/NewValue' incorporates:
     *  ActionPort: '<S403>/Action Port'
     */
    rtb_Merge_iq = ((int8_T)(Batt_Connect_Cmd_ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S403>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(115);
    }

    /* End of Outputs for SubSystem: '<S401>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S401>/OldValue' incorporates:
     *  ActionPort: '<S404>/Action Port'
     */
    rtb_Merge_iq = Mooventure2016_Rev5_B.s368_ConnectCommand;

    /* S-Function (motohawk_sfun_code_cover): '<S404>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(116);
    }

    /* End of Outputs for SubSystem: '<S401>/OldValue' */
  }

  /* End of If: '<S401>/If' */

  /* Logic: '<S368>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S368>/motohawk_calibration'
   */
  Mooventure2016_Rev5_B.s368_IsolationMeasurementEnable =
    !((Batt_Isolation_det_Cal_DataStore()) != 0.0);

  /* If: '<S402>/If' incorporates:
   *  Inport: '<S405>/In1'
   *  Inport: '<S406>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S402>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S402>/override_enable'
   */
  if ((Isolation_Measure_Enable_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S402>/NewValue' incorporates:
     *  ActionPort: '<S405>/Action Port'
     */
    rtb_Merge_kj = (Isolation_Measure_Enable_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S405>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(117);
    }

    /* End of Outputs for SubSystem: '<S402>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S402>/OldValue' incorporates:
     *  ActionPort: '<S406>/Action Port'
     */
    rtb_Merge_kj = Mooventure2016_Rev5_B.s368_IsolationMeasurementEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S406>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Battery Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(118);
    }

    /* End of Outputs for SubSystem: '<S402>/OldValue' */
  }

  /* End of If: '<S402>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S368>/Send CAN Messages' */
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
        if (Mooventure2016_Rev5_ConstB.s368_OdometerValue < 0.0000000000F) {
          tmp3 = (uint32_T)(0UL);
        } else if (Mooventure2016_Rev5_ConstB.s368_OdometerValue >
                   1677721.5000000000F) {
          tmp3 = (uint32_T)(16777215UL);
        } else {
          tmp3 = (uint32_T)(Mooventure2016_Rev5_ConstB.s368_OdometerValue *
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

  /* S-Function Block: <S242>/motohawk_ain2 Resource: Radiator_Blend_Position */
  Mooventure2016_Rev5_B.s242_motohawk_ain2_o1 =
    Radiator_Blend_Position_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S247>/If' incorporates:
   *  Inport: '<S252>/In1'
   *  Inport: '<S253>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S247>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S247>/override_enable'
   */
  if ((Radiator_Blend_Valve_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S247>/NewValue' incorporates:
     *  ActionPort: '<S252>/Action Port'
     */
    rtb_Merge_bn = ((uint16_T)(Radiator_Blend_Valve_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S252>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(39);
    }

    /* End of Outputs for SubSystem: '<S247>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S247>/OldValue' incorporates:
     *  ActionPort: '<S253>/Action Port'
     */
    rtb_Merge_bn = Mooventure2016_Rev5_B.s242_motohawk_ain2_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S253>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(40);
    }

    /* End of Outputs for SubSystem: '<S247>/OldValue' */
  }

  /* End of If: '<S247>/If' */

  /* S-Function Block: <S246>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s246_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_pm = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S246>/Product' incorporates:
   *  MinMax: '<S246>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration'
   */
  rtb_Switch_pm /= (rtb_Switch_pm >= (RadLowPass_DataStore())) || rtIsNaN
    ((RadLowPass_DataStore())) ? rtb_Switch_pm : (RadLowPass_DataStore());

  /* Sum: '<S251>/Sum1' incorporates:
   *  Constant: '<S251>/Constant'
   *  DataTypeConversion: '<S242>/Data Type Conversion1'
   *  Product: '<S251>/Product'
   *  Product: '<S251>/Product1'
   *  Sum: '<S251>/Sum'
   *  UnitDelay: '<S251>/Unit Delay'
   */
  rtb_Sum1_b = (1.0 - rtb_Switch_pm) *
    Mooventure2016_Rev5_DWork.s251_UnitDelay_DSTATE + (real_T)rtb_Merge_bn *
    rtb_Switch_pm;

  /* S-Function (motohawk_sfun_read_canmsg): '<S204>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4553p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4553p0001_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s204_AgeCount + 1) >
        Mooventure2016_Rev5_B.s204_AgeCount)
      Mooventure2016_Rev5_B.s204_AgeCount++;
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
      Mooventure2016_Rev5_B.s204_InputVoltage = ((real_T) tmp0) * ((real_T) 2);
      Mooventure2016_Rev5_B.s204_OutputVoltage = ((real_T) tmp1) * ((real_T) 2);
      Mooventure2016_Rev5_B.s204_InputCurrentLimitMax = ((real_T) tmp2) /
        ((real_T) 2);
      Mooventure2016_Rev5_B.s204_InputCurrent = ((real_T) tmp3) / ((real_T) 2);
      Mooventure2016_Rev5_B.s204_OutputCurrent = ((real_T) tmp4) / ((real_T) 2);
      Mooventure2016_Rev5_B.s204_Eaton_HV_Charger_Temperature = ((real_T) tmp5)
        + ((real_T) -40);
      Mooventure2016_Rev5_B.s204_IgnitionStatus = (boolean_T) tmp6;
      Mooventure2016_Rev5_B.s204_ChargerState = (real_T) tmp7;
      Mooventure2016_Rev5_B.s204_FaultSeverityIndicator = (boolean_T) tmp8;
      Mooventure2016_Rev5_B.s204_MessageCounter = (real_T) tmp9;
      Mooventure2016_Rev5_B.s204_MessageChecksum = (real_T) tmp10;
      Mooventure2016_Rev5_B.s204_AgeCount = 0;
    }
  }

  /* If: '<S306>/If' incorporates:
   *  Inport: '<S318>/In1'
   *  Inport: '<S319>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S306>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S306>/override_enable'
   */
  if ((Eaton_HV_Charger_Temperature_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S306>/NewValue' incorporates:
     *  ActionPort: '<S318>/Action Port'
     */
    rtb_Merge_oq = (Eaton_HV_Charger_Temperature_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S318>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(63);
    }

    /* End of Outputs for SubSystem: '<S306>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S306>/OldValue' incorporates:
     *  ActionPort: '<S319>/Action Port'
     */
    rtb_Merge_oq = Mooventure2016_Rev5_B.s204_Eaton_HV_Charger_Temperature;

    /* S-Function (motohawk_sfun_code_cover): '<S319>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(64);
    }

    /* End of Outputs for SubSystem: '<S306>/OldValue' */
  }

  /* End of If: '<S306>/If' */

  /* RelationalOperator: '<S7>/1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration'
   */
  rtb_LogicalOperator5 = (rtb_Merge_oq >= (Pump_On_Temp_DataStore()));

  /* S-Function (motohawk_sfun_read_canmsg): '<S205>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4635p0005_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4635p0005_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s205_AgeCount_m + 1) >
        Mooventure2016_Rev5_B.s205_AgeCount_m)
      Mooventure2016_Rev5_B.s205_AgeCount_m++;
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
      Mooventure2016_Rev5_B.s205_IPT_InverterTemperature = ((real_T) tmp0) +
        ((real_T) -40);
      Mooventure2016_Rev5_B.s205_IPT_MotorTemperature = ((real_T) tmp1) +
        ((real_T) -40);
      Mooventure2016_Rev5_B.s205_IPT_MaxTorqueAvailGen = (real_T) tmp2;
      Mooventure2016_Rev5_B.s205_IPT_MaxTorqueAvailMotor = (real_T) tmp3;
      Mooventure2016_Rev5_B.s205_IPT_HVDCVoltage = (real_T) tmp4;
      Mooventure2016_Rev5_B.s205_IPT_ErrorCategory = (real_T) tmp5;
      Mooventure2016_Rev5_B.s205_IPT_IPTReady = (real_T) tmp6;
      Mooventure2016_Rev5_B.s205_IPT_IPTAwake = (real_T) tmp7;
      Mooventure2016_Rev5_B.s205_IPT_MotorReady = (boolean_T) tmp8;
      Mooventure2016_Rev5_B.s205_IPT_MaxWasteAvailable = ((real_T) tmp9) *
        ((real_T) 50);
      Mooventure2016_Rev5_B.s205_AgeCount_m = 0;
    }
  }

  /* RelationalOperator: '<S7>/2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration'
   */
  rtb_LogicalOperator2_f = (Mooventure2016_Rev5_B.s205_IPT_InverterTemperature >=
                            (Pump_On_Temp_DataStore()));

  /* S-Function (motohawk_sfun_read_canmsg): '<S200>/Read CAN Message4' */
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
      Mooventure2016_Rev5_B.s200_MaxCellVoltage = ((real_T) tmp0) / ((real_T)
        1000);
      Mooventure2016_Rev5_B.s200_MinCellVoltage = ((real_T) tmp1) / ((real_T)
        1000);
      Mooventure2016_Rev5_B.s200_MaxCellTemperature = (((real_T) tmp2) /
        ((real_T) 2)) + ((real_T) -40);
      Mooventure2016_Rev5_B.s200_MinCellTemperature = (((real_T) tmp3) /
        ((real_T) 2)) + ((real_T) -40);
      Mooventure2016_Rev5_B.s200_CoolantTemperature = (((real_T) tmp4) /
        ((real_T) 2)) + ((real_T) -40);
      Mooventure2016_Rev5_B.s200_DPI_RollingCounter = (real_T) tmp5;
    }
  }

  /* Logic: '<S7>/Logical Operator7' incorporates:
   *  Logic: '<S7>/Hot'
   *  RelationalOperator: '<S7>/3'
   *  RelationalOperator: '<S7>/4'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration'
   *  S-Function (motohawk_sfun_fault_action): '<S7>/motohawk_fault_action1'
   */
  rtb_LogicalOperator2_f = (GetFaultActionStatus(11) || (rtb_LogicalOperator5 ||
    rtb_LogicalOperator2_f || (Mooventure2016_Rev5_B.s200_MinCellTemperature >=
                              (Pump_On_Temp_DataStore())) ||
    (Mooventure2016_Rev5_B.s200_MaxCellTemperature >= (Pump_On_Temp_DataStore()))));

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
    (Mooventure2016_Rev5_B.s205_IPT_InverterTemperature <=
     (Too_Cold_Temp_DataStore())) ||
    (Mooventure2016_Rev5_B.s200_MinCellTemperature <= (Too_Cold_Temp_DataStore()))
    || (Mooventure2016_Rev5_B.s200_MaxCellTemperature <=
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
    (Mooventure2016_Rev5_B.s205_IPT_InverterTemperature >=
     (Warmed_Up_Temp_DataStore())) &&
    (Mooventure2016_Rev5_B.s200_MinCellTemperature >= (Warmed_Up_Temp_DataStore()))
    && (Mooventure2016_Rev5_B.s200_MaxCellTemperature >=
        (Warmed_Up_Temp_DataStore()))));

  /* S-Function (motohawk_sfun_read_canmsg): '<S203>/Read CAN Message6' */
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
      Mooventure2016_Rev5_B.s203_DRIVER_1 = (real_T) tmp0;
      Mooventure2016_Rev5_B.s203_DRIVER_10 = (real_T) tmp1;
      Mooventure2016_Rev5_B.s203_PASSENGER_1 = (real_T) tmp2;
      Mooventure2016_Rev5_B.s203_PASSENGER_10 = (real_T) tmp3;
    }
  }

  /* MATLAB Function Block: '<S203>/Embedded MATLAB Function1' */

  /* MATLAB Function 'Foreground/Inputs/Driver Inputs/Embedded MATLAB Function1': '<S301>:1' */
  /* '<S301>:1:3' */
  Mooventure2016_Rev5_B.s301_driverTemp = Mooventure2016_Rev5_B.s203_DRIVER_10 *
    10.0 + Mooventure2016_Rev5_B.s203_DRIVER_1;

  /* RelationalOperator: '<S7>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration10'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s301_driverTemp >
    (Heat_On_Driver_Threshold_DataStore()));

  /* S-Function Block: <S242>/motohawk_ain4 Resource: Heater_Temp */
  Mooventure2016_Rev5_B.s242_motohawk_ain4_o1 = Heater_Temp_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S248>/If' incorporates:
   *  Inport: '<S254>/In1'
   *  Inport: '<S255>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S248>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S248>/override_enable'
   */
  if ((Heater_Temp_Raw_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S248>/NewValue' incorporates:
     *  ActionPort: '<S254>/Action Port'
     */
    rtb_Merge_bn = ((uint16_T)(Heater_Temp_Raw_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S254>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(41);
    }

    /* End of Outputs for SubSystem: '<S248>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S248>/OldValue' incorporates:
     *  ActionPort: '<S255>/Action Port'
     */
    rtb_Merge_bn = Mooventure2016_Rev5_B.s242_motohawk_ain4_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S255>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(42);
    }

    /* End of Outputs for SubSystem: '<S248>/OldValue' */
  }

  /* End of If: '<S248>/If' */

  /* DataTypeConversion: '<S242>/Data Type Conversion2' */
  rtb_Heater_Temp_Raw = rtb_Merge_bn;

  /* MATLAB Function Block: '<S242>/Embedded MATLAB Function' */

  /* MATLAB Function 'Foreground/Inputs/Analog Inputs/Coolant/Embedded MATLAB Function': '<S244>:1' */
  /* '<S244>:1:3' */
  Mooventure2016_Rev5_B.s244_temp_reading = 0.4254 * (real_T)rtb_Heater_Temp_Raw
    - 31.404;

  /* S-Function (motohawk_sfun_data_read): '<S7>/motohawk_data_read2' */
  rtb_LogicalOperator5_m = Eaton_Plugged_In_DataStore();

  /* Product: '<S7>/Product' */
  rtb_Switch_pm = (real_T)rtb_LogicalOperator5_m * rtb_Merge_oq;

  /* MinMax: '<S7>/MinMax' */
  rtb_UnitDelay_m = (rtb_Switch_pm >=
                     Mooventure2016_Rev5_B.s205_IPT_InverterTemperature) ||
    rtIsNaN(Mooventure2016_Rev5_B.s205_IPT_InverterTemperature) ? rtb_Switch_pm :
    Mooventure2016_Rev5_B.s205_IPT_InverterTemperature;
  rtb_UnitDelay_m = (rtb_UnitDelay_m >=
                     Mooventure2016_Rev5_B.s200_MinCellTemperature) || rtIsNaN
    (Mooventure2016_Rev5_B.s200_MinCellTemperature) ? rtb_UnitDelay_m :
    Mooventure2016_Rev5_B.s200_MinCellTemperature;
  rtb_UnitDelay_o = (rtb_UnitDelay_m >=
                     Mooventure2016_Rev5_B.s200_MaxCellTemperature) || rtIsNaN
    (Mooventure2016_Rev5_B.s200_MaxCellTemperature) ? rtb_UnitDelay_m :
    Mooventure2016_Rev5_B.s200_MaxCellTemperature;

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
      if (Mooventure2016_Rev5_B.s244_temp_reading >
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
      if (Mooventure2016_Rev5_B.s244_temp_reading <
          (Heater_Core_Threshold_DataStore()) + 1.0) {
        /* Transition: '<S20>:120' */
        Mooventure2016_Rev5_DWork.s20_is_c12_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_HeatOn;
      } else if ((!rtb_LogicalOperator5) || (Mooventure2016_Rev5_B.s7_VeryCold &&
                  (!rtb_LogicalOperator2_f))) {
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
  if (rtb_LogicalOperator2_f) {
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
  /* If: '<S425>/If' incorporates:
   *  Inport: '<S454>/In1'
   *  Inport: '<S455>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S425>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S425>/override_enable'
   */
  if ((Radiator_Pos_Request_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S425>/NewValue' incorporates:
     *  ActionPort: '<S454>/Action Port'
     */
    rtb_Merge_i = (Radiator_Pos_Request_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S454>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(139);
    }

    /* End of Outputs for SubSystem: '<S425>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S425>/OldValue' incorporates:
     *  ActionPort: '<S455>/Action Port'
     */
    rtb_Merge_i = Mooventure2016_Rev5_B.s21_radBlend;

    /* S-Function (motohawk_sfun_code_cover): '<S455>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(140);
    }

    /* End of Outputs for SubSystem: '<S425>/OldValue' */
  }

  /* End of If: '<S425>/If' */

  /* MATLAB Function Block: '<S369>/Radiator Motion Control' */
  Mooventure2016_Rev5_HeaterCoreMotionControl(rtb_Sum1_b, rtb_Merge_i,
    (Coolant_Hyst_DataStore()),
    &Mooventure2016_Rev5_B.s369_sf_RadiatorMotionControl);

  /* DataTypeConversion: '<S369>/Data Type Conversion5' */
  Mooventure2016_Rev5_B.s369_DataTypeConversion5 =
    ((Mooventure2016_Rev5_B.s369_sf_RadiatorMotionControl.s413_motorEnable !=
      0.0));

  /* Logic: '<S369>/Logical Operator' incorporates:
   *  Constant: '<S407>/Constant'
   *  RelationalOperator: '<S407>/Compare'
   *  S-Function (motohawk_sfun_data_read): '<S369>/motohawk_data_read1'
   *  S-Function (motohawk_sfun_data_read): '<S369>/motohawk_data_read2'
   */
  rtb_LogicalOperator5_m = (Eaton_Plugged_In_DataStore() ||
    (Hybrid_State_DataStore() >= 2));

  /* S-Function Block: <S433>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s433_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_b = ((real_T) delta) * 0.000001;
  }

  /* UnitDelay: '<S7>/Unit Delay3' */
  rtb_LogicalOperator5 = Mooventure2016_Rev5_DWork.s7_UnitDelay3_DSTATE;

  /* Switch: '<S433>/Switch' incorporates:
   *  Constant: '<S433>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S433>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S433>/motohawk_delta_time'
   *  Sum: '<S433>/Sum'
   *  UnitDelay: '<S7>/Unit Delay3'
   */
  if (Mooventure2016_Rev5_DWork.s7_UnitDelay3_DSTATE) {
    rtb_Switch_pm = rtb_motohawk_delta_time_b + Heat4Timer_DataStore();
  } else {
    rtb_Switch_pm = 0.0;
  }

  /* End of Switch: '<S433>/Switch' */
  /* Logic: '<S411>/Logical Operator' incorporates:
   *  RelationalOperator: '<S411>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S369>/motohawk_calibration'
   */
  rtb_LogicalOperator_b2 = ((rtb_Switch_pm >= (Startup_Delay_DataStore())) &&
    rtb_LogicalOperator5);

  /* Logic: '<S369>/Logical Operator8' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S369>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s369_LogicalOperator8 = ((Vehicle_Ready_DataStore() &&
    rtb_LogicalOperator5_m && rtb_LogicalOperator_b2));

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
      if (rtb_LogicalOperator2_f) {
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
          (Mooventure2016_Rev5_B.s205_IPT_InverterTemperature <=
           (Pump_Off_Temp_DataStore())) &&
          (Mooventure2016_Rev5_B.s200_MinCellTemperature <=
           (Pump_Off_Temp_DataStore())) &&
          (Mooventure2016_Rev5_B.s200_MaxCellTemperature <=
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

  /* S-Function Block: <S242>/motohawk_ain1 Resource: Heater_Core_Blend_Position */
  Mooventure2016_Rev5_B.s242_motohawk_ain1_o1 =
    Heater_Core_Blend_Position_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S249>/If' incorporates:
   *  Inport: '<S256>/In1'
   *  Inport: '<S257>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S249>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S249>/override_enable'
   */
  if ((Heater_Core_Blend_Valve_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S249>/NewValue' incorporates:
     *  ActionPort: '<S256>/Action Port'
     */
    rtb_Merge_bn = ((uint16_T)(Heater_Core_Blend_Valve_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S256>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(43);
    }

    /* End of Outputs for SubSystem: '<S249>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S249>/OldValue' incorporates:
     *  ActionPort: '<S257>/Action Port'
     */
    rtb_Merge_bn = Mooventure2016_Rev5_B.s242_motohawk_ain1_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S257>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/Coolant/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(44);
    }

    /* End of Outputs for SubSystem: '<S249>/OldValue' */
  }

  /* End of If: '<S249>/If' */

  /* S-Function Block: <S245>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s245_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hc = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S245>/Product' incorporates:
   *  MinMax: '<S245>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S245>/motohawk_calibration'
   */
  rtb_Switch_hc /= (rtb_Switch_hc >= (HtrCoreLowPass_DataStore())) || rtIsNaN
    ((HtrCoreLowPass_DataStore())) ? rtb_Switch_hc : (HtrCoreLowPass_DataStore());

  /* Sum: '<S250>/Sum1' incorporates:
   *  Constant: '<S250>/Constant'
   *  DataTypeConversion: '<S242>/Data Type Conversion'
   *  Product: '<S250>/Product'
   *  Product: '<S250>/Product1'
   *  Sum: '<S250>/Sum'
   *  UnitDelay: '<S250>/Unit Delay'
   */
  rtb_Sum1_e = (1.0 - rtb_Switch_hc) *
    Mooventure2016_Rev5_DWork.s250_UnitDelay_DSTATE + (real_T)rtb_Merge_bn *
    rtb_Switch_hc;

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

  /* MATLAB Function Block: '<S7>/Embedded MATLAB Function1' incorporates:
   *  MinMax: '<S7>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_fault_action): '<S7>/motohawk_fault_action5'
   */

  /* MATLAB Function 'Foreground/Control/Coolant Control/Embedded MATLAB Function1': '<S22>:1' */
  if ((GetFaultActionStatus(5) == TRUE) || ((AC_On_FIXME_DataStore()) == TRUE))
  {
    /* '<S22>:1:3' */
    /* '<S22>:1:4' */
    rtb_UnitDelay_o = 3.0;
  } else if (rtb_UnitDelay_o < (Low_Threshold_DataStore())) {
    /* '<S22>:1:5' */
    /* '<S22>:1:6' */
    rtb_UnitDelay_o = 0.0;
  } else if ((rtb_UnitDelay_o >= (Low_Threshold_DataStore())) &&
             (rtb_UnitDelay_o < (Medium_Threshold_DataStore()))) {
    /* '<S22>:1:7' */
    /* '<S22>:1:8' */
    rtb_UnitDelay_o = 1.0;
  } else if ((rtb_UnitDelay_o >= (Medium_Threshold_DataStore())) &&
             (rtb_UnitDelay_o < (High_Threshold_DataStore()))) {
    /* '<S22>:1:9' */
    /* '<S22>:1:10' */
    rtb_UnitDelay_o = 2.0;
  } else if (rtb_UnitDelay_o >= (High_Threshold_DataStore())) {
    /* '<S22>:1:11' */
    /* '<S22>:1:12' */
    rtb_UnitDelay_o = 3.0;
  } else {
    /* '<S22>:1:14' */
    rtb_UnitDelay_o = 0.0;
  }

  /* End of MATLAB Function Block: '<S7>/Embedded MATLAB Function1' */

  /* MATLAB Function Block: '<S369>/Fan Adapter' */

  /* MATLAB Function 'Foreground/Outputs/Coolant Outputs/Fan Adapter': '<S412>:1' */
  if (rtb_UnitDelay_o == 1.0) {
    /* '<S412>:1:3' */
    /* '<S412>:1:4' */
    Mooventure2016_Rev5_B.s412_fan1 = 1.0;

    /* '<S412>:1:5' */
    Mooventure2016_Rev5_B.s412_fan2 = 0.0;

    /* '<S412>:1:6' */
    Mooventure2016_Rev5_B.s412_fan3 = 0.0;
  } else if (rtb_UnitDelay_o == 2.0) {
    /* '<S412>:1:7' */
    /* '<S412>:1:8' */
    Mooventure2016_Rev5_B.s412_fan1 = 0.0;

    /* '<S412>:1:9' */
    Mooventure2016_Rev5_B.s412_fan2 = 1.0;

    /* '<S412>:1:10' */
    Mooventure2016_Rev5_B.s412_fan3 = 0.0;
  } else if (rtb_UnitDelay_o == 3.0) {
    /* '<S412>:1:11' */
    /* '<S412>:1:12' */
    Mooventure2016_Rev5_B.s412_fan1 = 0.0;

    /* '<S412>:1:13' */
    Mooventure2016_Rev5_B.s412_fan2 = 1.0;

    /* '<S412>:1:14' */
    Mooventure2016_Rev5_B.s412_fan3 = 1.0;
  } else {
    /* '<S412>:1:16' */
    Mooventure2016_Rev5_B.s412_fan1 = 0.0;

    /* '<S412>:1:17' */
    Mooventure2016_Rev5_B.s412_fan2 = 0.0;

    /* '<S412>:1:18' */
    Mooventure2016_Rev5_B.s412_fan3 = 0.0;
  }

  /* End of MATLAB Function Block: '<S369>/Fan Adapter' */

  /* DataTypeConversion: '<S369>/Data Type Conversion4' */
  Mooventure2016_Rev5_B.s369_DataTypeConversion4 =
    ((Mooventure2016_Rev5_B.s369_sf_RadiatorMotionControl.s413_motorDirection !=
      0.0));

  /* If: '<S426>/If' incorporates:
   *  Inport: '<S456>/In1'
   *  Inport: '<S457>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S426>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S426>/override_enable'
   */
  if ((Heater_Core_Pos_Request_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S426>/NewValue' incorporates:
     *  ActionPort: '<S456>/Action Port'
     */
    rtb_Merge_ox = (Heater_Core_Pos_Request_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S456>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(141);
    }

    /* End of Outputs for SubSystem: '<S426>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S426>/OldValue' incorporates:
     *  ActionPort: '<S457>/Action Port'
     */
    rtb_Merge_ox = Mooventure2016_Rev5_B.s20_HeaterCoreBlend;

    /* S-Function (motohawk_sfun_code_cover): '<S457>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(142);
    }

    /* End of Outputs for SubSystem: '<S426>/OldValue' */
  }

  /* End of If: '<S426>/If' */

  /* MATLAB Function Block: '<S369>/Heater Core Motion Control' */
  Mooventure2016_Rev5_HeaterCoreMotionControl(rtb_Sum1_e, rtb_Merge_ox,
    (Coolant_Hyst_DataStore()),
    &Mooventure2016_Rev5_B.s369_sf_HeaterCoreMotionControl);

  /* DataTypeConversion: '<S369>/Data Type Conversion1' */
  Mooventure2016_Rev5_B.s369_DataTypeConversion1 =
    ((Mooventure2016_Rev5_B.s369_sf_HeaterCoreMotionControl.s413_motorEnable !=
      0.0));

  /* DataTypeConversion: '<S369>/Data Type Conversion2' */
  Mooventure2016_Rev5_B.s369_DataTypeConversion2 =
    ((Mooventure2016_Rev5_B.s369_sf_HeaterCoreMotionControl.s413_motorDirection
      != 0.0));

  /* S-Function Block: <S430>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s430_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_i = ((real_T) delta) * 0.000001;
  }

  /* UnitDelay: '<S7>/Unit Delay' */
  rtb_LogicalOperator5 = Mooventure2016_Rev5_DWork.s7_UnitDelay_DSTATE;

  /* Switch: '<S430>/Switch' incorporates:
   *  Constant: '<S430>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S430>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S430>/motohawk_delta_time'
   *  Sum: '<S430>/Sum'
   *  UnitDelay: '<S7>/Unit Delay'
   */
  if (Mooventure2016_Rev5_DWork.s7_UnitDelay_DSTATE) {
    rtb_Switch_hc = rtb_motohawk_delta_time_i + Heat1Timer_DataStore();
  } else {
    rtb_Switch_hc = 0.0;
  }

  /* End of Switch: '<S430>/Switch' */

  /* Logic: '<S408>/Logical Operator' incorporates:
   *  RelationalOperator: '<S408>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S369>/motohawk_calibration'
   */
  rtb_LogicalOperator_po = ((rtb_Switch_hc >= (Startup_Delay_DataStore())) &&
    rtb_LogicalOperator5);

  /* Logic: '<S369>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S369>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s369_LogicalOperator5 = ((Vehicle_Ready_DataStore() &&
    rtb_LogicalOperator5_m && rtb_LogicalOperator_po));

  /* S-Function Block: <S431>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s431_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_g = ((real_T) delta) * 0.000001;
  }

  /* UnitDelay: '<S7>/Unit Delay1' */
  rtb_LogicalOperator5 = Mooventure2016_Rev5_DWork.s7_UnitDelay1_DSTATE;

  /* Switch: '<S431>/Switch' incorporates:
   *  Constant: '<S431>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S431>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S431>/motohawk_delta_time'
   *  Sum: '<S431>/Sum'
   *  UnitDelay: '<S7>/Unit Delay1'
   */
  if (Mooventure2016_Rev5_DWork.s7_UnitDelay1_DSTATE) {
    rtb_Switch_p = rtb_motohawk_delta_time_g + Heat2Timer_DataStore();
  } else {
    rtb_Switch_p = 0.0;
  }

  /* End of Switch: '<S431>/Switch' */

  /* Logic: '<S409>/Logical Operator' incorporates:
   *  RelationalOperator: '<S409>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S369>/motohawk_calibration'
   */
  rtb_RelationalOperator2_id = ((rtb_Switch_p >= (Startup_Delay_DataStore())) &&
    rtb_LogicalOperator5);

  /* Logic: '<S369>/Logical Operator6' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S369>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s369_LogicalOperator6 = ((Vehicle_Ready_DataStore() &&
    rtb_LogicalOperator5_m && rtb_RelationalOperator2_id));

  /* S-Function Block: <S432>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s432_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_a = ((real_T) delta) * 0.000001;
  }

  /* UnitDelay: '<S7>/Unit Delay2' */
  rtb_LogicalOperator5 = Mooventure2016_Rev5_DWork.s7_UnitDelay2_DSTATE;

  /* Switch: '<S432>/Switch' incorporates:
   *  Constant: '<S432>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S432>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S432>/motohawk_delta_time'
   *  Sum: '<S432>/Sum'
   *  UnitDelay: '<S7>/Unit Delay2'
   */
  if (Mooventure2016_Rev5_DWork.s7_UnitDelay2_DSTATE) {
    rtb_Product2_f = rtb_motohawk_delta_time_a + Heat3Timer_DataStore();
  } else {
    rtb_Product2_f = 0.0;
  }

  /* End of Switch: '<S432>/Switch' */

  /* Logic: '<S410>/Logical Operator' incorporates:
   *  RelationalOperator: '<S410>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S369>/motohawk_calibration'
   */
  rtb_RelationalOperator_jg = ((rtb_Product2_f >= (Startup_Delay_DataStore())) &&
    rtb_LogicalOperator5);

  /* Logic: '<S369>/Logical Operator7' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S369>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s369_LogicalOperator7 = ((Vehicle_Ready_DataStore() &&
    rtb_LogicalOperator5_m && rtb_RelationalOperator_jg));

  /* If: '<S420>/If' incorporates:
   *  Inport: '<S444>/In1'
   *  Inport: '<S445>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S420>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S420>/override_enable'
   */
  if ((Fan2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S420>/NewValue' incorporates:
     *  ActionPort: '<S444>/Action Port'
     */
    rtb_UnitDelay_o = (Fan2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S444>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(129);
    }

    /* End of Outputs for SubSystem: '<S420>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S420>/OldValue' incorporates:
     *  ActionPort: '<S445>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s412_fan2;

    /* S-Function (motohawk_sfun_code_cover): '<S445>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs14/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(130);
    }

    /* End of Outputs for SubSystem: '<S420>/OldValue' */
  }

  /* End of If: '<S420>/If' */

  /* DataTypeConversion: '<S369>/Data Type Conversion' */
  rtb_DataTypeConversion_gi = (rtb_UnitDelay_o != 0.0);

  /* If: '<S421>/If' incorporates:
   *  Inport: '<S446>/In1'
   *  Inport: '<S447>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S421>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S421>/override_enable'
   */
  if ((Fan3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S421>/NewValue' incorporates:
     *  ActionPort: '<S446>/Action Port'
     */
    rtb_UnitDelay_o = (Fan3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S446>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(131);
    }

    /* End of Outputs for SubSystem: '<S421>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S421>/OldValue' incorporates:
     *  ActionPort: '<S447>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s412_fan3;

    /* S-Function (motohawk_sfun_code_cover): '<S447>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs15/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(132);
    }

    /* End of Outputs for SubSystem: '<S421>/OldValue' */
  }

  /* End of If: '<S421>/If' */

  /* DataTypeConversion: '<S369>/Data Type Conversion3' */
  rtb_DataTypeConversion3 = (rtb_UnitDelay_o != 0.0);

  /* If: '<S419>/If' incorporates:
   *  Inport: '<S442>/In1'
   *  Inport: '<S443>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S419>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S419>/override_enable'
   */
  if ((Fan1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S419>/NewValue' incorporates:
     *  ActionPort: '<S442>/Action Port'
     */
    rtb_UnitDelay_o = (Fan1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S442>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(127);
    }

    /* End of Outputs for SubSystem: '<S419>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S419>/OldValue' incorporates:
     *  ActionPort: '<S443>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s412_fan1;

    /* S-Function (motohawk_sfun_code_cover): '<S443>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs13/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(128);
    }

    /* End of Outputs for SubSystem: '<S419>/OldValue' */
  }

  /* End of If: '<S419>/If' */

  /* DataTypeConversion: '<S369>/Data Type Conversion6' */
  rtb_DataTypeConversion6 = (rtb_UnitDelay_o != 0.0);

  /* Saturate: '<S430>/Saturation' */
  rtb_Saturation = rtb_Switch_hc >= 86400.0 ? 86400.0 : rtb_Switch_hc <= 0.0 ?
    0.0 : rtb_Switch_hc;

  /* S-Function (motohawk_sfun_data_write): '<S430>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Heat1Timer */
  {
    Heat1Timer_DataStore() = rtb_Saturation;
  }

  /* Saturate: '<S431>/Saturation' */
  rtb_Saturation_i = rtb_Switch_p >= 86400.0 ? 86400.0 : rtb_Switch_p <= 0.0 ?
    0.0 : rtb_Switch_p;

  /* S-Function (motohawk_sfun_data_write): '<S431>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Heat2Timer */
  {
    Heat2Timer_DataStore() = rtb_Saturation_i;
  }

  /* Saturate: '<S432>/Saturation' */
  rtb_Saturation_l = rtb_Product2_f >= 86400.0 ? 86400.0 : rtb_Product2_f <= 0.0
    ? 0.0 : rtb_Product2_f;

  /* S-Function (motohawk_sfun_data_write): '<S432>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Heat3Timer */
  {
    Heat3Timer_DataStore() = rtb_Saturation_l;
  }

  /* Saturate: '<S433>/Saturation' */
  rtb_Saturation_f = rtb_Switch_pm >= 86400.0 ? 86400.0 : rtb_Switch_pm <= 0.0 ?
    0.0 : rtb_Switch_pm;

  /* S-Function (motohawk_sfun_data_write): '<S433>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Heat4Timer */
  {
    Heat4Timer_DataStore() = rtb_Saturation_f;
  }

  /* If: '<S415>/If' incorporates:
   *  Inport: '<S434>/In1'
   *  Inport: '<S435>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S415>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S415>/override_enable'
   */
  if ((Radiator_Motor_Enable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S415>/NewValue' incorporates:
     *  ActionPort: '<S434>/Action Port'
     */
    rtb_Merge_gd = (Radiator_Motor_Enable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S434>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(119);
    }

    /* End of Outputs for SubSystem: '<S415>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S415>/OldValue' incorporates:
     *  ActionPort: '<S435>/Action Port'
     */
    rtb_Merge_gd = Mooventure2016_Rev5_B.s369_DataTypeConversion5;

    /* S-Function (motohawk_sfun_code_cover): '<S435>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(120);
    }

    /* End of Outputs for SubSystem: '<S415>/OldValue' */
  }

  /* End of If: '<S415>/If' */

  /* If: '<S416>/If' incorporates:
   *  Inport: '<S436>/In1'
   *  Inport: '<S437>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S416>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S416>/override_enable'
   */
  if ((Heat4_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S416>/NewValue' incorporates:
     *  ActionPort: '<S436>/Action Port'
     */
    rtb_Merge_dm = (Heat4_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S436>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(121);
    }

    /* End of Outputs for SubSystem: '<S416>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S416>/OldValue' incorporates:
     *  ActionPort: '<S437>/Action Port'
     */
    rtb_Merge_dm = Mooventure2016_Rev5_B.s369_LogicalOperator8;

    /* S-Function (motohawk_sfun_code_cover): '<S437>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(122);
    }

    /* End of Outputs for SubSystem: '<S416>/OldValue' */
  }

  /* End of If: '<S416>/If' */

  /* If: '<S417>/If' incorporates:
   *  Inport: '<S438>/In1'
   *  Inport: '<S439>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S417>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S417>/override_enable'
   */
  if ((Radiator_Pump_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S417>/NewValue' incorporates:
     *  ActionPort: '<S438>/Action Port'
     */
    rtb_Merge_ay5 = (Radiator_Pump_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S438>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(123);
    }

    /* End of Outputs for SubSystem: '<S417>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S417>/OldValue' incorporates:
     *  ActionPort: '<S439>/Action Port'
     */
    rtb_Merge_ay5 = Mooventure2016_Rev5_B.s25_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S439>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(124);
    }

    /* End of Outputs for SubSystem: '<S417>/OldValue' */
  }

  /* End of If: '<S417>/If' */

  /* If: '<S418>/If' incorporates:
   *  Inport: '<S440>/In1'
   *  Inport: '<S441>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S418>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S418>/override_enable'
   */
  if ((Heater_Core_Pump_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S418>/NewValue' incorporates:
     *  ActionPort: '<S440>/Action Port'
     */
    rtb_Merge_lq = (Heater_Core_Pump_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S440>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(125);
    }

    /* End of Outputs for SubSystem: '<S418>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S418>/OldValue' incorporates:
     *  ActionPort: '<S441>/Action Port'
     */
    rtb_Merge_lq = Mooventure2016_Rev5_B.s24_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S441>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(126);
    }

    /* End of Outputs for SubSystem: '<S418>/OldValue' */
  }

  /* End of If: '<S418>/If' */

  /* If: '<S422>/If' incorporates:
   *  Inport: '<S448>/In1'
   *  Inport: '<S449>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S422>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S422>/override_enable'
   */
  if ((Radiator_Motor_Direction_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S422>/NewValue' incorporates:
     *  ActionPort: '<S448>/Action Port'
     */
    rtb_Merge_pi3 = (Radiator_Motor_Direction_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S448>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(133);
    }

    /* End of Outputs for SubSystem: '<S422>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S422>/OldValue' incorporates:
     *  ActionPort: '<S449>/Action Port'
     */
    rtb_Merge_pi3 = Mooventure2016_Rev5_B.s369_DataTypeConversion4;

    /* S-Function (motohawk_sfun_code_cover): '<S449>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(134);
    }

    /* End of Outputs for SubSystem: '<S422>/OldValue' */
  }

  /* End of If: '<S422>/If' */

  /* If: '<S423>/If' incorporates:
   *  Inport: '<S450>/In1'
   *  Inport: '<S451>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S423>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S423>/override_enable'
   */
  if ((Heater_Core_Motor_Enable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S423>/NewValue' incorporates:
     *  ActionPort: '<S450>/Action Port'
     */
    rtb_Merge_of1 = (Heater_Core_Motor_Enable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S450>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(135);
    }

    /* End of Outputs for SubSystem: '<S423>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S423>/OldValue' incorporates:
     *  ActionPort: '<S451>/Action Port'
     */
    rtb_Merge_of1 = Mooventure2016_Rev5_B.s369_DataTypeConversion1;

    /* S-Function (motohawk_sfun_code_cover): '<S451>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(136);
    }

    /* End of Outputs for SubSystem: '<S423>/OldValue' */
  }

  /* End of If: '<S423>/If' */

  /* If: '<S424>/If' incorporates:
   *  Inport: '<S452>/In1'
   *  Inport: '<S453>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S424>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S424>/override_enable'
   */
  if ((Heater_Core_Motor_Direction_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S424>/NewValue' incorporates:
     *  ActionPort: '<S452>/Action Port'
     */
    rtb_Merge_ln = (Heater_Core_Motor_Direction_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S452>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(137);
    }

    /* End of Outputs for SubSystem: '<S424>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S424>/OldValue' incorporates:
     *  ActionPort: '<S453>/Action Port'
     */
    rtb_Merge_ln = Mooventure2016_Rev5_B.s369_DataTypeConversion2;

    /* S-Function (motohawk_sfun_code_cover): '<S453>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(138);
    }

    /* End of Outputs for SubSystem: '<S424>/OldValue' */
  }

  /* End of If: '<S424>/If' */

  /* If: '<S427>/If' incorporates:
   *  Inport: '<S458>/In1'
   *  Inport: '<S459>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S427>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S427>/override_enable'
   */
  if ((Heat1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S427>/NewValue' incorporates:
     *  ActionPort: '<S458>/Action Port'
     */
    rtb_Merge_oqt = (Heat1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S458>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(143);
    }

    /* End of Outputs for SubSystem: '<S427>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S427>/OldValue' incorporates:
     *  ActionPort: '<S459>/Action Port'
     */
    rtb_Merge_oqt = Mooventure2016_Rev5_B.s369_LogicalOperator5;

    /* S-Function (motohawk_sfun_code_cover): '<S459>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(144);
    }

    /* End of Outputs for SubSystem: '<S427>/OldValue' */
  }

  /* End of If: '<S427>/If' */

  /* If: '<S428>/If' incorporates:
   *  Inport: '<S460>/In1'
   *  Inport: '<S461>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S428>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S428>/override_enable'
   */
  if ((Heat2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S428>/NewValue' incorporates:
     *  ActionPort: '<S460>/Action Port'
     */
    rtb_Merge_cg = (Heat2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S460>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(145);
    }

    /* End of Outputs for SubSystem: '<S428>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S428>/OldValue' incorporates:
     *  ActionPort: '<S461>/Action Port'
     */
    rtb_Merge_cg = Mooventure2016_Rev5_B.s369_LogicalOperator6;

    /* S-Function (motohawk_sfun_code_cover): '<S461>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(146);
    }

    /* End of Outputs for SubSystem: '<S428>/OldValue' */
  }

  /* End of If: '<S428>/If' */

  /* If: '<S429>/If' incorporates:
   *  Inport: '<S462>/In1'
   *  Inport: '<S463>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S429>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S429>/override_enable'
   */
  if ((Heat3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S429>/NewValue' incorporates:
     *  ActionPort: '<S462>/Action Port'
     */
    rtb_Merge_l1 = (Heat3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S462>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(147);
    }

    /* End of Outputs for SubSystem: '<S429>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S429>/OldValue' incorporates:
     *  ActionPort: '<S463>/Action Port'
     */
    rtb_Merge_l1 = Mooventure2016_Rev5_B.s369_LogicalOperator7;

    /* S-Function (motohawk_sfun_code_cover): '<S463>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Coolant Outputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(148);
    }

    /* End of Outputs for SubSystem: '<S429>/OldValue' */
  }

  /* End of If: '<S429>/If' */

  /* S-Function Block: <S12>/motohawk_din Resource: ESTOP2 */
  rtb_motohawk_din = ESTOP2_DigitalInput_Get();

  /* Logic: '<S12>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_din): '<S12>/motohawk_din'
   */
  rtb_LogicalOperator5_m = !rtb_motohawk_din;

  /* Logic: '<S12>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S12>/motohawk_data_read1'
   *  S-Function (motohawk_sfun_fault_action): '<S12>/motohawk_fault_action'
   */
  rtb_LogicalOperator5 = (rtb_LogicalOperator5_m || GetFaultActionStatus(7) ||
    Shutdown_Req_DataStore());

  /* Logic: '<S12>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S12>/motohawk_data_read'
   */
  rtb_LogicalOperator2_f = (Batt_Load_Enable_DataStore() ||
    ((Auto_Battery_Startup_DataStore()) != 0.0));

  /* If: '<S304>/If' incorporates:
   *  Inport: '<S314>/In1'
   *  Inport: '<S315>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S304>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S304>/override_enable'
   */
  if ((ChargerState_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S304>/NewValue' incorporates:
     *  ActionPort: '<S314>/Action Port'
     */
    rtb_Merge_b = (ChargerState_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S314>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(59);
    }

    /* End of Outputs for SubSystem: '<S304>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S304>/OldValue' incorporates:
     *  ActionPort: '<S315>/Action Port'
     */
    rtb_Merge_b = Mooventure2016_Rev5_B.s204_ChargerState;

    /* S-Function (motohawk_sfun_code_cover): '<S315>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(60);
    }

    /* End of Outputs for SubSystem: '<S304>/OldValue' */
  }

  /* End of If: '<S304>/If' */

  /* RelationalOperator: '<S12>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration3'
   */
  rtb_RelationalOperator_be = (rtb_Merge_b >= (Eaton_Is_Charging_DataStore()));

  /* Stateflow: '<S12>/Chart' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S12>/motohawk_data_read2'
   */
  Mooventure2016_Rev5_DWork.s197_presentTicks =
    Mooventure2016_Rev5_M->Timing.clockTick0;
  Mooventure2016_Rev5_DWork.s197_elapsedTicks =
    Mooventure2016_Rev5_DWork.s197_presentTicks -
    Mooventure2016_Rev5_DWork.s197_previousTicks;
  Mooventure2016_Rev5_DWork.s197_previousTicks =
    Mooventure2016_Rev5_DWork.s197_presentTicks;
  if ((uint32_T)Mooventure2016_Rev5_DWork.s197_temporalCounter_i1 +
      Mooventure2016_Rev5_DWork.s197_elapsedTicks <= 7U) {
    Mooventure2016_Rev5_DWork.s197_temporalCounter_i1 = (uint8_T)((uint32_T)
      Mooventure2016_Rev5_DWork.s197_temporalCounter_i1 +
      Mooventure2016_Rev5_DWork.s197_elapsedTicks);
  } else {
    Mooventure2016_Rev5_DWork.s197_temporalCounter_i1 = 7U;
  }

  /* Gateway: Foreground/Control/Vehicle Run/Stop Determination/Chart */
  /* During: Foreground/Control/Vehicle Run/Stop Determination/Chart */
  if (Mooventure2016_Rev5_DWork.s197_is_active_c1_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Control/Vehicle Run/Stop Determination/Chart */
    Mooventure2016_Rev5_DWork.s197_is_active_c1_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S197>:10' */
    Mooventure2016_Rev5_DWork.s197_is_c1_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Initial;
    Mooventure2016_Rev5_DWork.s197_temporalCounter_i1 = 0U;
  } else {
    switch (Mooventure2016_Rev5_DWork.s197_is_c1_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Batterybootup:
      /* During 'Batterybootup': '<S197>:13' */
      if (rtb_LogicalOperator5) {
        /* Transition: '<S197>:22' */
        Mooventure2016_Rev5_DWork.s197_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Shutdown_Sequence;
      } else if (rtb_LogicalOperator2_f && ((uint32_T)
                  Mooventure2016_Rev5_DWork.s197_temporalCounter_i1 >= 5U)) {
        /* Transition: '<S197>:37' */
        Mooventure2016_Rev5_DWork.s197_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Charging_and_Temp;
      } else {
        Mooventure2016_Rev5_B.s197_Vehicle_Enable = TRUE;
        Mooventure2016_Rev5_B.s197_Vehicle_Ready = FALSE;
        Mooventure2016_Rev5_B.s197_Torque_Enable = FALSE;
        Mooventure2016_Rev5_B.s197_Keyed_Relay = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_Charging_and_Temp:
      /* During 'Charging_and_Temp': '<S197>:15' */
      if (rtb_LogicalOperator5) {
        /* Transition: '<S197>:23' */
        Mooventure2016_Rev5_DWork.s197_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Shutdown_Sequence;
      } else if (!rtb_RelationalOperator_be) {
        /* Transition: '<S197>:20' */
        Mooventure2016_Rev5_DWork.s197_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal_Operation;
      } else {
        Mooventure2016_Rev5_B.s197_Vehicle_Enable = TRUE;
        Mooventure2016_Rev5_B.s197_Vehicle_Ready = TRUE;
        Mooventure2016_Rev5_B.s197_Torque_Enable = FALSE;
        Mooventure2016_Rev5_B.s197_Keyed_Relay = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_Initial:
      /* During 'Initial': '<S197>:9' */
      if ((!rtb_LogicalOperator5) && ((uint32_T)
           Mooventure2016_Rev5_DWork.s197_temporalCounter_i1 >= 5U)) {
        /* Transition: '<S197>:14' */
        Mooventure2016_Rev5_DWork.s197_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Batterybootup;
        Mooventure2016_Rev5_DWork.s197_temporalCounter_i1 = 0U;
      } else if (rtb_LogicalOperator5) {
        /* Transition: '<S197>:30' */
        Mooventure2016_Rev5_DWork.s197_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Shutdown_Sequence;
      } else {
        Mooventure2016_Rev5_B.s197_Vehicle_Enable = FALSE;
        Mooventure2016_Rev5_B.s197_Vehicle_Ready = FALSE;
        Mooventure2016_Rev5_B.s197_Torque_Enable = FALSE;
        Mooventure2016_Rev5_B.s197_Keyed_Relay = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_Kill_Component_Keyed:
      /* During 'Kill_Component_Keyed': '<S197>:26' */
      Mooventure2016_Rev5_B.s197_Vehicle_Enable = FALSE;
      Mooventure2016_Rev5_B.s197_Vehicle_Ready = FALSE;
      Mooventure2016_Rev5_B.s197_Torque_Enable = FALSE;
      Mooventure2016_Rev5_B.s197_Keyed_Relay = FALSE;
      break;

     case Mooventure2016_Rev5_IN_Normal_Operation:
      /* During 'Normal_Operation': '<S197>:18' */
      if (rtb_LogicalOperator5) {
        /* Transition: '<S197>:24' */
        Mooventure2016_Rev5_DWork.s197_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Shutdown_Sequence;
      } else if (rtb_RelationalOperator_be) {
        /* Transition: '<S197>:25' */
        Mooventure2016_Rev5_DWork.s197_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Charging_and_Temp;
      } else {
        Mooventure2016_Rev5_B.s197_Vehicle_Enable = TRUE;
        Mooventure2016_Rev5_B.s197_Vehicle_Ready = TRUE;
        Mooventure2016_Rev5_B.s197_Torque_Enable = TRUE;
        Mooventure2016_Rev5_B.s197_Keyed_Relay = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_Shutdown_Sequence:
      /* During 'Shutdown_Sequence': '<S197>:21' */
      if (!Batt_Contactor_Status_DataStore()) {
        /* Transition: '<S197>:27' */
        Mooventure2016_Rev5_DWork.s197_is_c1_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Kill_Component_Keyed;
      } else {
        Mooventure2016_Rev5_B.s197_Vehicle_Enable = FALSE;
        Mooventure2016_Rev5_B.s197_Vehicle_Ready = FALSE;
        Mooventure2016_Rev5_B.s197_Torque_Enable = FALSE;
        Mooventure2016_Rev5_B.s197_Keyed_Relay = TRUE;
      }
      break;

     default:
      /* Transition: '<S197>:10' */
      Mooventure2016_Rev5_DWork.s197_is_c1_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Initial;
      Mooventure2016_Rev5_DWork.s197_temporalCounter_i1 = 0U;
      break;
    }
  }

  /* End of Stateflow: '<S12>/Chart' */

  /* Stateflow: '<S370>/Coil1State' */

  /* Gateway: Foreground/Outputs/DistributionBox/Coil1State */
  /* During: Foreground/Outputs/DistributionBox/Coil1State */
  if (Mooventure2016_Rev5_DWork.s464_is_active_c8_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/DistributionBox/Coil1State */
    Mooventure2016_Rev5_DWork.s464_is_active_c8_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S464>:10' */
    Mooventure2016_Rev5_DWork.s464_is_c8_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Coil1Disabled;
  } else {
    switch (Mooventure2016_Rev5_DWork.s464_is_c8_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Coil1Disabled:
      /* During 'Coil1Disabled': '<S464>:9' */
      if ((Mooventure2016_Rev5_B.s79_Switch == 0.0) &&
          (Mooventure2016_Rev5_B.s267_Merge >= 250.0) &&
          Mooventure2016_Rev5_B.s197_Keyed_Relay) {
        /* Transition: '<S464>:30' */
        Mooventure2016_Rev5_DWork.s464_is_c8_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil1Enabled;
      } else {
        Mooventure2016_Rev5_B.s464_Coil1State = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Coil1Enabled:
      /* During 'Coil1Enabled': '<S464>:21' */
      if ((Mooventure2016_Rev5_B.s79_Switch == 0.0) &&
          (!Mooventure2016_Rev5_B.s197_Keyed_Relay)) {
        /* Transition: '<S464>:32' */
        Mooventure2016_Rev5_DWork.s464_is_c8_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil1Disabled;
      } else {
        Mooventure2016_Rev5_B.s464_Coil1State = TRUE;
      }
      break;

     default:
      /* Transition: '<S464>:10' */
      Mooventure2016_Rev5_DWork.s464_is_c8_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Coil1Disabled;
      break;
    }
  }

  /* End of Stateflow: '<S370>/Coil1State' */

  /* DataTypeConversion: '<S370>/Data Type Conversion1' incorporates:
   *  Constant: '<S467>/Constant'
   *  RelationalOperator: '<S467>/Compare'
   */
  rtb_LogicalOperator5 = (rtb_Merge_b == 2.0);

  /* Stateflow: '<S370>/Coil2State' */

  /* Gateway: Foreground/Outputs/DistributionBox/Coil2State */
  /* During: Foreground/Outputs/DistributionBox/Coil2State */
  if (Mooventure2016_Rev5_DWork.s465_is_active_c9_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/DistributionBox/Coil2State */
    Mooventure2016_Rev5_DWork.s465_is_active_c9_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S465>:10' */
    Mooventure2016_Rev5_DWork.s465_is_c9_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Coil2Disabled;
  } else {
    switch (Mooventure2016_Rev5_DWork.s465_is_c9_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Coil2Disabled:
      /* During 'Coil2Disabled': '<S465>:9' */
      if ((!rtb_LogicalOperator5) && Mooventure2016_Rev5_B.s197_Keyed_Relay) {
        /* Transition: '<S465>:48' */
        Mooventure2016_Rev5_DWork.s465_is_c9_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil2Enabled;
      } else {
        Mooventure2016_Rev5_B.s465_Coil2State = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Coil2Enabled:
      /* During 'Coil2Enabled': '<S465>:21' */
      if ((!rtb_LogicalOperator5) && (!Mooventure2016_Rev5_B.s197_Keyed_Relay))
      {
        /* Transition: '<S465>:32' */
        Mooventure2016_Rev5_DWork.s465_is_c9_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil2Disabled;
      } else {
        Mooventure2016_Rev5_B.s465_Coil2State = TRUE;
      }
      break;

     default:
      /* Transition: '<S465>:10' */
      Mooventure2016_Rev5_DWork.s465_is_c9_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Coil2Disabled;
      break;
    }
  }

  /* End of Stateflow: '<S370>/Coil2State' */

  /* Logic: '<S468>/Logical Operator' */
  rtb_LogicalOperator5 = (rtb_LogicalOperator_po || rtb_RelationalOperator2_id ||
    rtb_RelationalOperator_jg || rtb_LogicalOperator_b2);

  /* Stateflow: '<S370>/Coil2State1' */

  /* Gateway: Foreground/Outputs/DistributionBox/Coil2State1 */
  /* During: Foreground/Outputs/DistributionBox/Coil2State1 */
  if (Mooventure2016_Rev5_DWork.s466_is_active_c10_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/DistributionBox/Coil2State1 */
    Mooventure2016_Rev5_DWork.s466_is_active_c10_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S466>:10' */
    Mooventure2016_Rev5_DWork.s466_is_c10_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Coil3Disabled;
  } else {
    switch (Mooventure2016_Rev5_DWork.s466_is_c10_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_Coil3Disabled:
      /* During 'Coil3Disabled': '<S466>:9' */
      if ((!rtb_LogicalOperator5) && Mooventure2016_Rev5_B.s197_Keyed_Relay) {
        /* Transition: '<S466>:30' */
        Mooventure2016_Rev5_DWork.s466_is_c10_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil3Enabled;
      } else {
        Mooventure2016_Rev5_B.s466_Coil3State = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Coil3Enabled:
      /* During 'Coil3Enabled': '<S466>:21' */
      if ((!rtb_LogicalOperator5) && (!Mooventure2016_Rev5_B.s197_Keyed_Relay))
      {
        /* Transition: '<S466>:32' */
        Mooventure2016_Rev5_DWork.s466_is_c10_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Coil3Disabled;
      } else {
        Mooventure2016_Rev5_B.s466_Coil3State = TRUE;
      }
      break;

     default:
      /* Transition: '<S466>:10' */
      Mooventure2016_Rev5_DWork.s466_is_c10_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Coil3Disabled;
      break;
    }
  }

  /* End of Stateflow: '<S370>/Coil2State1' */

  /* If: '<S471>/If' incorporates:
   *  Inport: '<S479>/In1'
   *  Inport: '<S480>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S471>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S471>/override_enable'
   */
  if ((Coil1_IPT_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S471>/NewValue' incorporates:
     *  ActionPort: '<S479>/Action Port'
     */
    rtb_Merge_ef = (Coil1_IPT_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S479>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(153);
    }

    /* End of Outputs for SubSystem: '<S471>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S471>/OldValue' incorporates:
     *  ActionPort: '<S480>/Action Port'
     */
    rtb_Merge_ef = Mooventure2016_Rev5_B.s464_Coil1State;

    /* S-Function (motohawk_sfun_code_cover): '<S480>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(154);
    }

    /* End of Outputs for SubSystem: '<S471>/OldValue' */
  }

  /* End of If: '<S471>/If' */

  /* If: '<S472>/If' incorporates:
   *  Inport: '<S481>/In1'
   *  Inport: '<S482>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S472>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S472>/override_enable'
   */
  if ((Coil2_Charger_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S472>/NewValue' incorporates:
     *  ActionPort: '<S481>/Action Port'
     */
    rtb_Merge_nv = (Coil2_Charger_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S481>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(155);
    }

    /* End of Outputs for SubSystem: '<S472>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S472>/OldValue' incorporates:
     *  ActionPort: '<S482>/Action Port'
     */
    rtb_Merge_nv = Mooventure2016_Rev5_B.s465_Coil2State;

    /* S-Function (motohawk_sfun_code_cover): '<S482>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(156);
    }

    /* End of Outputs for SubSystem: '<S472>/OldValue' */
  }

  /* End of If: '<S472>/If' */

  /* If: '<S473>/If' incorporates:
   *  Inport: '<S483>/In1'
   *  Inport: '<S484>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S473>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S473>/override_enable'
   */
  if ((Coil3_Heater_AC_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S473>/NewValue' incorporates:
     *  ActionPort: '<S483>/Action Port'
     */
    rtb_Merge_iu = (Coil3_Heater_AC_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S483>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(157);
    }

    /* End of Outputs for SubSystem: '<S473>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S473>/OldValue' incorporates:
     *  ActionPort: '<S484>/Action Port'
     */
    rtb_Merge_iu = Mooventure2016_Rev5_B.s466_Coil3State;

    /* S-Function (motohawk_sfun_code_cover): '<S484>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(158);
    }

    /* End of Outputs for SubSystem: '<S473>/OldValue' */
  }

  /* End of If: '<S473>/If' */

  /* If: '<S469>/If' incorporates:
   *  Constant: '<S370>/Constant'
   *  Inport: '<S475>/In1'
   *  Inport: '<S476>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S469>/override_enable'
   */
  if ((Coil5_AuxCoil_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S469>/NewValue' incorporates:
     *  ActionPort: '<S475>/Action Port'
     */
    rtb_UnitDelay_o = (Coil5_AuxCoil_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S475>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(149);
    }

    /* End of Outputs for SubSystem: '<S469>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S469>/OldValue' incorporates:
     *  ActionPort: '<S476>/Action Port'
     */
    rtb_UnitDelay_o = 0.0;

    /* S-Function (motohawk_sfun_code_cover): '<S476>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(150);
    }

    /* End of Outputs for SubSystem: '<S469>/OldValue' */
  }

  /* End of If: '<S469>/If' */

  /* DataTypeConversion: '<S370>/Data Type Conversion6' */
  rtb_DataTypeConversion6_c = (rtb_UnitDelay_o != 0.0);

  /* If: '<S474>/If' incorporates:
   *  Constant: '<S370>/Constant2'
   *  Inport: '<S485>/In1'
   *  Inport: '<S486>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S474>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S474>/override_enable'
   */
  if ((Coil4_MaleOrangeConnector_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S474>/NewValue' incorporates:
     *  ActionPort: '<S485>/Action Port'
     */
    rtb_UnitDelay_o = (Coil4_MaleOrangeConnector_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S485>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(159);
    }

    /* End of Outputs for SubSystem: '<S474>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S474>/OldValue' incorporates:
     *  ActionPort: '<S486>/Action Port'
     */
    rtb_UnitDelay_o = 0.0;

    /* S-Function (motohawk_sfun_code_cover): '<S486>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(160);
    }

    /* End of Outputs for SubSystem: '<S474>/OldValue' */
  }

  /* End of If: '<S474>/If' */

  /* DataTypeConversion: '<S370>/Data Type Conversion5' */
  rtb_DataTypeConversion5 = (rtb_UnitDelay_o != 0.0);

  /* S-Function (motohawk_sfun_probe): '<S370>/motohawk_probe11' */
  (InterlockEnable_Probe_DataStore()) = (InterlockEnable_DataStore());

  /* If: '<S470>/If' incorporates:
   *  Inport: '<S477>/In1'
   *  Inport: '<S478>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S370>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S470>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S470>/override_enable'
   */
  if ((InterlockEnable_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S470>/NewValue' incorporates:
     *  ActionPort: '<S477>/Action Port'
     */
    rtb_UnitDelay_o = (InterlockEnable_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S477>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(151);
    }

    /* End of Outputs for SubSystem: '<S470>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S470>/OldValue' incorporates:
     *  ActionPort: '<S478>/Action Port'
     */
    rtb_UnitDelay_o = (InterlockEnable_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S478>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/DistributionBox/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(152);
    }

    /* End of Outputs for SubSystem: '<S470>/OldValue' */
  }

  /* End of If: '<S470>/If' */

  /* DataTypeConversion: '<S370>/Data Type Conversion8' */
  rtb_DataTypeConversion8 = (rtb_UnitDelay_o != 0.0);

  /* Stateflow: '<S371>/PowerSteering' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S371>/motohawk_data_read1'
   */

  /* Gateway: Foreground/Outputs/Driver Ouputs/PowerSteering */
  /* During: Foreground/Outputs/Driver Ouputs/PowerSteering */
  if (Mooventure2016_Rev5_DWork.s492_is_active_c28_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/Driver Ouputs/PowerSteering */
    Mooventure2016_Rev5_DWork.s492_is_active_c28_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S492>:10' */
    Mooventure2016_Rev5_DWork.s492_is_c28_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_INIT;
  } else {
    switch (Mooventure2016_Rev5_DWork.s492_is_c28_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_INIT:
      /* During 'INIT': '<S492>:9' */
      if (Mooventure2016_Rev5_B.s205_IPT_MotorReady) {
        /* Transition: '<S492>:42' */
        Mooventure2016_Rev5_DWork.s492_is_c28_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_MotorRunning;
      } else {
        Mooventure2016_Rev5_B.s492_VehicleReadyOutput = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_MotorRunning:
      /* During 'MotorRunning': '<S492>:21' */
      if (!Vehicle_Ready_DataStore()) {
        /* Transition: '<S492>:43' */
        Mooventure2016_Rev5_DWork.s492_is_c28_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_PowerSteeringOn;
      } else {
        Mooventure2016_Rev5_B.s492_VehicleReadyOutput = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_PowerSteeringOff:
      /* During 'PowerSteeringOff': '<S492>:44' */
      Mooventure2016_Rev5_B.s492_VehicleReadyOutput = FALSE;
      break;

     case Mooventure2016_Rev5_IN_PowerSteeringOn:
      /* During 'PowerSteeringOn': '<S492>:39' */
      if (Mooventure2016_Rev5_B.s300_posOut == 2.0) {
        /* Transition: '<S492>:45' */
        Mooventure2016_Rev5_DWork.s492_is_c28_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_PowerSteeringOff;
      } else {
        Mooventure2016_Rev5_B.s492_VehicleReadyOutput = TRUE;
      }
      break;

     default:
      /* Transition: '<S492>:10' */
      Mooventure2016_Rev5_DWork.s492_is_c28_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_INIT;
      break;
    }
  }

  /* End of Stateflow: '<S371>/PowerSteering' */
  /* If: '<S494>/If' incorporates:
   *  Inport: '<S589>/In1'
   *  Inport: '<S590>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S494>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S494>/override_enable'
   */
  if ((Ready_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S494>/NewValue' incorporates:
     *  ActionPort: '<S589>/Action Port'
     */
    rtb_Merge_kn = (Ready_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S589>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(213);
    }

    /* End of Outputs for SubSystem: '<S494>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S494>/OldValue' incorporates:
     *  ActionPort: '<S590>/Action Port'
     */
    rtb_Merge_kn = Mooventure2016_Rev5_B.s492_VehicleReadyOutput;

    /* S-Function (motohawk_sfun_code_cover): '<S590>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(214);
    }

    /* End of Outputs for SubSystem: '<S494>/OldValue' */
  }

  /* End of If: '<S494>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S371>/motohawk_fault_action2'
   *
   * Regarding '<S371>/motohawk_fault_action2':
     Get Fault Action Status: Regen_Brakes_Disabled
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s371_Regen_Brakes_Disabled = GetFaultActionStatus(12);
  }

  /* If: '<S501>/If' incorporates:
   *  Inport: '<S603>/In1'
   *  Inport: '<S604>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S501>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S501>/override_enable'
   */
  if ((Regen_Brakes_Disabled_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S501>/NewValue' incorporates:
     *  ActionPort: '<S603>/Action Port'
     */
    rtb_Merge_pl = (Regen_Brakes_Disabled_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S603>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(227);
    }

    /* End of Outputs for SubSystem: '<S501>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S501>/OldValue' incorporates:
     *  ActionPort: '<S604>/Action Port'
     */
    rtb_Merge_pl = Mooventure2016_Rev5_B.s371_Regen_Brakes_Disabled;

    /* S-Function (motohawk_sfun_code_cover): '<S604>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(228);
    }

    /* End of Outputs for SubSystem: '<S501>/OldValue' */
  }

  /* End of If: '<S501>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S371>/motohawk_fault_action1'
   *
   * Regarding '<S371>/motohawk_fault_action1':
     Get Fault Action Status: HV_Light
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s371_HV_Elec_Sys_Warm = GetFaultActionStatus(10);
  }

  /* If: '<S502>/If' incorporates:
   *  Inport: '<S605>/In1'
   *  Inport: '<S606>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S502>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S502>/override_enable'
   */
  if ((HV_Elec_Sys_Wrn_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S502>/NewValue' incorporates:
     *  ActionPort: '<S605>/Action Port'
     */
    rtb_Merge_e4 = (HV_Elec_Sys_Wrn_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S605>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(229);
    }

    /* End of Outputs for SubSystem: '<S502>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S502>/OldValue' incorporates:
     *  ActionPort: '<S606>/Action Port'
     */
    rtb_Merge_e4 = Mooventure2016_Rev5_B.s371_HV_Elec_Sys_Warm;

    /* S-Function (motohawk_sfun_code_cover): '<S606>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(230);
    }

    /* End of Outputs for SubSystem: '<S502>/OldValue' */
  }

  /* End of If: '<S502>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S371>/motohawk_fault_action'
   *
   * Regarding '<S371>/motohawk_fault_action':
     Get Fault Action Status: Wrench_Light
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s371_Repair_Wrench = GetFaultActionStatus(16);
  }

  /* If: '<S503>/If' incorporates:
   *  Inport: '<S607>/In1'
   *  Inport: '<S608>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S503>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S503>/override_enable'
   */
  if ((Repair_Wrench_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S503>/NewValue' incorporates:
     *  ActionPort: '<S607>/Action Port'
     */
    rtb_Merge_br = (Repair_Wrench_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S607>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(231);
    }

    /* End of Outputs for SubSystem: '<S503>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S503>/OldValue' incorporates:
     *  ActionPort: '<S608>/Action Port'
     */
    rtb_Merge_br = Mooventure2016_Rev5_B.s371_Repair_Wrench;

    /* S-Function (motohawk_sfun_code_cover): '<S608>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(232);
    }

    /* End of Outputs for SubSystem: '<S503>/OldValue' */
  }

  /* End of If: '<S503>/If' */

  /* If: '<S504>/If' incorporates:
   *  Inport: '<S609>/In1'
   *  Inport: '<S610>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S504>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S504>/override_enable'
   */
  if ((Cruise_Ctrl_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S504>/NewValue' incorporates:
     *  ActionPort: '<S609>/Action Port'
     */
    rtb_Merge_gn = (Cruise_Ctrl_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S609>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(233);
    }

    /* End of Outputs for SubSystem: '<S504>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S504>/OldValue' incorporates:
     *  ActionPort: '<S610>/Action Port'
     */
    rtb_Merge_gn = Mooventure2016_Rev5_B.s90_System;

    /* S-Function (motohawk_sfun_code_cover): '<S610>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(234);
    }

    /* End of Outputs for SubSystem: '<S504>/OldValue' */
  }

  /* End of If: '<S504>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S371>/motohawk_fault_action5'
   *
   * Regarding '<S371>/motohawk_fault_action5':
     Get Fault Action Status: Temperature_Solid
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action1_g = GetFaultActionStatus(15);
  }

  /* DataTypeConversion: '<S371>/Data Type Conversion' */
  rtb_UnitDelay_o = (real_T)rtb_motohawk_fault_action1_g;

  /* S-Function (motohawk_sfun_fault_action): '<S371>/motohawk_fault_action6'
   *
   * Regarding '<S371>/motohawk_fault_action6':
     Get Fault Action Status: Temperature_Flash
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action1_g = GetFaultActionStatus(14);
  }

  /* DataTypeConversion: '<S371>/Data Type Conversion1' */
  rtb_UnitDelay_m = (real_T)rtb_motohawk_fault_action1_g;

  /* Stateflow: '<S371>/Chart' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S371>/motohawk_data_read'
   */

  /* Gateway: Foreground/Outputs/Driver Ouputs/Chart */
  /* During: Foreground/Outputs/Driver Ouputs/Chart */
  if (Mooventure2016_Rev5_DWork.s487_is_active_c22_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/Driver Ouputs/Chart */
    Mooventure2016_Rev5_DWork.s487_is_active_c22_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S487>:2' */
    Mooventure2016_Rev5_DWork.s487_is_c22_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Normal;
  } else {
    switch (Mooventure2016_Rev5_DWork.s487_is_c22_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_FlashOff:
      /* During 'FlashOff': '<S487>:11' */
      if (rtb_UnitDelay_m == 0.0) {
        /* Transition: '<S487>:22' */
        Mooventure2016_Rev5_DWork.s487_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal;
      } else {
        Mooventure2016_Rev5_B.s487_engTemp = 23.0;
        Mooventure2016_Rev5_B.s487_transTemp = 23.0;
        Mooventure2016_Rev5_B.s487_timerOut = 0.0;
      }
      break;

     case Mooventure2016_Rev5_IN_FlashOn:
      /* During 'FlashOn': '<S487>:8' */
      if (rtb_UnitDelay_m == 0.0) {
        /* Transition: '<S487>:10' */
        Mooventure2016_Rev5_DWork.s487_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal;
      } else if (Mooventure2016_Rev5_B.s487_engTemp == 200.0) {
        /* Transition: '<S487>:24' */
        Mooventure2016_Rev5_DWork.s487_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Wait;
      } else {
        Mooventure2016_Rev5_B.s487_engTemp = 200.0;
        Mooventure2016_Rev5_B.s487_transTemp = 200.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Normal:
      /* During 'Normal': '<S487>:1' */
      if (rtb_UnitDelay_o == 1.0) {
        /* Transition: '<S487>:4' */
        Mooventure2016_Rev5_DWork.s487_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Solid;
      } else if (rtb_UnitDelay_m == 1.0) {
        /* Transition: '<S487>:9' */
        Mooventure2016_Rev5_DWork.s487_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_FlashOn;
      } else {
        Mooventure2016_Rev5_B.s487_engTemp = 23.0;
        Mooventure2016_Rev5_B.s487_transTemp = 23.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Solid:
      /* During 'Solid': '<S487>:3' */
      if (rtb_UnitDelay_o == 0.0) {
        /* Transition: '<S487>:6' */
        Mooventure2016_Rev5_DWork.s487_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_Normal;
      } else {
        Mooventure2016_Rev5_B.s487_engTemp = 200.0;
        Mooventure2016_Rev5_B.s487_transTemp = 200.0;
      }
      break;

     case Mooventure2016_Rev5_IN_Wait:
      /* During 'Wait': '<S487>:23' */
      if (TimerOne1_DataStore() == TRUE) {
        /* Transition: '<S487>:25' */
        Mooventure2016_Rev5_DWork.s487_is_c22_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_FlashOff;
      } else {
        Mooventure2016_Rev5_B.s487_timerOut = 1.0;
      }
      break;

     default:
      /* Transition: '<S487>:2' */
      Mooventure2016_Rev5_DWork.s487_is_c22_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Normal;
      break;
    }
  }

  /* End of Stateflow: '<S371>/Chart' */
  /* If: '<S505>/If' incorporates:
   *  Inport: '<S611>/In1'
   *  Inport: '<S612>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S505>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S505>/override_enable'
   */
  if ((Eng_Cool_Temp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S505>/NewValue' incorporates:
     *  ActionPort: '<S611>/Action Port'
     */
    rtb_Merge_cu = (Eng_Cool_Temp_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S611>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(235);
    }

    /* End of Outputs for SubSystem: '<S505>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S505>/OldValue' incorporates:
     *  ActionPort: '<S612>/Action Port'
     */
    rtb_Merge_cu = Mooventure2016_Rev5_B.s487_engTemp;

    /* S-Function (motohawk_sfun_code_cover): '<S612>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(236);
    }

    /* End of Outputs for SubSystem: '<S505>/OldValue' */
  }

  /* End of If: '<S505>/If' */

  /* If: '<S506>/If' incorporates:
   *  Inport: '<S613>/In1'
   *  Inport: '<S614>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S506>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S506>/override_enable'
   */
  if ((Me_Cool_Temp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S506>/NewValue' incorporates:
     *  ActionPort: '<S613>/Action Port'
     */
    rtb_Merge_nyh = (Me_Cool_Temp_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S613>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(237);
    }

    /* End of Outputs for SubSystem: '<S506>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S506>/OldValue' incorporates:
     *  ActionPort: '<S614>/Action Port'
     */
    rtb_Merge_nyh = Mooventure2016_Rev5_B.s487_transTemp;

    /* S-Function (motohawk_sfun_code_cover): '<S614>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(238);
    }

    /* End of Outputs for SubSystem: '<S506>/OldValue' */
  }

  /* End of If: '<S506>/If' */

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

  /* Abs: '<S371>/Abs1' */
  Mooventure2016_Rev5_B.s371_Engine_Speed = fabs
    (Mooventure2016_Rev5_B.s331_Merge);

  /* If: '<S507>/If' incorporates:
   *  Inport: '<S615>/In1'
   *  Inport: '<S616>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S507>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S507>/override_enable'
   */
  if ((Engine_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S507>/NewValue' incorporates:
     *  ActionPort: '<S615>/Action Port'
     */
    rtb_Merge_m = (Engine_Speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S615>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(239);
    }

    /* End of Outputs for SubSystem: '<S507>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S507>/OldValue' incorporates:
     *  ActionPort: '<S616>/Action Port'
     */
    rtb_Merge_m = Mooventure2016_Rev5_B.s371_Engine_Speed;

    /* S-Function (motohawk_sfun_code_cover): '<S616>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(240);
    }

    /* End of Outputs for SubSystem: '<S507>/OldValue' */
  }

  /* End of If: '<S507>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S371>/Send CAN Messages1' */
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

  /* Product: '<S371>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S371>/motohawk_calibration38'
   */
  rtb_UnitDelay_o = Mooventure2016_Rev5_B.s271_Sum1 * (SOC_Multiplier_DataStore());

  /* Sum: '<S371>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S371>/motohawk_calibration39'
   */
  Mooventure2016_Rev5_B.s371_Current = rtb_UnitDelay_o - (SOC_Subtract_DataStore
    ());

  /* If: '<S508>/If' incorporates:
   *  Inport: '<S617>/In1'
   *  Inport: '<S618>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S508>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S508>/override_enable'
   */
  if ((Current_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S508>/NewValue' incorporates:
     *  ActionPort: '<S617>/Action Port'
     */
    rtb_Merge_k = (Current_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S617>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(241);
    }

    /* End of Outputs for SubSystem: '<S508>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S508>/OldValue' incorporates:
     *  ActionPort: '<S618>/Action Port'
     */
    rtb_Merge_k = Mooventure2016_Rev5_B.s371_Current;

    /* S-Function (motohawk_sfun_code_cover): '<S618>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(242);
    }

    /* End of Outputs for SubSystem: '<S508>/OldValue' */
  }

  /* End of If: '<S508>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S371>/Send CAN Messages2' */
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

  /* Product: '<S371>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S371>/motohawk_calibration7'
   */
  rtb_UnitDelay_o = (RPM_to_Wheel_Speed_Multiplier_DataStore()) *
    Mooventure2016_Rev5_B.s331_Merge;

  /* Abs: '<S371>/Abs2' incorporates:
   *  Product: '<S371>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S371>/motohawk_calibration8'
   */
  Mooventure2016_Rev5_B.s371_Vehi_Speed = fabs(rtb_UnitDelay_o *
    (MPH_to_KMH_DataStore()));

  /* If: '<S497>/If' incorporates:
   *  Inport: '<S595>/In1'
   *  Inport: '<S596>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S497>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S497>/override_enable'
   */
  if ((Vehicle_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S497>/NewValue' incorporates:
     *  ActionPort: '<S595>/Action Port'
     */
    rtb_Merge_e3 = (Vehicle_Speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S595>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(219);
    }

    /* End of Outputs for SubSystem: '<S497>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S497>/OldValue' incorporates:
     *  ActionPort: '<S596>/Action Port'
     */
    rtb_Merge_e3 = Mooventure2016_Rev5_B.s371_Vehi_Speed;

    /* S-Function (motohawk_sfun_code_cover): '<S596>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(220);
    }

    /* End of Outputs for SubSystem: '<S497>/OldValue' */
  }

  /* End of If: '<S497>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S371>/Send CAN Messages4' */
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

  /* Outputs for Enabled SubSystem: '<S371>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S489>/Enable'
   */
  if (Mooventure2016_Rev5_B.s487_timerOut > 0.0) {
    /* Stateflow: '<S489>/Bar Chart Reset' */
    Mooventure2016_Rev5_Chart_a((Temp_Flash_DataStore()),
      &Mooventure2016_Rev5_B.s489_sf_BarChartReset,
      &Mooventure2016_Rev5_DWork.s489_sf_BarChartReset);
  }

  /* End of Outputs for SubSystem: '<S371>/Enabled Subsystem' */

  /* S-Function (motohawk_sfun_data_write): '<S371>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimerOne1 */
  {
    TimerOne1_DataStore() =
      Mooventure2016_Rev5_B.s489_sf_BarChartReset.s172_write;
  }

  /* S-Function Block: <S490>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s490_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ka = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S490>/Switch1' incorporates:
   *  Constant: '<S371>/ 1'
   */
  if (Mooventure2016_Rev5_ConstB.s490_DataTypeConversion) {
    rtb_Product2_f = 0.0;
  } else {
    /* MinMax: '<S510>/MinMax' incorporates:
     *  Constant: '<S371>/   '
     *  Gain: '<S371>/Gain'
     *  Product: '<S490>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S490>/motohawk_delta_time'
     */
    rtb_UnitDelay_m = 0.00027777777777777778 * rtb_UnitDelay_o *
      rtb_motohawk_delta_time_ka;
    rtb_UnitDelay_m = rtb_UnitDelay_m >= 0.0 ? rtb_UnitDelay_m : 0.0;

    /* MinMax: '<S510>/MinMax1' incorporates:
     *  Constant: '<S371>/   '
     *  MinMax: '<S510>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S371>/motohawk_calibration'
     */
    rtb_Product2_f = (rtb_UnitDelay_m <= (Max_Dist_Travel_In_Sec_DataStore())) ||
      rtIsNaN((Max_Dist_Travel_In_Sec_DataStore())) ? rtb_UnitDelay_m :
      (Max_Dist_Travel_In_Sec_DataStore());
  }

  /* End of Switch: '<S490>/Switch1' */
  /* Sum: '<S371>/Add' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S371>/motohawk_data_read2'
   */
  rtb_Add = rtb_Product2_f + Dist_Trv_DataStore();

  /* S-Function (motohawk_sfun_data_write): '<S371>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Dist_Trv */
  {
    Dist_Trv_DataStore() = rtb_Add;
  }

  /* MATLAB Function Block: '<S371>/Embedded MATLAB Function' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S371>/motohawk_fault_action3'
   *  S-Function (motohawk_sfun_fault_action): '<S371>/motohawk_fault_action7'
   */

  /* MATLAB Function 'Foreground/Outputs/Driver Ouputs/Embedded MATLAB Function': '<S488>:1' */
  if (GetFaultActionStatus(4) == TRUE) {
    /* '<S488>:1:3' */
    /* '<S488>:1:4' */
    Mooventure2016_Rev5_B.s488_CEL = 2.0;
  } else if (GetFaultActionStatus(3) == TRUE) {
    /* '<S488>:1:5' */
    /* '<S488>:1:6' */
    Mooventure2016_Rev5_B.s488_CEL = 1.0;
  } else {
    /* '<S488>:1:8' */
    Mooventure2016_Rev5_B.s488_CEL = 0.0;
  }

  /* End of MATLAB Function Block: '<S371>/Embedded MATLAB Function' */
  /* If: '<S499>/If' incorporates:
   *  Inport: '<S599>/In1'
   *  Inport: '<S600>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S499>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S499>/override_enable'
   */
  if ((Check_Engine_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S499>/NewValue' incorporates:
     *  ActionPort: '<S599>/Action Port'
     */
    rtb_Merge_of = (Check_Engine_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S599>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(223);
    }

    /* End of Outputs for SubSystem: '<S499>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S499>/OldValue' incorporates:
     *  ActionPort: '<S600>/Action Port'
     */
    rtb_Merge_of = Mooventure2016_Rev5_B.s488_CEL;

    /* S-Function (motohawk_sfun_code_cover): '<S600>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs14/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(224);
    }

    /* End of Outputs for SubSystem: '<S499>/OldValue' */
  }

  /* End of If: '<S499>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S371>/motohawk_fault_action4'
   *
   * Regarding '<S371>/motohawk_fault_action4':
     Get Fault Action Status: Batt_Light
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s371_Battery_Light = GetFaultActionStatus(0);
  }

  /* If: '<S500>/If' incorporates:
   *  Inport: '<S601>/In1'
   *  Inport: '<S602>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S500>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S500>/override_enable'
   */
  if ((Battery_Light_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S500>/NewValue' incorporates:
     *  ActionPort: '<S601>/Action Port'
     */
    rtb_Merge_en = (Battery_Light_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S601>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(225);
    }

    /* End of Outputs for SubSystem: '<S500>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S500>/OldValue' incorporates:
     *  ActionPort: '<S602>/Action Port'
     */
    rtb_Merge_en = Mooventure2016_Rev5_B.s371_Battery_Light;

    /* S-Function (motohawk_sfun_code_cover): '<S602>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs15/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(226);
    }

    /* End of Outputs for SubSystem: '<S500>/OldValue' */
  }

  /* End of If: '<S500>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S371>/Send CAN Messages6' */
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

  /* MATLAB Function Block: '<S371>/ODO_CALC' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S371>/motohawk_data_read3'
   *  S-Function (motohawk_sfun_data_read): '<S371>/motohawk_data_read4'
   */

  /* MATLAB Function 'Foreground/Outputs/Driver Ouputs/ODO_CALC': '<S491>:1' */
  if (Dist_Trv_DataStore() >= 0.016666666) {
    /* '<S491>:1:3' */
    if (ODO_INCRE_DataStore() - 0.0001 <= 0.0) {
      /* '<S491>:1:4' */
      /* '<S491>:1:5' */
      rtb_ODO_out = (0.05 + ODO_INCRE_DataStore()) - 0.0001;

      /* '<S491>:1:6' */
      rtb_reset = 0.0;
    } else {
      /* '<S491>:1:8' */
      rtb_ODO_out = ODO_INCRE_DataStore() - 0.0001;

      /* '<S491>:1:9' */
      rtb_reset = 0.0;
    }
  } else {
    /* '<S491>:1:12' */
    rtb_ODO_out = ODO_INCRE_DataStore();

    /* '<S491>:1:13' */
    rtb_reset = Dist_Trv_DataStore();
  }

  /* End of MATLAB Function Block: '<S371>/ODO_CALC' */

  /* S-Function (motohawk_sfun_data_write): '<S371>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: Dist_Trv */
  {
    Dist_Trv_DataStore() = rtb_reset;
  }

  /* S-Function (motohawk_sfun_data_write): '<S371>/motohawk_data_write3' */
  /* Write to Data Storage as scalar: ODO_INCRE */
  {
    ODO_INCRE_DataStore() = rtb_ODO_out;
  }

  /* If: '<S495>/If' incorporates:
   *  Inport: '<S591>/In1'
   *  Inport: '<S592>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S371>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S495>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S495>/override_enable'
   */
  if ((BCU_Caution_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S495>/NewValue' incorporates:
     *  ActionPort: '<S591>/Action Port'
     */
    rtb_Merge_iz = (BCU_Caution_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S591>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(215);
    }

    /* End of Outputs for SubSystem: '<S495>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S495>/OldValue' incorporates:
     *  ActionPort: '<S592>/Action Port'
     */
    rtb_Merge_iz = (BCU_Caution_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S592>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(216);
    }

    /* End of Outputs for SubSystem: '<S495>/OldValue' */
  }

  /* End of If: '<S495>/If' */

  /* If: '<S496>/If' incorporates:
   *  Inport: '<S593>/In1'
   *  Inport: '<S594>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S371>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_calibration): '<S496>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S496>/override_enable'
   */
  if ((BCU_Hazard_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S496>/NewValue' incorporates:
     *  ActionPort: '<S593>/Action Port'
     */
    rtb_Merge_gv = (BCU_Hazard_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S593>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(217);
    }

    /* End of Outputs for SubSystem: '<S496>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S496>/OldValue' incorporates:
     *  ActionPort: '<S594>/Action Port'
     */
    rtb_Merge_gv = (BCU_Hazard_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S594>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(218);
    }

    /* End of Outputs for SubSystem: '<S496>/OldValue' */
  }

  /* End of If: '<S496>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S371>/Send CAN Messages3' */
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

  /* S-Function (motohawk_sfun_probe): '<S371>/motohawk_probe10' */
  (BCU_Caution_Prb_DataStore()) = (BCU_Caution_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S371>/motohawk_probe11' */
  (BCU_Hazard_Prb_DataStore()) = (BCU_Hazard_DataStore());

  /* S-Function (motohawk_sfun_data_read): '<S371>/motohawk_data_read5' */
  Mooventure2016_Rev5_B.s371_ODO_Count = ODO_INCRE_DataStore();

  /* If: '<S498>/If' incorporates:
   *  Inport: '<S597>/In1'
   *  Inport: '<S598>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S498>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S498>/override_enable'
   */
  if ((ODO_Count_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S498>/NewValue' incorporates:
     *  ActionPort: '<S597>/Action Port'
     */
    rtb_Merge_mf = (ODO_Count_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S597>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(221);
    }

    /* End of Outputs for SubSystem: '<S498>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S498>/OldValue' incorporates:
     *  ActionPort: '<S598>/Action Port'
     */
    rtb_Merge_mf = Mooventure2016_Rev5_B.s371_ODO_Count;

    /* S-Function (motohawk_sfun_code_cover): '<S598>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/motohawk_override_abs13/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(222);
    }

    /* End of Outputs for SubSystem: '<S498>/OldValue' */
  }

  /* End of If: '<S498>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S371>/Send CAN Messages5' */
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

  /* If: '<S517>/If' incorporates:
   *  Inport: '<S549>/In1'
   *  Inport: '<S550>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration18'
   *  S-Function (motohawk_sfun_calibration): '<S517>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S517>/override_enable'
   */
  if ((DATA_MODE_2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S517>/NewValue' incorporates:
     *  ActionPort: '<S549>/Action Port'
     */
    rtb_Merge_pb = (DATA_MODE_2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S549>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(173);
    }

    /* End of Outputs for SubSystem: '<S517>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S517>/OldValue' incorporates:
     *  ActionPort: '<S550>/Action Port'
     */
    rtb_Merge_pb = (DATA_MODE_2_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S550>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs26/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(174);
    }

    /* End of Outputs for SubSystem: '<S517>/OldValue' */
  }

  /* End of If: '<S517>/If' */

  /* If: '<S518>/If' incorporates:
   *  Inport: '<S551>/In1'
   *  Inport: '<S552>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration19'
   *  S-Function (motohawk_sfun_calibration): '<S518>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S518>/override_enable'
   */
  if ((VIN_DATA_BYTE_1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S518>/NewValue' incorporates:
     *  ActionPort: '<S551>/Action Port'
     */
    rtb_Merge_og = (VIN_DATA_BYTE_1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S551>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(175);
    }

    /* End of Outputs for SubSystem: '<S518>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S518>/OldValue' incorporates:
     *  ActionPort: '<S552>/Action Port'
     */
    rtb_Merge_og = (VIN_DATA_BYTE_1_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S552>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs27/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(176);
    }

    /* End of Outputs for SubSystem: '<S518>/OldValue' */
  }

  /* End of If: '<S518>/If' */

  /* If: '<S519>/If' incorporates:
   *  Inport: '<S553>/In1'
   *  Inport: '<S554>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration20'
   *  S-Function (motohawk_sfun_calibration): '<S519>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S519>/override_enable'
   */
  if ((VIN_DATA_BYTE_2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S519>/NewValue' incorporates:
     *  ActionPort: '<S553>/Action Port'
     */
    rtb_Merge_d = (VIN_DATA_BYTE_2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S553>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(177);
    }

    /* End of Outputs for SubSystem: '<S519>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S519>/OldValue' incorporates:
     *  ActionPort: '<S554>/Action Port'
     */
    rtb_Merge_d = (VIN_DATA_BYTE_2_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S554>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs28/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(178);
    }

    /* End of Outputs for SubSystem: '<S519>/OldValue' */
  }

  /* End of If: '<S519>/If' */

  /* If: '<S520>/If' incorporates:
   *  Inport: '<S555>/In1'
   *  Inport: '<S556>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration21'
   *  S-Function (motohawk_sfun_calibration): '<S520>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S520>/override_enable'
   */
  if ((VIN_DATA_BYTE_3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S520>/NewValue' incorporates:
     *  ActionPort: '<S555>/Action Port'
     */
    rtb_Merge_ho = (VIN_DATA_BYTE_3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S555>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(179);
    }

    /* End of Outputs for SubSystem: '<S520>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S520>/OldValue' incorporates:
     *  ActionPort: '<S556>/Action Port'
     */
    rtb_Merge_ho = (VIN_DATA_BYTE_3_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S556>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs29/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(180);
    }

    /* End of Outputs for SubSystem: '<S520>/OldValue' */
  }

  /* End of If: '<S520>/If' */

  /* If: '<S521>/If' incorporates:
   *  Inport: '<S557>/In1'
   *  Inport: '<S558>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration22'
   *  S-Function (motohawk_sfun_calibration): '<S521>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S521>/override_enable'
   */
  if ((VIN_DATA_BYTE_4_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S521>/NewValue' incorporates:
     *  ActionPort: '<S557>/Action Port'
     */
    rtb_Merge_mb = (VIN_DATA_BYTE_4_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S557>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(181);
    }

    /* End of Outputs for SubSystem: '<S521>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S521>/OldValue' incorporates:
     *  ActionPort: '<S558>/Action Port'
     */
    rtb_Merge_mb = (VIN_DATA_BYTE_4_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S558>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs30/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(182);
    }

    /* End of Outputs for SubSystem: '<S521>/OldValue' */
  }

  /* End of If: '<S521>/If' */

  /* If: '<S522>/If' incorporates:
   *  Inport: '<S559>/In1'
   *  Inport: '<S560>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration23'
   *  S-Function (motohawk_sfun_calibration): '<S522>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S522>/override_enable'
   */
  if ((VIN_DATA_BYTE_5_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S522>/NewValue' incorporates:
     *  ActionPort: '<S559>/Action Port'
     */
    rtb_Merge_fj = (VIN_DATA_BYTE_5_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S559>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(183);
    }

    /* End of Outputs for SubSystem: '<S522>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S522>/OldValue' incorporates:
     *  ActionPort: '<S560>/Action Port'
     */
    rtb_Merge_fj = (VIN_DATA_BYTE_5_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S560>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs31/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(184);
    }

    /* End of Outputs for SubSystem: '<S522>/OldValue' */
  }

  /* End of If: '<S522>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S493>/Send CAN Messages10' */
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

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe26' */
  (DATA_MODE_2_Prb_DataStore()) = (DATA_MODE_2_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe27' */
  (VIN_DATA_BYTE_1_Prb_DataStore()) = (VIN_DATA_BYTE_1_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe28' */
  (VIN_DATA_BYTE_2_Prb_DataStore()) = (VIN_DATA_BYTE_2_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe29' */
  (VIN_DATA_BYTE_3_Prb_DataStore()) = (VIN_DATA_BYTE_3_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe30' */
  (VIN_DATA_BYTE_4_Prb_DataStore()) = (VIN_DATA_BYTE_4_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe31' */
  (VIN_DATA_BYTE_5_Prb_DataStore()) = (VIN_DATA_BYTE_5_DataStore());

  /* If: '<S523>/If' incorporates:
   *  Inport: '<S561>/In1'
   *  Inport: '<S562>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration24'
   *  S-Function (motohawk_sfun_calibration): '<S523>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S523>/override_enable'
   */
  if ((DATA_MODE_3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S523>/NewValue' incorporates:
     *  ActionPort: '<S561>/Action Port'
     */
    rtb_Merge_ah = (DATA_MODE_3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S561>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(185);
    }

    /* End of Outputs for SubSystem: '<S523>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S523>/OldValue' incorporates:
     *  ActionPort: '<S562>/Action Port'
     */
    rtb_Merge_ah = (DATA_MODE_3_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S562>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs32/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(186);
    }

    /* End of Outputs for SubSystem: '<S523>/OldValue' */
  }

  /* End of If: '<S523>/If' */

  /* If: '<S524>/If' incorporates:
   *  Inport: '<S563>/In1'
   *  Inport: '<S564>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration25'
   *  S-Function (motohawk_sfun_calibration): '<S524>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S524>/override_enable'
   */
  if ((VIN_DATA_BYTE_6_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S524>/NewValue' incorporates:
     *  ActionPort: '<S563>/Action Port'
     */
    rtb_Merge_ko = (VIN_DATA_BYTE_6_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S563>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(187);
    }

    /* End of Outputs for SubSystem: '<S524>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S524>/OldValue' incorporates:
     *  ActionPort: '<S564>/Action Port'
     */
    rtb_Merge_ko = (VIN_DATA_BYTE_6_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S564>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs33/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(188);
    }

    /* End of Outputs for SubSystem: '<S524>/OldValue' */
  }

  /* End of If: '<S524>/If' */

  /* If: '<S525>/If' incorporates:
   *  Inport: '<S565>/In1'
   *  Inport: '<S566>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration26'
   *  S-Function (motohawk_sfun_calibration): '<S525>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S525>/override_enable'
   */
  if ((VIN_DATA_BYTE_7_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S525>/NewValue' incorporates:
     *  ActionPort: '<S565>/Action Port'
     */
    rtb_Merge_pj = (VIN_DATA_BYTE_7_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S565>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(189);
    }

    /* End of Outputs for SubSystem: '<S525>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S525>/OldValue' incorporates:
     *  ActionPort: '<S566>/Action Port'
     */
    rtb_Merge_pj = (VIN_DATA_BYTE_7_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S566>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs34/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(190);
    }

    /* End of Outputs for SubSystem: '<S525>/OldValue' */
  }

  /* End of If: '<S525>/If' */

  /* If: '<S526>/If' incorporates:
   *  Inport: '<S567>/In1'
   *  Inport: '<S568>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration27'
   *  S-Function (motohawk_sfun_calibration): '<S526>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S526>/override_enable'
   */
  if ((VIN_DATA_BYTE_8_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S526>/NewValue' incorporates:
     *  ActionPort: '<S567>/Action Port'
     */
    rtb_Merge_cd = (VIN_DATA_BYTE_8_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S567>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(191);
    }

    /* End of Outputs for SubSystem: '<S526>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S526>/OldValue' incorporates:
     *  ActionPort: '<S568>/Action Port'
     */
    rtb_Merge_cd = (VIN_DATA_BYTE_8_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S568>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs35/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(192);
    }

    /* End of Outputs for SubSystem: '<S526>/OldValue' */
  }

  /* End of If: '<S526>/If' */

  /* If: '<S527>/If' incorporates:
   *  Inport: '<S569>/In1'
   *  Inport: '<S570>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration28'
   *  S-Function (motohawk_sfun_calibration): '<S527>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S527>/override_enable'
   */
  if ((VIN_DATA_BYTE_9_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S527>/NewValue' incorporates:
     *  ActionPort: '<S569>/Action Port'
     */
    rtb_Merge_ca = (VIN_DATA_BYTE_9_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S569>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(193);
    }

    /* End of Outputs for SubSystem: '<S527>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S527>/OldValue' incorporates:
     *  ActionPort: '<S570>/Action Port'
     */
    rtb_Merge_ca = (VIN_DATA_BYTE_9_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S570>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs36/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(194);
    }

    /* End of Outputs for SubSystem: '<S527>/OldValue' */
  }

  /* End of If: '<S527>/If' */

  /* If: '<S528>/If' incorporates:
   *  Inport: '<S571>/In1'
   *  Inport: '<S572>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration29'
   *  S-Function (motohawk_sfun_calibration): '<S528>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S528>/override_enable'
   */
  if ((VIN_DATA_BYTE_10_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S528>/NewValue' incorporates:
     *  ActionPort: '<S571>/Action Port'
     */
    rtb_Merge_mw = (VIN_DATA_BYTE_10_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S571>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(195);
    }

    /* End of Outputs for SubSystem: '<S528>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S528>/OldValue' incorporates:
     *  ActionPort: '<S572>/Action Port'
     */
    rtb_Merge_mw = (VIN_DATA_BYTE_10_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S572>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs37/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(196);
    }

    /* End of Outputs for SubSystem: '<S528>/OldValue' */
  }

  /* End of If: '<S528>/If' */

  /* If: '<S529>/If' incorporates:
   *  Inport: '<S573>/In1'
   *  Inport: '<S574>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration30'
   *  S-Function (motohawk_sfun_calibration): '<S529>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S529>/override_enable'
   */
  if ((VIN_DATA_BYTE_11_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S529>/NewValue' incorporates:
     *  ActionPort: '<S573>/Action Port'
     */
    rtb_Merge_bm = (VIN_DATA_BYTE_11_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S573>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(197);
    }

    /* End of Outputs for SubSystem: '<S529>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S529>/OldValue' incorporates:
     *  ActionPort: '<S574>/Action Port'
     */
    rtb_Merge_bm = (VIN_DATA_BYTE_11_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S574>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs38/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(198);
    }

    /* End of Outputs for SubSystem: '<S529>/OldValue' */
  }

  /* End of If: '<S529>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S493>/Send CAN Messages11' */
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

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe32' */
  (DATA_MODE_3_Prb_DataStore()) = (DATA_MODE_3_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe33' */
  (VIN_DATA_BYTE_6_Prb_DataStore()) = (VIN_DATA_BYTE_6_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe34' */
  (VIN_DATA_BYTE_7_Prb_DataStore()) = (VIN_DATA_BYTE_7_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe35' */
  (VIN_DATA_BYTE_8_Prb_DataStore()) = (VIN_DATA_BYTE_8_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe36' */
  (VIN_DATA_BYTE_9_Prb_DataStore()) = (VIN_DATA_BYTE_9_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe37' */
  (VIN_DATA_BYTE_10_Prb_DataStore()) = (VIN_DATA_BYTE_10_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe38' */
  (VIN_DATA_BYTE_11_Prb_DataStore()) = (VIN_DATA_BYTE_11_DataStore());

  /* If: '<S530>/If' incorporates:
   *  Inport: '<S575>/In1'
   *  Inport: '<S576>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration31'
   *  S-Function (motohawk_sfun_calibration): '<S530>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S530>/override_enable'
   */
  if ((DATA_MODE_4_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S530>/NewValue' incorporates:
     *  ActionPort: '<S575>/Action Port'
     */
    rtb_Merge_dh = (DATA_MODE_4_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S575>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(199);
    }

    /* End of Outputs for SubSystem: '<S530>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S530>/OldValue' incorporates:
     *  ActionPort: '<S576>/Action Port'
     */
    rtb_Merge_dh = (DATA_MODE_4_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S576>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs39/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(200);
    }

    /* End of Outputs for SubSystem: '<S530>/OldValue' */
  }

  /* End of If: '<S530>/If' */

  /* If: '<S531>/If' incorporates:
   *  Inport: '<S577>/In1'
   *  Inport: '<S578>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration32'
   *  S-Function (motohawk_sfun_calibration): '<S531>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S531>/override_enable'
   */
  if ((VIN_DATA_BYTE_12_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S531>/NewValue' incorporates:
     *  ActionPort: '<S577>/Action Port'
     */
    rtb_Merge_j = (VIN_DATA_BYTE_12_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S577>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(201);
    }

    /* End of Outputs for SubSystem: '<S531>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S531>/OldValue' incorporates:
     *  ActionPort: '<S578>/Action Port'
     */
    rtb_Merge_j = (VIN_DATA_BYTE_12_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S578>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs40/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(202);
    }

    /* End of Outputs for SubSystem: '<S531>/OldValue' */
  }

  /* End of If: '<S531>/If' */

  /* If: '<S532>/If' incorporates:
   *  Inport: '<S579>/In1'
   *  Inport: '<S580>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration33'
   *  S-Function (motohawk_sfun_calibration): '<S532>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S532>/override_enable'
   */
  if ((VIN_DATA_BYTE_13_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S532>/NewValue' incorporates:
     *  ActionPort: '<S579>/Action Port'
     */
    rtb_Merge_izg = (VIN_DATA_BYTE_13_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S579>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(203);
    }

    /* End of Outputs for SubSystem: '<S532>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S532>/OldValue' incorporates:
     *  ActionPort: '<S580>/Action Port'
     */
    rtb_Merge_izg = (VIN_DATA_BYTE_13_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S580>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs41/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(204);
    }

    /* End of Outputs for SubSystem: '<S532>/OldValue' */
  }

  /* End of If: '<S532>/If' */

  /* If: '<S533>/If' incorporates:
   *  Inport: '<S581>/In1'
   *  Inport: '<S582>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration34'
   *  S-Function (motohawk_sfun_calibration): '<S533>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S533>/override_enable'
   */
  if ((VIN_DATA_BYTE_14_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S533>/NewValue' incorporates:
     *  ActionPort: '<S581>/Action Port'
     */
    rtb_Merge_dv = (VIN_DATA_BYTE_14_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S581>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(205);
    }

    /* End of Outputs for SubSystem: '<S533>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S533>/OldValue' incorporates:
     *  ActionPort: '<S582>/Action Port'
     */
    rtb_Merge_dv = (VIN_DATA_BYTE_14_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S582>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs42/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(206);
    }

    /* End of Outputs for SubSystem: '<S533>/OldValue' */
  }

  /* End of If: '<S533>/If' */

  /* If: '<S534>/If' incorporates:
   *  Inport: '<S583>/In1'
   *  Inport: '<S584>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration35'
   *  S-Function (motohawk_sfun_calibration): '<S534>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S534>/override_enable'
   */
  if ((VIN_DATA_BYTE_15_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S534>/NewValue' incorporates:
     *  ActionPort: '<S583>/Action Port'
     */
    rtb_Merge_hod = (VIN_DATA_BYTE_15_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S583>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(207);
    }

    /* End of Outputs for SubSystem: '<S534>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S534>/OldValue' incorporates:
     *  ActionPort: '<S584>/Action Port'
     */
    rtb_Merge_hod = (VIN_DATA_BYTE_15_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S584>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs43/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(208);
    }

    /* End of Outputs for SubSystem: '<S534>/OldValue' */
  }

  /* End of If: '<S534>/If' */

  /* If: '<S535>/If' incorporates:
   *  Inport: '<S585>/In1'
   *  Inport: '<S586>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration36'
   *  S-Function (motohawk_sfun_calibration): '<S535>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S535>/override_enable'
   */
  if ((VIN_DATA_BYTE_16_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S535>/NewValue' incorporates:
     *  ActionPort: '<S585>/Action Port'
     */
    rtb_Merge_ov = (VIN_DATA_BYTE_16_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S585>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(209);
    }

    /* End of Outputs for SubSystem: '<S535>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S535>/OldValue' incorporates:
     *  ActionPort: '<S586>/Action Port'
     */
    rtb_Merge_ov = (VIN_DATA_BYTE_16_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S586>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs44/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(210);
    }

    /* End of Outputs for SubSystem: '<S535>/OldValue' */
  }

  /* End of If: '<S535>/If' */

  /* If: '<S536>/If' incorporates:
   *  Inport: '<S587>/In1'
   *  Inport: '<S588>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration37'
   *  S-Function (motohawk_sfun_calibration): '<S536>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S536>/override_enable'
   */
  if ((VIN_DATA_BYTE_17_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S536>/NewValue' incorporates:
     *  ActionPort: '<S587>/Action Port'
     */
    rtb_Merge_k2 = (VIN_DATA_BYTE_17_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S587>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(211);
    }

    /* End of Outputs for SubSystem: '<S536>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S536>/OldValue' incorporates:
     *  ActionPort: '<S588>/Action Port'
     */
    rtb_Merge_k2 = (VIN_DATA_BYTE_17_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S588>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs45/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(212);
    }

    /* End of Outputs for SubSystem: '<S536>/OldValue' */
  }

  /* End of If: '<S536>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S493>/Send CAN Messages12' */
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

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe39' */
  (DATA_MODE_4_Ovr_DataStore()) = (DATA_MODE_4_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe40' */
  (VIN_DATA_BYTE_12_Prb_DataStore()) = (VIN_DATA_BYTE_12_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe41' */
  (VIN_DATA_BYTE_13_Prb_DataStore()) = (VIN_DATA_BYTE_13_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe42' */
  (VIN_DATA_BYTE_14_Prb_DataStore()) = (VIN_DATA_BYTE_14_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe43' */
  (VIN_DATA_BYTE_15_Prb_DataStore()) = (VIN_DATA_BYTE_15_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe44' */
  (VIN_DATA_BYte_16_Prb_DataStore()) = (VIN_DATA_BYTE_16_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe45' */
  (VIN_DATA_BYTE_17_Prb_DataStore()) = (VIN_DATA_BYTE_17_DataStore());

  /* If: '<S511>/If' incorporates:
   *  Inport: '<S537>/In1'
   *  Inport: '<S538>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S511>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S511>/override_enable'
   */
  if ((Mode_1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S511>/NewValue' incorporates:
     *  ActionPort: '<S537>/Action Port'
     */
    rtb_Merge_md = (Mode_1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S537>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(161);
    }

    /* End of Outputs for SubSystem: '<S511>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S511>/OldValue' incorporates:
     *  ActionPort: '<S538>/Action Port'
     */
    rtb_Merge_md = (Mode_1_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S538>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs20/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(162);
    }

    /* End of Outputs for SubSystem: '<S511>/OldValue' */
  }

  /* End of If: '<S511>/If' */

  /* If: '<S512>/If' incorporates:
   *  Inport: '<S539>/In1'
   *  Inport: '<S540>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S512>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S512>/override_enable'
   */
  if ((Mode_2_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S512>/NewValue' incorporates:
     *  ActionPort: '<S539>/Action Port'
     */
    rtb_Merge_gp = (Mode_2_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S539>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(163);
    }

    /* End of Outputs for SubSystem: '<S512>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S512>/OldValue' incorporates:
     *  ActionPort: '<S540>/Action Port'
     */
    rtb_Merge_gp = (Mode_2_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S540>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs21/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(164);
    }

    /* End of Outputs for SubSystem: '<S512>/OldValue' */
  }

  /* End of If: '<S512>/If' */

  /* If: '<S513>/If' incorporates:
   *  Inport: '<S541>/In1'
   *  Inport: '<S542>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S513>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S513>/override_enable'
   */
  if ((Mode_3_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S513>/NewValue' incorporates:
     *  ActionPort: '<S541>/Action Port'
     */
    rtb_Merge_mt = (Mode_3_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S541>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(165);
    }

    /* End of Outputs for SubSystem: '<S513>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S513>/OldValue' incorporates:
     *  ActionPort: '<S542>/Action Port'
     */
    rtb_Merge_mt = (Mode_3_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S542>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs22/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(166);
    }

    /* End of Outputs for SubSystem: '<S513>/OldValue' */
  }

  /* End of If: '<S513>/If' */

  /* If: '<S514>/If' incorporates:
   *  Inport: '<S543>/In1'
   *  Inport: '<S544>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S514>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S514>/override_enable'
   */
  if ((Mode_4_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S514>/NewValue' incorporates:
     *  ActionPort: '<S543>/Action Port'
     */
    rtb_Merge_kq = (Mode_4_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S543>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(167);
    }

    /* End of Outputs for SubSystem: '<S514>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S514>/OldValue' incorporates:
     *  ActionPort: '<S544>/Action Port'
     */
    rtb_Merge_kq = (Mode_4_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S544>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs23/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(168);
    }

    /* End of Outputs for SubSystem: '<S514>/OldValue' */
  }

  /* End of If: '<S514>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S493>/Send CAN Messages8' */
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

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe20' */
  (Mode_1_Prb_DataStore()) = (Mode_1_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe21' */
  (Mode_2_Prb_DataStore()) = (Mode_2_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe22' */
  (Mode_3_Prb_DataStore()) = (Mode_3_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe23' */
  (Mode_4_Prb_DataStore()) = (Mode_4_DataStore());

  /* If: '<S515>/If' incorporates:
   *  Inport: '<S545>/In1'
   *  Inport: '<S546>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration16'
   *  S-Function (motohawk_sfun_calibration): '<S515>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S515>/override_enable'
   */
  if ((DATA_MODE_1_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S515>/NewValue' incorporates:
     *  ActionPort: '<S545>/Action Port'
     */
    rtb_Merge_jo = (DATA_MODE_1_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S545>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(169);
    }

    /* End of Outputs for SubSystem: '<S515>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S515>/OldValue' incorporates:
     *  ActionPort: '<S546>/Action Port'
     */
    rtb_Merge_jo = (Data_Mode_1_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S546>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs24/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(170);
    }

    /* End of Outputs for SubSystem: '<S515>/OldValue' */
  }

  /* End of If: '<S515>/If' */

  /* If: '<S516>/If' incorporates:
   *  Inport: '<S547>/In1'
   *  Inport: '<S548>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration17'
   *  S-Function (motohawk_sfun_calibration): '<S516>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S516>/override_enable'
   */
  if ((VEH_ID_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S516>/NewValue' incorporates:
     *  ActionPort: '<S547>/Action Port'
     */
    rtb_Merge_kz = (VEH_ID_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S547>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(171);
    }

    /* End of Outputs for SubSystem: '<S516>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S516>/OldValue' incorporates:
     *  ActionPort: '<S548>/Action Port'
     */
    rtb_Merge_kz = (VEH_ID_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S548>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/Driver Ouputs/VIN Output and Button Probing/motohawk_override_abs25/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(172);
    }

    /* End of Outputs for SubSystem: '<S516>/OldValue' */
  }

  /* End of If: '<S516>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S493>/Send CAN Messages9' */
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

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe24' */
  (DATA_MODE_1_Prb_DataStore()) = (Data_Mode_1_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S493>/motohawk_probe25' */
  (VEH_ID_Prb_DataStore()) = (VEH_ID_DataStore());

  /* If: '<S621>/If' incorporates:
   *  Inport: '<S626>/In1'
   *  Inport: '<S627>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S201>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S621>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S621>/override_enable'
   */
  if ((Current_Limit_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S621>/NewValue' incorporates:
     *  ActionPort: '<S626>/Action Port'
     */
    rtb_Merge_m4 = (Current_Limit_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S626>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(243);
    }

    /* End of Outputs for SubSystem: '<S621>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S621>/OldValue' incorporates:
     *  ActionPort: '<S627>/Action Port'
     */
    rtb_Merge_m4 = (MaxAmpCal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S627>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(244);
    }

    /* End of Outputs for SubSystem: '<S621>/OldValue' */
  }

  /* End of If: '<S621>/If' */

  /* If: '<S622>/If' incorporates:
   *  Inport: '<S628>/In1'
   *  Inport: '<S629>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S201>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S622>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S622>/override_enable'
   */
  if ((Voltage_Limit_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S622>/NewValue' incorporates:
     *  ActionPort: '<S628>/Action Port'
     */
    rtb_Merge_aq = (Voltage_Limit_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S628>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(245);
    }

    /* End of Outputs for SubSystem: '<S622>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S622>/OldValue' incorporates:
     *  ActionPort: '<S629>/Action Port'
     */
    rtb_Merge_aq = (MaxVoltageCal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S629>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(246);
    }

    /* End of Outputs for SubSystem: '<S622>/OldValue' */
  }

  /* End of If: '<S622>/If' */

  /* S-Function (motohawk_sfun_fault_action): '<S372>/motohawk_fault_action'
   *
   * Regarding '<S372>/motohawk_fault_action':
     Get Fault Action Status: EatonChargerFault
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    Mooventure2016_Rev5_B.s372_ChargeSystemFault = GetFaultActionStatus(8);
  }

  /* If: '<S623>/If' incorporates:
   *  Inport: '<S630>/In1'
   *  Inport: '<S631>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S623>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S623>/override_enable'
   */
  if ((Charge_Falt_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S623>/NewValue' incorporates:
     *  ActionPort: '<S630>/Action Port'
     */
    rtb_Merge_opu = (Charge_Falt_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S630>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(247);
    }

    /* End of Outputs for SubSystem: '<S623>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S623>/OldValue' incorporates:
     *  ActionPort: '<S631>/Action Port'
     */
    rtb_Merge_opu = Mooventure2016_Rev5_B.s372_ChargeSystemFault;

    /* S-Function (motohawk_sfun_code_cover): '<S631>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(248);
    }

    /* End of Outputs for SubSystem: '<S623>/OldValue' */
  }

  /* End of If: '<S623>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S200>/Read CAN Message5' */
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
      Mooventure2016_Rev5_B.s200_TripAmpHoursIn = ((real_T) tmp0) / ((real_T)
        100);
      Mooventure2016_Rev5_B.s200_TripAmpHoursOut = ((real_T) tmp1) / ((real_T)
        100);
      Mooventure2016_Rev5_B.s200_StateOfChargeMax = ((real_T) tmp2) / ((real_T)
        2);
      Mooventure2016_Rev5_B.s200_StateOfChargeMin = ((real_T) tmp3) / ((real_T)
        2);
      Mooventure2016_Rev5_B.s200_TAH_RollingCounter = (real_T) tmp4;
    }
  }

  /* RelationalOperator: '<S372>/Relational Operator' */
  rtb_motohawk_fault_action1_g = (Mooventure2016_Rev5_B.s271_Sum1 <=
    Mooventure2016_Rev5_B.s200_StateOfChargeMax);

  /* Logic: '<S372>/Logical Operator2' */
  Mooventure2016_Rev5_B.s372_ChargeComplete = !rtb_motohawk_fault_action1_g;

  /* If: '<S624>/If' incorporates:
   *  Inport: '<S632>/In1'
   *  Inport: '<S633>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S624>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S624>/override_enable'
   */
  if ((Charge_Complete_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S624>/NewValue' incorporates:
     *  ActionPort: '<S632>/Action Port'
     */
    rtb_Merge_oz = (Charge_Complete_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S632>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(249);
    }

    /* End of Outputs for SubSystem: '<S624>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S624>/OldValue' incorporates:
     *  ActionPort: '<S633>/Action Port'
     */
    rtb_Merge_oz = Mooventure2016_Rev5_B.s372_ChargeComplete;

    /* S-Function (motohawk_sfun_code_cover): '<S633>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(250);
    }

    /* End of Outputs for SubSystem: '<S624>/OldValue' */
  }

  /* End of If: '<S624>/If' */

  /* If: '<S309>/If' incorporates:
   *  Inport: '<S324>/In1'
   *  Inport: '<S325>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S309>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S309>/override_enable'
   */
  if ((InputCurrentLimitMax_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S309>/NewValue' incorporates:
     *  ActionPort: '<S324>/Action Port'
     */
    rtb_Merge_lf = (InputCurrentLimitMax_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S324>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(69);
    }

    /* End of Outputs for SubSystem: '<S309>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S309>/OldValue' incorporates:
     *  ActionPort: '<S325>/Action Port'
     */
    rtb_Merge_lf = Mooventure2016_Rev5_B.s204_InputCurrentLimitMax;

    /* S-Function (motohawk_sfun_code_cover): '<S325>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(70);
    }

    /* End of Outputs for SubSystem: '<S309>/OldValue' */
  }

  /* End of If: '<S309>/If' */

  /* If: '<S310>/If' incorporates:
   *  Inport: '<S326>/In1'
   *  Inport: '<S327>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S310>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S310>/override_enable'
   */
  if ((InputCurrent_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S310>/NewValue' incorporates:
     *  ActionPort: '<S326>/Action Port'
     */
    rtb_Merge_hn = (InputCurrent_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S326>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(71);
    }

    /* End of Outputs for SubSystem: '<S310>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S310>/OldValue' incorporates:
     *  ActionPort: '<S327>/Action Port'
     */
    rtb_Merge_hn = Mooventure2016_Rev5_B.s204_InputCurrent;

    /* S-Function (motohawk_sfun_code_cover): '<S327>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(72);
    }

    /* End of Outputs for SubSystem: '<S310>/OldValue' */
  }

  /* End of If: '<S310>/If' */

  /* Logic: '<S372>/Logical Operator1' incorporates:
   *  Constant: '<S619>/Constant'
   *  Constant: '<S620>/Constant'
   *  Logic: '<S372>/Logical Operator'
   *  Logic: '<S372>/Logical Operator3'
   *  RelationalOperator: '<S372>/Relational Operator1'
   *  RelationalOperator: '<S619>/Compare'
   *  RelationalOperator: '<S620>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_data_read): '<S372>/motohawk_data_read'
   *  S-Function (motohawk_sfun_fault_action): '<S372>/motohawk_fault_action1'
   */
  Mooventure2016_Rev5_B.s372_ChargeEnable = ((((rtb_Merge_b == 2.0) ||
    (rtb_Merge_b == 1.0)) && rtb_motohawk_fault_action1_g && (rtb_Merge_hn <
    rtb_Merge_lf) && ((Charger_Auto_Start_DataStore()) != 0.0) &&
    Vehicle_Ready_DataStore() && (!GetFaultActionStatus(2))));

  /* If: '<S625>/If' incorporates:
   *  Inport: '<S634>/In1'
   *  Inport: '<S635>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S625>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S625>/override_enable'
   */
  if ((Charge_Enable_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S625>/NewValue' incorporates:
     *  ActionPort: '<S634>/Action Port'
     */
    rtb_Merge_ib = (Charge_Enable_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S634>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(251);
    }

    /* End of Outputs for SubSystem: '<S625>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S625>/OldValue' incorporates:
     *  ActionPort: '<S635>/Action Port'
     */
    rtb_Merge_ib = Mooventure2016_Rev5_B.s372_ChargeEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S635>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/EatonCharger/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(252);
    }

    /* End of Outputs for SubSystem: '<S625>/OldValue' */
  }

  /* End of If: '<S625>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S372>/Send CAN Messages' */
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

  /* S-Function (motohawk_sfun_data_write): '<S372>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ChargeEnable */
  {
    ChargeEnable_DataStore() = Mooventure2016_Rev5_B.s372_ChargeEnable;
  }

  /* RelationalOperator: '<S372>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration1'
   */
  rtb_RelationalOperator2_l = ((Mooventure2016_Rev5_B.s200_MaxCellVoltage >=
    (Max_Cell_Voltage_Limit_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S372>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Charge_Complete_Cell_Max_Volt */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(14, rtb_RelationalOperator2_l);
    UpdateFault(14);
  }

  /* S-Function (motohawk_sfun_probe): '<S372>/motohawk_probe1' */
  (Current_Limit_Probe_DataStore()) = (MaxAmpCal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S372>/motohawk_probe2' */
  (Voltage_Limit_Probe_DataStore()) = (MaxVoltageCal_DataStore());

  /* S-Function (motohawk_sfun_data_read): '<S373>/motohawk_data_read2' */
  rtb_motohawk_fault_action1_g = Torque_Enable_DataStore();

  /* Product: '<S373>/Product' */
  Mooventure2016_Rev5_B.s373_VSC_WheelTorqueRequest =
    Mooventure2016_Rev5_B.s79_Switch * (real_T)rtb_motohawk_fault_action1_g;

  /* If: '<S640>/If' incorporates:
   *  Inport: '<S659>/In1'
   *  Inport: '<S660>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S640>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S640>/override_enable'
   */
  if ((VSC_WheelTorqueRequest_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S640>/NewValue' incorporates:
     *  ActionPort: '<S659>/Action Port'
     */
    rtb_Merge_kv = (VSC_WheelTorqueRequest_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S659>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(257);
    }

    /* End of Outputs for SubSystem: '<S640>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S640>/OldValue' incorporates:
     *  ActionPort: '<S660>/Action Port'
     */
    rtb_Merge_kv = Mooventure2016_Rev5_B.s373_VSC_WheelTorqueRequest;

    /* S-Function (motohawk_sfun_code_cover): '<S660>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(258);
    }

    /* End of Outputs for SubSystem: '<S640>/OldValue' */
  }

  /* End of If: '<S640>/If' */

  /* S-Function (motohawk_sfun_data_read): '<S373>/motohawk_data_read3' */
  Mooventure2016_Rev5_B.s373_VSC_IPTEnable = Vehicle_Ready_DataStore();

  /* If: '<S641>/If' incorporates:
   *  Inport: '<S661>/In1'
   *  Inport: '<S662>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S641>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S641>/override_enable'
   */
  if ((VSC_IPTWakeup_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S641>/NewValue' incorporates:
     *  ActionPort: '<S661>/Action Port'
     */
    rtb_Merge_e0 = (VSC_IPTWakeup_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S661>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(259);
    }

    /* End of Outputs for SubSystem: '<S641>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S641>/OldValue' incorporates:
     *  ActionPort: '<S662>/Action Port'
     */
    rtb_Merge_e0 = Mooventure2016_Rev5_B.s373_VSC_IPTEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S662>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(260);
    }

    /* End of Outputs for SubSystem: '<S641>/OldValue' */
  }

  /* End of If: '<S641>/If' */

  /* If: '<S642>/If' incorporates:
   *  Inport: '<S663>/In1'
   *  Inport: '<S664>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S642>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S642>/override_enable'
   */
  if ((VSC_TRSPosition_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S642>/NewValue' incorporates:
     *  ActionPort: '<S663>/Action Port'
     */
    rtb_Merge_kf = (VSC_TRSPosition_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S663>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(261);
    }

    /* End of Outputs for SubSystem: '<S642>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S642>/OldValue' incorporates:
     *  ActionPort: '<S664>/Action Port'
     */
    rtb_Merge_kf = Mooventure2016_Rev5_B.s300_posOut;

    /* S-Function (motohawk_sfun_code_cover): '<S664>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(262);
    }

    /* End of Outputs for SubSystem: '<S642>/OldValue' */
  }

  /* End of If: '<S642>/If' */

  /* DataTypeConversion: '<S9>/Data Type Conversion' */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s9_motor_Enable != 0.0);

  /* Stateflow: '<S373>/OnOff Delay' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_data_read): '<S373>/motohawk_data_read1'
   */
  Mooventure2016_Rev5_DWork.s637_presentTicks =
    Mooventure2016_Rev5_M->Timing.clockTick0;
  Mooventure2016_Rev5_DWork.s637_elapsedTicks =
    Mooventure2016_Rev5_DWork.s637_presentTicks -
    Mooventure2016_Rev5_DWork.s637_previousTicks;
  Mooventure2016_Rev5_DWork.s637_previousTicks =
    Mooventure2016_Rev5_DWork.s637_presentTicks;
  if ((uint32_T)Mooventure2016_Rev5_DWork.s637_temporalCounter_i1 +
      Mooventure2016_Rev5_DWork.s637_elapsedTicks <= 7U) {
    Mooventure2016_Rev5_DWork.s637_temporalCounter_i1 = (uint8_T)((uint32_T)
      Mooventure2016_Rev5_DWork.s637_temporalCounter_i1 +
      Mooventure2016_Rev5_DWork.s637_elapsedTicks);
  } else {
    Mooventure2016_Rev5_DWork.s637_temporalCounter_i1 = 7U;
  }

  /* Gateway: Foreground/Outputs/IPT Outputs/OnOff Delay */
  /* During: Foreground/Outputs/IPT Outputs/OnOff Delay */
  if (Mooventure2016_Rev5_DWork.s637_is_active_c4_Mooventure2016_Rev5 == 0) {
    /* Entry: Foreground/Outputs/IPT Outputs/OnOff Delay */
    Mooventure2016_Rev5_DWork.s637_is_active_c4_Mooventure2016_Rev5 = 1U;

    /* Transition: '<S637>:78' */
    Mooventure2016_Rev5_DWork.s637_is_c4_Mooventure2016_Rev5 =
      Mooventure2016_Rev5_IN_Init_n;
    Mooventure2016_Rev5_DWork.s637_temporalCounter_i1 = 0U;
  } else {
    switch (Mooventure2016_Rev5_DWork.s637_is_c4_Mooventure2016_Rev5) {
     case Mooventure2016_Rev5_IN_IPTAwake:
      /* During 'IPTAwake': '<S637>:79' */
      if ((uint32_T)Mooventure2016_Rev5_DWork.s637_temporalCounter_i1 >= 3U) {
        /* Transition: '<S637>:83' */
        Mooventure2016_Rev5_DWork.s637_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_IPTEnable;
        Mooventure2016_Rev5_DWork.s637_temporalCounter_i1 = 0U;
      } else {
        Mooventure2016_Rev5_B.s637_IPTWake = TRUE;
        Mooventure2016_Rev5_B.s637_IPTEnable = FALSE;
        Mooventure2016_Rev5_B.s637_MotorEnable = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_IPTEnable:
      /* During 'IPTEnable': '<S637>:82' */
      if (rtb_LogicalOperator5 && ((uint32_T)
           Mooventure2016_Rev5_DWork.s637_temporalCounter_i1 >= 5U)) {
        /* Transition: '<S637>:96' */
        Mooventure2016_Rev5_DWork.s637_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_MotorDisabled;

        /* Entry 'MotorDisabled': '<S637>:9' */
        Mooventure2016_Rev5_DWork.s637_motorcount = 0;
      } else {
        Mooventure2016_Rev5_B.s637_IPTWake = TRUE;
        Mooventure2016_Rev5_B.s637_IPTEnable = TRUE;
        Mooventure2016_Rev5_B.s637_MotorEnable = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_Init_n:
      /* During 'Init': '<S637>:76' */
      if (Vehicle_Ready_DataStore() && ((uint32_T)
           Mooventure2016_Rev5_DWork.s637_temporalCounter_i1 >= 5U)) {
        /* Transition: '<S637>:95' */
        Mooventure2016_Rev5_DWork.s637_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_IPTAwake;
        Mooventure2016_Rev5_DWork.s637_temporalCounter_i1 = 0U;
      } else {
        Mooventure2016_Rev5_B.s637_MotorEnable = FALSE;
        Mooventure2016_Rev5_B.s637_IPTWake = FALSE;
        Mooventure2016_Rev5_B.s637_IPTEnable = FALSE;
      }
      break;

     case Mooventure2016_Rev5_IN_MotorDisabled:
      /* During 'MotorDisabled': '<S637>:9' */
      if (rtb_LogicalOperator5) {
        /* Transition: '<S637>:60' */
        Mooventure2016_Rev5_DWork.s637_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_TimerRunningOne;
      } else {
        Mooventure2016_Rev5_B.s637_MotorEnable = FALSE;
        Mooventure2016_Rev5_B.s637_IPTWake = TRUE;
        Mooventure2016_Rev5_B.s637_IPTEnable = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_MotorEnabled:
      /* During 'MotorEnabled': '<S637>:59' */
      if (!rtb_LogicalOperator5) {
        /* Transition: '<S637>:65' */
        Mooventure2016_Rev5_DWork.s637_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_TimerRunningTwo;
      } else {
        Mooventure2016_Rev5_B.s637_MotorEnable = TRUE;
        Mooventure2016_Rev5_B.s637_IPTWake = TRUE;
        Mooventure2016_Rev5_B.s637_IPTEnable = TRUE;
      }
      break;

     case Mooventure2016_Rev5_IN_TimerRunningOne:
      /* During 'TimerRunningOne': '<S637>:50' */
      if (Mooventure2016_Rev5_DWork.s637_motorcount >=
          (Motor_Kill_Delay_DataStore())) {
        /* Transition: '<S637>:62' */
        Mooventure2016_Rev5_DWork.s637_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_MotorEnabled;

        /* Entry 'MotorEnabled': '<S637>:59' */
        Mooventure2016_Rev5_DWork.s637_motorcount = 0;
      } else if (!rtb_LogicalOperator5) {
        /* Transition: '<S637>:64' */
        Mooventure2016_Rev5_DWork.s637_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_MotorDisabled;

        /* Entry 'MotorDisabled': '<S637>:9' */
        Mooventure2016_Rev5_DWork.s637_motorcount = 0;
      } else {
        Mooventure2016_Rev5_DWork.s637_motorcount =
          Mooventure2016_Rev5_DWork.s637_motorcount + 1;
      }
      break;

     case Mooventure2016_Rev5_IN_TimerRunningTwo:
      /* During 'TimerRunningTwo': '<S637>:57' */
      if (rtb_LogicalOperator5) {
        /* Transition: '<S637>:67' */
        Mooventure2016_Rev5_DWork.s637_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_MotorEnabled;

        /* Entry 'MotorEnabled': '<S637>:59' */
        Mooventure2016_Rev5_DWork.s637_motorcount = 0;
      } else if (Mooventure2016_Rev5_DWork.s637_motorcount >=
                 (Motor_Kill_Delay_DataStore())) {
        /* Transition: '<S637>:71' */
        Mooventure2016_Rev5_DWork.s637_is_c4_Mooventure2016_Rev5 =
          Mooventure2016_Rev5_IN_MotorDisabled;

        /* Entry 'MotorDisabled': '<S637>:9' */
        Mooventure2016_Rev5_DWork.s637_motorcount = 0;
      } else {
        Mooventure2016_Rev5_DWork.s637_motorcount =
          Mooventure2016_Rev5_DWork.s637_motorcount + 1;
      }
      break;

     default:
      /* Transition: '<S637>:78' */
      Mooventure2016_Rev5_DWork.s637_is_c4_Mooventure2016_Rev5 =
        Mooventure2016_Rev5_IN_Init_n;
      Mooventure2016_Rev5_DWork.s637_temporalCounter_i1 = 0U;
      break;
    }
  }

  /* End of Stateflow: '<S373>/OnOff Delay' */
  /* If: '<S643>/If' incorporates:
   *  Inport: '<S665>/In1'
   *  Inport: '<S666>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S643>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S643>/override_enable'
   */
  if ((VSC_MotorEnable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S643>/NewValue' incorporates:
     *  ActionPort: '<S665>/Action Port'
     */
    rtb_Merge_m3 = (VSC_MotorEnable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S665>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(263);
    }

    /* End of Outputs for SubSystem: '<S643>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S643>/OldValue' incorporates:
     *  ActionPort: '<S666>/Action Port'
     */
    rtb_Merge_m3 = Mooventure2016_Rev5_B.s637_MotorEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S666>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs13/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(264);
    }

    /* End of Outputs for SubSystem: '<S643>/OldValue' */
  }

  /* End of If: '<S643>/If' */

  /* If: '<S644>/If' incorporates:
   *  Inport: '<S667>/In1'
   *  Inport: '<S668>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S644>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S644>/override_enable'
   */
  if ((VSC_AntishudderDisable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S644>/NewValue' incorporates:
     *  ActionPort: '<S667>/Action Port'
     */
    rtb_Merge_cz = (VSC_AntishudderDisable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S667>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(265);
    }

    /* End of Outputs for SubSystem: '<S644>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S644>/OldValue' incorporates:
     *  ActionPort: '<S668>/Action Port'
     */
    rtb_Merge_cz = (VSC_AntishudderDisable_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S668>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs14/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(266);
    }

    /* End of Outputs for SubSystem: '<S644>/OldValue' */
  }

  /* End of If: '<S644>/If' */

  /* If: '<S645>/If' incorporates:
   *  Inport: '<S669>/In1'
   *  Inport: '<S670>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S645>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S645>/override_enable'
   */
  if ((VSC_IPTEnable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S645>/NewValue' incorporates:
     *  ActionPort: '<S669>/Action Port'
     */
    rtb_Merge_nr = (VSC_IPTEnable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S669>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(267);
    }

    /* End of Outputs for SubSystem: '<S645>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S645>/OldValue' incorporates:
     *  ActionPort: '<S670>/Action Port'
     */
    rtb_Merge_nr = Mooventure2016_Rev5_B.s373_VSC_IPTEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S670>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs15/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(268);
    }

    /* End of Outputs for SubSystem: '<S645>/OldValue' */
  }

  /* End of If: '<S645>/If' */

  /* If: '<S646>/If' incorporates:
   *  Inport: '<S671>/In1'
   *  Inport: '<S672>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_calibration): '<S646>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S646>/override_enable'
   */
  if ((VSC_SDPTActive_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S646>/NewValue' incorporates:
     *  ActionPort: '<S671>/Action Port'
     */
    rtb_Merge_nzb = (VSC_SDPTActive_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S671>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(269);
    }

    /* End of Outputs for SubSystem: '<S646>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S646>/OldValue' incorporates:
     *  ActionPort: '<S672>/Action Port'
     */
    rtb_Merge_nzb = (VSC_SDPTActive_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S672>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs16/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(270);
    }

    /* End of Outputs for SubSystem: '<S646>/OldValue' */
  }

  /* End of If: '<S646>/If' */

  /* If: '<S647>/If' incorporates:
   *  Inport: '<S673>/In1'
   *  Inport: '<S674>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S647>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S647>/override_enable'
   */
  if ((VSC_PowerWasteRequest_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S647>/NewValue' incorporates:
     *  ActionPort: '<S673>/Action Port'
     */
    rtb_Merge_go = (VSC_PowerWasteRequest_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S673>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(271);
    }

    /* End of Outputs for SubSystem: '<S647>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S647>/OldValue' incorporates:
     *  ActionPort: '<S674>/Action Port'
     */
    rtb_Merge_go = (VSC_PowerWasteRequest_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S674>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs17/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(272);
    }

    /* End of Outputs for SubSystem: '<S647>/OldValue' */
  }

  /* End of If: '<S647>/If' */

  /* If: '<S654>/If' incorporates:
   *  Inport: '<S687>/In1'
   *  Inport: '<S688>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S654>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S654>/override_enable'
   */
  if ((VSC_ActiveDischargeDisable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S654>/NewValue' incorporates:
     *  ActionPort: '<S687>/Action Port'
     */
    rtb_Merge_il = (VSC_ActiveDischargeDisable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S687>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(285);
    }

    /* End of Outputs for SubSystem: '<S654>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S654>/OldValue' incorporates:
     *  ActionPort: '<S688>/Action Port'
     */
    rtb_Merge_il = (VSC_ActiveDischargeDisable_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S688>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(286);
    }

    /* End of Outputs for SubSystem: '<S654>/OldValue' */
  }

  /* End of If: '<S654>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S373>/Send CAN Messages' */
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

  /* S-Function (motohawk_sfun_probe): '<S373>/motohawk_probe14' */
  (VSC_AntishudderDisable_Prb_DataStore()) =
    (VSC_AntishudderDisable_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S373>/motohawk_probe16' */
  (VSC_SDPTActive_Prb_DataStore()) = (VSC_SDPTActive_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S373>/motohawk_probe17' */
  (VSC_PowerWasteRequest_Prb_DataStore()) = (VSC_PowerWasteRequest_Cal_DataStore
    ());

  /* S-Function (motohawk_sfun_probe): '<S373>/motohawk_probe8' */
  (VSC_ActiveDischargeDisable_Prb_DataStore()) =
    (VSC_ActiveDischargeDisable_Cal_DataStore());

  /* Logic: '<S373>/Logical Operator' incorporates:
   *  Constant: '<S636>/Constant'
   *  RelationalOperator: '<S636>/Compare'
   *  S-Function (motohawk_sfun_data_read): '<S373>/motohawk_data_read4'
   *  S-Function (motohawk_sfun_data_read): '<S373>/motohawk_data_read5'
   */
  rtb_LogicalOperator5 = (Eaton_Plugged_In_DataStore() ||
    (Hybrid_State_DataStore() >= 1));

  /* Logic: '<S373>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S373>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s373_VSC_DCDCEnable = ((rtb_LogicalOperator5 &&
    Vehicle_Ready_DataStore()));

  /* If: '<S638>/If' incorporates:
   *  Inport: '<S655>/In1'
   *  Inport: '<S656>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S638>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S638>/override_enable'
   */
  if ((VSC_DCDCEnable_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S638>/NewValue' incorporates:
     *  ActionPort: '<S655>/Action Port'
     */
    rtb_Merge_hz = (VSC_DCDCEnable_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S655>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(253);
    }

    /* End of Outputs for SubSystem: '<S638>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S638>/OldValue' incorporates:
     *  ActionPort: '<S656>/Action Port'
     */
    rtb_Merge_hz = Mooventure2016_Rev5_B.s373_VSC_DCDCEnable;

    /* S-Function (motohawk_sfun_code_cover): '<S656>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(254);
    }

    /* End of Outputs for SubSystem: '<S638>/OldValue' */
  }

  /* End of If: '<S638>/If' */

  /* If: '<S639>/If' incorporates:
   *  Inport: '<S657>/In1'
   *  Inport: '<S658>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S639>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S639>/override_enable'
   */
  if ((VSC_DCOutputVoltageCmd_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S639>/NewValue' incorporates:
     *  ActionPort: '<S657>/Action Port'
     */
    rtb_Merge_je = (VSC_DCOutputVoltageCmd_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S657>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(255);
    }

    /* End of Outputs for SubSystem: '<S639>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S639>/OldValue' incorporates:
     *  ActionPort: '<S658>/Action Port'
     */
    rtb_Merge_je = (VSC_DCOutputVoltage_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S658>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(256);
    }

    /* End of Outputs for SubSystem: '<S639>/OldValue' */
  }

  /* End of If: '<S639>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S373>/Send CAN Messages3' */
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

  /* S-Function (motohawk_sfun_probe): '<S373>/motohawk_probe1' */
  (VSC_DCOutputVoltageCmd_Prb_DataStore()) = (VSC_DCOutputVoltage_Cal_DataStore());

  /* If: '<S649>/If' incorporates:
   *  Inport: '<S677>/In1'
   *  Inport: '<S678>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S649>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S649>/override_enable'
   */
  if ((IPT_Freq_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S649>/NewValue' incorporates:
     *  ActionPort: '<S677>/Action Port'
     */
    Mooventure2016_Rev5_B.s649_Merge = (IPT_Freq_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S677>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(275);
    }

    /* End of Outputs for SubSystem: '<S649>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S649>/OldValue' incorporates:
     *  ActionPort: '<S678>/Action Port'
     */
    Mooventure2016_Rev5_B.s649_Merge = (IPT_Frequency_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S678>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(276);
    }

    /* End of Outputs for SubSystem: '<S649>/OldValue' */
  }

  /* End of If: '<S649>/If' */

  /* If: '<S650>/If' incorporates:
   *  Inport: '<S679>/In1'
   *  Inport: '<S680>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S650>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S650>/override_enable'
   */
  if ((IPT_DutyCycle_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S650>/NewValue' incorporates:
     *  ActionPort: '<S679>/Action Port'
     */
    Mooventure2016_Rev5_B.s650_Merge = (IPT_DutyCycle_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S679>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(277);
    }

    /* End of Outputs for SubSystem: '<S650>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S650>/OldValue' incorporates:
     *  ActionPort: '<S680>/Action Port'
     */
    Mooventure2016_Rev5_B.s650_Merge = (IPT_Duty_Cycle_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S680>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(278);
    }

    /* End of Outputs for SubSystem: '<S650>/OldValue' */
  }

  /* End of If: '<S650>/If' */

  /* DataTypeConversion: '<S373>/Data Type Conversion1' */
  if (rtIsNaN(Mooventure2016_Rev5_B.s650_Merge) || rtIsInf
      (Mooventure2016_Rev5_B.s650_Merge)) {
    rtb_UnitDelay_m = 0.0;
  } else {
    rtb_UnitDelay_m = fmod(floor(Mooventure2016_Rev5_B.s650_Merge), 65536.0);
  }

  rtb_DataTypeConversion1_o = (int16_T)(rtb_UnitDelay_m < 0.0 ? (int16_T)
    -(int16_T)(uint16_T)-rtb_UnitDelay_m : (int16_T)(uint16_T)rtb_UnitDelay_m);

  /* End of DataTypeConversion: '<S373>/Data Type Conversion1' */

  /* DataTypeConversion: '<S373>/Data Type Conversion2' */
  if (rtIsNaN(Mooventure2016_Rev5_B.s649_Merge) || rtIsInf
      (Mooventure2016_Rev5_B.s649_Merge)) {
    rtb_UnitDelay_m = 0.0;
  } else {
    rtb_UnitDelay_m = fmod(floor(Mooventure2016_Rev5_B.s649_Merge),
      4.294967296E+9);
  }

  rtb_DataTypeConversion2 = rtb_UnitDelay_m < 0.0 ? (uint32_T)-(int32_T)
    (uint32_T)-rtb_UnitDelay_m : (uint32_T)rtb_UnitDelay_m;

  /* End of DataTypeConversion: '<S373>/Data Type Conversion2' */
  /* If: '<S648>/If' incorporates:
   *  Inport: '<S675>/In1'
   *  Inport: '<S676>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S648>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S648>/override_enable'
   */
  if ((VSC_MinDCVoltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S648>/NewValue' incorporates:
     *  ActionPort: '<S675>/Action Port'
     */
    rtb_Merge_e2 = (VSC_MinDCVoltage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S675>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(273);
    }

    /* End of Outputs for SubSystem: '<S648>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S648>/OldValue' incorporates:
     *  ActionPort: '<S676>/Action Port'
     */
    rtb_Merge_e2 = (VSC_MinDCVoltage_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S676>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(274);
    }

    /* End of Outputs for SubSystem: '<S648>/OldValue' */
  }

  /* End of If: '<S648>/If' */

  /* If: '<S651>/If' incorporates:
   *  Inport: '<S681>/In1'
   *  Inport: '<S682>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S651>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S651>/override_enable'
   */
  if ((VSC_MaxCurrOutputGen_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S651>/NewValue' incorporates:
     *  ActionPort: '<S681>/Action Port'
     */
    rtb_Merge_ee = (VSC_MaxCurrOutputGen_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S681>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(279);
    }

    /* End of Outputs for SubSystem: '<S651>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S651>/OldValue' incorporates:
     *  ActionPort: '<S682>/Action Port'
     */
    rtb_Merge_ee = (VSC_MaxCurrOutputGen_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S682>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(280);
    }

    /* End of Outputs for SubSystem: '<S651>/OldValue' */
  }

  /* End of If: '<S651>/If' */

  /* If: '<S652>/If' incorporates:
   *  Inport: '<S683>/In1'
   *  Inport: '<S684>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_calibration): '<S652>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S652>/override_enable'
   */
  if ((VSC_MaxCurrInputMotor_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S652>/NewValue' incorporates:
     *  ActionPort: '<S683>/Action Port'
     */
    rtb_Merge_pi = (VSC_MaxCurrInputMotor_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S683>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(281);
    }

    /* End of Outputs for SubSystem: '<S652>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S652>/OldValue' incorporates:
     *  ActionPort: '<S684>/Action Port'
     */
    rtb_Merge_pi = (VSC_MaxCurrInputGen_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S684>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(282);
    }

    /* End of Outputs for SubSystem: '<S652>/OldValue' */
  }

  /* End of If: '<S652>/If' */

  /* If: '<S653>/If' incorporates:
   *  Inport: '<S685>/In1'
   *  Inport: '<S686>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S653>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S653>/override_enable'
   */
  if ((VSC_MaxDCVoltage_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S653>/NewValue' incorporates:
     *  ActionPort: '<S685>/Action Port'
     */
    rtb_Merge_bi = (VSC_MaxDCVoltage_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S685>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(283);
    }

    /* End of Outputs for SubSystem: '<S653>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S653>/OldValue' incorporates:
     *  ActionPort: '<S686>/Action Port'
     */
    rtb_Merge_bi = (VSC_MaxDCVoltage_Cal_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S686>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Outputs/IPT Outputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(284);
    }

    /* End of Outputs for SubSystem: '<S653>/OldValue' */
  }

  /* End of If: '<S653>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S373>/Send CAN Messages1' */
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

  /* S-Function (motohawk_sfun_probe): '<S373>/motohawk_probe2' */
  (VSC_MinDCVoltage_Prb_DataStore()) = (VSC_MinDCVoltage_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S373>/motohawk_probe4' */
  (VSC_MaxCurrOutputGen_Prb_DataStore()) = (VSC_MaxCurrOutputGen_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S373>/motohawk_probe5' */
  (VSC_MaxCurrInputMotor_Prb_DataStore()) = (VSC_MaxCurrInputGen_Cal_DataStore());

  /* S-Function (motohawk_sfun_probe): '<S373>/motohawk_probe7' */
  (VSC_MaxDCVoltage_Prb_DataStore()) = (VSC_MaxDCVoltage_Cal_DataStore());

  /* Product: '<S169>/Product' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S169>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S169>/motohawk_data_read1'
   */
  Mooventure2016_Rev5_B.s169_MPGeGlobalAverage = MPGe_Average_Sum_DataStore() /
    MPGe_Average_Count_DataStore();

  /* MATLAB Function Block: '<S147>/Data Correction' */
  Mooventure2016_Rev5_DataCorrectionMotorFault
    (Mooventure2016_Rev5_B.s205_IPT_WheelTorqueDelivered,
     &Mooventure2016_Rev5_B.s147_sf_DataCorrection);

  /* Abs: '<S147>/Abs' */
  rtb_Product2_f = fabs(Mooventure2016_Rev5_B.s331_Merge);

  /* Product: '<S147>/Product1' incorporates:
   *  Product: '<S147>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration'
   */
  rtb_UnitDelay_o = rtb_Product2_f / (Gear_Ratio_DataStore()) *
    Mooventure2016_Rev5_B.s147_sf_DataCorrection.s65_torqueOut;

  /* Product: '<S147>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration1'
   */
  rtb_Product2_f = rtb_UnitDelay_o / (kW_Divisor_DataStore());

  /* Abs: '<S147>/Abs1' */
  rtb_Switch_hc = fabs(Mooventure2016_Rev5_B.s331_Merge);

  /* Product: '<S147>/Product4' incorporates:
   *  Product: '<S147>/Product3'
   *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration2'
   */
  rtb_UnitDelay_o = rtb_Product2_f / ((Wheel_Ratio_DataStore()) * rtb_Switch_hc);

  /* Product: '<S147>/Product5' incorporates:
   *  Product: '<S147>/Product6'
   *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration4'
   */
  rtb_Switch_hc = (Gasoline_Specific_Energy_DataStore()) / (rtb_UnitDelay_o *
    (Efficiency_Multiplier_DataStore()));

  /* Saturate: '<S147>/Saturation' */
  Mooventure2016_Rev5_B.s147_Saturation = rtb_Switch_hc >= 99.0 ? 99.0 :
    rtb_Switch_hc <= 0.0 ? 0.0 : rtb_Switch_hc;

  /* If: '<S165>/If' incorporates:
   *  Inport: '<S166>/In1'
   *  Inport: '<S167>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S165>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S165>/override_enable'
   */
  if ((MPGe_Instant_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S165>/NewValue' incorporates:
     *  ActionPort: '<S166>/Action Port'
     */
    rtb_Merge_gr = (MPGe_Instant_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S166>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(15);
    }

    /* End of Outputs for SubSystem: '<S165>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S165>/OldValue' incorporates:
     *  ActionPort: '<S167>/Action Port'
     */
    rtb_Merge_gr = Mooventure2016_Rev5_B.s147_Saturation;

    /* S-Function (motohawk_sfun_code_cover): '<S167>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Control/Infotainment/MPGe/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(16);
    }

    /* End of Outputs for SubSystem: '<S165>/OldValue' */
  }

  /* End of If: '<S165>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S374>/Send CAN Messages1' */
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

        if (Mooventure2016_Rev5_B.s169_MPGeGlobalAverage < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s169_MPGeGlobalAverage >
                   255.0000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(Mooventure2016_Rev5_B.s169_MPGeGlobalAverage);
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

  /* S-Function (motohawk_sfun_data_read): '<S170>/motohawk_data_read1' */
  Mooventure2016_Rev5_B.s170_motohawk_data_read1 = Previous_Average_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S168>/motohawk_data_read2' */
  Mooventure2016_Rev5_B.s168_motohawk_data_read2 = MPGe_Best_Average_DataStore();

  /* S-Function (motohawk_sfun_send_canmsgs): '<S374>/Send CAN Messages2' */
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

        if (Mooventure2016_Rev5_B.s170_motohawk_data_read1 < 0.0000000000F) {
          tmp2 = (uint16_T)(0U);
        } else if (Mooventure2016_Rev5_B.s170_motohawk_data_read1 >
                   655.3500000000F) {
          tmp2 = (uint16_T)(65535U);
        } else {
          tmp2 = (uint16_T)(Mooventure2016_Rev5_B.s170_motohawk_data_read1 *
                            (100.0000000000F));
        }

        if (Mooventure2016_Rev5_B.s168_motohawk_data_read2 < 0.0000000000F) {
          tmp3 = (uint16_T)(0U);
        } else if (Mooventure2016_Rev5_B.s168_motohawk_data_read2 >
                   655.3500000000F) {
          tmp3 = (uint16_T)(65535U);
        } else {
          tmp3 = (uint16_T)(Mooventure2016_Rev5_B.s168_motohawk_data_read2 *
                            (100.0000000000F));
        }

        if (Mooventure2016_Rev5_B.s169_MPGeGlobalAverage < 0.0000000000F) {
          tmp4 = (uint16_T)(0U);
        } else if (Mooventure2016_Rev5_B.s169_MPGeGlobalAverage >
                   655.3500000000F) {
          tmp4 = (uint16_T)(65535U);
        } else {
          tmp4 = (uint16_T)(Mooventure2016_Rev5_B.s169_MPGeGlobalAverage *
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

  /* Product: '<S149>/Product' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read1'
   */
  Mooventure2016_Rev5_B.s149_MPGe1MinuteAverage = Bar_MPGe_Average_Sum_DataStore
    () / Bar_MPGe_Average_Count_DataStore();

  /* S-Function block: <S194>/S-Function  */
  {
    int nSamples = 15 ;
    int io = 0;
    int iv;
    int ind_Ps = Mooventure2016_Rev5_DWork.s194_SFunction_IWORK.indPs;

    /* Input present value(s) */
    ((real_T *)Mooventure2016_Rev5_DWork.s194_SFunction_PWORK.uBuffers)[ind_Ps] =
      Mooventure2016_Rev5_B.s149_MPGe1MinuteAverage;

    /* Output past value(s) */
    /* Output from present sample index to 0 */
    for (iv = ind_Ps; iv >= 0; --iv)
      (Mooventure2016_Rev5_B.s194_SFunction)[io++] = ((real_T *)
        Mooventure2016_Rev5_DWork.s194_SFunction_PWORK.uBuffers)[iv];

    /* Output from end of buffer to present sample index excl. */
    for (iv = nSamples-1; iv > ind_Ps; --iv)
      (Mooventure2016_Rev5_B.s194_SFunction)[io++] = ((real_T *)
        Mooventure2016_Rev5_DWork.s194_SFunction_PWORK.uBuffers)[iv];

    /* Update ring buffer index */
    if (++(Mooventure2016_Rev5_DWork.s194_SFunction_IWORK.indPs) == nSamples)
      Mooventure2016_Rev5_DWork.s194_SFunction_IWORK.indPs = 0;
  }

  /* S-Function (sdspmultiportsel): '<S149>/Multiport Selector' */
  for (row = 0; row < 15; row++) {
    rtb_MPGe1[row] = Mooventure2016_Rev5_B.s194_SFunction[row];
    rtb_MPGe2[row] = Mooventure2016_Rev5_B.s194_SFunction[row];
    rtb_MPGe3[row] = Mooventure2016_Rev5_B.s194_SFunction[row];
    rtb_MPGe4[row] = Mooventure2016_Rev5_B.s194_SFunction[row];
    rtb_MPGe5[row] = Mooventure2016_Rev5_B.s194_SFunction[row];
    rtb_MPGe6[row] = Mooventure2016_Rev5_B.s194_SFunction[row];
    rtb_MPGe7[row] = Mooventure2016_Rev5_B.s194_SFunction[row];
    rtb_MPGe8[row] = Mooventure2016_Rev5_B.s194_SFunction[row];
    rtb_MPGe9[row] = Mooventure2016_Rev5_B.s194_SFunction[row];
    rtb_MPGe10[row] = Mooventure2016_Rev5_B.s194_SFunction[row];
    rtb_MPGe11[row] = Mooventure2016_Rev5_B.s194_SFunction[row];
    rtb_MPGe12[row] = Mooventure2016_Rev5_B.s194_SFunction[row];
    rtb_MPGe13[row] = Mooventure2016_Rev5_B.s194_SFunction[row];
    rtb_MPGe14[row] = Mooventure2016_Rev5_B.s194_SFunction[row];
    rtb_MPGe15[row] = Mooventure2016_Rev5_B.s194_SFunction[row];
  }

  /* End of S-Function (sdspmultiportsel): '<S149>/Multiport Selector' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S374>/Send CAN Messages3' */
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

  /* S-Function (motohawk_sfun_send_canmsgs): '<S374>/Send CAN Messages4' */
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

  /* Product: '<S149>/Product1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read2'
   *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read3'
   */
  rtb_Average = Bar_MPGe_Average_Sum_DataStore() /
    Bar_MPGe_Average_Count_DataStore();

  /* MATLAB Function Block: '<S149>/Color9' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe9,
    &Mooventure2016_Rev5_B.s149_sf_Color9);

  /* MATLAB Function Block: '<S149>/Color8' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe8,
    &Mooventure2016_Rev5_B.s149_sf_Color8);

  /* MATLAB Function Block: '<S149>/Color7' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe7,
    &Mooventure2016_Rev5_B.s149_sf_Color7);

  /* MATLAB Function Block: '<S149>/Color6' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe6,
    &Mooventure2016_Rev5_B.s149_sf_Color6);

  /* MATLAB Function Block: '<S149>/Color5' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe5,
    &Mooventure2016_Rev5_B.s149_sf_Color5);

  /* MATLAB Function Block: '<S149>/Color4' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe4,
    &Mooventure2016_Rev5_B.s149_sf_Color4);

  /* MATLAB Function Block: '<S149>/Color3' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe3,
    &Mooventure2016_Rev5_B.s149_sf_Color3);

  /* MATLAB Function Block: '<S149>/Color2' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe2,
    &Mooventure2016_Rev5_B.s149_sf_Color2);

  /* MATLAB Function Block: '<S149>/Color15' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe15,
    &Mooventure2016_Rev5_B.s149_sf_Color15);

  /* MATLAB Function Block: '<S149>/Color14' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe14,
    &Mooventure2016_Rev5_B.s149_sf_Color14);

  /* MATLAB Function Block: '<S149>/Color13' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe13,
    &Mooventure2016_Rev5_B.s149_sf_Color13);

  /* MATLAB Function Block: '<S149>/Color12' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S149>/motohawk_calibration2'
   */

  /* MATLAB Function 'Foreground/Control/Infotainment/MPGe Bar Calculations/Color12': '<S182>:1' */
  if (rtb_MPGe12[11] >= (Bar_Color_DataStore())) {
    /* '<S182>:1:3' */
    /* '<S182>:1:4' */
    rtb_color = 1.0;
  } else {
    /* '<S182>:1:6' */
    rtb_color = 0.0;
  }

  /* End of MATLAB Function Block: '<S149>/Color12' */

  /* MATLAB Function Block: '<S149>/Color11' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe11,
    &Mooventure2016_Rev5_B.s149_sf_Color11);

  /* MATLAB Function Block: '<S149>/Color10' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe10,
    &Mooventure2016_Rev5_B.s149_sf_Color10);

  /* MATLAB Function Block: '<S149>/Color1' */
  Mooventure2016_Rev5_Color1((Bar_Color_DataStore()), rtb_MPGe1,
    &Mooventure2016_Rev5_B.s149_sf_Color1);

  /* S-Function (motohawk_sfun_send_canmsgs): '<S374>/Send CAN Messages5' */
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

        if (Mooventure2016_Rev5_B.s149_sf_Color9.s179_color < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s149_sf_Color9.s179_color >
                   1.0000000000F) {
          tmp2 = (uint8_T)(1U);
        } else {
          tmp2 = (uint8_T)(Mooventure2016_Rev5_B.s149_sf_Color9.s179_color != 0);
        }

        if (Mooventure2016_Rev5_B.s149_sf_Color8.s179_color < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s149_sf_Color8.s179_color >
                   1.0000000000F) {
          tmp3 = (uint8_T)(1U);
        } else {
          tmp3 = (uint8_T)(Mooventure2016_Rev5_B.s149_sf_Color8.s179_color != 0);
        }

        if (Mooventure2016_Rev5_B.s149_sf_Color7.s179_color < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s149_sf_Color7.s179_color >
                   1.0000000000F) {
          tmp4 = (uint8_T)(1U);
        } else {
          tmp4 = (uint8_T)(Mooventure2016_Rev5_B.s149_sf_Color7.s179_color != 0);
        }

        if (Mooventure2016_Rev5_B.s149_sf_Color6.s179_color < 0.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s149_sf_Color6.s179_color >
                   1.0000000000F) {
          tmp5 = (uint8_T)(1U);
        } else {
          tmp5 = (uint8_T)(Mooventure2016_Rev5_B.s149_sf_Color6.s179_color != 0);
        }

        if (Mooventure2016_Rev5_B.s149_sf_Color5.s179_color < 0.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s149_sf_Color5.s179_color >
                   1.0000000000F) {
          tmp6 = (uint8_T)(1U);
        } else {
          tmp6 = (uint8_T)(Mooventure2016_Rev5_B.s149_sf_Color5.s179_color != 0);
        }

        if (Mooventure2016_Rev5_B.s149_sf_Color4.s179_color < 0.0000000000F) {
          tmp7 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s149_sf_Color4.s179_color >
                   1.0000000000F) {
          tmp7 = (uint8_T)(1U);
        } else {
          tmp7 = (uint8_T)(Mooventure2016_Rev5_B.s149_sf_Color4.s179_color != 0);
        }

        if (Mooventure2016_Rev5_B.s149_sf_Color3.s179_color < 0.0000000000F) {
          tmp8 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s149_sf_Color3.s179_color >
                   1.0000000000F) {
          tmp8 = (uint8_T)(1U);
        } else {
          tmp8 = (uint8_T)(Mooventure2016_Rev5_B.s149_sf_Color3.s179_color != 0);
        }

        if (Mooventure2016_Rev5_B.s149_sf_Color2.s179_color < 0.0000000000F) {
          tmp9 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s149_sf_Color2.s179_color >
                   1.0000000000F) {
          tmp9 = (uint8_T)(1U);
        } else {
          tmp9 = (uint8_T)(Mooventure2016_Rev5_B.s149_sf_Color2.s179_color != 0);
        }

        if (Mooventure2016_Rev5_B.s149_sf_Color15.s179_color < 0.0000000000F) {
          tmp10 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s149_sf_Color15.s179_color >
                   1.0000000000F) {
          tmp10 = (uint8_T)(1U);
        } else {
          tmp10 = (uint8_T)(Mooventure2016_Rev5_B.s149_sf_Color15.s179_color !=
                            0);
        }

        if (Mooventure2016_Rev5_B.s149_sf_Color14.s179_color < 0.0000000000F) {
          tmp11 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s149_sf_Color14.s179_color >
                   1.0000000000F) {
          tmp11 = (uint8_T)(1U);
        } else {
          tmp11 = (uint8_T)(Mooventure2016_Rev5_B.s149_sf_Color14.s179_color !=
                            0);
        }

        if (Mooventure2016_Rev5_B.s149_sf_Color13.s179_color < 0.0000000000F) {
          tmp12 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s149_sf_Color13.s179_color >
                   1.0000000000F) {
          tmp12 = (uint8_T)(1U);
        } else {
          tmp12 = (uint8_T)(Mooventure2016_Rev5_B.s149_sf_Color13.s179_color !=
                            0);
        }

        if (rtb_color < 0.0000000000F) {
          tmp13 = (uint8_T)(0U);
        } else if (rtb_color > 1.0000000000F) {
          tmp13 = (uint8_T)(1U);
        } else {
          tmp13 = (uint8_T)(rtb_color != 0);
        }

        if (Mooventure2016_Rev5_B.s149_sf_Color11.s179_color < 0.0000000000F) {
          tmp14 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s149_sf_Color11.s179_color >
                   1.0000000000F) {
          tmp14 = (uint8_T)(1U);
        } else {
          tmp14 = (uint8_T)(Mooventure2016_Rev5_B.s149_sf_Color11.s179_color !=
                            0);
        }

        if (Mooventure2016_Rev5_B.s149_sf_Color10.s179_color < 0.0000000000F) {
          tmp15 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s149_sf_Color10.s179_color >
                   1.0000000000F) {
          tmp15 = (uint8_T)(1U);
        } else {
          tmp15 = (uint8_T)(Mooventure2016_Rev5_B.s149_sf_Color10.s179_color !=
                            0);
        }

        if (Mooventure2016_Rev5_B.s149_sf_Color1.s179_color < 0.0000000000F) {
          tmp16 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s149_sf_Color1.s179_color >
                   1.0000000000F) {
          tmp16 = (uint8_T)(1U);
        } else {
          tmp16 = (uint8_T)(Mooventure2016_Rev5_B.s149_sf_Color1.s179_color != 0);
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

  /* MATLAB Function Block: '<S150>/Data Correction Motor' */
  Mooventure2016_Rev5_DataCorrectionMotorFault
    (Mooventure2016_Rev5_B.s205_IPT_WheelTorqueDelivered,
     &Mooventure2016_Rev5_B.s150_sf_DataCorrectionMotor);

  /* Rounding: '<S150>/Rounding Function1' incorporates:
   *  Product: '<S150>/Product3'
   *  S-Function (motohawk_sfun_calibration): '<S150>/motohawk_calibration1'
   */
  rtb_Switch_hc = floor
    (Mooventure2016_Rev5_B.s150_sf_DataCorrectionMotor.s65_torqueOut /
     (Power_Flow_Divisor_Battery_DataStore()));

  /* Abs: '<S150>/Abs' */
  rtb_Switch_hc = fabs(rtb_Switch_hc);

  /* Saturate: '<S150>/Saturation1' */
  Mooventure2016_Rev5_B.s150_BatteryUsePCT = rtb_Switch_hc >= 100.0 ? 100.0 :
    rtb_Switch_hc <= 0.0 ? 0.0 : rtb_Switch_hc;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S374>/Send CAN Messages6' */
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
        if (Mooventure2016_Rev5_B.s150_BatteryUsePCT < -100.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s150_BatteryUsePCT > 155.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(Mooventure2016_Rev5_B.s150_BatteryUsePCT -
                           (-100.0000000000F));
        }

        if (Mooventure2016_Rev5_B.s271_Sum1 < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s271_Sum1 > 255.0000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(Mooventure2016_Rev5_B.s271_Sum1);
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

  /* Rounding: '<S150>/Rounding Function' incorporates:
   *  Product: '<S150>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S150>/motohawk_calibration'
   */
  rtb_Switch_hc = floor
    (Mooventure2016_Rev5_B.s150_sf_DataCorrectionMotor.s65_torqueOut /
     (Power_Flow_Divisor_DataStore()));

  /* Saturate: '<S150>/Saturation' */
  rtb_Switch_hc = rtb_Switch_hc >= 3.0 ? 3.0 : rtb_Switch_hc <= -3.0 ? -3.0 :
    rtb_Switch_hc;

  /* Signum: '<S150>/Sign' */
  rtb_Switch_pm = Mooventure2016_Rev5_B.s331_Merge < 0.0 ? -1.0 :
    Mooventure2016_Rev5_B.s331_Merge > 0.0 ? 1.0 :
    Mooventure2016_Rev5_B.s331_Merge == 0.0 ? 0.0 :
    Mooventure2016_Rev5_B.s331_Merge;

  /* Product: '<S150>/Product2' */
  Mooventure2016_Rev5_B.s150_Battery2Motor = rtb_Switch_hc * rtb_Switch_pm;

  /* Product: '<S150>/Product1' */
  Mooventure2016_Rev5_B.s150_Motor2Axle = rtb_Switch_hc * rtb_Switch_pm;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S374>/Send CAN Messages7' */
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
        if (Mooventure2016_Rev5_B.s150_Battery2Motor < -3.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s150_Battery2Motor > 12.0000000000F) {
          tmp1 = (uint8_T)(15U);
        } else {
          tmp1 = (uint8_T)(Mooventure2016_Rev5_B.s150_Battery2Motor -
                           (-3.0000000000F));
        }

        if (Mooventure2016_Rev5_B.s150_Motor2Axle < -3.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s150_Motor2Axle > 12.0000000000F) {
          tmp2 = (uint8_T)(15U);
        } else {
          tmp2 = (uint8_T)(Mooventure2016_Rev5_B.s150_Motor2Axle -
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

        if (Mooventure2016_Rev5_B.s150_BatteryUsePCT < -100.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s150_BatteryUsePCT > 155.0000000000F) {
          tmp6 = (uint8_T)(255U);
        } else {
          tmp6 = (uint8_T)(Mooventure2016_Rev5_B.s150_BatteryUsePCT -
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

  /* S-Function (motohawk_sfun_read_canmsg): '<S206>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4796p0005_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4796p0005_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s206_AgeCount + 1) >
        Mooventure2016_Rev5_B.s206_AgeCount)
      Mooventure2016_Rev5_B.s206_AgeCount++;
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
      Mooventure2016_Rev5_B.s206_Subfunction_Select = (real_T) tmp0;
      Mooventure2016_Rev5_B.s206_Confirm_Active_Trip = (real_T) tmp1;
      Mooventure2016_Rev5_B.s206_Confirm_Reset_Trip_B = (real_T) tmp2;
      Mooventure2016_Rev5_B.s206_Confirm_Reset_Trip_A = (real_T) tmp3;
      Mooventure2016_Rev5_B.s206_Electricity_Cost_Setting = ((real_T) tmp4) /
        ((real_T) 1000);
      Mooventure2016_Rev5_B.s206_Fuel_Cost_Setting = ((real_T) tmp5) / ((real_T)
        1000);
      Mooventure2016_Rev5_B.s206_AgeCount = 0;
    }
  }

  /* If: '<S340>/If' incorporates:
   *  Inport: '<S353>/In1'
   *  Inport: '<S354>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S340>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S340>/override_enable'
   */
  if ((Fuel_Cost_Setting_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S340>/NewValue' incorporates:
     *  ActionPort: '<S353>/Action Port'
     */
    rtb_UnitDelay_o = (Fuel_Cost_Setting_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S353>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(89);
    }

    /* End of Outputs for SubSystem: '<S340>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S340>/OldValue' incorporates:
     *  ActionPort: '<S354>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s206_Fuel_Cost_Setting;

    /* S-Function (motohawk_sfun_code_cover): '<S354>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(90);
    }

    /* End of Outputs for SubSystem: '<S340>/OldValue' */
  }

  /* End of If: '<S340>/If' */

  /* Product: '<S152>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S152>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_data_read): '<S152>/motohawk_data_read1'
   */
  rtb_UnitDelay_m = rtb_UnitDelay_o * Trip_A_Dist_Traveled_DataStore() *
    (Average_Vehicle_MPG_DataStore());

  /* If: '<S339>/If' incorporates:
   *  Inport: '<S351>/In1'
   *  Inport: '<S352>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S339>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S339>/override_enable'
   */
  if ((Electricity_Cost_Setting_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S339>/NewValue' incorporates:
     *  ActionPort: '<S351>/Action Port'
     */
    rtb_Merge_gq = (Electricity_Cost_Setting_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S351>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(87);
    }

    /* End of Outputs for SubSystem: '<S339>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S339>/OldValue' incorporates:
     *  ActionPort: '<S352>/Action Port'
     */
    rtb_Merge_gq = Mooventure2016_Rev5_B.s206_Electricity_Cost_Setting;

    /* S-Function (motohawk_sfun_code_cover): '<S352>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(88);
    }

    /* End of Outputs for SubSystem: '<S339>/OldValue' */
  }

  /* End of If: '<S339>/If' */

  /* Product: '<S152>/Product2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S152>/motohawk_data_read2'
   */
  Mooventure2016_Rev5_B.s152_TripACost = rtb_Merge_gq *
    Trip_A_Batt_Used_DataStore();

  /* Sum: '<S152>/Add2' */
  Mooventure2016_Rev5_B.s152_TripASavings = rtb_UnitDelay_m -
    Mooventure2016_Rev5_B.s152_TripACost;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S374>/Send CAN Messages8' */
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
        if (Mooventure2016_Rev5_B.s152_TripASavings < 0.0000000000F) {
          tmp1 = (uint16_T)(0U);
        } else if (Mooventure2016_Rev5_B.s152_TripASavings > 655.3500000000F) {
          tmp1 = (uint16_T)(65535U);
        } else {
          tmp1 = (uint16_T)(Mooventure2016_Rev5_B.s152_TripASavings *
                            (100.0000000000F));
        }

        if (Mooventure2016_Rev5_B.s152_TripACost < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s152_TripACost > 0.0100000000F) {
          tmp2 = (uint8_T)(1U);
        } else {
          tmp2 = (uint8_T)(Mooventure2016_Rev5_B.s152_TripACost *
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

  /* Product: '<S153>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_data_read): '<S153>/motohawk_data_read1'
   */
  rtb_UnitDelay_o = rtb_UnitDelay_o * Trip_B_Dist_Traveled_DataStore() *
    (Average_Vehicle_MPG_Trip_B_DataStore());

  /* Product: '<S153>/Product2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S153>/motohawk_data_read2'
   */
  Mooventure2016_Rev5_B.s153_TripBCost = rtb_Merge_gq *
    Trip_B_Batt_Used_DataStore();

  /* Sum: '<S153>/Add2' */
  Mooventure2016_Rev5_B.s153_TripBSavings = rtb_UnitDelay_o -
    Mooventure2016_Rev5_B.s153_TripBCost;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S374>/Send CAN Messages9' */
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
        if (Mooventure2016_Rev5_B.s153_TripBSavings < 0.0000000000F) {
          tmp1 = (uint16_T)(0U);
        } else if (Mooventure2016_Rev5_B.s153_TripBSavings > 655.3500000000F) {
          tmp1 = (uint16_T)(65535U);
        } else {
          tmp1 = (uint16_T)(Mooventure2016_Rev5_B.s153_TripBSavings *
                            (100.0000000000F));
        }

        if (Mooventure2016_Rev5_B.s153_TripBCost < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (Mooventure2016_Rev5_B.s153_TripBCost > 0.0100000000F) {
          tmp2 = (uint8_T)(1U);
        } else {
          tmp2 = (uint8_T)(Mooventure2016_Rev5_B.s153_TripBCost *
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

  /* S-Function (motohawk_sfun_send_canmsgs): '<S374>/Send CAN Messages' */
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

  /* Sum: '<S34>/Add2' incorporates:
   *  UnitDelay: '<S34>/Unit Delay1'
   */
  rtb_Switch_hc = rtb_Sum1_e - Mooventure2016_Rev5_DWork.s34_UnitDelay1_DSTATE;

  /* Abs: '<S34>/Abs1' */
  rtb_Switch_hc = fabs(rtb_Switch_hc);

  /* RelationalOperator: '<S34>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S34>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_c = ((rtb_Switch_hc >=
    (Blend_Valve_Sensor_B_Intermittent_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S34>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_B_Intermittent */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(8, rtb_RelationalOperator1_c);
    UpdateFault(8);
  }

  /* RelationalOperator: '<S34>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S34>/motohawk_calibration5'
   */
  rtb_RelationalOperator5 = ((rtb_Sum1_e <
    (Blend_Valve_Sensor_B_Low_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S34>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_B_Low_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(9, rtb_RelationalOperator5);
    UpdateFault(9);
  }

  /* Sum: '<S34>/Add1' incorporates:
   *  UnitDelay: '<S34>/Unit Delay'
   */
  rtb_Switch_hc = rtb_Sum1_b - Mooventure2016_Rev5_DWork.s34_UnitDelay_DSTATE;

  /* Abs: '<S34>/Abs' */
  rtb_Switch_hc = fabs(rtb_Switch_hc);

  /* RelationalOperator: '<S34>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S34>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_m = ((rtb_Switch_hc >=
    (Blend_Valve_Sensor_A_Intermittent_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S34>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_A_Intermittent */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(5, rtb_RelationalOperator2_m);
    UpdateFault(5);
  }

  /* RelationalOperator: '<S34>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S34>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_ih = ((rtb_Sum1_b <
    (Blend_Valve_Sensor_A_Low_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S34>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_A_Low_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(6, rtb_RelationalOperator3_ih);
    UpdateFault(6);
  }

  /* RelationalOperator: '<S34>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S34>/motohawk_calibration4'
   */
  rtb_RelationalOperator4 = ((rtb_Sum1_b >
    (Blend_Valve_Sensor_A_High_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S34>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_A_High_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(4, rtb_RelationalOperator4);
    UpdateFault(4);
  }

  /* RelationalOperator: '<S34>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S34>/motohawk_calibration6'
   */
  rtb_RelationalOperator6 = ((rtb_Sum1_e >
    (Blend_Valve_Sensor_B_High_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S34>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Blend_Valve_Sensor_B_High_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(7, rtb_RelationalOperator6);
    UpdateFault(7);
  }

  /* S-Function Block: <S39>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s39_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_iy = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S39>/Switch' incorporates:
   *  Constant: '<S39>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S39>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S39>/motohawk_delta_time'
   *  Sum: '<S39>/Sum'
   */
  if (Mooventure2016_Rev5_B.s369_DataTypeConversion5) {
    rtb_Switch_hc = rtb_motohawk_delta_time_iy + TimeSinceRun1_DataStore();
  } else {
    rtb_Switch_hc = 0.0;
  }

  /* End of Switch: '<S39>/Switch' */
  /* Logic: '<S34>/Logical Operator' incorporates:
   *  RelationalOperator: '<S34>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S34>/motohawk_calibration'
   */
  rtb_LogicalOperator_o = (((rtb_Switch_hc >
    (Blend_Valve_A_No_Response_Fault_DataStore())) &&
    Mooventure2016_Rev5_B.s369_DataTypeConversion5));

  /* S-Function (motohawk_sfun_fault_def): '<S34>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Blend_Valve_A_No_Response */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(2, rtb_LogicalOperator_o);
    UpdateFault(2);
  }

  /* Saturate: '<S39>/Saturation' */
  rtb_Saturation_o = rtb_Switch_hc >= 16000.0 ? 16000.0 : rtb_Switch_hc <= 0.0 ?
    0.0 : rtb_Switch_hc;

  /* S-Function (motohawk_sfun_data_write): '<S39>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceRun1 */
  {
    TimeSinceRun1_DataStore() = rtb_Saturation_o;
  }

  /* S-Function Block: <S40>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s40_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_o = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S40>/Switch' incorporates:
   *  Constant: '<S40>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S40>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S40>/motohawk_delta_time'
   *  Sum: '<S40>/Sum'
   */
  if (Mooventure2016_Rev5_B.s369_DataTypeConversion1) {
    rtb_Switch_hc = rtb_motohawk_delta_time_o + TimeSinceRun2_DataStore();
  } else {
    rtb_Switch_hc = 0.0;
  }

  /* End of Switch: '<S40>/Switch' */
  /* Logic: '<S34>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S34>/Relational Operator7'
   *  S-Function (motohawk_sfun_calibration): '<S34>/motohawk_calibration7'
   */
  rtb_LogicalOperator1_m = (((rtb_Switch_hc >
    (Blend_Valve_B_No_Response_Fault_DataStore())) &&
    Mooventure2016_Rev5_B.s369_DataTypeConversion1));

  /* S-Function (motohawk_sfun_fault_def): '<S34>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Blend_Valve_B_No_Response */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(3, rtb_LogicalOperator1_m);
    UpdateFault(3);
  }

  /* Saturate: '<S40>/Saturation' */
  rtb_Saturation_d = rtb_Switch_hc >= 16000.0 ? 16000.0 : rtb_Switch_hc <= 0.0 ?
    0.0 : rtb_Switch_hc;

  /* S-Function (motohawk_sfun_data_write): '<S40>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceRun2 */
  {
    TimeSinceRun2_DataStore() = rtb_Saturation_d;
  }

  /* S-Function (motohawk_sfun_data_read): '<S30>/motohawk_data_read' */
  rtb_motohawk_data_read_mb = ChargeEnable_DataStore();

  /* If: '<S303>/If' incorporates:
   *  Inport: '<S312>/In1'
   *  Inport: '<S313>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S303>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S303>/override_enable'
   */
  if ((FaultSeverityIndicator_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S303>/NewValue' incorporates:
     *  ActionPort: '<S312>/Action Port'
     */
    rtb_Merge_ck = (FaultSeverityIndicator_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S312>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(57);
    }

    /* End of Outputs for SubSystem: '<S303>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S303>/OldValue' incorporates:
     *  ActionPort: '<S313>/Action Port'
     */
    rtb_Merge_ck = Mooventure2016_Rev5_B.s204_FaultSeverityIndicator;

    /* S-Function (motohawk_sfun_code_cover): '<S313>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(58);
    }

    /* End of Outputs for SubSystem: '<S303>/OldValue' */
  }

  /* End of If: '<S303>/If' */

  /* If: '<S305>/If' incorporates:
   *  Inport: '<S316>/In1'
   *  Inport: '<S317>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S305>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S305>/override_enable'
   */
  if ((IgnitionStatus_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S305>/NewValue' incorporates:
     *  ActionPort: '<S316>/Action Port'
     */
    rtb_LogicalOperator5 = (IgnitionStatus_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S316>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(61);
    }

    /* End of Outputs for SubSystem: '<S305>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S305>/OldValue' incorporates:
     *  ActionPort: '<S317>/Action Port'
     */
    rtb_LogicalOperator5 = Mooventure2016_Rev5_B.s204_IgnitionStatus;

    /* S-Function (motohawk_sfun_code_cover): '<S317>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(62);
    }

    /* End of Outputs for SubSystem: '<S305>/OldValue' */
  }

  /* End of If: '<S305>/If' */

  /* If: '<S311>/If' incorporates:
   *  Inport: '<S328>/In1'
   *  Inport: '<S329>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S311>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S311>/override_enable'
   */
  if ((InputVoltage_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S311>/NewValue' incorporates:
     *  ActionPort: '<S328>/Action Port'
     */
    rtb_UnitDelay_o = (InputVoltage_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S328>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(73);
    }

    /* End of Outputs for SubSystem: '<S311>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S311>/OldValue' incorporates:
     *  ActionPort: '<S329>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s204_InputVoltage;

    /* S-Function (motohawk_sfun_code_cover): '<S329>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(74);
    }

    /* End of Outputs for SubSystem: '<S311>/OldValue' */
  }

  /* End of If: '<S311>/If' */

  /* Outputs for Enabled SubSystem: '<S30>/Charger' incorporates:
   *  EnablePort: '<S35>/Enable'
   */
  if (rtb_motohawk_data_read_mb) {
    /* RelationalOperator: '<S35>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration1'
     */
    rtb_RelationalOperator1_j = ((rtb_Merge_oq <=
      (Charger_Derated_Under_Temperature_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S35>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: Charger_Derated_Under_Temperature */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(17, rtb_RelationalOperator1_j);
      UpdateFault(17);
    }

    /* S-Function (motohawk_sfun_fault_def): '<S35>/motohawk_fault_def10' */

    /* Set Fault Suspected Status: Charger_Internal_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(18, rtb_Merge_ck);
      UpdateFault(18);
    }

    /* RelationalOperator: '<S35>/Relational Operator12' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration9'
     */
    rtb_RelationalOperator12_h = ((rtb_UnitDelay_o <
      (Charger_Line_Voltage_Too_Low_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S35>/motohawk_fault_def11' */

    /* Set Fault Suspected Status: Charger_Line_Voltage_Too_Low */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(19, rtb_RelationalOperator12_h);
      UpdateFault(19);
    }

    /* RelationalOperator: '<S35>/Relational Operator11' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration10'
     */
    rtb_RelationalOperator11_l = ((rtb_UnitDelay_o >
      (Charger_Line_Votlage_Too_High_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S35>/motohawk_fault_def12' */

    /* Set Fault Suspected Status: Charger_Line_Votlage_Too_High */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(20, rtb_RelationalOperator11_l);
      UpdateFault(20);
    }

    /* RelationalOperator: '<S35>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration2'
     */
    rtb_RelationalOperator2_i = ((rtb_Merge_oq >=
      (Charger_Derated_Over_Temperature_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S35>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: Charger_Derated_Over_Temperature */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(16, rtb_RelationalOperator2_i);
      UpdateFault(16);
    }

    /* RelationalOperator: '<S35>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S201>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration3'
     */
    rtb_RelationalOperator3_jh = (((MaxAmpCal_DataStore()) >
      (Charger_Requested_Current_Too_High_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S35>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: Charger_Requested_Current_Too_High */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(23, rtb_RelationalOperator3_jh);
      UpdateFault(23);
    }

    /* RelationalOperator: '<S35>/Relational Operator4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S201>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration4'
     */
    rtb_LogicalOperator2_f = ((MaxVoltageCal_DataStore()) <
      (Charger_Requested_Voltage_Out_of_Bounds_Fault_Lower_DataStore()));

    /* Logic: '<S35>/Logical Operator' incorporates:
     *  RelationalOperator: '<S35>/Relational Operator5'
     *  S-Function (motohawk_sfun_calibration): '<S201>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration5'
     */
    rtb_LogicalOperator_hw = ((rtb_LogicalOperator2_f ||
      ((MaxVoltageCal_DataStore()) >
       (Charger_Requested_Voltage_Out_of_Bounds_Fault_Upper_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S35>/motohawk_fault_def4' */

    /* Set Fault Suspected Status: Charger_Requested_Voltage_Out_of_Bounds */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(24, rtb_LogicalOperator_hw);
      UpdateFault(24);
    }

    /* RelationalOperator: '<S35>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S35>/motohawk_data_read'
     */
    rtb_RelationalOperator_lk = ((ChargeEnable_DataStore() >
      rtb_LogicalOperator5));

    /* S-Function (motohawk_sfun_fault_def): '<S35>/motohawk_fault_def5' */

    /* Set Fault Suspected Status: Charger_Requested_But_No_Key_Singal */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(22, rtb_RelationalOperator_lk);
      UpdateFault(22);
    }

    /* Logic: '<S35>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S35>/Relational Operator6'
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_data_read): '<S35>/motohawk_data_read'
     */
    rtb_LogicalOperator1_lt = ((ChargeEnable_DataStore() &&
      (Mooventure2016_Rev5_B.s205_IPT_HVDCVoltage <
       (Charger_Requested_But_No_High_Voltage_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S35>/motohawk_fault_def6' */

    /* Set Fault Suspected Status: Charger_Requested_But_No_High_Voltage */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(21, rtb_LogicalOperator1_lt);
      UpdateFault(21);
    }

    /* RelationalOperator: '<S35>/Relational Operator8' */
    rtb_RelationalOperator8_e = ((rtb_Merge_hn > rtb_Merge_lf));

    /* S-Function (motohawk_sfun_fault_def): '<S35>/motohawk_fault_def7' */

    /* Set Fault Suspected Status: Charger_Amperage_Draw_Greater_Then_Supply */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(15, rtb_RelationalOperator8_e);
      UpdateFault(15);
    }

    /* RelationalOperator: '<S35>/Relational Operator9' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration7'
     */
    rtb_RelationalOperator9_k = ((Mooventure2016_Rev5_B.s205_IPT_HVDCVoltage <
      (Battery_Voltage_Too_Low_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S35>/motohawk_fault_def8' */

    /* Set Fault Suspected Status: Battery_Voltage_Too_Low */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(1, rtb_RelationalOperator9_k);
      UpdateFault(1);
    }

    /* RelationalOperator: '<S35>/Relational Operator10' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration8'
     */
    rtb_RelationalOperator10_b = ((Mooventure2016_Rev5_B.s205_IPT_HVDCVoltage >
                                   (Battery_Voltage_Too_High_Fault_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S35>/motohawk_fault_def9' */

    /* Set Fault Suspected Status: Battery_Voltage_Too_High */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(0, rtb_RelationalOperator10_b);
      UpdateFault(0);
    }
  }

  /* End of Outputs for SubSystem: '<S30>/Charger' */
  /* S-Function Block: <S243>/motohawk_ain4 Resource: DCDC_Conveter */
  Mooventure2016_Rev5_B.s243_motohawk_ain4_o1 = DCDC_Conveter_AnalogInput_Get();
  rtb_motohawk_ain = 0;

  /* If: '<S258>/If' incorporates:
   *  Inport: '<S259>/In1'
   *  Inport: '<S260>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S258>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S258>/override_enable'
   */
  if ((DCDC_Status_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S258>/NewValue' incorporates:
     *  ActionPort: '<S259>/Action Port'
     */
    rtb_Merge_bn = ((uint16_T)(DCDC_Status_Ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S259>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(45);
    }

    /* End of Outputs for SubSystem: '<S258>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S258>/OldValue' incorporates:
     *  ActionPort: '<S260>/Action Port'
     */
    rtb_Merge_bn = Mooventure2016_Rev5_B.s243_motohawk_ain4_o1;

    /* S-Function (motohawk_sfun_code_cover): '<S260>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Analog Inputs/DCDC Converter/motohawk_override_abs12/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(46);
    }

    /* End of Outputs for SubSystem: '<S258>/OldValue' */
  }

  /* End of If: '<S258>/If' */

  /* RelationalOperator: '<S36>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S36>/motohawk_calibration1'
   */
  rtb_motohawk_fault_action1_g = ((real_T)rtb_Merge_bn <
    (DCDC_Converter_Not_Running_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S36>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: DCDC_Converter_Not_Running */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(45, rtb_motohawk_fault_action1_g);
    UpdateFault(45);
  }

  /* RelationalOperator: '<S37>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration'
   */
  rtb_motohawk_fault_action1_g = ((Contactor1_DataStore()) < (real_T)
    Mooventure2016_Rev5_B.s464_Coil1State);

  /* S-Function (motohawk_sfun_fault_def): '<S37>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Contactor_1_Failure_To_Close */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(25, rtb_motohawk_fault_action1_g);
    UpdateFault(25);
  }

  /* RelationalOperator: '<S37>/Relational Operator12' incorporates:
   *  Constant: '<S370>/Constant2'
   *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration3'
   */
  rtb_RelationalOperator12 = (((Contactor4_DataStore()) < 0.0));

  /* S-Function (motohawk_sfun_fault_def): '<S37>/motohawk_fault_def10' */

  /* Set Fault Suspected Status: Contactor_4_Failure_To_Close */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(34, rtb_RelationalOperator12);
    UpdateFault(34);
  }

  /* RelationalOperator: '<S37>/Relational Operator13' incorporates:
   *  Constant: '<S370>/Constant2'
   *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration3'
   */
  rtb_LogicalOperator5 = ((Contactor4_DataStore()) < 0.0);

  /* Logic: '<S37>/Logical Operator3' incorporates:
   *  Constant: '<S44>/Constant'
   *  RelationalOperator: '<S37>/Relational Operator14'
   *  S-Function (motohawk_sfun_calibration): '<S37>/motohawk_calibration3'
   */
  rtb_LogicalOperator3_p = ((rtb_LogicalOperator5 && (0.0 >
    (Contactor4_Unexpected_Open_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S37>/motohawk_fault_def11' */

  /* Set Fault Suspected Status: Contactor_4_Unexpected_Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(36, rtb_LogicalOperator3_p);
    UpdateFault(36);
  }

  /* RelationalOperator: '<S37>/Relational Operator15' incorporates:
   *  Constant: '<S370>/Constant2'
   *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration3'
   */
  rtb_RelationalOperator15 = (((Contactor4_DataStore()) > 0.0));

  /* S-Function (motohawk_sfun_fault_def): '<S37>/motohawk_fault_def12' */

  /* Set Fault Suspected Status: Contactor_4_Fused */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(35, rtb_RelationalOperator15);
    UpdateFault(35);
  }

  /* RelationalOperator: '<S37>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration'
   */
  rtb_motohawk_fault_action1_g = ((Contactor1_DataStore()) < (real_T)
    Mooventure2016_Rev5_B.s464_Coil1State);

  /* S-Function Block: <S41>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s41_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_e = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S41>/Switch' incorporates:
   *  Constant: '<S41>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S41>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S41>/motohawk_delta_time'
   *  Sum: '<S41>/Sum'
   */
  if (Mooventure2016_Rev5_B.s464_Coil1State) {
    rtb_Switch_hc = rtb_motohawk_delta_time_e + ContactorOne_DataStore();
  } else {
    rtb_Switch_hc = 0.0;
  }

  /* End of Switch: '<S41>/Switch' */
  /* Logic: '<S37>/Logical Operator' incorporates:
   *  RelationalOperator: '<S37>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S37>/motohawk_calibration'
   */
  rtb_LogicalOperator_cw = ((rtb_motohawk_fault_action1_g && (rtb_Switch_hc >
    (Contactor1_Unexpected_Open_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S37>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Contactor_1_Unexpected_Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(27, rtb_LogicalOperator_cw);
    UpdateFault(27);
  }

  /* RelationalOperator: '<S37>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration'
   */
  rtb_motohawk_fault_action1_g = ((Contactor1_DataStore()) > (real_T)
    Mooventure2016_Rev5_B.s464_Coil1State);

  /* S-Function (motohawk_sfun_fault_def): '<S37>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Contactor_1_Fused */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(26, rtb_motohawk_fault_action1_g);
    UpdateFault(26);
  }

  /* RelationalOperator: '<S37>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration1'
   */
  rtb_motohawk_fault_action1_g = ((Contactor2_DataStore()) < (real_T)
    Mooventure2016_Rev5_B.s465_Coil2State);

  /* S-Function (motohawk_sfun_fault_def): '<S37>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Contactor_2_Failure_To_Close */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(28, rtb_motohawk_fault_action1_g);
    UpdateFault(28);
  }

  /* RelationalOperator: '<S37>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration1'
   */
  rtb_motohawk_fault_action1_g = ((Contactor2_DataStore()) < (real_T)
    Mooventure2016_Rev5_B.s465_Coil2State);

  /* S-Function Block: <S42>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s42_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_j = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S42>/Switch' incorporates:
   *  Constant: '<S42>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S42>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S42>/motohawk_delta_time'
   *  Sum: '<S42>/Sum'
   */
  if (Mooventure2016_Rev5_B.s465_Coil2State) {
    rtb_Switch_pm = rtb_motohawk_delta_time_j + ContactorTwo_DataStore();
  } else {
    rtb_Switch_pm = 0.0;
  }

  /* End of Switch: '<S42>/Switch' */
  /* Logic: '<S37>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S37>/Relational Operator6'
   *  S-Function (motohawk_sfun_calibration): '<S37>/motohawk_calibration1'
   */
  rtb_LogicalOperator1_h = ((rtb_motohawk_fault_action1_g && (rtb_Switch_pm >
    (Contactor2_Unexpected_Open_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S37>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Contactor_2_Unexpected_Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(30, rtb_LogicalOperator1_h);
    UpdateFault(30);
  }

  /* RelationalOperator: '<S37>/Relational Operator7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration1'
   */
  rtb_motohawk_fault_action1_g = ((Contactor2_DataStore()) > (real_T)
    Mooventure2016_Rev5_B.s465_Coil2State);

  /* S-Function (motohawk_sfun_fault_def): '<S37>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Contactor_2_Fused */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(29, rtb_motohawk_fault_action1_g);
    UpdateFault(29);
  }

  /* RelationalOperator: '<S37>/Relational Operator8' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration2'
   */
  rtb_motohawk_fault_action1_g = ((Contactor3_DataStore()) < (real_T)
    Mooventure2016_Rev5_B.s466_Coil3State);

  /* S-Function (motohawk_sfun_fault_def): '<S37>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Contactor_3_Failure_To_Close */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(31, rtb_motohawk_fault_action1_g);
    UpdateFault(31);
  }

  /* RelationalOperator: '<S37>/Relational Operator9' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration2'
   */
  rtb_motohawk_fault_action1_g = ((Contactor3_DataStore()) < (real_T)
    Mooventure2016_Rev5_B.s466_Coil3State);

  /* S-Function Block: <S43>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s43_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_nm = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S43>/Switch' incorporates:
   *  Constant: '<S43>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S43>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S43>/motohawk_delta_time'
   *  Sum: '<S43>/Sum'
   */
  if (Mooventure2016_Rev5_B.s466_Coil3State) {
    rtb_Switch_p = rtb_motohawk_delta_time_nm + ContactorThree_DataStore();
  } else {
    rtb_Switch_p = 0.0;
  }

  /* End of Switch: '<S43>/Switch' */
  /* Logic: '<S37>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S37>/Relational Operator10'
   *  S-Function (motohawk_sfun_calibration): '<S37>/motohawk_calibration2'
   */
  rtb_LogicalOperator2_k = ((rtb_motohawk_fault_action1_g && (rtb_Switch_p >
    (Contactor3_Unexpected_Open_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S37>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Contactor_3_Unexpected_Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(33, rtb_LogicalOperator2_k);
    UpdateFault(33);
  }

  /* RelationalOperator: '<S37>/Relational Operator11' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration2'
   */
  rtb_motohawk_fault_action1_g = ((Contactor3_DataStore()) > (real_T)
    Mooventure2016_Rev5_B.s466_Coil3State);

  /* S-Function (motohawk_sfun_fault_def): '<S37>/motohawk_fault_def9' */

  /* Set Fault Suspected Status: Contactor_3_Fused */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(32, rtb_motohawk_fault_action1_g);
    UpdateFault(32);
  }

  /* Saturate: '<S41>/Saturation' */
  rtb_Saturation_f0 = rtb_Switch_hc >= 16000.0 ? 16000.0 : rtb_Switch_hc <= 0.0 ?
    0.0 : rtb_Switch_hc;

  /* S-Function (motohawk_sfun_data_write): '<S41>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ContactorOne */
  {
    ContactorOne_DataStore() = rtb_Saturation_f0;
  }

  /* Saturate: '<S42>/Saturation' */
  rtb_Saturation_k = rtb_Switch_pm >= 16000.0 ? 16000.0 : rtb_Switch_pm <= 0.0 ?
    0.0 : rtb_Switch_pm;

  /* S-Function (motohawk_sfun_data_write): '<S42>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ContactorTwo */
  {
    ContactorTwo_DataStore() = rtb_Saturation_k;
  }

  /* Saturate: '<S43>/Saturation' */
  rtb_Saturation_b = rtb_Switch_p >= 16000.0 ? 16000.0 : rtb_Switch_p <= 0.0 ?
    0.0 : rtb_Switch_p;

  /* S-Function (motohawk_sfun_data_write): '<S43>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ContactorThree */
  {
    ContactorThree_DataStore() = rtb_Saturation_b;
  }

  /* Saturate: '<S44>/Saturation' */
  rtb_Saturation_o2 = 0.0;

  /* S-Function (motohawk_sfun_data_write): '<S44>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ContactorFour */
  {
    ContactorFour_DataStore() = rtb_Saturation_o2;
  }

  /* S-Function (motohawk_sfun_data_read): '<S44>/motohawk_data_read' */
  rtb_Switch_hc = ContactorFour_DataStore();

  /* S-Function Block: <S44>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s44_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hc = ((real_T) delta) * 0.000001;
  }

  /* Logic: '<S38>/Logical Operator' */
  rtb_LogicalOperator5 = (rtb_LogicalOperator_po || rtb_RelationalOperator2_id ||
    rtb_RelationalOperator_jg || rtb_LogicalOperator_b2);

  /* Outputs for Triggered SubSystem: '<S38>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S45>/Trigger'
   */
  if (rtb_LogicalOperator5 &&
      (Mooventure2016_Rev5_PrevZCSigState.TriggeredSubsystem_Trig_ZCE !=
       POS_ZCSIG)) {
    /* S-Function (motohawk_sfun_data_write): '<S45>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TempReading */
    {
      TempReading_DataStore() = Mooventure2016_Rev5_B.s244_temp_reading;
    }
  }

  Mooventure2016_Rev5_PrevZCSigState.TriggeredSubsystem_Trig_ZCE = (uint8_T)
    (rtb_LogicalOperator5 ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);

  /* End of Outputs for SubSystem: '<S38>/Triggered Subsystem' */
  /* Sum: '<S38>/Add' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S38>/motohawk_calibration'
   */
  rtb_UnitDelay_o = (Temp_Fault_Hyst_DataStore()) +
    Mooventure2016_Rev5_B.s244_temp_reading;

  /* Logic: '<S38>/Logical Operator2' incorporates:
   *  Logic: '<S38>/Logical Operator1'
   *  RelationalOperator: '<S38>/Relational Operator'
   *  S-Function (motohawk_sfun_data_read): '<S38>/motohawk_data_read'
   */
  rtb_LogicalOperator2_p = (((!(rtb_UnitDelay_o >= TempReading_DataStore())) &&
    rtb_LogicalOperator5));

  /* S-Function (motohawk_sfun_fault_def): '<S38>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: HV_Heater_Poor_Performance */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(72, rtb_LogicalOperator2_p);
    UpdateFault(72);
  }

  /* RelationalOperator: '<S38>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S38>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_p = ((Mooventure2016_Rev5_B.s244_temp_reading >
    (HV_Heater_Over_Temperature_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S38>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: HV_Heater_Over_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(71, rtb_RelationalOperator1_p);
    UpdateFault(71);
  }

  /* Sum: '<S38>/Add1' incorporates:
   *  UnitDelay: '<S38>/Unit Delay'
   */
  rtb_Switch_hc = (real_T)rtb_Heater_Temp_Raw -
    Mooventure2016_Rev5_DWork.s38_UnitDelay_DSTATE;

  /* Abs: '<S38>/Abs' */
  rtb_Switch_hc = fabs(rtb_Switch_hc);

  /* RelationalOperator: '<S38>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S38>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_d = ((rtb_Switch_hc >=
    (HV_Heater_Temperature_Sensor_A_Intermittent_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S38>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: HV_Heater_Temperature_Sensor_A_Intermittent */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(74, rtb_RelationalOperator2_d);
    UpdateFault(74);
  }

  /* RelationalOperator: '<S38>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S38>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_h = (((real_T)rtb_Heater_Temp_Raw <
    (HV_Heater_Temperature_Sensor_A_Low_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S38>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: HV_Heater_Temperature_Sensor_A_Low_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(75, rtb_RelationalOperator3_h);
    UpdateFault(75);
  }

  /* RelationalOperator: '<S38>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S38>/motohawk_calibration4'
   */
  rtb_RelationalOperator4_m = (((real_T)rtb_Heater_Temp_Raw >
    (HV_Heater_Temperature_Sensor_A_High_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S38>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: HV_Heater_Temperature_Sensor_A_High_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(73, rtb_RelationalOperator4_m);
    UpdateFault(73);
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S200>/Read CAN Message1' */
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
      Mooventure2016_Rev5_B.s200_MaximumDischargePower_10s = ((real_T) tmp0) /
        ((real_T) 100);
      Mooventure2016_Rev5_B.s200_MaximumRegenPower_10s = ((real_T) tmp1) /
        ((real_T) 100);
      Mooventure2016_Rev5_B.s200_IsolationLevel = ((real_T) tmp2) * ((real_T) 4);
      Mooventure2016_Rev5_B.s200_ActiveDTC = (real_T) tmp3;
      Mooventure2016_Rev5_B.s200_PPL10s_RollingCounter = (real_T) tmp4;
    }
  }

  /* RelationalOperator: '<S46>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S46>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_cg = ((Mooventure2016_Rev5_B.s200_ActiveDTC >
    (HV_Battery_2G_BMS_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S46>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: HV_Battery_2G_BMS_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(60, rtb_RelationalOperator1_cg);
    UpdateFault(60);
  }

  /* RelationalOperator: '<S46>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S46>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_a = ((Mooventure2016_Rev5_B.s271_Sum1 ==
    (HV_Battery_Too_Low_For_Load_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S46>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: HV_Battery_Too_Low_For_Load */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(69, rtb_RelationalOperator5_a);
    UpdateFault(69);
  }

  /* If: '<S264>/If' incorporates:
   *  Inport: '<S276>/In1'
   *  Inport: '<S277>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S264>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S264>/override_enable'
   */
  if ((Batt_Current_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S264>/NewValue' incorporates:
     *  ActionPort: '<S276>/Action Port'
     */
    Mooventure2016_Rev5_B.s264_Merge = (Batt_Current_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S276>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(49);
    }

    /* End of Outputs for SubSystem: '<S264>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S264>/OldValue' incorporates:
     *  ActionPort: '<S277>/Action Port'
     */
    Mooventure2016_Rev5_B.s264_Merge = Mooventure2016_Rev5_B.s200_BatteryCurrent;

    /* S-Function (motohawk_sfun_code_cover): '<S277>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(50);
    }

    /* End of Outputs for SubSystem: '<S264>/OldValue' */
  }

  /* End of If: '<S264>/If' */

  /* Logic: '<S46>/Logical Operator' incorporates:
   *  RelationalOperator: '<S46>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S46>/motohawk_calibration3'
   */
  rtb_LogicalOperator_a = (((Mooventure2016_Rev5_B.s264_Merge >
    (HV_Battery_Try_To_Balance_Under_Load_Fault_DataStore())) &&
    Mooventure2016_Rev5_B.s200_CellBalanceingActive));

  /* S-Function (motohawk_sfun_fault_def): '<S46>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: HV_Battery_Try_To_Balance_Under_Load */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(70, rtb_LogicalOperator_a);
    UpdateFault(70);
  }

  /* Sum: '<S46>/Add' */
  rtb_UnitDelay_o = Mooventure2016_Rev5_B.s200_MaxCellVoltage -
    Mooventure2016_Rev5_B.s200_MinCellVoltage;

  /* RelationalOperator: '<S46>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S46>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_la = ((rtb_UnitDelay_o >
    (HV_Battery_Cell_Balancing_Required_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S46>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: HV_Battery_Cell_Balancing_Required_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(63, rtb_RelationalOperator2_la);
    UpdateFault(63);
  }

  /* If: '<S265>/If' incorporates:
   *  Inport: '<S278>/In1'
   *  Inport: '<S279>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S265>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S265>/override_enable'
   */
  if ((Batt_Age_Count_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S265>/NewValue' incorporates:
     *  ActionPort: '<S278>/Action Port'
     */
    rtb_Merge_nu = (Batt_Age_Count_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S278>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(51);
    }

    /* End of Outputs for SubSystem: '<S265>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S265>/OldValue' incorporates:
     *  ActionPort: '<S279>/Action Port'
     */
    rtb_Merge_nu = Mooventure2016_Rev5_B.s200_AgeCount;

    /* S-Function (motohawk_sfun_code_cover): '<S279>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(52);
    }

    /* End of Outputs for SubSystem: '<S265>/OldValue' */
  }

  /* End of If: '<S265>/If' */

  /* RelationalOperator: '<S46>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S46>/motohawk_calibration4'
   */
  rtb_motohawk_fault_action1_g = ((real_T)rtb_Merge_nu >=
    (HV_Battery_48_Controller_Communication_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S46>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: HV_Battery_48_Controller_Communication_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(61, rtb_motohawk_fault_action1_g);
    UpdateFault(61);
  }

  /* RelationalOperator: '<S46>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S46>/motohawk_calibration6'
   */
  rtb_RelationalOperator6_i = ((Mooventure2016_Rev5_B.s267_Merge >
    (HV_Battery_Above_Safe_Charge_Point_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S46>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: HV_Battery_Above_Safe_Charge_Point */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(62, rtb_RelationalOperator6_i);
    UpdateFault(62);
  }

  /* RelationalOperator: '<S47>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S47>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_c = ((Mooventure2016_Rev5_B.s200_PrechargeState ==
    (HV_Battery_Precharge_Failure_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S47>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: HV_Battery_Precharge_Failure */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(68, rtb_RelationalOperator2_c);
    UpdateFault(68);
  }

  /* RelationalOperator: '<S48>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S48>/motohawk_calibration3'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s200_MinCellTemperature >
    (HV_Battery_Pack_Low_Temperature_Fault_Low_DataStore()));

  /* Logic: '<S48>/Logical Operator' incorporates:
   *  RelationalOperator: '<S48>/Relational Operator7'
   *  S-Function (motohawk_sfun_calibration): '<S48>/motohawk_calibration4'
   */
  rtb_LogicalOperator_oh = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s200_MinCellTemperature <=
     (HV_Battery_Pack_Low_Temperature_Fault_High_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S48>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: HV_Battery_Pack_Low_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(67, rtb_LogicalOperator_oh);
    UpdateFault(67);
  }

  /* RelationalOperator: '<S48>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S48>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_lg = ((Mooventure2016_Rev5_B.s200_MinCellTemperature <=
                                 
    (HV_Battery_Pack_Below_Operating_Temperature_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S48>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: HV_Battery_Pack_Below_Operating_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(65, rtb_RelationalOperator2_lg);
    UpdateFault(65);
  }

  /* RelationalOperator: '<S48>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S48>/motohawk_calibration5'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s200_MaxCellTemperature >
    (HV_Battery_Pack_High_Temperature_Fault_Low_DataStore()));

  /* Logic: '<S48>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S48>/Relational Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S48>/motohawk_calibration6'
   */
  rtb_LogicalOperator1_a = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s200_MaxCellTemperature <=
     (HV_Battery_Pack_High_Temperature_Fault_High_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S48>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: HV_Battery_Pack_High_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(66, rtb_LogicalOperator1_a);
    UpdateFault(66);
  }

  /* RelationalOperator: '<S48>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S48>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_pt = ((Mooventure2016_Rev5_B.s200_MaxCellTemperature >
                                 
    (HV_Battery_Pack_Above_Operating_Temperature_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S48>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: HV_Battery_Pack_Above_Operating_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(64, rtb_RelationalOperator1_pt);
    UpdateFault(64);
  }

  /* RelationalOperator: '<S293>/Compare' incorporates:
   *  Constant: '<S293>/Constant'
   */
  rtb_motohawk_fault_action1_g = (Mooventure2016_Rev5_B.s289_Out == 4.0);

  /* S-Function Block: <S298>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s298_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_fv = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S298>/Switch' incorporates:
   *  Constant: '<S298>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S298>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S298>/motohawk_delta_time'
   *  Sum: '<S298>/Sum'
   */
  if (rtb_motohawk_fault_action1_g) {
    rtb_Switch_hc = rtb_motohawk_delta_time_fv + ButtonDelay4_DataStore();
  } else {
    rtb_Switch_hc = 0.0;
  }

  /* End of Switch: '<S298>/Switch' */

  /* Logic: '<S287>/Logical Operator' incorporates:
   *  RelationalOperator: '<S287>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration7'
   */
  rtb_LogicalOperator_po = (rtb_motohawk_fault_action1_g && (rtb_Switch_hc >=
    (Delay_DataStore())));

  /* RelationalOperator: '<S292>/Compare' incorporates:
   *  Constant: '<S292>/Constant'
   */
  rtb_motohawk_fault_action1_g = (Mooventure2016_Rev5_B.s289_Out == 3.0);

  /* S-Function Block: <S297>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s297_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_c = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S297>/Switch' incorporates:
   *  Constant: '<S297>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S297>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S297>/motohawk_delta_time'
   *  Sum: '<S297>/Sum'
   */
  if (rtb_motohawk_fault_action1_g) {
    rtb_Switch_pm = rtb_motohawk_delta_time_c + ButtonDelay3_DataStore();
  } else {
    rtb_Switch_pm = 0.0;
  }

  /* End of Switch: '<S297>/Switch' */

  /* Logic: '<S286>/Logical Operator' incorporates:
   *  RelationalOperator: '<S286>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration7'
   */
  rtb_LogicalOperator_b2 = (rtb_motohawk_fault_action1_g && (rtb_Switch_pm >=
    (Delay_DataStore())));

  /* RelationalOperator: '<S291>/Compare' incorporates:
   *  Constant: '<S291>/Constant'
   */
  rtb_motohawk_fault_action1_g = (Mooventure2016_Rev5_B.s289_Out == 2.0);

  /* S-Function Block: <S296>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s296_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_p1 = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S296>/Switch' incorporates:
   *  Constant: '<S296>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S296>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S296>/motohawk_delta_time'
   *  Sum: '<S296>/Sum'
   */
  if (rtb_motohawk_fault_action1_g) {
    rtb_Switch_p = rtb_motohawk_delta_time_p1 + ButtonDelay2_DataStore();
  } else {
    rtb_Switch_p = 0.0;
  }

  /* End of Switch: '<S296>/Switch' */

  /* Logic: '<S285>/Logical Operator' incorporates:
   *  RelationalOperator: '<S285>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration7'
   */
  rtb_LogicalOperator_e = (rtb_motohawk_fault_action1_g && (rtb_Switch_p >=
    (Delay_DataStore())));

  /* MATLAB Function Block: '<S203>/Embedded MATLAB Function2' */

  /* MATLAB Function 'Foreground/Inputs/Driver Inputs/Embedded MATLAB Function2': '<S302>:1' */
  /* '<S302>:1:3' */
  Mooventure2016_Rev5_B.s302_passengerTemp =
    Mooventure2016_Rev5_B.s203_PASSENGER_10 * 10.0 +
    Mooventure2016_Rev5_B.s203_PASSENGER_1;

  /* S-Function (motohawk_sfun_read_canmsg): '<S203>/Read CAN Message4' */
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
      Mooventure2016_Rev5_B.s203_Button_Pressed = (real_T) tmp0;
    }
  }

  /* RelationalOperator: '<S204>/Relational Operator' incorporates:
   *  Constant: '<S204>/Constant'
   */
  rtb_Eaton_Plugged_In = ((rtb_Merge_b >= 1.0));

  /* S-Function (motohawk_sfun_read_canmsg): '<S205>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4636p0005_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4636p0005_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s205_AgeCount_j + 1) >
        Mooventure2016_Rev5_B.s205_AgeCount_j)
      Mooventure2016_Rev5_B.s205_AgeCount_j++;
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
      Mooventure2016_Rev5_B.s205_IPT_DCErrorCategory = (real_T) tmp0;
      Mooventure2016_Rev5_B.s205_IPT_DCLVOn = (real_T) tmp1;
      Mooventure2016_Rev5_B.s205_IPT_DCLVGeneralError = (real_T) tmp2;
      Mooventure2016_Rev5_B.s205_IPT_DCLVMaxPower = ((real_T) tmp3) * ((real_T)
        20);
      Mooventure2016_Rev5_B.s205_IPT_DCLVBusCurrent = (real_T) tmp4;
      Mooventure2016_Rev5_B.s205_IPT_DCLVBusVoltage = ((real_T) tmp5) / ((real_T)
        10);
      Mooventure2016_Rev5_B.s205_IPT_DCHVBusCurrent = ((real_T) tmp6) / ((real_T)
        10);
      Mooventure2016_Rev5_B.s205_AgeCount_j = 0;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S205>/Read CAN Message4' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4638p0005_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4638p0005_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s205_AgeCount_o + 1) >
        Mooventure2016_Rev5_B.s205_AgeCount_o)
      Mooventure2016_Rev5_B.s205_AgeCount_o++;
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
      Mooventure2016_Rev5_B.s205_Heading = ((real_T) tmp0) * ((real_T) 2);
      Mooventure2016_Rev5_B.s205_Speed = (real_T) tmp1;
      Mooventure2016_Rev5_B.s205_Altitude = ((real_T) tmp2) + ((real_T) -500);
      Mooventure2016_Rev5_B.s205_GPSQuality = (real_T) tmp3;
      Mooventure2016_Rev5_B.s205_DateTime = (real_T) tmp4;
      Mooventure2016_Rev5_B.s205_AgeCount_o = 0;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S200>/Read CAN Message6' */
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
      Mooventure2016_Rev5_B.s200_LifeTimeAmpHoursOut = ((real_T) tmp0) /
        ((real_T) 10);
      Mooventure2016_Rev5_B.s200_LTAHI_RollingCounter = (real_T) tmp1;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S200>/Read CAN Message2' */
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
      Mooventure2016_Rev5_B.s200_MaximumDischargePower_Continuous = ((real_T)
        tmp0) / ((real_T) 100);
      Mooventure2016_Rev5_B.s200_MaximumRegenPower_Continuous = ((real_T) tmp1) /
        ((real_T) 100);
      Mooventure2016_Rev5_B.s200_PPLCont_RollingCounter = (real_T) tmp2;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S198>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3820p0005_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3820p0005_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s198_AgeCount + 1) >
        Mooventure2016_Rev5_B.s198_AgeCount)
      Mooventure2016_Rev5_B.s198_AgeCount++;
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint8_T tmp2 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[4])) ;
      Mooventure2016_Rev5_B.s198_LF_Wheel_Rolling_Count = (real_T) tmp0;
      Mooventure2016_Rev5_B.s198_RT_Wheel_Rolling_Count = (real_T) tmp1;
      Mooventure2016_Rev5_B.s198_Wheel_Rolling_Timestamp = (real_T) tmp2;
      Mooventure2016_Rev5_B.s198_AgeCount = 0;
    }
  }

  /* If: '<S208>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S208>/override_enable'
   */
  if ((RT_Wheel_Rolling_Count_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S208>/NewValue' incorporates:
     *  ActionPort: '<S219>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S219>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(17);
    }

    /* End of Outputs for SubSystem: '<S208>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S208>/OldValue' incorporates:
     *  ActionPort: '<S220>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S220>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(18);
    }

    /* End of Outputs for SubSystem: '<S208>/OldValue' */
  }

  /* End of If: '<S208>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S198>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3822p0004_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3822p0004_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s198_AgeCount_e + 1) >
        Mooventure2016_Rev5_B.s198_AgeCount_e)
      Mooventure2016_Rev5_B.s198_AgeCount_e++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0] & 0x00000008) >> 3) ;
      Mooventure2016_Rev5_B.s198_TCS_ENG_EVNT_IN_PROGRESS = (real_T) tmp0;
      Mooventure2016_Rev5_B.s198_AgeCount_e = 0;
    }
  }

  /* If: '<S209>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S209>/override_enable'
   */
  if ((TCS_ENG_EVNT_IN_PROGRESS_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S209>/NewValue' incorporates:
     *  ActionPort: '<S221>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S221>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(19);
    }

    /* End of Outputs for SubSystem: '<S209>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S209>/OldValue' incorporates:
     *  ActionPort: '<S222>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S222>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(20);
    }

    /* End of Outputs for SubSystem: '<S209>/OldValue' */
  }

  /* End of If: '<S209>/If' */

  /* If: '<S210>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S210>/override_enable'
   */
  if ((ABS_417_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S210>/NewValue' incorporates:
     *  ActionPort: '<S223>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S223>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(21);
    }

    /* End of Outputs for SubSystem: '<S210>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S210>/OldValue' incorporates:
     *  ActionPort: '<S224>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S224>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs11/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(22);
    }

    /* End of Outputs for SubSystem: '<S210>/OldValue' */
  }

  /* End of If: '<S210>/If' */

  /* If: '<S211>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S211>/override_enable'
   */
  if ((Wheel_Rolling_Timestamp_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S211>/NewValue' incorporates:
     *  ActionPort: '<S225>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S225>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(23);
    }

    /* End of Outputs for SubSystem: '<S211>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S211>/OldValue' incorporates:
     *  ActionPort: '<S226>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S226>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(24);
    }

    /* End of Outputs for SubSystem: '<S211>/OldValue' */
  }

  /* End of If: '<S211>/If' */

  /* If: '<S212>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S212>/override_enable'
   */
  if ((ABS_217_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S212>/NewValue' incorporates:
     *  ActionPort: '<S227>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S227>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(25);
    }

    /* End of Outputs for SubSystem: '<S212>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S212>/OldValue' incorporates:
     *  ActionPort: '<S228>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S228>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(26);
    }

    /* End of Outputs for SubSystem: '<S212>/OldValue' */
  }

  /* End of If: '<S212>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S198>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_3821p0004_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_3821p0004_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s198_AgeCount_n + 1) >
        Mooventure2016_Rev5_B.s198_AgeCount_n)
      Mooventure2016_Rev5_B.s198_AgeCount_n++;
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
      Mooventure2016_Rev5_B.s198_Front_left_whl_speed = (((real_T) tmp0) /
        ((real_T) 100)) + ((real_T) -1000);
      Mooventure2016_Rev5_B.s198_Front_right_whl_speed = (((real_T) tmp1) /
        ((real_T) 100)) + ((real_T) -1000);
      Mooventure2016_Rev5_B.s198_Rear_left_whl_speed = (((real_T) tmp2) /
        ((real_T) 100)) + ((real_T) -1000);
      Mooventure2016_Rev5_B.s198_Rear_right_whl_speed = (((real_T) tmp3) /
        ((real_T) 100)) + ((real_T) -1000);
      Mooventure2016_Rev5_B.s198_AgeCount_n = 0;
    }
  }

  /* If: '<S213>/If' incorporates:
   *  Inport: '<S229>/In1'
   *  Inport: '<S230>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S213>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S213>/override_enable'
   */
  if ((Front_right_whl_speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S213>/NewValue' incorporates:
     *  ActionPort: '<S229>/Action Port'
     */
    rtb_UnitDelay_m = (Front_right_whl_speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S229>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(27);
    }

    /* End of Outputs for SubSystem: '<S213>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S213>/OldValue' incorporates:
     *  ActionPort: '<S230>/Action Port'
     */
    rtb_UnitDelay_m = Mooventure2016_Rev5_B.s198_Front_right_whl_speed;

    /* S-Function (motohawk_sfun_code_cover): '<S230>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(28);
    }

    /* End of Outputs for SubSystem: '<S213>/OldValue' */
  }

  /* End of If: '<S213>/If' */

  /* If: '<S214>/If' incorporates:
   *  Inport: '<S231>/In1'
   *  Inport: '<S232>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S214>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S214>/override_enable'
   */
  if ((Rear_left_whl_speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S214>/NewValue' incorporates:
     *  ActionPort: '<S231>/Action Port'
     */
    rtb_Merge_gq = (Rear_left_whl_speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S231>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(29);
    }

    /* End of Outputs for SubSystem: '<S214>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S214>/OldValue' incorporates:
     *  ActionPort: '<S232>/Action Port'
     */
    rtb_Merge_gq = Mooventure2016_Rev5_B.s198_Rear_left_whl_speed;

    /* S-Function (motohawk_sfun_code_cover): '<S232>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(30);
    }

    /* End of Outputs for SubSystem: '<S214>/OldValue' */
  }

  /* End of If: '<S214>/If' */

  /* If: '<S215>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S215>/override_enable'
   */
  if ((ABS_4B0_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S215>/NewValue' incorporates:
     *  ActionPort: '<S233>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S233>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(31);
    }

    /* End of Outputs for SubSystem: '<S215>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S215>/OldValue' incorporates:
     *  ActionPort: '<S234>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S234>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(32);
    }

    /* End of Outputs for SubSystem: '<S215>/OldValue' */
  }

  /* End of If: '<S215>/If' */

  /* If: '<S216>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S216>/override_enable'
   */
  if ((LF_Wheel_Rolling_Count_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S216>/NewValue' incorporates:
     *  ActionPort: '<S235>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S235>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(33);
    }

    /* End of Outputs for SubSystem: '<S216>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S216>/OldValue' incorporates:
     *  ActionPort: '<S236>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S236>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(34);
    }

    /* End of Outputs for SubSystem: '<S216>/OldValue' */
  }

  /* End of If: '<S216>/If' */

  /* If: '<S217>/If' incorporates:
   *  Inport: '<S237>/In1'
   *  Inport: '<S238>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S217>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S217>/override_enable'
   */
  if ((Front_left_whl_speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S217>/NewValue' incorporates:
     *  ActionPort: '<S237>/Action Port'
     */
    rtb_UnitDelay_o = (Front_left_whl_speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S237>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(35);
    }

    /* End of Outputs for SubSystem: '<S217>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S217>/OldValue' incorporates:
     *  ActionPort: '<S238>/Action Port'
     */
    rtb_UnitDelay_o = Mooventure2016_Rev5_B.s198_Front_left_whl_speed;

    /* S-Function (motohawk_sfun_code_cover): '<S238>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(36);
    }

    /* End of Outputs for SubSystem: '<S217>/OldValue' */
  }

  /* End of If: '<S217>/If' */

  /* If: '<S218>/If' incorporates:
   *  Inport: '<S239>/In1'
   *  Inport: '<S240>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S218>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S218>/override_enable'
   */
  if ((Rear_right_whl_speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S218>/NewValue' incorporates:
     *  ActionPort: '<S239>/Action Port'
     */
    rtb_Merge_lf = (Rear_right_whl_speed_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S239>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(37);
    }

    /* End of Outputs for SubSystem: '<S218>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S218>/OldValue' incorporates:
     *  ActionPort: '<S240>/Action Port'
     */
    rtb_Merge_lf = Mooventure2016_Rev5_B.s198_Rear_right_whl_speed;

    /* S-Function (motohawk_sfun_code_cover): '<S240>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/ABS/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(38);
    }

    /* End of Outputs for SubSystem: '<S218>/OldValue' */
  }

  /* End of If: '<S218>/If' */

  /* If: '<S263>/If' incorporates:
   *  Inport: '<S274>/In1'
   *  Inport: '<S275>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S263>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S263>/override_enable'
   */
  if ((Batt_Coolant_Temp_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S263>/NewValue' incorporates:
     *  ActionPort: '<S274>/Action Port'
     */
    Mooventure2016_Rev5_B.s263_Merge = (Batt_Coolant_Temp_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S274>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(47);
    }

    /* End of Outputs for SubSystem: '<S263>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S263>/OldValue' incorporates:
     *  ActionPort: '<S275>/Action Port'
     */
    Mooventure2016_Rev5_B.s263_Merge =
      Mooventure2016_Rev5_B.s200_CoolantTemperature;

    /* S-Function (motohawk_sfun_code_cover): '<S275>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(48);
    }

    /* End of Outputs for SubSystem: '<S263>/OldValue' */
  }

  /* End of If: '<S263>/If' */

  /* If: '<S266>/If' incorporates:
   *  Inport: '<S280>/In1'
   *  Inport: '<S281>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S266>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S266>/override_enable'
   */
  if ((Pack_State_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S266>/NewValue' incorporates:
     *  ActionPort: '<S280>/Action Port'
     */
    Mooventure2016_Rev5_B.s266_Merge = (Pack_State_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S280>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(53);
    }

    /* End of Outputs for SubSystem: '<S266>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S266>/OldValue' incorporates:
     *  ActionPort: '<S281>/Action Port'
     */
    Mooventure2016_Rev5_B.s266_Merge = Mooventure2016_Rev5_B.s200_PackState;

    /* S-Function (motohawk_sfun_code_cover): '<S281>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Battery_Inputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(54);
    }

    /* End of Outputs for SubSystem: '<S266>/OldValue' */
  }

  /* End of If: '<S266>/If' */

  /* If: '<S307>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S307>/override_enable'
   */
  if ((OutputCurrent_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S307>/NewValue' incorporates:
     *  ActionPort: '<S320>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S320>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(65);
    }

    /* End of Outputs for SubSystem: '<S307>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S307>/OldValue' incorporates:
     *  ActionPort: '<S321>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S321>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(66);
    }

    /* End of Outputs for SubSystem: '<S307>/OldValue' */
  }

  /* End of If: '<S307>/If' */

  /* If: '<S308>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S308>/override_enable'
   */
  if ((OutputVoltage_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S308>/NewValue' incorporates:
     *  ActionPort: '<S322>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S322>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(67);
    }

    /* End of Outputs for SubSystem: '<S308>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S308>/OldValue' incorporates:
     *  ActionPort: '<S323>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S323>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Eaton Charger/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(68);
    }

    /* End of Outputs for SubSystem: '<S308>/OldValue' */
  }

  /* End of If: '<S308>/If' */

  /* If: '<S334>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S334>/override_enable'
   */
  if ((Subfunction_Select_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S334>/NewValue' incorporates:
     *  ActionPort: '<S341>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S341>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(77);
    }

    /* End of Outputs for SubSystem: '<S334>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S334>/OldValue' incorporates:
     *  ActionPort: '<S342>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S342>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(78);
    }

    /* End of Outputs for SubSystem: '<S334>/OldValue' */
  }

  /* End of If: '<S334>/If' */

  /* If: '<S335>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S335>/override_enable'
   */
  if ((Confirm_Actve_Trip_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S335>/NewValue' incorporates:
     *  ActionPort: '<S343>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S343>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(79);
    }

    /* End of Outputs for SubSystem: '<S335>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S335>/OldValue' incorporates:
     *  ActionPort: '<S344>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S344>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(80);
    }

    /* End of Outputs for SubSystem: '<S335>/OldValue' */
  }

  /* End of If: '<S335>/If' */

  /* If: '<S336>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S336>/override_enable'
   */
  if ((INFO_610_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S336>/NewValue' incorporates:
     *  ActionPort: '<S345>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S345>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(81);
    }

    /* End of Outputs for SubSystem: '<S336>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S336>/OldValue' incorporates:
     *  ActionPort: '<S346>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S346>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(82);
    }

    /* End of Outputs for SubSystem: '<S336>/OldValue' */
  }

  /* End of If: '<S336>/If' */

  /* If: '<S337>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S337>/override_enable'
   */
  if ((Confirm_Reset_Trip_B_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S337>/NewValue' incorporates:
     *  ActionPort: '<S347>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S347>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(83);
    }

    /* End of Outputs for SubSystem: '<S337>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S337>/OldValue' incorporates:
     *  ActionPort: '<S348>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S348>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(84);
    }

    /* End of Outputs for SubSystem: '<S337>/OldValue' */
  }

  /* End of If: '<S337>/If' */

  /* If: '<S338>/If' incorporates:
   *  Inport: '<S349>/In1'
   *  Inport: '<S350>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S338>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S338>/override_enable'
   */
  if ((Confirm_Reset_Trip_A_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S338>/NewValue' incorporates:
     *  ActionPort: '<S349>/Action Port'
     */
    rtb_Merge_ld = (Confirm_Reset_Trip_A_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S349>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(85);
    }

    /* End of Outputs for SubSystem: '<S338>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S338>/OldValue' incorporates:
     *  ActionPort: '<S350>/Action Port'
     */
    rtb_Merge_ld = Mooventure2016_Rev5_B.s206_Confirm_Reset_Trip_A;

    /* S-Function (motohawk_sfun_code_cover): '<S350>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Infotainment Inputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(86);
    }

    /* End of Outputs for SubSystem: '<S338>/OldValue' */
  }

  /* End of If: '<S338>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S207>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_4843p0005_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_4843p0005_Receive(0, &msg_id, 0, msg_data);
    if ((Mooventure2016_Rev5_B.s207_AgeCount + 1) >
        Mooventure2016_Rev5_B.s207_AgeCount)
      Mooventure2016_Rev5_B.s207_AgeCount++;
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
      Mooventure2016_Rev5_B.s207_STR_WHL_ANGLE_CNTR_FND = (real_T) tmp0;
      Mooventure2016_Rev5_B.s207_STR_WHL_ANGLE = (((real_T) tmp1) / ((real_T) 10))
        + ((real_T) -1000);
      Mooventure2016_Rev5_B.s207_RELATIVE_STR_WHL_ANGLE = (((real_T) tmp2) /
        ((real_T) 10)) + ((real_T) -2000);
      Mooventure2016_Rev5_B.s207_AgeCount = 0;
    }
  }

  /* If: '<S355>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S355>/override_enable'
   */
  if ((STR_WHL_ANGLE_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S355>/NewValue' incorporates:
     *  ActionPort: '<S359>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S359>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(91);
    }

    /* End of Outputs for SubSystem: '<S355>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S355>/OldValue' incorporates:
     *  ActionPort: '<S360>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S360>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(92);
    }

    /* End of Outputs for SubSystem: '<S355>/OldValue' */
  }

  /* End of If: '<S355>/If' */

  /* If: '<S356>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S356>/override_enable'
   */
  if ((RELATIVE_STR_WHL_ANGLE_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S356>/NewValue' incorporates:
     *  ActionPort: '<S361>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S361>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(93);
    }

    /* End of Outputs for SubSystem: '<S356>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S356>/OldValue' incorporates:
     *  ActionPort: '<S362>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S362>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(94);
    }

    /* End of Outputs for SubSystem: '<S356>/OldValue' */
  }

  /* End of If: '<S356>/If' */

  /* If: '<S357>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S357>/override_enable'
   */
  if ((PSCM_80_AgeCount_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S357>/NewValue' incorporates:
     *  ActionPort: '<S363>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S363>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(95);
    }

    /* End of Outputs for SubSystem: '<S357>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S357>/OldValue' incorporates:
     *  ActionPort: '<S364>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S364>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(96);
    }

    /* End of Outputs for SubSystem: '<S357>/OldValue' */
  }

  /* End of If: '<S357>/If' */

  /* If: '<S358>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S358>/override_enable'
   */
  if ((STR_WHL_ANGLE_CNTR_FND_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S358>/NewValue' incorporates:
     *  ActionPort: '<S365>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S365>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(97);
    }

    /* End of Outputs for SubSystem: '<S358>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S358>/OldValue' incorporates:
     *  ActionPort: '<S366>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S366>/motohawk_code_coverage' */
    /* Code Coverage Test: Mooventure2016_Rev5/Foreground/Inputs/Steering Wheel/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(98);
    }

    /* End of Outputs for SubSystem: '<S358>/OldValue' */
  }

  /* End of If: '<S358>/If' */

  /* RelationalOperator: '<S52>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S52>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_a = ((Mooventure2016_Rev5_B.s203_Brake_Position >=
    (Brake_Pedal_Position_High_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S52>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Brake_Pedal_Position_Sensor_A_Circuit_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(13, rtb_RelationalOperator3_a);
    UpdateFault(13);
  }

  /* Abs: '<S52>/Abs' incorporates:
   *  Sum: '<S52>/Add'
   *  UnitDelay: '<S52>/Unit Delay'
   */
  rtb_Merge_hn = fabs(Mooventure2016_Rev5_B.s203_Brake_Position -
                      Mooventure2016_Rev5_DWork.s52_UnitDelay_DSTATE);

  /* RelationalOperator: '<S52>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S52>/motohawk_calibration'
   */
  rtb_RelationalOperator_l1 = ((rtb_Merge_hn >=
    (Brake_Pedal_Position_Intermiitent_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S52>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Brake_Pedal_Position_Intermiitent */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(11, rtb_RelationalOperator_l1);
    UpdateFault(11);
  }

  /* RelationalOperator: '<S52>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S52>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_da = ((Mooventure2016_Rev5_B.s203_Brake_Position <=
    (Brake_Pedal_Position_Low_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S52>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Brake_Pedal_Position_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(12, rtb_RelationalOperator2_da);
    UpdateFault(12);
  }

  /* RelationalOperator: '<S52>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S52>/motohawk_calibration4'
   */
  rtb_motohawk_fault_action1_g = ((real_T)Mooventure2016_Rev5_B.s203_AgeCount_j >=
                                  
    (Brake_Pedal_Position_Communication_Loss_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S52>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Brake_Pedal_Position_Communication_Loss */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(10, rtb_motohawk_fault_action1_g);
    UpdateFault(10);
  }

  /* DataTypeConversion: '<S53>/Data Type Conversion1' incorporates:
   *  RelationalOperator: '<S61>/FixPt Relational Operator'
   *  UnitDelay: '<S61>/Delay Input1'
   */
  rtb_motohawk_fault_action1_g = (rtb_LogicalOperator_h !=
    Mooventure2016_Rev5_DWork.s61_DelayInput1_DSTATE);

  /* S-Function (motohawk_sfun_fault_def): '<S53>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Cruise_Control_Off_Signal_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(41, rtb_motohawk_fault_action1_g);
    UpdateFault(41);
  }

  /* DataTypeConversion: '<S53>/Data Type Conversion2' incorporates:
   *  RelationalOperator: '<S62>/FixPt Relational Operator'
   *  UnitDelay: '<S62>/Delay Input1'
   */
  rtb_motohawk_fault_action1_g = (rtb_LogicalOperator_po !=
    Mooventure2016_Rev5_DWork.s62_DelayInput1_DSTATE);

  /* S-Function (motohawk_sfun_fault_def): '<S53>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Cruise_Control_Resume_Signal_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(43, rtb_motohawk_fault_action1_g);
    UpdateFault(43);
  }

  /* DataTypeConversion: '<S53>/Data Type Conversion3' incorporates:
   *  RelationalOperator: '<S63>/FixPt Relational Operator'
   *  UnitDelay: '<S63>/Delay Input1'
   */
  rtb_motohawk_fault_action1_g = (rtb_LogicalOperator_b2 !=
    Mooventure2016_Rev5_DWork.s63_DelayInput1_DSTATE);

  /* S-Function (motohawk_sfun_fault_def): '<S53>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Cruise_Control_Set_Signal_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(44, rtb_motohawk_fault_action1_g);
    UpdateFault(44);
  }

  /* DataTypeConversion: '<S53>/Data Type Conversion4' incorporates:
   *  RelationalOperator: '<S64>/FixPt Relational Operator'
   *  UnitDelay: '<S64>/Delay Input1'
   */
  rtb_motohawk_fault_action1_g = (rtb_LogicalOperator_e !=
    Mooventure2016_Rev5_DWork.s64_DelayInput1_DSTATE);

  /* S-Function (motohawk_sfun_fault_def): '<S53>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Cruise_Control_Coast_Signal_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(40, rtb_motohawk_fault_action1_g);
    UpdateFault(40);
  }

  /* RelationalOperator: '<S53>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S53>/motohawk_calibration2'
   */
  rtb_RelationalOperator1_f = ((Mooventure2016_Rev5_B.s203_Brake_Position >
    (Cruise_Disable_Brake_Fault1_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S53>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Cruise_Control_Brake_Switch_A_Circuit_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(37, rtb_RelationalOperator1_f);
    UpdateFault(37);
  }

  /* RelationalOperator: '<S53>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S53>/motohawk_calibration1'
   */
  rtb_RelationalOperator2_j = ((Mooventure2016_Rev5_B.s203_Brake_Position <=
    (Cruise_Disable_Brake_Fault2_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S53>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Cruise_Control_Brake_Switch_A_Circuit_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(38, rtb_RelationalOperator2_j);
    UpdateFault(38);
  }

  /* DataTypeConversion: '<S53>/Data Type Conversion' incorporates:
   *  RelationalOperator: '<S60>/FixPt Relational Operator'
   *  UnitDelay: '<S60>/Delay Input1'
   */
  rtb_motohawk_fault_action1_g = (rtb_LogicalOperator_f !=
    Mooventure2016_Rev5_DWork.s60_DelayInput1_DSTATE);

  /* S-Function (motohawk_sfun_fault_def): '<S53>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Cruise_Control_On_Signal_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(42, rtb_motohawk_fault_action1_g);
    UpdateFault(42);
  }

  /* Logic: '<S53>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S53>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S53>/motohawk_fault_status1'
   */
  rtb_LogicalOperator2_i = ((IsFaultActive(37) || IsFaultActive(38)));

  /* S-Function (motohawk_sfun_fault_def): '<S53>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Cruise_Control_Brake_Switch_A_Circuit_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(39, rtb_LogicalOperator2_i);
    UpdateFault(39);
  }

  /* Product: '<S54>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration7'
   */
  rtb_Merge_hn = (RPM_to_Wheel_Speed_Multiplier2_DataStore()) *
    Mooventure2016_Rev5_B.s331_Merge;

  /* RelationalOperator: '<S54>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_i3 = ((rtb_Merge_hn <=
    (Electric_Motor_Over_Speed_Reverse_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S54>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Electric_Motor_Over_Speed_Reverse */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(56, rtb_RelationalOperator3_i3);
    UpdateFault(56);
  }

  /* MATLAB Function Block: '<S54>/Data Correction Motor Fault' */
  Mooventure2016_Rev5_DataCorrectionMotorFault
    (Mooventure2016_Rev5_B.s205_IPT_WheelTorqueDelivered,
     &Mooventure2016_Rev5_B.s54_sf_DataCorrectionMotorFault);

  /* Sum: '<S54>/Add' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S54>/motohawk_data_read'
   */
  rtb_MinMax_l2 =
    Mooventure2016_Rev5_B.s54_sf_DataCorrectionMotorFault.s65_torqueOut -
    TorqueRequest_DataStore();

  /* Abs: '<S54>/Abs' */
  rtb_MinMax_l2 = fabs(rtb_MinMax_l2);

  /* RelationalOperator: '<S54>/Relational Operator12' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration13'
   */
  rtb_RelationalOperator12_d = ((rtb_MinMax_l2 >=
    (Electric_Motor_Torque_Output_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S54>/motohawk_fault_def10' */

  /* Set Fault Suspected Status: Electric_Motor_Torque_Output_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(58, rtb_RelationalOperator12_d);
    UpdateFault(58);
  }

  /* RelationalOperator: '<S54>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_ad = ((Mooventure2016_Rev5_B.s205_IPT_HVDCVoltage <
    (Electric_Motor_Derated_Under_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S54>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Electric_Motor_Derated_Under_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(53, rtb_RelationalOperator1_ad);
    UpdateFault(53);
  }

  /* RelationalOperator: '<S54>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration4'
   */
  rtb_RelationalOperator4_d = ((Mooventure2016_Rev5_B.s205_IPT_HVDCVoltage >
    (Electric_Motor_Derated_Over_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S54>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Electric_Motor_Derated_Over_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(51, rtb_RelationalOperator4_d);
    UpdateFault(51);
  }

  /* RelationalOperator: '<S54>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_e = ((rtb_Merge_hn >=
    (Electric_Motor_Over_Speed_Forward_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S54>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Electric_Motor_Over_Speed_Forward */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(55, rtb_RelationalOperator2_e);
    UpdateFault(55);
  }

  /* RelationalOperator: '<S54>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_k =
    ((Mooventure2016_Rev5_B.s205_IPT_InverterTemperature <
      (Electric_Motor_Derated_Under_Temperature_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S54>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Electric_Motor_Derated_Under_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(52, rtb_RelationalOperator5_k);
    UpdateFault(52);
  }

  /* RelationalOperator: '<S54>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration6'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s205_IPT_InverterTemperature >
    (Electric_Motor_Derated_Approaching_Over_Temperature_Fault_Under_DataStore()));

  /* Logic: '<S54>/Logical Operator' incorporates:
   *  RelationalOperator: '<S54>/Relational Operator7'
   *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration8'
   */
  rtb_LogicalOperator_j = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s205_IPT_InverterTemperature <
     (Electric_Motor_Derated_Approaching_Over_Temperature_Fault_Over_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S54>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Electric_Motor_Approaching_Over_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(49, rtb_LogicalOperator_j);
    UpdateFault(49);
  }

  /* RelationalOperator: '<S54>/Relational Operator8' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration9'
   */
  rtb_RelationalOperator8 = ((Mooventure2016_Rev5_B.s205_IPT_InverterTemperature
    >= (Electric_Motor_Derated_Over_Temperature_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S54>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Electric_Motor_Derated_Over_Temperature */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(50, rtb_RelationalOperator8);
    UpdateFault(50);
  }

  /* RelationalOperator: '<S54>/Relational Operator9' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration10'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s205_IPT_ErrorCategory >
    (Electric_Motor_General_Error_Fault_Under_DataStore()));

  /* Logic: '<S54>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S54>/Relational Operator10'
   *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration11'
   */
  rtb_LogicalOperator1_j = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s205_IPT_ErrorCategory <
     (Electric_Motor_General_Error_Fault_Over_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S54>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Electric_Motor_General_Error */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(54, rtb_LogicalOperator1_j);
    UpdateFault(54);
  }

  /* RelationalOperator: '<S54>/Relational Operator11' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration12'
   */
  rtb_RelationalOperator11 = ((Mooventure2016_Rev5_B.s205_IPT_ErrorCategory >=
    (Electric_Motor_Shutdown_Error_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S54>/motohawk_fault_def9' */

  /* Set Fault Suspected Status: Electric_Motor_Shutodwn_Error */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(57, rtb_RelationalOperator11);
    UpdateFault(57);
  }

  /* RelationalOperator: '<S55>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S55>/motohawk_calibration3'
   */
  rtb_motohawk_fault_action1_g = ((real_T)
    Mooventure2016_Rev5_B.s203_Throttle_Position >=
    (Pedal_Position_Sensor_A_Circuit_High_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S55>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Pedal_Position_Sensor_A_Circuit_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(81, rtb_motohawk_fault_action1_g);
    UpdateFault(81);
  }

  /* Sum: '<S55>/Add' incorporates:
   *  UnitDelay: '<S55>/Unit Delay'
   */
  rtb_motohawk_ain = (uint16_T)(Mooventure2016_Rev5_B.s203_Throttle_Position -
    Mooventure2016_Rev5_DWork.s55_UnitDelay_DSTATE);

  /* RelationalOperator: '<S55>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S55>/motohawk_calibration'
   */
  rtb_motohawk_fault_action1_g = ((real_T)rtb_motohawk_ain >=
    (Pedal_Poition_Sensor_A_Intermittent_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S55>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Pedal_Position_Sensor_A_Circuit_Intermittent */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    boolean_T update;
    if (Mooventure2016_Rev5_DWork.s55_motohawk_fault_def2_DWORK1 >= 3) {
      update = 1;
      Mooventure2016_Rev5_DWork.s55_motohawk_fault_def2_DWORK1 = 0;
    } else {
      update = 0;
      Mooventure2016_Rev5_DWork.s55_motohawk_fault_def2_DWORK1++;
    }

    SetFaultSuspected(82, rtb_motohawk_fault_action1_g);
    if (update)
      UpdateFault(82);
  }

  /* RelationalOperator: '<S55>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S55>/motohawk_calibration2'
   */
  rtb_motohawk_fault_action1_g = ((real_T)
    Mooventure2016_Rev5_B.s203_Throttle_Position <=
    (Pedal_Position_Sensor_A_Circuit_Low_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S55>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Pedal_Position_Sensor_A_Circuit_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(83, rtb_motohawk_fault_action1_g);
    UpdateFault(83);
  }

  /* RelationalOperator: '<S56>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S56>/motohawk_calibration1'
   */
  rtb_motohawk_fault_action1_g = (Mooventure2016_Rev5_B.s300_posOut >=
    (Park_Nuetral_Switch_Input_High_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S56>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Park_Nuetral_Switch_Input_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(79, rtb_motohawk_fault_action1_g);
    UpdateFault(79);
  }

  /* RelationalOperator: '<S56>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S56>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_f = ((Mooventure2016_Rev5_B.s300_posOut >=
    (Drive_Switch_Input_High_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S56>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Drive_Switch_Input_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(47, rtb_RelationalOperator3_f);
    UpdateFault(47);
  }

  /* RelationalOperator: '<S56>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S56>/motohawk_calibration2'
   */
  rtb_RelationalOperator_jg = (Mooventure2016_Rev5_B.s300_posOut <=
    (Drive_Switch_Input_Low_Fault_DataStore()));

  /* Logic: '<S56>/Logical Operator1' */
  rtb_LogicalOperator1_ax = rtb_RelationalOperator_jg;

  /* S-Function (motohawk_sfun_fault_def): '<S56>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Drive_Switch_Input_Circuit */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(46, rtb_LogicalOperator1_ax);
    UpdateFault(46);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S56>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Drive_Switch_Input_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(48, rtb_RelationalOperator_jg);
    UpdateFault(48);
  }

  /* RelationalOperator: '<S56>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S56>/motohawk_calibration4'
   */
  rtb_RelationalOperator_jg = ((real_T)Mooventure2016_Rev5_B.s203_AgeCount >=
    (Gear_Shift_Module_Communication_Circuit_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S56>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Gear_Shift_Communication_Circuit */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(59, rtb_RelationalOperator_jg);
    UpdateFault(59);
  }

  /* RelationalOperator: '<S56>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S56>/motohawk_calibration'
   */
  rtb_RelationalOperator_jg = (Mooventure2016_Rev5_B.s300_posOut <=
    (Park_Nuetral_Switch_Input_Low_Fault_DataStore()));

  /* Logic: '<S56>/Logical Operator2' */
  rtb_LogicalOperator2_m = ((rtb_motohawk_fault_action1_g ||
    rtb_RelationalOperator_jg));

  /* S-Function (motohawk_sfun_fault_def): '<S56>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Park_Nuetral_Switch_Input_Circuit */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(78, rtb_LogicalOperator2_m);
    UpdateFault(78);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S56>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Park_Nuetral_Switch_Input_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(80, rtb_RelationalOperator_jg);
    UpdateFault(80);
  }

  /* Abs: '<S58>/Abs' */
  rtb_Abs = fabs(rtb_UnitDelay_o);

  /* Sum: '<S66>/Sum2' incorporates:
   *  UnitDelay: '<S66>/Unit Delay'
   */
  rtb_UnitDelay_o = rtb_Abs - Mooventure2016_Rev5_DWork.s66_UnitDelay_DSTATE;

  /* S-Function Block: <S66>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s66_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_an = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S66>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S66>/motohawk_delta_time'
   */
  rtb_UnitDelay_o /= rtb_motohawk_delta_time_an;

  /* RelationalOperator: '<S58>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S58>/motohawk_calibration'
   */
  rtb_LogicalOperator5 = (rtb_UnitDelay_o >
    (Traction_Control_System_Maulfunction_Fault_DataStore()));

  /* Abs: '<S58>/Abs1' */
  rtb_Abs1 = fabs(rtb_UnitDelay_m);

  /* Sum: '<S67>/Sum2' incorporates:
   *  UnitDelay: '<S67>/Unit Delay'
   */
  rtb_UnitDelay_o = rtb_Abs1 - Mooventure2016_Rev5_DWork.s67_UnitDelay_DSTATE;

  /* S-Function Block: <S67>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s67_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_iv = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S58>/Relational Operator1' incorporates:
   *  Product: '<S67>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S58>/motohawk_calibration'
   *  S-Function (motohawk_sfun_delta_time): '<S67>/motohawk_delta_time'
   */
  rtb_LogicalOperator2_f = (rtb_UnitDelay_o / rtb_motohawk_delta_time_iv >
    (Traction_Control_System_Maulfunction_Fault_DataStore()));

  /* Abs: '<S58>/Abs2' */
  rtb_Abs2 = fabs(rtb_Merge_gq);

  /* Sum: '<S68>/Sum2' incorporates:
   *  UnitDelay: '<S68>/Unit Delay'
   */
  rtb_UnitDelay_o = rtb_Abs2 - Mooventure2016_Rev5_DWork.s68_UnitDelay_DSTATE;

  /* S-Function Block: <S68>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s68_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_d = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S58>/Relational Operator2' incorporates:
   *  Product: '<S68>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S58>/motohawk_calibration'
   *  S-Function (motohawk_sfun_delta_time): '<S68>/motohawk_delta_time'
   */
  rtb_RelationalOperator_be = (rtb_UnitDelay_o / rtb_motohawk_delta_time_d >
    (Traction_Control_System_Maulfunction_Fault_DataStore()));

  /* Abs: '<S58>/Abs3' */
  rtb_Abs3 = fabs(rtb_Merge_lf);

  /* Sum: '<S69>/Sum2' incorporates:
   *  UnitDelay: '<S69>/Unit Delay'
   */
  rtb_UnitDelay_o = rtb_Abs3 - Mooventure2016_Rev5_DWork.s69_UnitDelay_DSTATE;

  /* S-Function Block: <S69>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s69_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_gg = ((real_T) delta) * 0.000001;
  }

  /* Logic: '<S58>/Logical Operator' incorporates:
   *  Product: '<S69>/Product'
   *  RelationalOperator: '<S58>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S58>/motohawk_calibration'
   *  S-Function (motohawk_sfun_delta_time): '<S69>/motohawk_delta_time'
   */
  rtb_LogicalOperator_l = ((rtb_LogicalOperator5 || rtb_LogicalOperator2_f ||
    rtb_RelationalOperator_be || (rtb_UnitDelay_o / rtb_motohawk_delta_time_gg >
                             
    (Traction_Control_System_Maulfunction_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S58>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Traction_Control_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(88, rtb_LogicalOperator_l);
    UpdateFault(88);
  }

  /* MATLAB Function Block: '<S59>/Data Correction' */
  Mooventure2016_Rev5_DataCorrectionMotorFault
    (Mooventure2016_Rev5_B.s205_IPT_WheelTorqueDelivered,
     &Mooventure2016_Rev5_B.s59_sf_DataCorrection);

  /* RelationalOperator: '<S59>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S59>/motohawk_calibration2'
   */
  rtb_LogicalOperator5 =
    (Mooventure2016_Rev5_B.s59_sf_DataCorrection.s65_torqueOut >
     (Vehicle_Speed_Sensor_Circuit_Low_Fault_DataStore()));

  /* Logic: '<S59>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S59>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S59>/motohawk_calibration3'
   */
  rtb_LogicalOperator1_hq = ((rtb_LogicalOperator5 &&
    (Mooventure2016_Rev5_B.s331_Merge < (Motor_Speed_TorqueRPM_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S59>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Vehicle_Speed_Sensor_Circuit_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(90, rtb_LogicalOperator1_hq);
    UpdateFault(90);
  }

  /* Sum: '<S59>/Add' incorporates:
   *  UnitDelay: '<S59>/Unit Delay'
   */
  rtb_MinMax_l2 = Mooventure2016_Rev5_B.s331_Merge -
    Mooventure2016_Rev5_DWork.s59_UnitDelay_DSTATE;

  /* Abs: '<S59>/Abs' */
  rtb_MinMax_l2 = fabs(rtb_MinMax_l2);

  /* RelationalOperator: '<S59>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S59>/motohawk_calibration4'
   */
  rtb_RelationalOperator_ox = ((rtb_MinMax_l2 >=
    (Motor_Speed_Torque_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S59>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Vehicle_Speed_Sensor_Erratic */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(91, rtb_RelationalOperator_ox);
    UpdateFault(91);
  }

  /* RelationalOperator: '<S59>/Relational Operator7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S59>/motohawk_calibration7'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s331_Merge <
    (Motor_Speed_Low_Fault_DataStore()));

  /* Logic: '<S59>/Logical Operator' incorporates:
   *  RelationalOperator: '<S59>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S59>/motohawk_calibration1'
   */
  rtb_LogicalOperator_fz = ((rtb_LogicalOperator5 ||
    (Mooventure2016_Rev5_B.s331_Merge > (Motor_Speed_High_Fault_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S59>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: Vehicle_Speed_Sensor_Rang_Performance */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(92, rtb_LogicalOperator_fz);
    UpdateFault(92);
  }

  /* Logic: '<S59>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S59>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S59>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S59>/motohawk_fault_status2'
   */
  rtb_LogicalOperator2_ax = ((IsFaultActive(92) || IsFaultActive(90) ||
    IsFaultActive(91)));

  /* S-Function (motohawk_sfun_fault_def): '<S59>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Vehcile_Speed_Sensor_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(89, rtb_LogicalOperator2_ax);
    UpdateFault(89);
  }

  /* S-Function Block: <S51>/motohawk_ain Resource: DRVP */
  rtb_motohawk_ain = DRVP_AnalogInput_Get();

  /* Product: '<S51>/Product' incorporates:
   *  Constant: '<S51>/Constant'
   */
  rtb_Product_d = (real_T)rtb_motohawk_ain * 0.02697;

  /* RelationalOperator: '<S51>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S51>/motohawk_calibration1'
   */
  rtb_motohawk_fault_action1_g = (rtb_Product_d <= (V12_Low_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S51>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: System_Voltage_Low */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(85, rtb_motohawk_fault_action1_g);
    UpdateFault(85);
  }

  /* Sum: '<S51>/Add' incorporates:
   *  UnitDelay: '<S51>/Unit Delay'
   */
  rtb_MinMax_l2 = rtb_Product_d - Mooventure2016_Rev5_DWork.s51_UnitDelay_DSTATE;

  /* Abs: '<S51>/Abs' */
  rtb_MinMax_l2 = fabs(rtb_MinMax_l2);

  /* RelationalOperator: '<S51>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S51>/motohawk_calibration4'
   */
  rtb_RelationalOperator_jg = (rtb_MinMax_l2 >=
    (V12_Battery_Erratic_Fault_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S51>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: System_Voltage_Unstable */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(87, rtb_RelationalOperator_jg);
    UpdateFault(87);
  }

  /* RelationalOperator: '<S51>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S51>/motohawk_calibration2'
   */
  rtb_RelationalOperator2_id = (rtb_Product_d >= (V12_High_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S51>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: System_Voltage_High */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(84, rtb_RelationalOperator2_id);
    UpdateFault(84);
  }

  /* Logic: '<S51>/Logical Operator2' */
  rtb_LogicalOperator2_kg = ((rtb_RelationalOperator_jg ||
    rtb_motohawk_fault_action1_g || rtb_RelationalOperator2_id));

  /* S-Function (motohawk_sfun_fault_def): '<S51>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: System_Voltage_Malfunction */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(86, rtb_LogicalOperator2_kg);
    UpdateFault(86);
  }

  /* RelationalOperator: '<S57>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S57>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S57>/motohawk_data_read1'
   */
  rtb_RelationalOperator1_e = ((ECUP_DataStore() >=
    (Key_Line_Voltage_Fault_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S57>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Key_Line_Voltage */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(76, rtb_RelationalOperator1_e);
    UpdateFault(76);
  }

  /* RelationalOperator: '<S57>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S57>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_data_read): '<S57>/motohawk_data_read1'
   */
  rtb_LogicalOperator5 = (ECUP_DataStore() >=
    (Key_Off_Coltage_High_Fault_DataStore()));

  /* Logic: '<S57>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S57>/motohawk_data_read'
   */
  rtb_LogicalOperator_pw = ((rtb_LogicalOperator5 && Shutdown_Req_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S57>/motohawk_fault_def2' */

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
   *  Logic: '<S14>/Logical Operator5'
   *  S-Function (motohawk_sfun_data_read): '<S17>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S17>/motohawk_delta_time'
   *  Sum: '<S17>/Sum'
   */
  if (!Mooventure2016_Rev5_B.s15_Merge) {
    rtb_MinMax_l2 = rtb_motohawk_delta_time_ey +
      Solectria_Enable_timer_DataStore();
  } else {
    rtb_MinMax_l2 = 0.0;
  }

  /* End of Switch: '<S17>/Switch' */
  /* RelationalOperator: '<S13>/Compare' incorporates:
   *  Constant: '<S13>/Constant'
   */
  rtb_motohawk_fault_action1_g = (Mooventure2016_Rev5_B.s266_Merge == 4.0);

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
    Mooventure2016_Rev5_B.s492_VehicleReadyOutput));

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
  rtb_Saturation_b3 = rtb_MinMax_l2 >= 86400.0 ? 86400.0 : rtb_MinMax_l2 <= 0.0 ?
    0.0 : rtb_MinMax_l2;

  /* S-Function (motohawk_sfun_data_write): '<S17>/motohawk_data_write' */
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
    TorqueRequest_DataStore() = Mooventure2016_Rev5_B.s79_Switch;
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

  /* Outputs for Enabled SubSystem: '<S72>/Brake Disable' incorporates:
   *  EnablePort: '<S85>/Enable'
   */
  /* RelationalOperator: '<S72>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S72>/motohawk_calibration2'
   */
  if (Mooventure2016_Rev5_B.s203_Brake_Position <
      (Cruise_Disable_Brake_DataStore())) {
    /* S-Function (motohawk_sfun_data_write): '<S85>/motohawk_data_write1' incorporates:
     *  Constant: '<S85>/Constant'
     */
    /* Write to Data Storage as scalar: CruiseOn */
    {
      CruiseOn_DataStore() = FALSE;
    }
  }

  /* End of RelationalOperator: '<S72>/Relational Operator1' */
  /* End of Outputs for SubSystem: '<S72>/Brake Disable' */
  /* Outputs for Enabled SubSystem: '<S86>/Speed Decrease' incorporates:
   *  EnablePort: '<S93>/Enable'
   */
  /* Logic: '<S86>/Logical Operator' incorporates:
   *  RelationalOperator: '<S91>/FixPt Relational Operator'
   *  S-Function (motohawk_sfun_data_read): '<S86>/motohawk_data_read'
   *  UnitDelay: '<S91>/Delay Input1'
   */
  if (CruiseOn_DataStore() && (rtb_LogicalOperator_e >
       Mooventure2016_Rev5_DWork.s91_DelayInput1_DSTATE)) {
    /* Sum: '<S93>/Add' incorporates:
     *  Constant: '<S93>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S93>/motohawk_data_read1'
     */
    rtb_Add_l = CruiseSpeed_DataStore() - 1.0;

    /* S-Function (motohawk_sfun_data_write): '<S93>/motohawk_data_write' */
    /* Write to Data Storage as scalar: CruiseSpeed */
    {
      CruiseSpeed_DataStore() = rtb_Add_l;
    }
  }

  /* End of Logic: '<S86>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S86>/Speed Decrease' */

  /* Outputs for Enabled SubSystem: '<S86>/Speed Increase' incorporates:
   *  EnablePort: '<S94>/Enable'
   */
  /* Logic: '<S86>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S92>/FixPt Relational Operator'
   *  S-Function (motohawk_sfun_data_read): '<S86>/motohawk_data_read'
   *  UnitDelay: '<S92>/Delay Input1'
   */
  if (CruiseOn_DataStore() && (rtb_LogicalOperator_b2 >
       Mooventure2016_Rev5_DWork.s92_DelayInput1_DSTATE)) {
    /* Sum: '<S94>/Add' incorporates:
     *  Constant: '<S94>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S94>/motohawk_data_read1'
     */
    rtb_Add_e = CruiseSpeed_DataStore() + 1.0;

    /* S-Function (motohawk_sfun_data_write): '<S94>/motohawk_data_write' */
    /* Write to Data Storage as scalar: CruiseSpeed */
    {
      CruiseSpeed_DataStore() = rtb_Add_e;
    }
  }

  /* End of Logic: '<S86>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S86>/Speed Increase' */

  /* Outputs for Enabled SubSystem: '<S88>/Enabled Subsystem1' incorporates:
   *  EnablePort: '<S107>/Enable'
   */
  /* RelationalOperator: '<S106>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S106>/Delay Input1'
   */
  if ((rtb_LogicalOperator_po >
       Mooventure2016_Rev5_DWork.s106_DelayInput1_DSTATE) > 0) {
    /* S-Function (motohawk_sfun_data_write): '<S107>/motohawk_data_write1' incorporates:
     *  Constant: '<S107>/Constant'
     */
    /* Write to Data Storage as scalar: CruiseOn */
    {
      CruiseOn_DataStore() = TRUE;
    }
  }

  /* End of RelationalOperator: '<S106>/FixPt Relational Operator' */
  /* End of Outputs for SubSystem: '<S88>/Enabled Subsystem1' */
  /* RelationalOperator: '<S72>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S72>/motohawk_calibration1'
   */
  rtb_LogicalOperator5 = (rtb_Product >= (Cruise_On_Speed_DataStore()));

  /* Logic: '<S72>/Logical Operator1' incorporates:
   *  Logic: '<S72>/Logical Operator'
   *  Logic: '<S72>/Logical Operator2'
   *  S-Function (motohawk_sfun_data_read): '<S72>/motohawk_data_read'
   */
  rtb_LogicalOperator5 = (rtb_LogicalOperator5 && (rtb_LogicalOperator_e ||
    rtb_LogicalOperator_b2) && Mooventure2016_Rev5_B.s90_System &&
    (!CruiseOn_DataStore()));

  /* Product: '<S72>/Product1' */
  rtb_Product1_hm = rtb_Product * (real_T)rtb_LogicalOperator5;

  /* Outputs for Enabled SubSystem: '<S72>/System Start' incorporates:
   *  EnablePort: '<S89>/Enable'
   */
  if (rtb_LogicalOperator5) {
    /* S-Function (motohawk_sfun_data_write): '<S89>/motohawk_data_write' */
    /* Write to Data Storage as scalar: CruiseSpeed */
    {
      CruiseSpeed_DataStore() = rtb_Product1_hm;
    }

    /* S-Function (motohawk_sfun_data_write): '<S89>/motohawk_data_write1' incorporates:
     *  Constant: '<S89>/Constant'
     */
    /* Write to Data Storage as scalar: CruiseOn */
    {
      CruiseOn_DataStore() = TRUE;
    }
  }

  /* End of Outputs for SubSystem: '<S72>/System Start' */

  /* Product: '<S98>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration2'
   */
  rtb_UnitDelay_o = rtb_Product5 * (ETC_IGain_DataStore());

  /* S-Function Block: <S103>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s103_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ok = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S103>/Sum' incorporates:
   *  Product: '<S103>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S103>/motohawk_delta_time'
   */
  rtb_MinMax_l2 = rtb_UnitDelay_o * rtb_motohawk_delta_time_ok +
    Mooventure2016_Rev5_B.s103_Switch1;

  /* MinMax: '<S104>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration3'
   */
  rtb_MinMax_l2 = (rtb_MinMax_l2 >= (ETC_IMin_DataStore())) || rtIsNaN
    ((ETC_IMin_DataStore())) ? rtb_MinMax_l2 : (ETC_IMin_DataStore());

  /* MinMax: '<S104>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration4'
   */
  rtb_Product5 = (rtb_MinMax_l2 <= (ETC_IMax_DataStore())) || rtIsNaN
    ((ETC_IMax_DataStore())) ? rtb_MinMax_l2 : (ETC_IMax_DataStore());

  /* Gain: '<S116>/Gain' */
  rtb_UnitDelay_o = -Mooventure2016_Rev5_B.s264_Merge;

  /* Sum: '<S126>/Sum' incorporates:
   *  Constant: '<S126>/LimitingBegins'
   */
  rtb_UnitDelay_m = rtb_UnitDelay_o - 125.0;

  /* Switch: '<S126>/Switch1' incorporates:
   *  Constant: '<S128>/Constant'
   *  RelationalOperator: '<S128>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S126>/motohawk_calibration'
   */
  if (rtb_UnitDelay_m >= 0.0) {
    /* Switch: '<S126>/Switch' incorporates:
     *  Constant: '<S126>/LimitingBegins1'
     *  Constant: '<S126>/LimitingBegins2'
     *  Constant: '<S126>/exponentiallimt'
     *  Constant: '<S126>/slope'
     *  Constant: '<S126>/yintercept'
     *  Math: '<S126>/Math Function'
     *  Product: '<S126>/Divide'
     *  Product: '<S126>/Product'
     *  RelationalOperator: '<S126>/Relational Operator'
     *  Sum: '<S126>/Sum1'
     */
    if (160.0 > rtb_UnitDelay_o) {
      rtb_MinMax_l2 = 0.0197 * rtb_UnitDelay_m + 0.1003;
    } else {
      rtb_MinMax_l2 = rt_powd_snf(rtb_UnitDelay_m, 3.172) / 100000.0;
    }

    /* End of Switch: '<S126>/Switch' */
  } else {
    rtb_MinMax_l2 = (TorqueRecoveryValue_DataStore());
  }

  /* End of Switch: '<S126>/Switch1' */
  /* S-Function Block: <S127>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s127_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_kf = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S127>/Sum' incorporates:
   *  Product: '<S127>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S127>/motohawk_delta_time'
   */
  rtb_MinMax_l2 = rtb_MinMax_l2 * rtb_motohawk_delta_time_kf +
    Mooventure2016_Rev5_B.s127_Switch1;

  /* MinMax: '<S129>/MinMax' incorporates:
   *  Constant: '<S123>/Constant'
   */
  rtb_MinMax_l2 = rtb_MinMax_l2 >= 0.0 ? rtb_MinMax_l2 : 0.0;

  /* MinMax: '<S129>/MinMax1' incorporates:
   *  Constant: '<S123>/Constant1'
   */
  rtb_Merge_l = rtb_MinMax_l2 <= 1500.0 ? rtb_MinMax_l2 : 1500.0;

  /* S-Function Block: <S145>/motohawk_abs_time */
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

  /* Outputs for Enabled SubSystem: '<S145>/Batt Enabled Subsystem' incorporates:
   *  EnablePort: '<S151>/Enable'
   */
  /* RelationalOperator: '<S145>/Relational Operator' incorporates:
   *  Constant: '<S145>/Constant'
   *  S-Function (motohawk_sfun_abs_time): '<S145>/motohawk_abs_time'
   */
  if (rtb_motohawk_abs_time_a <= 5.0) {
    /* S-Function (motohawk_sfun_data_write): '<S151>/motohawk_data_write' */
    /* Write to Data Storage as scalar: Battery_Initial */
    {
      Battery_Initial_DataStore() = Mooventure2016_Rev5_B.s271_Sum1;
    }
  }

  /* End of RelationalOperator: '<S145>/Relational Operator' */
  /* End of Outputs for SubSystem: '<S145>/Batt Enabled Subsystem' */
  /* Sum: '<S145>/Add' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S145>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s145_Add = Battery_Initial_DataStore() -
    Mooventure2016_Rev5_B.s271_Sum1;

  /* Outputs for Enabled SubSystem: '<S152>/Trip A Reset' incorporates:
   *  EnablePort: '<S156>/Enable'
   */
  if (rtb_Merge_ld > 0.0) {
    /* S-Function (motohawk_sfun_data_write): '<S156>/motohawk_data_write' incorporates:
     *  Constant: '<S156>/Constant'
     */
    /* Write to Data Storage as scalar: Trip_A_Dist_Traveled */
    {
      Trip_A_Dist_Traveled_DataStore() = 0.0;
    }

    /* S-Function (motohawk_sfun_data_write): '<S156>/motohawk_data_write1' incorporates:
     *  Constant: '<S156>/Constant1'
     */
    /* Write to Data Storage as scalar: Trip_A_Batt_Used */
    {
      Trip_A_Batt_Used_DataStore() = 0.0;
    }
  }

  /* End of Outputs for SubSystem: '<S152>/Trip A Reset' */

  /* Switch: '<S154>/Switch1' incorporates:
   *  Constant: '<S152>/Constant1'
   *  UnitDelay: '<S154>/Unit Delay'
   */
  if (Mooventure2016_Rev5_ConstB.s154_DataTypeConversion) {
    rtb_MinMax_l2 = 0.0;
  } else {
    rtb_MinMax_l2 = Mooventure2016_Rev5_DWork.s154_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S154>/Switch1' */
  /* Product: '<S152>/Product3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S152>/motohawk_calibration5'
   */
  rtb_Product3_l2 = rtb_MinMax_l2 *
    (Distance_Trip_A_Integrator_Multiplier_DataStore());

  /* S-Function (motohawk_sfun_data_write): '<S152>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Trip_A_Dist_Traveled */
  {
    Trip_A_Dist_Traveled_DataStore() = rtb_Product3_l2;
  }

  /* Abs: '<S152>/Abs' */
  rtb_Merge_hn = fabs(Mooventure2016_Rev5_B.s331_Merge);

  /* Product: '<S152>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S152>/motohawk_calibration2'
   */
  rtb_UnitDelay_o = rtb_Merge_hn * (Wheel_Ratio_Trip_A_DataStore());

  /* S-Function Block: <S154>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s154_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ap = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S154>/Sum' incorporates:
   *  Product: '<S154>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S154>/motohawk_delta_time'
   */
  rtb_MinMax_l2 += rtb_UnitDelay_o * rtb_motohawk_delta_time_ap;

  /* MinMax: '<S157>/MinMax' incorporates:
   *  Constant: '<S152>/Constant2'
   */
  rtb_MinMax_l2 = rtb_MinMax_l2 >= 0.0 ? rtb_MinMax_l2 : 0.0;

  /* MinMax: '<S157>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S152>/motohawk_calibration1'
   */
  rtb_Merge_b = (rtb_MinMax_l2 <= (Max_Trip_A_Dist_DataStore())) || rtIsNaN
    ((Max_Trip_A_Dist_DataStore())) ? rtb_MinMax_l2 : (Max_Trip_A_Dist_DataStore
    ());

  /* Switch: '<S155>/Switch1' incorporates:
   *  Constant: '<S152>/Constant4'
   *  UnitDelay: '<S155>/Unit Delay'
   */
  if (Mooventure2016_Rev5_ConstB.s155_DataTypeConversion) {
    Mooventure2016_Rev5_B.s155_Switch1 = 0.0;
  } else {
    Mooventure2016_Rev5_B.s155_Switch1 =
      Mooventure2016_Rev5_DWork.s155_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S155>/Switch1' */

  /* S-Function (motohawk_sfun_data_write): '<S152>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Trip_A_Batt_Used */
  {
    Trip_A_Batt_Used_DataStore() = Mooventure2016_Rev5_B.s155_Switch1;
  }

  /* S-Function Block: <S155>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s155_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_c0 = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S155>/Sum' incorporates:
   *  Product: '<S155>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S155>/motohawk_delta_time'
   */
  rtb_MinMax_l2 = rtb_Product2_f * rtb_motohawk_delta_time_c0 +
    Mooventure2016_Rev5_B.s155_Switch1;

  /* MinMax: '<S158>/MinMax' incorporates:
   *  Constant: '<S152>/Constant5'
   */
  rtb_MinMax_l2 = rtb_MinMax_l2 >= 0.0 ? rtb_MinMax_l2 : 0.0;

  /* MinMax: '<S158>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S152>/motohawk_calibration4'
   */
  rtb_Merge_oq = (rtb_MinMax_l2 <= (Max_Trip_A_kW_DataStore())) || rtIsNaN
    ((Max_Trip_A_kW_DataStore())) ? rtb_MinMax_l2 : (Max_Trip_A_kW_DataStore());

  /* Outputs for Enabled SubSystem: '<S153>/Trip B Reset' incorporates:
   *  EnablePort: '<S161>/Enable'
   */
  if (rtb_Merge_ld > 0.0) {
    /* S-Function (motohawk_sfun_data_write): '<S161>/motohawk_data_write' incorporates:
     *  Constant: '<S161>/Constant'
     */
    /* Write to Data Storage as scalar: Trip_B_Dist_Traveled */
    {
      Trip_B_Dist_Traveled_DataStore() = 0.0;
    }

    /* S-Function (motohawk_sfun_data_write): '<S161>/motohawk_data_write1' incorporates:
     *  Constant: '<S161>/Constant1'
     */
    /* Write to Data Storage as scalar: Trip_B_Batt_Used */
    {
      Trip_B_Batt_Used_DataStore() = 0.0;
    }
  }

  /* End of Outputs for SubSystem: '<S153>/Trip B Reset' */

  /* Switch: '<S159>/Switch1' incorporates:
   *  Constant: '<S153>/Constant1'
   *  UnitDelay: '<S159>/Unit Delay'
   */
  if (Mooventure2016_Rev5_ConstB.s159_DataTypeConversion) {
    rtb_MinMax_l2 = 0.0;
  } else {
    rtb_MinMax_l2 = Mooventure2016_Rev5_DWork.s159_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S159>/Switch1' */
  /* Product: '<S153>/Product3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration5'
   */
  rtb_UnitDelay_o = rtb_MinMax_l2 *
    (Distance_Trip_B_Integrator_Multiplier_DataStore());

  /* Sum: '<S153>/Add' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S153>/motohawk_data_read'
   */
  Mooventure2016_Rev5_B.s153_Add = rtb_UnitDelay_o +
    Trip_B_Dist_Traveled_DataStore();

  /* S-Function (motohawk_sfun_data_write): '<S153>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Trip_B_Dist_Traveled */
  {
    Trip_B_Dist_Traveled_DataStore() = Mooventure2016_Rev5_B.s153_Add;
  }

  /* Abs: '<S153>/Abs' */
  rtb_Merge_hn = fabs(Mooventure2016_Rev5_B.s331_Merge);

  /* Product: '<S153>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration2'
   */
  rtb_UnitDelay_o = rtb_Merge_hn * (Wheel_Ratio_Trip_B_DataStore());

  /* S-Function Block: <S159>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s159_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_mt = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S159>/Sum' incorporates:
   *  Product: '<S159>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S159>/motohawk_delta_time'
   */
  rtb_MinMax_l2 += rtb_UnitDelay_o * rtb_motohawk_delta_time_mt;

  /* MinMax: '<S162>/MinMax' incorporates:
   *  Constant: '<S153>/Constant2'
   */
  rtb_MinMax_l2 = rtb_MinMax_l2 >= 0.0 ? rtb_MinMax_l2 : 0.0;

  /* MinMax: '<S162>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration1'
   */
  rtb_Merge_lf = (rtb_MinMax_l2 <= (Max_Trip_B_Dist_DataStore())) || rtIsNaN
    ((Max_Trip_B_Dist_DataStore())) ? rtb_MinMax_l2 : (Max_Trip_B_Dist_DataStore
    ());

  /* Switch: '<S160>/Switch1' incorporates:
   *  Constant: '<S153>/Constant4'
   *  UnitDelay: '<S160>/Unit Delay'
   */
  if (Mooventure2016_Rev5_ConstB.s160_DataTypeConversion) {
    rtb_MinMax_l2 = 0.0;
  } else {
    rtb_MinMax_l2 = Mooventure2016_Rev5_DWork.s160_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S160>/Switch1' */
  /* Product: '<S153>/Product4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration6'
   */
  rtb_UnitDelay_o = rtb_MinMax_l2 * (kW_Trip_B_Integrator_Multiplier_DataStore());

  /* Sum: '<S153>/Add1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S153>/motohawk_data_read3'
   */
  Mooventure2016_Rev5_B.s153_Add1 = rtb_UnitDelay_o + Trip_B_Batt_Used_DataStore
    ();

  /* S-Function (motohawk_sfun_data_write): '<S153>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Trip_B_Batt_Used */
  {
    Trip_B_Batt_Used_DataStore() = Mooventure2016_Rev5_B.s153_Add1;
  }

  /* S-Function Block: <S160>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&Mooventure2016_Rev5_DWork.s160_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_jk = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S160>/Sum' incorporates:
   *  Product: '<S160>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S160>/motohawk_delta_time'
   */
  rtb_MinMax_l2 += rtb_Product2_f * rtb_motohawk_delta_time_jk;

  /* MinMax: '<S163>/MinMax' incorporates:
   *  Constant: '<S153>/Constant5'
   */
  rtb_MinMax_l2 = rtb_MinMax_l2 >= 0.0 ? rtb_MinMax_l2 : 0.0;

  /* MinMax: '<S163>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration4'
   */
  rtb_Merge_gq = (rtb_MinMax_l2 <= (Max_Trip_B_kW_DataStore())) || rtIsNaN
    ((Max_Trip_B_kW_DataStore())) ? rtb_MinMax_l2 : (Max_Trip_B_kW_DataStore());

  /* Outputs for Enabled SubSystem: '<S168>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S171>/Enable'
   */
  /* RelationalOperator: '<S168>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S168>/motohawk_data_read1'
   */
  if (MPGe_Average_DataStore() >= Mooventure2016_Rev5_B.s168_motohawk_data_read2)
  {
    /* S-Function (motohawk_sfun_data_write): '<S171>/motohawk_data_write1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S168>/motohawk_data_read1'
     */
    /* Write to Data Storage as scalar: MPGe_Best_Average */
    {
      MPGe_Best_Average_DataStore() = MPGe_Average_DataStore();
    }
  }

  /* End of RelationalOperator: '<S168>/Relational Operator' */
  /* End of Outputs for SubSystem: '<S168>/Enabled Subsystem' */

  /* RelationalOperator: '<S169>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s331_Merge <=
    (Min_RPM_For_Calc_DataStore()));

  /* Stateflow: '<S169>/Chart' */
  Mooventure2016_Rev5_Chart_a((Write_Interval_MPGe_DataStore()),
    &Mooventure2016_Rev5_B.s169_sf_Chart,
    &Mooventure2016_Rev5_DWork.s169_sf_Chart);

  /* Outputs for Enabled SubSystem: '<S169>/Enabled Subsystem MPGe' incorporates:
   *  EnablePort: '<S173>/Enable'
   */
  /* Logic: '<S169>/Logical Operator' */
  if (rtb_LogicalOperator5 && Mooventure2016_Rev5_B.s169_sf_Chart.s172_write) {
    /* Sum: '<S173>/Add1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S173>/motohawk_data_read1'
     */
    rtb_Add1_f = MPGe_Average_Sum_DataStore() + rtb_Merge_gr;

    /* S-Function (motohawk_sfun_data_write): '<S173>/motohawk_data_write1' */
    /* Write to Data Storage as scalar: MPGe_Average_Sum */
    {
      MPGe_Average_Sum_DataStore() = rtb_Add1_f;
    }

    /* Sum: '<S173>/Add' incorporates:
     *  Constant: '<S173>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S173>/motohawk_data_read'
     */
    rtb_Add_f = MPGe_Average_Count_DataStore() + 1.0;

    /* S-Function (motohawk_sfun_data_write): '<S173>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MPGe_Average_Count */
    {
      MPGe_Average_Count_DataStore() = rtb_Add_f;
    }
  }

  /* End of Logic: '<S169>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S169>/Enabled Subsystem MPGe' */

  /* Outputs for Enabled SubSystem: '<S170>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S174>/Enable'
   */
  /* S-Function (motohawk_sfun_data_read): '<S170>/motohawk_data_read' */
  if (Shutdown_Req_DataStore()) {
    /* S-Function (motohawk_sfun_data_write): '<S174>/motohawk_data_write' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S174>/motohawk_data_read1'
     */
    /* Write to Data Storage as scalar: Previous_Average */
    {
      Previous_Average_DataStore() = MPGe_Average_DataStore();
    }
  }

  /* End of S-Function (motohawk_sfun_data_read): '<S170>/motohawk_data_read' */
  /* End of Outputs for SubSystem: '<S170>/Enabled Subsystem' */

  /* RelationalOperator: '<S149>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S149>/motohawk_calibration'
   */
  rtb_LogicalOperator5 = (Mooventure2016_Rev5_B.s331_Merge <=
    (Bar_Min_RPM_For_Calc_DataStore()));

  /* Stateflow: '<S149>/Bar Chart' */
  Mooventure2016_Rev5_Chart_a((Bar_Write_Interval_MPGe_DataStore()),
    &Mooventure2016_Rev5_B.s149_sf_BarChart,
    &Mooventure2016_Rev5_DWork.s149_sf_BarChart);

  /* Outputs for Enabled SubSystem: '<S149>/Bar Enabled Subsystem' incorporates:
   *  EnablePort: '<S177>/Enable'
   */
  /* Logic: '<S149>/Logical Operator' */
  if (rtb_LogicalOperator5 && Mooventure2016_Rev5_B.s149_sf_BarChart.s172_write)
  {
    /* Sum: '<S177>/Add1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S177>/motohawk_data_read1'
     */
    rtb_Add1 = Bar_MPGe_Average_Sum_DataStore() + rtb_Merge_gr;

    /* S-Function (motohawk_sfun_data_write): '<S177>/motohawk_data_write1' */
    /* Write to Data Storage as scalar: Bar_MPGe_Average_Sum */
    {
      Bar_MPGe_Average_Sum_DataStore() = rtb_Add1;
    }

    /* Sum: '<S177>/Add' incorporates:
     *  Constant: '<S177>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S177>/motohawk_data_read'
     */
    rtb_Add_o = Bar_MPGe_Average_Count_DataStore() + 1.0;

    /* S-Function (motohawk_sfun_data_write): '<S177>/motohawk_data_write' */
    /* Write to Data Storage as scalar: Bar_MPGe_Average_Count */
    {
      Bar_MPGe_Average_Count_DataStore() = rtb_Add_o;
    }
  }

  /* End of Logic: '<S149>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S149>/Bar Enabled Subsystem' */
  /* Stateflow: '<S149>/Bar Chart Reset' */
  Mooventure2016_Rev5_Chart_a((Bar_Reset_Interval_MPGe_DataStore()),
    &Mooventure2016_Rev5_B.s149_sf_BarChartReset,
    &Mooventure2016_Rev5_DWork.s149_sf_BarChartReset);

  /* Outputs for Enabled SubSystem: '<S149>/Bar Reset' incorporates:
   *  EnablePort: '<S178>/Enable'
   */
  if (Mooventure2016_Rev5_B.s149_sf_BarChartReset.s172_write) {
    /* S-Function (motohawk_sfun_data_write): '<S178>/motohawk_data_write' incorporates:
     *  Constant: '<S178>/Constant'
     */
    /* Write to Data Storage as scalar: Bar_MPGe_Average_Count */
    {
      Bar_MPGe_Average_Count_DataStore() = 0.0;
    }

    /* S-Function (motohawk_sfun_data_write): '<S178>/motohawk_data_write1' incorporates:
     *  Constant: '<S178>/Constant1'
     */
    /* Write to Data Storage as scalar: Bar_MPGe_Average_Sum */
    {
      Bar_MPGe_Average_Sum_DataStore() = 0.0;
    }
  }

  /* End of Outputs for SubSystem: '<S149>/Bar Reset' */

  /* S-Function (motohawk_sfun_data_write): '<S12>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Vehicle_Enable */
  {
    Vehicle_Enable_DataStore() = Mooventure2016_Rev5_B.s197_Vehicle_Enable;
  }

  /* S-Function (motohawk_sfun_data_write): '<S12>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: Torque_Enable */
  {
    Torque_Enable_DataStore() = Mooventure2016_Rev5_B.s197_Torque_Enable;
  }

  /* S-Function (motohawk_sfun_data_write): '<S12>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: Vehicle_Ready */
  {
    Vehicle_Ready_DataStore() = Mooventure2016_Rev5_B.s197_Vehicle_Ready;
  }

  /* S-Function (motohawk_sfun_data_write): '<S12>/motohawk_data_write3' */
  /* Write to Data Storage as scalar: Shutdown_Req */
  {
    Shutdown_Req_DataStore() = rtb_LogicalOperator5_m;
  }

  /* Saturate: '<S270>/Saturation' */
  rtb_Saturation_c = rtb_Switch_m >= 16000.0 ? 16000.0 : rtb_Switch_m <= 0.0 ?
    0.0 : rtb_Switch_m;

  /* S-Function (motohawk_sfun_data_write): '<S270>/motohawk_data_write' */
  /* Write to Data Storage as scalar: SOCTimer */
  {
    SOCTimer_DataStore() = rtb_Saturation_c;
  }

  /* UnitDelay: '<S261>/Unit Delay' */
  rtb_UnitDelay_o = Mooventure2016_Rev5_DWork.s261_UnitDelay_DSTATE;

  /* Saturate: '<S273>/Saturation' */
  rtb_Saturation_i2 = rtb_Switch_hx >= 16000.0 ? 16000.0 : rtb_Switch_hx <= 0.0 ?
    0.0 : rtb_Switch_hx;

  /* S-Function (motohawk_sfun_data_write): '<S273>/motohawk_data_write' */
  /* Write to Data Storage as scalar: VTimer */
  {
    VTimer_DataStore() = rtb_Saturation_i2;
  }

  /* UnitDelay: '<S262>/Unit Delay' */
  rtb_UnitDelay_m = Mooventure2016_Rev5_DWork.s262_UnitDelay_DSTATE;

  /* Saturate: '<S295>/Saturation' */
  rtb_Saturation_ib = rtb_Switch_m4 >= 86400.0 ? 86400.0 : rtb_Switch_m4 <= 0.0 ?
    0.0 : rtb_Switch_m4;

  /* S-Function (motohawk_sfun_data_write): '<S295>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay1 */
  {
    ButtonDelay1_DataStore() = rtb_Saturation_ib;
  }

  /* Saturate: '<S296>/Saturation' */
  rtb_Saturation_kw = rtb_Switch_p >= 86400.0 ? 86400.0 : rtb_Switch_p <= 0.0 ?
    0.0 : rtb_Switch_p;

  /* S-Function (motohawk_sfun_data_write): '<S296>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay2 */
  {
    ButtonDelay2_DataStore() = rtb_Saturation_kw;
  }

  /* Saturate: '<S297>/Saturation' */
  rtb_Saturation_ij = rtb_Switch_pm >= 86400.0 ? 86400.0 : rtb_Switch_pm <= 0.0 ?
    0.0 : rtb_Switch_pm;

  /* S-Function (motohawk_sfun_data_write): '<S297>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay3 */
  {
    ButtonDelay3_DataStore() = rtb_Saturation_ij;
  }

  /* Saturate: '<S298>/Saturation' */
  rtb_Saturation_df = rtb_Switch_hc >= 86400.0 ? 86400.0 : rtb_Switch_hc <= 0.0 ?
    0.0 : rtb_Switch_hc;

  /* S-Function (motohawk_sfun_data_write): '<S298>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay4 */
  {
    ButtonDelay4_DataStore() = rtb_Saturation_df;
  }

  /* Saturate: '<S299>/Saturation' */
  rtb_Saturation_ig = rtb_Switch_n >= 86400.0 ? 86400.0 : rtb_Switch_n <= 0.0 ?
    0.0 : rtb_Switch_n;

  /* S-Function (motohawk_sfun_data_write): '<S299>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay5 */
  {
    ButtonDelay5_DataStore() = rtb_Saturation_ig;
  }

  /* S-Function (motohawk_sfun_data_write): '<S204>/motohawk_data_write' */
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

  /* Update for UnitDelay: '<S100>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s100_UnitDelay_DSTATE = rtb_Product3;

  /* Update for UnitDelay: '<S101>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s101_UnitDelay_DSTATE = rtb_Product;

  /* Update for UnitDelay: '<S102>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s102_UnitDelay_DSTATE = rtb_Product4;

  /* Update for UnitDelay: '<S95>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s95_DelayInput1_DSTATE = rtb_Compare;

  /* Update for UnitDelay: '<S103>/Unit Delay' incorporates:
   *  MinMax: '<S104>/MinMax1'
   */
  Mooventure2016_Rev5_DWork.s103_UnitDelay_DSTATE = rtb_Product5;

  /* Update for UnitDelay: '<S127>/Unit Delay' incorporates:
   *  MinMax: '<S129>/MinMax1'
   */
  Mooventure2016_Rev5_DWork.s127_UnitDelay_DSTATE = rtb_Merge_l;

  /* Update for UnitDelay: '<S125>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s125_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s125_Sum1;

  /* Update for UnitDelay: '<S261>/Unit Delay2' */
  Mooventure2016_Rev5_DWork.s261_UnitDelay2_DSTATE =
    Mooventure2016_Rev5_B.s200_StateOfCharge;

  /* Update for UnitDelay: '<S261>/Unit Delay1' */
  Mooventure2016_Rev5_DWork.s261_UnitDelay1_DSTATE = rtb_UnitDelay_o;

  /* Update for UnitDelay: '<S271>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s271_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s271_Sum1;

  /* Update for UnitDelay: '<S133>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s133_UnitDelay_DSTATE = rtb_Sum1;

  /* Update for UnitDelay: '<S262>/Unit Delay2' */
  Mooventure2016_Rev5_DWork.s262_UnitDelay2_DSTATE =
    Mooventure2016_Rev5_B.s200_BatteryVoltage;

  /* Update for UnitDelay: '<S262>/Unit Delay1' */
  Mooventure2016_Rev5_DWork.s262_UnitDelay1_DSTATE = rtb_UnitDelay_m;

  /* Update for S-Function (motohawk_sfun_dout): '<S369>/motohawk_dout1' */

  /* S-Function Block: DOut5146p0001 */
  {
    DOut5146p0001_DiscreteOutput_Set(rtb_Merge_lq);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S369>/motohawk_dout10' */

  /* S-Function Block: DOut5147p0001 */
  {
    DOut5147p0001_DiscreteOutput_Set(rtb_Merge_of1);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S369>/motohawk_dout11' */

  /* S-Function Block: DOut5148p0001 */
  {
    DOut5148p0001_DiscreteOutput_Set(rtb_DataTypeConversion6);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S369>/motohawk_dout12' */

  /* S-Function Block: DOut5149p0001 */
  {
    DOut5149p0001_DiscreteOutput_Set(rtb_DataTypeConversion_gi);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S369>/motohawk_dout13' */

  /* S-Function Block: DOut5150p0001 */
  {
    DOut5150p0001_DiscreteOutput_Set(rtb_DataTypeConversion3);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S369>/motohawk_dout2' */

  /* S-Function Block: DOut5151p0001 */
  {
    DOut5151p0001_DiscreteOutput_Set(rtb_Merge_dm);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S369>/motohawk_dout3' */

  /* S-Function Block: DOut5152p0001 */
  {
    DOut5152p0001_DiscreteOutput_Set(rtb_Merge_ay5);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S369>/motohawk_dout4' */

  /* S-Function Block: DOut5153p0001 */
  {
    DOut5153p0001_DiscreteOutput_Set(rtb_Merge_l1);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S369>/motohawk_dout5' */

  /* S-Function Block: DOut5154p0001 */
  {
    DOut5154p0001_DiscreteOutput_Set(rtb_Merge_cg);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S369>/motohawk_dout6' */

  /* S-Function Block: DOut5155p0001 */
  {
    DOut5155p0001_DiscreteOutput_Set(rtb_Merge_oqt);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S369>/motohawk_dout7' */

  /* S-Function Block: DOut5156p0001 */
  {
    DOut5156p0001_DiscreteOutput_Set(rtb_Merge_pi3);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S369>/motohawk_dout8' */

  /* S-Function Block: DOut5157p0001 */
  {
    DOut5157p0001_DiscreteOutput_Set(rtb_Merge_gd);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S369>/motohawk_dout9' */

  /* S-Function Block: DOut5158p0001 */
  {
    DOut5158p0001_DiscreteOutput_Set(rtb_Merge_ln);
  }

  /* Update for UnitDelay: '<S251>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s251_UnitDelay_DSTATE = rtb_Sum1_b;

  /* Update for UnitDelay: '<S7>/Unit Delay3' */
  Mooventure2016_Rev5_DWork.s7_UnitDelay3_DSTATE =
    Mooventure2016_Rev5_B.s20_Heat4;

  /* Update for UnitDelay: '<S250>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s250_UnitDelay_DSTATE = rtb_Sum1_e;

  /* Update for UnitDelay: '<S7>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s7_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s20_Heat1;

  /* Update for UnitDelay: '<S7>/Unit Delay1' */
  Mooventure2016_Rev5_DWork.s7_UnitDelay1_DSTATE =
    Mooventure2016_Rev5_B.s20_Heat2;

  /* Update for UnitDelay: '<S7>/Unit Delay2' */
  Mooventure2016_Rev5_DWork.s7_UnitDelay2_DSTATE =
    Mooventure2016_Rev5_B.s20_Heat3;

  /* Update for S-Function (motohawk_sfun_dout): '<S370>/motohawk_dout1' */

  /* S-Function Block: DOut5384p0001 */
  {
    DOut5384p0001_DiscreteOutput_Set(rtb_Merge_iu);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S370>/motohawk_dout2' */

  /* S-Function Block: DOut5385p0001 */
  {
    DOut5385p0001_DiscreteOutput_Set(rtb_Merge_nv);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S370>/motohawk_dout6' */

  /* S-Function Block: DOut5389p0001 */
  {
    DOut5389p0001_DiscreteOutput_Set(rtb_Merge_ef);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S370>/motohawk_dout4' */

  /* S-Function Block: DOut5387p0001 */
  {
    DOut5387p0001_DiscreteOutput_Set(rtb_DataTypeConversion6_c);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S370>/motohawk_dout5' */

  /* S-Function Block: DOut5388p0001 */
  {
    DOut5388p0001_DiscreteOutput_Set(rtb_DataTypeConversion5);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S370>/motohawk_dout3' */

  /* S-Function Block: DOut5386p0001 */
  {
    DOut5386p0001_DiscreteOutput_Set(rtb_DataTypeConversion8);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S373>/motohawk_pwm' */

  /* S-Function Block: H1m_PWMOutput */
  {
    H1m_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2,
      rtb_DataTypeConversion1_o, 0, 1);
  }

  /* Update for UnitDelay: '<S34>/Unit Delay1' */
  Mooventure2016_Rev5_DWork.s34_UnitDelay1_DSTATE = rtb_Sum1_e;

  /* Update for UnitDelay: '<S34>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s34_UnitDelay_DSTATE = rtb_Sum1_b;

  /* Update for UnitDelay: '<S38>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s38_UnitDelay_DSTATE = (real_T)rtb_Heater_Temp_Raw;

  /* Update for UnitDelay: '<S52>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s52_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s203_Brake_Position;

  /* Update for UnitDelay: '<S61>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s61_DelayInput1_DSTATE = rtb_LogicalOperator_h;

  /* Update for UnitDelay: '<S62>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s62_DelayInput1_DSTATE = rtb_LogicalOperator_po;

  /* Update for UnitDelay: '<S63>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s63_DelayInput1_DSTATE = rtb_LogicalOperator_b2;

  /* Update for UnitDelay: '<S64>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s64_DelayInput1_DSTATE = rtb_LogicalOperator_e;

  /* Update for UnitDelay: '<S60>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s60_DelayInput1_DSTATE = rtb_LogicalOperator_f;

  /* Update for UnitDelay: '<S55>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s55_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s203_Throttle_Position;

  /* Update for UnitDelay: '<S66>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s66_UnitDelay_DSTATE = rtb_Abs;

  /* Update for UnitDelay: '<S67>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s67_UnitDelay_DSTATE = rtb_Abs1;

  /* Update for UnitDelay: '<S68>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s68_UnitDelay_DSTATE = rtb_Abs2;

  /* Update for UnitDelay: '<S69>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s69_UnitDelay_DSTATE = rtb_Abs3;

  /* Update for UnitDelay: '<S59>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s59_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s331_Merge;

  /* Update for UnitDelay: '<S51>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s51_UnitDelay_DSTATE = rtb_Product_d;

  /* Update for UnitDelay: '<S91>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s91_DelayInput1_DSTATE = rtb_LogicalOperator_e;

  /* Update for UnitDelay: '<S92>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s92_DelayInput1_DSTATE = rtb_LogicalOperator_b2;

  /* Update for UnitDelay: '<S106>/Delay Input1' */
  Mooventure2016_Rev5_DWork.s106_DelayInput1_DSTATE = rtb_LogicalOperator_po;

  /* Update for UnitDelay: '<S154>/Unit Delay' incorporates:
   *  MinMax: '<S157>/MinMax1'
   */
  Mooventure2016_Rev5_DWork.s154_UnitDelay_DSTATE = rtb_Merge_b;

  /* Update for UnitDelay: '<S155>/Unit Delay' incorporates:
   *  MinMax: '<S158>/MinMax1'
   */
  Mooventure2016_Rev5_DWork.s155_UnitDelay_DSTATE = rtb_Merge_oq;

  /* Update for UnitDelay: '<S159>/Unit Delay' incorporates:
   *  MinMax: '<S162>/MinMax1'
   */
  Mooventure2016_Rev5_DWork.s159_UnitDelay_DSTATE = rtb_Merge_lf;

  /* Update for UnitDelay: '<S160>/Unit Delay' incorporates:
   *  MinMax: '<S163>/MinMax1'
   */
  Mooventure2016_Rev5_DWork.s160_UnitDelay_DSTATE = rtb_Merge_gq;

  /* Update for UnitDelay: '<S261>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s261_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s200_StateOfCharge;

  /* Update for UnitDelay: '<S262>/Unit Delay' */
  Mooventure2016_Rev5_DWork.s262_UnitDelay_DSTATE =
    Mooventure2016_Rev5_B.s200_BatteryVoltage;
}

/* Termination for function-call system: '<Root>/Foreground' */
void Mooventure2016_Rev5_Foreground_Term(void)
{
  /* S-Function block: <S194>/S-Function  */
  {
    /* Nothing to do! */
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
