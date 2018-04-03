/*
 * File: BuckyWagon_01_Foreground.c
 *
 * Real-Time Workshop code generated for Simulink model BuckyWagon_01.
 *
 * Model version                        : 1.1518
 * Real-Time Workshop file version      : 7.5  (R2010a)  25-Jan-2010
 * Real-Time Workshop file generated on : Sun Jan 21 12:54:58 2018
 * TLC version                          : 7.5 (Jan 19 2010)
 * C/C++ source code generated on       : Sun Jan 21 12:55:01 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BuckyWagon_01_Foreground.h"

/* Include model header file for global data */
#include "BuckyWagon_01.h"
#include "BuckyWagon_01_private.h"

/* Named constants for Stateflow: '<S144>/Downsapmle' */
#define BuckyWagon_01_IN_Out           (1U)
#define BuckyWagon_01_IN_Value_1       (2U)
#define BuckyWagon_01_IN_Value_2       (3U)
#define BuckyWagon_01_IN_downsample    (4U)
#define BuckyWagon_01_IN_downsample_2  (5U)

/* Named constants for Stateflow: '<S285>/Chart' */
#define BuckyWagon_01_IN_CountDown     (1U)
#define BuckyWagon_01_IN_Off           (2U)
#define BuckyWagon_01_IN_On            (3U)
#define BuckyWagon_01_IN_countUp       (4U)

/* Named constants for Stateflow: '<S35>/Chart' */
#define BuckyWagon_01_IN_FlashOne      (1U)
#define BuckyWagon_01_IN_FlashTwo      (2U)
#define BuckyWagon_01_IN_OffOne        (4U)
#define BuckyWagon_01_IN_OffTwo        (5U)
#define BuckyWagon_01_IN_Off_k         (3U)

/* Named constants for Stateflow: '<S18>/Chart' */
#define BuckyWagon_01_IN_Init          (1U)
#define BuckyWagon_01_IN_Off_h         (2U)
#define BuckyWagon_01_IN_On_h          (3U)
#define BuckyWagon_01_IN_Restart       (4U)
#define BuckyWagon_01_IN_Standby       (5U)

/* Named constants for Stateflow: '<S128>/Charging State Machine' */
#define BuckyWagon_01_IN_Complete      (1U)
#define BuckyWagon_01_IN_ConstantVoltageCharge (2U)
#define BuckyWagon_01_IN_StartupDelay  (3U)
#define BuckyWagon_01_IN_Wait          (4U)
#define BuckyWagon_01_IN_waitEnd       (5U)

/* Named constants for Stateflow: '<S147>/Chart' */
#define BuckyWagon_01_IN_Begin         (1U)
#define BuckyWagon_01_IN_Braking       (2U)
#define BuckyWagon_01_IN_Driving       (3U)
#define BuckyWagon_01_IN_Rolling       (4U)
#define BuckyWagon_01_IN_Stopped       (5U)

/* Named constants for Stateflow: '<S131>/Chart' */
#define BuckyWagon_01_IN_Braking_f     (1U)
#define BuckyWagon_01_IN_Creeping      (1U)
#define BuckyWagon_01_IN_DrivingAndBrake (2U)
#define BuckyWagon_01_IN_Driving_f     (1U)
#define BuckyWagon_01_IN_Idle          (2U)
#define BuckyWagon_01_IN_KeyUp         (3U)
#define BuckyWagon_01_IN_LowSpeedManeuvering (4U)
#define BuckyWagon_01_IN_NormalDriving (5U)
#define BuckyWagon_01_IN_Reversing     (2U)
#define BuckyWagon_01_IN_SlowingDown   (6U)
#define BuckyWagon_01_IN_Stopping      (7U)

/* Named constants for Stateflow: '<S134>/Chart' */
#define BuckyWagon_01_IN_Forward       (1U)
#define BuckyWagon_01_IN_Main          (1U)
#define BuckyWagon_01_IN_Reverse       (2U)
#define BuckyWagon_01_IN_TransistionOff (1U)
#define BuckyWagon_01_IN_TransistionOn (2U)
#define BuckyWagon_01_IN_waitRelease   (3U)
#define BuckyWagon_01_event_buttonPress (0)

/* Forward declaration for local functions */
static void BuckyWagon_01_c1_BuckyWagon_01(void);

/*
 * Initial conditions for atomic system:
 *    '<S144>/Downsapmle'
 *    '<S144>/Downsapmle1'
 */
void BuckyWagon_01_Downsapmle_Init(rtB_Downsapmle_BuckyWagon_01 *localB,
  rtDW_Downsapmle_BuckyWagon_01 *localDW)
{
  /* InitializeConditions for Stateflow: '<S144>/Downsapmle' */
  localDW->s145_is_active_c11_BuckyWagon_01 = 0U;
  localDW->s145_is_c11_BuckyWagon_01 = 0U;
  localDW->s145_count = 0.0;
  localDW->s145_Val1 = 0.0;
  localDW->s145_Val2 = 0.0;
  localB->s145_Out_1 = 0.0;
  localB->s145_Out_2 = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S144>/Downsapmle'
 *    '<S144>/Downsapmle1'
 */
void BuckyWagon_01_Downsapmle(real_T rtu_Val_In, real_T rtu_numb_downsamp,
  rtB_Downsapmle_BuckyWagon_01 *localB, rtDW_Downsapmle_BuckyWagon_01 *localDW)
{
  /* Stateflow: '<S144>/Downsapmle' */
  /* Gateway: Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle */
  /* During: Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle */
  if (localDW->s145_is_active_c11_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle */
    localDW->s145_is_active_c11_BuckyWagon_01 = 1U;

    /* Transition: '<S145>:75' */
    /* Entry 'downsample': '<S145>:22' */
    localDW->s145_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_downsample;
    localDW->s145_count = 0.0;
  } else {
    switch (localDW->s145_is_c11_BuckyWagon_01) {
     case BuckyWagon_01_IN_Out:
      /* During 'Out': '<S145>:48' */
      if (localDW->s145_count >= 2.0) {
        /* Transition: '<S145>:51' */
        /* Exit 'Out': '<S145>:48' */
        /* Entry 'downsample': '<S145>:22' */
        localDW->s145_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_downsample;
        localDW->s145_count = 0.0;
      } else {
        localDW->s145_count = localDW->s145_count + 1.0;
      }
      break;

     case BuckyWagon_01_IN_Value_1:
      /* During 'Value_1': '<S145>:29' */
      if (localDW->s145_count >= 2.0) {
        /* Transition: '<S145>:40' */
        /* Exit 'Value_1': '<S145>:29' */
        /* Entry 'downsample_2': '<S145>:30' */
        localDW->s145_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_downsample_2;
        localDW->s145_count = 0.0;
      } else {
        localDW->s145_count = localDW->s145_count + 1.0;
      }
      break;

     case BuckyWagon_01_IN_Value_2:
      /* During 'Value_2': '<S145>:31' */
      if (localDW->s145_count >= 2.0) {
        /* Transition: '<S145>:78' */
        /* Exit 'Value_2': '<S145>:31' */
        /* Entry 'Out': '<S145>:48' */
        localDW->s145_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_Out;
        localDW->s145_count = 0.0;
        localB->s145_Out_1 = localDW->s145_Val1;
        localB->s145_Out_2 = localDW->s145_Val2;
      } else {
        localDW->s145_count = localDW->s145_count + 1.0;
      }
      break;

     case BuckyWagon_01_IN_downsample:
      /* During 'downsample': '<S145>:22' */
      if (localDW->s145_count >= rtu_numb_downsamp) {
        /* Transition: '<S145>:34' */
        /* Exit 'downsample': '<S145>:22' */
        /* Entry 'Value_1': '<S145>:29' */
        localDW->s145_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_Value_1;
        localDW->s145_Val1 = rtu_Val_In;
        localDW->s145_count = 0.0;
      } else {
        localDW->s145_count = localDW->s145_count + 1.0;
      }
      break;

     case BuckyWagon_01_IN_downsample_2:
      /* During 'downsample_2': '<S145>:30' */
      if (localDW->s145_count >= rtu_numb_downsamp) {
        /* Transition: '<S145>:42' */
        /* Exit 'downsample_2': '<S145>:30' */
        /* Entry 'Value_2': '<S145>:31' */
        localDW->s145_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_Value_2;
        localDW->s145_Val2 = rtu_Val_In;
        localDW->s145_count = 0.0;
      } else {
        localDW->s145_count = localDW->s145_count + 1.0;
      }
      break;

     default:
      /* Transition: '<S145>:75' */
      /* Entry 'downsample': '<S145>:22' */
      localDW->s145_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_downsample;
      localDW->s145_count = 0.0;
      break;
    }
  }
}

/*
 * Initial conditions for atomic system:
 *    '<S285>/Chart'
 *    '<S331>/Chart'
 */
void BuckyWagon_01_Chart_Init(rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* InitializeConditions for Stateflow: '<S285>/Chart' */
  localDW->s287_is_active_c10_BuckyWagon_01 = 0U;
  localDW->s287_is_c10_BuckyWagon_01 = 0U;
  localDW->s287_timer = 0;
  localB->s287_pluggedIn = FALSE;
}

/*
 * Output and update for atomic system:
 *    '<S285>/Chart'
 *    '<S331>/Chart'
 */
void BuckyWagon_01_Chart(real_T rtu_histTime, boolean_T rtu_mainsOn,
  rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* Stateflow: '<S285>/Chart' */
  /* Gateway: Foreground/Sensors/Brusa Charger/PluggedInDetect/Chart */
  /* During: Foreground/Sensors/Brusa Charger/PluggedInDetect/Chart */
  if (localDW->s287_is_active_c10_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Sensors/Brusa Charger/PluggedInDetect/Chart */
    localDW->s287_is_active_c10_BuckyWagon_01 = 1U;

    /* Transition: '<S287>:5' */
    /* Entry 'Off': '<S287>:1' */
    localDW->s287_is_c10_BuckyWagon_01 = BuckyWagon_01_IN_Off;
    localB->s287_pluggedIn = FALSE;
  } else {
    switch (localDW->s287_is_c10_BuckyWagon_01) {
     case BuckyWagon_01_IN_CountDown:
      /* During 'CountDown': '<S287>:3' */
      if (localDW->s287_timer <= 0) {
        /* Transition: '<S287>:9' */
        /* Exit 'CountDown': '<S287>:3' */
        /* Entry 'Off': '<S287>:1' */
        localDW->s287_is_c10_BuckyWagon_01 = BuckyWagon_01_IN_Off;
        localB->s287_pluggedIn = FALSE;
      } else if (rtu_mainsOn) {
        /* Transition: '<S287>:8' */
        /* Exit 'CountDown': '<S287>:3' */
        /* Entry 'countUp': '<S287>:2' */
        localDW->s287_is_c10_BuckyWagon_01 = BuckyWagon_01_IN_countUp;
      } else {
        localDW->s287_timer = (int16_T)(localDW->s287_timer - 1);
      }
      break;

     case BuckyWagon_01_IN_Off:
      /* During 'Off': '<S287>:1' */
      if (rtu_mainsOn) {
        /* Transition: '<S287>:6' */
        /* Exit 'Off': '<S287>:1' */
        /* Entry 'countUp': '<S287>:2' */
        localDW->s287_is_c10_BuckyWagon_01 = BuckyWagon_01_IN_countUp;
      }
      break;

     case BuckyWagon_01_IN_On:
      /* During 'On': '<S287>:4' */
      if (!rtu_mainsOn) {
        /* Transition: '<S287>:10' */
        /* Exit 'On': '<S287>:4' */
        /* Entry 'CountDown': '<S287>:3' */
        localDW->s287_is_c10_BuckyWagon_01 = BuckyWagon_01_IN_CountDown;
      }
      break;

     case BuckyWagon_01_IN_countUp:
      /* During 'countUp': '<S287>:2' */
      if (!rtu_mainsOn) {
        /* Transition: '<S287>:7' */
        /* Exit 'countUp': '<S287>:2' */
        /* Entry 'CountDown': '<S287>:3' */
        localDW->s287_is_c10_BuckyWagon_01 = BuckyWagon_01_IN_CountDown;
      } else if ((real_T)localDW->s287_timer >= rtu_histTime) {
        /* Transition: '<S287>:11' */
        /* Exit 'countUp': '<S287>:2' */
        /* Entry 'On': '<S287>:4' */
        localDW->s287_is_c10_BuckyWagon_01 = BuckyWagon_01_IN_On;
        localB->s287_pluggedIn = TRUE;
      } else {
        localDW->s287_timer = (int16_T)(localDW->s287_timer + 1);
      }
      break;

     default:
      /* Transition: '<S287>:5' */
      /* Entry 'Off': '<S287>:1' */
      localDW->s287_is_c10_BuckyWagon_01 = BuckyWagon_01_IN_Off;
      localB->s287_pluggedIn = FALSE;
      break;
    }
  }
}

/*
 * Output and update for action system:
 *    '<S252>/If Action Subsystem'
 *    '<S252>/If Action Subsystem1'
 *    '<S252>/If Action Subsystem2'
 *    '<S253>/If Action Subsystem'
 *    '<S253>/If Action Subsystem1'
 *    '<S253>/If Action Subsystem2'
 *    '<S254>/If Action Subsystem'
 *    '<S254>/If Action Subsystem1'
 *    '<S254>/If Action Subsystem2'
 */
void BuckyWagon_01_IfActionSubsystem(real_T rtu_0, real_T *rty_Out)
{
  /* Inport: '<S369>/In' */
  (*rty_Out) = rtu_0;
}

/* Function for Stateflow: '<S134>/Chart' */
static void BuckyWagon_01_c1_BuckyWagon_01(void)
{
  int32_T sf_previousEvent;

  /* During: Foreground/Control Strategy/Reverse/Chart */
  if (BuckyWagon_01_DWork.s191_is_active_c1_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Control Strategy/Reverse/Chart */
    BuckyWagon_01_DWork.s191_is_active_c1_BuckyWagon_01 = 1U;

    /* Entry 'Main': '<S191>:1' */
    BuckyWagon_01_DWork.s191_is_c1_BuckyWagon_01 = BuckyWagon_01_IN_Main;

    /* Entry 'ButtonDebounce': '<S191>:2' */
    BuckyWagon_01_DWork.s191_is_active_ButtonDebounce = 1U;

    /* Transition: '<S191>:16' */
    /* Entry 'TransistionOn': '<S191>:5' */
    BuckyWagon_01_DWork.s191_is_ButtonDebounce = BuckyWagon_01_IN_TransistionOn;

    /* Entry 'ReverseLogic': '<S191>:4' */
    BuckyWagon_01_DWork.s191_is_active_ReverseLogic = 1U;

    /* Transition: '<S191>:17' */
    /* Entry 'Forward': '<S191>:7' */
    if (BuckyWagon_01_DWork.s191_is_ReverseLogic != BuckyWagon_01_IN_Forward) {
      BuckyWagon_01_DWork.s191_is_ReverseLogic = BuckyWagon_01_IN_Forward;
      BuckyWagon_01_B.s191_inReverse = 0.0;
    }
  } else {
    /* During 'Main': '<S191>:1' */
    if (BuckyWagon_01_DWork.s191_is_c1_BuckyWagon_01 == BuckyWagon_01_IN_Main) {
      /* During 'ButtonDebounce': '<S191>:2' */
      if (BuckyWagon_01_DWork.s191_is_active_ButtonDebounce != 0) {
        switch (BuckyWagon_01_DWork.s191_is_ButtonDebounce) {
         case BuckyWagon_01_IN_TransistionOff:
          /* During 'TransistionOff': '<S191>:6' */
          if (BuckyWagon_01_DWork.s191_timer >= (offTime_DataStore())) {
            /* Transition: '<S191>:10' */
            /* Exit 'TransistionOff': '<S191>:6' */
            /* Entry 'TransistionOn': '<S191>:5' */
            BuckyWagon_01_DWork.s191_is_ButtonDebounce =
              BuckyWagon_01_IN_TransistionOn;
          } else if (BuckyWagon_01_B.s277_Merge) {
            /* Transition: '<S191>:9' */
            BuckyWagon_01_DWork.s191_timer = 0.0;

            /* Exit 'TransistionOff': '<S191>:6' */
            /* Entry 'TransistionOff': '<S191>:6' */
            BuckyWagon_01_DWork.s191_is_ButtonDebounce =
              BuckyWagon_01_IN_TransistionOff;
          } else {
            BuckyWagon_01_DWork.s191_timer = BuckyWagon_01_DWork.s191_timer +
              1.0;
          }
          break;

         case BuckyWagon_01_IN_TransistionOn:
          /* During 'TransistionOn': '<S191>:5' */
          if (!BuckyWagon_01_B.s277_Merge) {
            /* Transition: '<S191>:13' */
            BuckyWagon_01_DWork.s191_timer = 0.0;

            /* Exit 'TransistionOn': '<S191>:5' */
            /* Entry 'TransistionOn': '<S191>:5' */
            BuckyWagon_01_DWork.s191_is_ButtonDebounce =
              BuckyWagon_01_IN_TransistionOn;
          } else if (BuckyWagon_01_DWork.s191_timer >= (onTime_DataStore())) {
            /* Transition: '<S191>:11' */
            /* Exit 'TransistionOn': '<S191>:5' */
            /* Entry 'waitRelease': '<S191>:3' */
            BuckyWagon_01_DWork.s191_is_ButtonDebounce =
              BuckyWagon_01_IN_waitRelease;

            /* Event: '<S191>:29' */
            sf_previousEvent = _sfEvent_BuckyWagon_01_;
            _sfEvent_BuckyWagon_01_ = BuckyWagon_01_event_buttonPress;
            BuckyWagon_01_c1_BuckyWagon_01();
            _sfEvent_BuckyWagon_01_ = sf_previousEvent;
          } else {
            BuckyWagon_01_DWork.s191_timer = BuckyWagon_01_DWork.s191_timer +
              1.0;
          }
          break;

         case BuckyWagon_01_IN_waitRelease:
          /* During 'waitRelease': '<S191>:3' */
          if (!BuckyWagon_01_B.s277_Merge) {
            /* Transition: '<S191>:12' */
            /* Exit 'waitRelease': '<S191>:3' */
            /* Entry 'TransistionOff': '<S191>:6' */
            BuckyWagon_01_DWork.s191_is_ButtonDebounce =
              BuckyWagon_01_IN_TransistionOff;
          }
          break;

         default:
          BuckyWagon_01_DWork.s191_is_ButtonDebounce = (uint8_T)0U;
          break;
        }
      }

      /* During 'ReverseLogic': '<S191>:4' */
      if (BuckyWagon_01_DWork.s191_is_active_ReverseLogic != 0) {
        switch (BuckyWagon_01_DWork.s191_is_ReverseLogic) {
         case BuckyWagon_01_IN_Forward:
          /* During 'Forward': '<S191>:7' */
          if ((_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_buttonPress) &&
              ((BuckyWagon_01_B.s134_Abs < (revSpdThres_DataStore())) &&
               (BuckyWagon_01_B.s372_Merge < (revAccThres_DataStore())))) {
            /* Transition: '<S191>:15' */
            /* Exit 'Forward': '<S191>:7' */
            /* Entry 'Reverse': '<S191>:8' */
            BuckyWagon_01_DWork.s191_is_ReverseLogic = BuckyWagon_01_IN_Reverse;
            BuckyWagon_01_B.s191_inReverse = 1.0;
          }
          break;

         case BuckyWagon_01_IN_Reverse:
          /* During 'Reverse': '<S191>:8' */
          if ((_sfEvent_BuckyWagon_01_ == BuckyWagon_01_event_buttonPress) &&
              ((BuckyWagon_01_B.s134_Abs < (fwdSpdThres_DataStore())) &&
               (BuckyWagon_01_B.s372_Merge < (fwdAccThres_DataStore())))) {
            /* Transition: '<S191>:14' */
            /* Exit 'Reverse': '<S191>:8' */
            /* Entry 'Forward': '<S191>:7' */
            BuckyWagon_01_DWork.s191_is_ReverseLogic = BuckyWagon_01_IN_Forward;
            BuckyWagon_01_B.s191_inReverse = 0.0;
          }
          break;

         default:
          BuckyWagon_01_DWork.s191_is_ReverseLogic = (uint8_T)0U;
          break;
        }
      }
    }
  }
}

/* Initial conditions for function-call system: '<Root>/Foreground' */
void BuckyWagon_01_Foreground_Init(void)
{
  /* InitializeConditions for Stateflow: '<S331>/Chart' */
  BuckyWagon_01_Chart_Init(&BuckyWagon_01_B.s331_sf_Chart,
    &BuckyWagon_01_DWork.s331_sf_Chart);

  /* InitializeConditions for atomic SubSystem: '<S9>/HV Controller' */

  /* S-Function Block: <S186>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s186_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S185>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s185_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* end of InitializeConditions for SubSystem: '<S9>/HV Controller' */

  /* InitializeConditions for atomic SubSystem: '<S7>/A123 Battery Controller' */

  /* S-Function Block: <S22>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s22_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* end of InitializeConditions for SubSystem: '<S7>/A123 Battery Controller' */

  /* InitializeConditions for atomic SubSystem: '<S9>/Reverse' */

  /* InitializeConditions for Stateflow: '<S134>/Chart' */
  BuckyWagon_01_DWork.s191_is_active_ButtonDebounce = 0U;
  BuckyWagon_01_DWork.s191_is_ButtonDebounce = 0U;
  BuckyWagon_01_DWork.s191_is_active_ReverseLogic = 0U;
  BuckyWagon_01_DWork.s191_is_ReverseLogic = 0U;
  BuckyWagon_01_DWork.s191_is_active_c1_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s191_is_c1_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s191_timer = 0.0;
  BuckyWagon_01_B.s191_inReverse = 0.0;

  /* end of InitializeConditions for SubSystem: '<S9>/Reverse' */

  /* InitializeConditions for atomic SubSystem: '<S7>/Analog Out' */

  /* InitializeConditions for Stateflow: '<S35>/Chart' */
  BuckyWagon_01_DWork.s40_is_active_c6_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s40_is_c6_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s40_timer = 0U;
  BuckyWagon_01_B.s40_light = FALSE;

  /* end of InitializeConditions for SubSystem: '<S7>/Analog Out' */

  /* InitializeConditions for Stateflow: '<S285>/Chart' */
  BuckyWagon_01_Chart_Init(&BuckyWagon_01_B.s285_sf_Chart,
    &BuckyWagon_01_DWork.s285_sf_Chart);

  /* InitializeConditions for atomic SubSystem: '<S9>/Brusa Charger (No Longer Used)' */

  /* InitializeConditions for Stateflow: '<S128>/Charging State Machine' */
  BuckyWagon_01_DWork.s138_is_active_c8_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s138_is_c8_BuckyWagon_01 = 0U;
  BuckyWagon_01_B.s138_currOut = 0.0;
  BuckyWagon_01_B.s138_voltOut = 0.0;
  BuckyWagon_01_B.s138_state = 0U;
  BuckyWagon_01_B.s138_timer = 0U;

  /* end of InitializeConditions for SubSystem: '<S9>/Brusa Charger (No Longer Used)' */

  /* InitializeConditions for Stateflow: '<S131>/Chart' */
  BuckyWagon_01_DWork.s171_is_LowSpeedManeuvering = 0U;
  BuckyWagon_01_DWork.s171_is_NormalDriving = 0U;
  BuckyWagon_01_DWork.s171_is_active_c9_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s171_counts = 0U;
  BuckyWagon_01_DWork.s171_brakeCounts = 0.0;
  BuckyWagon_01_B.s171_PumpState = 0U;

  /* S-Function Block: <S392>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s392_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for atomic SubSystem: '<S9>/Drive' */

  /* InitializeConditions for Stateflow: '<S147>/Chart' */
  BuckyWagon_01_DWork.s149_is_active_c5_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s149_is_c5_BuckyWagon_01 = 0U;
  BuckyWagon_01_B.s149_HillHoldOn = FALSE;

  /* S-Function Block: <S151>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s151_motohawk_delta_time_DWORK1 = now -
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
    BuckyWagon_01_DWork.s156_motohawk_delta_time_DWORK1 = now -
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
    BuckyWagon_01_DWork.s159_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for atomic SubSystem: '<S148>/Regen' */

  /* S-Function Block: <S165>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s165_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* end of InitializeConditions for SubSystem: '<S148>/Regen' */

  /* S-Function Block: <S160>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s160_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* end of InitializeConditions for SubSystem: '<S9>/Drive' */

  /* S-Function Block: <S132>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s132_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S18>/Chart' */
  BuckyWagon_01_DWork.s82_is_active_c7_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s82_is_c7_BuckyWagon_01 = 0U;
  BuckyWagon_01_B.s82_ctrlState = 0.0;

  /* InitializeConditions for S-Function (motohawk_sfun_fault_def): '<S117>/motohawk_fault_def5' */
  /* Reset Fault Downsample Counter: LVVoltLow */
  {
    BuckyWagon_01_DWork.s117_motohawk_fault_def5_DWORK1 = 0;
  }

  /* S-Function Block: <S125>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s125_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S2>/motohawk_trigger' */
  BuckyWagon_01_MiniViewDisplay_Init();

  /* S-Function Block: <S144>/motohawk_delta_time2 */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s144_motohawk_delta_time2_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S144>/motohawk_delta_time1 */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s144_motohawk_delta_time1_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S144>/Downsapmle1' */
  BuckyWagon_01_Downsapmle_Init(&BuckyWagon_01_B.s144_sf_Downsapmle1,
    &BuckyWagon_01_DWork.s144_sf_Downsapmle1);

  /* InitializeConditions for Stateflow: '<S144>/Downsapmle' */
  BuckyWagon_01_Downsapmle_Init(&BuckyWagon_01_B.s144_sf_Downsapmle,
    &BuckyWagon_01_DWork.s144_sf_Downsapmle);

  /* S-Function Block: <S143>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s143_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }
}

/* Enable for function-call system: '<Root>/Foreground' */
void BuckyWagon_01_Foreground_Enable(void)
{
  /* Level2 S-Function Block: '<S2>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_3974p0001 */
  BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S2>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_RTI_PERIODIC_3973p0004 */
  BuckyWagon_01_DWork.s2_motohawk_trigger_DWORK1 = 1;
}

/* Disable for function-call system: '<Root>/Foreground' */
void BuckyWagon_01_Foreground_Disable(void)
{
  /* Disable for atomic SubSystem: '<S7>/Analog Out' */

  /* Disable for enable SubSystem: '<S39>/Enabled Subsystem' */
  BuckyWagon_01_DWork.s39_EnabledSubsystem_MODE = FALSE;

  /* end of Disable for SubSystem: '<S39>/Enabled Subsystem' */

  /* end of Disable for SubSystem: '<S7>/Analog Out' */

  /* Disable for enable SubSystem: '<S116>/Time Since Enabled (With Input)1' */

  /* Disable for Outport: '<S120>/Time Since Enabled [sec]' */
  BuckyWagon_01_B.s120_UnitDelay = 0.0;
  BuckyWagon_01_DWork.s116_TimeSinceEnabledWithInput1_MODE = FALSE;

  /* end of Disable for SubSystem: '<S116>/Time Since Enabled (With Input)1' */
  /* Level2 S-Function Block: '<S2>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_20XRTI_PERIODIC_3974p0001 */
  BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 = 0;

  /* Level2 S-Function Block: '<S2>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_RTI_PERIODIC_3973p0004 */
  BuckyWagon_01_DWork.s2_motohawk_trigger_DWORK1 = 0;

  /* Disable for enable SubSystem: '<S12>/Time Since Enabled (With Input)1' */

  /* Disable for Outport: '<S255>/Time Since Enabled [sec]' */
  BuckyWagon_01_B.s255_UnitDelay = 0.0;
  BuckyWagon_01_DWork.s12_TimeSinceEnabledWithInput1_MODE = FALSE;

  /* end of Disable for SubSystem: '<S12>/Time Since Enabled (With Input)1' */
}

/* Start for function-call system: '<Root>/Foreground' */
void BuckyWagon_01_Foreground_Start(void)
{
  /* Start for atomic SubSystem: '<S7>/A123 Battery Controller' */

  /* S-Function (motohawk_sfun_probe): '<S13>/motohawk_probe6' */
  (hsc_bcm_enable_DataStore()) = ((uint8_T)1U);

  /* end of Start for SubSystem: '<S7>/A123 Battery Controller' */

  /* Start for atomic SubSystem: '<S7>/Analog Out' */
  /* Start for S-Function (motohawk_sfun_dout): '<S14>/motohawk_dout1' */

  /* S-Function Block: ReverseOut_Pin */
  {
    (init_resource_ReverseOut_Pin_DataStore()) = -1;
  }

  /* Start for enable SubSystem: '<S39>/Enabled Subsystem' */

  /* InitializeConditions for UnitDelay: '<S54>/Unit Delay' */
  BuckyWagon_01_DWork.s54_UnitDelay_DSTATE = 0;

  /* end of Start for SubSystem: '<S39>/Enabled Subsystem' */

  /* Start for S-Function (motohawk_sfun_dout): '<S14>/motohawk_dout2' */

  /* S-Function Block: DCDCInhibit_Out_Pin */
  {
    (init_resource_DCDCInhibit_Out_Pin_DataStore()) = -1;
  }

  /* Start for S-Function (motohawk_sfun_dout): '<S14>/motohawk_dout3' */

  /* S-Function Block: Brake_Light_Out */
  {
    (init_resource_Brake_Light_Out_DataStore()) = -1;
  }

  /* end of Start for SubSystem: '<S7>/Analog Out' */

  /* Start for enable SubSystem: '<S116>/Time Since Enabled (With Input)1' */

  /* S-Function Block: <S120>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s120_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S120>/Unit Delay' */
  BuckyWagon_01_DWork.s120_UnitDelay_DSTATE = 0.0;

  /* end of Start for SubSystem: '<S116>/Time Since Enabled (With Input)1' */

  /* Start for function-call system: '<S2>/Gauges' */

  /* Start for S-Function (motohawk_sfun_vdogauge_def): '<S10>/VDO Gauge Interface' */
  {
    GaugeChain_EZLinkOutput_Create();
  }

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_3974p0001 */
  BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S2>/motohawk_trigger' */
  BuckyWagon_01_MiniViewDisplay_Start();

  /* Clear enable/disable state for embedded trigger Trigger_FGND_RTI_PERIODIC_3973p0004 */
  BuckyWagon_01_DWork.s2_motohawk_trigger_DWORK1 = 0;

  /* Start for enable SubSystem: '<S12>/Time Since Enabled (With Input)1' */

  /* S-Function Block: <S255>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s255_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S255>/Unit Delay' */
  BuckyWagon_01_DWork.s255_UnitDelay_DSTATE = 0.0;

  /* end of Start for SubSystem: '<S12>/Time Since Enabled (With Input)1' */

  /* S-Function (motohawk_sfun_probe): '<S20>/motohawk_probe' */
  (SpeedSet_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S129>/motohawk_probe3' */
  (InstDCDCWatts_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S129>/motohawk_probe9' */
  (EngPowerkW_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S129>/motohawk_probe8' */
  (GenEfficiencyPct_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S129>/motohawk_probe11' */
  (RemyMechPowerkW_DataStore()) = 0.0;
}

/* Output and update for function-call system: '<Root>/Foreground' */
void BuckyWagon_01_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_UnitDelay1_k;
  real_T rtb_Merge_c;
  real_T rtb_UnitDelay1_b;
  real_T rtb_Merge_e;
  real_T rtb_motohawk_delta_time;
  real_T rtb_Merge_f;
  real_T rtb_Merge_g;
  real_T rtb_Merge_d;
  real_T rtb_Merge_b;
  real_T rtb_Merge_o;
  real_T rtb_UnitDelay1_f;
  real_T rtb_Merge_ep;
  real_T rtb_motohawk_delta_time_p;
  real_T rtb_motohawk_delta_time2;
  real_T rtb_Product8;
  real_T rtb_UnitDelay_b;
  real_T rtb_motohawk_delta_time1;
  real_T rtb_Product4;
  real_T rtb_Gain2;
  real_T rtb_motohawk_delta_time_o;
  real_T rtb_Saturation;
  real_T rtb_motohawk_delta_time_b;
  real_T rtb_motohawk_delta_time_h;
  real_T rtb_motohawk_delta_time_oi;
  real_T rtb_Saturation_p;
  real_T rtb_Saturation_c;
  real_T rtb_motohawk_delta_time_e;
  real_T rtb_Sum1_h;
  real_T rtb_motohawk_interpolation_1d;
  real_T rtb_motohawk_interpolation_1d_j;
  real_T rtb_motohawk_interpolation_1d_m;
  real_T rtb_motohawk_delta_time_a;
  real_T rtb_motohawk_delta_time_k;
  real_T rtb_Saturation_b;
  real_T rtb_DataTypeConversion_b;
  real_T rtb_Product3_m;
  real_T rtb_Gain7;
  real_T rtb_DataTypeConversion_d;
  real_T rtb_Product_h;
  real_T rtb_Switch_m;
  real_T rtb_Morot_Torque;
  uint32_T rtb_DataTypeConversion2_h;
  int16_T rtb_DataTypeConversion3;
  uint16_T rtb_motohawk_ain2;
  uint16_T rtb_motohawk_calibration8;
  index_T rtb_motohawk_prelookup_row;
  index_T rtb_motohawk_prelookup_col;
  index_T rtb_motohawk_prelookup;
  index_T rtb_motohawk_prelookup_b;
  index_T rtb_motohawk_prelookup_p;
  uint8_T rtb_Merge_ht;
  uint8_T rtb_Merge_j0;
  uint8_T rtb_Merge_gc;
  uint8_T rtb_Merge_o0;
  uint8_T rtb_Merge_hg;
  boolean_T rtb_RelationalOperator_k;
  boolean_T rtb_E_stop_switch;
  boolean_T rtb_RelationalOperator_m;
  boolean_T rtb_RelationalOperator1_c;
  boolean_T rtb_RelationalOperator_a;
  boolean_T rtb_RelationalOperator1_cw;
  boolean_T rtb_RelationalOperator_ac;
  boolean_T rtb_LogicalOperator1_f;
  boolean_T rtb_RelationalOperator3;
  boolean_T rtb_RelationalOperator4_d;
  boolean_T rtb_Switch1_m;
  boolean_T rtb_LogicalOperator1_fv;
  boolean_T rtb_LogicalOperator1_jy;
  boolean_T rtb_LogicalOperator3_l;
  boolean_T rtb_LogicalOperator2_d;
  boolean_T rtb_LogicalOperator_d;
  boolean_T rtb_RelationalOperator6;
  boolean_T rtb_LogicalOperator_j;
  boolean_T rtb_LogicalOperator1_o;
  boolean_T rtb_LogicalOperator2_k;
  boolean_T rtb_LogicalOperator3_p;
  boolean_T rtb_LogicalOperator4_i;
  boolean_T rtb_LogicalOperator_b;
  boolean_T rtb_Compare_d;
  boolean_T rtb_Compare_kf;
  boolean_T rtb_Compare_f;
  boolean_T rtb_Compare_h;
  boolean_T rtb_Compare_gs;
  boolean_T rtb_Compare_i;
  boolean_T rtb_LogicalOperator2_j;
  boolean_T rtb_LogicalOperator1_p;
  boolean_T rtb_Merge_nz;
  boolean_T rtb_CombinatorialLogic[2];
  boolean_T rtb_AgeCount;
  boolean_T rtb_LogicalOperator4_f;
  boolean_T rtb_BelowLoTarget;
  boolean_T rtb_RelationalOperator_fj;
  int32_T sf_previousEvent;
  real_T rtb_Merge_k;
  int32_T rtb_DataTypeConversion_i;
  uint8_T rtb_Merge_ow;
  boolean_T rtb_LogicalOperator1_jo;
  real_T rtb_Sum1;
  boolean_T rtb_LogicalOperator2_e;
  boolean_T rtb_Merge_na;
  boolean_T rtb_LogicalOperator12;
  boolean_T rtb_UnitDelay_if;
  real_T rtb_to65535_c;
  boolean_T rtb_LogicalOperator_bd;
  real_T rtb_to65535_d;
  boolean_T rtb_LogicalOperator2_o;
  real_T rtb_Switch_h;
  real_T rtb_to65535_b;
  real_T rtb_to65535_dx;
  boolean_T rtb_LogicalOperator5_k;
  int16_T rtb_Switch_d;

  /* Outputs for atomic SubSystem: '<S12>/A123 Battery Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S245>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_2737p0002;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_2737p0002,
      &messageObj);
    if ((BuckyWagon_01_B.s245_AgeCount + 1) > BuckyWagon_01_B.s245_AgeCount)
      BuckyWagon_01_B.s245_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint16_T tmp4 = 0;
      uint8_T tmp5 = 0;
      uint16_T tmp6 = 0;
      uint8_T tmp7 = 0;
      uint8_T tmp8 = 0;
      uint8_T tmp9 = 0;
      uint16_T tmp10 = 0;
      uint8_T tmp11 = 0;
      uint8_T tmp12 = 0;
      uint8_T tmp13 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[1] & 0x000000C0) >> 6) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[1] & 0x00000010) >> 4) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[1] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[0] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[1] & 0x0000000F)) ;
      ((uint8_T *)(&tmp4))[1] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[0] & 0x00000008) >> 3) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp6))[1] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp7))[0] = ((messageObj.u1DataArr[0] & 0x00000030) >> 4) ;
      ((uint8_T *)(&tmp8))[0] = ((messageObj.u1DataArr[0] & 0x00000001)) ;
      ((uint8_T *)(&tmp9))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp10))[0] = ((messageObj.u1DataArr[6] & 0x0000000F)) ;
      ((uint8_T *)(&tmp10))[1] = ((messageObj.u1DataArr[7])) ;
      ((uint8_T *)(&tmp11))[0] = ((messageObj.u1DataArr[6] & 0x00000010) >> 4) ;
      ((uint8_T *)(&tmp12))[0] = ((messageObj.u1DataArr[0] & 0x000000C0) >> 6) ;
      ((uint8_T *)(&tmp13))[0] = ((messageObj.u1DataArr[6] & 0x00000020) >> 5) ;
      BuckyWagon_01_B.s245_bcm_alarm = (real_T) tmp0;
      BuckyWagon_01_B.s245_bcm_cpwr_cmd = (real_T) tmp1;
      BuckyWagon_01_B.s245_bcm_cpwr_mon = (real_T) tmp2;
      BuckyWagon_01_B.s245_bcm_epo = (real_T) tmp3;
      BuckyWagon_01_B.s245_bcm_gfd = ((real_T) tmp4) / ((real_T) 4);
      BuckyWagon_01_B.s245_bcm_hvil_mon = (real_T) tmp5;
      BuckyWagon_01_B.s245_bcm_ibat = (((real_T) tmp6) / ((real_T) 40)) +
        ((real_T) -1000);
      BuckyWagon_01_B.s245_bcm_mainc_stat = (boolean_T) tmp7;
      BuckyWagon_01_B.s245_bcm_ready = (real_T) tmp8;
      BuckyWagon_01_B.s245_bcm_soc = ((real_T) tmp9) / ((real_T) 200);
      BuckyWagon_01_B.s245_bcm_vbat = ((real_T) tmp10) / ((real_T) 4);
      BuckyWagon_01_B.s245_bcm_chg_done = (real_T) tmp11;
      BuckyWagon_01_B.s245_bcm_chgc_stat = (boolean_T) tmp12;
      BuckyWagon_01_B.s245_bcm_cool_req = (real_T) tmp13;
      BuckyWagon_01_B.s245_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S259>/Compare' incorporates:
   *  Constant: '<S259>/Constant'
   */
  rtb_Compare_h = (BuckyWagon_01_B.s245_AgeCount > 20U);

  /* S-Function (motohawk_sfun_fault_def): '<S245>/motohawk_fault_def10' */

  /* Set Fault Suspected Status: NoCAN_BCM_410 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(24, rtb_Compare_h);
    UpdateFault(24);
  }

  /* If: '<S262>/If' incorporates:
   *  ActionPort: '<S267>/Action Port'
   *  ActionPort: '<S268>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S262>/override_enable'
   *  SubSystem: '<S262>/NewValue'
   *  SubSystem: '<S262>/OldValue'
   */
  if ((bcm_mainc_stat_ovr_DataStore())) {
    /* Inport: '<S267>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S262>/new_value'
     */
    BuckyWagon_01_B.s262_Merge = (bcm_mainc_stat_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S267>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(70);
    }
  } else {
    /* Inport: '<S268>/In1' */
    BuckyWagon_01_B.s262_Merge = BuckyWagon_01_B.s245_bcm_mainc_stat;

    /* S-Function (motohawk_sfun_code_cover): '<S268>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(71);
    }
  }

  /* If: '<S266>/If' incorporates:
   *  ActionPort: '<S275>/Action Port'
   *  ActionPort: '<S276>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S266>/override_enable'
   *  SubSystem: '<S266>/NewValue'
   *  SubSystem: '<S266>/OldValue'
   */
  if ((bcm_ready_ovr_DataStore())) {
    /* Inport: '<S275>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S266>/new_value'
     */
    BuckyWagon_01_B.s266_Merge = (bcm_ready_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S275>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(78);
    }
  } else {
    /* Inport: '<S276>/In1' */
    BuckyWagon_01_B.s266_Merge = BuckyWagon_01_B.s245_bcm_ready;

    /* S-Function (motohawk_sfun_code_cover): '<S276>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(79);
    }
  }

  /* Gain: '<S245>/Gain1' */
  BuckyWagon_01_B.s245_bcm_soc_j = 100.0 * BuckyWagon_01_B.s245_bcm_soc;

  /* If: '<S263>/If' incorporates:
   *  ActionPort: '<S269>/Action Port'
   *  ActionPort: '<S270>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S263>/override_enable'
   *  SubSystem: '<S263>/NewValue'
   *  SubSystem: '<S263>/OldValue'
   */
  if ((bcm_chargec_stat_ovr_DataStore())) {
    /* Inport: '<S269>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S263>/new_value'
     */
    BuckyWagon_01_B.s263_Merge = (bcm_chargec_stat_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S269>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(72);
    }
  } else {
    /* Inport: '<S270>/In1' */
    BuckyWagon_01_B.s263_Merge = BuckyWagon_01_B.s245_bcm_chgc_stat;

    /* S-Function (motohawk_sfun_code_cover): '<S270>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(73);
    }
  }

  /* If: '<S265>/If' incorporates:
   *  ActionPort: '<S273>/Action Port'
   *  ActionPort: '<S274>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S265>/override_enable'
   *  SubSystem: '<S265>/NewValue'
   *  SubSystem: '<S265>/OldValue'
   */
  if ((SOC_ovr_DataStore())) {
    /* Inport: '<S273>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S265>/new_value'
     */
    BuckyWagon_01_B.s265_Merge = (SOC_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S273>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(76);
    }
  } else {
    /* Inport: '<S274>/In1' */
    BuckyWagon_01_B.s265_Merge = BuckyWagon_01_B.s245_bcm_soc_j;

    /* S-Function (motohawk_sfun_code_cover): '<S274>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(77);
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S245>/Read CAN Message6' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_2739p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_2739p0001,
      &messageObj);
    if ((BuckyWagon_01_B.s245_AgeCount_e + 1) > BuckyWagon_01_B.s245_AgeCount_e)
      BuckyWagon_01_B.s245_AgeCount_e++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint16_T tmp3 = 0;
      uint8_T tmp4 = 0;
      uint8_T tmp5 = 0;
      uint8_T tmp6 = 0;
      uint8_T tmp7 = 0;
      uint8_T tmp8 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[0] & 0x0000000F)) ;
      ((uint8_T *)(&tmp2))[1] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[2] & 0x0000000F)) ;
      ((uint8_T *)(&tmp3))[1] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[0] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[2] & 0x00000040) >> 6) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[7])) ;
      ((uint8_T *)(&tmp7))[0] = ((messageObj.u1DataArr[2] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp8))[0] = ((messageObj.u1DataArr[2] & 0x00000020) >> 5) ;
      BuckyWagon_01_B.s245_bcm_cell_tmax = (((real_T) tmp0) / ((real_T) 2)) +
        ((real_T) -40);
      BuckyWagon_01_B.s245_bcm_cell_tmin = (((real_T) tmp1) / ((real_T) 2)) +
        ((real_T) -40);
      BuckyWagon_01_B.s245_bcm_cell_vmax = ((real_T) tmp2) / ((real_T) 1000);
      BuckyWagon_01_B.s245_bcm_cell_vmin = ((real_T) tmp3) / ((real_T) 1000);
      BuckyWagon_01_B.s245_bcm_chga_ena = (real_T) tmp4;
      BuckyWagon_01_B.s245_bcm_chga_mon = (real_T) tmp5;
      BuckyWagon_01_B.s245_bcm_lvbat = ((real_T) tmp6) / ((real_T) 10);
      BuckyWagon_01_B.s245_bcm_mod_ena = (real_T) tmp7;
      BuckyWagon_01_B.s245_bcm_veh_mon = (real_T) tmp8;
      BuckyWagon_01_B.s245_AgeCount_e = 0;
    }
  }

  /* RelationalOperator: '<S261>/Compare' incorporates:
   *  Constant: '<S261>/Constant'
   */
  rtb_Compare_gs = (BuckyWagon_01_B.s245_AgeCount_e > 20U);

  /* S-Function (motohawk_sfun_fault_def): '<S245>/motohawk_fault_def12' */

  /* Set Fault Suspected Status: NoCAN_BCM_430 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(26, rtb_Compare_gs);
    UpdateFault(26);
  }

  /* Logic: '<S245>/Logical Operator1' incorporates:
   *  Logic: '<S245>/Logical Operator'
   *  S-Function (motohawk_sfun_fault_status): '<S245>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S245>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S245>/motohawk_fault_status2'
   */
  rtb_LogicalOperator1_jo = !(IsFaultActive(24) || IsFaultActive(25) ||
    IsFaultActive(26));

  /* S-Function (motohawk_sfun_read_canmsg): '<S245>/Read CAN Message5' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_2738p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_2738p0001,
      &messageObj);
    if ((BuckyWagon_01_B.s245_AgeCount_k + 1) > BuckyWagon_01_B.s245_AgeCount_k)
      BuckyWagon_01_B.s245_AgeCount_k++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint16_T tmp3 = 0;
      uint8_T tmp4 = 0;
      uint16_T tmp5 = 0;
      uint8_T tmp6 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[5] & 0x00000001)) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[6] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[1] & 0x0000000F)) ;
      ((uint8_T *)(&tmp3))[1] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[0] & 0x000000F0) >> 4) ;
      ((uint8_T *)(&tmp5))[1] = ((messageObj.u1DataArr[1] & 0x000000F0) >> 4) |
        ((messageObj.u1DataArr[0] & 0x0000000F) << 4) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[5])) ;
      BuckyWagon_01_B.s245_bcm_cell_overvolt = (real_T) tmp0;
      BuckyWagon_01_B.s245_bcm_cell_undervolt = (boolean_T) tmp1;
      BuckyWagon_01_B.s245_bcm_chg_buf = ((real_T) tmp2) / ((real_T) 2);
      BuckyWagon_01_B.s245_bcm_chg_max = ((real_T) tmp3) / ((real_T) 4);
      BuckyWagon_01_B.s245_bcm_dis_buf = ((real_T) tmp4) / ((real_T) 2);
      BuckyWagon_01_B.s245_bcm_dis_max = ((real_T) tmp5) / ((real_T) 4);
      BuckyWagon_01_B.s245_bcm_t_coolant = (((real_T) tmp6) / ((real_T) 2)) +
        ((real_T) -40);
      BuckyWagon_01_B.s245_AgeCount_k = 0;
    }
  }

  /* RelationalOperator: '<S260>/Compare' incorporates:
   *  Constant: '<S260>/Constant'
   */
  rtb_Compare_i = (BuckyWagon_01_B.s245_AgeCount_k > 20U);

  /* S-Function (motohawk_sfun_fault_def): '<S245>/motohawk_fault_def11' */

  /* Set Fault Suspected Status: NoCAN_BCM_420 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(25, rtb_Compare_i);
    UpdateFault(25);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S245>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: High_Cell_Voltage_Shutdown */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(13, BuckyWagon_01_B.s245_bcm_cell_undervolt);
    UpdateFault(13);
  }

  /* If: '<S264>/If' incorporates:
   *  ActionPort: '<S271>/Action Port'
   *  ActionPort: '<S272>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S264>/override_enable'
   *  SubSystem: '<S264>/NewValue'
   *  SubSystem: '<S264>/OldValue'
   */
  if ((bcm_cell_overvolt_ovr_ovr_DataStore())) {
    /* Inport: '<S271>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S264>/new_value'
     */
    BuckyWagon_01_B.s264_Merge = (bcm_cell_overvolt_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S271>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(74);
    }
  } else {
    /* Inport: '<S272>/In1' */
    BuckyWagon_01_B.s264_Merge = BuckyWagon_01_B.s245_bcm_cell_overvolt;

    /* S-Function (motohawk_sfun_code_cover): '<S272>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(75);
    }
  }

  /* end of Outputs for SubSystem: '<S12>/A123 Battery Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S250>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3417p0007;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3417p0007,
      &messageObj);
    if ((BuckyWagon_01_B.s250_AgeCount + 1) > BuckyWagon_01_B.s250_AgeCount)
      BuckyWagon_01_B.s250_AgeCount++;
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
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[6] & 0x00000003)) ;
      ((uint8_T *)(&tmp7))[0] = ((messageObj.u1DataArr[6] & 0x0000001C) >> 2) ;
      ((uint8_T *)(&tmp8))[0] = ((messageObj.u1DataArr[6] & 0x000000E0) >> 5) ;
      ((uint8_T *)(&tmp9))[0] = ((messageObj.u1DataArr[7] & 0x0000000F)) ;
      ((uint8_T *)(&tmp10))[0] = ((messageObj.u1DataArr[7] & 0x000000F0) >> 4) ;
      BuckyWagon_01_B.s250_InputVoltage = ((real_T) tmp0) * ((real_T) 2);
      BuckyWagon_01_B.s250_OutputVoltage = ((real_T) tmp1) * ((real_T) 2);
      BuckyWagon_01_B.s250_InputCurrentLimitMax = ((real_T) tmp2) / ((real_T) 2);
      BuckyWagon_01_B.s250_InputCurrent = ((real_T) tmp3) / ((real_T) 2);
      BuckyWagon_01_B.s250_OutputCurrent = ((real_T) tmp4) / ((real_T) 2);
      BuckyWagon_01_B.s250_Eaton_HV_Charger_Temperature = (((real_T) tmp5) /
        ((real_T) 2)) + ((real_T) -40);
      BuckyWagon_01_B.s250_IgnitionStatus = (real_T) tmp6;
      BuckyWagon_01_B.s250_ChargerState = (real_T) tmp7;
      BuckyWagon_01_B.s250_FaultSeverityIndicator = (real_T) tmp8;
      BuckyWagon_01_B.s250_MessageCounter = (real_T) tmp9;
      BuckyWagon_01_B.s250_MessageChecksum = (real_T) tmp10;
      BuckyWagon_01_B.s250_AgeCount = 0;
    }
  }

  /* If: '<S340>/If' incorporates:
   *  ActionPort: '<S358>/Action Port'
   *  ActionPort: '<S359>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S340>/override_enable'
   *  SubSystem: '<S340>/NewValue'
   *  SubSystem: '<S340>/OldValue'
   */
  if ((InputVoltage_ovr_DataStore())) {
    /* Inport: '<S358>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S340>/new_value'
     */
    rtb_Merge_k = (InputVoltage_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S358>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(127);
    }
  } else {
    /* Inport: '<S359>/In1' */
    rtb_Merge_k = BuckyWagon_01_B.s250_InputVoltage;

    /* S-Function (motohawk_sfun_code_cover): '<S359>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(128);
    }
  }

  /* RelationalOperator: '<S331>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S250>/motohawk_calibration'
   */
  rtb_RelationalOperator_k = (rtb_Merge_k > (PluggedInMainsThesEaton_DataStore()));

  /* Stateflow: '<S331>/Chart' */
  BuckyWagon_01_Chart((PluggedInHistTimeeaton_DataStore()),
                      rtb_RelationalOperator_k, &BuckyWagon_01_B.s331_sf_Chart,
                      &BuckyWagon_01_DWork.s331_sf_Chart);

  /* Outputs for atomic SubSystem: '<S12>/Eaton Motor Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S251>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_7403p0002;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_7403p0002,
      &messageObj);
    if ((BuckyWagon_01_B.s251_AgeCount + 1) > BuckyWagon_01_B.s251_AgeCount)
      BuckyWagon_01_B.s251_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint16_T tmp4 = 0;
      uint16_T tmp5 = 0;
      uint8_T tmp6 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[5] & 0x00000070) >> 4) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[7] & 0x000000F0) >> 4) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[7] & 0x0000000F)) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[5] & 0x0000000F)) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp4))[1] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp5))[1] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[4])) ;
      BuckyWagon_01_B.s251_Fault_Severity_Indicator = (real_T) tmp0;
      BuckyWagon_01_B.s251_Message_Checksum = (real_T) tmp1;
      BuckyWagon_01_B.s251_Message_Counter = (real_T) tmp2;
      BuckyWagon_01_B.s251_Motor_Control_State = (real_T) tmp3;
      BuckyWagon_01_B.s251_Motor_Speed = (((real_T) tmp4) / ((real_T) 4)) +
        ((real_T) -8000);
      BuckyWagon_01_B.s251_Motor_Torque = (((real_T) tmp5) / ((real_T) 10)) +
        ((real_T) -3200);
      BuckyWagon_01_B.s251_Percent_Torque_Available = ((real_T) tmp6) / ((real_T)
        2);
      BuckyWagon_01_B.s251_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S360>/Compare' incorporates:
   *  Constant: '<S360>/Constant'
   */
  rtb_Compare_d = (BuckyWagon_01_B.s251_AgeCount > 20U);

  /* S-Function (motohawk_sfun_fault_def): '<S251>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: NoCAN_EatonM_FF30 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(28, rtb_Compare_d);
    UpdateFault(28);
  }

  /* If: '<S362>/If' incorporates:
   *  ActionPort: '<S364>/Action Port'
   *  ActionPort: '<S365>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S362>/override_enable'
   *  SubSystem: '<S362>/NewValue'
   *  SubSystem: '<S362>/OldValue'
   */
  if ((Motor_Speed_ovr_DataStore())) {
    /* Inport: '<S364>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S362>/new_value'
     */
    BuckyWagon_01_B.s362_Merge = (Motor_Speed_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S364>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(129);
    }
  } else {
    /* Inport: '<S365>/In1' */
    BuckyWagon_01_B.s362_Merge = BuckyWagon_01_B.s251_Motor_Speed;

    /* S-Function (motohawk_sfun_code_cover): '<S365>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(130);
    }
  }

  /* RelationalOperator: '<S251>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S251>/motohawk_calibration'
   */
  BuckyWagon_01_B.s251_RelationalOperator =
    (BuckyWagon_01_B.s251_Motor_Control_State > (Drive_Ready_DataStore()));

  /* If: '<S363>/If' incorporates:
   *  ActionPort: '<S366>/Action Port'
   *  ActionPort: '<S367>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S363>/override_enable'
   *  SubSystem: '<S363>/NewValue'
   *  SubSystem: '<S363>/OldValue'
   */
  if ((Motor_Torque_ovr_DataStore())) {
    /* Inport: '<S366>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S363>/new_value'
     */
    BuckyWagon_01_B.s363_Merge = (Motor_Torque_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S366>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(131);
    }
  } else {
    /* Inport: '<S367>/In1' */
    BuckyWagon_01_B.s363_Merge = BuckyWagon_01_B.s251_Motor_Torque;

    /* S-Function (motohawk_sfun_code_cover): '<S367>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(132);
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S251>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3767p0017;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3767p0017,
      &messageObj);
    if ((BuckyWagon_01_B.s251_AgeCount_g + 1) > BuckyWagon_01_B.s251_AgeCount_g)
      BuckyWagon_01_B.s251_AgeCount_g++;
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint16_T tmp4 = 0;
      uint16_T tmp5 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[4] & 0x0000000F)) ;
      ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[1] & 0x0000000F)) ;
      ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[7])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[6])) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[5] & 0x000000F0) >> 4) ;
      ((uint8_T *)(&tmp4))[1] = ((messageObj.u1DataArr[4] & 0x000000F0) >> 4) |
        ((messageObj.u1DataArr[5] & 0x0000000F) << 4) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[2] & 0x000000F0) >> 4) ;
      ((uint8_T *)(&tmp5))[1] = ((messageObj.u1DataArr[1] & 0x000000F0) >> 4) |
        ((messageObj.u1DataArr[2] & 0x0000000F) << 4) ;
      BuckyWagon_01_B.s251_DC_Bus_Current = (((real_T) tmp0) / ((real_T) 5)) +
        ((real_T) -400);
      BuckyWagon_01_B.s251_DC_Bus_Voltage = ((real_T) tmp1) / ((real_T) 5);
      BuckyWagon_01_B.s251_Inverter_Temperature = ((real_T) tmp2) + ((real_T)
        -40);
      BuckyWagon_01_B.s251_Motor_Temperature = ((real_T) tmp3) + ((real_T) -40);
      BuckyWagon_01_B.s251_Phase_Current = (((real_T) tmp4) / ((real_T) 5)) +
        ((real_T) -400);
      BuckyWagon_01_B.s251_Phase_phase_voltage = ((real_T) tmp5) / ((real_T) 5);
      BuckyWagon_01_B.s251_AgeCount_g = 0;
    }
  }

  /* RelationalOperator: '<S361>/Compare' incorporates:
   *  Constant: '<S361>/Constant'
   */
  rtb_Compare_kf = (BuckyWagon_01_B.s251_AgeCount_g > 200U);

  /* S-Function (motohawk_sfun_fault_def): '<S251>/motohawk_fault_def13' */

  /* Set Fault Suspected Status: NoCAN_EatonM_FF31 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(29, rtb_Compare_kf);
    UpdateFault(29);
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S251>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3796p0017;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3796p0017,
      &messageObj);
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint16_T tmp3 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[6])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp2))[1] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp3))[1] = ((messageObj.u1DataArr[2])) ;
      BuckyWagon_01_B.s251_Isolation_Resistance = ((real_T) tmp0) * ((real_T) 8);
      BuckyWagon_01_B.s251_Maximum_Rated_Power = ((real_T) tmp1) * ((real_T) 5);
      BuckyWagon_01_B.s251_Maximum_Rated_Speed = (((real_T) tmp2) / ((real_T) 4))
        + ((real_T) -8000);
      BuckyWagon_01_B.s251_Maximum_Rated_Torqe = (((real_T) tmp3) / ((real_T) 10))
        + ((real_T) -3200);
    }
  }

  /* end of Outputs for SubSystem: '<S12>/Eaton Motor Inputs' */

  /* Outputs for atomic SubSystem: '<S9>/HV Controller' */

  /* Logic: '<S133>/Logical Operator2' */
  rtb_LogicalOperator2_e = !BuckyWagon_01_B.s331_sf_Chart.s287_pluggedIn;

  /* If: '<S182>/If' incorporates:
   *  ActionPort: '<S189>/Action Port'
   *  ActionPort: '<S190>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S182>/override_enable'
   *  SubSystem: '<S182>/NewValue'
   *  SubSystem: '<S182>/OldValue'
   */
  if ((Contactor_Shutdown_Test_ovr_DataStore())) {
    /* Inport: '<S189>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S182>/new_value'
     */
    rtb_Merge_na = (Contactor_Shutdown_Test_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S189>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(64);
    }
  } else {
    /* Inport: '<S190>/In1' incorporates:
     *  Logic: '<S133>/Logical Operator1'
     *  S-Function (motohawk_sfun_data_read): '<S133>/motohawk_data_read'
     */
    rtb_Merge_na = (Shutdown_Req_DataStore() && rtb_LogicalOperator2_e);

    /* S-Function (motohawk_sfun_code_cover): '<S190>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(65);
    }
  }

  /* Logic: '<S133>/Logical Operator12' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S133>/motohawk_fault_action'
   */
  rtb_LogicalOperator12 = (rtb_Merge_na || GetFaultActionStatus(6));

  /* S-Function Block: <S186>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s186_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_h = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S186>/Switch' incorporates:
   *  Constant: '<S186>/Constant'
   *  Logic: '<S180>/Logical Operator5'
   *  S-Function (motohawk_sfun_data_read): '<S186>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S186>/motohawk_delta_time'
   *  Sum: '<S186>/Sum'
   */
  if (!rtb_LogicalOperator12) {
    rtb_Merge_k = rtb_motohawk_delta_time_h + Solectria_Enable_timer_DataStore();
  } else {
    rtb_Merge_k = 0.0;
  }

  /* Logic: '<S180>/Logical Operator4' incorporates:
   *  Constant: '<S181>/Constant'
   *  Logic: '<S180>/Logical Operator3'
   *  RelationalOperator: '<S180>/Relational Operator1'
   *  RelationalOperator: '<S181>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration1'
   */
  rtb_LogicalOperator4_f = ((!rtb_LogicalOperator12) && (rtb_Merge_k >=
    (Load_Enable_Delay_DataStore())) && BuckyWagon_01_B.s262_Merge);

  /* S-Function (motohawk_sfun_data_write): '<S133>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Batt_Load_Enable */
  {
    Batt_Load_Enable_DataStore() = rtb_LogicalOperator4_f;
  }

  /* RelationalOperator: '<S179>/Compare' incorporates:
   *  Constant: '<S179>/Constant'
   */
  rtb_Merge_na = (BuckyWagon_01_B.s266_Merge == 1.0);

  /* UnitDelay: '<S187>/Unit Delay' */
  rtb_UnitDelay_if = BuckyWagon_01_DWork.s187_UnitDelay_DSTATE;

  /* Switch: '<S184>/Switch' incorporates:
   *  Constant: '<S184>/Constant1'
   *  DataTypeConversion: '<S184>/Data Type Conversion'
   *  Sum: '<S184>/Sum'
   *  UnitDelay: '<S184>/Unit Delay'
   */
  if (rtb_Merge_na) {
    rtb_to65535_c = BuckyWagon_01_DWork.s184_UnitDelay_DSTATE + 1.0;
  } else {
    rtb_to65535_c = 0.0;
  }

  /* Logic: '<S184>/Logical Operator' */
  rtb_LogicalOperator_bd = !rtb_Merge_na;

  /* Switch: '<S184>/Switch1' incorporates:
   *  Constant: '<S184>/Constant3'
   *  DataTypeConversion: '<S184>/Data Type Conversion1'
   *  Sum: '<S184>/Sum1'
   *  UnitDelay: '<S184>/Unit Delay1'
   */
  if (rtb_LogicalOperator_bd) {
    rtb_to65535_d = BuckyWagon_01_DWork.s184_UnitDelay1_DSTATE + 1.0;
  } else {
    rtb_to65535_d = 0.0;
  }

  /* Logic: '<S188>/Logical Operator2' incorporates:
   *  Constant: '<S184>/off delay'
   *  Constant: '<S184>/on delay'
   *  Logic: '<S184>/Logical Operator1'
   *  Logic: '<S184>/Logical Operator2'
   *  Logic: '<S188>/Logical Operator'
   *  Logic: '<S188>/Logical Operator1'
   *  RelationalOperator: '<S184>/Relational Operator1'
   *  RelationalOperator: '<S184>/Relational Operator2'
   *  UnitDelay: '<S188>/Unit Delay'
   */
  rtb_LogicalOperator2_o = ((BuckyWagon_01_DWork.s188_UnitDelay_DSTATE ||
    (rtb_Merge_na && (rtb_to65535_c >= 10.0))) && (!(rtb_LogicalOperator_bd &&
    (rtb_to65535_d >= 0.0))));

  /* S-Function Block: <S185>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s185_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_oi = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S185>/Switch' incorporates:
   *  Constant: '<S185>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S185>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S185>/motohawk_delta_time'
   *  Sum: '<S185>/Sum'
   */
  if (rtb_LogicalOperator12) {
    rtb_Switch_h = rtb_motohawk_delta_time_oi +
      Contactor_Disable_Timer_DataStore();
  } else {
    rtb_Switch_h = 0.0;
  }

  /* Logic: '<S180>/Logical Operator2' incorporates:
   *  Logic: '<S180>/Logical Operator6'
   *  RelationalOperator: '<S180>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration'
   */
  rtb_Merge_na = (rtb_LogicalOperator2_o && (!(rtb_Switch_h >=
    (Contactor_Disable_Delay_DataStore()))));

  /* Switch: '<S183>/Switch' incorporates:
   *  Constant: '<S183>/Constant1'
   *  DataTypeConversion: '<S183>/Data Type Conversion'
   *  Sum: '<S183>/Sum'
   *  UnitDelay: '<S183>/Unit Delay'
   */
  if (rtb_Merge_na) {
    rtb_to65535_b = BuckyWagon_01_DWork.s183_UnitDelay_DSTATE + 1.0;
  } else {
    rtb_to65535_b = 0.0;
  }

  /* Logic: '<S183>/Logical Operator' */
  rtb_LogicalOperator_bd = !rtb_Merge_na;

  /* Switch: '<S183>/Switch1' incorporates:
   *  Constant: '<S183>/Constant3'
   *  DataTypeConversion: '<S183>/Data Type Conversion1'
   *  Sum: '<S183>/Sum1'
   *  UnitDelay: '<S183>/Unit Delay1'
   */
  if (rtb_LogicalOperator_bd) {
    rtb_to65535_dx = BuckyWagon_01_DWork.s183_UnitDelay1_DSTATE + 1.0;
  } else {
    rtb_to65535_dx = 0.0;
  }

  /* Logic: '<S187>/Logical Operator2' incorporates:
   *  Constant: '<S183>/off delay'
   *  Constant: '<S183>/on delay'
   *  Logic: '<S183>/Logical Operator1'
   *  Logic: '<S183>/Logical Operator2'
   *  Logic: '<S187>/Logical Operator'
   *  Logic: '<S187>/Logical Operator1'
   *  RelationalOperator: '<S183>/Relational Operator1'
   *  RelationalOperator: '<S183>/Relational Operator2'
   */
  rtb_LogicalOperator2_j = ((rtb_UnitDelay_if || (rtb_Merge_na && (rtb_to65535_b
    >= 0.0))) && (!(rtb_LogicalOperator_bd && (rtb_to65535_dx >= 10.0))));

  /* S-Function (motohawk_sfun_data_write): '<S180>/motohawk_data_write' */
  /* Write to Data Storage as scalar: MPRD_KeepAlive */
  {
    MPRD_KeepAlive_DataStore() = rtb_LogicalOperator2_j;
  }

  /* Saturate: '<S185>/Saturation' */
  rtb_Saturation_p = rt_SATURATE(rtb_Switch_h, 0.0, 86400.0);

  /* S-Function (motohawk_sfun_data_write): '<S185>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Contactor_Disable_Timer */
  {
    Contactor_Disable_Timer_DataStore() = rtb_Saturation_p;
  }

  /* Saturate: '<S186>/Saturation' */
  rtb_Saturation_c = rt_SATURATE(rtb_Merge_k, 0.0, 86400.0);

  /* S-Function (motohawk_sfun_data_write): '<S186>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Solectria_Enable_timer */
  {
    Solectria_Enable_timer_DataStore() = rtb_Saturation_c;
  }

  /* Logic: '<S133>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S133>/motohawk_calibration8'
   */
  BuckyWagon_01_B.s133_LogicalOperator = ((Allow_MainContactor_Close_DataStore())
    && rtb_Merge_na);

  /* Logic: '<S133>/Logical Operator3' */
  rtb_UnitDelay_if = (rtb_LogicalOperator4_f && rtb_LogicalOperator2_e);

  /* Logic: '<S133>/Logical Operator4' */
  rtb_LogicalOperator2_e = (BuckyWagon_01_B.s251_RelationalOperator &&
    rtb_UnitDelay_if);

  /* Logic: '<S133>/Logical Operator5' */
  rtb_LogicalOperator5_k = (rtb_LogicalOperator4_f || BuckyWagon_01_B.s263_Merge);

  /* Update for UnitDelay: '<S187>/Unit Delay' */
  BuckyWagon_01_DWork.s187_UnitDelay_DSTATE = rtb_LogicalOperator2_j;

  /* Update for UnitDelay: '<S188>/Unit Delay' */
  BuckyWagon_01_DWork.s188_UnitDelay_DSTATE = rtb_LogicalOperator2_o;

  /* Update for UnitDelay: '<S184>/Unit Delay' */
  BuckyWagon_01_DWork.s184_UnitDelay_DSTATE = rtb_to65535_c;

  /* Update for UnitDelay: '<S184>/Unit Delay1' */
  BuckyWagon_01_DWork.s184_UnitDelay1_DSTATE = rtb_to65535_d;

  /* Update for UnitDelay: '<S183>/Unit Delay' */
  BuckyWagon_01_DWork.s183_UnitDelay_DSTATE = rtb_to65535_b;

  /* Update for UnitDelay: '<S183>/Unit Delay1' */
  BuckyWagon_01_DWork.s183_UnitDelay1_DSTATE = rtb_to65535_dx;

  /* end of Outputs for SubSystem: '<S9>/HV Controller' */

  /* Outputs for atomic SubSystem: '<S7>/A123 Battery Controller' */

  /* If: '<S23>/If' incorporates:
   *  ActionPort: '<S27>/Action Port'
   *  ActionPort: '<S28>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S23>/override_enable'
   *  SubSystem: '<S23>/NewValue'
   *  SubSystem: '<S23>/OldValue'
   */
  if ((hsc_bcm_enable_ovr_DataStore())) {
    /* Inport: '<S27>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S23>/new_value'
     */
    rtb_Merge_gc = ((uint8_T)(hsc_bcm_enable_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S27>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(0);
    }
  } else {
    /* Inport: '<S28>/In1' incorporates:
     *  Constant: '<S13>/Main Enable'
     */
    rtb_Merge_gc = 1U;

    /* S-Function (motohawk_sfun_code_cover): '<S28>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(1);
    }
  }

  /* Switch: '<S13>/Switch' incorporates:
   *  Constant: '<S13>/Emergency Power Off Comand'
   *  Constant: '<S13>/Emergency Power Off Comand1'
   *  S-Function (motohawk_sfun_fault_action): '<S13>/motohawk_fault_action'
   */
  if (GetFaultActionStatus(5)) {
    BuckyWagon_01_B.s13_Switch = 1U;
  } else {
    BuckyWagon_01_B.s13_Switch = 0U;
  }

  /* If: '<S24>/If' incorporates:
   *  ActionPort: '<S29>/Action Port'
   *  ActionPort: '<S30>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S24>/override_enable'
   *  SubSystem: '<S24>/NewValue'
   *  SubSystem: '<S24>/OldValue'
   */
  if ((hsc_bcm_epo_ovr_DataStore())) {
    /* Inport: '<S29>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S24>/new_value'
     */
    rtb_Merge_o0 = ((uint8_T)(hsc_bcm_epo_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S29>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(2);
    }
  } else {
    /* Inport: '<S30>/In1' */
    rtb_Merge_o0 = BuckyWagon_01_B.s13_Switch;

    /* S-Function (motohawk_sfun_code_cover): '<S30>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(3);
    }
  }

  /* S-Function Block: <S22>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s22_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_k = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S22>/Switch' incorporates:
   *  Constant: '<S22>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S22>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S22>/motohawk_delta_time'
   *  Sum: '<S22>/Sum'
   */
  if (BuckyWagon_01_B.s133_LogicalOperator) {
    rtb_Merge_k = rtb_motohawk_delta_time_k +
      A123_GroundFaultDetector_Enable_Timer_DataStore();
  } else {
    rtb_Merge_k = 0.0;
  }

  /* RelationalOperator: '<S21>/Compare' incorporates:
   *  Constant: '<S21>/Constant'
   */
  BuckyWagon_01_B.s21_Compare = (rtb_Merge_k >= 5.0);

  /* If: '<S25>/If' incorporates:
   *  ActionPort: '<S31>/Action Port'
   *  ActionPort: '<S32>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S25>/override_enable'
   *  SubSystem: '<S25>/NewValue'
   *  SubSystem: '<S25>/OldValue'
   */
  if ((hsc_bcm_leakage_enable_ovr_DataStore())) {
    /* Inport: '<S31>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S25>/new_value'
     */
    rtb_Merge_hg = ((uint8_T)(hsc_bcm_leakage_enable_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S31>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(4);
    }
  } else {
    /* Inport: '<S32>/In1' */
    rtb_Merge_hg = BuckyWagon_01_B.s21_Compare;

    /* S-Function (motohawk_sfun_code_cover): '<S32>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(5);
    }
  }

  /* If: '<S26>/If' incorporates:
   *  ActionPort: '<S33>/Action Port'
   *  ActionPort: '<S34>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S26>/override_enable'
   *  SubSystem: '<S26>/NewValue'
   *  SubSystem: '<S26>/OldValue'
   */
  if ((hsc_bcm_mainc_enable_ovr_DataStore())) {
    /* Inport: '<S33>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S26>/new_value'
     */
    rtb_Merge_nz = (hsc_bcm_mainc_enable_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S33>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(6);
    }
  } else {
    /* Inport: '<S34>/In1' */
    rtb_Merge_nz = BuckyWagon_01_B.s133_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S34>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(7);
    }
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S13>/Send CAN Messages3' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (50.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (49500U)
         )) {
      /* 0x400 */
      {
        extern boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        if (rtb_Merge_gc > 1U) {
          tmp0 = (uint8_T)(1U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_gc != 0);
        }

        if (rtb_Merge_o0 > 1U) {
          tmp1 = (uint8_T)(1U);
        } else {
          tmp1 = (uint8_T)(rtb_Merge_o0 != 0);
        }

        if (rtb_Merge_hg > 1U) {
          tmp2 = (uint8_T)(1U);
        } else {
          tmp2 = (uint8_T)(rtb_Merge_hg != 0);
        }

        tmp3 = (uint8_T)(rtb_Merge_nz != 0);
        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x00000001)) | ((((uint8_T *)(
          &tmp1))[0] & 0x00000001) << 1) | ((((uint8_T *)(&tmp2))[0] &
          0x00000001) << 3) | ((((uint8_T *)(&tmp3))[0] & 0x00000001) << 2) ;
        msg_data[1] = 0 ;
        msg_data[2] = 0 ;
        msg_data[3] = 0 ;
        CAN_2_Transmit(0, 0x400UL, 4, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* Saturate: '<S22>/Saturation' */
  rtb_Saturation_b = rt_SATURATE(rtb_Merge_k, 0.0, 86400.0);

  /* S-Function (motohawk_sfun_data_write): '<S22>/motohawk_data_write' */
  /* Write to Data Storage as scalar: A123_GroundFaultDetector_Enable_Timer */
  {
    A123_GroundFaultDetector_Enable_Timer_DataStore() = rtb_Saturation_b;
  }

  /* end of Outputs for SubSystem: '<S7>/A123 Battery Controller' */
  /* S-Function Block: <S12>/motohawk_ain Resource: Accel_Pedal_Pin */
  {
    extern NativeError_S Accel_Pedal_Pin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    Accel_Pedal_Pin_AnalogInput_Get(&BuckyWagon_01_B.s12_motohawk_ain, NULL);
  }

  /* DataTypeConversion: '<S252>/Data Type Conversion' */
  rtb_DataTypeConversion_i = BuckyWagon_01_B.s12_motohawk_ain;

  /* Fcn: '<S252>/ZeroFullCal' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S252>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S252>/motohawk_calibration5'
   */
  rtb_DataTypeConversion_b = ((real_T)rtb_DataTypeConversion_i -
    (Accel_Zero_DataStore())) / ((Accel_Full_DataStore()) -
    (Accel_Zero_DataStore()));

  /* Saturate: '<S252>/Saturation' */
  BuckyWagon_01_B.s252_Saturation = rt_SATURATE(rtb_DataTypeConversion_b, 0.0,
    1.0);

  /* Logic: '<S252>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S252>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S252>/motohawk_fault_status4'
   */
  rtb_BelowLoTarget = (IsFaultActive(1) || IsFaultActive(2));

  /* Logic: '<S252>/Logical Operator6' */
  rtb_Merge_na = !rtb_BelowLoTarget;

  /* Logic: '<S252>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S252>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S252>/motohawk_fault_status3'
   */
  rtb_LogicalOperator_bd = (IsFaultSuspected(1) || IsFaultSuspected(2));

  /* UnitDelay: '<S252>/Unit Delay1' */
  rtb_UnitDelay1_k = BuckyWagon_01_DWork.s252_UnitDelay1_DSTATE;

  /* If: '<S252>/If' incorporates:
   *  ActionPort: '<S369>/Action Port'
   *  ActionPort: '<S370>/Action Port'
   *  ActionPort: '<S371>/Action Port'
   *  Logic: '<S252>/Logical Operator5'
   *  SubSystem: '<S252>/If Action Subsystem'
   *  SubSystem: '<S252>/If Action Subsystem1'
   *  SubSystem: '<S252>/If Action Subsystem2'
   */
  if (rtb_Merge_na && rtb_LogicalOperator_bd) {
    BuckyWagon_01_IfActionSubsystem(rtb_UnitDelay1_k, &rtb_Merge_c);
  } else if (rtb_BelowLoTarget) {
    BuckyWagon_01_IfActionSubsystem((Accel_DfltValue_DataStore()), &rtb_Merge_c);
  } else {
    BuckyWagon_01_IfActionSubsystem(BuckyWagon_01_B.s252_Saturation,
      &rtb_Merge_c);
  }

  /* S-Function Block: <S368>/motohawk_delta_time */
  rtb_DataTypeConversion_b = 0.005;

  /* Product: '<S368>/Product' incorporates:
   *  MinMax: '<S368>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S368>/motohawk_calibration'
   */
  rtb_DataTypeConversion_b /= rt_MAXd_snf(rtb_DataTypeConversion_b,
    (Accel_FilterConst_DataStore()));

  /* Sum: '<S373>/Sum1' incorporates:
   *  Constant: '<S373>/Constant'
   *  Product: '<S373>/Product'
   *  Product: '<S373>/Product1'
   *  Sum: '<S373>/Sum'
   *  UnitDelay: '<S373>/Unit Delay'
   */
  rtb_Sum1 = (1.0 - rtb_DataTypeConversion_b) *
    BuckyWagon_01_DWork.s373_UnitDelay_DSTATE + rtb_Merge_c *
    rtb_DataTypeConversion_b;

  /* If: '<S372>/If' incorporates:
   *  ActionPort: '<S374>/Action Port'
   *  ActionPort: '<S375>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S372>/override_enable'
   *  SubSystem: '<S372>/NewValue'
   *  SubSystem: '<S372>/OldValue'
   */
  if ((Accel_Pedal_ovr_DataStore())) {
    /* Inport: '<S374>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S372>/new_value'
     */
    BuckyWagon_01_B.s372_Merge = (Accel_Pedal_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S374>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(133);
    }
  } else {
    /* Inport: '<S375>/In1' */
    BuckyWagon_01_B.s372_Merge = rtb_Sum1;

    /* S-Function (motohawk_sfun_code_cover): '<S375>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(134);
    }
  }

  /* S-Function Block: <S12>/motohawk_ain2 Resource: Reverse_Switch_Pin */
  {
    extern NativeError_S Reverse_Switch_Pin_AnalogInput_Get(uint16_T *adc,
      uint16_T *status);
    Reverse_Switch_Pin_AnalogInput_Get(&rtb_motohawk_ain2, NULL);
  }

  /* DataTypeConversion: '<S246>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S12>/motohawk_ain2'
   */
  BuckyWagon_01_B.s246_DataTypeConversion = (real_T)rtb_motohawk_ain2;

  /* RelationalOperator: '<S246>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S246>/SwitchPoint'
   */
  rtb_Merge_na = (BuckyWagon_01_B.s246_DataTypeConversion >
                  (Reverse_SwitchPt_DataStore()));

  /* If: '<S277>/If' incorporates:
   *  ActionPort: '<S278>/Action Port'
   *  ActionPort: '<S279>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S277>/override_enable'
   *  SubSystem: '<S277>/NewValue'
   *  SubSystem: '<S277>/OldValue'
   */
  if ((Reverse_Switch_ovr_DataStore())) {
    /* Inport: '<S278>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S277>/new_value'
     */
    BuckyWagon_01_B.s277_Merge = (Reverse_Switch_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S278>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(80);
    }
  } else {
    /* Inport: '<S279>/In1' incorporates:
     *  Logic: '<S246>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S246>/0 = No Inversion 1 = Inversion'
     */
    BuckyWagon_01_B.s277_Merge = rtb_Merge_na ^ (Reverse_Polarity_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S279>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(81);
    }
  }

  /* If: '<S393>/If' incorporates:
   *  ActionPort: '<S394>/Action Port'
   *  ActionPort: '<S395>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S393>/override_enable'
   *  SubSystem: '<S393>/NewValue'
   *  SubSystem: '<S393>/OldValue'
   */
  if ((Vehicle_Speed_ovr_DataStore())) {
    /* Inport: '<S394>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S393>/new_value'
     */
    BuckyWagon_01_B.s393_Merge = (Vehicle_Speed_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S394>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(139);
    }
  } else {
    /* Inport: '<S395>/In1' incorporates:
     *  Product: '<S257>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S257>/motohawk_calibration'
     */
    BuckyWagon_01_B.s393_Merge = BuckyWagon_01_B.s362_Merge *
      (OverallRatio_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S395>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(140);
    }
  }

  /* Outputs for atomic SubSystem: '<S9>/Reverse' */

  /* Abs: '<S134>/Abs' */
  BuckyWagon_01_B.s134_Abs = fabs(BuckyWagon_01_B.s393_Merge);

  /* Stateflow: '<S134>/Chart' */
  sf_previousEvent = _sfEvent_BuckyWagon_01_;
  _sfEvent_BuckyWagon_01_ = CALL_EVENT;

  /* Gateway: Foreground/Control Strategy/Reverse/Chart */
  BuckyWagon_01_c1_BuckyWagon_01();
  _sfEvent_BuckyWagon_01_ = sf_previousEvent;

  /* If: '<S192>/If' incorporates:
   *  ActionPort: '<S193>/Action Port'
   *  ActionPort: '<S194>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S192>/override_enable'
   *  SubSystem: '<S192>/NewValue'
   *  SubSystem: '<S192>/OldValue'
   */
  if ((In_Reverse_ovr_DataStore())) {
    /* Inport: '<S193>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S192>/new_value'
     */
    BuckyWagon_01_B.s192_Merge = (In_Reverse_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S193>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(66);
    }
  } else {
    /* Inport: '<S194>/In1' */
    BuckyWagon_01_B.s192_Merge = BuckyWagon_01_B.s191_inReverse;

    /* S-Function (motohawk_sfun_code_cover): '<S194>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(67);
    }
  }

  /* Switch: '<S134>/Switch' incorporates:
   *  Constant: '<S134>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration1'
   */
  if (BuckyWagon_01_B.s192_Merge != 0.0) {
    rtb_to65535_b = (ReverseDerate_DataStore());
  } else {
    rtb_to65535_b = 1.0;
  }

  /* end of Outputs for SubSystem: '<S9>/Reverse' */

  /* DataTypeConversion: '<S9>/Data Type Conversion1' */
  rtb_LogicalOperator12 = (BuckyWagon_01_B.s192_Merge != 0.0);

  /* DataTypeConversion: '<S9>/Data Type Conversion' */
  BuckyWagon_01_B.s9_InReverse = (real_T)rtb_LogicalOperator12;

  /* If: '<S336>/If' incorporates:
   *  ActionPort: '<S350>/Action Port'
   *  ActionPort: '<S351>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S336>/override_enable'
   *  SubSystem: '<S336>/NewValue'
   *  SubSystem: '<S336>/OldValue'
   */
  if ((OutputCurrent_ovr_DataStore())) {
    /* Inport: '<S350>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S336>/new_value'
     */
    rtb_Merge_k = (OutputCurrent_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S350>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(119);
    }
  } else {
    /* Inport: '<S351>/In1' */
    rtb_Merge_k = BuckyWagon_01_B.s250_OutputCurrent;

    /* S-Function (motohawk_sfun_code_cover): '<S351>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(120);
    }
  }

  /* RelationalOperator: '<S9>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S9>/motohawk_calibration'
   */
  rtb_BelowLoTarget = (rtb_Merge_k >= (Charger_Curr_DataStore()));

  /* Switch: '<S9>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S9>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S136>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S136>/motohawk_prelookup'
   */
  if (rtb_BelowLoTarget) {
    BuckyWagon_01_B.s9_FanDutyCycle = (Charging_Cooling_Speed_DataStore());
  } else {
    /* S-Function Block: <S136>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (RadiatorFanSpeed_InverterTempIn_DataStore()) =
        BuckyWagon_01_B.s251_Inverter_Temperature;
      (RadiatorFanSpeed_InverterTempIdx_DataStore()) = TablePrelookup_real_T
        (BuckyWagon_01_B.s251_Inverter_Temperature,
         (RadiatorFanSpeed_InverterTempIdxArr_DataStore()), 5,
         (RadiatorFanSpeed_InverterTempIdx_DataStore()));
      rtb_motohawk_prelookup_p = (RadiatorFanSpeed_InverterTempIdx_DataStore());
    }

    /* S-Function Block: <S136>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_m = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_p, (real_T *) ((RadiatorFanSpeedTbl_DataStore())),
         5);
      (RadiatorFanSpeed_DataStore()) = rtb_motohawk_interpolation_1d_m;
    }

    BuckyWagon_01_B.s9_FanDutyCycle = rtb_motohawk_interpolation_1d_m;
  }

  /* S-Function Block: <S12>/motohawk_ain1 Resource: Brake_Pedal_Pin */
  {
    extern NativeError_S Brake_Pedal_Pin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    Brake_Pedal_Pin_AnalogInput_Get(&BuckyWagon_01_B.s12_motohawk_ain1, NULL);
  }

  /* DataTypeConversion: '<S254>/Data Type Conversion' */
  rtb_DataTypeConversion_b = (real_T)BuckyWagon_01_B.s12_motohawk_ain1;

  /* Fcn: '<S254>/ZeroFullCal' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration5'
   */
  rtb_DataTypeConversion_d = (rtb_DataTypeConversion_b - (Brake_Zero_DataStore()))
    / ((Brake_Full_DataStore()) - (Brake_Zero_DataStore()));

  /* Saturate: '<S254>/Saturation' */
  BuckyWagon_01_B.s254_Saturation = rt_SATURATE(rtb_DataTypeConversion_d, 0.0,
    1.0);

  /* Logic: '<S254>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S254>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S254>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_fj = (IsFaultActive(5) || IsFaultActive(6));

  /* Logic: '<S254>/Logical Operator6' */
  rtb_Merge_na = !rtb_RelationalOperator_fj;

  /* Logic: '<S254>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S254>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S254>/motohawk_fault_status3'
   */
  rtb_LogicalOperator_bd = (IsFaultSuspected(5) || IsFaultSuspected(6));

  /* UnitDelay: '<S254>/Unit Delay1' */
  rtb_UnitDelay1_b = BuckyWagon_01_DWork.s254_UnitDelay1_DSTATE;

  /* If: '<S254>/If' incorporates:
   *  ActionPort: '<S385>/Action Port'
   *  ActionPort: '<S386>/Action Port'
   *  ActionPort: '<S387>/Action Port'
   *  Logic: '<S254>/Logical Operator5'
   *  SubSystem: '<S254>/If Action Subsystem'
   *  SubSystem: '<S254>/If Action Subsystem1'
   *  SubSystem: '<S254>/If Action Subsystem2'
   */
  if (rtb_Merge_na && rtb_LogicalOperator_bd) {
    BuckyWagon_01_IfActionSubsystem(rtb_UnitDelay1_b, &rtb_Merge_e);
  } else if (rtb_RelationalOperator_fj) {
    BuckyWagon_01_IfActionSubsystem((Brake_DfltValue_DataStore()), &rtb_Merge_e);
  } else {
    BuckyWagon_01_IfActionSubsystem(BuckyWagon_01_B.s254_Saturation,
      &rtb_Merge_e);
  }

  /* S-Function Block: <S384>/motohawk_delta_time */
  rtb_DataTypeConversion_d = 0.005;

  /* Product: '<S384>/Product' incorporates:
   *  MinMax: '<S384>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S384>/motohawk_calibration'
   */
  rtb_DataTypeConversion_d /= rt_MAXd_snf(rtb_DataTypeConversion_d,
    (Brake_FilterConst_DataStore()));

  /* Sum: '<S389>/Sum1' incorporates:
   *  Constant: '<S389>/Constant'
   *  Product: '<S389>/Product'
   *  Product: '<S389>/Product1'
   *  Sum: '<S389>/Sum'
   *  UnitDelay: '<S389>/Unit Delay'
   */
  rtb_to65535_dx = (1.0 - rtb_DataTypeConversion_d) *
    BuckyWagon_01_DWork.s389_UnitDelay_DSTATE + rtb_Merge_e *
    rtb_DataTypeConversion_d;

  /* If: '<S388>/If' incorporates:
   *  ActionPort: '<S390>/Action Port'
   *  ActionPort: '<S391>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S388>/override_enable'
   *  SubSystem: '<S388>/NewValue'
   *  SubSystem: '<S388>/OldValue'
   */
  if ((Brake_Pedal_ovr_DataStore())) {
    /* Inport: '<S390>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S388>/new_value'
     */
    BuckyWagon_01_B.s388_Merge = (Brake_Pedal_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S390>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(137);
    }
  } else {
    /* Inport: '<S391>/In1' */
    BuckyWagon_01_B.s388_Merge = rtb_to65535_dx;

    /* S-Function (motohawk_sfun_code_cover): '<S391>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(138);
    }
  }

  /* Outputs for atomic SubSystem: '<S7>/Analog Out' */

  /* S-Function (motohawk_sfun_dout): '<S14>/motohawk_dout1' */
  /* S-Function Block: ReverseOut_Pin */
  {
  }

  /* If: '<S41>/If' incorporates:
   *  ActionPort: '<S42>/Action Port'
   *  ActionPort: '<S43>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S41>/override_enable'
   *  SubSystem: '<S41>/NewValue'
   *  SubSystem: '<S41>/OldValue'
   */
  if ((Flash_Reverse_Lights_Ovr_ovr_DataStore())) {
    /* Inport: '<S42>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S41>/new_value'
     */
    BuckyWagon_01_B.s41_Merge = (Flash_Reverse_Lights_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S42>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(8);
    }
  } else {
    /* Inport: '<S43>/In1' incorporates:
     *  Constant: '<S35>/Constant1'
     */
    BuckyWagon_01_B.s41_Merge = 0.0;

    /* S-Function (motohawk_sfun_code_cover): '<S43>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(9);
    }
  }

  /* Stateflow: '<S35>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration3'
   */
  /* Gateway: Foreground/Actuators/Analog Out/Cruise Control Indicator/Chart */
  /* During: Foreground/Actuators/Analog Out/Cruise Control Indicator/Chart */
  if (BuckyWagon_01_DWork.s40_is_active_c6_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Actuators/Analog Out/Cruise Control Indicator/Chart */
    BuckyWagon_01_DWork.s40_is_active_c6_BuckyWagon_01 = 1U;

    /* Transition: '<S40>:6' */
    /* Entry 'Off': '<S40>:1' */
    BuckyWagon_01_DWork.s40_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_Off_k;
    BuckyWagon_01_B.s40_light = FALSE;
  } else {
    switch (BuckyWagon_01_DWork.s40_is_c6_BuckyWagon_01) {
     case BuckyWagon_01_IN_FlashOne:
      /* During 'FlashOne': '<S40>:2' */
      if (BuckyWagon_01_DWork.s40_timer >= ((uint16_T)(cCInd_OnTime_DataStore())))
      {
        /* Transition: '<S40>:8' */
        /* Exit 'FlashOne': '<S40>:2' */
        /* Entry 'OffOne': '<S40>:4' */
        BuckyWagon_01_DWork.s40_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_OffOne;
        BuckyWagon_01_B.s40_light = FALSE;
        BuckyWagon_01_DWork.s40_timer = 0U;
      } else {
        BuckyWagon_01_DWork.s40_timer = (uint16_T)(BuckyWagon_01_DWork.s40_timer
          + 1);
      }
      break;

     case BuckyWagon_01_IN_FlashTwo:
      /* During 'FlashTwo': '<S40>:3' */
      if (BuckyWagon_01_DWork.s40_timer >= ((uint16_T)(cCInd_OnTime_DataStore())))
      {
        /* Transition: '<S40>:10' */
        /* Exit 'FlashTwo': '<S40>:3' */
        /* Entry 'OffTwo': '<S40>:5' */
        BuckyWagon_01_DWork.s40_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_OffTwo;
        BuckyWagon_01_B.s40_light = FALSE;
        BuckyWagon_01_DWork.s40_timer = 0U;
      } else {
        BuckyWagon_01_DWork.s40_timer = (uint16_T)(BuckyWagon_01_DWork.s40_timer
          + 1);
      }
      break;

     case BuckyWagon_01_IN_Off_k:
      /* During 'Off': '<S40>:1' */
      if (BuckyWagon_01_B.s41_Merge != 0.0) {
        /* Transition: '<S40>:7' */
        /* Exit 'Off': '<S40>:1' */
        /* Entry 'FlashOne': '<S40>:2' */
        BuckyWagon_01_DWork.s40_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_FlashOne;
        BuckyWagon_01_B.s40_light = TRUE;
        BuckyWagon_01_DWork.s40_timer = 0U;
      }
      break;

     case BuckyWagon_01_IN_OffOne:
      /* During 'OffOne': '<S40>:4' */
      if (BuckyWagon_01_DWork.s40_timer >= ((uint16_T)(cCInd_ShortTime_DataStore
            ()))) {
        /* Transition: '<S40>:9' */
        /* Exit 'OffOne': '<S40>:4' */
        /* Entry 'FlashTwo': '<S40>:3' */
        BuckyWagon_01_DWork.s40_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_FlashTwo;
        BuckyWagon_01_B.s40_light = TRUE;
        BuckyWagon_01_DWork.s40_timer = 0U;
      } else if (!(BuckyWagon_01_B.s41_Merge != 0.0)) {
        /* Transition: '<S40>:11' */
        /* Transition: '<S40>:14' */
        /* Transition: '<S40>:15' */
        /* Exit 'OffOne': '<S40>:4' */
        /* Entry 'Off': '<S40>:1' */
        BuckyWagon_01_DWork.s40_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_Off_k;
        BuckyWagon_01_B.s40_light = FALSE;
      } else {
        BuckyWagon_01_DWork.s40_timer = (uint16_T)(BuckyWagon_01_DWork.s40_timer
          + 1);
      }
      break;

     case BuckyWagon_01_IN_OffTwo:
      /* During 'OffTwo': '<S40>:5' */
      if (BuckyWagon_01_DWork.s40_timer >= ((uint16_T)(cCInd_LongOff_DataStore())))
      {
        /* Transition: '<S40>:17' */
        /* Transition: '<S40>:18' */
        /* Transition: '<S40>:16' */
        /* Exit 'OffTwo': '<S40>:5' */
        /* Entry 'FlashOne': '<S40>:2' */
        BuckyWagon_01_DWork.s40_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_FlashOne;
        BuckyWagon_01_B.s40_light = TRUE;
        BuckyWagon_01_DWork.s40_timer = 0U;
      } else if (!(BuckyWagon_01_B.s41_Merge != 0.0)) {
        /* Transition: '<S40>:12' */
        /* Transition: '<S40>:13' */
        /* Transition: '<S40>:14' */
        /* Transition: '<S40>:15' */
        /* Exit 'OffTwo': '<S40>:5' */
        /* Entry 'Off': '<S40>:1' */
        BuckyWagon_01_DWork.s40_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_Off_k;
        BuckyWagon_01_B.s40_light = FALSE;
      } else {
        BuckyWagon_01_DWork.s40_timer = (uint16_T)(BuckyWagon_01_DWork.s40_timer
          + 1);
      }
      break;

     default:
      /* Transition: '<S40>:6' */
      /* Entry 'Off': '<S40>:1' */
      BuckyWagon_01_DWork.s40_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_Off_k;
      BuckyWagon_01_B.s40_light = FALSE;
      break;
    }
  }

  /* Logic: '<S39>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S39>/motohawk_calibration1'
   */
  rtb_Merge_na = ((((uint8_T)(RevIndType_DataStore())) != 0) &&
                  (BuckyWagon_01_B.s9_InReverse != 0.0));

  /* Logic: '<S39>/Logical Operator3' incorporates:
   *  Logic: '<S39>/Logical Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S39>/motohawk_calibration1'
   */
  rtb_LogicalOperator_bd = ((BuckyWagon_01_B.s9_InReverse != 0.0) &&
    (!(((uint8_T)(RevIndType_DataStore())) != 0)));

  /* Outputs for enable SubSystem: '<S39>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S54>/Enable'
   */
  if (rtb_LogicalOperator_bd) {
    if (!((int32_T)BuckyWagon_01_DWork.s39_EnabledSubsystem_MODE != 0)) {
      /* InitializeConditions for UnitDelay: '<S54>/Unit Delay' */
      BuckyWagon_01_DWork.s54_UnitDelay_DSTATE = 0;
      BuckyWagon_01_DWork.s39_EnabledSubsystem_MODE = TRUE;
    }

    /* Switch: '<S54>/Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S39>/motohawk_calibration2'
     *  UnitDelay: '<S54>/Unit Delay'
     */
    if (BuckyWagon_01_DWork.s54_UnitDelay_DSTATE > 0) {
      rtb_Switch_d = BuckyWagon_01_DWork.s54_UnitDelay_DSTATE;
    } else {
      rtb_Switch_d = ((int16_T)(ReverseIndFlash_Period_DataStore()));
    }

    /* Sum: '<S54>/Sum' incorporates:
     *  Constant: '<S54>/Constant'
     */
    rtb_Switch_d--;

    /* RelationalOperator: '<S54>/Relational Operator' incorporates:
     *  Gain: '<S54>/Gain'
     *  S-Function (motohawk_sfun_calibration): '<S39>/motohawk_calibration2'
     */
    BuckyWagon_01_B.s54_RelationalOperator = ((((int16_T)
      (ReverseIndFlash_Period_DataStore())) >> 1) <= rtb_Switch_d);

    /* Update for UnitDelay: '<S54>/Unit Delay' */
    BuckyWagon_01_DWork.s54_UnitDelay_DSTATE = rtb_Switch_d;
  } else {
    if ((int32_T)BuckyWagon_01_DWork.s39_EnabledSubsystem_MODE) {
      BuckyWagon_01_DWork.s39_EnabledSubsystem_MODE = FALSE;
    }
  }

  /* end of Outputs for SubSystem: '<S39>/Enabled Subsystem' */

  /* If: '<S44>/If' incorporates:
   *  ActionPort: '<S45>/Action Port'
   *  ActionPort: '<S46>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S44>/override_enable'
   *  SubSystem: '<S44>/NewValue'
   *  SubSystem: '<S44>/OldValue'
   */
  if ((RevOut__ovr_DataStore())) {
    /* Inport: '<S45>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S44>/new_value'
     */
    rtb_Merge_na = (RevOut__new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S45>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1/Override in Engineering Units/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(10);
    }
  } else {
    /* Inport: '<S46>/In1' incorporates:
     *  Logic: '<S14>/Logical Operator3'
     *  Logic: '<S39>/Logical Operator1'
     *  Logic: '<S39>/Logical Operator2'
     */
    rtb_Merge_na = (BuckyWagon_01_B.s40_light || (rtb_Merge_na ||
      (rtb_LogicalOperator_bd && BuckyWagon_01_B.s54_RelationalOperator)));

    /* S-Function (motohawk_sfun_code_cover): '<S46>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1/Override in Engineering Units/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(11);
    }
  }

  /* Logic: '<S36>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S36>/0 = No Inversion 1 = Inversion'
   */
  BuckyWagon_01_B.s36_LogicalOperator = rtb_Merge_na ^
    (RevOut__Polarity_DataStore());

  /* If: '<S51>/If' incorporates:
   *  ActionPort: '<S52>/Action Port'
   *  ActionPort: '<S53>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S51>/override_enable'
   *  SubSystem: '<S51>/NewValue'
   *  SubSystem: '<S51>/OldValue'
   */
  if ((FanOut_ovr_DataStore())) {
    /* Inport: '<S52>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S51>/new_value'
     */
    rtb_Merge_k = (FanOut_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S52>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(14);
    }
  } else {
    /* Inport: '<S53>/In1' incorporates:
     *  Saturate: '<S14>/Saturation'
     */
    rtb_Merge_k = rt_SATURATE(BuckyWagon_01_B.s9_FanDutyCycle, -100.0, 100.0);

    /* S-Function (motohawk_sfun_code_cover): '<S53>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(15);
    }
  }

  /* Product: '<S38>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S38>/motohawk_calibration'
   */
  rtb_Merge_k *= (FanOut_Gain_DataStore());

  /* Sum: '<S38>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S38>/motohawk_calibration1'
   */
  rtb_Merge_k += (FanOut_Offset_DataStore());

  /* MinMax: '<S50>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S38>/motohawk_calibration2'
   */
  rtb_Merge_k = rt_MAXd_snf(rtb_Merge_k, (FanOut_MinLimit_DataStore()));

  /* MinMax: '<S50>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S38>/motohawk_calibration3'
   */
  BuckyWagon_01_B.s50_MinMax1 = rt_MINd_snf(rtb_Merge_k,
    (FanOut_MaxLimit_DataStore()));

  /* DataTypeConversion: '<S38>/Data Type Conversion3' incorporates:
   *  Gain: '<S38>/Convert to integer 14-bit PWM resolution'
   */
  rtb_Merge_k = 40.95 * BuckyWagon_01_B.s50_MinMax1;
  if (rtb_Merge_k < 32768.0) {
    if (rtb_Merge_k >= -32768.0) {
      rtb_DataTypeConversion3 = (int16_T)rtb_Merge_k;
    } else {
      rtb_DataTypeConversion3 = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3 = MAX_int16_T;
  }

  /* DataTypeConversion: '<S38>/Data Type Conversion2' incorporates:
   *  Gain: '<S38>/Convert to integer 0.01Hz resolution'
   *  S-Function (motohawk_sfun_calibration): '<S38>/motohawk_calibration4'
   */
  rtb_Merge_k = 100.0 * (FanOut_Frequency_DataStore());
  if (rtb_Merge_k < 4.294967296E+009) {
    if (rtb_Merge_k >= 0.0) {
      rtb_DataTypeConversion2_h = (uint32_T)rtb_Merge_k;
    } else {
      rtb_DataTypeConversion2_h = 0U;
    }
  } else {
    rtb_DataTypeConversion2_h = MAX_uint32_T;
  }

  /* S-Function (motohawk_sfun_dout): '<S14>/motohawk_dout2' */
  /* S-Function Block: DCDCInhibit_Out_Pin */
  {
  }

  /* If: '<S47>/If' incorporates:
   *  ActionPort: '<S48>/Action Port'
   *  ActionPort: '<S49>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S47>/override_enable'
   *  SubSystem: '<S47>/NewValue'
   *  SubSystem: '<S47>/OldValue'
   */
  if ((InhibitDCDC_Out__ovr_DataStore())) {
    /* Inport: '<S48>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S47>/new_value'
     */
    rtb_Merge_na = (InhibitDCDC_Out__new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S48>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2/Override in Engineering Units/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(12);
    }
  } else {
    /* Inport: '<S49>/In1' incorporates:
     *  Logic: '<S14>/Logical Operator'
     */
    rtb_Merge_na = !rtb_LogicalOperator5_k;

    /* S-Function (motohawk_sfun_code_cover): '<S49>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2/Override in Engineering Units/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(13);
    }
  }

  /* Logic: '<S37>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S37>/0 = No Inversion 1 = Inversion'
   */
  BuckyWagon_01_B.s37_LogicalOperator = rtb_Merge_na ^
    (InhibitDCDC_Out__Polarity_DataStore());

  /* S-Function (motohawk_sfun_dout): '<S14>/motohawk_dout3' */
  /* S-Function Block: Brake_Light_Out */
  {
  }

  /* RelationalOperator: '<S14>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S14>/motohawk_calibration1'
   */
  rtb_Merge_na = (BuckyWagon_01_B.s388_Merge >
                  (Brake_light_On_Setpoint_DataStore()));

  /* Logic: '<S14>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S14>/motohawk_calibration2'
   */
  rtb_LogicalOperator1_p = (rtb_Merge_na && (Enable_Brake_Light_Out_DataStore()));

  /* Update for S-Function (motohawk_sfun_dout): '<S14>/motohawk_dout1' */

  /* S-Function Block: ReverseOut_Pin */
  {
    if (((init_resource_ReverseOut_Pin_DataStore()) < 0) &&
        ((ReverseOut_Pin_DataStore()) >= 0)) {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState = (BuckyWagon_01_B.s36_LogicalOperator) ?
        RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      sErrorResult = CreateResource((E_ModuleResource)
        ((ReverseOut_Pin_DataStore())), &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_ReverseOut_Pin_DataStore()) = (ReverseOut_Pin_DataStore());
      } else {
        (init_resource_ReverseOut_Pin_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_ReverseOut_Pin;
        if (SUCCESS(sErrorResult))
          dout_create_ReverseOut_Pin = 0;
        else
          dout_create_ReverseOut_Pin = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_ReverseOut_Pin_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource)
                          ((init_resource_ReverseOut_Pin_DataStore())),
                          (BuckyWagon_01_B.s36_LogicalOperator) ? RES_ON :
                          RES_OFF);
    }
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S14>/motohawk_pwm2' */

  /* S-Function Block: Fan_Pin_PWMOutput */
  Fan_Pin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_h,
    rtb_DataTypeConversion3, 0, 1);

  /* Update for S-Function (motohawk_sfun_dout): '<S14>/motohawk_dout2' */

  /* S-Function Block: DCDCInhibit_Out_Pin */
  {
    if (((init_resource_DCDCInhibit_Out_Pin_DataStore()) < 0) &&
        ((DCDCInhibit_Out_Pin_DataStore()) >= 0)) {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState = (BuckyWagon_01_B.s37_LogicalOperator) ?
        RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      sErrorResult = CreateResource((E_ModuleResource)
        ((DCDCInhibit_Out_Pin_DataStore())), &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_DCDCInhibit_Out_Pin_DataStore()) =
          (DCDCInhibit_Out_Pin_DataStore());
      } else {
        (init_resource_DCDCInhibit_Out_Pin_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_DCDCInhibit_Out_Pin;
        if (SUCCESS(sErrorResult))
          dout_create_DCDCInhibit_Out_Pin = 0;
        else
          dout_create_DCDCInhibit_Out_Pin = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_DCDCInhibit_Out_Pin_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource)
                          ((init_resource_DCDCInhibit_Out_Pin_DataStore())),
                          (BuckyWagon_01_B.s37_LogicalOperator) ? RES_ON :
                          RES_OFF);
    }
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S14>/motohawk_dout3' */

  /* S-Function Block: Brake_Light_Out */
  {
    if (((init_resource_Brake_Light_Out_DataStore()) < 0) &&
        ((Brake_Light_Out_DataStore()) >= 0)) {
      S_DiscreteOutCreateAttributes CreateInfo;
      NativeError_S sErrorResult;
      CreateInfo.DynamicObj.eState = (rtb_LogicalOperator1_p) ? RES_ON : RES_OFF;
      CreateInfo.DynamicObj.eResourceCondition = RES_ENABLED;
      CreateInfo.DynamicObj.uValidAttributesMask = USE_DISCRETE_CONDITION |
        USE_DISCRETE_STATE;
      CreateInfo.uValidAttributesMask = USE_DISCRETE_DYNAMIC_ON_CREATE;
      sErrorResult = CreateResource((E_ModuleResource)
        ((Brake_Light_Out_DataStore())), &CreateInfo, BEHAVIOUR_DISCRETE_OUT);
      if (SUCCESS(sErrorResult)) {
        (init_resource_Brake_Light_Out_DataStore()) = (Brake_Light_Out_DataStore
          ());
      } else {
        (init_resource_Brake_Light_Out_DataStore()) = -1;
        LogNativeError(sErrorResult);
      }

      {
        extern uint8_T dout_create_Brake_Light_Out;
        if (SUCCESS(sErrorResult))
          dout_create_Brake_Light_Out = 0;
        else
          dout_create_Brake_Light_Out = (uint8_T) GetErrorCode(sErrorResult);
      }
    } else if ((init_resource_Brake_Light_Out_DataStore()) >= 0) {
      SetDiscreteOutState((E_ModuleResource)
                          ((init_resource_Brake_Light_Out_DataStore())),
                          (rtb_LogicalOperator1_p) ? RES_ON : RES_OFF);
    }
  }

  /* end of Outputs for SubSystem: '<S7>/Analog Out' */

  /* S-Function Block: <S12>/motohawk_din Resource: EStop_Switch_Pin */
  {
    extern NativeError_S EStop_Switch_Pin_DigitalInput_Get(boolean_T *out,
      uint16_T *status);
    EStop_Switch_Pin_DigitalInput_Get(&rtb_E_stop_switch, NULL);
  }

  /* If: '<S258>/If' incorporates:
   *  ActionPort: '<S396>/Action Port'
   *  ActionPort: '<S397>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S258>/override_enable'
   *  SubSystem: '<S258>/NewValue'
   *  SubSystem: '<S258>/OldValue'
   */
  if ((Estop_switch_ovr_ovr_DataStore())) {
    /* Inport: '<S396>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S258>/new_value'
     */
    BuckyWagon_01_B.s258_Merge = (Estop_switch_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S396>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(141);
    }
  } else {
    /* Inport: '<S397>/In1' incorporates:
     *  Logic: '<S12>/Logical Operator4'
     *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration'
     *  S-Function (motohawk_sfun_din): '<S12>/motohawk_din'
     */
    BuckyWagon_01_B.s258_Merge = rtb_E_stop_switch ^ (E_Stop_Invert_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S397>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(142);
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S247>/Read CAN Message5' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_2932p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_2932p0001,
      &messageObj);
    BuckyWagon_01_B.s247_DataAvailable = msg_valid;
    if ((BuckyWagon_01_B.s247_AgeCount + 1) > BuckyWagon_01_B.s247_AgeCount)
      BuckyWagon_01_B.s247_AgeCount++;
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
      uint8_T tmp11 = 0;
      uint8_T tmp12 = 0;
      uint8_T tmp13 = 0;
      uint8_T tmp14 = 0;
      uint8_T tmp15 = 0;
      uint8_T tmp16 = 0;
      uint8_T tmp17 = 0;
      uint8_T tmp18 = 0;
      uint8_T tmp19 = 0;
      uint8_T tmp20 = 0;
      uint8_T tmp21 = 0;
      uint8_T tmp22 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[0] & 0x00000040) >> 6) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[0] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[0] & 0x00000010) >> 4) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[0] & 0x00000008) >> 3) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[0] & 0x00000004) >> 2) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[0] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp7))[0] = ((messageObj.u1DataArr[0] & 0x00000001)) ;
      ((uint8_T *)(&tmp8))[0] = ((messageObj.u1DataArr[1] & 0x000000C0) >> 6) ;
      ((uint8_T *)(&tmp9))[0] = ((messageObj.u1DataArr[1] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp10))[0] = ((messageObj.u1DataArr[1] & 0x00000010) >> 4) ;
      ((uint8_T *)(&tmp11))[0] = ((messageObj.u1DataArr[1] & 0x00000008) >> 3) ;
      ((uint8_T *)(&tmp12))[0] = ((messageObj.u1DataArr[1] & 0x00000004) >> 2) ;
      ((uint8_T *)(&tmp13))[0] = ((messageObj.u1DataArr[1] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp14))[0] = ((messageObj.u1DataArr[1] & 0x00000001)) ;
      ((uint8_T *)(&tmp15))[0] = ((messageObj.u1DataArr[2] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp16))[0] = ((messageObj.u1DataArr[2] & 0x00000040) >> 6) ;
      ((uint8_T *)(&tmp17))[0] = ((messageObj.u1DataArr[2] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp18))[0] = ((messageObj.u1DataArr[2] & 0x00000010) >> 4) ;
      ((uint8_T *)(&tmp19))[0] = ((messageObj.u1DataArr[2] & 0x00000008) >> 3) ;
      ((uint8_T *)(&tmp20))[0] = ((messageObj.u1DataArr[2] & 0x00000004) >> 2) ;
      ((uint8_T *)(&tmp21))[0] = ((messageObj.u1DataArr[2] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp22))[0] = ((messageObj.u1DataArr[2] & 0x00000001)) ;
      BuckyWagon_01_B.s247_NLG5PwrEn = (boolean_T) tmp0;
      BuckyWagon_01_B.s247_NLG5GenErrLtch = (boolean_T) tmp1;
      BuckyWagon_01_B.s247_NLG5GenLimWrng = (real_T) tmp2;
      BuckyWagon_01_B.s247_NLG5FanActv = (real_T) tmp3;
      BuckyWagon_01_B.s247_EuropeMains = (real_T) tmp4;
      BuckyWagon_01_B.s247_USAMainsL1 = (real_T) tmp5;
      BuckyWagon_01_B.s247_USAMainsL2 = (real_T) tmp6;
      BuckyWagon_01_B.s247_CntrlPltDet = (real_T) tmp7;
      BuckyWagon_01_B.s247_BypassDet = (real_T) tmp8;
      BuckyWagon_01_B.s247_LimByOutVlt = (real_T) tmp9;
      BuckyWagon_01_B.s247_LimByOutCrnt = (real_T) tmp10;
      BuckyWagon_01_B.s247_LimByMainCrnt = (real_T) tmp11;
      BuckyWagon_01_B.s247_LimByPwrInd = (real_T) tmp12;
      BuckyWagon_01_B.s247_LimByCntrlPlt = (real_T) tmp13;
      BuckyWagon_01_B.s247_LimByNLG5MaxPwr = (real_T) tmp14;
      BuckyWagon_01_B.s247_LimByNLG5MaxMainsCrnt = (real_T) tmp15;
      BuckyWagon_01_B.s247_LimByNLG5MaxOutCrnt = (real_T) tmp16;
      BuckyWagon_01_B.s247_LimByNLG5MaxOutVlt = (real_T) tmp17;
      BuckyWagon_01_B.s247_LimByTempCap = (real_T) tmp18;
      BuckyWagon_01_B.s247_LimByTempPwrStg = (real_T) tmp19;
      BuckyWagon_01_B.s247_LimByTempDiode = (real_T) tmp20;
      BuckyWagon_01_B.s247_LimByTempXfrmr = (real_T) tmp21;
      BuckyWagon_01_B.s247_LimByBattTemp = (real_T) tmp22;
      BuckyWagon_01_B.s247_AgeCount = 0;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S247>/Read CAN Message6' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_2933p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_2933p0001,
      &messageObj);
    BuckyWagon_01_B.s247_DataAvailable_c = msg_valid;
    if ((BuckyWagon_01_B.s247_AgeCount_p + 1) > BuckyWagon_01_B.s247_AgeCount_p)
      BuckyWagon_01_B.s247_AgeCount_p++;
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint16_T tmp3 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp2))[1] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[6])) ;
      ((uint8_T *)(&tmp3))[1] = ((messageObj.u1DataArr[7])) ;
      BuckyWagon_01_B.s247_MainsActCrnt = ((real_T) tmp0) / ((real_T) 100);
      BuckyWagon_01_B.s247_MainsActVlt = ((real_T) tmp1) / ((real_T) 10);
      BuckyWagon_01_B.s247_OutptActVlt = ((real_T) tmp2) / ((real_T) 10);
      BuckyWagon_01_B.s247_OutptActCrnt = ((real_T) tmp3) / ((real_T) 100);
      BuckyWagon_01_B.s247_AgeCount_p = 0;
    }
  }

  /* RelationalOperator: '<S285>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration'
   */
  rtb_RelationalOperator_m = (BuckyWagon_01_B.s247_MainsActVlt >
    (PluggedInMainsThes_DataStore()));

  /* Stateflow: '<S285>/Chart' */
  BuckyWagon_01_Chart((PluggedInHistTime_DataStore()), rtb_RelationalOperator_m,
                      &BuckyWagon_01_B.s285_sf_Chart,
                      &BuckyWagon_01_DWork.s285_sf_Chart);

  /* If: '<S286>/If' incorporates:
   *  ActionPort: '<S288>/Action Port'
   *  ActionPort: '<S289>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S286>/override_enable'
   *  SubSystem: '<S286>/NewValue'
   *  SubSystem: '<S286>/OldValue'
   */
  if ((pluggedIn_ovr_DataStore())) {
    /* Inport: '<S288>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S286>/new_value'
     */
    BuckyWagon_01_B.s286_Merge = (pluggedIn_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S288>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Brusa Charger/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(83);
    }
  } else {
    /* Inport: '<S289>/In1' */
    BuckyWagon_01_B.s286_Merge = BuckyWagon_01_B.s285_sf_Chart.s287_pluggedIn;

    /* S-Function (motohawk_sfun_code_cover): '<S289>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Brusa Charger/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(84);
    }
  }

  /* Outputs for atomic SubSystem: '<S9>/Brusa Charger (No Longer Used)' */

  /* If: '<S140>/If' incorporates:
   *  ActionPort: '<S141>/Action Port'
   *  ActionPort: '<S142>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S140>/override_enable'
   *  SubSystem: '<S140>/NewValue'
   *  SubSystem: '<S140>/OldValue'
   */
  if ((startCharge_ovr_DataStore())) {
    /* Inport: '<S141>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S140>/new_value'
     */
    BuckyWagon_01_B.s140_Merge = (startCharge_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S141>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Brusa Charger (No Longer Used)/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(56);
    }
  } else {
    /* Inport: '<S142>/In1' incorporates:
     *  Logic: '<S128>/Logical Operator1'
     *  Logic: '<S128>/Logical Operator2'
     *  Logic: '<S128>/Logical Operator3'
     *  Logic: '<S128>/Logical Operator4'
     *  S-Function (motohawk_sfun_fault_action): '<S128>/motohawk_fault_action'
     */
    BuckyWagon_01_B.s140_Merge = ((!GetFaultActionStatus(3)) &&
      BuckyWagon_01_B.s286_Merge && (!BuckyWagon_01_B.s258_Merge) &&
      BuckyWagon_01_B.s247_NLG5PwrEn && (!BuckyWagon_01_B.s247_NLG5GenErrLtch));

    /* S-Function (motohawk_sfun_code_cover): '<S142>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Brusa Charger (No Longer Used)/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(57);
    }
  }

  /* Sum: '<S139>/Sum1' incorporates:
   *  Constant: '<S139>/Constant'
   *  Product: '<S139>/Product'
   *  Product: '<S139>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration'
   *  Sum: '<S139>/Sum'
   *  UnitDelay: '<S139>/Unit Delay'
   */
  BuckyWagon_01_B.s139_Sum1 = (1.0 - (IFilterAlpha_DataStore())) *
    BuckyWagon_01_DWork.s139_UnitDelay_DSTATE +
    BuckyWagon_01_B.s247_OutptActCrnt * (IFilterAlpha_DataStore());

  /* Stateflow: '<S128>/Charging State Machine' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration7'
   */
  /* Gateway: Foreground/Control Strategy/Brusa Charger (No Longer Used)/Charging State Machine */
  /* During: Foreground/Control Strategy/Brusa Charger (No Longer Used)/Charging State Machine */
  if (BuckyWagon_01_DWork.s138_is_active_c8_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Control Strategy/Brusa Charger (No Longer Used)/Charging State Machine */
    BuckyWagon_01_DWork.s138_is_active_c8_BuckyWagon_01 = 1U;

    /* Transition: '<S138>:6' */
    /* Entry 'Wait': '<S138>:1' */
    BuckyWagon_01_DWork.s138_is_c8_BuckyWagon_01 = BuckyWagon_01_IN_Wait;
    BuckyWagon_01_B.s138_currOut = 0.0;
    BuckyWagon_01_B.s138_voltOut = 0.0;
    BuckyWagon_01_B.s138_state = 0U;
  } else {
    switch (BuckyWagon_01_DWork.s138_is_c8_BuckyWagon_01) {
     case BuckyWagon_01_IN_Complete:
      /* During 'Complete': '<S138>:2' */
      if (BuckyWagon_01_B.s247_OutptActVlt < (restartChargeVolt_DataStore())) {
        /* Transition: '<S138>:17' */
        /* Transition: '<S138>:15' */
        /* Transition: '<S138>:16' */
        /* Exit 'Complete': '<S138>:2' */
        /* Entry 'Wait': '<S138>:1' */
        BuckyWagon_01_DWork.s138_is_c8_BuckyWagon_01 = BuckyWagon_01_IN_Wait;
        BuckyWagon_01_B.s138_currOut = 0.0;
        BuckyWagon_01_B.s138_voltOut = 0.0;
        BuckyWagon_01_B.s138_state = 0U;
      }
      break;

     case BuckyWagon_01_IN_ConstantVoltageCharge:
      /* During 'ConstantVoltageCharge': '<S138>:3' */
      if (!BuckyWagon_01_B.s140_Merge) {
        /* Transition: '<S138>:13' */
        /* Transition: '<S138>:16' */
        /* Exit 'ConstantVoltageCharge': '<S138>:3' */
        /* Entry 'Wait': '<S138>:1' */
        BuckyWagon_01_DWork.s138_is_c8_BuckyWagon_01 = BuckyWagon_01_IN_Wait;
        BuckyWagon_01_B.s138_currOut = 0.0;
        BuckyWagon_01_B.s138_voltOut = 0.0;
        BuckyWagon_01_B.s138_state = 0U;
      } else {
        if (BuckyWagon_01_B.s139_Sum1 < (CV_EndCurrent_DataStore())) {
          /* Transition: '<S138>:9' */
          /* Exit 'ConstantVoltageCharge': '<S138>:3' */
          /* Entry 'waitEnd': '<S138>:4' */
          BuckyWagon_01_DWork.s138_is_c8_BuckyWagon_01 =
            BuckyWagon_01_IN_waitEnd;
          BuckyWagon_01_B.s138_timer = 0U;
          BuckyWagon_01_B.s138_state = 2U;
        }
      }
      break;

     case BuckyWagon_01_IN_StartupDelay:
      /* During 'StartupDelay': '<S138>:5' */
      if (!BuckyWagon_01_B.s140_Merge) {
        /* Transition: '<S138>:12' */
        /* Exit 'StartupDelay': '<S138>:5' */
        /* Entry 'Wait': '<S138>:1' */
        BuckyWagon_01_DWork.s138_is_c8_BuckyWagon_01 = BuckyWagon_01_IN_Wait;
        BuckyWagon_01_B.s138_currOut = 0.0;
        BuckyWagon_01_B.s138_voltOut = 0.0;
        BuckyWagon_01_B.s138_state = 0U;
      } else if (BuckyWagon_01_B.s138_timer > ((uint16_T)
                  (ChargeStartupDelay_DataStore()))) {
        /* Transition: '<S138>:7' */
        /* Exit 'StartupDelay': '<S138>:5' */
        /* Entry 'ConstantVoltageCharge': '<S138>:3' */
        BuckyWagon_01_DWork.s138_is_c8_BuckyWagon_01 =
          BuckyWagon_01_IN_ConstantVoltageCharge;
        BuckyWagon_01_B.s138_currOut = (CV_CurrentLimit_DataStore());
        BuckyWagon_01_B.s138_voltOut = (CV_Voltage_DataStore());
        BuckyWagon_01_B.s138_state = 1U;
      } else {
        BuckyWagon_01_B.s138_timer = (uint16_T)(BuckyWagon_01_B.s138_timer + 1);
      }
      break;

     case BuckyWagon_01_IN_Wait:
      /* During 'Wait': '<S138>:1' */
      if (BuckyWagon_01_B.s140_Merge) {
        /* Transition: '<S138>:11' */
        /* Exit 'Wait': '<S138>:1' */
        /* Entry 'StartupDelay': '<S138>:5' */
        BuckyWagon_01_DWork.s138_is_c8_BuckyWagon_01 =
          BuckyWagon_01_IN_StartupDelay;
        BuckyWagon_01_B.s138_state = 4U;
        BuckyWagon_01_B.s138_timer = 0U;
      }
      break;

     case BuckyWagon_01_IN_waitEnd:
      /* During 'waitEnd': '<S138>:4' */
      if (BuckyWagon_01_B.s139_Sum1 > (CV_EndCurrent_DataStore())) {
        /* Transition: '<S138>:8' */
        /* Exit 'waitEnd': '<S138>:4' */
        /* Entry 'ConstantVoltageCharge': '<S138>:3' */
        BuckyWagon_01_DWork.s138_is_c8_BuckyWagon_01 =
          BuckyWagon_01_IN_ConstantVoltageCharge;
        BuckyWagon_01_B.s138_currOut = (CV_CurrentLimit_DataStore());
        BuckyWagon_01_B.s138_voltOut = (CV_Voltage_DataStore());
        BuckyWagon_01_B.s138_state = 1U;
      } else if (!BuckyWagon_01_B.s140_Merge) {
        /* Transition: '<S138>:14' */
        /* Transition: '<S138>:15' */
        /* Transition: '<S138>:16' */
        /* Exit 'waitEnd': '<S138>:4' */
        /* Entry 'Wait': '<S138>:1' */
        BuckyWagon_01_DWork.s138_is_c8_BuckyWagon_01 = BuckyWagon_01_IN_Wait;
        BuckyWagon_01_B.s138_currOut = 0.0;
        BuckyWagon_01_B.s138_voltOut = 0.0;
        BuckyWagon_01_B.s138_state = 0U;
      } else if (BuckyWagon_01_B.s138_timer >= ((uint16_T)
                  (CV_EndCurrentTime_DataStore()))) {
        /* Transition: '<S138>:10' */
        /* Exit 'waitEnd': '<S138>:4' */
        /* Entry 'Complete': '<S138>:2' */
        BuckyWagon_01_DWork.s138_is_c8_BuckyWagon_01 = BuckyWagon_01_IN_Complete;
        BuckyWagon_01_B.s138_state = 3U;
        BuckyWagon_01_B.s138_currOut = 0.0;
        BuckyWagon_01_B.s138_voltOut = 0.0;
      } else {
        BuckyWagon_01_B.s138_timer = (uint16_T)(BuckyWagon_01_B.s138_timer + 1);
      }
      break;

     default:
      /* Transition: '<S138>:6' */
      /* Entry 'Wait': '<S138>:1' */
      BuckyWagon_01_DWork.s138_is_c8_BuckyWagon_01 = BuckyWagon_01_IN_Wait;
      BuckyWagon_01_B.s138_currOut = 0.0;
      BuckyWagon_01_B.s138_voltOut = 0.0;
      BuckyWagon_01_B.s138_state = 0U;
      break;
    }
  }

  /* Update for UnitDelay: '<S139>/Unit Delay' */
  BuckyWagon_01_DWork.s139_UnitDelay_DSTATE = BuckyWagon_01_B.s139_Sum1;

  /* end of Outputs for SubSystem: '<S9>/Brusa Charger (No Longer Used)' */

  /* Outputs for enable SubSystem: '<S7>/Brusa Charger' incorporates:
   *  EnablePort: '<S15>/Enable'
   */
  if (BuckyWagon_01_B.s286_Merge) {
    /* If: '<S55>/If' incorporates:
     *  ActionPort: '<S61>/Action Port'
     *  ActionPort: '<S62>/Action Port'
     *  S-Function (motohawk_sfun_calibration): '<S55>/override_enable'
     *  SubSystem: '<S55>/NewValue'
     *  SubSystem: '<S55>/OldValue'
     */
    if ((OutCrntCmd_ovr_DataStore())) {
      /* Inport: '<S61>/In1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S55>/new_value'
       */
      BuckyWagon_01_B.s55_Merge = (OutCrntCmd_new_DataStore());

      /* S-Function (motohawk_sfun_code_cover): '<S61>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(16);
      }
    } else {
      /* Inport: '<S62>/In1' */
      BuckyWagon_01_B.s55_Merge = BuckyWagon_01_B.s138_currOut;

      /* S-Function (motohawk_sfun_code_cover): '<S62>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(17);
      }
    }

    /* If: '<S56>/If' incorporates:
     *  ActionPort: '<S63>/Action Port'
     *  ActionPort: '<S64>/Action Port'
     *  S-Function (motohawk_sfun_calibration): '<S56>/override_enable'
     *  SubSystem: '<S56>/NewValue'
     *  SubSystem: '<S56>/OldValue'
     */
    if ((OutVoltCmd_ovr_DataStore())) {
      /* Inport: '<S63>/In1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S56>/new_value'
       */
      BuckyWagon_01_B.s56_Merge = (OutVoltCmd_new_DataStore());

      /* S-Function (motohawk_sfun_code_cover): '<S63>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs1/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(18);
      }
    } else {
      /* Inport: '<S64>/In1' */
      BuckyWagon_01_B.s56_Merge = BuckyWagon_01_B.s138_voltOut;

      /* S-Function (motohawk_sfun_code_cover): '<S64>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs1/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(19);
      }
    }

    /* If: '<S57>/If' incorporates:
     *  ActionPort: '<S65>/Action Port'
     *  ActionPort: '<S66>/Action Port'
     *  S-Function (motohawk_sfun_calibration): '<S57>/override_enable'
     *  SubSystem: '<S57>/NewValue'
     *  SubSystem: '<S57>/OldValue'
     */
    if ((MaxMainsCrnt_ovr_DataStore())) {
      /* Inport: '<S65>/In1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S57>/new_value'
       */
      BuckyWagon_01_B.s57_Merge = (MaxMainsCrnt_new_DataStore());

      /* S-Function (motohawk_sfun_code_cover): '<S65>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs2/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(20);
      }
    } else {
      /* Inport: '<S66>/In1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration8'
       */
      BuckyWagon_01_B.s57_Merge = (MaxMainsCurrent_DataStore());

      /* S-Function (motohawk_sfun_code_cover): '<S66>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs2/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(21);
      }
    }

    /* If: '<S58>/If' incorporates:
     *  ActionPort: '<S67>/Action Port'
     *  ActionPort: '<S68>/Action Port'
     *  S-Function (motohawk_sfun_calibration): '<S58>/override_enable'
     *  SubSystem: '<S58>/NewValue'
     *  SubSystem: '<S58>/OldValue'
     */
    if ((CntrlPltVentReq_ovr_DataStore())) {
      /* Inport: '<S67>/In1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S58>/new_value'
       */
      BuckyWagon_01_B.s58_Merge = ((uint8_T)(CntrlPltVentReq_new_DataStore()));

      /* S-Function (motohawk_sfun_code_cover): '<S67>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs3/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(22);
      }
    } else {
      /* Inport: '<S68>/In1' incorporates:
       *  Constant: '<S128>/Constant2'
       */
      BuckyWagon_01_B.s58_Merge = 0U;

      /* S-Function (motohawk_sfun_code_cover): '<S68>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs3/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(23);
      }
    }

    /* If: '<S59>/If' incorporates:
     *  ActionPort: '<S69>/Action Port'
     *  ActionPort: '<S70>/Action Port'
     *  S-Function (motohawk_sfun_calibration): '<S59>/override_enable'
     *  SubSystem: '<S59>/NewValue'
     *  SubSystem: '<S59>/OldValue'
     */
    if ((ClearErrorLtch_ovr_DataStore())) {
      /* Inport: '<S69>/In1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S59>/new_value'
       */
      BuckyWagon_01_B.s59_Merge = ((uint8_T)(ClearErrorLtch_new_DataStore()));

      /* S-Function (motohawk_sfun_code_cover): '<S69>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs4/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(24);
      }
    } else {
      /* Inport: '<S70>/In1' incorporates:
       *  Constant: '<S128>/Constant1'
       */
      BuckyWagon_01_B.s59_Merge = 0U;

      /* S-Function (motohawk_sfun_code_cover): '<S70>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs4/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(25);
      }
    }

    /* If: '<S60>/If' incorporates:
     *  ActionPort: '<S71>/Action Port'
     *  ActionPort: '<S72>/Action Port'
     *  S-Function (motohawk_sfun_calibration): '<S60>/override_enable'
     *  SubSystem: '<S60>/NewValue'
     *  SubSystem: '<S60>/OldValue'
     */
    if ((CAN_Enable_ovr_DataStore())) {
      /* Inport: '<S71>/In1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S60>/new_value'
       */
      BuckyWagon_01_B.s60_Merge = (CAN_Enable_new_DataStore());

      /* S-Function (motohawk_sfun_code_cover): '<S71>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs5/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(26);
      }
    } else {
      /* Inport: '<S72>/In1' */
      BuckyWagon_01_B.s60_Merge = BuckyWagon_01_B.s140_Merge;

      /* S-Function (motohawk_sfun_code_cover): '<S72>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs5/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(27);
      }
    }
  }

  /* end of Outputs for SubSystem: '<S7>/Brusa Charger' */

  /* RelationalOperator: '<S131>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration'
   */
  rtb_Merge_na = (BuckyWagon_01_B.s388_Merge > (Brake_Active_Threshold_DataStore
                   ()));

  /* Abs: '<S131>/Abs' */
  rtb_Merge_k = fabs(BuckyWagon_01_B.s393_Merge);

  /* RelationalOperator: '<S131>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration15'
   */
  rtb_LogicalOperator_bd = (BuckyWagon_01_B.s388_Merge > (hardBrakeLev_DataStore
                             ()));

  /* Stateflow: '<S131>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration16'
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration17'
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration18'
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration19'
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration3'
   */
  /* Gateway: Foreground/Control Strategy/EHPAS_PercentControl/Chart */
  /* During: Foreground/Control Strategy/EHPAS_PercentControl/Chart */
  if (BuckyWagon_01_DWork.s171_is_active_c9_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Control Strategy/EHPAS_PercentControl/Chart */
    BuckyWagon_01_DWork.s171_is_active_c9_BuckyWagon_01 = 1U;

    /* Transition: '<S171>:25' */
    /* Entry 'KeyUp': '<S171>:23' */
    BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_KeyUp;
    BuckyWagon_01_DWork.s171_counts = 0U;
  } else {
    switch (BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01) {
     case BuckyWagon_01_IN_Braking_f:
      /* During 'Braking': '<S171>:76' */
      if ((!rtb_Merge_na) && (rtb_Merge_k < (creepSpeed_DataStore()))) {
        /* Transition: '<S171>:79' */
        /* Exit 'Braking': '<S171>:76' */
        /* Entry 'LowSpeedManeuvering': '<S171>:18' */
        BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Transition: '<S171>:34' */
        /* Entry 'Creeping': '<S171>:31' */
        BuckyWagon_01_DWork.s171_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;
        BuckyWagon_01_DWork.s171_counts = 0U;
      } else if (rtb_Merge_na && (rtb_Merge_k < (creepSpeed_DataStore()))) {
        /* Transition: '<S171>:46' */
        /* Exit 'Braking': '<S171>:76' */
        /* Entry 'SlowingDown': '<S171>:96' */
        BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_SlowingDown;
      } else if ((!rtb_Merge_na) && ((real_T)BuckyWagon_01_DWork.s171_counts >
                  (minPumpRunTime_DataStore()) * 200.0)) {
        /* Transition: '<S171>:92' */
        /* Exit 'Braking': '<S171>:76' */
        /* Entry 'NormalDriving': '<S171>:20' */
        BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S171>:33' */
        /* Entry 'Driving': '<S171>:21' */
        BuckyWagon_01_DWork.s171_is_NormalDriving = BuckyWagon_01_IN_Driving_f;
      } else {
        BuckyWagon_01_DWork.s171_counts = BuckyWagon_01_DWork.s171_counts + 1U;
        BuckyWagon_01_B.s171_PumpState = 3U;
      }
      break;

     case BuckyWagon_01_IN_Idle:
      /* During 'Idle': '<S171>:39' */
      if (rtb_Merge_k > (stopSpeed_DataStore())) {
        /* Transition: '<S171>:48' */
        /* Exit 'Idle': '<S171>:39' */
        /* Entry 'LowSpeedManeuvering': '<S171>:18' */
        BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Transition: '<S171>:34' */
        /* Entry 'Creeping': '<S171>:31' */
        BuckyWagon_01_DWork.s171_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;
        BuckyWagon_01_DWork.s171_counts = 0U;
      } else if (rtb_LogicalOperator12) {
        /* Transition: '<S171>:112' */
        /* Exit 'Idle': '<S171>:39' */
        /* Entry 'LowSpeedManeuvering': '<S171>:18' */
        BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Transition: '<S171>:34' */
        /* Entry 'Creeping': '<S171>:31' */
        BuckyWagon_01_DWork.s171_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;
        BuckyWagon_01_DWork.s171_counts = 0U;
      } else if (rtb_Merge_k > (creepSpeed_DataStore())) {
        /* Transition: '<S171>:113' */
        /* Exit 'Idle': '<S171>:39' */
        /* Entry 'NormalDriving': '<S171>:20' */
        BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S171>:33' */
        /* Entry 'Driving': '<S171>:21' */
        BuckyWagon_01_DWork.s171_is_NormalDriving = BuckyWagon_01_IN_Driving_f;
      } else {
        BuckyWagon_01_B.s171_PumpState = 0U;
      }
      break;

     case BuckyWagon_01_IN_KeyUp:
      /* During 'KeyUp': '<S171>:23' */
      if ((rtb_Merge_k > (creepSpeed_DataStore())) &&
          (BuckyWagon_01_DWork.s171_counts > (uint32_T)(((uint16_T)
             (KeyOnRuntime_Sec_DataStore())) * 200))) {
        /* Transition: '<S171>:37' */
        /* Exit 'KeyUp': '<S171>:23' */
        /* Entry 'NormalDriving': '<S171>:20' */
        BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S171>:33' */
        /* Entry 'Driving': '<S171>:21' */
        BuckyWagon_01_DWork.s171_is_NormalDriving = BuckyWagon_01_IN_Driving_f;
      } else if ((rtb_Merge_k > (stopSpeed_DataStore())) && (rtb_Merge_k <
                  (creepSpeed_DataStore()))) {
        /* Transition: '<S171>:109' */
        /* Exit 'KeyUp': '<S171>:23' */
        /* Entry 'LowSpeedManeuvering': '<S171>:18' */
        BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Transition: '<S171>:34' */
        /* Entry 'Creeping': '<S171>:31' */
        BuckyWagon_01_DWork.s171_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;
        BuckyWagon_01_DWork.s171_counts = 0U;
      } else if (rtb_LogicalOperator12) {
        /* Transition: '<S171>:43' */
        /* Exit 'KeyUp': '<S171>:23' */
        /* Entry 'LowSpeedManeuvering': '<S171>:18' */
        BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Transition: '<S171>:34' */
        /* Entry 'Creeping': '<S171>:31' */
        BuckyWagon_01_DWork.s171_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;
        BuckyWagon_01_DWork.s171_counts = 0U;
      } else if ((rtb_Merge_k < (stopSpeed_DataStore())) &&
                 (BuckyWagon_01_DWork.s171_counts > (uint32_T)(((uint16_T)
                    (KeyOnRuntime_Sec_DataStore())) * 200))) {
        /* Transition: '<S171>:44' */
        /* Exit 'KeyUp': '<S171>:23' */
        /* Entry 'Idle': '<S171>:39' */
        BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Idle;
      } else {
        BuckyWagon_01_DWork.s171_counts = BuckyWagon_01_DWork.s171_counts + 1U;
        BuckyWagon_01_B.s171_PumpState = 4U;
      }
      break;

     case BuckyWagon_01_IN_LowSpeedManeuvering:
      /* During 'LowSpeedManeuvering': '<S171>:18' */
      if ((rtb_Merge_k > (creepSpeed_DataStore())) && ((real_T)
           BuckyWagon_01_DWork.s171_counts > (minPumpRunTime_DataStore()) *
           200.0)) {
        /* Transition: '<S171>:57' */
        /* Exit 'Creeping': '<S171>:31' */
        BuckyWagon_01_DWork.s171_is_LowSpeedManeuvering = (uint8_T)0U;

        /* Exit 'Reversing': '<S171>:32' */
        /* Exit 'LowSpeedManeuvering': '<S171>:18' */
        /* Entry 'NormalDriving': '<S171>:20' */
        BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S171>:33' */
        /* Entry 'Driving': '<S171>:21' */
        BuckyWagon_01_DWork.s171_is_NormalDriving = BuckyWagon_01_IN_Driving_f;
      } else if (BuckyWagon_01_DWork.s171_counts > (uint32_T)(((uint16_T)
                   (LowSpeedManeuverRuntime_DataStore())) * 200)) {
        /* Transition: '<S171>:47' */
        /* Exit 'Creeping': '<S171>:31' */
        BuckyWagon_01_DWork.s171_is_LowSpeedManeuvering = (uint8_T)0U;

        /* Exit 'Reversing': '<S171>:32' */
        /* Exit 'LowSpeedManeuvering': '<S171>:18' */
        /* Entry 'Idle': '<S171>:39' */
        BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Idle;
      } else {
        BuckyWagon_01_B.s171_PumpState = 1U;
        switch (BuckyWagon_01_DWork.s171_is_LowSpeedManeuvering) {
         case BuckyWagon_01_IN_Creeping:
          /* During 'Creeping': '<S171>:31' */
          if (rtb_LogicalOperator12) {
            /* Transition: '<S171>:53' */
            /* Exit 'Creeping': '<S171>:31' */
            /* Entry 'Reversing': '<S171>:32' */
            BuckyWagon_01_DWork.s171_is_LowSpeedManeuvering =
              BuckyWagon_01_IN_Reversing;
            BuckyWagon_01_DWork.s171_counts = 0U;
          } else {
            BuckyWagon_01_DWork.s171_counts = BuckyWagon_01_DWork.s171_counts +
              1U;
          }
          break;

         case BuckyWagon_01_IN_Reversing:
          /* During 'Reversing': '<S171>:32' */
          if (!rtb_LogicalOperator12) {
            /* Transition: '<S171>:54' */
            /* Exit 'Reversing': '<S171>:32' */
            /* Entry 'Creeping': '<S171>:31' */
            BuckyWagon_01_DWork.s171_is_LowSpeedManeuvering =
              BuckyWagon_01_IN_Creeping;
            BuckyWagon_01_DWork.s171_counts = 0U;
          }
          break;

         default:
          /* Transition: '<S171>:34' */
          /* Entry 'Creeping': '<S171>:31' */
          BuckyWagon_01_DWork.s171_is_LowSpeedManeuvering =
            BuckyWagon_01_IN_Creeping;
          BuckyWagon_01_DWork.s171_counts = 0U;
          break;
        }
      }
      break;

     case BuckyWagon_01_IN_NormalDriving:
      /* During 'NormalDriving': '<S171>:20' */
      if ((BuckyWagon_01_DWork.s171_brakeCounts > (brakeTime_sec_DataStore())) ||
          rtb_LogicalOperator_bd) {
        /* Transition: '<S171>:88' */
        /* Exit 'Driving': '<S171>:21' */
        BuckyWagon_01_DWork.s171_is_NormalDriving = (uint8_T)0U;

        /* Exit 'DrivingAndBrake': '<S171>:74' */
        /* Exit 'NormalDriving': '<S171>:20' */
        /* Entry 'Braking': '<S171>:76' */
        BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_Braking_f;
        BuckyWagon_01_DWork.s171_counts = 0U;
      } else {
        switch (BuckyWagon_01_DWork.s171_is_NormalDriving) {
         case BuckyWagon_01_IN_Driving_f:
          /* During 'Driving': '<S171>:21' */
          if (rtb_Merge_na) {
            /* Transition: '<S171>:81' */
            /* Exit 'Driving': '<S171>:21' */
            /* Entry 'DrivingAndBrake': '<S171>:74' */
            BuckyWagon_01_DWork.s171_is_NormalDriving =
              BuckyWagon_01_IN_DrivingAndBrake;
            BuckyWagon_01_DWork.s171_brakeCounts = 0.0;
          } else {
            BuckyWagon_01_B.s171_PumpState = 2U;
          }
          break;

         case BuckyWagon_01_IN_DrivingAndBrake:
          /* During 'DrivingAndBrake': '<S171>:74' */
          if (!rtb_Merge_na) {
            /* Transition: '<S171>:82' */
            /* Exit 'DrivingAndBrake': '<S171>:74' */
            /* Entry 'Driving': '<S171>:21' */
            BuckyWagon_01_DWork.s171_is_NormalDriving =
              BuckyWagon_01_IN_Driving_f;
          } else {
            BuckyWagon_01_DWork.s171_brakeCounts =
              BuckyWagon_01_DWork.s171_brakeCounts + 1.0;
            BuckyWagon_01_B.s171_PumpState = 5U;
          }
          break;

         default:
          /* Transition: '<S171>:33' */
          /* Entry 'Driving': '<S171>:21' */
          BuckyWagon_01_DWork.s171_is_NormalDriving = BuckyWagon_01_IN_Driving_f;
          break;
        }
      }
      break;

     case BuckyWagon_01_IN_SlowingDown:
      /* During 'SlowingDown': '<S171>:96' */
      if (rtb_Merge_k < (stopSpeed_DataStore())) {
        /* Transition: '<S171>:97' */
        /* Exit 'SlowingDown': '<S171>:96' */
        /* Entry 'Stopping': '<S171>:98' */
        BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Stopping;
      } else if ((!rtb_Merge_na) || ((real_T)BuckyWagon_01_DWork.s171_counts <
                  (minPumpRunTime_DataStore()) * 200.0)) {
        /* Transition: '<S171>:100' */
        /* Exit 'SlowingDown': '<S171>:96' */
        /* Entry 'LowSpeedManeuvering': '<S171>:18' */
        BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Transition: '<S171>:34' */
        /* Entry 'Creeping': '<S171>:31' */
        BuckyWagon_01_DWork.s171_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;
        BuckyWagon_01_DWork.s171_counts = 0U;
      } else if ((rtb_Merge_k > (creepSpeed_DataStore())) && ((real_T)
                  BuckyWagon_01_DWork.s171_counts > (minPumpRunTime_DataStore())
                  * 200.0)) {
        /* Transition: '<S171>:101' */
        /* Exit 'SlowingDown': '<S171>:96' */
        /* Entry 'NormalDriving': '<S171>:20' */
        BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S171>:33' */
        /* Entry 'Driving': '<S171>:21' */
        BuckyWagon_01_DWork.s171_is_NormalDriving = BuckyWagon_01_IN_Driving_f;
      } else if ((real_T)BuckyWagon_01_DWork.s171_counts >
                 (minPumpRunTime_DataStore()) * 200.0) {
        /* Transition: '<S171>:104' */
        /* Exit 'SlowingDown': '<S171>:96' */
        /* Entry 'LowSpeedManeuvering': '<S171>:18' */
        BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Transition: '<S171>:34' */
        /* Entry 'Creeping': '<S171>:31' */
        BuckyWagon_01_DWork.s171_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;
        BuckyWagon_01_DWork.s171_counts = 0U;
      } else {
        BuckyWagon_01_DWork.s171_counts = BuckyWagon_01_DWork.s171_counts + 1U;
        BuckyWagon_01_B.s171_PumpState = 6U;
      }
      break;

     case BuckyWagon_01_IN_Stopping:
      /* During 'Stopping': '<S171>:98' */
      if ((real_T)BuckyWagon_01_DWork.s171_counts > (minPumpRunTime_DataStore())
          * 200.0) {
        /* Transition: '<S171>:106' */
        /* Exit 'Stopping': '<S171>:98' */
        /* Entry 'Idle': '<S171>:39' */
        BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Idle;
      } else if (rtb_Merge_k > (stopSpeed_DataStore())) {
        /* Transition: '<S171>:107' */
        /* Exit 'Stopping': '<S171>:98' */
        /* Entry 'SlowingDown': '<S171>:96' */
        BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_SlowingDown;
      } else {
        BuckyWagon_01_DWork.s171_counts = BuckyWagon_01_DWork.s171_counts + 1U;
        BuckyWagon_01_B.s171_PumpState = 7U;
      }
      break;

     default:
      /* Transition: '<S171>:25' */
      /* Entry 'KeyUp': '<S171>:23' */
      BuckyWagon_01_DWork.s171_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_KeyUp;
      BuckyWagon_01_DWork.s171_counts = 0U;
      break;
    }
  }

  /* If: '<S173>/If' incorporates:
   *  ActionPort: '<S176>/Action Port'
   *  ActionPort: '<S177>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S173>/override_enable'
   *  SubSystem: '<S173>/NewValue'
   *  SubSystem: '<S173>/OldValue'
   */
  if ((EHPAS_PumpStateEnable_ovr_ovr_DataStore())) {
    /* Inport: '<S176>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S173>/new_value'
     */
    rtb_Merge_ow = ((uint8_T)(EHPAS_PumpStateEnable_ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S176>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(62);
    }
  } else {
    /* Inport: '<S177>/In1' */
    rtb_Merge_ow = BuckyWagon_01_B.s171_PumpState;

    /* S-Function (motohawk_sfun_code_cover): '<S177>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(63);
    }
  }

  /* MultiPortSwitch: '<S131>/Multiport Switch1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration20'
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration21'
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration9'
   */
  switch (rtb_Merge_ow) {
   case 0:
    rtb_motohawk_calibration8 = ((uint16_T)(EHPAS_IdleEn_DataStore()));
    break;

   case 1:
    rtb_motohawk_calibration8 = ((uint16_T)(EHPAS_lowSpeedEn_DataStore()));
    break;

   case 2:
    rtb_motohawk_calibration8 = ((uint16_T)(EHPAS_driveEn_DataStore()));
    break;

   case 3:
    rtb_motohawk_calibration8 = ((uint16_T)(EHPAS_brakeEn_DataStore()));
    break;

   case 4:
    rtb_motohawk_calibration8 = ((uint16_T)(EHPAS_keyUpEn_DataStore()));
    break;

   case 5:
    rtb_motohawk_calibration8 = ((uint16_T)(EHPAS_driveNbrakeEn_DataStore()));
    break;

   case 6:
    rtb_motohawk_calibration8 = ((uint16_T)(EHPAS_slowingEn_DataStore()));
    break;

   default:
    rtb_motohawk_calibration8 = ((uint16_T)(EHPAS_stoppingEn_DataStore()));
    break;
  }

  /* Logic: '<S9>/Logical Operator2' */
  rtb_Merge_na = (rtb_UnitDelay_if && (rtb_motohawk_calibration8 != 0));

  /* Outputs for enable SubSystem: '<S7>/EHPAS Power Steering Pump Controller' incorporates:
   *  EnablePort: '<S16>/Enable1'
   *  S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration2'
   */
  if ((Enable_PowerSteering_CAN_Msg_DataStore())) {
    /* Switch: '<S16>/Switch' incorporates:
     *  Constant: '<S16>/Operating Mode - Activate'
     *  Constant: '<S16>/Operating Mode - Disabled'
     */
    if (rtb_Merge_na) {
      BuckyWagon_01_B.s16_OperatingMode_cmd = 1U;
    } else {
      BuckyWagon_01_B.s16_OperatingMode_cmd = 0U;
    }

    /* If: '<S73>/If' incorporates:
     *  ActionPort: '<S74>/Action Port'
     *  ActionPort: '<S75>/Action Port'
     *  S-Function (motohawk_sfun_calibration): '<S73>/override_enable'
     *  SubSystem: '<S73>/NewValue'
     *  SubSystem: '<S73>/OldValue'
     */
    if ((EHPAS_Operating_Mode_Cmd_ovr_DataStore())) {
      /* Inport: '<S74>/In1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S73>/new_value'
       */
      rtb_Merge_j0 = ((uint8_T)(EHPAS_Operating_Mode_Cmd_new_DataStore()));

      /* S-Function (motohawk_sfun_code_cover): '<S74>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller/motohawk_override_abs4/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(28);
      }
    } else {
      /* Inport: '<S75>/In1' */
      rtb_Merge_j0 = BuckyWagon_01_B.s16_OperatingMode_cmd;

      /* S-Function (motohawk_sfun_code_cover): '<S75>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller/motohawk_override_abs4/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(29);
      }
    }

    /* S-Function (motohawk_sfun_send_canmsgs): '<S16>/Send CAN Messages' */
    /* Send CAN Message(s) */
    {
      static uint32_T LastTxtime32 = 0;
      uint32_T time32;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      time32 = LastTxtime32;

      /* Transmit All Messages on Periodic Schedule (100.0 ms nominal) */
      /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
      /* subsequent block executions, e.g. long path followed by short path */
      if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
          ((uint32_T)
           (99500U)
           )) {
        /* 0x18ff6aef */
        {
          extern boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id,
            uint8_T length, const uint8_T data[]);
          uint8_T msg_data[8];
          uint8_T tmp0;
          uint8_T tmp1;
          if (rtb_Merge_j0 > 3U) {
            tmp0 = (uint8_T)(3U);
          } else {
            tmp0 = (uint8_T)(rtb_Merge_j0);
          }

          if ((EHPAS_Performance_Limit_DataStore()) < 0.0000000000F) {
            tmp1 = (uint8_T)(0U);
          } else if ((EHPAS_Performance_Limit_DataStore()) > 102.0000000000F) {
            tmp1 = (uint8_T)(255U);
          } else {
            tmp1 = (uint8_T)((EHPAS_Performance_Limit_DataStore()) *
                             (2.5000000000F));
          }

          msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x00000003)) ;
          msg_data[1] = ((((uint8_T *)(&tmp1))[0])) ;
          msg_data[2] = 0 ;
          msg_data[3] = 0 ;
          msg_data[4] = 0 ;
          msg_data[5] = 0 ;
          msg_data[6] = 0 ;
          msg_data[7] = 0 ;
          CAN_2_Transmit(1, 0x18ff6aefUL, 8, msg_data);
        }

        LastTxtime32 = time32;
      }
    }
  }

  /* end of Outputs for SubSystem: '<S7>/EHPAS Power Steering Pump Controller' */

  /* Switch: '<S9>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S9>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S137>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S137>/motohawk_prelookup'
   */
  if (rtb_BelowLoTarget) {
    BuckyWagon_01_B.s9_CoolantPumpSpeed = (Charging_Cooling_Speed_DataStore());
  } else {
    /* S-Function Block: <S137>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CoolantPumpSpeedIn_DataStore()) =
        BuckyWagon_01_B.s251_Inverter_Temperature;
      (CoolantPumpSpeedIdx_DataStore()) = TablePrelookup_real_T
        (BuckyWagon_01_B.s251_Inverter_Temperature,
         (CoolantPumpSpeedIdxArr_DataStore()), 11,
         (CoolantPumpSpeedIdx_DataStore()));
      rtb_motohawk_prelookup_b = (CoolantPumpSpeedIdx_DataStore());
    }

    /* S-Function Block: <S137>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_j = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_b, (real_T *) ((CoolantPumpSpeedTbl_DataStore())),
         11);
      (CoolantPumpSpeed_DataStore()) = rtb_motohawk_interpolation_1d_j;
    }

    BuckyWagon_01_B.s9_CoolantPumpSpeed = rtb_motohawk_interpolation_1d_j;
  }

  /* Outputs for atomic SubSystem: '<S7>/EMP Coolant Pump' */

  /* If: '<S77>/If' incorporates:
   *  ActionPort: '<S80>/Action Port'
   *  ActionPort: '<S81>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S77>/override_enable'
   *  SubSystem: '<S77>/NewValue'
   *  SubSystem: '<S77>/OldValue'
   */
  if ((EMP_Mode_ovr_DataStore())) {
    /* Inport: '<S80>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S77>/new_value'
     */
    rtb_Merge_ht = ((uint8_T)(EMP_Mode_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S80>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(32);
    }
  } else {
    /* Inport: '<S81>/In1' incorporates:
     *  Constant: '<S17>/Operating Mode: Normal'
     */
    rtb_Merge_ht = 1U;

    /* S-Function (motohawk_sfun_code_cover): '<S81>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(33);
    }
  }

  /* If: '<S76>/If' incorporates:
   *  ActionPort: '<S78>/Action Port'
   *  ActionPort: '<S79>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S76>/override_enable'
   *  SubSystem: '<S76>/NewValue'
   *  SubSystem: '<S76>/OldValue'
   */
  if ((EMP_Speed_ovr_DataStore())) {
    /* Inport: '<S78>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S76>/new_value'
     */
    BuckyWagon_01_B.s76_Merge = (EMP_Speed_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S78>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(30);
    }
  } else {
    /* Inport: '<S79>/In1' incorporates:
     *  Saturate: '<S17>/Saturation'
     */
    BuckyWagon_01_B.s76_Merge = rt_SATURATE(BuckyWagon_01_B.s9_CoolantPumpSpeed,
      0.0, 100.0);

    /* S-Function (motohawk_sfun_code_cover): '<S79>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(31);
    }
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S17>/Send CAN Messages' */
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
      /* 0x18ef208b */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint16_T tmp2;
        uint8_T tmp3;
        if (rtb_Merge_ht > 3U) {
          tmp0 = (uint8_T)(3U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_ht);
        }

        if (((uint8_T)0U) > 3U) {
          tmp1 = (uint8_T)(3U);
        } else {
          tmp1 = (uint8_T)(((uint8_T)0U));
        }

        tmp2 = (uint16_T)(((uint16_T)65535U));
        if (BuckyWagon_01_B.s76_Merge < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (BuckyWagon_01_B.s76_Merge > 127.5000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(BuckyWagon_01_B.s76_Merge * (2.0000000000F));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x00000003)) | ((((uint8_T *)(
          &tmp1))[0] & 0x00000003) << 2) ;
        msg_data[1] = 0xff ;
        msg_data[2] = 0xff ;
        msg_data[3] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[4] = 0xff ;
        msg_data[5] = 0xff ;
        msg_data[6] = 0xff ;
        msg_data[7] = 0xff ;
        msg_data[0] |= 0xf0;
        CAN_1_Transmit(1, 0x18ef208bUL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* end of Outputs for SubSystem: '<S7>/EMP Coolant Pump' */
  /* S-Function Block: <S392>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s392_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S392>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S392>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S392>/motohawk_delta_time'
   */
  BuckyWagon_01_B.s392_Sum = rtb_motohawk_delta_time +
    TimeSinceKeyOnTimer_DataStore();

  /* Logic: '<S9>/Logical Operator' incorporates:
   *  Logic: '<S9>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_action): '<S9>/motohawk_fault_action'
   */
  rtb_RelationalOperator_fj = !(BuckyWagon_01_B.s331_sf_Chart.s287_pluggedIn ||
    BuckyWagon_01_B.s258_Merge || GetFaultActionStatus(4));

  /* Outputs for atomic SubSystem: '<S9>/Drive' */

  /* Stateflow: '<S147>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration2'
   */
  /* Gateway: Foreground/Control Strategy/Drive/HillHold Algorithm/Chart */
  /* During: Foreground/Control Strategy/Drive/HillHold Algorithm/Chart */
  if (BuckyWagon_01_DWork.s149_is_active_c5_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Control Strategy/Drive/HillHold Algorithm/Chart */
    BuckyWagon_01_DWork.s149_is_active_c5_BuckyWagon_01 = 1U;

    /* Transition: '<S149>:22' */
    /* Entry 'Begin': '<S149>:7' */
    BuckyWagon_01_DWork.s149_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Begin;
  } else {
    switch (BuckyWagon_01_DWork.s149_is_c5_BuckyWagon_01) {
     case BuckyWagon_01_IN_Begin:
      /* During 'Begin': '<S149>:7' */
      if (BuckyWagon_01_B.s362_Merge > 1.0) {
        /* Transition: '<S149>:13' */
        /* Exit 'Begin': '<S149>:7' */
        /* Entry 'Driving': '<S149>:8' */
        BuckyWagon_01_DWork.s149_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Driving;
      } else {
        BuckyWagon_01_B.s149_HillHoldOn = FALSE;
      }
      break;

     case BuckyWagon_01_IN_Braking:
      /* During 'Braking': '<S149>:9' */
      if ((BuckyWagon_01_B.s362_Merge < 20.0) && (BuckyWagon_01_B.s362_Merge >
           -10.0) && (BuckyWagon_01_B.s388_Merge > 0.03)) {
        /* Transition: '<S149>:15' */
        /* Exit 'Braking': '<S149>:9' */
        /* Entry 'Stopped': '<S149>:11' */
        BuckyWagon_01_DWork.s149_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Stopped;
      } else {
        BuckyWagon_01_B.s149_HillHoldOn = FALSE;
      }
      break;

     case BuckyWagon_01_IN_Driving:
      /* During 'Driving': '<S149>:8' */
      if ((BuckyWagon_01_B.s362_Merge > 1.0) && (BuckyWagon_01_B.s388_Merge >
           0.03)) {
        /* Transition: '<S149>:14' */
        /* Exit 'Driving': '<S149>:8' */
        /* Entry 'Braking': '<S149>:9' */
        BuckyWagon_01_DWork.s149_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Braking;
      } else {
        BuckyWagon_01_B.s149_HillHoldOn = FALSE;
      }
      break;

     case BuckyWagon_01_IN_Rolling:
      /* During 'Rolling': '<S149>:12' */
      if ((BuckyWagon_01_B.s372_Merge > 3.0) && (BuckyWagon_01_B.s362_Merge >
           1.0)) {
        /* Transition: '<S149>:20' */
        /* Exit 'Rolling': '<S149>:12' */
        /* Entry 'Driving': '<S149>:8' */
        BuckyWagon_01_DWork.s149_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Driving;
      } else if (BuckyWagon_01_B.s388_Merge >=
                 (HillHoldDisengageBrakePct_DataStore())) {
        /* Transition: '<S149>:21' */
        /* Exit 'Rolling': '<S149>:12' */
        /* Entry 'Stopped': '<S149>:11' */
        BuckyWagon_01_DWork.s149_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Stopped;
      } else {
        BuckyWagon_01_B.s149_HillHoldOn = TRUE;
      }
      break;

     case BuckyWagon_01_IN_Stopped:
      /* During 'Stopped': '<S149>:11' */
      if ((BuckyWagon_01_B.s388_Merge > (MinBrakeBedPosforHillHold_DataStore()))
          && (BuckyWagon_01_B.s362_Merge < -10.0)) {
        /* Transition: '<S149>:16' */
        /* Exit 'Stopped': '<S149>:11' */
        /* Entry 'Rolling': '<S149>:12' */
        BuckyWagon_01_DWork.s149_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Rolling;
      } else {
        BuckyWagon_01_B.s149_HillHoldOn = FALSE;
      }
      break;

     default:
      /* Transition: '<S149>:22' */
      /* Entry 'Begin': '<S149>:7' */
      BuckyWagon_01_DWork.s149_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Begin;
      break;
    }
  }

  /* S-Function Block: <S151>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s151_motohawk_delta_time_DWORK1, NULL);
    rtb_Product3_m = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S151>/Product' incorporates:
   *  MinMax: '<S151>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S151>/motohawk_calibration'
   */
  rtb_Product3_m /= rt_MAXd_snf(rtb_Product3_m,
    (UQM_HillHoldSpeed_Filt_DataStore()));

  /* Product: '<S155>/Product' */
  rtb_Merge_k = BuckyWagon_01_B.s362_Merge * rtb_Product3_m;

  /* Sum: '<S155>/Sum' incorporates:
   *  Constant: '<S155>/Constant'
   */
  rtb_to65535_c = 1.0 - rtb_Product3_m;

  /* UnitDelay: '<S155>/Unit Delay' */
  rtb_Product3_m = BuckyWagon_01_DWork.s155_UnitDelay_DSTATE;

  /* Sum: '<S155>/Sum1' incorporates:
   *  Product: '<S155>/Product1'
   */
  BuckyWagon_01_B.s155_Sum1 = rtb_to65535_c * rtb_Product3_m + rtb_Merge_k;

  /* Product: '<S154>/Product3' incorporates:
   *  Constant: '<S150>/Constant'
   *  Constant: '<S154>/Constant'
   *  Sum: '<S154>/Sum2'
   */
  rtb_Product3_m = 0.0 - BuckyWagon_01_B.s155_Sum1;

  /* UnitDelay: '<S156>/Unit Delay' */
  rtb_Morot_Torque = BuckyWagon_01_DWork.s156_UnitDelay_DSTATE;

  /* Switch: '<S156>/Switch1' incorporates:
   *  Constant: '<S154>/Constant3'
   *  Logic: '<S152>/Logical Operator'
   *  Logic: '<S152>/Logical Operator1'
   *  UnitDelay: '<S152>/Unit Delay'
   */
  if (BuckyWagon_01_B.s149_HillHoldOn &&
      (!BuckyWagon_01_DWork.s152_UnitDelay_DSTATE)) {
    rtb_Morot_Torque = 0.0;
  }

  /* Sum: '<S154>/Sum' incorporates:
   *  Product: '<S154>/Product2'
   *  S-Function (motohawk_sfun_calibration): '<S150>/motohawk_calibration1'
   */
  BuckyWagon_01_B.s154_Sum = (HillHold_kP_DataStore()) * rtb_Product3_m +
    rtb_Morot_Torque;

  /* Product: '<S150>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S150>/motohawk_calibration4'
   */
  rtb_Merge_k = (HillHoldTorqueGain_DataStore()) * BuckyWagon_01_B.s154_Sum;

  /* MinMax: '<S153>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S150>/motohawk_calibration2'
   */
  rtb_Merge_k = rt_MAXd_snf(rtb_Merge_k, (HillHoldMaxREVTqSaturation_DataStore()));

  /* MinMax: '<S153>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S150>/motohawk_calibration5'
   */
  rtb_Switch_h = rt_MINd_snf(rtb_Merge_k, (HillHoldMaxFWDTqSaturation_DataStore()));

  /* Product: '<S154>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S150>/motohawk_calibration3'
   */
  rtb_Merge_k = rtb_Product3_m * (HillHold_kI_DataStore());

  /* S-Function Block: <S156>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s156_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_e = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S156>/Sum' incorporates:
   *  Product: '<S156>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S156>/motohawk_delta_time'
   */
  rtb_Morot_Torque += rtb_Merge_k * rtb_motohawk_delta_time_e;

  /* MinMax: '<S158>/MinMax' incorporates:
   *  Constant: '<S154>/Constant1'
   */
  rtb_Morot_Torque = rt_MAXd_snf(rtb_Morot_Torque, rtMinusInf);

  /* MinMax: '<S158>/MinMax1' incorporates:
   *  Constant: '<S154>/Constant2'
   */
  rtb_to65535_d = rt_MINd_snf(rtb_Morot_Torque, rtInf);

  /* RelationalOperator: '<S148>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S148>/motohawk_calibration2'
   */
  rtb_Merge_na = (BuckyWagon_01_B.s372_Merge > (Temp_ped_switchOver_DataStore()));

  /* S-Function Block: <S159>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s159_motohawk_delta_time_DWORK1, NULL);
    rtb_Morot_Torque = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S159>/Product' incorporates:
   *  MinMax: '<S159>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S159>/motohawk_calibration'
   */
  rtb_Morot_Torque /= rt_MAXd_snf(rtb_Morot_Torque,
    (Veh_Speed_Regen_Filter_DataStore()));

  /* Product: '<S163>/Product' */
  rtb_Merge_k = BuckyWagon_01_B.s362_Merge * rtb_Morot_Torque;

  /* Sum: '<S163>/Sum' incorporates:
   *  Constant: '<S163>/Constant'
   */
  rtb_to65535_c = 1.0 - rtb_Morot_Torque;

  /* UnitDelay: '<S163>/Unit Delay' */
  rtb_Morot_Torque = BuckyWagon_01_DWork.s163_UnitDelay_DSTATE;

  /* Sum: '<S163>/Sum1' incorporates:
   *  Product: '<S163>/Product1'
   */
  rtb_Sum1_h = rtb_to65535_c * rtb_Morot_Torque + rtb_Merge_k;

  /* Outputs for atomic SubSystem: '<S148>/Regen' */
  /* S-Function Block: <S167>/motohawk_prelookup_row */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (StateOfChargePctIn_DataStore()) = BuckyWagon_01_B.s265_Merge;
    (StateOfChargePctIdx_DataStore()) = TablePrelookup_real_T
      (BuckyWagon_01_B.s265_Merge, (StateOfChargePctIdxArr_DataStore()), 4,
       (StateOfChargePctIdx_DataStore()));
    rtb_motohawk_prelookup_row = (StateOfChargePctIdx_DataStore());
  }

  /* S-Function Block: <S167>/motohawk_prelookup_col */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MotorSpdIn_DataStore()) = rtb_Sum1_h;
    (MotorSpdIdx_DataStore()) = TablePrelookup_real_T(rtb_Sum1_h,
      (MotorSpdIdxArr_DataStore()), 8, (MotorSpdIdx_DataStore()));
    rtb_motohawk_prelookup_col = (MotorSpdIdx_DataStore());
  }

  /* S-Function Block: <S167>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_Switch_m = TableInterpolation2D_real_T(rtb_motohawk_prelookup_row,
      rtb_motohawk_prelookup_col, (real_T *) ((MotoHawkTable2DMap_DataStore())),
      4, 8);
    (MotoHawkTable2D_DataStore()) = rtb_Switch_m;
  }

  /* Saturate: '<S161>/Saturation1' */
  BuckyWagon_01_B.s161_Saturation1 = rt_SATURATE(rtb_Switch_m, 0.0, 1.0);

  /* Sum: '<S161>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration1'
   */
  rtb_Merge_k = BuckyWagon_01_B.s388_Merge - (Regen_Start_DataStore());

  /* Product: '<S161>/Divide' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration2'
   *  Sum: '<S161>/Sum1'
   */
  rtb_Switch_m = rtb_Merge_k / ((Regen_Full_DataStore()) -
    (Regen_Start_DataStore()));

  /* Product: '<S161>/Product' incorporates:
   *  Gain: '<S161>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration3'
   *  Saturate: '<S161>/Saturation2'
   */
  BuckyWagon_01_B.s161_Product = -1.0 * rt_SATURATE(rtb_Switch_m, 0.0, 1.0) *
    (Max_Regen_Tq_DataStore());

  /* Logic: '<S161>/Logical Operator2' incorporates:
   *  Logic: '<S161>/Logical Operator'
   *  Logic: '<S161>/Logical Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration4'
   */
  rtb_LogicalOperator_bd = !((BuckyWagon_01_B.s192_Merge != 0.0) ||
    (!((Enable_Regen_DataStore()) != 0.0)));

  /* RelationalOperator: '<S161>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration6'
   */
  rtb_LogicalOperator12 = (BuckyWagon_01_B.s393_Merge >
    (Min_Speed_Allow_Coast_NegT_DataStore()));

  /* Gain: '<S161>/Gain1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration7'
   */
  rtb_Switch_m = -(Max_Coast_Tq_DataStore());

  /* Product: '<S161>/Product2' incorporates:
   *  Logic: '<S148>/Logic'
   *  RelationalOperator: '<S161>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration8'
   */
  BuckyWagon_01_B.s161_Product2 = (real_T)rtb_LogicalOperator_bd *
    (Enable_Coast_Neg_Torque_DataStore()) * (real_T)rtb_LogicalOperator12 *
    rtb_Switch_m * (real_T)(BuckyWagon_01_B.s265_Merge <
    (Max_SOC_For_Coast_Tq_EN_DataStore())) * (real_T)!rtb_Merge_na;

  /* S-Function Block: <S165>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s165_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_m = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S165>/Product' incorporates:
   *  MinMax: '<S165>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S165>/motohawk_calibration'
   */
  rtb_Switch_m /= rt_MAXd_snf(rtb_Switch_m, (Coast_down_torque_const_DataStore()));

  /* Product: '<S168>/Product' */
  rtb_Merge_k = BuckyWagon_01_B.s161_Product2 * rtb_Switch_m;

  /* Sum: '<S168>/Sum' incorporates:
   *  Constant: '<S168>/Constant'
   */
  rtb_to65535_c = 1.0 - rtb_Switch_m;

  /* UnitDelay: '<S168>/Unit Delay' */
  rtb_Switch_m = BuckyWagon_01_DWork.s168_UnitDelay_DSTATE;

  /* Sum: '<S168>/Sum1' incorporates:
   *  Product: '<S168>/Product1'
   */
  rtb_to65535_c = rtb_to65535_c * rtb_Switch_m + rtb_Merge_k;

  /* If: '<S166>/If' incorporates:
   *  ActionPort: '<S169>/Action Port'
   *  ActionPort: '<S170>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S166>/override_enable'
   *  SubSystem: '<S166>/NewValue'
   *  SubSystem: '<S166>/OldValue'
   */
  if ((Regen_SOC_Speed_Ramp_ovr_ovr_DataStore())) {
    /* Inport: '<S169>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S166>/new_value'
     */
    rtb_Merge_k = (Regen_SOC_Speed_Ramp_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S169>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(58);
    }
  } else {
    /* Inport: '<S170>/In1' */
    rtb_Merge_k = BuckyWagon_01_B.s161_Saturation1;

    /* S-Function (motohawk_sfun_code_cover): '<S170>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(59);
    }
  }

  /* Product: '<S161>/Product1' */
  rtb_Switch_m = (real_T)rtb_LogicalOperator_bd * BuckyWagon_01_B.s161_Product *
    rtb_Merge_k;

  /* Switch: '<S161>/Switch' incorporates:
   *  RelationalOperator: '<S161>/Relational Operator1'
   */
  if (!(rtb_Switch_m <= BuckyWagon_01_B.s161_Product2)) {
    rtb_Switch_m = rtb_to65535_c;
  }

  /* Saturate: '<S161>/Saturation' */
  rtb_Merge_k = rt_SATURATE(rtb_Switch_m, -240.0, 0.0);

  /* Update for UnitDelay: '<S168>/Unit Delay' */
  BuckyWagon_01_DWork.s168_UnitDelay_DSTATE = rtb_to65535_c;

  /* end of Outputs for SubSystem: '<S148>/Regen' */
  /* S-Function Block: <S160>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s160_motohawk_delta_time_DWORK1, NULL);
    rtb_Morot_Torque = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S160>/Product' incorporates:
   *  MinMax: '<S160>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S160>/motohawk_calibration'
   */
  rtb_Morot_Torque /= rt_MAXd_snf(rtb_Morot_Torque,
    (Regin_torque_const_DataStore()));

  /* Product: '<S164>/Product' */
  rtb_Merge_k *= rtb_Morot_Torque;

  /* Sum: '<S164>/Sum' incorporates:
   *  Constant: '<S164>/Constant'
   */
  rtb_to65535_c = 1.0 - rtb_Morot_Torque;

  /* UnitDelay: '<S164>/Unit Delay' */
  rtb_Morot_Torque = BuckyWagon_01_DWork.s164_UnitDelay_DSTATE;

  /* Sum: '<S164>/Sum1' incorporates:
   *  Product: '<S164>/Product1'
   */
  rtb_Merge_k += rtb_to65535_c * rtb_Morot_Torque;

  /* Switch: '<S148>/Switch' incorporates:
   *  Product: '<S148>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S148>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S162>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S162>/motohawk_prelookup'
   */
  if (rtb_Merge_na) {
    /* S-Function Block: <S162>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (AccelPedalMapIn_DataStore()) = BuckyWagon_01_B.s372_Merge;
      (AccelPedalMapIdx_DataStore()) = TablePrelookup_real_T
        (BuckyWagon_01_B.s372_Merge, (AccelPedalMapIdxArr_DataStore()), 101,
         (AccelPedalMapIdx_DataStore()));
      rtb_motohawk_prelookup = (AccelPedalMapIdx_DataStore());
    }

    /* S-Function Block: <S162>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup, (real_T *) ((AccelPedalMapTbl_DataStore())),
         101);
      (AccelPedalMap_DataStore()) = rtb_motohawk_interpolation_1d;
    }

    rtb_Morot_Torque = (Max_Slect_Tq_drive_DataStore()) *
      rtb_motohawk_interpolation_1d;
  } else {
    rtb_Morot_Torque = rtb_Merge_k;
  }

  /* RelationalOperator: '<S130>/Relational Operator1' */
  rtb_Merge_na = (rtb_Morot_Torque < rtb_Switch_h);

  /* Switch: '<S130>/Switch' incorporates:
   *  Logic: '<S130>/Logical Operator1'
   *  Logic: '<S130>/Logical Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S130>/motohawk_calibration'
   */
  if (!(rtb_Merge_na && BuckyWagon_01_B.s149_HillHoldOn &&
        ((HillHoldEnable_DataStore()) != 0.0))) {
    rtb_Switch_h = rtb_Morot_Torque;
  }

  /* Update for UnitDelay: '<S155>/Unit Delay' */
  BuckyWagon_01_DWork.s155_UnitDelay_DSTATE = BuckyWagon_01_B.s155_Sum1;

  /* Update for UnitDelay: '<S152>/Unit Delay' */
  BuckyWagon_01_DWork.s152_UnitDelay_DSTATE = BuckyWagon_01_B.s149_HillHoldOn;

  /* Update for UnitDelay: '<S156>/Unit Delay' */
  BuckyWagon_01_DWork.s156_UnitDelay_DSTATE = rtb_to65535_d;

  /* Update for UnitDelay: '<S163>/Unit Delay' */
  BuckyWagon_01_DWork.s163_UnitDelay_DSTATE = rtb_Sum1_h;

  /* Update for UnitDelay: '<S164>/Unit Delay' */
  BuckyWagon_01_DWork.s164_UnitDelay_DSTATE = rtb_Merge_k;

  /* end of Outputs for SubSystem: '<S9>/Drive' */

  /* Product: '<S9>/Product1' */
  BuckyWagon_01_B.s9_Motor_Torque = (rtb_LogicalOperator2_e ? (real_T)
    rtb_RelationalOperator_fj : 0.0) * rtb_to65535_b * rtb_Switch_h;

  /* S-Function Block: <S132>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s132_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_d = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S132>/Product' incorporates:
   *  MinMax: '<S132>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration'
   */
  rtb_DataTypeConversion_d /= rt_MAXd_snf(rtb_DataTypeConversion_d,
    (FiltConst_DataStore()));

  /* Sum: '<S178>/Sum1' incorporates:
   *  Constant: '<S178>/Constant'
   *  Product: '<S178>/Product'
   *  Product: '<S178>/Product1'
   *  Sum: '<S178>/Sum'
   *  UnitDelay: '<S178>/Unit Delay'
   */
  BuckyWagon_01_B.s178_Sum1 = (1.0 - rtb_DataTypeConversion_d) *
    BuckyWagon_01_DWork.s178_UnitDelay_DSTATE + BuckyWagon_01_B.s9_Motor_Torque *
    rtb_DataTypeConversion_d;

  /* If: '<S135>/If' incorporates:
   *  ActionPort: '<S195>/Action Port'
   *  ActionPort: '<S196>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S135>/override_enable'
   *  SubSystem: '<S135>/NewValue'
   *  SubSystem: '<S135>/OldValue'
   */
  if ((motor_torque_Ovr_ovr_DataStore())) {
    /* Inport: '<S195>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S135>/new_value'
     */
    BuckyWagon_01_B.s135_Merge = (motor_torque_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S195>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(68);
    }
  } else {
    /* Inport: '<S196>/In1' */
    BuckyWagon_01_B.s135_Merge = BuckyWagon_01_B.s178_Sum1;

    /* S-Function (motohawk_sfun_code_cover): '<S196>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(69);
    }
  }

  /* Abs: '<S18>/Abs' */
  rtb_Merge_k = fabs(BuckyWagon_01_B.s135_Merge);

  /* Stateflow: '<S18>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S18>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S18>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S18>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_calibration): '<S18>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S18>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S18>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_data_read): '<S18>/motohawk_data_read'
   */
  /* Gateway: Foreground/Actuators/Eaton Controller/Chart */
  /* During: Foreground/Actuators/Eaton Controller/Chart */
  if (BuckyWagon_01_DWork.s82_is_active_c7_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Actuators/Eaton Controller/Chart */
    BuckyWagon_01_DWork.s82_is_active_c7_BuckyWagon_01 = 1U;

    /* Transition: '<S82>:2' */
    /* Entry 'Init': '<S82>:1' */
    BuckyWagon_01_DWork.s82_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_Init;
  } else {
    switch (BuckyWagon_01_DWork.s82_is_c7_BuckyWagon_01) {
     case BuckyWagon_01_IN_Init:
      /* During 'Init': '<S82>:1' */
      if (BuckyWagon_01_B.s392_Sum >= (Motor_Start_Delay_DataStore())) {
        /* Transition: '<S82>:4' */
        /* Exit 'Init': '<S82>:1' */
        /* Entry 'On': '<S82>:3' */
        BuckyWagon_01_DWork.s82_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_On_h;
      } else {
        BuckyWagon_01_B.s82_ctrlState = (initState_DataStore());
      }
      break;

     case BuckyWagon_01_IN_Off_h:
      /* During 'Off': '<S82>:5' */
      BuckyWagon_01_B.s82_ctrlState = (offState_DataStore());
      break;

     case BuckyWagon_01_IN_On_h:
      /* During 'On': '<S82>:3' */
      if (Shutdown_Req_DataStore()) {
        /* Transition: '<S82>:6' */
        /* Exit 'On': '<S82>:3' */
        /* Entry 'Off': '<S82>:5' */
        BuckyWagon_01_DWork.s82_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_Off_h;
      } else if ((BuckyWagon_01_B.s392_Sum >= (Motor_Start_Off_Delay_DataStore()))
                 && (rtb_Merge_k < (Torqe_Threshold_DataStore()))) {
        /* Transition: '<S82>:20' */
        /* Exit 'On': '<S82>:3' */
        /* Entry 'Standby': '<S82>:19' */
        BuckyWagon_01_DWork.s82_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_Standby;
      } else {
        BuckyWagon_01_B.s82_ctrlState = (onState_DataStore());
      }
      break;

     case BuckyWagon_01_IN_Restart:
      /* During 'Restart': '<S82>:21' */
      if (BuckyWagon_01_B.s82_ctrlState == (initState_DataStore())) {
        /* Transition: '<S82>:23' */
        /* Exit 'Restart': '<S82>:21' */
        /* Entry 'On': '<S82>:3' */
        BuckyWagon_01_DWork.s82_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_On_h;
      } else if (Shutdown_Req_DataStore()) {
        /* Transition: '<S82>:26' */
        /* Exit 'Restart': '<S82>:21' */
        /* Entry 'Off': '<S82>:5' */
        BuckyWagon_01_DWork.s82_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_Off_h;
      } else {
        BuckyWagon_01_B.s82_ctrlState = (initState_DataStore());
      }
      break;

     case BuckyWagon_01_IN_Standby:
      /* During 'Standby': '<S82>:19' */
      if (rtb_Merge_k >= (Torqe_Threshold_DataStore())) {
        /* Transition: '<S82>:22' */
        /* Exit 'Standby': '<S82>:19' */
        /* Entry 'Restart': '<S82>:21' */
        BuckyWagon_01_DWork.s82_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_Restart;
      } else if (Shutdown_Req_DataStore()) {
        /* Transition: '<S82>:25' */
        /* Exit 'Standby': '<S82>:19' */
        /* Entry 'Off': '<S82>:5' */
        BuckyWagon_01_DWork.s82_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_Off_h;
      } else {
        BuckyWagon_01_B.s82_ctrlState = (offState_DataStore());
      }
      break;

     default:
      /* Transition: '<S82>:2' */
      /* Entry 'Init': '<S82>:1' */
      BuckyWagon_01_DWork.s82_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_Init;
      break;
    }
  }

  /* If: '<S83>/If' incorporates:
   *  ActionPort: '<S85>/Action Port'
   *  ActionPort: '<S86>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S83>/override_enable'
   *  SubSystem: '<S83>/NewValue'
   *  SubSystem: '<S83>/OldValue'
   */
  if ((Control_Mode_Ovr_ovr_DataStore())) {
    /* Inport: '<S85>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S83>/new_value'
     */
    rtb_Merge_f = (Control_Mode_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S85>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(34);
    }
  } else {
    /* Inport: '<S86>/In1' */
    rtb_Merge_f = BuckyWagon_01_B.s82_ctrlState;

    /* S-Function (motohawk_sfun_code_cover): '<S86>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(35);
    }
  }

  /* Product: '<S18>/Product' incorporates:
   *  Constant: '<S18>/Constant1'
   */
  BuckyWagon_01_B.s18_Product = -BuckyWagon_01_B.s135_Merge;

  /* If: '<S84>/If' incorporates:
   *  ActionPort: '<S87>/Action Port'
   *  ActionPort: '<S88>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S84>/override_enable'
   *  SubSystem: '<S84>/NewValue'
   *  SubSystem: '<S84>/OldValue'
   */
  if ((Torque_Command_Ovr_ovr_DataStore())) {
    /* Inport: '<S87>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S84>/new_value'
     */
    rtb_Merge_g = (Torque_Command_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S87>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(36);
    }
  } else {
    /* Inport: '<S88>/In1' */
    rtb_Merge_g = BuckyWagon_01_B.s18_Product;

    /* S-Function (motohawk_sfun_code_cover): '<S88>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(37);
    }
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S18>/Send CAN Messages' */
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
      /* 0x18ff3aef */
      {
        extern boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint16_T tmp3;
        uint8_T tmp4;
        uint16_T tmp5;
        uint8_T tmp6;
        if (rtb_Merge_f < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_f > 15.0000000000F) {
          tmp0 = (uint8_T)(15U);
        } else {
          tmp0 = (uint8_T)(rtb_Merge_f);
        }

        tmp1 = (uint8_T)(15U);
        tmp2 = (uint8_T)(15U);
        if ((Speed_DataStore()) < -8000.0000000000F) {
          tmp3 = (uint16_T)(0U);
        } else if ((Speed_DataStore()) > 8383.7500000000F) {
          tmp3 = (uint16_T)(65535U);
        } else {
          tmp3 = (uint16_T)(((Speed_DataStore()) - (-8000.0000000000F)) *
                            (4.0000000000F));
        }

        if ((Speed_Ramp_Rate_DataStore()) < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if ((Speed_Ramp_Rate_DataStore()) > 255.0000000000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)((Speed_Ramp_Rate_DataStore()));
        }

        if (rtb_Merge_g < -3200.0000000000F) {
          tmp5 = (uint16_T)(0U);
        } else if (rtb_Merge_g > 3353.5000000000F) {
          tmp5 = (uint16_T)(65535U);
        } else {
          tmp5 = (uint16_T)((rtb_Merge_g - (-3200.0000000000F)) *
                            (10.0000000000F));
        }

        if ((Torque_Ramp_Rate_DataStore()) < 0.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if ((Torque_Ramp_Rate_DataStore()) > 1020.0000000000F) {
          tmp6 = (uint8_T)(255U);
        } else {
          tmp6 = (uint8_T)((Torque_Ramp_Rate_DataStore()) / (4.0000000000F));
        }

        msg_data[0] = ((((uint8_T *)(&tmp3))[1])) ;
        msg_data[1] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[2] = ((((uint8_T *)(&tmp5))[1])) ;
        msg_data[3] = ((((uint8_T *)(&tmp5))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp0))[0] & 0x0000000F)) ;
        msg_data[5] = ((((uint8_T *)(&tmp4))[0])) ;
        msg_data[6] = ((((uint8_T *)(&tmp6))[0])) ;
        msg_data[7] = ((((uint8_T *)(&tmp1))[0] & 0x0000000F) << 4) |
          ((((uint8_T *)(&tmp2))[0] & 0x0000000F)) ;
        CAN_2_Transmit(1, 0x18ff3aefUL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S93>/If' incorporates:
   *  ActionPort: '<S102>/Action Port'
   *  ActionPort: '<S103>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S93>/override_enable'
   *  SubSystem: '<S93>/NewValue'
   *  SubSystem: '<S93>/OldValue'
   */
  if ((Charge_Enable_Override_ovr_DataStore())) {
    /* Inport: '<S102>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S93>/new_value'
     */
    BuckyWagon_01_B.s93_Merge = (Charge_Enable_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S102>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(46);
    }
  } else {
    /* Inport: '<S103>/In1' */
    BuckyWagon_01_B.s93_Merge = rtb_LogicalOperator5_k;

    /* S-Function (motohawk_sfun_code_cover): '<S103>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(47);
    }
  }

  /* If: '<S92>/If' incorporates:
   *  ActionPort: '<S100>/Action Port'
   *  ActionPort: '<S101>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S92>/override_enable'
   *  SubSystem: '<S92>/NewValue'
   *  SubSystem: '<S92>/OldValue'
   */
  if ((Charge_Complete_Override_ovr_DataStore())) {
    /* Inport: '<S100>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S92>/new_value'
     */
    BuckyWagon_01_B.s92_Merge = (Charge_Complete_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S100>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(44);
    }
  } else {
    /* Inport: '<S101>/In1' incorporates:
     *  Constant: '<S19>/Constant'
     */
    BuckyWagon_01_B.s92_Merge = 0.0;

    /* S-Function (motohawk_sfun_code_cover): '<S101>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(45);
    }
  }

  /* If: '<S91>/If' incorporates:
   *  ActionPort: '<S98>/Action Port'
   *  ActionPort: '<S99>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S91>/override_enable'
   *  SubSystem: '<S91>/NewValue'
   *  SubSystem: '<S91>/OldValue'
   */
  if ((Charge_Falt_Override_ovr_DataStore())) {
    /* Inport: '<S98>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S91>/new_value'
     */
    BuckyWagon_01_B.s91_Merge = ((uint8_T)(Charge_Falt_Override_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S98>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(42);
    }
  } else {
    /* Inport: '<S99>/In1' incorporates:
     *  Constant: '<S19>/Constant3'
     */
    BuckyWagon_01_B.s91_Merge = 0U;

    /* S-Function (motohawk_sfun_code_cover): '<S99>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(43);
    }
  }

  /* If: '<S90>/If' incorporates:
   *  ActionPort: '<S96>/Action Port'
   *  ActionPort: '<S97>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S90>/override_enable'
   *  SubSystem: '<S90>/NewValue'
   *  SubSystem: '<S90>/OldValue'
   */
  if ((Voltage_Limit_Override_ovr_DataStore())) {
    /* Inport: '<S96>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S90>/new_value'
     */
    BuckyWagon_01_B.s90_Merge = (Voltage_Limit_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S96>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(40);
    }
  } else {
    /* Inport: '<S97>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S19>/motohawk_calibration1'
     */
    BuckyWagon_01_B.s90_Merge = (Voltage_Limit_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S97>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(41);
    }
  }

  /* If: '<S89>/If' incorporates:
   *  ActionPort: '<S94>/Action Port'
   *  ActionPort: '<S95>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S89>/override_enable'
   *  SubSystem: '<S89>/NewValue'
   *  SubSystem: '<S89>/OldValue'
   */
  if ((Current_Limit_Override_ovr_DataStore())) {
    /* Inport: '<S94>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S89>/new_value'
     */
    BuckyWagon_01_B.s89_Merge = (Current_Limit_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S94>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(38);
    }
  } else {
    /* Inport: '<S95>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S19>/motohawk_calibration'
     */
    BuckyWagon_01_B.s89_Merge = (Current_Limit_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S95>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(39);
    }
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S19>/Send CAN Messages' */
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
        extern boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint16_T tmp3;
        uint16_T tmp4;
        uint8_T tmp5;
        uint8_T tmp6;
        tmp0 = (uint8_T)(BuckyWagon_01_B.s93_Merge);
        if (BuckyWagon_01_B.s92_Merge < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (BuckyWagon_01_B.s92_Merge > 3.0000000000F) {
          tmp1 = (uint8_T)(3U);
        } else {
          tmp1 = (uint8_T)(BuckyWagon_01_B.s92_Merge);
        }

        if (BuckyWagon_01_B.s91_Merge > 3U) {
          tmp2 = (uint8_T)(3U);
        } else {
          tmp2 = (uint8_T)(BuckyWagon_01_B.s91_Merge);
        }

        if (BuckyWagon_01_B.s90_Merge < 0.0000000000F) {
          tmp3 = (uint16_T)(0U);
        } else if (BuckyWagon_01_B.s90_Merge > 803.0000000000F) {
          tmp3 = (uint16_T)(4015U);
        } else {
          tmp3 = (uint16_T)(BuckyWagon_01_B.s90_Merge * (5.0000000000F));
        }

        if (BuckyWagon_01_B.s89_Merge < 0.0000000000F) {
          tmp4 = (uint16_T)(0U);
        } else if (BuckyWagon_01_B.s89_Merge > 200.7500000000F) {
          tmp4 = (uint16_T)(4015U);
        } else {
          tmp4 = (uint16_T)(BuckyWagon_01_B.s89_Merge * (20.0000000000F));
        }

        tmp5 = (uint8_T)(15U);
        if (((uint8_T)0U) > 15U) {
          tmp6 = (uint8_T)(15U);
        } else {
          tmp6 = (uint8_T)(((uint8_T)0U));
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
        CAN_2_Transmit(1, 0x18ff4aefUL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* If: '<S104>/If' incorporates:
   *  ActionPort: '<S108>/Action Port'
   *  ActionPort: '<S109>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S104>/override_enable'
   *  SubSystem: '<S104>/NewValue'
   *  SubSystem: '<S104>/OldValue'
   */
  if ((SpeedSet_ovr_DataStore())) {
    /* Inport: '<S108>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S104>/new_value'
     */
    rtb_Merge_d = (SpeedSet_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S108>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(48);
    }
  } else {
    /* Inport: '<S109>/In1' incorporates:
     *  Constant: '<S20>/Constant'
     */
    rtb_Merge_d = 0.0;

    /* S-Function (motohawk_sfun_code_cover): '<S109>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(49);
    }
  }

  /* If: '<S107>/If' incorporates:
   *  ActionPort: '<S114>/Action Port'
   *  ActionPort: '<S115>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S107>/override_enable'
   *  SubSystem: '<S107>/NewValue'
   *  SubSystem: '<S107>/OldValue'
   */
  if ((TorqueControl_ovr_DataStore())) {
    /* Inport: '<S114>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S107>/new_value'
     */
    BuckyWagon_01_B.s107_Merge = (TorqueControl_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S114>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(54);
    }
  } else {
    /* Inport: '<S115>/In1' */
    BuckyWagon_01_B.s107_Merge = BuckyWagon_01_B.s135_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S115>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(55);
    }
  }

  /* If: '<S105>/If' incorporates:
   *  ActionPort: '<S110>/Action Port'
   *  ActionPort: '<S111>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S105>/override_enable'
   *  SubSystem: '<S105>/NewValue'
   *  SubSystem: '<S105>/OldValue'
   */
  if ((LowerTorqueLimit_ovr_DataStore())) {
    /* Inport: '<S110>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S105>/new_value'
     */
    rtb_Merge_b = (LowerTorqueLimit_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S110>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(50);
    }
  } else {
    /* Inport: '<S111>/In1' */
    rtb_Merge_b = BuckyWagon_01_B.s107_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S111>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(51);
    }
  }

  /* If: '<S106>/If' incorporates:
   *  ActionPort: '<S112>/Action Port'
   *  ActionPort: '<S113>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S106>/override_enable'
   *  SubSystem: '<S106>/NewValue'
   *  SubSystem: '<S106>/OldValue'
   */
  if ((UpperTorqueLimit_ovr_DataStore())) {
    /* Inport: '<S112>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S106>/new_value'
     */
    rtb_Merge_o = (UpperTorqueLimit_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S112>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(52);
    }
  } else {
    /* Inport: '<S113>/In1' */
    rtb_Merge_o = BuckyWagon_01_B.s107_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S113>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(53);
    }
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S20>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (50.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (49500U)
         )) {
      /* 0x160 */
      {
        extern boolean_T CAN_2_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        int16_T tmp0;
        int16_T tmp1;
        int16_T tmp2;
        if (rtb_Merge_d < -80000.0000000000F) {
          tmp0 = (int16_T)(-32768);
        } else if (rtb_Merge_d > 79997.5585937500F) {
          tmp0 = (int16_T)(32767);
        } else {
          tmp0 = (int16_T)(rtb_Merge_d / (2.4414062500F));
        }

        if (rtb_Merge_b < -3200.0000000000F) {
          tmp1 = (int16_T)(-32768);
        } else if (rtb_Merge_b > 3199.9023437500F) {
          tmp1 = (int16_T)(32767);
        } else {
          tmp1 = (int16_T)(rtb_Merge_b * (10.2400000000F));
        }

        if (rtb_Merge_o < -3200.0000000000F) {
          tmp2 = (int16_T)(-32768);
        } else if (rtb_Merge_o > 3199.9023437500F) {
          tmp2 = (int16_T)(32767);
        } else {
          tmp2 = (int16_T)(rtb_Merge_o * (10.2400000000F));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[2] = ((((uint8_T *)(&tmp1))[1])) ;
        msg_data[3] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp2))[1])) ;
        msg_data[5] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_2_Transmit(0, 0x160UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* RelationalOperator: '<S122>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S122>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_c = (BuckyWagon_01_B.s265_Merge <=
    (Under_SOC_Shutdown_Thresh_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S119>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Low_SOC_Shutdown */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(23, rtb_RelationalOperator1_c);
    UpdateFault(23);
  }

  /* RelationalOperator: '<S122>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S122>/motohawk_calibration2'
   */
  rtb_RelationalOperator_a = ((Over_SOC_Shutdown_Thresh_DataStore()) <=
    BuckyWagon_01_B.s265_Merge);

  /* S-Function (motohawk_sfun_fault_def): '<S119>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: High_SOC_Shutdown */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(15, rtb_RelationalOperator_a);
    UpdateFault(15);
  }

  /* RelationalOperator: '<S121>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_cw = (BuckyWagon_01_B.s265_Merge <=
    (Under_SOCAlertThresh_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S119>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Low_SOC_Alert */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(22, rtb_RelationalOperator1_cw);
    UpdateFault(22);
  }

  /* RelationalOperator: '<S121>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration2'
   */
  rtb_RelationalOperator_ac = ((Over_SOCAlertThresh_DataStore()) <=
    BuckyWagon_01_B.s265_Merge);

  /* S-Function (motohawk_sfun_fault_def): '<S119>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: High_SOC_Alert */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(14, rtb_RelationalOperator_ac);
    UpdateFault(14);
  }

  /* Sum: '<S116>/Subtract' */
  rtb_DataTypeConversion_d = BuckyWagon_01_B.s245_bcm_vbat -
    BuckyWagon_01_B.s251_DC_Bus_Voltage;

  /* Abs: '<S116>/Abs' */
  rtb_Merge_k = fabs(rtb_DataTypeConversion_d);

  /* RelationalOperator: '<S116>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S116>/motohawk_calibration2'
   */
  rtb_Merge_na = (rtb_Merge_k >= (HV_Bus_allowed_mismatch_DataStore()));

  /* Outputs for enable SubSystem: '<S116>/Time Since Enabled (With Input)1' incorporates:
   *  EnablePort: '<S120>/Enable'
   *  S-Function (motohawk_sfun_data_read): '<S116>/motohawk_data_read'
   */
  if (Batt_Load_Enable_DataStore()) {
    if (!((int32_T)BuckyWagon_01_DWork.s116_TimeSinceEnabledWithInput1_MODE != 0))
    {
      /* S-Function Block: <S120>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BuckyWagon_01_DWork.s120_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S120>/Unit Delay' */
      BuckyWagon_01_DWork.s120_UnitDelay_DSTATE = 0.0;
      BuckyWagon_01_DWork.s116_TimeSinceEnabledWithInput1_MODE = TRUE;
    }

    /* S-Function Block: <S120>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BuckyWagon_01_DWork.s120_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_a = ((real_T) delta) * 0.000001;
    }

    /* UnitDelay: '<S120>/Unit Delay' */
    BuckyWagon_01_B.s120_UnitDelay = BuckyWagon_01_DWork.s120_UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S120>/Unit Delay' incorporates:
     *  Sum: '<S120>/Sum'
     *  Update for S-Function (motohawk_sfun_delta_time): '<S120>/motohawk_delta_time'
     */
    BuckyWagon_01_DWork.s120_UnitDelay_DSTATE = rtb_motohawk_delta_time_a +
      BuckyWagon_01_B.s120_UnitDelay;
  } else {
    if ((int32_T)BuckyWagon_01_DWork.s116_TimeSinceEnabledWithInput1_MODE) {
      /* Disable for Outport: '<S120>/Time Since Enabled [sec]' */
      BuckyWagon_01_B.s120_UnitDelay = 0.0;
      BuckyWagon_01_DWork.s116_TimeSinceEnabledWithInput1_MODE = FALSE;
    }
  }

  /* end of Outputs for SubSystem: '<S116>/Time Since Enabled (With Input)1' */

  /* Logic: '<S116>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S116>/Relational Operator8'
   *  S-Function (motohawk_sfun_calibration): '<S116>/motohawk_calibration8'
   */
  rtb_LogicalOperator1_f = (rtb_Merge_na && BuckyWagon_01_B.s262_Merge &&
    (BuckyWagon_01_B.s120_UnitDelay >= (HV_Bus_offline_delay_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S116>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: HV_BUS_OFFLINE_check_fuse */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(12, rtb_LogicalOperator1_f);
    UpdateFault(12);
  }

  /* S-Function Block: <S12>/motohawk_ain5 Resource: LV_Voltage_Pin */
  {
    extern NativeError_S LV_Voltage_Pin_AnalogInput_Get(uint16_T *adc, uint16_T *
      status);
    LV_Voltage_Pin_AnalogInput_Get(&BuckyWagon_01_B.s12_motohawk_ain5, NULL);
  }

  /* DataTypeConversion: '<S253>/Data Type Conversion' */
  rtb_DataTypeConversion_d = (real_T)BuckyWagon_01_B.s12_motohawk_ain5;

  /* Product: '<S253>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration4'
   */
  rtb_Merge_k = rtb_DataTypeConversion_d * (LVVolt_Gain_DataStore());

  /* Sum: '<S253>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration5'
   */
  BuckyWagon_01_B.s253_Sum1 = rtb_Merge_k + (LVVolt_Ofst_DataStore());

  /* Logic: '<S253>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S253>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S253>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_fj = (IsFaultActive(19) || IsFaultActive(20));

  /* Logic: '<S253>/Logical Operator6' */
  rtb_Merge_na = !rtb_RelationalOperator_fj;

  /* Logic: '<S253>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S253>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S253>/motohawk_fault_status3'
   */
  rtb_LogicalOperator_bd = (IsFaultSuspected(19) || IsFaultSuspected(20));

  /* UnitDelay: '<S253>/Unit Delay1' */
  rtb_UnitDelay1_f = BuckyWagon_01_DWork.s253_UnitDelay1_DSTATE;

  /* If: '<S253>/If' incorporates:
   *  ActionPort: '<S377>/Action Port'
   *  ActionPort: '<S378>/Action Port'
   *  ActionPort: '<S379>/Action Port'
   *  Logic: '<S253>/Logical Operator5'
   *  SubSystem: '<S253>/If Action Subsystem'
   *  SubSystem: '<S253>/If Action Subsystem1'
   *  SubSystem: '<S253>/If Action Subsystem2'
   */
  if (rtb_Merge_na && rtb_LogicalOperator_bd) {
    BuckyWagon_01_IfActionSubsystem(rtb_UnitDelay1_f, &rtb_Merge_ep);
  } else if (rtb_RelationalOperator_fj) {
    BuckyWagon_01_IfActionSubsystem((LVVolt_DfltValue_DataStore()),
      &rtb_Merge_ep);
  } else {
    BuckyWagon_01_IfActionSubsystem(BuckyWagon_01_B.s253_Sum1, &rtb_Merge_ep);
  }

  /* S-Function Block: <S376>/motohawk_delta_time */
  rtb_Gain7 = 0.005;

  /* Product: '<S376>/Product' incorporates:
   *  MinMax: '<S376>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S376>/motohawk_calibration'
   */
  rtb_Gain7 /= rt_MAXd_snf(rtb_Gain7, (LVVolt_FilterConst_DataStore()));

  /* Sum: '<S381>/Sum1' incorporates:
   *  Constant: '<S381>/Constant'
   *  Product: '<S381>/Product'
   *  Product: '<S381>/Product1'
   *  Sum: '<S381>/Sum'
   *  UnitDelay: '<S381>/Unit Delay'
   */
  rtb_to65535_d = (1.0 - rtb_Gain7) * BuckyWagon_01_DWork.s381_UnitDelay_DSTATE
    + rtb_Merge_ep * rtb_Gain7;

  /* If: '<S380>/If' incorporates:
   *  ActionPort: '<S382>/Action Port'
   *  ActionPort: '<S383>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S380>/override_enable'
   *  SubSystem: '<S380>/NewValue'
   *  SubSystem: '<S380>/OldValue'
   */
  if ((LVVolt_ovr_DataStore())) {
    /* Inport: '<S382>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S380>/new_value'
     */
    BuckyWagon_01_B.s380_Merge = (LVVolt_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S382>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(135);
    }
  } else {
    /* Inport: '<S383>/In1' */
    BuckyWagon_01_B.s380_Merge = rtb_to65535_d;

    /* S-Function (motohawk_sfun_code_cover): '<S383>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(136);
    }
  }

  /* RelationalOperator: '<S117>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S117>/motohawk_calibration3'
   */
  rtb_RelationalOperator3 = (BuckyWagon_01_B.s380_Merge < (Low12VThres_DataStore
                              ()));

  /* S-Function (motohawk_sfun_fault_def): '<S117>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: LVVoltLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    boolean_T update;
    if (BuckyWagon_01_DWork.s117_motohawk_fault_def5_DWORK1 >= 3) {
      update = 1;
      BuckyWagon_01_DWork.s117_motohawk_fault_def5_DWORK1 = 0;
    } else {
      update = 0;
      BuckyWagon_01_DWork.s117_motohawk_fault_def5_DWORK1++;
    }

    SetFaultSuspected(18, rtb_RelationalOperator3);
    if (update)
      UpdateFault(18);
  }

  /* RelationalOperator: '<S117>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S117>/motohawk_calibration4'
   */
  rtb_RelationalOperator4_d = (BuckyWagon_01_B.s380_Merge >
    (High12VThres_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S117>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: LVVoltHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(17, rtb_RelationalOperator4_d);
    UpdateFault(17);
  }

  /* Switch: '<S125>/Switch1' incorporates:
   *  Constant: '<S118>/Constant3'
   *  UnitDelay: '<S125>/Unit Delay'
   */
  if (BuckyWagon_01_ConstB.s125_DataTypeConversion) {
    BuckyWagon_01_B.s125_Switch1 = 0.0;
  } else {
    BuckyWagon_01_B.s125_Switch1 = BuckyWagon_01_DWork.s125_UnitDelay_DSTATE;
  }

  /* RelationalOperator: '<S124>/LT' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration2'
   */
  rtb_RelationalOperator_fj = (BuckyWagon_01_B.s125_Switch1 >=
    (StallTrqThres_DataStore()));

  /* RelationalOperator: '<S124>/LT1' incorporates:
   *  Constant: '<S118>/Constant4'
   */
  rtb_BelowLoTarget = (BuckyWagon_01_B.s125_Switch1 <= 0.0);

  /* CombinatorialLogic: '<S126>/Combinatorial  Logic' */
  {
    uint_T rowidx= 0;

    /* Compute the truth table row index corresponding to the input */
    rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator_fj != 0);
    rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

    /* Copy the appropriate row of the table into the block output vector */
    rtb_CombinatorialLogic[0] =
      BuckyWagon_01_ConstP.CombinatorialLogic_table[rowidx];
    rtb_CombinatorialLogic[1] =
      BuckyWagon_01_ConstP.CombinatorialLogic_table[rowidx + 4];
  }

  /* Switch: '<S126>/Switch1' incorporates:
   *  UnitDelay: '<S126>/Unit Delay'
   */
  if (rtb_CombinatorialLogic[1]) {
    rtb_Switch1_m = rtb_CombinatorialLogic[0];
  } else {
    rtb_Switch1_m = BuckyWagon_01_DWork.s126_UnitDelay_DSTATE;
  }

  /* S-Function (motohawk_sfun_fault_def): '<S118>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: LockedRotor */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(21, rtb_Switch1_m);
    UpdateFault(21);
  }

  /* Abs: '<S118>/Abs' */
  rtb_Merge_k = fabs(BuckyWagon_01_B.s393_Merge);

  /* Switch: '<S118>/Switch1' incorporates:
   *  Constant: '<S118>/Constant2'
   *  RelationalOperator: '<S118>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration4'
   */
  if ((AccelRstThres_DataStore()) > BuckyWagon_01_B.s380_Merge) {
    rtb_Gain7 = (AccelRstSpd_DataStore());
  } else {
    rtb_Gain7 = 0.0;
  }

  /* Switch: '<S118>/Switch' incorporates:
   *  Constant: '<S118>/Constant'
   *  Constant: '<S118>/Constant1'
   *  RelationalOperator: '<S118>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration1'
   */
  if (rtb_Merge_k <= (StallSpd_DataStore())) {
    rtb_Product_h = 1.0;
  } else {
    rtb_Product_h = -1.0;
  }

  /* Sum: '<S118>/Sum' incorporates:
   *  Product: '<S118>/Product'
   */
  rtb_Merge_k = rtb_Product_h * BuckyWagon_01_B.s363_Merge - rtb_Gain7;

  /* S-Function Block: <S125>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s125_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_p = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S125>/Sum' incorporates:
   *  Product: '<S125>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S125>/motohawk_delta_time'
   */
  rtb_Product_h = rtb_Merge_k * rtb_motohawk_delta_time_p +
    BuckyWagon_01_B.s125_Switch1;

  /* MinMax: '<S127>/MinMax' incorporates:
   *  Constant: '<S118>/Constant3'
   */
  rtb_Product_h = rt_MAXd_snf(rtb_Product_h, 0.0);

  /* MinMax: '<S127>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration2'
   */
  rtb_to65535_c = rt_MINd_snf(rtb_Product_h, (StallTrqThres_DataStore()));

  /* Logic: '<S118>/Logical Operator' incorporates:
   *  Constant: '<S123>/Constant'
   *  RelationalOperator: '<S123>/Compare'
   *  UnitDelay: '<S118>/Unit Delay'
   */
  BuckyWagon_01_B.s118_LogicalOperator = ((BuckyWagon_01_B.s372_Merge <= 0.01) ||
    BuckyWagon_01_DWork.s118_UnitDelay_DSTATE);

  /* Logic: '<S118>/Logical Operator1' */
  rtb_LogicalOperator1_fv = !BuckyWagon_01_B.s118_LogicalOperator;

  /* S-Function (motohawk_sfun_fault_def): '<S118>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Accel_NeverZeroed */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(0, rtb_LogicalOperator1_fv);
    UpdateFault(0);
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S247>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_2929p0004;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_2929p0004,
      &messageObj);
    BuckyWagon_01_B.s247_DataAvailable_i = msg_valid;
    if ((BuckyWagon_01_B.s247_AgeCount_a + 1) > BuckyWagon_01_B.s247_AgeCount_a)
      BuckyWagon_01_B.s247_AgeCount_a++;
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      int16_T tmp3 = 0;
      uint16_T tmp4 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp3))[1] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[6])) ;
      ((uint8_T *)(&tmp4))[1] = ((messageObj.u1DataArr[7])) ;
      BuckyWagon_01_B.s247_MainsCrntByCntrlPlt = ((real_T) tmp0) / ((real_T) 10);
      BuckyWagon_01_B.s247_MainsCrntByPwrInd = ((real_T) tmp1) / ((real_T) 10);
      BuckyWagon_01_B.s247_AuxBattVlt = ((real_T) tmp2) / ((real_T) 10);
      BuckyWagon_01_B.s247_AhrsByExtShnt = ((real_T) tmp3) / ((real_T) 100);
      BuckyWagon_01_B.s247_OutptCrntByBstr = ((real_T) tmp4) / ((real_T) 100);
      BuckyWagon_01_B.s247_AgeCount_a = 0;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S247>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_2930p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_2930p0001,
      &messageObj);
    if ((BuckyWagon_01_B.s247_AgeCount_m + 1) > BuckyWagon_01_B.s247_AgeCount_m)
      BuckyWagon_01_B.s247_AgeCount_m++;
    if (msg_valid) {
      int16_T tmp0 = 0;
      int16_T tmp1 = 0;
      int16_T tmp2 = 0;
      int16_T tmp3 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp2))[1] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[6])) ;
      ((uint8_T *)(&tmp3))[1] = ((messageObj.u1DataArr[7])) ;
      BuckyWagon_01_B.s247_PwrStgTemp = ((real_T) tmp0) / ((real_T) 10);
      BuckyWagon_01_B.s247_TempExtrn1 = ((real_T) tmp1) / ((real_T) 10);
      BuckyWagon_01_B.s247_TempExtrn2 = ((real_T) tmp2) / ((real_T) 10);
      BuckyWagon_01_B.s247_TempExtrn3 = ((real_T) tmp3) / ((real_T) 10);
      BuckyWagon_01_B.s247_AgeCount_m = 0;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S247>/Read CAN Message4' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_2931p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_2931p0001,
      &messageObj);
    if ((BuckyWagon_01_B.s247_AgeCount_mv + 1) >
        BuckyWagon_01_B.s247_AgeCount_mv)
      BuckyWagon_01_B.s247_AgeCount_mv++;
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
      uint8_T tmp11 = 0;
      uint8_T tmp12 = 0;
      uint8_T tmp13 = 0;
      uint8_T tmp14 = 0;
      uint8_T tmp15 = 0;
      uint8_T tmp16 = 0;
      uint8_T tmp17 = 0;
      uint8_T tmp18 = 0;
      uint8_T tmp19 = 0;
      uint8_T tmp20 = 0;
      uint8_T tmp21 = 0;
      uint8_T tmp22 = 0;
      uint8_T tmp23 = 0;
      uint8_T tmp24 = 0;
      uint8_T tmp25 = 0;
      uint8_T tmp26 = 0;
      uint8_T tmp27 = 0;
      uint8_T tmp28 = 0;
      uint8_T tmp29 = 0;
      uint8_T tmp30 = 0;
      uint8_T tmp31 = 0;
      uint8_T tmp32 = 0;
      uint8_T tmp33 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[0] & 0x00000040) >> 6) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[0] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[0] & 0x00000010) >> 4) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[0] & 0x00000008) >> 3) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[0] & 0x00000004) >> 2) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[0] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp7))[0] = ((messageObj.u1DataArr[0] & 0x00000001)) ;
      ((uint8_T *)(&tmp8))[0] = ((messageObj.u1DataArr[1] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp9))[0] = ((messageObj.u1DataArr[1] & 0x00000040) >> 6) ;
      ((uint8_T *)(&tmp10))[0] = ((messageObj.u1DataArr[1] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp11))[0] = ((messageObj.u1DataArr[1] & 0x00000010) >> 4) ;
      ((uint8_T *)(&tmp12))[0] = ((messageObj.u1DataArr[1] & 0x00000008) >> 3) ;
      ((uint8_T *)(&tmp13))[0] = ((messageObj.u1DataArr[1] & 0x00000004) >> 2) ;
      ((uint8_T *)(&tmp14))[0] = ((messageObj.u1DataArr[1] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp15))[0] = ((messageObj.u1DataArr[1] & 0x00000001)) ;
      ((uint8_T *)(&tmp16))[0] = ((messageObj.u1DataArr[2] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp17))[0] = ((messageObj.u1DataArr[2] & 0x00000040) >> 6) ;
      ((uint8_T *)(&tmp18))[0] = ((messageObj.u1DataArr[2] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp19))[0] = ((messageObj.u1DataArr[2] & 0x00000010) >> 4) ;
      ((uint8_T *)(&tmp20))[0] = ((messageObj.u1DataArr[2] & 0x00000008) >> 3) ;
      ((uint8_T *)(&tmp21))[0] = ((messageObj.u1DataArr[2] & 0x00000004) >> 2) ;
      ((uint8_T *)(&tmp22))[0] = ((messageObj.u1DataArr[2] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp23))[0] = ((messageObj.u1DataArr[2] & 0x00000001)) ;
      ((uint8_T *)(&tmp24))[0] = ((messageObj.u1DataArr[3] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp25))[0] = ((messageObj.u1DataArr[3] & 0x00000040) >> 6) ;
      ((uint8_T *)(&tmp26))[0] = ((messageObj.u1DataArr[3] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp27))[0] = ((messageObj.u1DataArr[3] & 0x00000010) >> 4) ;
      ((uint8_T *)(&tmp28))[0] = ((messageObj.u1DataArr[3] & 0x00000008) >> 3) ;
      ((uint8_T *)(&tmp29))[0] = ((messageObj.u1DataArr[3] & 0x00000004) >> 2) ;
      ((uint8_T *)(&tmp30))[0] = ((messageObj.u1DataArr[4] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp31))[0] = ((messageObj.u1DataArr[4] & 0x00000040) >> 6) ;
      ((uint8_T *)(&tmp32))[0] = ((messageObj.u1DataArr[4] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp33))[0] = ((messageObj.u1DataArr[4] & 0x00000010) >> 4) ;
      BuckyWagon_01_B.s247_OutptOvrVlt = (real_T) tmp0;
      BuckyWagon_01_B.s247_MainsOvrVlt2 = (real_T) tmp1;
      BuckyWagon_01_B.s247_MainsOvrVlt1 = (real_T) tmp2;
      BuckyWagon_01_B.s247_PwrStgShrtCkt = (real_T) tmp3;
      BuckyWagon_01_B.s247_PlsbltyOutptVltMeas = (real_T) tmp4;
      BuckyWagon_01_B.s247_PlsbltyMainsVltMeas = (real_T) tmp5;
      BuckyWagon_01_B.s247_OutptFuseDefect = (real_T) tmp6;
      BuckyWagon_01_B.s247_MainsFuseDefect = (real_T) tmp7;
      BuckyWagon_01_B.s247_BattPolarity = (real_T) tmp8;
      BuckyWagon_01_B.s247_TempSensCap = (real_T) tmp9;
      BuckyWagon_01_B.s247_TempSensPwrStg = (real_T) tmp10;
      BuckyWagon_01_B.s247_TempSensDiode = (real_T) tmp11;
      BuckyWagon_01_B.s247_TempSensXfrmr = (real_T) tmp12;
      BuckyWagon_01_B.s247_TempSensExt1 = (real_T) tmp13;
      BuckyWagon_01_B.s247_TempSensExt2 = (real_T) tmp14;
      BuckyWagon_01_B.s247_TempSensExt3 = (real_T) tmp15;
      BuckyWagon_01_B.s247_FlashChksmFail = (real_T) tmp16;
      BuckyWagon_01_B.s247_NVSRAMChksmFail = (real_T) tmp17;
      BuckyWagon_01_B.s247_EEPROMSysChksmFail = (real_T) tmp18;
      BuckyWagon_01_B.s247_EEPROMPOWChksmFail = (real_T) tmp19;
      BuckyWagon_01_B.s247_WatchdogInternal = (real_T) tmp20;
      BuckyWagon_01_B.s247_Initialization = (real_T) tmp21;
      BuckyWagon_01_B.s247_CANTimeout = (real_T) tmp22;
      BuckyWagon_01_B.s247_CANOff = (real_T) tmp23;
      BuckyWagon_01_B.s247_CAN_Xmit = (real_T) tmp24;
      BuckyWagon_01_B.s247_CAN_Rcv = (real_T) tmp25;
      BuckyWagon_01_B.s247_ShtdwnThrsBattTemp = (real_T) tmp26;
      BuckyWagon_01_B.s247_ShtdwnThresBattVlt = (real_T) tmp27;
      BuckyWagon_01_B.s247_ShtdwnThresBattAhrs = (real_T) tmp28;
      BuckyWagon_01_B.s247_ShtdwnThresChrgTime = (real_T) tmp29;
      BuckyWagon_01_B.s247_PwrLimByLowMainsVlt = (real_T) tmp30;
      BuckyWagon_01_B.s247_PwrLimByLowBattVlt = (real_T) tmp31;
      BuckyWagon_01_B.s247_PwrLimByIntOvrTemp = (real_T) tmp32;
      BuckyWagon_01_B.s247_CmdValOutRange = (real_T) tmp33;
      BuckyWagon_01_B.s247_AgeCount_mv = 0;
    }
  }

  /* If: '<S337>/If' incorporates:
   *  ActionPort: '<S352>/Action Port'
   *  ActionPort: '<S353>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S337>/override_enable'
   *  SubSystem: '<S337>/NewValue'
   *  SubSystem: '<S337>/OldValue'
   */
  if ((OutputVoltage_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S352>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(121);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S353>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(122);
    }
  }

  /* If: '<S338>/If' incorporates:
   *  ActionPort: '<S354>/Action Port'
   *  ActionPort: '<S355>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S338>/override_enable'
   *  SubSystem: '<S338>/NewValue'
   *  SubSystem: '<S338>/OldValue'
   */
  if ((InputCurrentLimitMax_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S354>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(123);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S355>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(124);
    }
  }

  /* If: '<S339>/If' incorporates:
   *  ActionPort: '<S356>/Action Port'
   *  ActionPort: '<S357>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S339>/override_enable'
   *  SubSystem: '<S339>/NewValue'
   *  SubSystem: '<S339>/OldValue'
   */
  if ((InputCurrent_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S356>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(125);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S357>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(126);
    }
  }

  /* If: '<S335>/If' incorporates:
   *  ActionPort: '<S348>/Action Port'
   *  ActionPort: '<S349>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S335>/override_enable'
   *  SubSystem: '<S335>/NewValue'
   *  SubSystem: '<S335>/OldValue'
   */
  if ((Eaton_HV_Charger_Temperature_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S348>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(117);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S349>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(118);
    }
  }

  /* If: '<S334>/If' incorporates:
   *  ActionPort: '<S346>/Action Port'
   *  ActionPort: '<S347>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S334>/override_enable'
   *  SubSystem: '<S334>/NewValue'
   *  SubSystem: '<S334>/OldValue'
   */
  if ((IgnitionStatus_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S346>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(115);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S347>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(116);
    }
  }

  /* If: '<S333>/If' incorporates:
   *  ActionPort: '<S344>/Action Port'
   *  ActionPort: '<S345>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S333>/override_enable'
   *  SubSystem: '<S333>/NewValue'
   *  SubSystem: '<S333>/OldValue'
   */
  if ((ChargerState_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S344>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(113);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S345>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(114);
    }
  }

  /* If: '<S332>/If' incorporates:
   *  ActionPort: '<S342>/Action Port'
   *  ActionPort: '<S343>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S332>/override_enable'
   *  SubSystem: '<S332>/NewValue'
   *  SubSystem: '<S332>/OldValue'
   */
  if ((FaultSeverityIndicator_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S342>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(111);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S343>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(112);
    }
  }

  /* Outputs for atomic SubSystem: '<S12>/EHPAS Power Steering Pump Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S248>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3283p0005;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3283p0005,
      &messageObj);
    if ((BuckyWagon_01_B.s248_AgeCount + 1) > BuckyWagon_01_B.s248_AgeCount)
      BuckyWagon_01_B.s248_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint8_T tmp4 = 0;
      uint8_T tmp5 = 0;
      uint8_T tmp6 = 0;
      BuckyWagon_01_B.s248_ReadCANMessage_o2 = ((messageObj.u4MessageID &
        (0x0000000F)) >> 0);
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp2))[1] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[6] & 0x0000000F)) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[6] & 0x00000070) >> 4) ;
      BuckyWagon_01_B.s248_EHPAS_Input_Voltage = ((real_T) tmp0) * ((real_T) 2);
      BuckyWagon_01_B.s248_EHPAS_Input_Current_NA = ((real_T) tmp1) / ((real_T)
        10);
      BuckyWagon_01_B.s248_EHPAS_Pump_Speed = ((real_T) tmp2) / ((real_T) 8);
      BuckyWagon_01_B.s248_EHPAS_TempMax = ((real_T) tmp3) + ((real_T) -40);
      BuckyWagon_01_B.s248_EHPAS_TempCur = ((real_T) tmp4) + ((real_T) -40);
      BuckyWagon_01_B.s248_EHPAS_Op_State = (real_T) tmp5;
      BuckyWagon_01_B.s248_EHPAS_Fault = (real_T) tmp6;
      BuckyWagon_01_B.s248_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S290>/Compare' incorporates:
   *  Constant: '<S290>/Constant'
   */
  rtb_Compare_f = (BuckyWagon_01_B.s248_AgeCount > 20U);

  /* S-Function (motohawk_sfun_fault_def): '<S248>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: NoCAN_PowerSteering */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(30, rtb_Compare_f);
    UpdateFault(30);
  }

  /* If: '<S291>/If' incorporates:
   *  ActionPort: '<S298>/Action Port'
   *  ActionPort: '<S299>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S291>/override_enable'
   *  SubSystem: '<S291>/NewValue'
   *  SubSystem: '<S291>/OldValue'
   */
  if ((EHPAS_Pump_Speed_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S298>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(85);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S299>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(86);
    }
  }

  /* If: '<S292>/If' incorporates:
   *  ActionPort: '<S300>/Action Port'
   *  ActionPort: '<S301>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S292>/override_enable'
   *  SubSystem: '<S292>/NewValue'
   *  SubSystem: '<S292>/OldValue'
   */
  if ((EHPAS_Op_State_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S300>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(87);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S301>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(88);
    }
  }

  /* If: '<S293>/If' incorporates:
   *  ActionPort: '<S302>/Action Port'
   *  ActionPort: '<S303>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S293>/override_enable'
   *  SubSystem: '<S293>/NewValue'
   *  SubSystem: '<S293>/OldValue'
   */
  if ((EHPAS_Input_Current_NA_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S302>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(89);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S303>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(90);
    }
  }

  /* If: '<S294>/If' incorporates:
   *  ActionPort: '<S304>/Action Port'
   *  ActionPort: '<S305>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S294>/override_enable'
   *  SubSystem: '<S294>/NewValue'
   *  SubSystem: '<S294>/OldValue'
   */
  if ((EHPAS_Input_Voltage_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S304>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(91);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S305>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(92);
    }
  }

  /* If: '<S295>/If' incorporates:
   *  ActionPort: '<S306>/Action Port'
   *  ActionPort: '<S307>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S295>/override_enable'
   *  SubSystem: '<S295>/NewValue'
   *  SubSystem: '<S295>/OldValue'
   */
  if ((EHPAS_Fault_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S306>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(93);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S307>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(94);
    }
  }

  /* If: '<S296>/If' incorporates:
   *  ActionPort: '<S308>/Action Port'
   *  ActionPort: '<S309>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S296>/override_enable'
   *  SubSystem: '<S296>/NewValue'
   *  SubSystem: '<S296>/OldValue'
   */
  if ((EHPAS_TempMax_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S308>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(95);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S309>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(96);
    }
  }

  /* If: '<S297>/If' incorporates:
   *  ActionPort: '<S310>/Action Port'
   *  ActionPort: '<S311>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S297>/override_enable'
   *  SubSystem: '<S297>/NewValue'
   *  SubSystem: '<S297>/OldValue'
   */
  if ((EHPAS_TempCur_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S310>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(97);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S311>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(98);
    }
  }

  /* end of Outputs for SubSystem: '<S12>/EHPAS Power Steering Pump Inputs' */

  /* Outputs for atomic SubSystem: '<S12>/EMP Coolant Pump Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S249>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3339p0005;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3339p0005,
      &messageObj);
    if ((BuckyWagon_01_B.s249_AgeCount + 1) > BuckyWagon_01_B.s249_AgeCount)
      BuckyWagon_01_B.s249_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint16_T tmp3 = 0;
      uint16_T tmp4 = 0;
      uint8_T tmp5 = 0;
      BuckyWagon_01_B.s249_ReadCANMessage_o2 = ((messageObj.u4MessageID &
        (0x0000000F)) >> 0);
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x0000003C) >> 2) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[0] & 0x00000003)) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp2))[1] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp3))[1] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[6])) ;
      ((uint8_T *)(&tmp4))[1] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[7])) ;
      BuckyWagon_01_B.s249_EMP_Pump_Status = (real_T) tmp0;
      BuckyWagon_01_B.s249_EMP_Pump_Mode = (real_T) tmp1;
      BuckyWagon_01_B.s249_EMP_Pump_Speed = ((real_T) tmp2) / ((real_T) 2);
      BuckyWagon_01_B.s249_EMP_Board_Temp = (((real_T) tmp3) / ((real_T) 32)) +
        ((real_T) -273);
      BuckyWagon_01_B.s249_EMP_Pump_Power = (real_T) tmp4;
      BuckyWagon_01_B.s249_EMP_Speed_Percent = ((real_T) tmp5) / ((real_T) 2);
      BuckyWagon_01_B.s249_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S249>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S249>/motohawk_calibration2'
   */
  rtb_AgeCount = ((real_T)BuckyWagon_01_B.s249_AgeCount >
                  (EMP_CAN_MaxAge_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S249>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: NoCAN_CoolantPump */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(27, rtb_AgeCount);
    UpdateFault(27);
  }

  /* If: '<S312>/If' incorporates:
   *  ActionPort: '<S318>/Action Port'
   *  ActionPort: '<S319>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S312>/override_enable'
   *  SubSystem: '<S312>/NewValue'
   *  SubSystem: '<S312>/OldValue'
   */
  if ((EMP_Pump_Speed_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S318>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(99);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S319>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(100);
    }
  }

  /* If: '<S313>/If' incorporates:
   *  ActionPort: '<S320>/Action Port'
   *  ActionPort: '<S321>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S313>/override_enable'
   *  SubSystem: '<S313>/NewValue'
   *  SubSystem: '<S313>/OldValue'
   */
  if ((EMP_Speed_Percent_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S320>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(101);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S321>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(102);
    }
  }

  /* If: '<S314>/If' incorporates:
   *  ActionPort: '<S322>/Action Port'
   *  ActionPort: '<S323>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S314>/override_enable'
   *  SubSystem: '<S314>/NewValue'
   *  SubSystem: '<S314>/OldValue'
   */
  if ((EMP_Pump_Mode_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S322>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(103);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S323>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(104);
    }
  }

  /* If: '<S315>/If' incorporates:
   *  ActionPort: '<S324>/Action Port'
   *  ActionPort: '<S325>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S315>/override_enable'
   *  SubSystem: '<S315>/NewValue'
   *  SubSystem: '<S315>/OldValue'
   */
  if ((EMP_Pump_Status_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S324>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(105);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S325>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(106);
    }
  }

  /* If: '<S316>/If' incorporates:
   *  ActionPort: '<S326>/Action Port'
   *  ActionPort: '<S327>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S316>/override_enable'
   *  SubSystem: '<S316>/NewValue'
   *  SubSystem: '<S316>/OldValue'
   */
  if ((EMP_Board_Temp_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S326>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(107);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S327>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(108);
    }
  }

  /* If: '<S317>/If' incorporates:
   *  ActionPort: '<S328>/Action Port'
   *  ActionPort: '<S329>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S317>/override_enable'
   *  SubSystem: '<S317>/NewValue'
   *  SubSystem: '<S317>/OldValue'
   */
  if ((EMP_Pump_Power_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S328>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(109);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S329>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(110);
    }
  }

  /* end of Outputs for SubSystem: '<S12>/EMP Coolant Pump Inputs' */

  /* S-Function (motohawk_sfun_trigger): '<S2>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_3974p0001 */
  if (BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 == 0) {
    BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S2>/motohawk_trigger' */
  /* Enable for Trigger_FGND_RTI_PERIODIC_3973p0004 */
  if (BuckyWagon_01_DWork.s2_motohawk_trigger_DWORK1 == 0) {
    BuckyWagon_01_DWork.s2_motohawk_trigger_DWORK1 = 1;
  }

  /* Gain: '<S144>/Gain1' incorporates:
   *  Product: '<S144>/Product'
   */
  BuckyWagon_01_B.s144_Gain1 = BuckyWagon_01_B.s245_bcm_vbat *
    BuckyWagon_01_B.s245_bcm_ibat * 0.001;

  /* Gain: '<S144>/Gain4' incorporates:
   *  Sum: '<S144>/Add'
   */
  BuckyWagon_01_B.s144_Gain4 = (BuckyWagon_01_B.s245_bcm_ibat + 0.0) * -1.0;

  /* Gain: '<S144>/Gain5' incorporates:
   *  Product: '<S144>/Product3'
   */
  BuckyWagon_01_B.s144_Gain5 = BuckyWagon_01_B.s144_Gain4 *
    BuckyWagon_01_B.s245_bcm_vbat * 0.001;

  /* Gain: '<S144>/Gain6' incorporates:
   *  Product: '<S144>/Product6'
   */
  BuckyWagon_01_B.s144_Gain6 = 0.0 * BuckyWagon_01_B.s245_bcm_vbat * 0.001;

  /* RelationalOperator: '<S144>/Relational Operator' incorporates:
   *  Constant: '<S144>/Constant'
   */
  rtb_RelationalOperator_fj = (BuckyWagon_01_B.s144_Gain4 >= 0.0);

  /* Product: '<S144>/Product5' */
  rtb_Product_h = BuckyWagon_01_B.s144_Gain4 * (real_T)rtb_RelationalOperator_fj;

  /* Product: '<S144>/Product7' */
  rtb_Merge_k = rtb_Product_h * BuckyWagon_01_B.s245_bcm_vbat;

  /* S-Function Block: <S144>/motohawk_delta_time2 */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s144_motohawk_delta_time2_DWORK1, NULL);
    rtb_motohawk_delta_time2 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S144>/Product8' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S144>/motohawk_delta_time2'
   */
  rtb_Product8 = rtb_Merge_k * rtb_motohawk_delta_time2;

  /* UnitDelay: '<S144>/Unit Delay1'
   *
   * Regarding '<S144>/Unit Delay1':
   *  Operating as an accumulator
   */
  BuckyWagon_01_DWork.s144_UnitDelay1_DSTATE += rtb_Product8;
  rtb_Gain7 = BuckyWagon_01_DWork.s144_UnitDelay1_DSTATE;

  /* Gain: '<S144>/Gain7' */
  rtb_Gain7 *= 2.7777777777777778E-004;

  /* Gain: '<S144>/Gain8' */
  BuckyWagon_01_B.s144_Gain8 = 0.001 * rtb_Gain7;

  /* UnitDelay: '<S129>/Unit Delay' */
  rtb_UnitDelay_b = BuckyWagon_01_DWork.s129_UnitDelay_DSTATE;

  /* Product: '<S144>/Divide3' */
  BuckyWagon_01_B.s144_Divide3 = rtb_Gain7 / rtb_UnitDelay_b;

  /* Product: '<S144>/Product1' incorporates:
   *  Sum: '<S144>/Add1'
   */
  rtb_Product_h = (rtb_Product_h + 0.0) * BuckyWagon_01_B.s245_bcm_vbat;

  /* Gain: '<S144>/Gain' */
  BuckyWagon_01_B.s144_Gain = 0.001 * rtb_Product_h;

  /* S-Function Block: <S144>/motohawk_delta_time1 */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s144_motohawk_delta_time1_DWORK1, NULL);
    rtb_motohawk_delta_time1 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S144>/Product4' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S144>/motohawk_delta_time1'
   */
  rtb_Product4 = rtb_Product_h * rtb_motohawk_delta_time1;

  /* UnitDelay: '<S144>/Unit Delay'
   *
   * Regarding '<S144>/Unit Delay':
   *  Operating as an accumulator
   */
  BuckyWagon_01_DWork.s144_UnitDelay_DSTATE += rtb_Product4;
  rtb_Product_h = BuckyWagon_01_DWork.s144_UnitDelay_DSTATE;

  /* Gain: '<S144>/Gain2' */
  rtb_Gain2 = 2.7777777777777778E-004 * rtb_Product_h;

  /* Gain: '<S144>/Gain3' */
  BuckyWagon_01_B.s144_Gain3 = 0.001 * rtb_Gain2;

  /* Product: '<S144>/Divide' */
  BuckyWagon_01_B.s144_Divide = rtb_Gain2 / rtb_UnitDelay_b;

  /* Stateflow: '<S144>/Downsapmle1' */
  BuckyWagon_01_Downsapmle(rtb_Gain2, (Downsample_DataStore()),
    &BuckyWagon_01_B.s144_sf_Downsapmle1,
    &BuckyWagon_01_DWork.s144_sf_Downsapmle1);

  /* Sum: '<S144>/Subtract1' */
  rtb_Merge_k = BuckyWagon_01_B.s144_sf_Downsapmle1.s145_Out_2 -
    BuckyWagon_01_B.s144_sf_Downsapmle1.s145_Out_1;

  /* Stateflow: '<S144>/Downsapmle' */
  BuckyWagon_01_Downsapmle(rtb_UnitDelay_b, (Downsample_DataStore()),
    &BuckyWagon_01_B.s144_sf_Downsapmle, &BuckyWagon_01_DWork.s144_sf_Downsapmle);

  /* Product: '<S144>/Divide1' incorporates:
   *  Sum: '<S144>/Subtract'
   */
  rtb_Product_h = rtb_Merge_k / (BuckyWagon_01_B.s144_sf_Downsapmle.s145_Out_2 -
    BuckyWagon_01_B.s144_sf_Downsapmle.s145_Out_1);

  /* Saturate: '<S144>/Saturation' */
  BuckyWagon_01_B.s144_Saturation = rt_SATURATE(rtb_Product_h, -1.0E+006,
    50000.0);

  /* Gain: '<S143>/Gain' incorporates:
   *  Abs: '<S143>/Abs'
   */
  rtb_Merge_k = 2.7777777777777778E-004 * fabs(BuckyWagon_01_B.s393_Merge);

  /* S-Function Block: <S143>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s143_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_o = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S143>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S143>/motohawk_delta_time'
   */
  rtb_Product_h = rtb_Merge_k * rtb_motohawk_delta_time_o;

  /* Sum: '<S143>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S143>/motohawk_data_read'
   */
  BuckyWagon_01_B.s143_Sum1 = rtb_Product_h + Odometer_DataStore();

  /* S-Function (motohawk_sfun_data_write): '<S143>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Odometer */
  {
    Odometer_DataStore() = BuckyWagon_01_B.s143_Sum1;
  }

  /* UnitDelay: '<S143>/Unit Delay'
   *
   * Regarding '<S143>/Unit Delay':
   *  Operating as an accumulator
   */
  BuckyWagon_01_DWork.s143_UnitDelay_DSTATE += rtb_Product_h;
  BuckyWagon_01_B.s143_UnitDelay = BuckyWagon_01_DWork.s143_UnitDelay_DSTATE;

  /* If: '<S172>/If' incorporates:
   *  ActionPort: '<S174>/Action Port'
   *  ActionPort: '<S175>/Action Port'
   *  S-Function (motohawk_sfun_calibration): '<S172>/override_enable'
   *  SubSystem: '<S172>/NewValue'
   *  SubSystem: '<S172>/OldValue'
   */
  if ((EHPAS_PumpState_ovr_ovr_DataStore())) {
    /* S-Function (motohawk_sfun_code_cover): '<S174>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(60);
    }
  } else {
    /* S-Function (motohawk_sfun_code_cover): '<S175>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(61);
    }
  }

  /* S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration2' */
  rtb_motohawk_calibration8 = (EHPAS_LowSpeedManeuvering_DataStore());

  /* S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration4' */
  rtb_motohawk_calibration8 = (EHPAS_NormalDriving_DataStore());

  /* S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration5' */
  rtb_motohawk_calibration8 = (EHPAS_BrakingNormalDriving_DataStore());

  /* S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration6' */
  rtb_motohawk_calibration8 = (EHPAS_KeyUpActive_DataStore());

  /* S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration7' */
  rtb_motohawk_calibration8 = (EHPAS_BrakingZeroSpeed_DataStore());

  /* S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration8' */
  rtb_motohawk_calibration8 = (EHPAS_ZeroCommand_DataStore());

  /* Logic: '<S12>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S12>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration5'
   */
  rtb_LogicalOperator1_jy = ((BuckyWagon_01_B.s245_bcm_cell_tmax >=
    (Battery_OverTemp_Threshold_DataStore())) && rtb_LogicalOperator1_jo);

  /* S-Function (motohawk_sfun_fault_def): '<S12>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Battery_OverTemp */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(3, rtb_LogicalOperator1_jy);
    UpdateFault(3);
  }

  /* Logic: '<S12>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S12>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration2'
   */
  rtb_LogicalOperator3_l = (BuckyWagon_01_B.s263_Merge &&
    (BuckyWagon_01_B.s245_bcm_vbat >= (ChargeInterruptor_Voltage_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S12>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: ChargeComplete */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(8, rtb_LogicalOperator3_l);
    UpdateFault(8);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S12>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: ESTOPped */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(9, BuckyWagon_01_B.s258_Merge);
    UpdateFault(9);
  }

  /* Logic: '<S12>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S12>/Relational Operator5'
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration1'
   */
  rtb_LogicalOperator2_d = ((BuckyWagon_01_B.s245_bcm_cell_tmin <=
    (Battery_UnderTemp_Threshold_DataStore())) && rtb_LogicalOperator1_jo);

  /* S-Function (motohawk_sfun_fault_def): '<S12>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Battery_UnderTemp */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(4, rtb_LogicalOperator2_d);
    UpdateFault(4);
  }

  /* RelationalOperator: '<S12>/Relational Operator7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration7'
   */
  rtb_Merge_na = (BuckyWagon_01_B.s245_bcm_gfd <=
                  (A123_Isolation_Monitor_Ground_Fault_Threshold_DataStore()));

  /* Outputs for enable SubSystem: '<S12>/Time Since Enabled (With Input)1' incorporates:
   *  EnablePort: '<S255>/Enable'
   */
  if (BuckyWagon_01_B.s392_Sum > 0.0) {
    if (!((int32_T)BuckyWagon_01_DWork.s12_TimeSinceEnabledWithInput1_MODE != 0))
    {
      /* S-Function Block: <S255>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BuckyWagon_01_DWork.s255_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S255>/Unit Delay' */
      BuckyWagon_01_DWork.s255_UnitDelay_DSTATE = 0.0;
      BuckyWagon_01_DWork.s12_TimeSinceEnabledWithInput1_MODE = TRUE;
    }

    /* S-Function Block: <S255>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BuckyWagon_01_DWork.s255_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_b = ((real_T) delta) * 0.000001;
    }

    /* UnitDelay: '<S255>/Unit Delay' */
    BuckyWagon_01_B.s255_UnitDelay = BuckyWagon_01_DWork.s255_UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S255>/Unit Delay' incorporates:
     *  Sum: '<S255>/Sum'
     *  Update for S-Function (motohawk_sfun_delta_time): '<S255>/motohawk_delta_time'
     */
    BuckyWagon_01_DWork.s255_UnitDelay_DSTATE = rtb_motohawk_delta_time_b +
      BuckyWagon_01_B.s255_UnitDelay;
  } else {
    if ((int32_T)BuckyWagon_01_DWork.s12_TimeSinceEnabledWithInput1_MODE) {
      /* Disable for Outport: '<S255>/Time Since Enabled [sec]' */
      BuckyWagon_01_B.s255_UnitDelay = 0.0;
      BuckyWagon_01_DWork.s12_TimeSinceEnabledWithInput1_MODE = FALSE;
    }
  }

  /* end of Outputs for SubSystem: '<S12>/Time Since Enabled (With Input)1' */

  /* Logic: '<S12>/Logical Operator' incorporates:
   *  RelationalOperator: '<S12>/Relational Operator8'
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration8'
   */
  rtb_LogicalOperator_d = (rtb_Merge_na && rtb_LogicalOperator1_jo &&
    (BuckyWagon_01_B.s255_UnitDelay >= (HV_GFI_Check_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S12>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: GroundFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(11, rtb_LogicalOperator_d);
    UpdateFault(11);
  }

  /* RelationalOperator: '<S12>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration6'
   */
  rtb_RelationalOperator6 = (BuckyWagon_01_B.s251_Inverter_Temperature >
    (InverterTemp_Overheat_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S12>/motohawk_fault_def9' */

  /* Set Fault Suspected Status: Inverter_OverTemp */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(16, rtb_RelationalOperator6);
    UpdateFault(16);
  }

  /* Logic: '<S247>/Logical Operator' incorporates:
   *  Constant: '<S280>/Constant'
   *  RelationalOperator: '<S280>/Compare'
   */
  rtb_LogicalOperator_j = (BuckyWagon_01_B.s286_Merge &&
    (BuckyWagon_01_B.s247_AgeCount >= 30U));

  /* S-Function (motohawk_sfun_fault_def): '<S247>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: canNLG5_610 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(31, rtb_LogicalOperator_j);
    UpdateFault(31);
  }

  /* Logic: '<S247>/Logical Operator1' incorporates:
   *  Constant: '<S281>/Constant'
   *  RelationalOperator: '<S281>/Compare'
   */
  rtb_LogicalOperator1_o = (BuckyWagon_01_B.s286_Merge &&
    (BuckyWagon_01_B.s247_AgeCount_p >= 30U));

  /* S-Function (motohawk_sfun_fault_def): '<S247>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: canNLG5_611 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(32, rtb_LogicalOperator1_o);
    UpdateFault(32);
  }

  /* Logic: '<S247>/Logical Operator2' incorporates:
   *  Constant: '<S282>/Constant'
   *  RelationalOperator: '<S282>/Compare'
   */
  rtb_LogicalOperator2_k = (BuckyWagon_01_B.s286_Merge &&
    (BuckyWagon_01_B.s247_AgeCount_a >= 30U));

  /* S-Function (motohawk_sfun_fault_def): '<S247>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: canNLG5_612 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(33, rtb_LogicalOperator2_k);
    UpdateFault(33);
  }

  /* Logic: '<S247>/Logical Operator3' incorporates:
   *  Constant: '<S283>/Constant'
   *  RelationalOperator: '<S283>/Compare'
   */
  rtb_LogicalOperator3_p = (BuckyWagon_01_B.s286_Merge &&
    (BuckyWagon_01_B.s247_AgeCount_m >= 300U));

  /* S-Function (motohawk_sfun_fault_def): '<S247>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: canNLG5_613 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(34, rtb_LogicalOperator3_p);
    UpdateFault(34);
  }

  /* Logic: '<S247>/Logical Operator4' incorporates:
   *  Constant: '<S284>/Constant'
   *  RelationalOperator: '<S284>/Compare'
   */
  rtb_LogicalOperator4_i = (BuckyWagon_01_B.s286_Merge &&
    (BuckyWagon_01_B.s247_AgeCount_mv >= 300U));

  /* S-Function (motohawk_sfun_fault_def): '<S247>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: canNLG5_614 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(35, rtb_LogicalOperator4_i);
    UpdateFault(35);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S247>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Bursa_online */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(7, BuckyWagon_01_B.s286_Merge);
    UpdateFault(7);
  }

  /* DataTypeConversion: '<S247>/Data Type Conversion' */
  BuckyWagon_01_B.s247_DataTypeConversion = BuckyWagon_01_B.s247_NLG5PwrEn;

  /* DataTypeConversion: '<S247>/Data Type Conversion1' */
  BuckyWagon_01_B.s247_DataTypeConversion1 = BuckyWagon_01_B.s247_NLG5GenErrLtch;

  /* DataTypeConversion: '<S247>/Data Type Conversion2' */
  if (rtIsNaN(BuckyWagon_01_B.s247_NLG5GenLimWrng) || rtIsInf
      (BuckyWagon_01_B.s247_NLG5GenLimWrng)) {
    rtb_Merge_k = 0.0;
  } else {
    rtb_Merge_k = fmod(floor(BuckyWagon_01_B.s247_NLG5GenLimWrng), 256.0);
  }

  BuckyWagon_01_B.s247_DataTypeConversion2 = (uint8_T)(rtb_Merge_k < 0.0 ?
    (int32_T)(uint8_T)(int8_T)(-((int8_T)(uint8_T)(-rtb_Merge_k))) : (int32_T)
    (uint8_T)rtb_Merge_k);

  /* DataTypeConversion: '<S247>/Data Type Conversion3' */
  if (rtIsNaN(BuckyWagon_01_B.s247_NLG5FanActv) || rtIsInf
      (BuckyWagon_01_B.s247_NLG5FanActv)) {
    rtb_Merge_k = 0.0;
  } else {
    rtb_Merge_k = fmod(floor(BuckyWagon_01_B.s247_NLG5FanActv), 256.0);
  }

  BuckyWagon_01_B.s247_DataTypeConversion3 = (uint8_T)(rtb_Merge_k < 0.0 ?
    (int32_T)(uint8_T)(int8_T)(-((int8_T)(uint8_T)(-rtb_Merge_k))) : (int32_T)
    (uint8_T)rtb_Merge_k);

  /* DataTypeConversion: '<S247>/Data Type Conversion4' */
  if (rtIsNaN(BuckyWagon_01_B.s247_BypassDet) || rtIsInf
      (BuckyWagon_01_B.s247_BypassDet)) {
    rtb_Merge_k = 0.0;
  } else {
    rtb_Merge_k = fmod(floor(BuckyWagon_01_B.s247_BypassDet), 256.0);
  }

  BuckyWagon_01_B.s247_DataTypeConversion4 = (uint8_T)(rtb_Merge_k < 0.0 ?
    (int32_T)(uint8_T)(int8_T)(-((int8_T)(uint8_T)(-rtb_Merge_k))) : (int32_T)
    (uint8_T)rtb_Merge_k);

  /* S-Function (motohawk_sfun_code_cover): '<S247>/motohawk_code_coverage' */
  /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Brusa Charger */
  {
    extern void MH_CodeCovered(uint32_T idx);
    MH_CodeCovered(82);
  }

  /* Logic: '<S250>/Logical Operator' incorporates:
   *  Constant: '<S330>/Constant'
   *  RelationalOperator: '<S330>/Compare'
   */
  rtb_LogicalOperator_b = (BuckyWagon_01_B.s331_sf_Chart.s287_pluggedIn &&
    (BuckyWagon_01_B.s250_AgeCount >= 30U));

  /* S-Function (motohawk_sfun_fault_def): '<S250>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Eaton_CAN_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(10, rtb_LogicalOperator_b);
    UpdateFault(10);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S252>/motohawk_fault_def2' incorporates:
   *  Logic: '<S252>/Logical Operator2'
   *  RelationalOperator: '<S252>/Relational Operator2'
   *  S-Function (motohawk_sfun_data_read): '<S252>/motohawk_data_read1'
   *  S-Function (motohawk_sfun_calibration): '<S252>/motohawk_calibration1'
   */

  /* Set Fault Suspected Status: Accel_RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(1, (MPRD_DataStore() && ((real_T)rtb_DataTypeConversion_i >
                        (Accel_InputHiFltPos_DataStore()))));
    UpdateFault(1);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S252>/motohawk_fault_def3' incorporates:
   *  Logic: '<S252>/Logical Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S252>/motohawk_calibration6'
   *  RelationalOperator: '<S252>/Relational Operator3'
   *  S-Function (motohawk_sfun_data_read): '<S252>/motohawk_data_read1'
   */

  /* Set Fault Suspected Status: Accel_RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(2, (MPRD_DataStore() && ((real_T)rtb_DataTypeConversion_i <
                        (Accel_InputLoFltPos_DataStore()))));
    UpdateFault(2);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S253>/motohawk_fault_def2' incorporates:
   *  Logic: '<S253>/Logical Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration1'
   *  RelationalOperator: '<S253>/Relational Operator2'
   *  S-Function (motohawk_sfun_data_read): '<S253>/motohawk_data_read1'
   */

  /* Set Fault Suspected Status: LVVolt_RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(19, (MPRD_DataStore() && (rtb_DataTypeConversion_d >
      (LVVolt_InputHiFltPos_DataStore()))));
    UpdateFault(19);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S253>/motohawk_fault_def3' incorporates:
   *  Logic: '<S253>/Logical Operator3'
   *  RelationalOperator: '<S253>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S253>/motohawk_data_read1'
   */

  /* Set Fault Suspected Status: LVVolt_RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(20, (MPRD_DataStore() && (rtb_DataTypeConversion_d <
      (LVVolt_InputLoFltPos_DataStore()))));
    UpdateFault(20);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S254>/motohawk_fault_def2' incorporates:
   *  Logic: '<S254>/Logical Operator2'
   *  RelationalOperator: '<S254>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S254>/motohawk_data_read1'
   */

  /* Set Fault Suspected Status: Brake_RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(5, (MPRD_DataStore() && (rtb_DataTypeConversion_b >
      (Brake_InputHiFltPos_DataStore()))));
    UpdateFault(5);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S254>/motohawk_fault_def3' incorporates:
   *  Logic: '<S254>/Logical Operator3'
   *  RelationalOperator: '<S254>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S254>/motohawk_data_read1'
   */

  /* Set Fault Suspected Status: Brake_RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(6, (MPRD_DataStore() && (rtb_DataTypeConversion_b <
      (Brake_InputLoFltPos_DataStore()))));
    UpdateFault(6);
  }

  /* Saturate: '<S392>/Saturation' */
  rtb_Saturation = rt_SATURATE(BuckyWagon_01_B.s392_Sum, 0.0, 16000.0);

  /* S-Function (motohawk_sfun_data_write): '<S392>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceKeyOnTimer */
  {
    TimeSinceKeyOnTimer_DataStore() = rtb_Saturation;
  }

  /* Update for UnitDelay: '<S252>/Unit Delay1' */
  BuckyWagon_01_DWork.s252_UnitDelay1_DSTATE = rtb_Merge_c;

  /* Update for UnitDelay: '<S373>/Unit Delay' */
  BuckyWagon_01_DWork.s373_UnitDelay_DSTATE = rtb_Sum1;

  /* Update for UnitDelay: '<S254>/Unit Delay1' */
  BuckyWagon_01_DWork.s254_UnitDelay1_DSTATE = rtb_Merge_e;

  /* Update for UnitDelay: '<S389>/Unit Delay' */
  BuckyWagon_01_DWork.s389_UnitDelay_DSTATE = rtb_to65535_dx;

  /* Update for UnitDelay: '<S178>/Unit Delay' */
  BuckyWagon_01_DWork.s178_UnitDelay_DSTATE = BuckyWagon_01_B.s178_Sum1;

  /* Update for UnitDelay: '<S253>/Unit Delay1' */
  BuckyWagon_01_DWork.s253_UnitDelay1_DSTATE = rtb_Merge_ep;

  /* Update for UnitDelay: '<S381>/Unit Delay' */
  BuckyWagon_01_DWork.s381_UnitDelay_DSTATE = rtb_to65535_d;

  /* Update for UnitDelay: '<S125>/Unit Delay' */
  BuckyWagon_01_DWork.s125_UnitDelay_DSTATE = rtb_to65535_c;

  /* Update for UnitDelay: '<S126>/Unit Delay' */
  BuckyWagon_01_DWork.s126_UnitDelay_DSTATE = rtb_Switch1_m;

  /* Update for UnitDelay: '<S118>/Unit Delay' */
  BuckyWagon_01_DWork.s118_UnitDelay_DSTATE =
    BuckyWagon_01_B.s118_LogicalOperator;

  /* Update for UnitDelay: '<S129>/Unit Delay' */
  BuckyWagon_01_DWork.s129_UnitDelay_DSTATE = BuckyWagon_01_B.s143_UnitDelay;
}

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
