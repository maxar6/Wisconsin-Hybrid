/*
 * File: BuckyWagon_01_Foreground.c
 *
 * Code generated for Simulink model 'BuckyWagon_01'.
 *
 * Model version                  : 1.1520
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Mon Apr 23 14:25:32 2018
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

/* Named constants for Stateflow: '<S147>/Downsapmle' */
#define BuckyWagon_01_IN_Out           (1U)
#define BuckyWagon_01_IN_Value_1       (2U)
#define BuckyWagon_01_IN_Value_2       (3U)
#define BuckyWagon_01_IN_downsample    (4U)
#define BuckyWagon_01_IN_downsample_2  (5U)

/* Named constants for Stateflow: '<S288>/Chart' */
#define BuckyWagon_01_IN_CountDown     (1U)
#define BuckyWagon_01_IN_Off           (2U)
#define BuckyWagon_01_IN_On            (3U)
#define BuckyWagon_01_IN_countUp       (4U)

/* Named constants for Stateflow: '<S38>/Chart' */
#define BuckyWagon_01_IN_FlashOne      (1U)
#define BuckyWagon_01_IN_FlashTwo      (2U)
#define BuckyWagon_01_IN_OffOne        (4U)
#define BuckyWagon_01_IN_OffTwo        (5U)
#define BuckyWagon_01_IN_Off_l         (3U)

/* Named constants for Stateflow: '<S18>/Chart' */
#define BuckyWagon_01_IN_Init          (1U)
#define BuckyWagon_01_IN_Off_h         (2U)
#define BuckyWagon_01_IN_On_h          (3U)
#define BuckyWagon_01_IN_Restart       (4U)
#define BuckyWagon_01_IN_Standby       (5U)

/* Named constants for Stateflow: '<S131>/Charging State Machine' */
#define BuckyWagon_01_IN_Complete      (1U)
#define BuckyWagon_01_IN_ConstantVoltageCharge (2U)
#define BuckyWagon_01_IN_StartupDelay  (3U)
#define BuckyWagon_01_IN_Wait          (4U)
#define BuckyWagon_01_IN_waitEnd       (5U)

/* Named constants for Stateflow: '<S150>/Chart' */
#define BuckyWagon_01_IN_Begin         (1U)
#define BuckyWagon_01_IN_Braking       (2U)
#define BuckyWagon_01_IN_Driving       (3U)
#define BuckyWagon_01_IN_Rolling       (4U)
#define BuckyWagon_01_IN_Stopped       (5U)

/* Named constants for Stateflow: '<S134>/Chart' */
#define BuckyWagon_01_IN_Braking_g     (1U)
#define BuckyWagon_01_IN_Creeping      (1U)
#define BuckyWagon_01_IN_DrivingAndBrake (2U)
#define BuckyWagon_01_IN_Driving_g     (1U)
#define BuckyWagon_01_IN_Idle          (2U)
#define BuckyWagon_01_IN_KeyUp         (3U)
#define BuckyWagon_01_IN_LowSpeedManeuvering (4U)
#define BuckyWagon_01_IN_NormalDriving (5U)
#define BuckyWagon_01_IN_Reversing     (2U)
#define BuckyWagon_01_IN_SlowingDown   (6U)
#define BuckyWagon_01_IN_Stopping      (7U)

/* Named constants for Stateflow: '<S137>/Chart' */
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
 *    '<S147>/Downsapmle'
 *    '<S147>/Downsapmle1'
 */
void BuckyWagon_01_Downsapmle_Init(rtB_Downsapmle_BuckyWagon_01 *localB,
  rtDW_Downsapmle_BuckyWagon_01 *localDW)
{
  localDW->s148_is_active_c11_BuckyWagon_01 = 0U;
  localDW->s148_is_c11_BuckyWagon_01 = 0U;
  localDW->s148_count = 0.0;
  localDW->s148_Val1 = 0.0;
  localDW->s148_Val2 = 0.0;
  localB->s148_Out_1 = 0.0;
  localB->s148_Out_2 = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S147>/Downsapmle'
 *    '<S147>/Downsapmle1'
 */
void BuckyWagon_01_Downsapmle(real_T rtu_Val_In, real_T rtu_numb_downsamp,
  rtB_Downsapmle_BuckyWagon_01 *localB, rtDW_Downsapmle_BuckyWagon_01 *localDW)
{
  /* Gateway: Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle */
  /* During: Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle */
  if (localDW->s148_is_active_c11_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle */
    localDW->s148_is_active_c11_BuckyWagon_01 = 1U;

    /* Transition: '<S148>:75' */
    localDW->s148_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_downsample;

    /* Entry 'downsample': '<S148>:22' */
    localDW->s148_count = 0.0;
  } else {
    switch (localDW->s148_is_c11_BuckyWagon_01) {
     case BuckyWagon_01_IN_Out:
      /* During 'Out': '<S148>:48' */
      if (localDW->s148_count >= 2.0) {
        /* Transition: '<S148>:51' */
        localDW->s148_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_downsample;

        /* Entry 'downsample': '<S148>:22' */
        localDW->s148_count = 0.0;
      } else {
        localDW->s148_count = localDW->s148_count + 1.0;
      }
      break;

     case BuckyWagon_01_IN_Value_1:
      /* During 'Value_1': '<S148>:29' */
      if (localDW->s148_count >= 2.0) {
        /* Transition: '<S148>:40' */
        localDW->s148_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_downsample_2;

        /* Entry 'downsample_2': '<S148>:30' */
        localDW->s148_count = 0.0;
      } else {
        localDW->s148_count = localDW->s148_count + 1.0;
      }
      break;

     case BuckyWagon_01_IN_Value_2:
      /* During 'Value_2': '<S148>:31' */
      if (localDW->s148_count >= 2.0) {
        /* Transition: '<S148>:78' */
        localDW->s148_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_Out;

        /* Entry 'Out': '<S148>:48' */
        localDW->s148_count = 0.0;
        localB->s148_Out_1 = localDW->s148_Val1;
        localB->s148_Out_2 = localDW->s148_Val2;
      } else {
        localDW->s148_count = localDW->s148_count + 1.0;
      }
      break;

     case BuckyWagon_01_IN_downsample:
      /* During 'downsample': '<S148>:22' */
      if (localDW->s148_count >= rtu_numb_downsamp) {
        /* Transition: '<S148>:34' */
        localDW->s148_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_Value_1;

        /* Entry 'Value_1': '<S148>:29' */
        localDW->s148_Val1 = rtu_Val_In;
        localDW->s148_count = 0.0;
      } else {
        localDW->s148_count = localDW->s148_count + 1.0;
      }
      break;

     case BuckyWagon_01_IN_downsample_2:
      /* During 'downsample_2': '<S148>:30' */
      if (localDW->s148_count >= rtu_numb_downsamp) {
        /* Transition: '<S148>:42' */
        localDW->s148_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_Value_2;

        /* Entry 'Value_2': '<S148>:31' */
        localDW->s148_Val2 = rtu_Val_In;
        localDW->s148_count = 0.0;
      } else {
        localDW->s148_count = localDW->s148_count + 1.0;
      }
      break;

     default:
      /* Transition: '<S148>:75' */
      localDW->s148_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_downsample;

      /* Entry 'downsample': '<S148>:22' */
      localDW->s148_count = 0.0;
      break;
    }
  }
}

/*
 * Initial conditions for atomic system:
 *    '<S288>/Chart'
 *    '<S334>/Chart'
 */
void BuckyWagon_01_Chart_Init(rtB_Chart_BuckyWagon_01 *localB,
  rtDW_Chart_BuckyWagon_01 *localDW)
{
  localDW->s290_is_active_c10_BuckyWagon_01 = 0U;
  localDW->s290_is_c10_BuckyWagon_01 = 0U;
  localDW->s290_timer = 0;
  localB->s290_pluggedIn = FALSE;
}

/*
 * Output and update for atomic system:
 *    '<S288>/Chart'
 *    '<S334>/Chart'
 */
void BuckyWagon_01_Chart(real_T rtu_histTime, boolean_T rtu_mainsOn,
  rtB_Chart_BuckyWagon_01 *localB, rtDW_Chart_BuckyWagon_01 *localDW)
{
  /* Gateway: Foreground/Sensors/Brusa Charger/PluggedInDetect/Chart */
  /* During: Foreground/Sensors/Brusa Charger/PluggedInDetect/Chart */
  if (localDW->s290_is_active_c10_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Sensors/Brusa Charger/PluggedInDetect/Chart */
    localDW->s290_is_active_c10_BuckyWagon_01 = 1U;

    /* Transition: '<S290>:5' */
    localDW->s290_is_c10_BuckyWagon_01 = BuckyWagon_01_IN_Off;

    /* Entry 'Off': '<S290>:1' */
    localB->s290_pluggedIn = FALSE;
  } else {
    switch (localDW->s290_is_c10_BuckyWagon_01) {
     case BuckyWagon_01_IN_CountDown:
      /* During 'CountDown': '<S290>:3' */
      if (localDW->s290_timer <= 0) {
        /* Transition: '<S290>:9' */
        localDW->s290_is_c10_BuckyWagon_01 = BuckyWagon_01_IN_Off;

        /* Entry 'Off': '<S290>:1' */
        localB->s290_pluggedIn = FALSE;
      } else if (rtu_mainsOn) {
        /* Transition: '<S290>:8' */
        localDW->s290_is_c10_BuckyWagon_01 = BuckyWagon_01_IN_countUp;
      } else {
        localDW->s290_timer = (int16_T)(localDW->s290_timer - 1);
      }
      break;

     case BuckyWagon_01_IN_Off:
      /* During 'Off': '<S290>:1' */
      if (rtu_mainsOn) {
        /* Transition: '<S290>:6' */
        localDW->s290_is_c10_BuckyWagon_01 = BuckyWagon_01_IN_countUp;
      }
      break;

     case BuckyWagon_01_IN_On:
      /* During 'On': '<S290>:4' */
      if (!rtu_mainsOn) {
        /* Transition: '<S290>:10' */
        localDW->s290_is_c10_BuckyWagon_01 = BuckyWagon_01_IN_CountDown;
      }
      break;

     case BuckyWagon_01_IN_countUp:
      /* During 'countUp': '<S290>:2' */
      if (!rtu_mainsOn) {
        /* Transition: '<S290>:7' */
        localDW->s290_is_c10_BuckyWagon_01 = BuckyWagon_01_IN_CountDown;
      } else if ((real_T)localDW->s290_timer >= rtu_histTime) {
        /* Transition: '<S290>:11' */
        localDW->s290_is_c10_BuckyWagon_01 = BuckyWagon_01_IN_On;

        /* Entry 'On': '<S290>:4' */
        localB->s290_pluggedIn = TRUE;
      } else {
        localDW->s290_timer = (int16_T)(localDW->s290_timer + 1);
      }
      break;

     default:
      /* Transition: '<S290>:5' */
      localDW->s290_is_c10_BuckyWagon_01 = BuckyWagon_01_IN_Off;

      /* Entry 'Off': '<S290>:1' */
      localB->s290_pluggedIn = FALSE;
      break;
    }
  }
}

/*
 * Output and update for action system:
 *    '<S255>/If Action Subsystem'
 *    '<S255>/If Action Subsystem1'
 *    '<S255>/If Action Subsystem2'
 *    '<S256>/If Action Subsystem'
 *    '<S256>/If Action Subsystem1'
 *    '<S256>/If Action Subsystem2'
 *    '<S257>/If Action Subsystem'
 *    '<S257>/If Action Subsystem1'
 *    '<S257>/If Action Subsystem2'
 */
void BuckyWagon_01_IfActionSubsystem(real_T rtu_0, real_T *rty_Out)
{
  /* Inport: '<S372>/In' */
  (*rty_Out) = rtu_0;
}

/* Function for Stateflow: '<S137>/Chart' */
static void BuckyWagon_01_c1_BuckyWagon_01(void)
{
  int32_T b_previousEvent;

  /* During: Foreground/Control Strategy/Reverse/Chart */
  if (BuckyWagon_01_DWork.s194_is_active_c1_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Control Strategy/Reverse/Chart */
    BuckyWagon_01_DWork.s194_is_active_c1_BuckyWagon_01 = 1U;
    BuckyWagon_01_DWork.s194_is_c1_BuckyWagon_01 = BuckyWagon_01_IN_Main;
    BuckyWagon_01_DWork.s194_is_active_ButtonDebounce = 1U;

    /* Transition: '<S194>:16' */
    BuckyWagon_01_DWork.s194_is_ButtonDebounce = BuckyWagon_01_IN_TransistionOn;
    BuckyWagon_01_DWork.s194_is_active_ReverseLogic = 1U;

    /* Transition: '<S194>:17' */
    if (BuckyWagon_01_DWork.s194_is_ReverseLogic != BuckyWagon_01_IN_Forward) {
      BuckyWagon_01_DWork.s194_is_ReverseLogic = BuckyWagon_01_IN_Forward;

      /* Entry 'Forward': '<S194>:7' */
      BuckyWagon_01_B.s194_inReverse = 0.0;
    }
  } else {
    if (BuckyWagon_01_DWork.s194_is_c1_BuckyWagon_01 == BuckyWagon_01_IN_Main) {
      /* During 'Main': '<S194>:1' */
      if (BuckyWagon_01_DWork.s194_is_active_ButtonDebounce != 0) {
        /* During 'ButtonDebounce': '<S194>:2' */
        switch (BuckyWagon_01_DWork.s194_is_ButtonDebounce) {
         case BuckyWagon_01_IN_TransistionOff:
          /* During 'TransistionOff': '<S194>:6' */
          if (BuckyWagon_01_DWork.s194_timer >= (offTime_DataStore())) {
            /* Transition: '<S194>:10' */
            BuckyWagon_01_DWork.s194_is_ButtonDebounce =
              BuckyWagon_01_IN_TransistionOn;
          } else if (BuckyWagon_01_B.s280_Merge) {
            /* Transition: '<S194>:9' */
            BuckyWagon_01_DWork.s194_timer = 0.0;
            BuckyWagon_01_DWork.s194_is_ButtonDebounce =
              BuckyWagon_01_IN_TransistionOff;
          } else {
            BuckyWagon_01_DWork.s194_timer = BuckyWagon_01_DWork.s194_timer +
              1.0;
          }
          break;

         case BuckyWagon_01_IN_TransistionOn:
          /* During 'TransistionOn': '<S194>:5' */
          if (!BuckyWagon_01_B.s280_Merge) {
            /* Transition: '<S194>:13' */
            BuckyWagon_01_DWork.s194_timer = 0.0;
            BuckyWagon_01_DWork.s194_is_ButtonDebounce =
              BuckyWagon_01_IN_TransistionOn;
          } else if (BuckyWagon_01_DWork.s194_timer >= (onTime_DataStore())) {
            /* Transition: '<S194>:11' */
            BuckyWagon_01_DWork.s194_is_ButtonDebounce =
              BuckyWagon_01_IN_waitRelease;

            /* Entry 'waitRelease': '<S194>:3' */
            /* Event: '<S194>:29' */
            b_previousEvent = BuckyWagon_01_DWork.s194_sfEvent;
            BuckyWagon_01_DWork.s194_sfEvent = BuckyWagon_01_event_buttonPress;
            BuckyWagon_01_c1_BuckyWagon_01();
            BuckyWagon_01_DWork.s194_sfEvent = b_previousEvent;
          } else {
            BuckyWagon_01_DWork.s194_timer = BuckyWagon_01_DWork.s194_timer +
              1.0;
          }
          break;

         case BuckyWagon_01_IN_waitRelease:
          /* During 'waitRelease': '<S194>:3' */
          if (!BuckyWagon_01_B.s280_Merge) {
            /* Transition: '<S194>:12' */
            BuckyWagon_01_DWork.s194_is_ButtonDebounce =
              BuckyWagon_01_IN_TransistionOff;
          }
          break;

         default:
          BuckyWagon_01_DWork.s194_is_ButtonDebounce = (uint8_T)0U;
          break;
        }
      }

      if (BuckyWagon_01_DWork.s194_is_active_ReverseLogic != 0) {
        /* During 'ReverseLogic': '<S194>:4' */
        switch (BuckyWagon_01_DWork.s194_is_ReverseLogic) {
         case BuckyWagon_01_IN_Forward:
          /* During 'Forward': '<S194>:7' */
          if ((BuckyWagon_01_DWork.s194_sfEvent ==
               BuckyWagon_01_event_buttonPress) && ((BuckyWagon_01_B.s137_Abs <
                (revSpdThres_DataStore())) && (BuckyWagon_01_B.s375_Merge <
                (revAccThres_DataStore())))) {
            /* Transition: '<S194>:15' */
            BuckyWagon_01_DWork.s194_is_ReverseLogic = BuckyWagon_01_IN_Reverse;

            /* Entry 'Reverse': '<S194>:8' */
            BuckyWagon_01_B.s194_inReverse = 1.0;
          }
          break;

         case BuckyWagon_01_IN_Reverse:
          /* During 'Reverse': '<S194>:8' */
          if ((BuckyWagon_01_DWork.s194_sfEvent ==
               BuckyWagon_01_event_buttonPress) && ((BuckyWagon_01_B.s137_Abs <
                (fwdSpdThres_DataStore())) && (BuckyWagon_01_B.s375_Merge <
                (fwdAccThres_DataStore())))) {
            /* Transition: '<S194>:14' */
            BuckyWagon_01_DWork.s194_is_ReverseLogic = BuckyWagon_01_IN_Forward;

            /* Entry 'Forward': '<S194>:7' */
            BuckyWagon_01_B.s194_inReverse = 0.0;
          }
          break;

         default:
          BuckyWagon_01_DWork.s194_is_ReverseLogic = (uint8_T)0U;
          break;
        }
      }
    }
  }
}

/* Initial conditions for function-call system: '<Root>/Foreground' */
void BuckyWagon_01_Foreground_Init(void)
{
  /* InitializeConditions for Stateflow: '<S334>/Chart' */
  BuckyWagon_01_Chart_Init(&BuckyWagon_01_B.s334_sf_Chart,
    &BuckyWagon_01_DWork.s334_sf_Chart);

  /* InitializeConditions for Atomic SubSystem: '<S9>/HV Controller' */

  /* S-Function Block: <S189>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s189_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S188>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s188_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* End of InitializeConditions for SubSystem: '<S9>/HV Controller' */

  /* InitializeConditions for Atomic SubSystem: '<S9>/Reverse' */
  /* InitializeConditions for Stateflow: '<S137>/Chart' */
  BuckyWagon_01_DWork.s194_sfEvent = CALL_EVENT;
  BuckyWagon_01_DWork.s194_is_active_ButtonDebounce = 0U;
  BuckyWagon_01_DWork.s194_is_ButtonDebounce = 0U;
  BuckyWagon_01_DWork.s194_is_active_ReverseLogic = 0U;
  BuckyWagon_01_DWork.s194_is_ReverseLogic = 0U;
  BuckyWagon_01_DWork.s194_is_active_c1_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s194_is_c1_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s194_timer = 0.0;
  BuckyWagon_01_B.s194_inReverse = 0.0;

  /* End of InitializeConditions for SubSystem: '<S9>/Reverse' */
  /* InitializeConditions for Atomic SubSystem: '<S9>/Drive' */
  /* InitializeConditions for Stateflow: '<S150>/Chart' */
  BuckyWagon_01_DWork.s152_is_active_c5_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s152_is_c5_BuckyWagon_01 = 0U;
  BuckyWagon_01_B.s152_HillHoldOn = FALSE;

  /* S-Function Block: <S154>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s154_motohawk_delta_time_DWORK1 = now -
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

  /* S-Function Block: <S162>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s162_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Atomic SubSystem: '<S151>/Regen' */

  /* S-Function Block: <S168>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s168_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of InitializeConditions for SubSystem: '<S151>/Regen' */

  /* S-Function Block: <S163>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s163_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of InitializeConditions for SubSystem: '<S9>/Drive' */

  /* S-Function Block: <S135>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s135_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Atomic SubSystem: '<S7>/A123 Battery Controller' */

  /* S-Function Block: <S29>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s29_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S28>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s28_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* End of InitializeConditions for SubSystem: '<S7>/A123 Battery Controller' */

  /* InitializeConditions for Atomic SubSystem: '<S7>/Analog Out' */
  /* InitializeConditions for Stateflow: '<S38>/Chart' */
  BuckyWagon_01_DWork.s43_is_active_c6_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s43_is_c6_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s43_timer = 0U;
  BuckyWagon_01_B.s43_light = FALSE;

  /* End of InitializeConditions for SubSystem: '<S7>/Analog Out' */

  /* InitializeConditions for Stateflow: '<S288>/Chart' */
  BuckyWagon_01_Chart_Init(&BuckyWagon_01_B.s288_sf_Chart,
    &BuckyWagon_01_DWork.s288_sf_Chart);

  /* InitializeConditions for Atomic SubSystem: '<S9>/Brusa Charger (No Longer Used)' */
  /* InitializeConditions for Stateflow: '<S131>/Charging State Machine' */
  BuckyWagon_01_DWork.s141_is_active_c8_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s141_is_c8_BuckyWagon_01 = 0U;
  BuckyWagon_01_B.s141_currOut = 0.0;
  BuckyWagon_01_B.s141_voltOut = 0.0;
  BuckyWagon_01_B.s141_state = 0U;
  BuckyWagon_01_B.s141_timer = 0U;

  /* End of InitializeConditions for SubSystem: '<S9>/Brusa Charger (No Longer Used)' */

  /* InitializeConditions for Stateflow: '<S134>/Chart' */
  BuckyWagon_01_DWork.s174_is_LowSpeedManeuvering = 0U;
  BuckyWagon_01_DWork.s174_is_NormalDriving = 0U;
  BuckyWagon_01_DWork.s174_is_active_c9_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s174_counts = 0U;
  BuckyWagon_01_DWork.s174_brakeCounts = 0.0;
  BuckyWagon_01_B.s174_PumpState = 0U;

  /* S-Function Block: <S395>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s395_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S18>/Chart' */
  BuckyWagon_01_DWork.s85_is_active_c7_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s85_is_c7_BuckyWagon_01 = 0U;
  BuckyWagon_01_B.s85_ctrlState = 0.0;

  /* InitializeConditions for S-Function (motohawk_sfun_fault_def): '<S120>/motohawk_fault_def5' */
  /* Reset Fault Downsample Counter: LVVoltLow */
  {
    BuckyWagon_01_DWork.s120_motohawk_fault_def5_DWORK1 = 0;
  }

  /* S-Function Block: <S128>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s128_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S2>/motohawk_trigger' */
  BuckyWagon_01_MiniViewDisplay_Init();

  /* S-Function Block: <S147>/motohawk_delta_time2 */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s147_motohawk_delta_time2_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S147>/motohawk_delta_time1 */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s147_motohawk_delta_time1_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S147>/Downsapmle1' */
  BuckyWagon_01_Downsapmle_Init(&BuckyWagon_01_B.s147_sf_Downsapmle1,
    &BuckyWagon_01_DWork.s147_sf_Downsapmle1);

  /* InitializeConditions for Stateflow: '<S147>/Downsapmle' */
  BuckyWagon_01_Downsapmle_Init(&BuckyWagon_01_B.s147_sf_Downsapmle,
    &BuckyWagon_01_DWork.s147_sf_Downsapmle);

  /* S-Function Block: <S146>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s146_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }
}

/* Enable for function-call system: '<Root>/Foreground' */
void BuckyWagon_01_Foreground_Enable(void)
{
  /* Level2 S-Function Block: '<S2>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_4086p0002 */
  BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S2>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_RTI_PERIODIC_4085p0005 */
  BuckyWagon_01_DWork.s2_motohawk_trigger_DWORK1 = 1;
}

/* Disable for function-call system: '<Root>/Foreground' */
void BuckyWagon_01_Foreground_Disable(void)
{
  /* Disable for Atomic SubSystem: '<S7>/Analog Out' */
  /* Disable for Enabled SubSystem: '<S42>/Enabled Subsystem' */
  BuckyWagon_01_DWork.s42_EnabledSubsystem_MODE = FALSE;

  /* End of Disable for SubSystem: '<S42>/Enabled Subsystem' */
  /* End of Disable for SubSystem: '<S7>/Analog Out' */

  /* Disable for Enabled SubSystem: '<S119>/Time Since Enabled (With Input)1' */
  /* Disable for Outport: '<S123>/Time Since Enabled [sec]' */
  BuckyWagon_01_B.s123_UnitDelay = 0.0;
  BuckyWagon_01_DWork.s119_TimeSinceEnabledWithInput1_MODE = FALSE;

  /* End of Disable for SubSystem: '<S119>/Time Since Enabled (With Input)1' */

  /* Level2 S-Function Block: '<S2>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_20XRTI_PERIODIC_4086p0002 */
  BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 = 0;

  /* Level2 S-Function Block: '<S2>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_RTI_PERIODIC_4085p0005 */
  BuckyWagon_01_DWork.s2_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S12>/Time Since Enabled (With Input)1' */
  /* Disable for Outport: '<S258>/Time Since Enabled [sec]' */
  BuckyWagon_01_B.s258_UnitDelay = 0.0;
  BuckyWagon_01_DWork.s12_TimeSinceEnabledWithInput1_MODE = FALSE;

  /* End of Disable for SubSystem: '<S12>/Time Since Enabled (With Input)1' */
}

/* Start for function-call system: '<Root>/Foreground' */
void BuckyWagon_01_Foreground_Start(void)
{
  /* Start for Atomic SubSystem: '<S7>/A123 Battery Controller' */

  /* S-Function (motohawk_sfun_probe): '<S13>/motohawk_probe6' */
  (hsc_bcm_enable_DataStore()) = ((uint8_T)1U);

  /* End of Start for SubSystem: '<S7>/A123 Battery Controller' */

  /* Start for Atomic SubSystem: '<S7>/Analog Out' */

  /* Start for Enabled SubSystem: '<S42>/Enabled Subsystem' */
  /* InitializeConditions for UnitDelay: '<S57>/Unit Delay' */
  BuckyWagon_01_DWork.s57_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S42>/Enabled Subsystem' */

  /* End of Start for SubSystem: '<S7>/Analog Out' */

  /* Start for Enabled SubSystem: '<S119>/Time Since Enabled (With Input)1' */

  /* S-Function Block: <S123>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s123_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S123>/Unit Delay' */
  BuckyWagon_01_DWork.s123_UnitDelay_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S119>/Time Since Enabled (With Input)1' */

  /* Start for function-call system: '<S2>/Gauges' */

  /* Start for S-Function (motohawk_sfun_vdogauge_def): '<S10>/VDO Gauge Interface' */
  {
    GaugeChain_EZLinkOutput_Create();
  }

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_4086p0002 */
  BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S2>/motohawk_trigger' */
  BuckyWagon_01_MiniViewDisplay_Start();

  /* Clear enable/disable state for embedded trigger Trigger_FGND_RTI_PERIODIC_4085p0005 */
  BuckyWagon_01_DWork.s2_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S12>/Time Since Enabled (With Input)1' */

  /* S-Function Block: <S258>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s258_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S258>/Unit Delay' */
  BuckyWagon_01_DWork.s258_UnitDelay_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S12>/Time Since Enabled (With Input)1' */

  /* S-Function (motohawk_sfun_probe): '<S20>/motohawk_probe' */
  (SpeedSet_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S132>/motohawk_probe3' */
  (InstDCDCWatts_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S132>/motohawk_probe9' */
  (EngPowerkW_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S132>/motohawk_probe8' */
  (GenEfficiencyPct_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S132>/motohawk_probe11' */
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
  real_T rtb_UnitDelay_b;
  real_T rtb_motohawk_delta_time1;
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
  real_T rtb_motohawk_delta_time_c;
  real_T rtb_motohawk_delta_time_j;
  real_T rtb_Saturation_i;
  real_T rtb_Saturation_l;
  real_T rtb_DataTypeConversion_b;
  real_T rtb_DataTypeConversion_d;
  real_T rtb_Product3_m;
  real_T rtb_Switch_m;
  real_T rtb_Gain7;
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
  boolean_T rtb_LogicalOperator2_pz;
  boolean_T rtb_LogicalOperator3_d;
  boolean_T rtb_LogicalOperator2_ka;
  boolean_T rtb_LogicalOperator3_f;
  boolean_T rtb_LogicalOperator2_dm;
  boolean_T rtb_LogicalOperator3_pt;
  boolean_T rtb_Compare_d;
  boolean_T rtb_Compare_kf;
  boolean_T rtb_Compare_f;
  boolean_T rtb_Compare_h;
  boolean_T rtb_Compare_gs;
  boolean_T rtb_Compare_i;
  boolean_T rtb_LogicalOperator2_j;
  boolean_T rtb_LogicalOperator1_p;
  boolean_T rtb_Merge_hg;
  boolean_T rtb_Merge_nz;
  boolean_T rtb_CombinatorialLogic[2];
  boolean_T rtb_AgeCount;
  boolean_T rtb_LogicalOperator4_f;
  boolean_T rtb_BelowLoTarget;
  boolean_T rtb_RelationalOperator_fj;
  real_T rtb_Merge_k;
  int32_T rtb_DataTypeConversion_i;
  boolean_T rtb_LogicalOperator1_jo;
  real_T rtb_Sum1;
  real_T rtb_Sum1_o;
  boolean_T rtb_LogicalOperator2_e;
  boolean_T rtb_LogicalOperator1_l;
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
  uint8_T rtb_Compare;
  int16_T rtb_Switch_d;

  /* Outputs for Atomic SubSystem: '<S12>/A123 Battery Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S248>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_2844p0005;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_2844p0005,
      &messageObj);
    if ((BuckyWagon_01_B.s248_AgeCount + 1) > BuckyWagon_01_B.s248_AgeCount)
      BuckyWagon_01_B.s248_AgeCount++;
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
      BuckyWagon_01_B.s248_bcm_alarm = (real_T) tmp0;
      BuckyWagon_01_B.s248_bcm_cpwr_cmd = (real_T) tmp1;
      BuckyWagon_01_B.s248_bcm_cpwr_mon = (real_T) tmp2;
      BuckyWagon_01_B.s248_bcm_epo = (real_T) tmp3;
      BuckyWagon_01_B.s248_bcm_gfd = ((real_T) tmp4) / ((real_T) 4);
      BuckyWagon_01_B.s248_bcm_hvil_mon = (real_T) tmp5;
      BuckyWagon_01_B.s248_bcm_ibat = (((real_T) tmp6) / ((real_T) 40)) +
        ((real_T) -1000);
      BuckyWagon_01_B.s248_bcm_mainc_stat = (boolean_T) tmp7;
      BuckyWagon_01_B.s248_bcm_ready = (real_T) tmp8;
      BuckyWagon_01_B.s248_bcm_soc = ((real_T) tmp9) / ((real_T) 200);
      BuckyWagon_01_B.s248_bcm_vbat = ((real_T) tmp10) / ((real_T) 4);
      BuckyWagon_01_B.s248_bcm_chg_done = (real_T) tmp11;
      BuckyWagon_01_B.s248_bcm_chgc_stat = (boolean_T) tmp12;
      BuckyWagon_01_B.s248_bcm_cool_req = (real_T) tmp13;
      BuckyWagon_01_B.s248_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S262>/Compare' incorporates:
   *  Constant: '<S262>/Constant'
   */
  rtb_Compare_h = ((BuckyWagon_01_B.s248_AgeCount > 20U));

  /* S-Function (motohawk_sfun_fault_def): '<S248>/motohawk_fault_def10' */

  /* Set Fault Suspected Status: NoCAN_BCM_410 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(24, rtb_Compare_h);
    UpdateFault(24);
  }

  /* If: '<S265>/If' incorporates:
   *  Inport: '<S270>/In1'
   *  Inport: '<S271>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S265>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S265>/override_enable'
   */
  if ((bcm_mainc_stat_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S265>/NewValue' incorporates:
     *  ActionPort: '<S270>/Action Port'
     */
    BuckyWagon_01_B.s265_Merge = (bcm_mainc_stat_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S270>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(70);
    }

    /* End of Outputs for SubSystem: '<S265>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S265>/OldValue' incorporates:
     *  ActionPort: '<S271>/Action Port'
     */
    BuckyWagon_01_B.s265_Merge = BuckyWagon_01_B.s248_bcm_mainc_stat;

    /* S-Function (motohawk_sfun_code_cover): '<S271>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(71);
    }

    /* End of Outputs for SubSystem: '<S265>/OldValue' */
  }

  /* End of If: '<S265>/If' */

  /* If: '<S269>/If' incorporates:
   *  Inport: '<S278>/In1'
   *  Inport: '<S279>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S269>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S269>/override_enable'
   */
  if ((bcm_ready_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S269>/NewValue' incorporates:
     *  ActionPort: '<S278>/Action Port'
     */
    BuckyWagon_01_B.s269_Merge = (bcm_ready_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S278>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(78);
    }

    /* End of Outputs for SubSystem: '<S269>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S269>/OldValue' incorporates:
     *  ActionPort: '<S279>/Action Port'
     */
    BuckyWagon_01_B.s269_Merge = BuckyWagon_01_B.s248_bcm_ready;

    /* S-Function (motohawk_sfun_code_cover): '<S279>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(79);
    }

    /* End of Outputs for SubSystem: '<S269>/OldValue' */
  }

  /* End of If: '<S269>/If' */

  /* Gain: '<S248>/Gain1' */
  BuckyWagon_01_B.s248_bcm_soc_j = 100.0 * BuckyWagon_01_B.s248_bcm_soc;

  /* If: '<S266>/If' incorporates:
   *  Inport: '<S272>/In1'
   *  Inport: '<S273>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S266>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S266>/override_enable'
   */
  if ((bcm_chargec_stat_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S266>/NewValue' incorporates:
     *  ActionPort: '<S272>/Action Port'
     */
    BuckyWagon_01_B.s266_Merge = (bcm_chargec_stat_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S272>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(72);
    }

    /* End of Outputs for SubSystem: '<S266>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S266>/OldValue' incorporates:
     *  ActionPort: '<S273>/Action Port'
     */
    BuckyWagon_01_B.s266_Merge = BuckyWagon_01_B.s248_bcm_chgc_stat;

    /* S-Function (motohawk_sfun_code_cover): '<S273>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(73);
    }

    /* End of Outputs for SubSystem: '<S266>/OldValue' */
  }

  /* End of If: '<S266>/If' */

  /* If: '<S268>/If' incorporates:
   *  Inport: '<S276>/In1'
   *  Inport: '<S277>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S268>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S268>/override_enable'
   */
  if ((SOC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S268>/NewValue' incorporates:
     *  ActionPort: '<S276>/Action Port'
     */
    BuckyWagon_01_B.s268_Merge = (SOC_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S276>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(76);
    }

    /* End of Outputs for SubSystem: '<S268>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S268>/OldValue' incorporates:
     *  ActionPort: '<S277>/Action Port'
     */
    BuckyWagon_01_B.s268_Merge = BuckyWagon_01_B.s248_bcm_soc_j;

    /* S-Function (motohawk_sfun_code_cover): '<S277>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(77);
    }

    /* End of Outputs for SubSystem: '<S268>/OldValue' */
  }

  /* End of If: '<S268>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S248>/Read CAN Message6' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_2846p0004;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_2846p0004,
      &messageObj);
    if ((BuckyWagon_01_B.s248_AgeCount_e + 1) > BuckyWagon_01_B.s248_AgeCount_e)
      BuckyWagon_01_B.s248_AgeCount_e++;
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
      BuckyWagon_01_B.s248_bcm_cell_tmax = (((real_T) tmp0) / ((real_T) 2)) +
        ((real_T) -40);
      BuckyWagon_01_B.s248_bcm_cell_tmin = (((real_T) tmp1) / ((real_T) 2)) +
        ((real_T) -40);
      BuckyWagon_01_B.s248_bcm_cell_vmax = ((real_T) tmp2) / ((real_T) 1000);
      BuckyWagon_01_B.s248_bcm_cell_vmin = ((real_T) tmp3) / ((real_T) 1000);
      BuckyWagon_01_B.s248_bcm_chga_ena = (real_T) tmp4;
      BuckyWagon_01_B.s248_bcm_chga_mon = (real_T) tmp5;
      BuckyWagon_01_B.s248_bcm_lvbat = ((real_T) tmp6) / ((real_T) 10);
      BuckyWagon_01_B.s248_bcm_mod_ena = (real_T) tmp7;
      BuckyWagon_01_B.s248_bcm_veh_mon = (real_T) tmp8;
      BuckyWagon_01_B.s248_AgeCount_e = 0;
    }
  }

  /* RelationalOperator: '<S264>/Compare' incorporates:
   *  Constant: '<S264>/Constant'
   */
  rtb_Compare_gs = ((BuckyWagon_01_B.s248_AgeCount_e > 20U));

  /* S-Function (motohawk_sfun_fault_def): '<S248>/motohawk_fault_def12' */

  /* Set Fault Suspected Status: NoCAN_BCM_430 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(26, rtb_Compare_gs);
    UpdateFault(26);
  }

  /* Logic: '<S248>/Logical Operator1' incorporates:
   *  Logic: '<S248>/Logical Operator'
   *  S-Function (motohawk_sfun_fault_status): '<S248>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S248>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S248>/motohawk_fault_status2'
   */
  rtb_LogicalOperator1_jo = !(IsFaultActive(24) || IsFaultActive(25) ||
    IsFaultActive(26));

  /* S-Function (motohawk_sfun_read_canmsg): '<S248>/Read CAN Message5' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_2845p0004;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_2845p0004,
      &messageObj);
    if ((BuckyWagon_01_B.s248_AgeCount_k + 1) > BuckyWagon_01_B.s248_AgeCount_k)
      BuckyWagon_01_B.s248_AgeCount_k++;
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
      BuckyWagon_01_B.s248_bcm_cell_overvolt = (real_T) tmp0;
      BuckyWagon_01_B.s248_bcm_cell_undervolt = (boolean_T) tmp1;
      BuckyWagon_01_B.s248_bcm_chg_buf = ((real_T) tmp2) / ((real_T) 2);
      BuckyWagon_01_B.s248_bcm_chg_max = ((real_T) tmp3) / ((real_T) 4);
      BuckyWagon_01_B.s248_bcm_dis_buf = ((real_T) tmp4) / ((real_T) 2);
      BuckyWagon_01_B.s248_bcm_dis_max = ((real_T) tmp5) / ((real_T) 4);
      BuckyWagon_01_B.s248_bcm_t_coolant = (((real_T) tmp6) / ((real_T) 2)) +
        ((real_T) -40);
      BuckyWagon_01_B.s248_AgeCount_k = 0;
    }
  }

  /* RelationalOperator: '<S263>/Compare' incorporates:
   *  Constant: '<S263>/Constant'
   */
  rtb_Compare_i = ((BuckyWagon_01_B.s248_AgeCount_k > 20U));

  /* S-Function (motohawk_sfun_fault_def): '<S248>/motohawk_fault_def11' */

  /* Set Fault Suspected Status: NoCAN_BCM_420 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(25, rtb_Compare_i);
    UpdateFault(25);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S248>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: High_Cell_Voltage_Shutdown */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(13, BuckyWagon_01_B.s248_bcm_cell_undervolt);
    UpdateFault(13);
  }

  /* If: '<S267>/If' incorporates:
   *  Inport: '<S274>/In1'
   *  Inport: '<S275>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S267>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S267>/override_enable'
   */
  if ((bcm_cell_overvolt_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S267>/NewValue' incorporates:
     *  ActionPort: '<S274>/Action Port'
     */
    BuckyWagon_01_B.s267_Merge = (bcm_cell_overvolt_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S274>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(74);
    }

    /* End of Outputs for SubSystem: '<S267>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S267>/OldValue' incorporates:
     *  ActionPort: '<S275>/Action Port'
     */
    BuckyWagon_01_B.s267_Merge = BuckyWagon_01_B.s248_bcm_cell_overvolt;

    /* S-Function (motohawk_sfun_code_cover): '<S275>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(75);
    }

    /* End of Outputs for SubSystem: '<S267>/OldValue' */
  }

  /* End of If: '<S267>/If' */

  /* End of Outputs for SubSystem: '<S12>/A123 Battery Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S253>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3524p0004;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3524p0004,
      &messageObj);
    if ((BuckyWagon_01_B.s253_AgeCount + 1) > BuckyWagon_01_B.s253_AgeCount)
      BuckyWagon_01_B.s253_AgeCount++;
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
      BuckyWagon_01_B.s253_InputVoltage = ((real_T) tmp0) * ((real_T) 2);
      BuckyWagon_01_B.s253_OutputVoltage = ((real_T) tmp1) * ((real_T) 2);
      BuckyWagon_01_B.s253_InputCurrentLimitMax = ((real_T) tmp2) / ((real_T) 2);
      BuckyWagon_01_B.s253_InputCurrent = ((real_T) tmp3) / ((real_T) 2);
      BuckyWagon_01_B.s253_OutputCurrent = ((real_T) tmp4) / ((real_T) 2);
      BuckyWagon_01_B.s253_Eaton_HV_Charger_Temperature = (((real_T) tmp5) /
        ((real_T) 2)) + ((real_T) -40);
      BuckyWagon_01_B.s253_IgnitionStatus = (real_T) tmp6;
      BuckyWagon_01_B.s253_ChargerState = (real_T) tmp7;
      BuckyWagon_01_B.s253_FaultSeverityIndicator = (real_T) tmp8;
      BuckyWagon_01_B.s253_MessageCounter = (real_T) tmp9;
      BuckyWagon_01_B.s253_MessageChecksum = (real_T) tmp10;
      BuckyWagon_01_B.s253_AgeCount = 0;
    }
  }

  /* If: '<S343>/If' incorporates:
   *  Inport: '<S361>/In1'
   *  Inport: '<S362>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S343>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S343>/override_enable'
   */
  if ((InputVoltage_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S343>/NewValue' incorporates:
     *  ActionPort: '<S361>/Action Port'
     */
    rtb_Merge_k = (InputVoltage_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S361>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(127);
    }

    /* End of Outputs for SubSystem: '<S343>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S343>/OldValue' incorporates:
     *  ActionPort: '<S362>/Action Port'
     */
    rtb_Merge_k = BuckyWagon_01_B.s253_InputVoltage;

    /* S-Function (motohawk_sfun_code_cover): '<S362>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(128);
    }

    /* End of Outputs for SubSystem: '<S343>/OldValue' */
  }

  /* End of If: '<S343>/If' */

  /* RelationalOperator: '<S334>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration'
   */
  rtb_RelationalOperator_k = (rtb_Merge_k > (PluggedInMainsThesEaton_DataStore()));

  /* Stateflow: '<S334>/Chart' */
  BuckyWagon_01_Chart((PluggedInHistTimeeaton_DataStore()),
                      rtb_RelationalOperator_k, &BuckyWagon_01_B.s334_sf_Chart,
                      &BuckyWagon_01_DWork.s334_sf_Chart);

  /* Outputs for Atomic SubSystem: '<S12>/Eaton Motor Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S254>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3610p0002;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3610p0002,
      &messageObj);
    if ((BuckyWagon_01_B.s254_AgeCount + 1) > BuckyWagon_01_B.s254_AgeCount)
      BuckyWagon_01_B.s254_AgeCount++;
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
      BuckyWagon_01_B.s254_Fault_Severity_Indicator = (real_T) tmp0;
      BuckyWagon_01_B.s254_Message_Checksum = (real_T) tmp1;
      BuckyWagon_01_B.s254_Message_Counter = (real_T) tmp2;
      BuckyWagon_01_B.s254_Motor_Control_State = (real_T) tmp3;
      BuckyWagon_01_B.s254_Motor_Speed = (((real_T) tmp4) / ((real_T) 4)) +
        ((real_T) -8000);
      BuckyWagon_01_B.s254_Motor_Torque = (((real_T) tmp5) / ((real_T) 10)) +
        ((real_T) -3200);
      BuckyWagon_01_B.s254_Percent_Torque_Available = ((real_T) tmp6) / ((real_T)
        2);
      BuckyWagon_01_B.s254_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S363>/Compare' incorporates:
   *  Constant: '<S363>/Constant'
   */
  rtb_Compare_d = ((BuckyWagon_01_B.s254_AgeCount > 20U));

  /* S-Function (motohawk_sfun_fault_def): '<S254>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: NoCAN_EatonM_FF30 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(28, rtb_Compare_d);
    UpdateFault(28);
  }

  /* If: '<S365>/If' incorporates:
   *  Inport: '<S367>/In1'
   *  Inport: '<S368>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S365>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S365>/override_enable'
   */
  if ((Motor_Speed_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S365>/NewValue' incorporates:
     *  ActionPort: '<S367>/Action Port'
     */
    BuckyWagon_01_B.s365_Merge = (Motor_Speed_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S367>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(129);
    }

    /* End of Outputs for SubSystem: '<S365>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S365>/OldValue' incorporates:
     *  ActionPort: '<S368>/Action Port'
     */
    BuckyWagon_01_B.s365_Merge = BuckyWagon_01_B.s254_Motor_Speed;

    /* S-Function (motohawk_sfun_code_cover): '<S368>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(130);
    }

    /* End of Outputs for SubSystem: '<S365>/OldValue' */
  }

  /* End of If: '<S365>/If' */

  /* RelationalOperator: '<S254>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration'
   */
  BuckyWagon_01_B.s254_RelationalOperator =
    ((BuckyWagon_01_B.s254_Motor_Control_State > (Drive_Ready_DataStore())));

  /* If: '<S366>/If' incorporates:
   *  Inport: '<S369>/In1'
   *  Inport: '<S370>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S366>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S366>/override_enable'
   */
  if ((Motor_Torque_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S366>/NewValue' incorporates:
     *  ActionPort: '<S369>/Action Port'
     */
    BuckyWagon_01_B.s366_Merge = (Motor_Torque_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S369>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(131);
    }

    /* End of Outputs for SubSystem: '<S366>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S366>/OldValue' incorporates:
     *  ActionPort: '<S370>/Action Port'
     */
    BuckyWagon_01_B.s366_Merge = BuckyWagon_01_B.s254_Motor_Torque;

    /* S-Function (motohawk_sfun_code_cover): '<S370>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(132);
    }

    /* End of Outputs for SubSystem: '<S366>/OldValue' */
  }

  /* End of If: '<S366>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S254>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3609p0002;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3609p0002,
      &messageObj);
    if ((BuckyWagon_01_B.s254_AgeCount_g + 1) > BuckyWagon_01_B.s254_AgeCount_g)
      BuckyWagon_01_B.s254_AgeCount_g++;
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
      BuckyWagon_01_B.s254_DC_Bus_Current = (((real_T) tmp0) / ((real_T) 5)) +
        ((real_T) -400);
      BuckyWagon_01_B.s254_DC_Bus_Voltage = ((real_T) tmp1) / ((real_T) 5);
      BuckyWagon_01_B.s254_Inverter_Temperature = ((real_T) tmp2) + ((real_T)
        -40);
      BuckyWagon_01_B.s254_Motor_Temperature = ((real_T) tmp3) + ((real_T) -40);
      BuckyWagon_01_B.s254_Phase_Current = (((real_T) tmp4) / ((real_T) 5)) +
        ((real_T) -400);
      BuckyWagon_01_B.s254_Phase_phase_voltage = ((real_T) tmp5) / ((real_T) 5);
      BuckyWagon_01_B.s254_AgeCount_g = 0;
    }
  }

  /* RelationalOperator: '<S364>/Compare' incorporates:
   *  Constant: '<S364>/Constant'
   */
  rtb_Compare_kf = ((BuckyWagon_01_B.s254_AgeCount_g > 200U));

  /* S-Function (motohawk_sfun_fault_def): '<S254>/motohawk_fault_def13' */

  /* Set Fault Suspected Status: NoCAN_EatonM_FF31 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(29, rtb_Compare_kf);
    UpdateFault(29);
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S254>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3611p0002;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3611p0002,
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
      BuckyWagon_01_B.s254_Isolation_Resistance = ((real_T) tmp0) * ((real_T) 8);
      BuckyWagon_01_B.s254_Maximum_Rated_Power = ((real_T) tmp1) * ((real_T) 5);
      BuckyWagon_01_B.s254_Maximum_Rated_Speed = (((real_T) tmp2) / ((real_T) 4))
        + ((real_T) -8000);
      BuckyWagon_01_B.s254_Maximum_Rated_Torqe = (((real_T) tmp3) / ((real_T) 10))
        + ((real_T) -3200);
    }
  }

  /* End of Outputs for SubSystem: '<S12>/Eaton Motor Inputs' */

  /* Outputs for Atomic SubSystem: '<S9>/HV Controller' */

  /* Logic: '<S136>/Logical Operator2' */
  rtb_LogicalOperator2_e = !BuckyWagon_01_B.s334_sf_Chart.s290_pluggedIn;

  /* Logic: '<S136>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S136>/motohawk_data_read'
   */
  rtb_LogicalOperator1_l = (Shutdown_Req_DataStore() && rtb_LogicalOperator2_e);

  /* If: '<S185>/If' incorporates:
   *  Inport: '<S192>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S185>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S185>/override_enable'
   */
  if ((Contactor_Shutdown_Test_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S185>/NewValue' incorporates:
     *  ActionPort: '<S192>/Action Port'
     */
    rtb_LogicalOperator1_l = (Contactor_Shutdown_Test_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S192>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(64);
    }

    /* End of Outputs for SubSystem: '<S185>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S185>/OldValue' incorporates:
     *  ActionPort: '<S193>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S193>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(65);
    }

    /* End of Outputs for SubSystem: '<S185>/OldValue' */
  }

  /* End of If: '<S185>/If' */

  /* Logic: '<S136>/Logical Operator12' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S136>/motohawk_fault_action'
   */
  rtb_LogicalOperator12 = (rtb_LogicalOperator1_l || GetFaultActionStatus(6));

  /* S-Function Block: <S189>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s189_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_h = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S189>/Switch' incorporates:
   *  Constant: '<S189>/Constant'
   *  Logic: '<S183>/Logical Operator5'
   *  S-Function (motohawk_sfun_data_read): '<S189>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S189>/motohawk_delta_time'
   *  Sum: '<S189>/Sum'
   */
  if (!rtb_LogicalOperator12) {
    rtb_Merge_k = rtb_motohawk_delta_time_h + Solectria_Enable_timer_DataStore();
  } else {
    rtb_Merge_k = 0.0;
  }

  /* End of Switch: '<S189>/Switch' */
  /* Logic: '<S183>/Logical Operator4' incorporates:
   *  Logic: '<S183>/Logical Operator3'
   *  RelationalOperator: '<S183>/Relational Operator1'
   *  RelationalOperator: '<S184>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S183>/motohawk_calibration1'
   */
  rtb_LogicalOperator4_f = ((!rtb_LogicalOperator12) && (rtb_Merge_k >=
    (Load_Enable_Delay_DataStore())) && BuckyWagon_01_B.s265_Merge);

  /* S-Function (motohawk_sfun_data_write): '<S136>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Batt_Load_Enable */
  {
    Batt_Load_Enable_DataStore() = rtb_LogicalOperator4_f;
  }

  /* RelationalOperator: '<S182>/Compare' incorporates:
   *  Constant: '<S182>/Constant'
   */
  rtb_LogicalOperator1_l = (BuckyWagon_01_B.s269_Merge == 1.0);

  /* UnitDelay: '<S190>/Unit Delay' */
  rtb_UnitDelay_if = BuckyWagon_01_DWork.s190_UnitDelay_DSTATE;

  /* Switch: '<S187>/Switch' incorporates:
   *  Constant: '<S187>/Constant1'
   *  DataTypeConversion: '<S187>/Data Type Conversion'
   *  Sum: '<S187>/Sum'
   *  UnitDelay: '<S187>/Unit Delay'
   */
  if (rtb_LogicalOperator1_l) {
    rtb_to65535_c = BuckyWagon_01_DWork.s187_UnitDelay_DSTATE + 1.0;
  } else {
    rtb_to65535_c = 0.0;
  }

  /* End of Switch: '<S187>/Switch' */

  /* Logic: '<S187>/Logical Operator' */
  rtb_LogicalOperator_bd = !rtb_LogicalOperator1_l;

  /* Switch: '<S187>/Switch1' incorporates:
   *  Constant: '<S187>/Constant3'
   *  DataTypeConversion: '<S187>/Data Type Conversion1'
   *  Sum: '<S187>/Sum1'
   *  UnitDelay: '<S187>/Unit Delay1'
   */
  if (rtb_LogicalOperator_bd) {
    rtb_to65535_d = BuckyWagon_01_DWork.s187_UnitDelay1_DSTATE + 1.0;
  } else {
    rtb_to65535_d = 0.0;
  }

  /* End of Switch: '<S187>/Switch1' */

  /* Logic: '<S191>/Logical Operator2' incorporates:
   *  Constant: '<S187>/off delay'
   *  Constant: '<S187>/on delay'
   *  Logic: '<S187>/Logical Operator1'
   *  Logic: '<S187>/Logical Operator2'
   *  Logic: '<S191>/Logical Operator'
   *  Logic: '<S191>/Logical Operator1'
   *  RelationalOperator: '<S187>/Relational Operator1'
   *  RelationalOperator: '<S187>/Relational Operator2'
   *  UnitDelay: '<S191>/Unit Delay'
   */
  rtb_LogicalOperator2_o = ((BuckyWagon_01_DWork.s191_UnitDelay_DSTATE ||
    (rtb_LogicalOperator1_l && (rtb_to65535_c >= 10.0))) &&
    (!(rtb_LogicalOperator_bd && (rtb_to65535_d >= 0.0))));

  /* S-Function Block: <S188>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s188_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_oi = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S188>/Switch' incorporates:
   *  Constant: '<S188>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S188>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S188>/motohawk_delta_time'
   *  Sum: '<S188>/Sum'
   */
  if (rtb_LogicalOperator12) {
    rtb_Switch_h = rtb_motohawk_delta_time_oi +
      Contactor_Disable_Timer_DataStore();
  } else {
    rtb_Switch_h = 0.0;
  }

  /* End of Switch: '<S188>/Switch' */
  /* Logic: '<S183>/Logical Operator2' incorporates:
   *  Logic: '<S183>/Logical Operator6'
   *  RelationalOperator: '<S183>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S183>/motohawk_calibration'
   */
  rtb_LogicalOperator1_l = (rtb_LogicalOperator2_o && (!(rtb_Switch_h >=
    (Contactor_Disable_Delay_DataStore()))));

  /* Switch: '<S186>/Switch' incorporates:
   *  Constant: '<S186>/Constant1'
   *  DataTypeConversion: '<S186>/Data Type Conversion'
   *  Sum: '<S186>/Sum'
   *  UnitDelay: '<S186>/Unit Delay'
   */
  if (rtb_LogicalOperator1_l) {
    rtb_to65535_b = BuckyWagon_01_DWork.s186_UnitDelay_DSTATE + 1.0;
  } else {
    rtb_to65535_b = 0.0;
  }

  /* End of Switch: '<S186>/Switch' */

  /* Logic: '<S186>/Logical Operator' */
  rtb_LogicalOperator_bd = !rtb_LogicalOperator1_l;

  /* Switch: '<S186>/Switch1' incorporates:
   *  Constant: '<S186>/Constant3'
   *  DataTypeConversion: '<S186>/Data Type Conversion1'
   *  Sum: '<S186>/Sum1'
   *  UnitDelay: '<S186>/Unit Delay1'
   */
  if (rtb_LogicalOperator_bd) {
    rtb_to65535_dx = BuckyWagon_01_DWork.s186_UnitDelay1_DSTATE + 1.0;
  } else {
    rtb_to65535_dx = 0.0;
  }

  /* End of Switch: '<S186>/Switch1' */

  /* Logic: '<S190>/Logical Operator2' incorporates:
   *  Constant: '<S186>/off delay'
   *  Constant: '<S186>/on delay'
   *  Logic: '<S186>/Logical Operator1'
   *  Logic: '<S186>/Logical Operator2'
   *  Logic: '<S190>/Logical Operator'
   *  Logic: '<S190>/Logical Operator1'
   *  RelationalOperator: '<S186>/Relational Operator1'
   *  RelationalOperator: '<S186>/Relational Operator2'
   */
  rtb_LogicalOperator2_j = ((rtb_UnitDelay_if || (rtb_LogicalOperator1_l &&
    (rtb_to65535_b >= 0.0))) && (!(rtb_LogicalOperator_bd && (rtb_to65535_dx >=
    10.0))));

  /* S-Function (motohawk_sfun_data_write): '<S183>/motohawk_data_write' */
  /* Write to Data Storage as scalar: MPRD_KeepAlive */
  {
    MPRD_KeepAlive_DataStore() = rtb_LogicalOperator2_j;
  }

  /* Saturate: '<S188>/Saturation' */
  rtb_Saturation_p = rtb_Switch_h >= 86400.0 ? 86400.0 : rtb_Switch_h <= 0.0 ?
    0.0 : rtb_Switch_h;

  /* S-Function (motohawk_sfun_data_write): '<S188>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Contactor_Disable_Timer */
  {
    Contactor_Disable_Timer_DataStore() = rtb_Saturation_p;
  }

  /* Saturate: '<S189>/Saturation' */
  rtb_Saturation_c = rtb_Merge_k >= 86400.0 ? 86400.0 : rtb_Merge_k <= 0.0 ? 0.0
    : rtb_Merge_k;

  /* S-Function (motohawk_sfun_data_write): '<S189>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Solectria_Enable_timer */
  {
    Solectria_Enable_timer_DataStore() = rtb_Saturation_c;
  }

  /* Logic: '<S136>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S136>/motohawk_calibration8'
   */
  BuckyWagon_01_B.s136_LogicalOperator = (((Allow_MainContactor_Close_DataStore())
    && rtb_LogicalOperator1_l));

  /* Logic: '<S136>/Logical Operator3' */
  rtb_LogicalOperator2_e = (rtb_LogicalOperator4_f && rtb_LogicalOperator2_e);

  /* Logic: '<S136>/Logical Operator4' */
  rtb_UnitDelay_if = (BuckyWagon_01_B.s254_RelationalOperator &&
                      rtb_LogicalOperator2_e);

  /* Logic: '<S136>/Logical Operator5' */
  rtb_LogicalOperator5_k = (rtb_LogicalOperator4_f || BuckyWagon_01_B.s266_Merge);

  /* Update for UnitDelay: '<S190>/Unit Delay' */
  BuckyWagon_01_DWork.s190_UnitDelay_DSTATE = rtb_LogicalOperator2_j;

  /* Update for UnitDelay: '<S191>/Unit Delay' */
  BuckyWagon_01_DWork.s191_UnitDelay_DSTATE = rtb_LogicalOperator2_o;

  /* Update for UnitDelay: '<S187>/Unit Delay' */
  BuckyWagon_01_DWork.s187_UnitDelay_DSTATE = rtb_to65535_c;

  /* Update for UnitDelay: '<S187>/Unit Delay1' */
  BuckyWagon_01_DWork.s187_UnitDelay1_DSTATE = rtb_to65535_d;

  /* Update for UnitDelay: '<S186>/Unit Delay' */
  BuckyWagon_01_DWork.s186_UnitDelay_DSTATE = rtb_to65535_b;

  /* Update for UnitDelay: '<S186>/Unit Delay1' */
  BuckyWagon_01_DWork.s186_UnitDelay1_DSTATE = rtb_to65535_dx;

  /* End of Outputs for SubSystem: '<S9>/HV Controller' */

  /* S-Function Block: <S12>/motohawk_din Resource: EStop_Switch_Pin */
  {
    extern NativeError_S EStop_Switch_Pin_DigitalInput_Get(boolean_T *out,
      uint16_T *status);
    EStop_Switch_Pin_DigitalInput_Get(&rtb_E_stop_switch, NULL);
  }

  /* Logic: '<S12>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration'
   *  S-Function (motohawk_sfun_din): '<S12>/motohawk_din'
   */
  rtb_LogicalOperator1_l = rtb_E_stop_switch ^ (E_Stop_Invert_DataStore());

  /* If: '<S261>/If' incorporates:
   *  Inport: '<S399>/In1'
   *  Inport: '<S400>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S261>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S261>/override_enable'
   */
  if ((Estop_switch_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S261>/NewValue' incorporates:
     *  ActionPort: '<S399>/Action Port'
     */
    BuckyWagon_01_B.s261_Merge = (Estop_switch_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S399>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(141);
    }

    /* End of Outputs for SubSystem: '<S261>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S261>/OldValue' incorporates:
     *  ActionPort: '<S400>/Action Port'
     */
    BuckyWagon_01_B.s261_Merge = rtb_LogicalOperator1_l;

    /* S-Function (motohawk_sfun_code_cover): '<S400>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(142);
    }

    /* End of Outputs for SubSystem: '<S261>/OldValue' */
  }

  /* End of If: '<S261>/If' */

  /* Logic: '<S9>/Logical Operator' incorporates:
   *  Logic: '<S9>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_action): '<S9>/motohawk_fault_action'
   */
  rtb_BelowLoTarget = !(BuckyWagon_01_B.s334_sf_Chart.s290_pluggedIn ||
                        BuckyWagon_01_B.s261_Merge || GetFaultActionStatus(4));

  /* S-Function Block: <S12>/motohawk_ain2 Resource: Reverse_Switch_Pin */
  {
    extern NativeError_S Reverse_Switch_Pin_AnalogInput_Get(uint16_T *adc,
      uint16_T *status);
    Reverse_Switch_Pin_AnalogInput_Get(&rtb_motohawk_ain2, NULL);
  }

  /* DataTypeConversion: '<S249>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S12>/motohawk_ain2'
   */
  BuckyWagon_01_B.s249_DataTypeConversion = (real_T)rtb_motohawk_ain2;

  /* RelationalOperator: '<S249>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S249>/SwitchPoint'
   */
  rtb_LogicalOperator1_l = (BuckyWagon_01_B.s249_DataTypeConversion >
    (Reverse_SwitchPt_DataStore()));

  /* Logic: '<S249>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S249>/0 = No Inversion 1 = Inversion'
   */
  rtb_LogicalOperator1_l ^= (Reverse_Polarity_DataStore());

  /* If: '<S280>/If' incorporates:
   *  Inport: '<S281>/In1'
   *  Inport: '<S282>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S280>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S280>/override_enable'
   */
  if ((Reverse_Switch_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S280>/NewValue' incorporates:
     *  ActionPort: '<S281>/Action Port'
     */
    BuckyWagon_01_B.s280_Merge = (Reverse_Switch_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S281>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(80);
    }

    /* End of Outputs for SubSystem: '<S280>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S280>/OldValue' incorporates:
     *  ActionPort: '<S282>/Action Port'
     */
    BuckyWagon_01_B.s280_Merge = rtb_LogicalOperator1_l;

    /* S-Function (motohawk_sfun_code_cover): '<S282>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(81);
    }

    /* End of Outputs for SubSystem: '<S280>/OldValue' */
  }

  /* End of If: '<S280>/If' */

  /* S-Function Block: <S371>/motohawk_delta_time */
  rtb_DataTypeConversion_b = 0.005;

  /* Product: '<S371>/Product' incorporates:
   *  MinMax: '<S371>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S371>/motohawk_calibration'
   */
  rtb_DataTypeConversion_b /= (rtb_DataTypeConversion_b >=
    (Accel_FilterConst_DataStore())) || rtIsNaN((Accel_FilterConst_DataStore()))
    ? rtb_DataTypeConversion_b : (Accel_FilterConst_DataStore());

  /* Logic: '<S255>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S255>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S255>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_fj = (IsFaultActive(1) || IsFaultActive(2));

  /* Logic: '<S255>/Logical Operator6' */
  rtb_LogicalOperator1_l = !rtb_RelationalOperator_fj;

  /* Logic: '<S255>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S255>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S255>/motohawk_fault_status3'
   */
  rtb_LogicalOperator_bd = (IsFaultSuspected(1) || IsFaultSuspected(2));

  /* S-Function Block: <S12>/motohawk_ain Resource: Accel_Pedal_Pin */
  {
    extern NativeError_S Accel_Pedal_Pin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    Accel_Pedal_Pin_AnalogInput_Get(&BuckyWagon_01_B.s12_motohawk_ain, NULL);
  }

  /* DataTypeConversion: '<S255>/Data Type Conversion' */
  rtb_DataTypeConversion_i = BuckyWagon_01_B.s12_motohawk_ain;

  /* Fcn: '<S255>/ZeroFullCal' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S255>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S255>/motohawk_calibration5'
   */
  rtb_DataTypeConversion_d = ((real_T)rtb_DataTypeConversion_i -
    (Accel_Zero_DataStore())) / ((Accel_Full_DataStore()) -
    (Accel_Zero_DataStore()));

  /* Saturate: '<S255>/Saturation' */
  BuckyWagon_01_B.s255_Saturation = rtb_DataTypeConversion_d >= 1.0 ? 1.0 :
    rtb_DataTypeConversion_d <= 0.0 ? 0.0 : rtb_DataTypeConversion_d;

  /* UnitDelay: '<S255>/Unit Delay1' */
  rtb_UnitDelay1_k = BuckyWagon_01_DWork.s255_UnitDelay1_DSTATE;

  /* If: '<S255>/If' incorporates:
   *  Logic: '<S255>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_l && rtb_LogicalOperator_bd) {
    /* Outputs for IfAction SubSystem: '<S255>/If Action Subsystem' incorporates:
     *  ActionPort: '<S372>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(rtb_UnitDelay1_k, &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S255>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_fj) {
    /* Outputs for IfAction SubSystem: '<S255>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S373>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem((Accel_DfltValue_DataStore()), &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S255>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S255>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S374>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(BuckyWagon_01_B.s255_Saturation,
      &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S255>/If Action Subsystem2' */
  }

  /* End of If: '<S255>/If' */

  /* Sum: '<S376>/Sum1' incorporates:
   *  Constant: '<S376>/Constant'
   *  Product: '<S376>/Product'
   *  Product: '<S376>/Product1'
   *  Sum: '<S376>/Sum'
   *  UnitDelay: '<S376>/Unit Delay'
   */
  rtb_Sum1 = (1.0 - rtb_DataTypeConversion_b) *
    BuckyWagon_01_DWork.s376_UnitDelay_DSTATE + rtb_Merge_c *
    rtb_DataTypeConversion_b;

  /* If: '<S375>/If' incorporates:
   *  Inport: '<S377>/In1'
   *  Inport: '<S378>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S375>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S375>/override_enable'
   */
  if ((Accel_Pedal_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S375>/NewValue' incorporates:
     *  ActionPort: '<S377>/Action Port'
     */
    BuckyWagon_01_B.s375_Merge = (Accel_Pedal_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S377>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(133);
    }

    /* End of Outputs for SubSystem: '<S375>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S375>/OldValue' incorporates:
     *  ActionPort: '<S378>/Action Port'
     */
    BuckyWagon_01_B.s375_Merge = rtb_Sum1;

    /* S-Function (motohawk_sfun_code_cover): '<S378>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(134);
    }

    /* End of Outputs for SubSystem: '<S375>/OldValue' */
  }

  /* End of If: '<S375>/If' */

  /* Product: '<S260>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S260>/motohawk_calibration'
   */
  rtb_Merge_k = BuckyWagon_01_B.s365_Merge * (OverallRatio_DataStore());

  /* If: '<S396>/If' incorporates:
   *  Inport: '<S397>/In1'
   *  Inport: '<S398>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S396>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S396>/override_enable'
   */
  if ((Vehicle_Speed_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S396>/NewValue' incorporates:
     *  ActionPort: '<S397>/Action Port'
     */
    BuckyWagon_01_B.s396_Merge = (Vehicle_Speed_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S397>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(139);
    }

    /* End of Outputs for SubSystem: '<S396>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S396>/OldValue' incorporates:
     *  ActionPort: '<S398>/Action Port'
     */
    BuckyWagon_01_B.s396_Merge = rtb_Merge_k;

    /* S-Function (motohawk_sfun_code_cover): '<S398>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(140);
    }

    /* End of Outputs for SubSystem: '<S396>/OldValue' */
  }

  /* End of If: '<S396>/If' */

  /* Outputs for Atomic SubSystem: '<S9>/Reverse' */

  /* Abs: '<S137>/Abs' */
  BuckyWagon_01_B.s137_Abs = fabs(BuckyWagon_01_B.s396_Merge);

  /* Stateflow: '<S137>/Chart' */

  /* Gateway: Foreground/Control Strategy/Reverse/Chart */
  BuckyWagon_01_DWork.s194_sfEvent = CALL_EVENT;
  BuckyWagon_01_c1_BuckyWagon_01();

  /* If: '<S195>/If' incorporates:
   *  Inport: '<S196>/In1'
   *  Inport: '<S197>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S195>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S195>/override_enable'
   */
  if ((In_Reverse_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S195>/NewValue' incorporates:
     *  ActionPort: '<S196>/Action Port'
     */
    BuckyWagon_01_B.s195_Merge = (In_Reverse_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S196>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(66);
    }

    /* End of Outputs for SubSystem: '<S195>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S195>/OldValue' incorporates:
     *  ActionPort: '<S197>/Action Port'
     */
    BuckyWagon_01_B.s195_Merge = BuckyWagon_01_B.s194_inReverse;

    /* S-Function (motohawk_sfun_code_cover): '<S197>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(67);
    }

    /* End of Outputs for SubSystem: '<S195>/OldValue' */
  }

  /* End of If: '<S195>/If' */

  /* Switch: '<S137>/Switch' incorporates:
   *  Constant: '<S137>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S137>/motohawk_calibration1'
   */
  if (BuckyWagon_01_B.s195_Merge != 0.0) {
    rtb_Switch_h = (ReverseDerate_DataStore());
  } else {
    rtb_Switch_h = 1.0;
  }

  /* End of Switch: '<S137>/Switch' */
  /* End of Outputs for SubSystem: '<S9>/Reverse' */
  /* S-Function Block: <S387>/motohawk_delta_time */
  rtb_DataTypeConversion_d = 0.005;

  /* Product: '<S387>/Product' incorporates:
   *  MinMax: '<S387>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S387>/motohawk_calibration'
   */
  rtb_DataTypeConversion_d /= (rtb_DataTypeConversion_d >=
    (Brake_FilterConst_DataStore())) || rtIsNaN((Brake_FilterConst_DataStore()))
    ? rtb_DataTypeConversion_d : (Brake_FilterConst_DataStore());

  /* Logic: '<S257>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S257>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S257>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_fj = (IsFaultActive(5) || IsFaultActive(6));

  /* Logic: '<S257>/Logical Operator6' */
  rtb_LogicalOperator1_l = !rtb_RelationalOperator_fj;

  /* Logic: '<S257>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S257>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S257>/motohawk_fault_status3'
   */
  rtb_LogicalOperator_bd = (IsFaultSuspected(5) || IsFaultSuspected(6));

  /* S-Function Block: <S12>/motohawk_ain1 Resource: Brake_Pedal_Pin */
  {
    extern NativeError_S Brake_Pedal_Pin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    Brake_Pedal_Pin_AnalogInput_Get(&BuckyWagon_01_B.s12_motohawk_ain1, NULL);
  }

  /* DataTypeConversion: '<S257>/Data Type Conversion' */
  rtb_DataTypeConversion_b = (real_T)BuckyWagon_01_B.s12_motohawk_ain1;

  /* Fcn: '<S257>/ZeroFullCal' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S257>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S257>/motohawk_calibration5'
   */
  rtb_Gain7 = (rtb_DataTypeConversion_b - (Brake_Zero_DataStore())) /
    ((Brake_Full_DataStore()) - (Brake_Zero_DataStore()));

  /* Saturate: '<S257>/Saturation' */
  BuckyWagon_01_B.s257_Saturation = rtb_Gain7 >= 1.0 ? 1.0 : rtb_Gain7 <= 0.0 ?
    0.0 : rtb_Gain7;

  /* UnitDelay: '<S257>/Unit Delay1' */
  rtb_UnitDelay1_b = BuckyWagon_01_DWork.s257_UnitDelay1_DSTATE;

  /* If: '<S257>/If' incorporates:
   *  Logic: '<S257>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_l && rtb_LogicalOperator_bd) {
    /* Outputs for IfAction SubSystem: '<S257>/If Action Subsystem' incorporates:
     *  ActionPort: '<S388>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(rtb_UnitDelay1_b, &rtb_Merge_e);

    /* End of Outputs for SubSystem: '<S257>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_fj) {
    /* Outputs for IfAction SubSystem: '<S257>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S389>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem((Brake_DfltValue_DataStore()), &rtb_Merge_e);

    /* End of Outputs for SubSystem: '<S257>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S257>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S390>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(BuckyWagon_01_B.s257_Saturation,
      &rtb_Merge_e);

    /* End of Outputs for SubSystem: '<S257>/If Action Subsystem2' */
  }

  /* End of If: '<S257>/If' */

  /* Sum: '<S392>/Sum1' incorporates:
   *  Constant: '<S392>/Constant'
   *  Product: '<S392>/Product'
   *  Product: '<S392>/Product1'
   *  Sum: '<S392>/Sum'
   *  UnitDelay: '<S392>/Unit Delay'
   */
  rtb_Sum1_o = (1.0 - rtb_DataTypeConversion_d) *
    BuckyWagon_01_DWork.s392_UnitDelay_DSTATE + rtb_Merge_e *
    rtb_DataTypeConversion_d;

  /* If: '<S391>/If' incorporates:
   *  Inport: '<S393>/In1'
   *  Inport: '<S394>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S391>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S391>/override_enable'
   */
  if ((Brake_Pedal_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S391>/NewValue' incorporates:
     *  ActionPort: '<S393>/Action Port'
     */
    BuckyWagon_01_B.s391_Merge = (Brake_Pedal_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S393>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(137);
    }

    /* End of Outputs for SubSystem: '<S391>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S391>/OldValue' incorporates:
     *  ActionPort: '<S394>/Action Port'
     */
    BuckyWagon_01_B.s391_Merge = rtb_Sum1_o;

    /* S-Function (motohawk_sfun_code_cover): '<S394>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(138);
    }

    /* End of Outputs for SubSystem: '<S391>/OldValue' */
  }

  /* End of If: '<S391>/If' */

  /* Outputs for Atomic SubSystem: '<S9>/Drive' */

  /* Stateflow: '<S150>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S150>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S150>/motohawk_calibration2'
   */

  /* Gateway: Foreground/Control Strategy/Drive/HillHold Algorithm/Chart */
  /* During: Foreground/Control Strategy/Drive/HillHold Algorithm/Chart */
  if (BuckyWagon_01_DWork.s152_is_active_c5_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Control Strategy/Drive/HillHold Algorithm/Chart */
    BuckyWagon_01_DWork.s152_is_active_c5_BuckyWagon_01 = 1U;

    /* Transition: '<S152>:22' */
    BuckyWagon_01_DWork.s152_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Begin;
  } else {
    switch (BuckyWagon_01_DWork.s152_is_c5_BuckyWagon_01) {
     case BuckyWagon_01_IN_Begin:
      /* During 'Begin': '<S152>:7' */
      if (BuckyWagon_01_B.s365_Merge > 1.0) {
        /* Transition: '<S152>:13' */
        BuckyWagon_01_DWork.s152_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Driving;
      } else {
        BuckyWagon_01_B.s152_HillHoldOn = FALSE;
      }
      break;

     case BuckyWagon_01_IN_Braking:
      /* During 'Braking': '<S152>:9' */
      if ((BuckyWagon_01_B.s365_Merge < 20.0) && (BuckyWagon_01_B.s365_Merge >
           -10.0) && (BuckyWagon_01_B.s391_Merge > 0.03)) {
        /* Transition: '<S152>:15' */
        BuckyWagon_01_DWork.s152_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Stopped;
      } else {
        BuckyWagon_01_B.s152_HillHoldOn = FALSE;
      }
      break;

     case BuckyWagon_01_IN_Driving:
      /* During 'Driving': '<S152>:8' */
      if ((BuckyWagon_01_B.s365_Merge > 1.0) && (BuckyWagon_01_B.s391_Merge >
           0.03)) {
        /* Transition: '<S152>:14' */
        BuckyWagon_01_DWork.s152_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Braking;
      } else {
        BuckyWagon_01_B.s152_HillHoldOn = FALSE;
      }
      break;

     case BuckyWagon_01_IN_Rolling:
      /* During 'Rolling': '<S152>:12' */
      if ((BuckyWagon_01_B.s375_Merge > 3.0) && (BuckyWagon_01_B.s365_Merge >
           1.0)) {
        /* Transition: '<S152>:20' */
        BuckyWagon_01_DWork.s152_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Driving;
      } else if (BuckyWagon_01_B.s391_Merge >=
                 (HillHoldDisengageBrakePct_DataStore())) {
        /* Transition: '<S152>:21' */
        BuckyWagon_01_DWork.s152_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Stopped;
      } else {
        BuckyWagon_01_B.s152_HillHoldOn = TRUE;
      }
      break;

     case BuckyWagon_01_IN_Stopped:
      /* During 'Stopped': '<S152>:11' */
      if ((BuckyWagon_01_B.s391_Merge > (MinBrakeBedPosforHillHold_DataStore()))
          && (BuckyWagon_01_B.s365_Merge < -10.0)) {
        /* Transition: '<S152>:16' */
        BuckyWagon_01_DWork.s152_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Rolling;
      } else {
        BuckyWagon_01_B.s152_HillHoldOn = FALSE;
      }
      break;

     default:
      /* Transition: '<S152>:22' */
      BuckyWagon_01_DWork.s152_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Begin;
      break;
    }
  }

  /* End of Stateflow: '<S150>/Chart' */

  /* S-Function Block: <S154>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s154_motohawk_delta_time_DWORK1, NULL);
    rtb_Product3_m = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S154>/Product' incorporates:
   *  MinMax: '<S154>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S154>/motohawk_calibration'
   */
  rtb_Product3_m /= (rtb_Product3_m >= (UQM_HillHoldSpeed_Filt_DataStore())) ||
    rtIsNaN((UQM_HillHoldSpeed_Filt_DataStore())) ? rtb_Product3_m :
    (UQM_HillHoldSpeed_Filt_DataStore());

  /* Product: '<S158>/Product' */
  rtb_Merge_k = BuckyWagon_01_B.s365_Merge * rtb_Product3_m;

  /* Sum: '<S158>/Sum' incorporates:
   *  Constant: '<S158>/Constant'
   */
  rtb_to65535_c = 1.0 - rtb_Product3_m;

  /* UnitDelay: '<S158>/Unit Delay' */
  rtb_Product3_m = BuckyWagon_01_DWork.s158_UnitDelay_DSTATE;

  /* Sum: '<S158>/Sum1' incorporates:
   *  Product: '<S158>/Product1'
   */
  BuckyWagon_01_B.s158_Sum1 = rtb_to65535_c * rtb_Product3_m + rtb_Merge_k;

  /* Product: '<S157>/Product3' incorporates:
   *  Constant: '<S153>/Constant'
   *  Sum: '<S157>/Sum2'
   */
  rtb_Product3_m = 0.0 - BuckyWagon_01_B.s158_Sum1;

  /* UnitDelay: '<S159>/Unit Delay' */
  rtb_Morot_Torque = BuckyWagon_01_DWork.s159_UnitDelay_DSTATE;

  /* Switch: '<S159>/Switch1' incorporates:
   *  Constant: '<S157>/Constant3'
   *  Logic: '<S155>/Logical Operator'
   *  Logic: '<S155>/Logical Operator1'
   *  UnitDelay: '<S155>/Unit Delay'
   */
  if (BuckyWagon_01_B.s152_HillHoldOn &&
      (!BuckyWagon_01_DWork.s155_UnitDelay_DSTATE)) {
    rtb_Morot_Torque = 0.0;
  }

  /* End of Switch: '<S159>/Switch1' */

  /* Sum: '<S157>/Sum' incorporates:
   *  Product: '<S157>/Product2'
   *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration1'
   */
  BuckyWagon_01_B.s157_Sum = (HillHold_kP_DataStore()) * rtb_Product3_m +
    rtb_Morot_Torque;

  /* Product: '<S153>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration4'
   */
  rtb_Merge_k = (HillHoldTorqueGain_DataStore()) * BuckyWagon_01_B.s157_Sum;

  /* MinMax: '<S156>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration2'
   */
  rtb_Merge_k = (rtb_Merge_k >= (HillHoldMaxREVTqSaturation_DataStore())) ||
    rtIsNaN((HillHoldMaxREVTqSaturation_DataStore())) ? rtb_Merge_k :
    (HillHoldMaxREVTqSaturation_DataStore());

  /* MinMax: '<S156>/MinMax1' incorporates:
   *  MinMax: '<S156>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration5'
   */
  rtb_to65535_d = (rtb_Merge_k <= (HillHoldMaxFWDTqSaturation_DataStore())) ||
    rtIsNaN((HillHoldMaxFWDTqSaturation_DataStore())) ? rtb_Merge_k :
    (HillHoldMaxFWDTqSaturation_DataStore());

  /* Product: '<S157>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration3'
   */
  rtb_Merge_k = rtb_Product3_m * (HillHold_kI_DataStore());

  /* S-Function Block: <S159>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s159_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_e = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S159>/Sum' incorporates:
   *  Product: '<S159>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S159>/motohawk_delta_time'
   */
  rtb_Morot_Torque += rtb_Merge_k * rtb_motohawk_delta_time_e;

  /* MinMax: '<S161>/MinMax' incorporates:
   *  Constant: '<S157>/Constant1'
   */
  rtb_Morot_Torque = (rtb_Morot_Torque >= rtMinusInf) || rtIsNaN(rtMinusInf) ?
    rtb_Morot_Torque : rtMinusInf;

  /* MinMax: '<S161>/MinMax1' incorporates:
   *  Constant: '<S157>/Constant2'
   */
  rtb_to65535_dx = (rtb_Morot_Torque <= rtInf) || rtIsNaN(rtInf) ?
    rtb_Morot_Torque : rtInf;

  /* RelationalOperator: '<S151>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S151>/motohawk_calibration2'
   */
  rtb_LogicalOperator1_l = (BuckyWagon_01_B.s375_Merge >
    (Temp_ped_switchOver_DataStore()));

  /* S-Function Block: <S162>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s162_motohawk_delta_time_DWORK1, NULL);
    rtb_Morot_Torque = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S162>/Product' incorporates:
   *  MinMax: '<S162>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S162>/motohawk_calibration'
   */
  rtb_Morot_Torque /= (rtb_Morot_Torque >= (Veh_Speed_Regen_Filter_DataStore()))
    || rtIsNaN((Veh_Speed_Regen_Filter_DataStore())) ? rtb_Morot_Torque :
    (Veh_Speed_Regen_Filter_DataStore());

  /* Product: '<S166>/Product' */
  rtb_Merge_k = BuckyWagon_01_B.s365_Merge * rtb_Morot_Torque;

  /* Sum: '<S166>/Sum' incorporates:
   *  Constant: '<S166>/Constant'
   */
  rtb_to65535_c = 1.0 - rtb_Morot_Torque;

  /* UnitDelay: '<S166>/Unit Delay' */
  rtb_Morot_Torque = BuckyWagon_01_DWork.s166_UnitDelay_DSTATE;

  /* Sum: '<S166>/Sum1' incorporates:
   *  Product: '<S166>/Product1'
   */
  rtb_Sum1_h = rtb_to65535_c * rtb_Morot_Torque + rtb_Merge_k;

  /* Outputs for Atomic SubSystem: '<S151>/Regen' */

  /* S-Function Block: <S170>/motohawk_prelookup_row */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (StateOfChargePctIn_DataStore()) = BuckyWagon_01_B.s268_Merge;
    (StateOfChargePctIdx_DataStore()) = TablePrelookup_real_T
      (BuckyWagon_01_B.s268_Merge, (StateOfChargePctIdxArr_DataStore()), 4,
       (StateOfChargePctIdx_DataStore()));
    rtb_motohawk_prelookup_row = (StateOfChargePctIdx_DataStore());
  }

  /* S-Function Block: <S170>/motohawk_prelookup_col */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MotorSpdIn_DataStore()) = rtb_Sum1_h;
    (MotorSpdIdx_DataStore()) = TablePrelookup_real_T(rtb_Sum1_h,
      (MotorSpdIdxArr_DataStore()), 8, (MotorSpdIdx_DataStore()));
    rtb_motohawk_prelookup_col = (MotorSpdIdx_DataStore());
  }

  /* S-Function Block: <S170>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_Switch_m = TableInterpolation2D_real_T(rtb_motohawk_prelookup_row,
      rtb_motohawk_prelookup_col, (real_T *) ((MotoHawkTable2DMap_DataStore())),
      4, 8);
    (MotoHawkTable2D_DataStore()) = rtb_Switch_m;
  }

  /* Saturate: '<S164>/Saturation1' */
  BuckyWagon_01_B.s164_Saturation1 = rtb_Switch_m >= 1.0 ? 1.0 : rtb_Switch_m <=
    0.0 ? 0.0 : rtb_Switch_m;

  /* Sum: '<S164>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S164>/motohawk_calibration1'
   */
  rtb_Merge_k = BuckyWagon_01_B.s391_Merge - (Regen_Start_DataStore());

  /* Product: '<S164>/Divide' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S164>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S164>/motohawk_calibration2'
   *  Sum: '<S164>/Sum1'
   */
  rtb_Switch_m = rtb_Merge_k / ((Regen_Full_DataStore()) -
    (Regen_Start_DataStore()));

  /* Product: '<S164>/Product' incorporates:
   *  Gain: '<S164>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S164>/motohawk_calibration3'
   *  Saturate: '<S164>/Saturation2'
   */
  BuckyWagon_01_B.s164_Product = (rtb_Switch_m >= 1.0 ? 1.0 : rtb_Switch_m <=
    0.0 ? 0.0 : rtb_Switch_m) * -1.0 * (Max_Regen_Tq_DataStore());

  /* Logic: '<S164>/Logical Operator2' incorporates:
   *  Logic: '<S164>/Logical Operator'
   *  Logic: '<S164>/Logical Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S164>/motohawk_calibration4'
   */
  rtb_LogicalOperator_bd = !((BuckyWagon_01_B.s195_Merge != 0.0) ||
    (!((Enable_Regen_DataStore()) != 0.0)));

  /* RelationalOperator: '<S164>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S164>/motohawk_calibration6'
   */
  rtb_LogicalOperator12 = (BuckyWagon_01_B.s396_Merge >
    (Min_Speed_Allow_Coast_NegT_DataStore()));

  /* Gain: '<S164>/Gain1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S164>/motohawk_calibration7'
   */
  rtb_Switch_m = -(Max_Coast_Tq_DataStore());

  /* Product: '<S164>/Product2' incorporates:
   *  Logic: '<S151>/Logic'
   *  RelationalOperator: '<S164>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S164>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S164>/motohawk_calibration8'
   */
  BuckyWagon_01_B.s164_Product2 = (real_T)rtb_LogicalOperator_bd *
    (Enable_Coast_Neg_Torque_DataStore()) * (real_T)rtb_LogicalOperator12 *
    rtb_Switch_m * (real_T)(BuckyWagon_01_B.s268_Merge <
    (Max_SOC_For_Coast_Tq_EN_DataStore())) * (real_T)!rtb_LogicalOperator1_l;

  /* S-Function Block: <S168>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s168_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_m = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S168>/Product' incorporates:
   *  MinMax: '<S168>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S168>/motohawk_calibration'
   */
  rtb_Switch_m /= (rtb_Switch_m >= (Coast_down_torque_const_DataStore())) ||
    rtIsNaN((Coast_down_torque_const_DataStore())) ? rtb_Switch_m :
    (Coast_down_torque_const_DataStore());

  /* Product: '<S171>/Product' */
  rtb_Merge_k = BuckyWagon_01_B.s164_Product2 * rtb_Switch_m;

  /* Sum: '<S171>/Sum' incorporates:
   *  Constant: '<S171>/Constant'
   */
  rtb_to65535_c = 1.0 - rtb_Switch_m;

  /* UnitDelay: '<S171>/Unit Delay' */
  rtb_Switch_m = BuckyWagon_01_DWork.s171_UnitDelay_DSTATE;

  /* Sum: '<S171>/Sum1' incorporates:
   *  Product: '<S171>/Product1'
   */
  rtb_to65535_c = rtb_to65535_c * rtb_Switch_m + rtb_Merge_k;

  /* If: '<S169>/If' incorporates:
   *  Inport: '<S172>/In1'
   *  Inport: '<S173>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S169>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S169>/override_enable'
   */
  if ((Regen_SOC_Speed_Ramp_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S169>/NewValue' incorporates:
     *  ActionPort: '<S172>/Action Port'
     */
    rtb_Merge_k = (Regen_SOC_Speed_Ramp_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S172>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(58);
    }

    /* End of Outputs for SubSystem: '<S169>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S169>/OldValue' incorporates:
     *  ActionPort: '<S173>/Action Port'
     */
    rtb_Merge_k = BuckyWagon_01_B.s164_Saturation1;

    /* S-Function (motohawk_sfun_code_cover): '<S173>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(59);
    }

    /* End of Outputs for SubSystem: '<S169>/OldValue' */
  }

  /* End of If: '<S169>/If' */

  /* Product: '<S164>/Product1' */
  rtb_Switch_m = (real_T)rtb_LogicalOperator_bd * BuckyWagon_01_B.s164_Product *
    rtb_Merge_k;

  /* Switch: '<S164>/Switch' incorporates:
   *  RelationalOperator: '<S164>/Relational Operator1'
   */
  if (!(rtb_Switch_m <= BuckyWagon_01_B.s164_Product2)) {
    rtb_Switch_m = rtb_to65535_c;
  }

  /* End of Switch: '<S164>/Switch' */

  /* Saturate: '<S164>/Saturation' */
  rtb_Merge_k = rtb_Switch_m >= 0.0 ? 0.0 : rtb_Switch_m <= -240.0 ? -240.0 :
    rtb_Switch_m;

  /* Update for UnitDelay: '<S171>/Unit Delay' */
  BuckyWagon_01_DWork.s171_UnitDelay_DSTATE = rtb_to65535_c;

  /* End of Outputs for SubSystem: '<S151>/Regen' */
  /* S-Function Block: <S163>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s163_motohawk_delta_time_DWORK1, NULL);
    rtb_Morot_Torque = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S163>/Product' incorporates:
   *  MinMax: '<S163>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S163>/motohawk_calibration'
   */
  rtb_Morot_Torque /= (rtb_Morot_Torque >= (Regin_torque_const_DataStore())) ||
    rtIsNaN((Regin_torque_const_DataStore())) ? rtb_Morot_Torque :
    (Regin_torque_const_DataStore());

  /* Product: '<S167>/Product' */
  rtb_Merge_k *= rtb_Morot_Torque;

  /* Sum: '<S167>/Sum' incorporates:
   *  Constant: '<S167>/Constant'
   */
  rtb_to65535_c = 1.0 - rtb_Morot_Torque;

  /* UnitDelay: '<S167>/Unit Delay' */
  rtb_Morot_Torque = BuckyWagon_01_DWork.s167_UnitDelay_DSTATE;

  /* Sum: '<S167>/Sum1' incorporates:
   *  Product: '<S167>/Product1'
   */
  rtb_Merge_k += rtb_to65535_c * rtb_Morot_Torque;

  /* Switch: '<S151>/Switch' incorporates:
   *  Product: '<S151>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S151>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S165>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S165>/motohawk_prelookup'
   */
  if (rtb_LogicalOperator1_l) {
    /* S-Function Block: <S165>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (AccelPedalMapIn_DataStore()) = BuckyWagon_01_B.s375_Merge;
      (AccelPedalMapIdx_DataStore()) = TablePrelookup_real_T
        (BuckyWagon_01_B.s375_Merge, (AccelPedalMapIdxArr_DataStore()), 101,
         (AccelPedalMapIdx_DataStore()));
      rtb_motohawk_prelookup = (AccelPedalMapIdx_DataStore());
    }

    /* S-Function Block: <S165>/motohawk_interpolation_1d */
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

  /* End of Switch: '<S151>/Switch' */

  /* RelationalOperator: '<S133>/Relational Operator1' incorporates:
   *  MinMax: '<S156>/MinMax1'
   */
  rtb_LogicalOperator1_l = (rtb_Morot_Torque < rtb_to65535_d);

  /* Switch: '<S133>/Switch' incorporates:
   *  Logic: '<S133>/Logical Operator1'
   *  Logic: '<S133>/Logical Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S133>/motohawk_calibration'
   */
  if (!(rtb_LogicalOperator1_l && BuckyWagon_01_B.s152_HillHoldOn &&
        ((HillHoldEnable_DataStore()) != 0.0))) {
    rtb_to65535_d = rtb_Morot_Torque;
  }

  /* End of Switch: '<S133>/Switch' */

  /* Update for UnitDelay: '<S158>/Unit Delay' */
  BuckyWagon_01_DWork.s158_UnitDelay_DSTATE = BuckyWagon_01_B.s158_Sum1;

  /* Update for UnitDelay: '<S155>/Unit Delay' */
  BuckyWagon_01_DWork.s155_UnitDelay_DSTATE = BuckyWagon_01_B.s152_HillHoldOn;

  /* Update for UnitDelay: '<S159>/Unit Delay' incorporates:
   *  MinMax: '<S161>/MinMax1'
   */
  BuckyWagon_01_DWork.s159_UnitDelay_DSTATE = rtb_to65535_dx;

  /* Update for UnitDelay: '<S166>/Unit Delay' */
  BuckyWagon_01_DWork.s166_UnitDelay_DSTATE = rtb_Sum1_h;

  /* Update for UnitDelay: '<S167>/Unit Delay' */
  BuckyWagon_01_DWork.s167_UnitDelay_DSTATE = rtb_Merge_k;

  /* End of Outputs for SubSystem: '<S9>/Drive' */

  /* Product: '<S9>/Product1' */
  BuckyWagon_01_B.s9_Motor_Torque = (rtb_UnitDelay_if ? (real_T)
    rtb_BelowLoTarget : 0.0) * rtb_Switch_h * rtb_to65535_d;

  /* S-Function Block: <S135>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s135_motohawk_delta_time_DWORK1, NULL);
    rtb_Gain7 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S135>/Product' incorporates:
   *  MinMax: '<S135>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S135>/motohawk_calibration'
   */
  rtb_Gain7 /= (rtb_Gain7 >= (FiltConst_DataStore())) || rtIsNaN
    ((FiltConst_DataStore())) ? rtb_Gain7 : (FiltConst_DataStore());

  /* Sum: '<S181>/Sum1' incorporates:
   *  Constant: '<S181>/Constant'
   *  Product: '<S181>/Product'
   *  Product: '<S181>/Product1'
   *  Sum: '<S181>/Sum'
   *  UnitDelay: '<S181>/Unit Delay'
   */
  BuckyWagon_01_B.s181_Sum1 = (1.0 - rtb_Gain7) *
    BuckyWagon_01_DWork.s181_UnitDelay_DSTATE + BuckyWagon_01_B.s9_Motor_Torque *
    rtb_Gain7;

  /* If: '<S138>/If' incorporates:
   *  Inport: '<S198>/In1'
   *  Inport: '<S199>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S138>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S138>/override_enable'
   */
  if ((motor_torque_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S138>/NewValue' incorporates:
     *  ActionPort: '<S198>/Action Port'
     */
    BuckyWagon_01_B.s138_Merge = (motor_torque_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S198>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(68);
    }

    /* End of Outputs for SubSystem: '<S138>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S138>/OldValue' incorporates:
     *  ActionPort: '<S199>/Action Port'
     */
    BuckyWagon_01_B.s138_Merge = BuckyWagon_01_B.s181_Sum1;

    /* S-Function (motohawk_sfun_code_cover): '<S199>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(69);
    }

    /* End of Outputs for SubSystem: '<S138>/OldValue' */
  }

  /* End of If: '<S138>/If' */

  /* Outputs for Atomic SubSystem: '<S7>/A123 Battery Controller' */

  /* If: '<S22>/If' incorporates:
   *  Constant: '<S13>/Main Enable'
   *  Inport: '<S30>/In1'
   *  Inport: '<S31>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S22>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S22>/override_enable'
   */
  if ((hsc_bcm_enable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S22>/NewValue' incorporates:
     *  ActionPort: '<S30>/Action Port'
     */
    rtb_Merge_gc = ((uint8_T)(hsc_bcm_enable_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S30>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(0);
    }

    /* End of Outputs for SubSystem: '<S22>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S22>/OldValue' incorporates:
     *  ActionPort: '<S31>/Action Port'
     */
    rtb_Merge_gc = 1U;

    /* S-Function (motohawk_sfun_code_cover): '<S31>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(1);
    }

    /* End of Outputs for SubSystem: '<S22>/OldValue' */
  }

  /* End of If: '<S22>/If' */

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

  /* End of Switch: '<S13>/Switch' */
  /* If: '<S23>/If' incorporates:
   *  Inport: '<S32>/In1'
   *  Inport: '<S33>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S23>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S23>/override_enable'
   */
  if ((hsc_bcm_epo_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S23>/NewValue' incorporates:
     *  ActionPort: '<S32>/Action Port'
     */
    rtb_Merge_o0 = ((uint8_T)(hsc_bcm_epo_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S32>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(2);
    }

    /* End of Outputs for SubSystem: '<S23>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S23>/OldValue' incorporates:
     *  ActionPort: '<S33>/Action Port'
     */
    rtb_Merge_o0 = BuckyWagon_01_B.s13_Switch;

    /* S-Function (motohawk_sfun_code_cover): '<S33>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(3);
    }

    /* End of Outputs for SubSystem: '<S23>/OldValue' */
  }

  /* End of If: '<S23>/If' */

  /* S-Function Block: <S29>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s29_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_c = ((real_T) delta) * 0.000001;
  }

  /* Abs: '<S21>/Abs' */
  rtb_Merge_k = fabs(BuckyWagon_01_B.s138_Merge);

  /* RelationalOperator: '<S21>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S21>/motohawk_calibration1'
   */
  rtb_LogicalOperator1_l = (rtb_Merge_k < (GFD_Torque_Off_DataStore()));

  /* Switch: '<S29>/Switch' incorporates:
   *  Constant: '<S29>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S29>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S29>/motohawk_delta_time'
   *  Sum: '<S29>/Sum'
   */
  if (rtb_LogicalOperator1_l) {
    rtb_Merge_k = rtb_motohawk_delta_time_c + GFD_Torque_Timer_DataStore();
  } else {
    rtb_Merge_k = 0.0;
  }

  /* End of Switch: '<S29>/Switch' */

  /* S-Function Block: <S28>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s28_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_j = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S28>/Switch' incorporates:
   *  Constant: '<S28>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S28>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S28>/motohawk_delta_time'
   *  Sum: '<S28>/Sum'
   */
  if (BuckyWagon_01_B.s136_LogicalOperator) {
    rtb_to65535_c = rtb_motohawk_delta_time_j +
      A123_GroundFaultDetector_Enable_Timer_DataStore();
  } else {
    rtb_to65535_c = 0.0;
  }

  /* End of Switch: '<S28>/Switch' */

  /* Logic: '<S21>/Logical Operator' incorporates:
   *  Constant: '<S26>/Constant'
   *  Constant: '<S27>/Constant'
   *  Product: '<S21>/Product'
   *  RelationalOperator: '<S26>/Compare'
   *  RelationalOperator: '<S27>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S21>/motohawk_calibration'
   */
  BuckyWagon_01_B.s21_LogicalOperator = ((((GFD_Enable_DataStore()) != 0.0) &&
    ((rtb_LogicalOperator1_l ? rtb_Merge_k >= 1.0 : 0) != 0) && (rtb_to65535_c >=
    5.0)));

  /* If: '<S24>/If' incorporates:
   *  Inport: '<S34>/In1'
   *  Inport: '<S35>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S24>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S24>/override_enable'
   */
  if ((hsc_bcm_leakage_enable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S24>/NewValue' incorporates:
     *  ActionPort: '<S34>/Action Port'
     */
    rtb_Merge_hg = (hsc_bcm_leakage_enable_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S34>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(4);
    }

    /* End of Outputs for SubSystem: '<S24>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S24>/OldValue' incorporates:
     *  ActionPort: '<S35>/Action Port'
     */
    rtb_Merge_hg = BuckyWagon_01_B.s21_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S35>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(5);
    }

    /* End of Outputs for SubSystem: '<S24>/OldValue' */
  }

  /* End of If: '<S24>/If' */

  /* If: '<S25>/If' incorporates:
   *  Inport: '<S36>/In1'
   *  Inport: '<S37>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S25>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S25>/override_enable'
   */
  if ((hsc_bcm_mainc_enable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S25>/NewValue' incorporates:
     *  ActionPort: '<S36>/Action Port'
     */
    rtb_Merge_nz = (hsc_bcm_mainc_enable_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S36>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(6);
    }

    /* End of Outputs for SubSystem: '<S25>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S25>/OldValue' incorporates:
     *  ActionPort: '<S37>/Action Port'
     */
    rtb_Merge_nz = BuckyWagon_01_B.s136_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S37>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(7);
    }

    /* End of Outputs for SubSystem: '<S25>/OldValue' */
  }

  /* End of If: '<S25>/If' */

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

        tmp2 = (uint8_T)(rtb_Merge_hg != 0);
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

  /* Saturate: '<S28>/Saturation' */
  rtb_Saturation_i = rtb_to65535_c >= 86400.0 ? 86400.0 : rtb_to65535_c <= 0.0 ?
    0.0 : rtb_to65535_c;

  /* S-Function (motohawk_sfun_data_write): '<S28>/motohawk_data_write' */
  /* Write to Data Storage as scalar: A123_GroundFaultDetector_Enable_Timer */
  {
    A123_GroundFaultDetector_Enable_Timer_DataStore() = rtb_Saturation_i;
  }

  /* Saturate: '<S29>/Saturation' */
  rtb_Saturation_l = rtb_Merge_k >= 86400.0 ? 86400.0 : rtb_Merge_k <= 0.0 ? 0.0
    : rtb_Merge_k;

  /* S-Function (motohawk_sfun_data_write): '<S29>/motohawk_data_write' */
  /* Write to Data Storage as scalar: GFD_Torque_Timer */
  {
    GFD_Torque_Timer_DataStore() = rtb_Saturation_l;
  }

  /* End of Outputs for SubSystem: '<S7>/A123 Battery Controller' */

  /* DataTypeConversion: '<S9>/Data Type Conversion1' */
  rtb_LogicalOperator12 = (BuckyWagon_01_B.s195_Merge != 0.0);

  /* DataTypeConversion: '<S9>/Data Type Conversion' */
  BuckyWagon_01_B.s9_InReverse = (real_T)rtb_LogicalOperator12;

  /* If: '<S339>/If' incorporates:
   *  Inport: '<S353>/In1'
   *  Inport: '<S354>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S339>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S339>/override_enable'
   */
  if ((OutputCurrent_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S339>/NewValue' incorporates:
     *  ActionPort: '<S353>/Action Port'
     */
    rtb_Merge_k = (OutputCurrent_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S353>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(119);
    }

    /* End of Outputs for SubSystem: '<S339>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S339>/OldValue' incorporates:
     *  ActionPort: '<S354>/Action Port'
     */
    rtb_Merge_k = BuckyWagon_01_B.s253_OutputCurrent;

    /* S-Function (motohawk_sfun_code_cover): '<S354>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(120);
    }

    /* End of Outputs for SubSystem: '<S339>/OldValue' */
  }

  /* End of If: '<S339>/If' */

  /* RelationalOperator: '<S9>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S9>/motohawk_calibration'
   */
  rtb_RelationalOperator_fj = (rtb_Merge_k >= (Charger_Curr_DataStore()));

  /* Switch: '<S9>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S9>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S139>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S139>/motohawk_prelookup'
   */
  if (rtb_RelationalOperator_fj) {
    BuckyWagon_01_B.s9_FanDutyCycle = (Charging_Cooling_Speed_DataStore());
  } else {
    /* S-Function Block: <S139>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (RadiatorFanSpeed_InverterTempIn_DataStore()) =
        BuckyWagon_01_B.s254_Inverter_Temperature;
      (RadiatorFanSpeed_InverterTempIdx_DataStore()) = TablePrelookup_real_T
        (BuckyWagon_01_B.s254_Inverter_Temperature,
         (RadiatorFanSpeed_InverterTempIdxArr_DataStore()), 5,
         (RadiatorFanSpeed_InverterTempIdx_DataStore()));
      rtb_motohawk_prelookup_p = (RadiatorFanSpeed_InverterTempIdx_DataStore());
    }

    /* S-Function Block: <S139>/motohawk_interpolation_1d */
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

  /* End of Switch: '<S9>/Switch1' */

  /* Outputs for Atomic SubSystem: '<S7>/Analog Out' */

  /* If: '<S44>/If' incorporates:
   *  Constant: '<S38>/Constant1'
   *  Inport: '<S45>/In1'
   *  Inport: '<S46>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S44>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S44>/override_enable'
   */
  if ((Flash_Reverse_Lights_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S44>/NewValue' incorporates:
     *  ActionPort: '<S45>/Action Port'
     */
    BuckyWagon_01_B.s44_Merge = (Flash_Reverse_Lights_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S45>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(8);
    }

    /* End of Outputs for SubSystem: '<S44>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S44>/OldValue' incorporates:
     *  ActionPort: '<S46>/Action Port'
     */
    BuckyWagon_01_B.s44_Merge = 0.0;

    /* S-Function (motohawk_sfun_code_cover): '<S46>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(9);
    }

    /* End of Outputs for SubSystem: '<S44>/OldValue' */
  }

  /* End of If: '<S44>/If' */

  /* Stateflow: '<S38>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S38>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S38>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S38>/motohawk_calibration3'
   */

  /* Gateway: Foreground/Actuators/Analog Out/Cruise Control Indicator/Chart */
  /* During: Foreground/Actuators/Analog Out/Cruise Control Indicator/Chart */
  if (BuckyWagon_01_DWork.s43_is_active_c6_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Actuators/Analog Out/Cruise Control Indicator/Chart */
    BuckyWagon_01_DWork.s43_is_active_c6_BuckyWagon_01 = 1U;

    /* Transition: '<S43>:6' */
    BuckyWagon_01_DWork.s43_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_Off_l;

    /* Entry 'Off': '<S43>:1' */
    BuckyWagon_01_B.s43_light = FALSE;
  } else {
    switch (BuckyWagon_01_DWork.s43_is_c6_BuckyWagon_01) {
     case BuckyWagon_01_IN_FlashOne:
      /* During 'FlashOne': '<S43>:2' */
      if (BuckyWagon_01_DWork.s43_timer >= ((uint16_T)(cCInd_OnTime_DataStore())))
      {
        /* Transition: '<S43>:8' */
        BuckyWagon_01_DWork.s43_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_OffOne;

        /* Entry 'OffOne': '<S43>:4' */
        BuckyWagon_01_B.s43_light = FALSE;
        BuckyWagon_01_DWork.s43_timer = 0U;
      } else {
        BuckyWagon_01_DWork.s43_timer = (uint16_T)(BuckyWagon_01_DWork.s43_timer
          + 1);
      }
      break;

     case BuckyWagon_01_IN_FlashTwo:
      /* During 'FlashTwo': '<S43>:3' */
      if (BuckyWagon_01_DWork.s43_timer >= ((uint16_T)(cCInd_OnTime_DataStore())))
      {
        /* Transition: '<S43>:10' */
        BuckyWagon_01_DWork.s43_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_OffTwo;

        /* Entry 'OffTwo': '<S43>:5' */
        BuckyWagon_01_B.s43_light = FALSE;
        BuckyWagon_01_DWork.s43_timer = 0U;
      } else {
        BuckyWagon_01_DWork.s43_timer = (uint16_T)(BuckyWagon_01_DWork.s43_timer
          + 1);
      }
      break;

     case BuckyWagon_01_IN_Off_l:
      /* During 'Off': '<S43>:1' */
      if (BuckyWagon_01_B.s44_Merge != 0.0) {
        /* Transition: '<S43>:7' */
        BuckyWagon_01_DWork.s43_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_FlashOne;

        /* Entry 'FlashOne': '<S43>:2' */
        BuckyWagon_01_B.s43_light = TRUE;
        BuckyWagon_01_DWork.s43_timer = 0U;
      }
      break;

     case BuckyWagon_01_IN_OffOne:
      /* During 'OffOne': '<S43>:4' */
      if (BuckyWagon_01_DWork.s43_timer >= ((uint16_T)(cCInd_ShortTime_DataStore
            ()))) {
        /* Transition: '<S43>:9' */
        BuckyWagon_01_DWork.s43_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_FlashTwo;

        /* Entry 'FlashTwo': '<S43>:3' */
        BuckyWagon_01_B.s43_light = TRUE;
        BuckyWagon_01_DWork.s43_timer = 0U;
      } else if (!(BuckyWagon_01_B.s44_Merge != 0.0)) {
        /* Transition: '<S43>:11' */
        /* Transition: '<S43>:14' */
        /* Transition: '<S43>:15' */
        BuckyWagon_01_DWork.s43_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_Off_l;

        /* Entry 'Off': '<S43>:1' */
        BuckyWagon_01_B.s43_light = FALSE;
      } else {
        BuckyWagon_01_DWork.s43_timer = (uint16_T)(BuckyWagon_01_DWork.s43_timer
          + 1);
      }
      break;

     case BuckyWagon_01_IN_OffTwo:
      /* During 'OffTwo': '<S43>:5' */
      if (BuckyWagon_01_DWork.s43_timer >= ((uint16_T)(cCInd_LongOff_DataStore())))
      {
        /* Transition: '<S43>:17' */
        /* Transition: '<S43>:18' */
        /* Transition: '<S43>:16' */
        BuckyWagon_01_DWork.s43_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_FlashOne;

        /* Entry 'FlashOne': '<S43>:2' */
        BuckyWagon_01_B.s43_light = TRUE;
        BuckyWagon_01_DWork.s43_timer = 0U;
      } else if (!(BuckyWagon_01_B.s44_Merge != 0.0)) {
        /* Transition: '<S43>:12' */
        /* Transition: '<S43>:13' */
        /* Transition: '<S43>:14' */
        /* Transition: '<S43>:15' */
        BuckyWagon_01_DWork.s43_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_Off_l;

        /* Entry 'Off': '<S43>:1' */
        BuckyWagon_01_B.s43_light = FALSE;
      } else {
        BuckyWagon_01_DWork.s43_timer = (uint16_T)(BuckyWagon_01_DWork.s43_timer
          + 1);
      }
      break;

     default:
      /* Transition: '<S43>:6' */
      BuckyWagon_01_DWork.s43_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_Off_l;

      /* Entry 'Off': '<S43>:1' */
      BuckyWagon_01_B.s43_light = FALSE;
      break;
    }
  }

  /* End of Stateflow: '<S38>/Chart' */
  /* Logic: '<S42>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S42>/motohawk_calibration1'
   */
  rtb_LogicalOperator1_l = ((((uint8_T)(RevIndType_DataStore())) != 0) &&
    (BuckyWagon_01_B.s9_InReverse != 0.0));

  /* Logic: '<S42>/Logical Operator3' incorporates:
   *  Logic: '<S42>/Logical Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S42>/motohawk_calibration1'
   */
  rtb_LogicalOperator_bd = ((BuckyWagon_01_B.s9_InReverse != 0.0) &&
    (!(((uint8_T)(RevIndType_DataStore())) != 0)));

  /* Outputs for Enabled SubSystem: '<S42>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S57>/Enable'
   */
  if (rtb_LogicalOperator_bd) {
    if (!BuckyWagon_01_DWork.s42_EnabledSubsystem_MODE) {
      /* InitializeConditions for UnitDelay: '<S57>/Unit Delay' */
      BuckyWagon_01_DWork.s57_UnitDelay_DSTATE = 0;
      BuckyWagon_01_DWork.s42_EnabledSubsystem_MODE = TRUE;
    }

    /* Switch: '<S57>/Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S42>/motohawk_calibration2'
     *  UnitDelay: '<S57>/Unit Delay'
     */
    if (BuckyWagon_01_DWork.s57_UnitDelay_DSTATE > 0) {
      rtb_Switch_d = BuckyWagon_01_DWork.s57_UnitDelay_DSTATE;
    } else {
      rtb_Switch_d = ((int16_T)(ReverseIndFlash_Period_DataStore()));
    }

    /* End of Switch: '<S57>/Switch' */

    /* Sum: '<S57>/Sum' incorporates:
     *  Constant: '<S57>/Constant'
     */
    rtb_Switch_d--;

    /* RelationalOperator: '<S57>/Relational Operator' incorporates:
     *  Gain: '<S57>/Gain'
     *  S-Function (motohawk_sfun_calibration): '<S42>/motohawk_calibration2'
     */
    BuckyWagon_01_B.s57_RelationalOperator = (((((int16_T)
      (ReverseIndFlash_Period_DataStore())) >> 1) <= rtb_Switch_d));

    /* Update for UnitDelay: '<S57>/Unit Delay' */
    BuckyWagon_01_DWork.s57_UnitDelay_DSTATE = rtb_Switch_d;
  } else {
    if (BuckyWagon_01_DWork.s42_EnabledSubsystem_MODE) {
      BuckyWagon_01_DWork.s42_EnabledSubsystem_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S42>/Enabled Subsystem' */

  /* Logic: '<S14>/Logical Operator3' incorporates:
   *  Logic: '<S42>/Logical Operator1'
   *  Logic: '<S42>/Logical Operator2'
   */
  rtb_LogicalOperator1_l = (BuckyWagon_01_B.s43_light || (rtb_LogicalOperator1_l
    || (rtb_LogicalOperator_bd && BuckyWagon_01_B.s57_RelationalOperator)));

  /* If: '<S47>/If' incorporates:
   *  Inport: '<S48>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S47>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S47>/override_enable'
   */
  if ((RevOut__ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S47>/NewValue' incorporates:
     *  ActionPort: '<S48>/Action Port'
     */
    rtb_LogicalOperator1_l = (RevOut__new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S48>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1/Override in Engineering Units/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(10);
    }

    /* End of Outputs for SubSystem: '<S47>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S47>/OldValue' incorporates:
     *  ActionPort: '<S49>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S49>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1/Override in Engineering Units/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(11);
    }

    /* End of Outputs for SubSystem: '<S47>/OldValue' */
  }

  /* End of If: '<S47>/If' */

  /* Logic: '<S39>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S39>/0 = No Inversion 1 = Inversion'
   */
  BuckyWagon_01_B.s39_LogicalOperator = rtb_LogicalOperator1_l ^
    (RevOut__Polarity_DataStore());

  /* Saturate: '<S14>/Saturation' */
  rtb_Merge_k = BuckyWagon_01_B.s9_FanDutyCycle >= 100.0 ? 100.0 :
    BuckyWagon_01_B.s9_FanDutyCycle <= -100.0 ? -100.0 :
    BuckyWagon_01_B.s9_FanDutyCycle;

  /* If: '<S54>/If' incorporates:
   *  Inport: '<S55>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S54>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S54>/override_enable'
   */
  if ((FanOut_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S54>/NewValue' incorporates:
     *  ActionPort: '<S55>/Action Port'
     */
    rtb_Merge_k = (FanOut_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S55>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(14);
    }

    /* End of Outputs for SubSystem: '<S54>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S54>/OldValue' incorporates:
     *  ActionPort: '<S56>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S56>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(15);
    }

    /* End of Outputs for SubSystem: '<S54>/OldValue' */
  }

  /* End of If: '<S54>/If' */

  /* Product: '<S41>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S41>/motohawk_calibration'
   */
  rtb_Merge_k *= (FanOut_Gain_DataStore());

  /* Sum: '<S41>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S41>/motohawk_calibration1'
   */
  rtb_Merge_k += (FanOut_Offset_DataStore());

  /* MinMax: '<S53>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S41>/motohawk_calibration2'
   */
  rtb_Merge_k = (rtb_Merge_k >= (FanOut_MinLimit_DataStore())) || rtIsNaN
    ((FanOut_MinLimit_DataStore())) ? rtb_Merge_k : (FanOut_MinLimit_DataStore());

  /* MinMax: '<S53>/MinMax1' incorporates:
   *  MinMax: '<S53>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S41>/motohawk_calibration3'
   */
  BuckyWagon_01_B.s53_MinMax1 = (rtb_Merge_k <= (FanOut_MaxLimit_DataStore())) ||
    rtIsNaN((FanOut_MaxLimit_DataStore())) ? rtb_Merge_k :
    (FanOut_MaxLimit_DataStore());

  /* DataTypeConversion: '<S41>/Data Type Conversion3' incorporates:
   *  Gain: '<S41>/Convert to integer 14-bit PWM resolution'
   */
  rtb_Merge_k = 40.95 * BuckyWagon_01_B.s53_MinMax1;
  if (rtb_Merge_k < 32768.0) {
    if (rtb_Merge_k >= -32768.0) {
      rtb_DataTypeConversion3 = (int16_T)rtb_Merge_k;
    } else {
      rtb_DataTypeConversion3 = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3 = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S41>/Data Type Conversion3' */
  /* DataTypeConversion: '<S41>/Data Type Conversion2' incorporates:
   *  Gain: '<S41>/Convert to integer 0.01Hz resolution'
   *  S-Function (motohawk_sfun_calibration): '<S41>/motohawk_calibration4'
   */
  rtb_Merge_k = 100.0 * (FanOut_Frequency_DataStore());
  if (rtb_Merge_k < 4.294967296E+9) {
    if (rtb_Merge_k >= 0.0) {
      rtb_DataTypeConversion2_h = (uint32_T)rtb_Merge_k;
    } else {
      rtb_DataTypeConversion2_h = 0U;
    }
  } else {
    rtb_DataTypeConversion2_h = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S41>/Data Type Conversion2' */

  /* If: '<S50>/If' incorporates:
   *  Inport: '<S51>/In1'
   *  Inport: '<S52>/In1'
   *  Logic: '<S14>/Logical Operator'
   *  S-Function (motohawk_sfun_calibration): '<S50>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S50>/override_enable'
   */
  if ((InhibitDCDC_Out__ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S50>/NewValue' incorporates:
     *  ActionPort: '<S51>/Action Port'
     */
    rtb_LogicalOperator1_l = (InhibitDCDC_Out__new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S51>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2/Override in Engineering Units/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(12);
    }

    /* End of Outputs for SubSystem: '<S50>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S50>/OldValue' incorporates:
     *  ActionPort: '<S52>/Action Port'
     */
    rtb_LogicalOperator1_l = !rtb_LogicalOperator5_k;

    /* S-Function (motohawk_sfun_code_cover): '<S52>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2/Override in Engineering Units/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(13);
    }

    /* End of Outputs for SubSystem: '<S50>/OldValue' */
  }

  /* End of If: '<S50>/If' */

  /* Logic: '<S40>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S40>/0 = No Inversion 1 = Inversion'
   */
  BuckyWagon_01_B.s40_LogicalOperator = rtb_LogicalOperator1_l ^
    (InhibitDCDC_Out__Polarity_DataStore());

  /* RelationalOperator: '<S14>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S14>/motohawk_calibration1'
   */
  rtb_LogicalOperator1_l = (BuckyWagon_01_B.s391_Merge >
    (Brake_light_On_Setpoint_DataStore()));

  /* Logic: '<S14>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S14>/motohawk_calibration2'
   */
  rtb_LogicalOperator1_p = ((rtb_LogicalOperator1_l &&
    (Enable_Brake_Light_Out_DataStore())));

  /* Update for S-Function (motohawk_sfun_dout): '<S14>/motohawk_dout1' */

  /* S-Function Block: DOut150p001 */
  {
    DOut150p001_DiscreteOutput_Set(BuckyWagon_01_B.s39_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S14>/motohawk_pwm2' */

  /* S-Function Block: Fan_Pin_PWMOutput */
  Fan_Pin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_h,
    rtb_DataTypeConversion3, 0, 1);

  /* Update for S-Function (motohawk_sfun_dout): '<S14>/motohawk_dout2' */

  /* S-Function Block: DOut151p001 */
  {
    DOut151p001_DiscreteOutput_Set(BuckyWagon_01_B.s40_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S14>/motohawk_dout3' */

  /* S-Function Block: DOut152p001 */
  {
    DOut152p001_DiscreteOutput_Set(rtb_LogicalOperator1_p);
  }

  /* End of Outputs for SubSystem: '<S7>/Analog Out' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S250>/Read CAN Message5' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3039p0004;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3039p0004,
      &messageObj);
    BuckyWagon_01_B.s250_DataAvailable = msg_valid;
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
      BuckyWagon_01_B.s250_NLG5PwrEn = (boolean_T) tmp0;
      BuckyWagon_01_B.s250_NLG5GenErrLtch = (boolean_T) tmp1;
      BuckyWagon_01_B.s250_NLG5GenLimWrng = (real_T) tmp2;
      BuckyWagon_01_B.s250_NLG5FanActv = (real_T) tmp3;
      BuckyWagon_01_B.s250_EuropeMains = (real_T) tmp4;
      BuckyWagon_01_B.s250_USAMainsL1 = (real_T) tmp5;
      BuckyWagon_01_B.s250_USAMainsL2 = (real_T) tmp6;
      BuckyWagon_01_B.s250_CntrlPltDet = (real_T) tmp7;
      BuckyWagon_01_B.s250_BypassDet = (real_T) tmp8;
      BuckyWagon_01_B.s250_LimByOutVlt = (real_T) tmp9;
      BuckyWagon_01_B.s250_LimByOutCrnt = (real_T) tmp10;
      BuckyWagon_01_B.s250_LimByMainCrnt = (real_T) tmp11;
      BuckyWagon_01_B.s250_LimByPwrInd = (real_T) tmp12;
      BuckyWagon_01_B.s250_LimByCntrlPlt = (real_T) tmp13;
      BuckyWagon_01_B.s250_LimByNLG5MaxPwr = (real_T) tmp14;
      BuckyWagon_01_B.s250_LimByNLG5MaxMainsCrnt = (real_T) tmp15;
      BuckyWagon_01_B.s250_LimByNLG5MaxOutCrnt = (real_T) tmp16;
      BuckyWagon_01_B.s250_LimByNLG5MaxOutVlt = (real_T) tmp17;
      BuckyWagon_01_B.s250_LimByTempCap = (real_T) tmp18;
      BuckyWagon_01_B.s250_LimByTempPwrStg = (real_T) tmp19;
      BuckyWagon_01_B.s250_LimByTempDiode = (real_T) tmp20;
      BuckyWagon_01_B.s250_LimByTempXfrmr = (real_T) tmp21;
      BuckyWagon_01_B.s250_LimByBattTemp = (real_T) tmp22;
      BuckyWagon_01_B.s250_AgeCount = 0;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S250>/Read CAN Message6' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3040p0004;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3040p0004,
      &messageObj);
    BuckyWagon_01_B.s250_DataAvailable_c = msg_valid;
    if ((BuckyWagon_01_B.s250_AgeCount_p + 1) > BuckyWagon_01_B.s250_AgeCount_p)
      BuckyWagon_01_B.s250_AgeCount_p++;
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
      BuckyWagon_01_B.s250_MainsActCrnt = ((real_T) tmp0) / ((real_T) 100);
      BuckyWagon_01_B.s250_MainsActVlt = ((real_T) tmp1) / ((real_T) 10);
      BuckyWagon_01_B.s250_OutptActVlt = ((real_T) tmp2) / ((real_T) 10);
      BuckyWagon_01_B.s250_OutptActCrnt = ((real_T) tmp3) / ((real_T) 100);
      BuckyWagon_01_B.s250_AgeCount_p = 0;
    }
  }

  /* RelationalOperator: '<S288>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S250>/motohawk_calibration'
   */
  rtb_RelationalOperator_m = (BuckyWagon_01_B.s250_MainsActVlt >
    (PluggedInMainsThes_DataStore()));

  /* Stateflow: '<S288>/Chart' */
  BuckyWagon_01_Chart((PluggedInHistTime_DataStore()), rtb_RelationalOperator_m,
                      &BuckyWagon_01_B.s288_sf_Chart,
                      &BuckyWagon_01_DWork.s288_sf_Chart);

  /* If: '<S289>/If' incorporates:
   *  Inport: '<S291>/In1'
   *  Inport: '<S292>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S289>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S289>/override_enable'
   */
  if ((pluggedIn_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S289>/NewValue' incorporates:
     *  ActionPort: '<S291>/Action Port'
     */
    BuckyWagon_01_B.s289_Merge = (pluggedIn_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S291>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Brusa Charger/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(83);
    }

    /* End of Outputs for SubSystem: '<S289>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S289>/OldValue' incorporates:
     *  ActionPort: '<S292>/Action Port'
     */
    BuckyWagon_01_B.s289_Merge = BuckyWagon_01_B.s288_sf_Chart.s290_pluggedIn;

    /* S-Function (motohawk_sfun_code_cover): '<S292>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Brusa Charger/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(84);
    }

    /* End of Outputs for SubSystem: '<S289>/OldValue' */
  }

  /* End of If: '<S289>/If' */

  /* Outputs for Atomic SubSystem: '<S9>/Brusa Charger (No Longer Used)' */

  /* Logic: '<S131>/Logical Operator1' incorporates:
   *  Logic: '<S131>/Logical Operator2'
   *  Logic: '<S131>/Logical Operator3'
   *  Logic: '<S131>/Logical Operator4'
   *  S-Function (motohawk_sfun_fault_action): '<S131>/motohawk_fault_action'
   */
  rtb_LogicalOperator1_l = ((!GetFaultActionStatus(3)) &&
    BuckyWagon_01_B.s289_Merge && (!BuckyWagon_01_B.s261_Merge) &&
    BuckyWagon_01_B.s250_NLG5PwrEn && (!BuckyWagon_01_B.s250_NLG5GenErrLtch));

  /* If: '<S143>/If' incorporates:
   *  Inport: '<S144>/In1'
   *  Inport: '<S145>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S143>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S143>/override_enable'
   */
  if ((startCharge_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S143>/NewValue' incorporates:
     *  ActionPort: '<S144>/Action Port'
     */
    BuckyWagon_01_B.s143_Merge = (startCharge_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S144>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Brusa Charger (No Longer Used)/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(56);
    }

    /* End of Outputs for SubSystem: '<S143>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S143>/OldValue' incorporates:
     *  ActionPort: '<S145>/Action Port'
     */
    BuckyWagon_01_B.s143_Merge = rtb_LogicalOperator1_l;

    /* S-Function (motohawk_sfun_code_cover): '<S145>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Brusa Charger (No Longer Used)/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(57);
    }

    /* End of Outputs for SubSystem: '<S143>/OldValue' */
  }

  /* End of If: '<S143>/If' */

  /* Sum: '<S142>/Sum1' incorporates:
   *  Constant: '<S142>/Constant'
   *  Product: '<S142>/Product'
   *  Product: '<S142>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration'
   *  Sum: '<S142>/Sum'
   *  UnitDelay: '<S142>/Unit Delay'
   */
  BuckyWagon_01_B.s142_Sum1 = (1.0 - (IFilterAlpha_DataStore())) *
    BuckyWagon_01_DWork.s142_UnitDelay_DSTATE +
    BuckyWagon_01_B.s250_OutptActCrnt * (IFilterAlpha_DataStore());

  /* Stateflow: '<S131>/Charging State Machine' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration7'
   */

  /* Gateway: Foreground/Control Strategy/Brusa Charger (No Longer Used)/Charging State Machine */
  /* During: Foreground/Control Strategy/Brusa Charger (No Longer Used)/Charging State Machine */
  if (BuckyWagon_01_DWork.s141_is_active_c8_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Control Strategy/Brusa Charger (No Longer Used)/Charging State Machine */
    BuckyWagon_01_DWork.s141_is_active_c8_BuckyWagon_01 = 1U;

    /* Transition: '<S141>:6' */
    BuckyWagon_01_DWork.s141_is_c8_BuckyWagon_01 = BuckyWagon_01_IN_Wait;

    /* Entry 'Wait': '<S141>:1' */
    BuckyWagon_01_B.s141_currOut = 0.0;
    BuckyWagon_01_B.s141_voltOut = 0.0;
    BuckyWagon_01_B.s141_state = 0U;
  } else {
    switch (BuckyWagon_01_DWork.s141_is_c8_BuckyWagon_01) {
     case BuckyWagon_01_IN_Complete:
      /* During 'Complete': '<S141>:2' */
      if (BuckyWagon_01_B.s250_OutptActVlt < (restartChargeVolt_DataStore())) {
        /* Transition: '<S141>:17' */
        /* Transition: '<S141>:15' */
        /* Transition: '<S141>:16' */
        BuckyWagon_01_DWork.s141_is_c8_BuckyWagon_01 = BuckyWagon_01_IN_Wait;

        /* Entry 'Wait': '<S141>:1' */
        BuckyWagon_01_B.s141_currOut = 0.0;
        BuckyWagon_01_B.s141_voltOut = 0.0;
        BuckyWagon_01_B.s141_state = 0U;
      }
      break;

     case BuckyWagon_01_IN_ConstantVoltageCharge:
      /* During 'ConstantVoltageCharge': '<S141>:3' */
      if (!BuckyWagon_01_B.s143_Merge) {
        /* Transition: '<S141>:13' */
        /* Transition: '<S141>:16' */
        BuckyWagon_01_DWork.s141_is_c8_BuckyWagon_01 = BuckyWagon_01_IN_Wait;

        /* Entry 'Wait': '<S141>:1' */
        BuckyWagon_01_B.s141_currOut = 0.0;
        BuckyWagon_01_B.s141_voltOut = 0.0;
        BuckyWagon_01_B.s141_state = 0U;
      } else {
        if (BuckyWagon_01_B.s142_Sum1 < (CV_EndCurrent_DataStore())) {
          /* Transition: '<S141>:9' */
          BuckyWagon_01_DWork.s141_is_c8_BuckyWagon_01 =
            BuckyWagon_01_IN_waitEnd;

          /* Entry 'waitEnd': '<S141>:4' */
          BuckyWagon_01_B.s141_timer = 0U;
          BuckyWagon_01_B.s141_state = 2U;
        }
      }
      break;

     case BuckyWagon_01_IN_StartupDelay:
      /* During 'StartupDelay': '<S141>:5' */
      if (!BuckyWagon_01_B.s143_Merge) {
        /* Transition: '<S141>:12' */
        BuckyWagon_01_DWork.s141_is_c8_BuckyWagon_01 = BuckyWagon_01_IN_Wait;

        /* Entry 'Wait': '<S141>:1' */
        BuckyWagon_01_B.s141_currOut = 0.0;
        BuckyWagon_01_B.s141_voltOut = 0.0;
        BuckyWagon_01_B.s141_state = 0U;
      } else if (BuckyWagon_01_B.s141_timer > ((uint16_T)
                  (ChargeStartupDelay_DataStore()))) {
        /* Transition: '<S141>:7' */
        BuckyWagon_01_DWork.s141_is_c8_BuckyWagon_01 =
          BuckyWagon_01_IN_ConstantVoltageCharge;

        /* Entry 'ConstantVoltageCharge': '<S141>:3' */
        BuckyWagon_01_B.s141_currOut = (CV_CurrentLimit_DataStore());
        BuckyWagon_01_B.s141_voltOut = (CV_Voltage_DataStore());
        BuckyWagon_01_B.s141_state = 1U;
      } else {
        BuckyWagon_01_B.s141_timer = (uint16_T)(BuckyWagon_01_B.s141_timer + 1);
      }
      break;

     case BuckyWagon_01_IN_Wait:
      /* During 'Wait': '<S141>:1' */
      if (BuckyWagon_01_B.s143_Merge) {
        /* Transition: '<S141>:11' */
        BuckyWagon_01_DWork.s141_is_c8_BuckyWagon_01 =
          BuckyWagon_01_IN_StartupDelay;

        /* Entry 'StartupDelay': '<S141>:5' */
        BuckyWagon_01_B.s141_state = 4U;
        BuckyWagon_01_B.s141_timer = 0U;
      }
      break;

     case BuckyWagon_01_IN_waitEnd:
      /* During 'waitEnd': '<S141>:4' */
      if (BuckyWagon_01_B.s142_Sum1 > (CV_EndCurrent_DataStore())) {
        /* Transition: '<S141>:8' */
        BuckyWagon_01_DWork.s141_is_c8_BuckyWagon_01 =
          BuckyWagon_01_IN_ConstantVoltageCharge;

        /* Entry 'ConstantVoltageCharge': '<S141>:3' */
        BuckyWagon_01_B.s141_currOut = (CV_CurrentLimit_DataStore());
        BuckyWagon_01_B.s141_voltOut = (CV_Voltage_DataStore());
        BuckyWagon_01_B.s141_state = 1U;
      } else if (!BuckyWagon_01_B.s143_Merge) {
        /* Transition: '<S141>:14' */
        /* Transition: '<S141>:15' */
        /* Transition: '<S141>:16' */
        BuckyWagon_01_DWork.s141_is_c8_BuckyWagon_01 = BuckyWagon_01_IN_Wait;

        /* Entry 'Wait': '<S141>:1' */
        BuckyWagon_01_B.s141_currOut = 0.0;
        BuckyWagon_01_B.s141_voltOut = 0.0;
        BuckyWagon_01_B.s141_state = 0U;
      } else if (BuckyWagon_01_B.s141_timer >= ((uint16_T)
                  (CV_EndCurrentTime_DataStore()))) {
        /* Transition: '<S141>:10' */
        BuckyWagon_01_DWork.s141_is_c8_BuckyWagon_01 = BuckyWagon_01_IN_Complete;

        /* Entry 'Complete': '<S141>:2' */
        BuckyWagon_01_B.s141_state = 3U;
        BuckyWagon_01_B.s141_currOut = 0.0;
        BuckyWagon_01_B.s141_voltOut = 0.0;
      } else {
        BuckyWagon_01_B.s141_timer = (uint16_T)(BuckyWagon_01_B.s141_timer + 1);
      }
      break;

     default:
      /* Transition: '<S141>:6' */
      BuckyWagon_01_DWork.s141_is_c8_BuckyWagon_01 = BuckyWagon_01_IN_Wait;

      /* Entry 'Wait': '<S141>:1' */
      BuckyWagon_01_B.s141_currOut = 0.0;
      BuckyWagon_01_B.s141_voltOut = 0.0;
      BuckyWagon_01_B.s141_state = 0U;
      break;
    }
  }

  /* End of Stateflow: '<S131>/Charging State Machine' */

  /* Update for UnitDelay: '<S142>/Unit Delay' */
  BuckyWagon_01_DWork.s142_UnitDelay_DSTATE = BuckyWagon_01_B.s142_Sum1;

  /* End of Outputs for SubSystem: '<S9>/Brusa Charger (No Longer Used)' */

  /* Outputs for Enabled SubSystem: '<S7>/Brusa Charger' incorporates:
   *  EnablePort: '<S15>/Enable'
   */
  if (BuckyWagon_01_B.s289_Merge) {
    /* If: '<S58>/If' incorporates:
     *  Inport: '<S64>/In1'
     *  Inport: '<S65>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S58>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S58>/override_enable'
     */
    if ((OutCrntCmd_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S58>/NewValue' incorporates:
       *  ActionPort: '<S64>/Action Port'
       */
      BuckyWagon_01_B.s58_Merge = (OutCrntCmd_new_DataStore());

      /* S-Function (motohawk_sfun_code_cover): '<S64>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(16);
      }

      /* End of Outputs for SubSystem: '<S58>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S58>/OldValue' incorporates:
       *  ActionPort: '<S65>/Action Port'
       */
      BuckyWagon_01_B.s58_Merge = BuckyWagon_01_B.s141_currOut;

      /* S-Function (motohawk_sfun_code_cover): '<S65>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(17);
      }

      /* End of Outputs for SubSystem: '<S58>/OldValue' */
    }

    /* End of If: '<S58>/If' */

    /* If: '<S59>/If' incorporates:
     *  Inport: '<S66>/In1'
     *  Inport: '<S67>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S59>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S59>/override_enable'
     */
    if ((OutVoltCmd_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S59>/NewValue' incorporates:
       *  ActionPort: '<S66>/Action Port'
       */
      BuckyWagon_01_B.s59_Merge = (OutVoltCmd_new_DataStore());

      /* S-Function (motohawk_sfun_code_cover): '<S66>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs1/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(18);
      }

      /* End of Outputs for SubSystem: '<S59>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S59>/OldValue' incorporates:
       *  ActionPort: '<S67>/Action Port'
       */
      BuckyWagon_01_B.s59_Merge = BuckyWagon_01_B.s141_voltOut;

      /* S-Function (motohawk_sfun_code_cover): '<S67>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs1/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(19);
      }

      /* End of Outputs for SubSystem: '<S59>/OldValue' */
    }

    /* End of If: '<S59>/If' */

    /* If: '<S60>/If' incorporates:
     *  Inport: '<S68>/In1'
     *  Inport: '<S69>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S60>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S60>/override_enable'
     */
    if ((MaxMainsCrnt_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S60>/NewValue' incorporates:
       *  ActionPort: '<S68>/Action Port'
       */
      BuckyWagon_01_B.s60_Merge = (MaxMainsCrnt_new_DataStore());

      /* S-Function (motohawk_sfun_code_cover): '<S68>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs2/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(20);
      }

      /* End of Outputs for SubSystem: '<S60>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S60>/OldValue' incorporates:
       *  ActionPort: '<S69>/Action Port'
       */
      BuckyWagon_01_B.s60_Merge = (MaxMainsCurrent_DataStore());

      /* S-Function (motohawk_sfun_code_cover): '<S69>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs2/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(21);
      }

      /* End of Outputs for SubSystem: '<S60>/OldValue' */
    }

    /* End of If: '<S60>/If' */

    /* If: '<S61>/If' incorporates:
     *  Constant: '<S131>/Constant2'
     *  Inport: '<S70>/In1'
     *  Inport: '<S71>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S61>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S61>/override_enable'
     */
    if ((CntrlPltVentReq_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S61>/NewValue' incorporates:
       *  ActionPort: '<S70>/Action Port'
       */
      BuckyWagon_01_B.s61_Merge = ((uint8_T)(CntrlPltVentReq_new_DataStore()));

      /* S-Function (motohawk_sfun_code_cover): '<S70>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs3/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(22);
      }

      /* End of Outputs for SubSystem: '<S61>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S61>/OldValue' incorporates:
       *  ActionPort: '<S71>/Action Port'
       */
      BuckyWagon_01_B.s61_Merge = 0U;

      /* S-Function (motohawk_sfun_code_cover): '<S71>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs3/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(23);
      }

      /* End of Outputs for SubSystem: '<S61>/OldValue' */
    }

    /* End of If: '<S61>/If' */

    /* If: '<S62>/If' incorporates:
     *  Constant: '<S131>/Constant1'
     *  Inport: '<S72>/In1'
     *  Inport: '<S73>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S62>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S62>/override_enable'
     */
    if ((ClearErrorLtch_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S62>/NewValue' incorporates:
       *  ActionPort: '<S72>/Action Port'
       */
      BuckyWagon_01_B.s62_Merge = ((uint8_T)(ClearErrorLtch_new_DataStore()));

      /* S-Function (motohawk_sfun_code_cover): '<S72>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs4/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(24);
      }

      /* End of Outputs for SubSystem: '<S62>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S62>/OldValue' incorporates:
       *  ActionPort: '<S73>/Action Port'
       */
      BuckyWagon_01_B.s62_Merge = 0U;

      /* S-Function (motohawk_sfun_code_cover): '<S73>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs4/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(25);
      }

      /* End of Outputs for SubSystem: '<S62>/OldValue' */
    }

    /* End of If: '<S62>/If' */

    /* If: '<S63>/If' incorporates:
     *  Inport: '<S74>/In1'
     *  Inport: '<S75>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S63>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S63>/override_enable'
     */
    if ((CAN_Enable_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S63>/NewValue' incorporates:
       *  ActionPort: '<S74>/Action Port'
       */
      BuckyWagon_01_B.s63_Merge = (CAN_Enable_new_DataStore());

      /* S-Function (motohawk_sfun_code_cover): '<S74>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs5/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(26);
      }

      /* End of Outputs for SubSystem: '<S63>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S63>/OldValue' incorporates:
       *  ActionPort: '<S75>/Action Port'
       */
      BuckyWagon_01_B.s63_Merge = BuckyWagon_01_B.s143_Merge;

      /* S-Function (motohawk_sfun_code_cover): '<S75>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Brusa Charger/motohawk_override_abs5/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(27);
      }

      /* End of Outputs for SubSystem: '<S63>/OldValue' */
    }

    /* End of If: '<S63>/If' */
  }

  /* End of Outputs for SubSystem: '<S7>/Brusa Charger' */
  /* RelationalOperator: '<S134>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration'
   */
  rtb_LogicalOperator1_l = (BuckyWagon_01_B.s391_Merge >
    (Brake_Active_Threshold_DataStore()));

  /* Abs: '<S134>/Abs' */
  rtb_Merge_k = fabs(BuckyWagon_01_B.s396_Merge);

  /* RelationalOperator: '<S134>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration15'
   */
  rtb_LogicalOperator_bd = (BuckyWagon_01_B.s391_Merge > (hardBrakeLev_DataStore
                             ()));

  /* Stateflow: '<S134>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration16'
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration17'
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration18'
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration19'
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration3'
   */

  /* Gateway: Foreground/Control Strategy/EHPAS_PercentControl/Chart */
  /* During: Foreground/Control Strategy/EHPAS_PercentControl/Chart */
  if (BuckyWagon_01_DWork.s174_is_active_c9_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Control Strategy/EHPAS_PercentControl/Chart */
    BuckyWagon_01_DWork.s174_is_active_c9_BuckyWagon_01 = 1U;

    /* Transition: '<S174>:25' */
    BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_KeyUp;

    /* Entry 'KeyUp': '<S174>:23' */
    BuckyWagon_01_DWork.s174_counts = 0U;
  } else {
    switch (BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01) {
     case BuckyWagon_01_IN_Braking_g:
      /* During 'Braking': '<S174>:76' */
      if ((!rtb_LogicalOperator1_l) && (rtb_Merge_k < (creepSpeed_DataStore())))
      {
        /* Transition: '<S174>:79' */
        BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S174>:18' */
        /* Transition: '<S174>:34' */
        BuckyWagon_01_DWork.s174_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S174>:31' */
        BuckyWagon_01_DWork.s174_counts = 0U;
      } else if (rtb_LogicalOperator1_l && (rtb_Merge_k < (creepSpeed_DataStore())))
      {
        /* Transition: '<S174>:46' */
        BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_SlowingDown;
      } else if ((!rtb_LogicalOperator1_l) && ((real_T)
                  BuckyWagon_01_DWork.s174_counts > (minPumpRunTime_DataStore())
                  * 200.0)) {
        /* Transition: '<S174>:92' */
        BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S174>:33' */
        BuckyWagon_01_DWork.s174_is_NormalDriving = BuckyWagon_01_IN_Driving_g;
      } else {
        BuckyWagon_01_DWork.s174_counts = BuckyWagon_01_DWork.s174_counts + 1U;
        BuckyWagon_01_B.s174_PumpState = 3U;
      }
      break;

     case BuckyWagon_01_IN_Idle:
      /* During 'Idle': '<S174>:39' */
      if (rtb_Merge_k > (stopSpeed_DataStore())) {
        /* Transition: '<S174>:48' */
        BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S174>:18' */
        /* Transition: '<S174>:34' */
        BuckyWagon_01_DWork.s174_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S174>:31' */
        BuckyWagon_01_DWork.s174_counts = 0U;
      } else if (rtb_LogicalOperator12) {
        /* Transition: '<S174>:112' */
        BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S174>:18' */
        /* Transition: '<S174>:34' */
        BuckyWagon_01_DWork.s174_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S174>:31' */
        BuckyWagon_01_DWork.s174_counts = 0U;
      } else if (rtb_Merge_k > (creepSpeed_DataStore())) {
        /* Transition: '<S174>:113' */
        BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S174>:33' */
        BuckyWagon_01_DWork.s174_is_NormalDriving = BuckyWagon_01_IN_Driving_g;
      } else {
        BuckyWagon_01_B.s174_PumpState = 0U;
      }
      break;

     case BuckyWagon_01_IN_KeyUp:
      /* During 'KeyUp': '<S174>:23' */
      if ((rtb_Merge_k > (creepSpeed_DataStore())) &&
          (BuckyWagon_01_DWork.s174_counts > (uint32_T)(((uint16_T)
             (KeyOnRuntime_Sec_DataStore())) * 200))) {
        /* Transition: '<S174>:37' */
        BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S174>:33' */
        BuckyWagon_01_DWork.s174_is_NormalDriving = BuckyWagon_01_IN_Driving_g;
      } else if ((rtb_Merge_k > (stopSpeed_DataStore())) && (rtb_Merge_k <
                  (creepSpeed_DataStore()))) {
        /* Transition: '<S174>:109' */
        BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S174>:18' */
        /* Transition: '<S174>:34' */
        BuckyWagon_01_DWork.s174_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S174>:31' */
        BuckyWagon_01_DWork.s174_counts = 0U;
      } else if (rtb_LogicalOperator12) {
        /* Transition: '<S174>:43' */
        BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S174>:18' */
        /* Transition: '<S174>:34' */
        BuckyWagon_01_DWork.s174_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S174>:31' */
        BuckyWagon_01_DWork.s174_counts = 0U;
      } else if ((rtb_Merge_k < (stopSpeed_DataStore())) &&
                 (BuckyWagon_01_DWork.s174_counts > (uint32_T)(((uint16_T)
                    (KeyOnRuntime_Sec_DataStore())) * 200))) {
        /* Transition: '<S174>:44' */
        BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Idle;
      } else {
        BuckyWagon_01_DWork.s174_counts = BuckyWagon_01_DWork.s174_counts + 1U;
        BuckyWagon_01_B.s174_PumpState = 4U;
      }
      break;

     case BuckyWagon_01_IN_LowSpeedManeuvering:
      /* During 'LowSpeedManeuvering': '<S174>:18' */
      if ((rtb_Merge_k > (creepSpeed_DataStore())) && ((real_T)
           BuckyWagon_01_DWork.s174_counts > (minPumpRunTime_DataStore()) *
           200.0)) {
        /* Transition: '<S174>:57' */
        BuckyWagon_01_DWork.s174_is_LowSpeedManeuvering = (uint8_T)0U;
        BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S174>:33' */
        BuckyWagon_01_DWork.s174_is_NormalDriving = BuckyWagon_01_IN_Driving_g;
      } else if (BuckyWagon_01_DWork.s174_counts > (uint32_T)(((uint16_T)
                   (LowSpeedManeuverRuntime_DataStore())) * 200)) {
        /* Transition: '<S174>:47' */
        BuckyWagon_01_DWork.s174_is_LowSpeedManeuvering = (uint8_T)0U;
        BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Idle;
      } else {
        BuckyWagon_01_B.s174_PumpState = 1U;
        switch (BuckyWagon_01_DWork.s174_is_LowSpeedManeuvering) {
         case BuckyWagon_01_IN_Creeping:
          /* During 'Creeping': '<S174>:31' */
          if (rtb_LogicalOperator12) {
            /* Transition: '<S174>:53' */
            BuckyWagon_01_DWork.s174_is_LowSpeedManeuvering =
              BuckyWagon_01_IN_Reversing;

            /* Entry 'Reversing': '<S174>:32' */
            BuckyWagon_01_DWork.s174_counts = 0U;
          } else {
            BuckyWagon_01_DWork.s174_counts = BuckyWagon_01_DWork.s174_counts +
              1U;
          }
          break;

         case BuckyWagon_01_IN_Reversing:
          /* During 'Reversing': '<S174>:32' */
          if (!rtb_LogicalOperator12) {
            /* Transition: '<S174>:54' */
            BuckyWagon_01_DWork.s174_is_LowSpeedManeuvering =
              BuckyWagon_01_IN_Creeping;

            /* Entry 'Creeping': '<S174>:31' */
            BuckyWagon_01_DWork.s174_counts = 0U;
          }
          break;

         default:
          /* Transition: '<S174>:34' */
          BuckyWagon_01_DWork.s174_is_LowSpeedManeuvering =
            BuckyWagon_01_IN_Creeping;

          /* Entry 'Creeping': '<S174>:31' */
          BuckyWagon_01_DWork.s174_counts = 0U;
          break;
        }
      }
      break;

     case BuckyWagon_01_IN_NormalDriving:
      /* During 'NormalDriving': '<S174>:20' */
      if ((BuckyWagon_01_DWork.s174_brakeCounts > (brakeTime_sec_DataStore())) ||
          rtb_LogicalOperator_bd) {
        /* Transition: '<S174>:88' */
        BuckyWagon_01_DWork.s174_is_NormalDriving = (uint8_T)0U;
        BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_Braking_g;

        /* Entry 'Braking': '<S174>:76' */
        BuckyWagon_01_DWork.s174_counts = 0U;
      } else {
        switch (BuckyWagon_01_DWork.s174_is_NormalDriving) {
         case BuckyWagon_01_IN_Driving_g:
          /* During 'Driving': '<S174>:21' */
          if (rtb_LogicalOperator1_l) {
            /* Transition: '<S174>:81' */
            BuckyWagon_01_DWork.s174_is_NormalDriving =
              BuckyWagon_01_IN_DrivingAndBrake;

            /* Entry 'DrivingAndBrake': '<S174>:74' */
            BuckyWagon_01_DWork.s174_brakeCounts = 0.0;
          } else {
            BuckyWagon_01_B.s174_PumpState = 2U;
          }
          break;

         case BuckyWagon_01_IN_DrivingAndBrake:
          /* During 'DrivingAndBrake': '<S174>:74' */
          if (!rtb_LogicalOperator1_l) {
            /* Transition: '<S174>:82' */
            BuckyWagon_01_DWork.s174_is_NormalDriving =
              BuckyWagon_01_IN_Driving_g;
          } else {
            BuckyWagon_01_DWork.s174_brakeCounts =
              BuckyWagon_01_DWork.s174_brakeCounts + 1.0;
            BuckyWagon_01_B.s174_PumpState = 5U;
          }
          break;

         default:
          /* Transition: '<S174>:33' */
          BuckyWagon_01_DWork.s174_is_NormalDriving = BuckyWagon_01_IN_Driving_g;
          break;
        }
      }
      break;

     case BuckyWagon_01_IN_SlowingDown:
      /* During 'SlowingDown': '<S174>:96' */
      if (rtb_Merge_k < (stopSpeed_DataStore())) {
        /* Transition: '<S174>:97' */
        BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Stopping;
      } else if ((!rtb_LogicalOperator1_l) || ((real_T)
                  BuckyWagon_01_DWork.s174_counts < (minPumpRunTime_DataStore())
                  * 200.0)) {
        /* Transition: '<S174>:100' */
        BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S174>:18' */
        /* Transition: '<S174>:34' */
        BuckyWagon_01_DWork.s174_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S174>:31' */
        BuckyWagon_01_DWork.s174_counts = 0U;
      } else if ((rtb_Merge_k > (creepSpeed_DataStore())) && ((real_T)
                  BuckyWagon_01_DWork.s174_counts > (minPumpRunTime_DataStore())
                  * 200.0)) {
        /* Transition: '<S174>:101' */
        BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S174>:33' */
        BuckyWagon_01_DWork.s174_is_NormalDriving = BuckyWagon_01_IN_Driving_g;
      } else if ((real_T)BuckyWagon_01_DWork.s174_counts >
                 (minPumpRunTime_DataStore()) * 200.0) {
        /* Transition: '<S174>:104' */
        BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S174>:18' */
        /* Transition: '<S174>:34' */
        BuckyWagon_01_DWork.s174_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S174>:31' */
        BuckyWagon_01_DWork.s174_counts = 0U;
      } else {
        BuckyWagon_01_DWork.s174_counts = BuckyWagon_01_DWork.s174_counts + 1U;
        BuckyWagon_01_B.s174_PumpState = 6U;
      }
      break;

     case BuckyWagon_01_IN_Stopping:
      /* During 'Stopping': '<S174>:98' */
      if ((real_T)BuckyWagon_01_DWork.s174_counts > (minPumpRunTime_DataStore())
          * 200.0) {
        /* Transition: '<S174>:106' */
        BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Idle;
      } else if (rtb_Merge_k > (stopSpeed_DataStore())) {
        /* Transition: '<S174>:107' */
        BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_SlowingDown;
      } else {
        BuckyWagon_01_DWork.s174_counts = BuckyWagon_01_DWork.s174_counts + 1U;
        BuckyWagon_01_B.s174_PumpState = 7U;
      }
      break;

     default:
      /* Transition: '<S174>:25' */
      BuckyWagon_01_DWork.s174_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_KeyUp;

      /* Entry 'KeyUp': '<S174>:23' */
      BuckyWagon_01_DWork.s174_counts = 0U;
      break;
    }
  }

  /* End of Stateflow: '<S134>/Chart' */
  /* If: '<S176>/If' incorporates:
   *  Inport: '<S179>/In1'
   *  Inport: '<S180>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S176>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S176>/override_enable'
   */
  if ((EHPAS_PumpStateEnable_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S176>/NewValue' incorporates:
     *  ActionPort: '<S179>/Action Port'
     */
    rtb_Compare = ((uint8_T)(EHPAS_PumpStateEnable_ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S179>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(62);
    }

    /* End of Outputs for SubSystem: '<S176>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S176>/OldValue' incorporates:
     *  ActionPort: '<S180>/Action Port'
     */
    rtb_Compare = BuckyWagon_01_B.s174_PumpState;

    /* S-Function (motohawk_sfun_code_cover): '<S180>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(63);
    }

    /* End of Outputs for SubSystem: '<S176>/OldValue' */
  }

  /* End of If: '<S176>/If' */

  /* MultiPortSwitch: '<S134>/Multiport Switch1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration20'
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration21'
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration9'
   */
  switch (rtb_Compare) {
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

  /* End of MultiPortSwitch: '<S134>/Multiport Switch1' */

  /* Logic: '<S9>/Logical Operator2' */
  rtb_LogicalOperator1_l = (rtb_LogicalOperator2_e && (rtb_motohawk_calibration8
    != 0));

  /* Outputs for Enabled SubSystem: '<S7>/EHPAS Power Steering Pump Controller' incorporates:
   *  EnablePort: '<S16>/Enable1'
   */
  /* S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration2' */
  if ((Enable_PowerSteering_CAN_Msg_DataStore())) {
    /* Switch: '<S16>/Switch' incorporates:
     *  Constant: '<S16>/Operating Mode - Activate'
     *  Constant: '<S16>/Operating Mode - Disabled'
     */
    if (rtb_LogicalOperator1_l) {
      BuckyWagon_01_B.s16_OperatingMode_cmd = 1U;
    } else {
      BuckyWagon_01_B.s16_OperatingMode_cmd = 0U;
    }

    /* End of Switch: '<S16>/Switch' */
    /* If: '<S76>/If' incorporates:
     *  Inport: '<S77>/In1'
     *  Inport: '<S78>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S76>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S76>/override_enable'
     */
    if ((EHPAS_Operating_Mode_Cmd_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S76>/NewValue' incorporates:
       *  ActionPort: '<S77>/Action Port'
       */
      rtb_Merge_j0 = ((uint8_T)(EHPAS_Operating_Mode_Cmd_new_DataStore()));

      /* S-Function (motohawk_sfun_code_cover): '<S77>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller/motohawk_override_abs4/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(28);
      }

      /* End of Outputs for SubSystem: '<S76>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S76>/OldValue' incorporates:
       *  ActionPort: '<S78>/Action Port'
       */
      rtb_Merge_j0 = BuckyWagon_01_B.s16_OperatingMode_cmd;

      /* S-Function (motohawk_sfun_code_cover): '<S78>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller/motohawk_override_abs4/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(29);
      }

      /* End of Outputs for SubSystem: '<S76>/OldValue' */
    }

    /* End of If: '<S76>/If' */

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

  /* End of S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration2' */
  /* End of Outputs for SubSystem: '<S7>/EHPAS Power Steering Pump Controller' */

  /* Switch: '<S9>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S9>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S140>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S140>/motohawk_prelookup'
   */
  if (rtb_RelationalOperator_fj) {
    BuckyWagon_01_B.s9_CoolantPumpSpeed = (Charging_Cooling_Speed_DataStore());
  } else {
    /* S-Function Block: <S140>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CoolantPumpSpeedIn_DataStore()) =
        BuckyWagon_01_B.s254_Inverter_Temperature;
      (CoolantPumpSpeedIdx_DataStore()) = TablePrelookup_real_T
        (BuckyWagon_01_B.s254_Inverter_Temperature,
         (CoolantPumpSpeedIdxArr_DataStore()), 11,
         (CoolantPumpSpeedIdx_DataStore()));
      rtb_motohawk_prelookup_b = (CoolantPumpSpeedIdx_DataStore());
    }

    /* S-Function Block: <S140>/motohawk_interpolation_1d */
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

  /* End of Switch: '<S9>/Switch' */

  /* Outputs for Atomic SubSystem: '<S7>/EMP Coolant Pump' */

  /* Saturate: '<S17>/Saturation' */
  rtb_Merge_k = BuckyWagon_01_B.s9_CoolantPumpSpeed >= 100.0 ? 100.0 :
    BuckyWagon_01_B.s9_CoolantPumpSpeed <= 0.0 ? 0.0 :
    BuckyWagon_01_B.s9_CoolantPumpSpeed;

  /* If: '<S79>/If' incorporates:
   *  Inport: '<S81>/In1'
   *  Inport: '<S82>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S79>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S79>/override_enable'
   */
  if ((EMP_Speed_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S79>/NewValue' incorporates:
     *  ActionPort: '<S81>/Action Port'
     */
    BuckyWagon_01_B.s79_Merge = (EMP_Speed_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S81>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(30);
    }

    /* End of Outputs for SubSystem: '<S79>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S79>/OldValue' incorporates:
     *  ActionPort: '<S82>/Action Port'
     */
    BuckyWagon_01_B.s79_Merge = rtb_Merge_k;

    /* S-Function (motohawk_sfun_code_cover): '<S82>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(31);
    }

    /* End of Outputs for SubSystem: '<S79>/OldValue' */
  }

  /* End of If: '<S79>/If' */

  /* If: '<S80>/If' incorporates:
   *  Constant: '<S17>/Operating Mode: Normal'
   *  Inport: '<S83>/In1'
   *  Inport: '<S84>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S80>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S80>/override_enable'
   */
  if ((EMP_Mode_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S80>/NewValue' incorporates:
     *  ActionPort: '<S83>/Action Port'
     */
    rtb_Merge_ht = ((uint8_T)(EMP_Mode_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S83>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(32);
    }

    /* End of Outputs for SubSystem: '<S80>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S80>/OldValue' incorporates:
     *  ActionPort: '<S84>/Action Port'
     */
    rtb_Merge_ht = 1U;

    /* S-Function (motohawk_sfun_code_cover): '<S84>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(33);
    }

    /* End of Outputs for SubSystem: '<S80>/OldValue' */
  }

  /* End of If: '<S80>/If' */

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
        if (BuckyWagon_01_B.s79_Merge < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (BuckyWagon_01_B.s79_Merge > 127.5000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(BuckyWagon_01_B.s79_Merge * (2.0000000000F));
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

  /* End of Outputs for SubSystem: '<S7>/EMP Coolant Pump' */
  /* S-Function Block: <S395>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s395_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S395>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S395>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S395>/motohawk_delta_time'
   */
  BuckyWagon_01_B.s395_Sum = rtb_motohawk_delta_time +
    TimeSinceKeyOnTimer_DataStore();

  /* Abs: '<S18>/Abs' */
  rtb_Merge_k = fabs(BuckyWagon_01_B.s138_Merge);

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
  if (BuckyWagon_01_DWork.s85_is_active_c7_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Actuators/Eaton Controller/Chart */
    BuckyWagon_01_DWork.s85_is_active_c7_BuckyWagon_01 = 1U;

    /* Transition: '<S85>:2' */
    BuckyWagon_01_DWork.s85_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_Init;
  } else {
    switch (BuckyWagon_01_DWork.s85_is_c7_BuckyWagon_01) {
     case BuckyWagon_01_IN_Init:
      /* During 'Init': '<S85>:1' */
      if (BuckyWagon_01_B.s395_Sum >= (Motor_Start_Delay_DataStore())) {
        /* Transition: '<S85>:4' */
        BuckyWagon_01_DWork.s85_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_On_h;
      } else {
        BuckyWagon_01_B.s85_ctrlState = (initState_DataStore());
      }
      break;

     case BuckyWagon_01_IN_Off_h:
      /* During 'Off': '<S85>:5' */
      BuckyWagon_01_B.s85_ctrlState = (offState_DataStore());
      break;

     case BuckyWagon_01_IN_On_h:
      /* During 'On': '<S85>:3' */
      if (Shutdown_Req_DataStore()) {
        /* Transition: '<S85>:6' */
        BuckyWagon_01_DWork.s85_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_Off_h;
      } else if ((BuckyWagon_01_B.s395_Sum >= (Motor_Start_Off_Delay_DataStore()))
                 && (rtb_Merge_k < (Torqe_Threshold_DataStore()))) {
        /* Transition: '<S85>:20' */
        BuckyWagon_01_DWork.s85_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_Standby;
      } else {
        BuckyWagon_01_B.s85_ctrlState = (onState_DataStore());
      }
      break;

     case BuckyWagon_01_IN_Restart:
      /* During 'Restart': '<S85>:21' */
      if (BuckyWagon_01_B.s85_ctrlState == (initState_DataStore())) {
        /* Transition: '<S85>:23' */
        BuckyWagon_01_DWork.s85_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_On_h;
      } else if (Shutdown_Req_DataStore()) {
        /* Transition: '<S85>:26' */
        BuckyWagon_01_DWork.s85_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_Off_h;
      } else {
        BuckyWagon_01_B.s85_ctrlState = (initState_DataStore());
      }
      break;

     case BuckyWagon_01_IN_Standby:
      /* During 'Standby': '<S85>:19' */
      if (rtb_Merge_k >= (Torqe_Threshold_DataStore())) {
        /* Transition: '<S85>:22' */
        BuckyWagon_01_DWork.s85_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_Restart;
      } else if (Shutdown_Req_DataStore()) {
        /* Transition: '<S85>:25' */
        BuckyWagon_01_DWork.s85_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_Off_h;
      } else {
        BuckyWagon_01_B.s85_ctrlState = (offState_DataStore());
      }
      break;

     default:
      /* Transition: '<S85>:2' */
      BuckyWagon_01_DWork.s85_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_Init;
      break;
    }
  }

  /* End of Stateflow: '<S18>/Chart' */
  /* If: '<S86>/If' incorporates:
   *  Inport: '<S88>/In1'
   *  Inport: '<S89>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S86>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S86>/override_enable'
   */
  if ((Control_Mode_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S86>/NewValue' incorporates:
     *  ActionPort: '<S88>/Action Port'
     */
    rtb_Merge_f = (Control_Mode_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S88>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(34);
    }

    /* End of Outputs for SubSystem: '<S86>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S86>/OldValue' incorporates:
     *  ActionPort: '<S89>/Action Port'
     */
    rtb_Merge_f = BuckyWagon_01_B.s85_ctrlState;

    /* S-Function (motohawk_sfun_code_cover): '<S89>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(35);
    }

    /* End of Outputs for SubSystem: '<S86>/OldValue' */
  }

  /* End of If: '<S86>/If' */

  /* Product: '<S18>/Product' incorporates:
   *  Constant: '<S18>/Constant1'
   */
  BuckyWagon_01_B.s18_Product = -BuckyWagon_01_B.s138_Merge;

  /* If: '<S87>/If' incorporates:
   *  Inport: '<S90>/In1'
   *  Inport: '<S91>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S87>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S87>/override_enable'
   */
  if ((Torque_Command_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S87>/NewValue' incorporates:
     *  ActionPort: '<S90>/Action Port'
     */
    rtb_Merge_g = (Torque_Command_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S90>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(36);
    }

    /* End of Outputs for SubSystem: '<S87>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S87>/OldValue' incorporates:
     *  ActionPort: '<S91>/Action Port'
     */
    rtb_Merge_g = BuckyWagon_01_B.s18_Product;

    /* S-Function (motohawk_sfun_code_cover): '<S91>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(37);
    }

    /* End of Outputs for SubSystem: '<S87>/OldValue' */
  }

  /* End of If: '<S87>/If' */

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

  /* If: '<S92>/If' incorporates:
   *  Inport: '<S97>/In1'
   *  Inport: '<S98>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S19>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S92>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S92>/override_enable'
   */
  if ((Current_Limit_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S92>/NewValue' incorporates:
     *  ActionPort: '<S97>/Action Port'
     */
    BuckyWagon_01_B.s92_Merge = (Current_Limit_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S97>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(38);
    }

    /* End of Outputs for SubSystem: '<S92>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S92>/OldValue' incorporates:
     *  ActionPort: '<S98>/Action Port'
     */
    BuckyWagon_01_B.s92_Merge = (Current_Limit_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S98>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(39);
    }

    /* End of Outputs for SubSystem: '<S92>/OldValue' */
  }

  /* End of If: '<S92>/If' */

  /* If: '<S93>/If' incorporates:
   *  Inport: '<S100>/In1'
   *  Inport: '<S99>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S19>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S93>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S93>/override_enable'
   */
  if ((Voltage_Limit_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S93>/NewValue' incorporates:
     *  ActionPort: '<S99>/Action Port'
     */
    BuckyWagon_01_B.s93_Merge = (Voltage_Limit_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S99>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(40);
    }

    /* End of Outputs for SubSystem: '<S93>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S93>/OldValue' incorporates:
     *  ActionPort: '<S100>/Action Port'
     */
    BuckyWagon_01_B.s93_Merge = (Voltage_Limit_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S100>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(41);
    }

    /* End of Outputs for SubSystem: '<S93>/OldValue' */
  }

  /* End of If: '<S93>/If' */

  /* If: '<S94>/If' incorporates:
   *  Constant: '<S19>/Constant3'
   *  Inport: '<S101>/In1'
   *  Inport: '<S102>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S94>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S94>/override_enable'
   */
  if ((Charge_Falt_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S94>/NewValue' incorporates:
     *  ActionPort: '<S101>/Action Port'
     */
    BuckyWagon_01_B.s94_Merge = ((uint8_T)(Charge_Falt_Override_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S101>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(42);
    }

    /* End of Outputs for SubSystem: '<S94>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S94>/OldValue' incorporates:
     *  ActionPort: '<S102>/Action Port'
     */
    BuckyWagon_01_B.s94_Merge = 0U;

    /* S-Function (motohawk_sfun_code_cover): '<S102>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(43);
    }

    /* End of Outputs for SubSystem: '<S94>/OldValue' */
  }

  /* End of If: '<S94>/If' */

  /* If: '<S95>/If' incorporates:
   *  Constant: '<S19>/Constant'
   *  Inport: '<S103>/In1'
   *  Inport: '<S104>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S95>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S95>/override_enable'
   */
  if ((Charge_Complete_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S95>/NewValue' incorporates:
     *  ActionPort: '<S103>/Action Port'
     */
    BuckyWagon_01_B.s95_Merge = (Charge_Complete_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S103>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(44);
    }

    /* End of Outputs for SubSystem: '<S95>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S95>/OldValue' incorporates:
     *  ActionPort: '<S104>/Action Port'
     */
    BuckyWagon_01_B.s95_Merge = 0.0;

    /* S-Function (motohawk_sfun_code_cover): '<S104>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(45);
    }

    /* End of Outputs for SubSystem: '<S95>/OldValue' */
  }

  /* End of If: '<S95>/If' */

  /* If: '<S96>/If' incorporates:
   *  Inport: '<S105>/In1'
   *  Inport: '<S106>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S96>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S96>/override_enable'
   */
  if ((Charge_Enable_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S96>/NewValue' incorporates:
     *  ActionPort: '<S105>/Action Port'
     */
    BuckyWagon_01_B.s96_Merge = (Charge_Enable_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S105>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(46);
    }

    /* End of Outputs for SubSystem: '<S96>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S96>/OldValue' incorporates:
     *  ActionPort: '<S106>/Action Port'
     */
    BuckyWagon_01_B.s96_Merge = rtb_LogicalOperator5_k;

    /* S-Function (motohawk_sfun_code_cover): '<S106>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(47);
    }

    /* End of Outputs for SubSystem: '<S96>/OldValue' */
  }

  /* End of If: '<S96>/If' */

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
        tmp0 = (uint8_T)(BuckyWagon_01_B.s96_Merge);
        if (BuckyWagon_01_B.s95_Merge < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (BuckyWagon_01_B.s95_Merge > 3.0000000000F) {
          tmp1 = (uint8_T)(3U);
        } else {
          tmp1 = (uint8_T)(BuckyWagon_01_B.s95_Merge);
        }

        if (BuckyWagon_01_B.s94_Merge > 3U) {
          tmp2 = (uint8_T)(3U);
        } else {
          tmp2 = (uint8_T)(BuckyWagon_01_B.s94_Merge);
        }

        if (BuckyWagon_01_B.s93_Merge < 0.0000000000F) {
          tmp3 = (uint16_T)(0U);
        } else if (BuckyWagon_01_B.s93_Merge > 803.0000000000F) {
          tmp3 = (uint16_T)(4015U);
        } else {
          tmp3 = (uint16_T)(BuckyWagon_01_B.s93_Merge * (5.0000000000F));
        }

        if (BuckyWagon_01_B.s92_Merge < 0.0000000000F) {
          tmp4 = (uint16_T)(0U);
        } else if (BuckyWagon_01_B.s92_Merge > 200.7500000000F) {
          tmp4 = (uint16_T)(4015U);
        } else {
          tmp4 = (uint16_T)(BuckyWagon_01_B.s92_Merge * (20.0000000000F));
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

  /* If: '<S107>/If' incorporates:
   *  Constant: '<S20>/Constant'
   *  Inport: '<S111>/In1'
   *  Inport: '<S112>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S107>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S107>/override_enable'
   */
  if ((SpeedSet_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S107>/NewValue' incorporates:
     *  ActionPort: '<S111>/Action Port'
     */
    rtb_Merge_d = (SpeedSet_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S111>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(48);
    }

    /* End of Outputs for SubSystem: '<S107>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S107>/OldValue' incorporates:
     *  ActionPort: '<S112>/Action Port'
     */
    rtb_Merge_d = 0.0;

    /* S-Function (motohawk_sfun_code_cover): '<S112>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(49);
    }

    /* End of Outputs for SubSystem: '<S107>/OldValue' */
  }

  /* End of If: '<S107>/If' */

  /* If: '<S110>/If' incorporates:
   *  Inport: '<S117>/In1'
   *  Inport: '<S118>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S110>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S110>/override_enable'
   */
  if ((TorqueControl_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S110>/NewValue' incorporates:
     *  ActionPort: '<S117>/Action Port'
     */
    BuckyWagon_01_B.s110_Merge = (TorqueControl_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S117>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(54);
    }

    /* End of Outputs for SubSystem: '<S110>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S110>/OldValue' incorporates:
     *  ActionPort: '<S118>/Action Port'
     */
    BuckyWagon_01_B.s110_Merge = BuckyWagon_01_B.s138_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S118>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(55);
    }

    /* End of Outputs for SubSystem: '<S110>/OldValue' */
  }

  /* End of If: '<S110>/If' */

  /* If: '<S108>/If' incorporates:
   *  Inport: '<S113>/In1'
   *  Inport: '<S114>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S108>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S108>/override_enable'
   */
  if ((LowerTorqueLimit_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S108>/NewValue' incorporates:
     *  ActionPort: '<S113>/Action Port'
     */
    rtb_Merge_b = (LowerTorqueLimit_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S113>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(50);
    }

    /* End of Outputs for SubSystem: '<S108>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S108>/OldValue' incorporates:
     *  ActionPort: '<S114>/Action Port'
     */
    rtb_Merge_b = BuckyWagon_01_B.s110_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S114>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(51);
    }

    /* End of Outputs for SubSystem: '<S108>/OldValue' */
  }

  /* End of If: '<S108>/If' */

  /* If: '<S109>/If' incorporates:
   *  Inport: '<S115>/In1'
   *  Inport: '<S116>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S109>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S109>/override_enable'
   */
  if ((UpperTorqueLimit_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S109>/NewValue' incorporates:
     *  ActionPort: '<S115>/Action Port'
     */
    rtb_Merge_o = (UpperTorqueLimit_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S115>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(52);
    }

    /* End of Outputs for SubSystem: '<S109>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S109>/OldValue' incorporates:
     *  ActionPort: '<S116>/Action Port'
     */
    rtb_Merge_o = BuckyWagon_01_B.s110_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S116>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(53);
    }

    /* End of Outputs for SubSystem: '<S109>/OldValue' */
  }

  /* End of If: '<S109>/If' */

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

  /* RelationalOperator: '<S125>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S125>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_c = ((BuckyWagon_01_B.s268_Merge <=
    (Under_SOC_Shutdown_Thresh_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S122>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Low_SOC_Shutdown */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(23, rtb_RelationalOperator1_c);
    UpdateFault(23);
  }

  /* RelationalOperator: '<S125>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S125>/motohawk_calibration2'
   */
  rtb_RelationalOperator_a = (((Over_SOC_Shutdown_Thresh_DataStore()) <=
    BuckyWagon_01_B.s268_Merge));

  /* S-Function (motohawk_sfun_fault_def): '<S122>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: High_SOC_Shutdown */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(15, rtb_RelationalOperator_a);
    UpdateFault(15);
  }

  /* RelationalOperator: '<S124>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_cw = ((BuckyWagon_01_B.s268_Merge <=
    (Under_SOCAlertThresh_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S122>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Low_SOC_Alert */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(22, rtb_RelationalOperator1_cw);
    UpdateFault(22);
  }

  /* RelationalOperator: '<S124>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration2'
   */
  rtb_RelationalOperator_ac = (((Over_SOCAlertThresh_DataStore()) <=
    BuckyWagon_01_B.s268_Merge));

  /* S-Function (motohawk_sfun_fault_def): '<S122>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: High_SOC_Alert */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(14, rtb_RelationalOperator_ac);
    UpdateFault(14);
  }

  /* Sum: '<S119>/Subtract' */
  rtb_Gain7 = BuckyWagon_01_B.s248_bcm_vbat -
    BuckyWagon_01_B.s254_DC_Bus_Voltage;

  /* Abs: '<S119>/Abs' */
  rtb_Gain7 = fabs(rtb_Gain7);

  /* RelationalOperator: '<S119>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration2'
   */
  rtb_LogicalOperator1_l = (rtb_Gain7 >= (HV_Bus_allowed_mismatch_DataStore()));

  /* Outputs for Enabled SubSystem: '<S119>/Time Since Enabled (With Input)1' incorporates:
   *  EnablePort: '<S123>/Enable'
   */
  /* S-Function (motohawk_sfun_data_read): '<S119>/motohawk_data_read' */
  if (Batt_Load_Enable_DataStore()) {
    if (!BuckyWagon_01_DWork.s119_TimeSinceEnabledWithInput1_MODE) {
      /* S-Function Block: <S123>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BuckyWagon_01_DWork.s123_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S123>/Unit Delay' */
      BuckyWagon_01_DWork.s123_UnitDelay_DSTATE = 0.0;
      BuckyWagon_01_DWork.s119_TimeSinceEnabledWithInput1_MODE = TRUE;
    }

    /* S-Function Block: <S123>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BuckyWagon_01_DWork.s123_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_a = ((real_T) delta) * 0.000001;
    }

    /* UnitDelay: '<S123>/Unit Delay' */
    BuckyWagon_01_B.s123_UnitDelay = BuckyWagon_01_DWork.s123_UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S123>/Unit Delay' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S123>/motohawk_delta_time'
     *  Sum: '<S123>/Sum'
     */
    BuckyWagon_01_DWork.s123_UnitDelay_DSTATE = rtb_motohawk_delta_time_a +
      BuckyWagon_01_B.s123_UnitDelay;
  } else {
    if (BuckyWagon_01_DWork.s119_TimeSinceEnabledWithInput1_MODE) {
      /* Disable for Outport: '<S123>/Time Since Enabled [sec]' */
      BuckyWagon_01_B.s123_UnitDelay = 0.0;
      BuckyWagon_01_DWork.s119_TimeSinceEnabledWithInput1_MODE = FALSE;
    }
  }

  /* End of S-Function (motohawk_sfun_data_read): '<S119>/motohawk_data_read' */
  /* End of Outputs for SubSystem: '<S119>/Time Since Enabled (With Input)1' */
  /* Logic: '<S119>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S119>/Relational Operator8'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration8'
   */
  rtb_LogicalOperator1_f = ((rtb_LogicalOperator1_l &&
    BuckyWagon_01_B.s265_Merge && (BuckyWagon_01_B.s123_UnitDelay >=
    (HV_Bus_offline_delay_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S119>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: HV_BUS_OFFLINE_check_fuse */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(12, rtb_LogicalOperator1_f);
    UpdateFault(12);
  }

  /* S-Function Block: <S379>/motohawk_delta_time */
  rtb_Gain7 = 0.005;

  /* Product: '<S379>/Product' incorporates:
   *  MinMax: '<S379>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S379>/motohawk_calibration'
   */
  rtb_Gain7 /= (rtb_Gain7 >= (LVVolt_FilterConst_DataStore())) || rtIsNaN
    ((LVVolt_FilterConst_DataStore())) ? rtb_Gain7 :
    (LVVolt_FilterConst_DataStore());

  /* Logic: '<S256>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S256>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S256>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_fj = (IsFaultActive(19) || IsFaultActive(20));

  /* Logic: '<S256>/Logical Operator6' */
  rtb_LogicalOperator1_l = !rtb_RelationalOperator_fj;

  /* Logic: '<S256>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S256>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S256>/motohawk_fault_status3'
   */
  rtb_LogicalOperator_bd = (IsFaultSuspected(19) || IsFaultSuspected(20));

  /* S-Function Block: <S12>/motohawk_ain5 Resource: LV_Voltage_Pin */
  {
    extern NativeError_S LV_Voltage_Pin_AnalogInput_Get(uint16_T *adc, uint16_T *
      status);
    LV_Voltage_Pin_AnalogInput_Get(&BuckyWagon_01_B.s12_motohawk_ain5, NULL);
  }

  /* DataTypeConversion: '<S256>/Data Type Conversion' */
  rtb_DataTypeConversion_d = (real_T)BuckyWagon_01_B.s12_motohawk_ain5;

  /* Product: '<S256>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S256>/motohawk_calibration4'
   */
  rtb_Merge_k = rtb_DataTypeConversion_d * (LVVolt_Gain_DataStore());

  /* Sum: '<S256>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S256>/motohawk_calibration5'
   */
  BuckyWagon_01_B.s256_Sum1 = rtb_Merge_k + (LVVolt_Ofst_DataStore());

  /* UnitDelay: '<S256>/Unit Delay1' */
  rtb_UnitDelay1_f = BuckyWagon_01_DWork.s256_UnitDelay1_DSTATE;

  /* If: '<S256>/If' incorporates:
   *  Logic: '<S256>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_l && rtb_LogicalOperator_bd) {
    /* Outputs for IfAction SubSystem: '<S256>/If Action Subsystem' incorporates:
     *  ActionPort: '<S380>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(rtb_UnitDelay1_f, &rtb_Merge_ep);

    /* End of Outputs for SubSystem: '<S256>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_fj) {
    /* Outputs for IfAction SubSystem: '<S256>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S381>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem((LVVolt_DfltValue_DataStore()),
      &rtb_Merge_ep);

    /* End of Outputs for SubSystem: '<S256>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S256>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S382>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(BuckyWagon_01_B.s256_Sum1, &rtb_Merge_ep);

    /* End of Outputs for SubSystem: '<S256>/If Action Subsystem2' */
  }

  /* End of If: '<S256>/If' */

  /* Sum: '<S384>/Sum1' incorporates:
   *  Constant: '<S384>/Constant'
   *  Product: '<S384>/Product'
   *  Product: '<S384>/Product1'
   *  Sum: '<S384>/Sum'
   *  UnitDelay: '<S384>/Unit Delay'
   */
  rtb_to65535_b = (1.0 - rtb_Gain7) * BuckyWagon_01_DWork.s384_UnitDelay_DSTATE
    + rtb_Merge_ep * rtb_Gain7;

  /* If: '<S383>/If' incorporates:
   *  Inport: '<S385>/In1'
   *  Inport: '<S386>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S383>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S383>/override_enable'
   */
  if ((LVVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S383>/NewValue' incorporates:
     *  ActionPort: '<S385>/Action Port'
     */
    BuckyWagon_01_B.s383_Merge = (LVVolt_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S385>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(135);
    }

    /* End of Outputs for SubSystem: '<S383>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S383>/OldValue' incorporates:
     *  ActionPort: '<S386>/Action Port'
     */
    BuckyWagon_01_B.s383_Merge = rtb_to65535_b;

    /* S-Function (motohawk_sfun_code_cover): '<S386>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(136);
    }

    /* End of Outputs for SubSystem: '<S383>/OldValue' */
  }

  /* End of If: '<S383>/If' */

  /* RelationalOperator: '<S120>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration3'
   */
  rtb_RelationalOperator3 = ((BuckyWagon_01_B.s383_Merge <
    (Low12VThres_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S120>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: LVVoltLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    boolean_T update;
    if (BuckyWagon_01_DWork.s120_motohawk_fault_def5_DWORK1 >= 3) {
      update = 1;
      BuckyWagon_01_DWork.s120_motohawk_fault_def5_DWORK1 = 0;
    } else {
      update = 0;
      BuckyWagon_01_DWork.s120_motohawk_fault_def5_DWORK1++;
    }

    SetFaultSuspected(18, rtb_RelationalOperator3);
    if (update)
      UpdateFault(18);
  }

  /* RelationalOperator: '<S120>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration4'
   */
  rtb_RelationalOperator4_d = ((BuckyWagon_01_B.s383_Merge >
    (High12VThres_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S120>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: LVVoltHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(17, rtb_RelationalOperator4_d);
    UpdateFault(17);
  }

  /* Switch: '<S128>/Switch1' incorporates:
   *  Constant: '<S121>/Constant3'
   *  UnitDelay: '<S128>/Unit Delay'
   */
  if (BuckyWagon_01_ConstB.s128_DataTypeConversion) {
    BuckyWagon_01_B.s128_Switch1 = 0.0;
  } else {
    BuckyWagon_01_B.s128_Switch1 = BuckyWagon_01_DWork.s128_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S128>/Switch1' */
  /* RelationalOperator: '<S127>/LT' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration2'
   */
  rtb_RelationalOperator_fj = (BuckyWagon_01_B.s128_Switch1 >=
    (StallTrqThres_DataStore()));

  /* RelationalOperator: '<S127>/LT1' incorporates:
   *  Constant: '<S121>/Constant4'
   */
  rtb_BelowLoTarget = (BuckyWagon_01_B.s128_Switch1 <= 0.0);

  /* CombinatorialLogic: '<S129>/Combinatorial  Logic' */
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

  /* Switch: '<S129>/Switch1' incorporates:
   *  UnitDelay: '<S129>/Unit Delay'
   */
  if (rtb_CombinatorialLogic[1]) {
    rtb_Switch1_m = rtb_CombinatorialLogic[0];
  } else {
    rtb_Switch1_m = BuckyWagon_01_DWork.s129_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S129>/Switch1' */

  /* S-Function (motohawk_sfun_fault_def): '<S121>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: LockedRotor */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(21, rtb_Switch1_m);
    UpdateFault(21);
  }

  /* Abs: '<S121>/Abs' */
  rtb_Gain7 = fabs(BuckyWagon_01_B.s396_Merge);

  /* Switch: '<S121>/Switch1' incorporates:
   *  Constant: '<S121>/Constant2'
   *  RelationalOperator: '<S121>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration4'
   */
  if ((AccelRstThres_DataStore()) > BuckyWagon_01_B.s383_Merge) {
    rtb_to65535_c = (AccelRstSpd_DataStore());
  } else {
    rtb_to65535_c = 0.0;
  }

  /* End of Switch: '<S121>/Switch1' */
  /* Switch: '<S121>/Switch' incorporates:
   *  Constant: '<S121>/Constant'
   *  Constant: '<S121>/Constant1'
   *  RelationalOperator: '<S121>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration1'
   */
  if (rtb_Gain7 <= (StallSpd_DataStore())) {
    rtb_Gain7 = 1.0;
  } else {
    rtb_Gain7 = -1.0;
  }

  /* End of Switch: '<S121>/Switch' */

  /* Sum: '<S121>/Sum' incorporates:
   *  Product: '<S121>/Product'
   */
  rtb_Merge_k = rtb_Gain7 * BuckyWagon_01_B.s366_Merge - rtb_to65535_c;

  /* S-Function Block: <S128>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s128_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_p = ((real_T) delta) * 0.000001;
  }

  /* MinMax: '<S130>/MinMax' incorporates:
   *  Constant: '<S121>/Constant3'
   *  Product: '<S128>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S128>/motohawk_delta_time'
   *  Sum: '<S128>/Sum'
   */
  rtb_Merge_k = rtb_Merge_k * rtb_motohawk_delta_time_p +
    BuckyWagon_01_B.s128_Switch1;

  /* MinMax: '<S130>/MinMax1' incorporates:
   *  Constant: '<S121>/Constant3'
   *  MinMax: '<S130>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration2'
   */
  rtb_Merge_k = rtb_Merge_k >= 0.0 ? rtb_Merge_k : 0.0;
  rtb_to65535_dx = (rtb_Merge_k <= (StallTrqThres_DataStore())) || rtIsNaN
    ((StallTrqThres_DataStore())) ? rtb_Merge_k : (StallTrqThres_DataStore());

  /* Logic: '<S121>/Logical Operator' incorporates:
   *  Constant: '<S126>/Constant'
   *  RelationalOperator: '<S126>/Compare'
   *  UnitDelay: '<S121>/Unit Delay'
   */
  BuckyWagon_01_B.s121_LogicalOperator = (((BuckyWagon_01_B.s375_Merge <= 0.01) ||
    BuckyWagon_01_DWork.s121_UnitDelay_DSTATE));

  /* Logic: '<S121>/Logical Operator1' */
  rtb_LogicalOperator1_fv = !BuckyWagon_01_B.s121_LogicalOperator;

  /* S-Function (motohawk_sfun_fault_def): '<S121>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Accel_NeverZeroed */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(0, rtb_LogicalOperator1_fv);
    UpdateFault(0);
  }

  /* Outputs for Atomic SubSystem: '<S12>/EMP Coolant Pump Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S252>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3446p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3446p0001,
      &messageObj);
    if ((BuckyWagon_01_B.s252_AgeCount + 1) > BuckyWagon_01_B.s252_AgeCount)
      BuckyWagon_01_B.s252_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint16_T tmp3 = 0;
      uint16_T tmp4 = 0;
      uint8_T tmp5 = 0;
      BuckyWagon_01_B.s252_ReadCANMessage_o2 = ((messageObj.u4MessageID &
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
      BuckyWagon_01_B.s252_EMP_Pump_Status = (real_T) tmp0;
      BuckyWagon_01_B.s252_EMP_Pump_Mode = (real_T) tmp1;
      BuckyWagon_01_B.s252_EMP_Pump_Speed = ((real_T) tmp2) / ((real_T) 2);
      BuckyWagon_01_B.s252_EMP_Board_Temp = (((real_T) tmp3) / ((real_T) 32)) +
        ((real_T) -273);
      BuckyWagon_01_B.s252_EMP_Pump_Power = (real_T) tmp4;
      BuckyWagon_01_B.s252_EMP_Speed_Percent = ((real_T) tmp5) / ((real_T) 2);
      BuckyWagon_01_B.s252_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S252>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S252>/motohawk_calibration2'
   */
  rtb_AgeCount = ((real_T)BuckyWagon_01_B.s252_AgeCount >
                  (EMP_CAN_MaxAge_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S252>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: NoCAN_CoolantPump */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(27, rtb_AgeCount);
    UpdateFault(27);
  }

  /* If: '<S315>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S315>/override_enable'
   */
  if ((EMP_Pump_Speed_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S315>/NewValue' incorporates:
     *  ActionPort: '<S321>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S321>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(99);
    }

    /* End of Outputs for SubSystem: '<S315>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S315>/OldValue' incorporates:
     *  ActionPort: '<S322>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S322>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(100);
    }

    /* End of Outputs for SubSystem: '<S315>/OldValue' */
  }

  /* End of If: '<S315>/If' */

  /* If: '<S316>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S316>/override_enable'
   */
  if ((EMP_Speed_Percent_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S316>/NewValue' incorporates:
     *  ActionPort: '<S323>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S323>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(101);
    }

    /* End of Outputs for SubSystem: '<S316>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S316>/OldValue' incorporates:
     *  ActionPort: '<S324>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S324>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(102);
    }

    /* End of Outputs for SubSystem: '<S316>/OldValue' */
  }

  /* End of If: '<S316>/If' */

  /* If: '<S317>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S317>/override_enable'
   */
  if ((EMP_Pump_Mode_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S317>/NewValue' incorporates:
     *  ActionPort: '<S325>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S325>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(103);
    }

    /* End of Outputs for SubSystem: '<S317>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S317>/OldValue' incorporates:
     *  ActionPort: '<S326>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S326>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(104);
    }

    /* End of Outputs for SubSystem: '<S317>/OldValue' */
  }

  /* End of If: '<S317>/If' */

  /* If: '<S318>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S318>/override_enable'
   */
  if ((EMP_Pump_Status_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S318>/NewValue' incorporates:
     *  ActionPort: '<S327>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S327>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(105);
    }

    /* End of Outputs for SubSystem: '<S318>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S318>/OldValue' incorporates:
     *  ActionPort: '<S328>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S328>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(106);
    }

    /* End of Outputs for SubSystem: '<S318>/OldValue' */
  }

  /* End of If: '<S318>/If' */

  /* If: '<S319>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S319>/override_enable'
   */
  if ((EMP_Board_Temp_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S319>/NewValue' incorporates:
     *  ActionPort: '<S329>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S329>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(107);
    }

    /* End of Outputs for SubSystem: '<S319>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S319>/OldValue' incorporates:
     *  ActionPort: '<S330>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S330>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(108);
    }

    /* End of Outputs for SubSystem: '<S319>/OldValue' */
  }

  /* End of If: '<S319>/If' */

  /* If: '<S320>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S320>/override_enable'
   */
  if ((EMP_Pump_Power_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S320>/NewValue' incorporates:
     *  ActionPort: '<S331>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S331>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(109);
    }

    /* End of Outputs for SubSystem: '<S320>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S320>/OldValue' incorporates:
     *  ActionPort: '<S332>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S332>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(110);
    }

    /* End of Outputs for SubSystem: '<S320>/OldValue' */
  }

  /* End of If: '<S320>/If' */
  /* End of Outputs for SubSystem: '<S12>/EMP Coolant Pump Inputs' */

  /* Outputs for Atomic SubSystem: '<S12>/EHPAS Power Steering Pump Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S251>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3390p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3390p0001,
      &messageObj);
    if ((BuckyWagon_01_B.s251_AgeCount + 1) > BuckyWagon_01_B.s251_AgeCount)
      BuckyWagon_01_B.s251_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint8_T tmp4 = 0;
      uint8_T tmp5 = 0;
      uint8_T tmp6 = 0;
      BuckyWagon_01_B.s251_ReadCANMessage_o2 = ((messageObj.u4MessageID &
        (0x0000000F)) >> 0);
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp2))[1] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[6] & 0x0000000F)) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[6] & 0x00000070) >> 4) ;
      BuckyWagon_01_B.s251_EHPAS_Input_Voltage = ((real_T) tmp0) * ((real_T) 2);
      BuckyWagon_01_B.s251_EHPAS_Input_Current_NA = ((real_T) tmp1) / ((real_T)
        10);
      BuckyWagon_01_B.s251_EHPAS_Pump_Speed = ((real_T) tmp2) / ((real_T) 8);
      BuckyWagon_01_B.s251_EHPAS_TempMax = ((real_T) tmp3) + ((real_T) -40);
      BuckyWagon_01_B.s251_EHPAS_TempCur = ((real_T) tmp4) + ((real_T) -40);
      BuckyWagon_01_B.s251_EHPAS_Op_State = (real_T) tmp5;
      BuckyWagon_01_B.s251_EHPAS_Fault = (real_T) tmp6;
      BuckyWagon_01_B.s251_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S293>/Compare' incorporates:
   *  Constant: '<S293>/Constant'
   */
  rtb_Compare_f = ((BuckyWagon_01_B.s251_AgeCount > 20U));

  /* S-Function (motohawk_sfun_fault_def): '<S251>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: NoCAN_PowerSteering */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(30, rtb_Compare_f);
    UpdateFault(30);
  }

  /* If: '<S294>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S294>/override_enable'
   */
  if ((EHPAS_Pump_Speed_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S294>/NewValue' incorporates:
     *  ActionPort: '<S301>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S301>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(85);
    }

    /* End of Outputs for SubSystem: '<S294>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S294>/OldValue' incorporates:
     *  ActionPort: '<S302>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S302>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(86);
    }

    /* End of Outputs for SubSystem: '<S294>/OldValue' */
  }

  /* End of If: '<S294>/If' */

  /* If: '<S295>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S295>/override_enable'
   */
  if ((EHPAS_Op_State_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S295>/NewValue' incorporates:
     *  ActionPort: '<S303>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S303>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(87);
    }

    /* End of Outputs for SubSystem: '<S295>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S295>/OldValue' incorporates:
     *  ActionPort: '<S304>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S304>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(88);
    }

    /* End of Outputs for SubSystem: '<S295>/OldValue' */
  }

  /* End of If: '<S295>/If' */

  /* If: '<S296>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S296>/override_enable'
   */
  if ((EHPAS_Input_Current_NA_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S296>/NewValue' incorporates:
     *  ActionPort: '<S305>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S305>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(89);
    }

    /* End of Outputs for SubSystem: '<S296>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S296>/OldValue' incorporates:
     *  ActionPort: '<S306>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S306>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(90);
    }

    /* End of Outputs for SubSystem: '<S296>/OldValue' */
  }

  /* End of If: '<S296>/If' */

  /* If: '<S297>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S297>/override_enable'
   */
  if ((EHPAS_Input_Voltage_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S297>/NewValue' incorporates:
     *  ActionPort: '<S307>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S307>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(91);
    }

    /* End of Outputs for SubSystem: '<S297>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S297>/OldValue' incorporates:
     *  ActionPort: '<S308>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S308>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(92);
    }

    /* End of Outputs for SubSystem: '<S297>/OldValue' */
  }

  /* End of If: '<S297>/If' */

  /* If: '<S298>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S298>/override_enable'
   */
  if ((EHPAS_Fault_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S298>/NewValue' incorporates:
     *  ActionPort: '<S309>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S309>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(93);
    }

    /* End of Outputs for SubSystem: '<S298>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S298>/OldValue' incorporates:
     *  ActionPort: '<S310>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S310>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(94);
    }

    /* End of Outputs for SubSystem: '<S298>/OldValue' */
  }

  /* End of If: '<S298>/If' */

  /* If: '<S299>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S299>/override_enable'
   */
  if ((EHPAS_TempMax_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S299>/NewValue' incorporates:
     *  ActionPort: '<S311>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S311>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(95);
    }

    /* End of Outputs for SubSystem: '<S299>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S299>/OldValue' incorporates:
     *  ActionPort: '<S312>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S312>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(96);
    }

    /* End of Outputs for SubSystem: '<S299>/OldValue' */
  }

  /* End of If: '<S299>/If' */

  /* If: '<S300>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S300>/override_enable'
   */
  if ((EHPAS_TempCur_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S300>/NewValue' incorporates:
     *  ActionPort: '<S313>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S313>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(97);
    }

    /* End of Outputs for SubSystem: '<S300>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S300>/OldValue' incorporates:
     *  ActionPort: '<S314>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S314>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(98);
    }

    /* End of Outputs for SubSystem: '<S300>/OldValue' */
  }

  /* End of If: '<S300>/If' */
  /* End of Outputs for SubSystem: '<S12>/EHPAS Power Steering Pump Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S250>/Read CAN Message4' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3038p0004;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3038p0004,
      &messageObj);
    if ((BuckyWagon_01_B.s250_AgeCount_m + 1) > BuckyWagon_01_B.s250_AgeCount_m)
      BuckyWagon_01_B.s250_AgeCount_m++;
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
      BuckyWagon_01_B.s250_OutptOvrVlt = (real_T) tmp0;
      BuckyWagon_01_B.s250_MainsOvrVlt2 = (real_T) tmp1;
      BuckyWagon_01_B.s250_MainsOvrVlt1 = (real_T) tmp2;
      BuckyWagon_01_B.s250_PwrStgShrtCkt = (real_T) tmp3;
      BuckyWagon_01_B.s250_PlsbltyOutptVltMeas = (real_T) tmp4;
      BuckyWagon_01_B.s250_PlsbltyMainsVltMeas = (real_T) tmp5;
      BuckyWagon_01_B.s250_OutptFuseDefect = (real_T) tmp6;
      BuckyWagon_01_B.s250_MainsFuseDefect = (real_T) tmp7;
      BuckyWagon_01_B.s250_BattPolarity = (real_T) tmp8;
      BuckyWagon_01_B.s250_TempSensCap = (real_T) tmp9;
      BuckyWagon_01_B.s250_TempSensPwrStg = (real_T) tmp10;
      BuckyWagon_01_B.s250_TempSensDiode = (real_T) tmp11;
      BuckyWagon_01_B.s250_TempSensXfrmr = (real_T) tmp12;
      BuckyWagon_01_B.s250_TempSensExt1 = (real_T) tmp13;
      BuckyWagon_01_B.s250_TempSensExt2 = (real_T) tmp14;
      BuckyWagon_01_B.s250_TempSensExt3 = (real_T) tmp15;
      BuckyWagon_01_B.s250_FlashChksmFail = (real_T) tmp16;
      BuckyWagon_01_B.s250_NVSRAMChksmFail = (real_T) tmp17;
      BuckyWagon_01_B.s250_EEPROMSysChksmFail = (real_T) tmp18;
      BuckyWagon_01_B.s250_EEPROMPOWChksmFail = (real_T) tmp19;
      BuckyWagon_01_B.s250_WatchdogInternal = (real_T) tmp20;
      BuckyWagon_01_B.s250_Initialization = (real_T) tmp21;
      BuckyWagon_01_B.s250_CANTimeout = (real_T) tmp22;
      BuckyWagon_01_B.s250_CANOff = (real_T) tmp23;
      BuckyWagon_01_B.s250_CAN_Xmit = (real_T) tmp24;
      BuckyWagon_01_B.s250_CAN_Rcv = (real_T) tmp25;
      BuckyWagon_01_B.s250_ShtdwnThrsBattTemp = (real_T) tmp26;
      BuckyWagon_01_B.s250_ShtdwnThresBattVlt = (real_T) tmp27;
      BuckyWagon_01_B.s250_ShtdwnThresBattAhrs = (real_T) tmp28;
      BuckyWagon_01_B.s250_ShtdwnThresChrgTime = (real_T) tmp29;
      BuckyWagon_01_B.s250_PwrLimByLowMainsVlt = (real_T) tmp30;
      BuckyWagon_01_B.s250_PwrLimByLowBattVlt = (real_T) tmp31;
      BuckyWagon_01_B.s250_PwrLimByIntOvrTemp = (real_T) tmp32;
      BuckyWagon_01_B.s250_CmdValOutRange = (real_T) tmp33;
      BuckyWagon_01_B.s250_AgeCount_m = 0;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S250>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3037p0004;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3037p0004,
      &messageObj);
    if ((BuckyWagon_01_B.s250_AgeCount_mf + 1) >
        BuckyWagon_01_B.s250_AgeCount_mf)
      BuckyWagon_01_B.s250_AgeCount_mf++;
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
      BuckyWagon_01_B.s250_PwrStgTemp = ((real_T) tmp0) / ((real_T) 10);
      BuckyWagon_01_B.s250_TempExtrn1 = ((real_T) tmp1) / ((real_T) 10);
      BuckyWagon_01_B.s250_TempExtrn2 = ((real_T) tmp2) / ((real_T) 10);
      BuckyWagon_01_B.s250_TempExtrn3 = ((real_T) tmp3) / ((real_T) 10);
      BuckyWagon_01_B.s250_AgeCount_mf = 0;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S250>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3036p0006;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3036p0006,
      &messageObj);
    BuckyWagon_01_B.s250_DataAvailable_i = msg_valid;
    if ((BuckyWagon_01_B.s250_AgeCount_a + 1) > BuckyWagon_01_B.s250_AgeCount_a)
      BuckyWagon_01_B.s250_AgeCount_a++;
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
      BuckyWagon_01_B.s250_MainsCrntByCntrlPlt = ((real_T) tmp0) / ((real_T) 10);
      BuckyWagon_01_B.s250_MainsCrntByPwrInd = ((real_T) tmp1) / ((real_T) 10);
      BuckyWagon_01_B.s250_AuxBattVlt = ((real_T) tmp2) / ((real_T) 10);
      BuckyWagon_01_B.s250_AhrsByExtShnt = ((real_T) tmp3) / ((real_T) 100);
      BuckyWagon_01_B.s250_OutptCrntByBstr = ((real_T) tmp4) / ((real_T) 100);
      BuckyWagon_01_B.s250_AgeCount_a = 0;
    }
  }

  /* If: '<S335>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S335>/override_enable'
   */
  if ((FaultSeverityIndicator_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S335>/NewValue' incorporates:
     *  ActionPort: '<S345>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S345>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(111);
    }

    /* End of Outputs for SubSystem: '<S335>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S335>/OldValue' incorporates:
     *  ActionPort: '<S346>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S346>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(112);
    }

    /* End of Outputs for SubSystem: '<S335>/OldValue' */
  }

  /* End of If: '<S335>/If' */

  /* If: '<S336>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S336>/override_enable'
   */
  if ((ChargerState_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S336>/NewValue' incorporates:
     *  ActionPort: '<S347>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S347>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(113);
    }

    /* End of Outputs for SubSystem: '<S336>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S336>/OldValue' incorporates:
     *  ActionPort: '<S348>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S348>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(114);
    }

    /* End of Outputs for SubSystem: '<S336>/OldValue' */
  }

  /* End of If: '<S336>/If' */

  /* If: '<S337>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S337>/override_enable'
   */
  if ((IgnitionStatus_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S337>/NewValue' incorporates:
     *  ActionPort: '<S349>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S349>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(115);
    }

    /* End of Outputs for SubSystem: '<S337>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S337>/OldValue' incorporates:
     *  ActionPort: '<S350>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S350>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(116);
    }

    /* End of Outputs for SubSystem: '<S337>/OldValue' */
  }

  /* End of If: '<S337>/If' */

  /* If: '<S338>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S338>/override_enable'
   */
  if ((Eaton_HV_Charger_Temperature_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S338>/NewValue' incorporates:
     *  ActionPort: '<S351>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S351>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(117);
    }

    /* End of Outputs for SubSystem: '<S338>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S338>/OldValue' incorporates:
     *  ActionPort: '<S352>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S352>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(118);
    }

    /* End of Outputs for SubSystem: '<S338>/OldValue' */
  }

  /* End of If: '<S338>/If' */

  /* If: '<S340>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S340>/override_enable'
   */
  if ((OutputVoltage_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S340>/NewValue' incorporates:
     *  ActionPort: '<S355>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S355>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(121);
    }

    /* End of Outputs for SubSystem: '<S340>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S340>/OldValue' incorporates:
     *  ActionPort: '<S356>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S356>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(122);
    }

    /* End of Outputs for SubSystem: '<S340>/OldValue' */
  }

  /* End of If: '<S340>/If' */

  /* If: '<S341>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S341>/override_enable'
   */
  if ((InputCurrentLimitMax_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S341>/NewValue' incorporates:
     *  ActionPort: '<S357>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S357>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(123);
    }

    /* End of Outputs for SubSystem: '<S341>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S341>/OldValue' incorporates:
     *  ActionPort: '<S358>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S358>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(124);
    }

    /* End of Outputs for SubSystem: '<S341>/OldValue' */
  }

  /* End of If: '<S341>/If' */

  /* If: '<S342>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S342>/override_enable'
   */
  if ((InputCurrent_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S342>/NewValue' incorporates:
     *  ActionPort: '<S359>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S359>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(125);
    }

    /* End of Outputs for SubSystem: '<S342>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S342>/OldValue' incorporates:
     *  ActionPort: '<S360>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S360>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(126);
    }

    /* End of Outputs for SubSystem: '<S342>/OldValue' */
  }

  /* End of If: '<S342>/If' */

  /* S-Function (motohawk_sfun_trigger): '<S2>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_4086p0002 */
  if (BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 == 0) {
    BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S2>/motohawk_trigger' */
  /* Enable for Trigger_FGND_RTI_PERIODIC_4085p0005 */
  if (BuckyWagon_01_DWork.s2_motohawk_trigger_DWORK1 == 0) {
    BuckyWagon_01_DWork.s2_motohawk_trigger_DWORK1 = 1;
  }

  /* Gain: '<S147>/Gain1' incorporates:
   *  Product: '<S147>/Product'
   */
  BuckyWagon_01_B.s147_Gain1 = BuckyWagon_01_B.s248_bcm_vbat *
    BuckyWagon_01_B.s248_bcm_ibat * 0.001;

  /* Gain: '<S147>/Gain4' incorporates:
   *  Sum: '<S147>/Add'
   */
  BuckyWagon_01_B.s147_Gain4 = (BuckyWagon_01_B.s248_bcm_ibat + 0.0) * -1.0;

  /* Gain: '<S147>/Gain5' incorporates:
   *  Product: '<S147>/Product3'
   */
  BuckyWagon_01_B.s147_Gain5 = BuckyWagon_01_B.s147_Gain4 *
    BuckyWagon_01_B.s248_bcm_vbat * 0.001;

  /* Gain: '<S147>/Gain6' incorporates:
   *  Product: '<S147>/Product6'
   */
  BuckyWagon_01_B.s147_Gain6 = 0.0 * BuckyWagon_01_B.s248_bcm_vbat * 0.001;

  /* RelationalOperator: '<S147>/Relational Operator' incorporates:
   *  Constant: '<S147>/Constant'
   */
  rtb_RelationalOperator_fj = (BuckyWagon_01_B.s147_Gain4 >= 0.0);

  /* Product: '<S147>/Product5' */
  rtb_to65535_c = BuckyWagon_01_B.s147_Gain4 * (real_T)rtb_RelationalOperator_fj;

  /* Product: '<S147>/Product7' */
  rtb_Merge_k = rtb_to65535_c * BuckyWagon_01_B.s248_bcm_vbat;

  /* S-Function Block: <S147>/motohawk_delta_time2 */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s147_motohawk_delta_time2_DWORK1, NULL);
    rtb_motohawk_delta_time2 = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S147>/Sum1' incorporates:
   *  Product: '<S147>/Product8'
   *  S-Function (motohawk_sfun_delta_time): '<S147>/motohawk_delta_time2'
   *  UnitDelay: '<S147>/Unit Delay1'
   */
  rtb_to65535_d = rtb_Merge_k * rtb_motohawk_delta_time2 +
    BuckyWagon_01_DWork.s147_UnitDelay1_DSTATE;

  /* Gain: '<S147>/Gain7' */
  rtb_Gain7 = 0.00027777777777777778 * rtb_to65535_d;

  /* Gain: '<S147>/Gain8' */
  BuckyWagon_01_B.s147_Gain8 = 0.001 * rtb_Gain7;

  /* UnitDelay: '<S132>/Unit Delay' */
  rtb_UnitDelay_b = BuckyWagon_01_DWork.s132_UnitDelay_DSTATE;

  /* Product: '<S147>/Divide3' */
  BuckyWagon_01_B.s147_Divide3 = rtb_Gain7 / rtb_UnitDelay_b;

  /* Product: '<S147>/Product1' incorporates:
   *  Sum: '<S147>/Add1'
   */
  rtb_to65535_c = (rtb_to65535_c + 0.0) * BuckyWagon_01_B.s248_bcm_vbat;

  /* Gain: '<S147>/Gain' */
  BuckyWagon_01_B.s147_Gain = 0.001 * rtb_to65535_c;

  /* S-Function Block: <S147>/motohawk_delta_time1 */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s147_motohawk_delta_time1_DWORK1, NULL);
    rtb_motohawk_delta_time1 = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S147>/Sum' incorporates:
   *  Product: '<S147>/Product4'
   *  S-Function (motohawk_sfun_delta_time): '<S147>/motohawk_delta_time1'
   *  UnitDelay: '<S147>/Unit Delay'
   */
  rtb_Switch_h = rtb_to65535_c * rtb_motohawk_delta_time1 +
    BuckyWagon_01_DWork.s147_UnitDelay_DSTATE;

  /* Gain: '<S147>/Gain2' */
  rtb_Gain2 = 0.00027777777777777778 * rtb_Switch_h;

  /* Gain: '<S147>/Gain3' */
  BuckyWagon_01_B.s147_Gain3 = 0.001 * rtb_Gain2;

  /* Product: '<S147>/Divide' */
  BuckyWagon_01_B.s147_Divide = rtb_Gain2 / rtb_UnitDelay_b;

  /* Stateflow: '<S147>/Downsapmle1' */
  BuckyWagon_01_Downsapmle(rtb_Gain2, (Downsample_DataStore()),
    &BuckyWagon_01_B.s147_sf_Downsapmle1,
    &BuckyWagon_01_DWork.s147_sf_Downsapmle1);

  /* Sum: '<S147>/Subtract1' */
  rtb_Merge_k = BuckyWagon_01_B.s147_sf_Downsapmle1.s148_Out_2 -
    BuckyWagon_01_B.s147_sf_Downsapmle1.s148_Out_1;

  /* Stateflow: '<S147>/Downsapmle' */
  BuckyWagon_01_Downsapmle(rtb_UnitDelay_b, (Downsample_DataStore()),
    &BuckyWagon_01_B.s147_sf_Downsapmle, &BuckyWagon_01_DWork.s147_sf_Downsapmle);

  /* Saturate: '<S147>/Saturation' incorporates:
   *  Product: '<S147>/Divide1'
   *  Sum: '<S147>/Subtract'
   */
  rtb_Merge_k /= BuckyWagon_01_B.s147_sf_Downsapmle.s148_Out_2 -
    BuckyWagon_01_B.s147_sf_Downsapmle.s148_Out_1;
  BuckyWagon_01_B.s147_Saturation = rtb_Merge_k >= 50000.0 ? 50000.0 :
    rtb_Merge_k <= -1.0E+6 ? -1.0E+6 : rtb_Merge_k;

  /* Gain: '<S146>/Gain' incorporates:
   *  Abs: '<S146>/Abs'
   */
  rtb_Merge_k = 0.00027777777777777778 * fabs(BuckyWagon_01_B.s396_Merge);

  /* S-Function Block: <S146>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s146_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_o = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S146>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S146>/motohawk_delta_time'
   */
  rtb_to65535_c = rtb_Merge_k * rtb_motohawk_delta_time_o;

  /* Sum: '<S146>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S146>/motohawk_data_read'
   */
  BuckyWagon_01_B.s146_Sum1 = rtb_to65535_c + Odometer_DataStore();

  /* S-Function (motohawk_sfun_data_write): '<S146>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Odometer */
  {
    Odometer_DataStore() = BuckyWagon_01_B.s146_Sum1;
  }

  /* Sum: '<S146>/Sum' incorporates:
   *  UnitDelay: '<S146>/Unit Delay'
   */
  BuckyWagon_01_B.s146_Sum = rtb_to65535_c +
    BuckyWagon_01_DWork.s146_UnitDelay_DSTATE;

  /* If: '<S175>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S175>/override_enable'
   */
  if ((EHPAS_PumpState_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S175>/NewValue' incorporates:
     *  ActionPort: '<S177>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S177>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(60);
    }

    /* End of Outputs for SubSystem: '<S175>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S175>/OldValue' incorporates:
     *  ActionPort: '<S178>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S178>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(61);
    }

    /* End of Outputs for SubSystem: '<S175>/OldValue' */
  }

  /* End of If: '<S175>/If' */

  /* S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration2' */
  rtb_motohawk_calibration8 = (EHPAS_LowSpeedManeuvering_DataStore());

  /* S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration4' */
  rtb_motohawk_calibration8 = (EHPAS_NormalDriving_DataStore());

  /* S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration5' */
  rtb_motohawk_calibration8 = (EHPAS_BrakingNormalDriving_DataStore());

  /* S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration6' */
  rtb_motohawk_calibration8 = (EHPAS_KeyUpActive_DataStore());

  /* S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration7' */
  rtb_motohawk_calibration8 = (EHPAS_BrakingZeroSpeed_DataStore());

  /* S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration8' */
  rtb_motohawk_calibration8 = (EHPAS_ZeroCommand_DataStore());

  /* Logic: '<S12>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S12>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration5'
   */
  rtb_LogicalOperator1_jy = (((BuckyWagon_01_B.s248_bcm_cell_tmax >=
    (Battery_OverTemp_Threshold_DataStore())) && rtb_LogicalOperator1_jo));

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
  rtb_LogicalOperator3_l = ((BuckyWagon_01_B.s266_Merge &&
    (BuckyWagon_01_B.s248_bcm_vbat >= (ChargeInterruptor_Voltage_DataStore()))));

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
    SetFaultSuspected(9, BuckyWagon_01_B.s261_Merge);
    UpdateFault(9);
  }

  /* Logic: '<S12>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S12>/Relational Operator5'
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration1'
   */
  rtb_LogicalOperator2_d = (((BuckyWagon_01_B.s248_bcm_cell_tmin <=
    (Battery_UnderTemp_Threshold_DataStore())) && rtb_LogicalOperator1_jo));

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
  rtb_LogicalOperator1_l = (BuckyWagon_01_B.s248_bcm_gfd <=
    (A123_Isolation_Monitor_Ground_Fault_Threshold_DataStore()));

  /* Outputs for Enabled SubSystem: '<S12>/Time Since Enabled (With Input)1' incorporates:
   *  EnablePort: '<S258>/Enable'
   */
  if (BuckyWagon_01_B.s395_Sum > 0.0) {
    if (!BuckyWagon_01_DWork.s12_TimeSinceEnabledWithInput1_MODE) {
      /* S-Function Block: <S258>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BuckyWagon_01_DWork.s258_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S258>/Unit Delay' */
      BuckyWagon_01_DWork.s258_UnitDelay_DSTATE = 0.0;
      BuckyWagon_01_DWork.s12_TimeSinceEnabledWithInput1_MODE = TRUE;
    }

    /* S-Function Block: <S258>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BuckyWagon_01_DWork.s258_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_b = ((real_T) delta) * 0.000001;
    }

    /* UnitDelay: '<S258>/Unit Delay' */
    BuckyWagon_01_B.s258_UnitDelay = BuckyWagon_01_DWork.s258_UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S258>/Unit Delay' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S258>/motohawk_delta_time'
     *  Sum: '<S258>/Sum'
     */
    BuckyWagon_01_DWork.s258_UnitDelay_DSTATE = rtb_motohawk_delta_time_b +
      BuckyWagon_01_B.s258_UnitDelay;
  } else {
    if (BuckyWagon_01_DWork.s12_TimeSinceEnabledWithInput1_MODE) {
      /* Disable for Outport: '<S258>/Time Since Enabled [sec]' */
      BuckyWagon_01_B.s258_UnitDelay = 0.0;
      BuckyWagon_01_DWork.s12_TimeSinceEnabledWithInput1_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S12>/Time Since Enabled (With Input)1' */
  /* Logic: '<S12>/Logical Operator' incorporates:
   *  RelationalOperator: '<S12>/Relational Operator8'
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration8'
   */
  rtb_LogicalOperator_d = ((rtb_LogicalOperator1_l && rtb_LogicalOperator1_jo &&
                            (BuckyWagon_01_B.s258_UnitDelay >=
    (HV_GFI_Check_DataStore()))));

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
  rtb_RelationalOperator6 = ((BuckyWagon_01_B.s254_Inverter_Temperature >
    (InverterTemp_Overheat_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S12>/motohawk_fault_def9' */

  /* Set Fault Suspected Status: Inverter_OverTemp */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(16, rtb_RelationalOperator6);
    UpdateFault(16);
  }

  /* Logic: '<S250>/Logical Operator' incorporates:
   *  Constant: '<S283>/Constant'
   *  RelationalOperator: '<S283>/Compare'
   */
  rtb_LogicalOperator_j = ((BuckyWagon_01_B.s289_Merge &&
    (BuckyWagon_01_B.s250_AgeCount >= 30U)));

  /* S-Function (motohawk_sfun_fault_def): '<S250>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: canNLG5_610 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(31, rtb_LogicalOperator_j);
    UpdateFault(31);
  }

  /* Logic: '<S250>/Logical Operator1' incorporates:
   *  Constant: '<S284>/Constant'
   *  RelationalOperator: '<S284>/Compare'
   */
  rtb_LogicalOperator1_o = ((BuckyWagon_01_B.s289_Merge &&
    (BuckyWagon_01_B.s250_AgeCount_p >= 30U)));

  /* S-Function (motohawk_sfun_fault_def): '<S250>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: canNLG5_611 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(32, rtb_LogicalOperator1_o);
    UpdateFault(32);
  }

  /* Logic: '<S250>/Logical Operator2' incorporates:
   *  Constant: '<S285>/Constant'
   *  RelationalOperator: '<S285>/Compare'
   */
  rtb_LogicalOperator2_k = ((BuckyWagon_01_B.s289_Merge &&
    (BuckyWagon_01_B.s250_AgeCount_a >= 30U)));

  /* S-Function (motohawk_sfun_fault_def): '<S250>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: canNLG5_612 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(33, rtb_LogicalOperator2_k);
    UpdateFault(33);
  }

  /* Logic: '<S250>/Logical Operator3' incorporates:
   *  Constant: '<S286>/Constant'
   *  RelationalOperator: '<S286>/Compare'
   */
  rtb_LogicalOperator3_p = ((BuckyWagon_01_B.s289_Merge &&
    (BuckyWagon_01_B.s250_AgeCount_mf >= 300U)));

  /* S-Function (motohawk_sfun_fault_def): '<S250>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: canNLG5_613 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(34, rtb_LogicalOperator3_p);
    UpdateFault(34);
  }

  /* Logic: '<S250>/Logical Operator4' incorporates:
   *  Constant: '<S287>/Constant'
   *  RelationalOperator: '<S287>/Compare'
   */
  rtb_LogicalOperator4_i = ((BuckyWagon_01_B.s289_Merge &&
    (BuckyWagon_01_B.s250_AgeCount_m >= 300U)));

  /* S-Function (motohawk_sfun_fault_def): '<S250>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: canNLG5_614 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(35, rtb_LogicalOperator4_i);
    UpdateFault(35);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S250>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Bursa_online */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(7, BuckyWagon_01_B.s289_Merge);
    UpdateFault(7);
  }

  /* DataTypeConversion: '<S250>/Data Type Conversion' */
  BuckyWagon_01_B.s250_DataTypeConversion = BuckyWagon_01_B.s250_NLG5PwrEn;

  /* DataTypeConversion: '<S250>/Data Type Conversion1' */
  BuckyWagon_01_B.s250_DataTypeConversion1 = BuckyWagon_01_B.s250_NLG5GenErrLtch;

  /* DataTypeConversion: '<S250>/Data Type Conversion2' */
  if (rtIsNaN(BuckyWagon_01_B.s250_NLG5GenLimWrng) || rtIsInf
      (BuckyWagon_01_B.s250_NLG5GenLimWrng)) {
    rtb_Merge_k = 0.0;
  } else {
    rtb_Merge_k = fmod(floor(BuckyWagon_01_B.s250_NLG5GenLimWrng), 256.0);
  }

  BuckyWagon_01_B.s250_DataTypeConversion2 = (uint8_T)(rtb_Merge_k < 0.0 ?
    (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)-rtb_Merge_k : (uint8_T)
    rtb_Merge_k);

  /* End of DataTypeConversion: '<S250>/Data Type Conversion2' */

  /* DataTypeConversion: '<S250>/Data Type Conversion3' */
  if (rtIsNaN(BuckyWagon_01_B.s250_NLG5FanActv) || rtIsInf
      (BuckyWagon_01_B.s250_NLG5FanActv)) {
    rtb_Merge_k = 0.0;
  } else {
    rtb_Merge_k = fmod(floor(BuckyWagon_01_B.s250_NLG5FanActv), 256.0);
  }

  BuckyWagon_01_B.s250_DataTypeConversion3 = (uint8_T)(rtb_Merge_k < 0.0 ?
    (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)-rtb_Merge_k : (uint8_T)
    rtb_Merge_k);

  /* End of DataTypeConversion: '<S250>/Data Type Conversion3' */

  /* DataTypeConversion: '<S250>/Data Type Conversion4' */
  if (rtIsNaN(BuckyWagon_01_B.s250_BypassDet) || rtIsInf
      (BuckyWagon_01_B.s250_BypassDet)) {
    rtb_Merge_k = 0.0;
  } else {
    rtb_Merge_k = fmod(floor(BuckyWagon_01_B.s250_BypassDet), 256.0);
  }

  BuckyWagon_01_B.s250_DataTypeConversion4 = (uint8_T)(rtb_Merge_k < 0.0 ?
    (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)-rtb_Merge_k : (uint8_T)
    rtb_Merge_k);

  /* End of DataTypeConversion: '<S250>/Data Type Conversion4' */

  /* S-Function (motohawk_sfun_code_cover): '<S250>/motohawk_code_coverage' */
  /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Brusa Charger */
  {
    extern void MH_CodeCovered(uint32_T idx);
    MH_CodeCovered(82);
  }

  /* Logic: '<S253>/Logical Operator' incorporates:
   *  Constant: '<S333>/Constant'
   *  RelationalOperator: '<S333>/Compare'
   */
  rtb_LogicalOperator_b = ((BuckyWagon_01_B.s334_sf_Chart.s290_pluggedIn &&
    (BuckyWagon_01_B.s253_AgeCount >= 30U)));

  /* S-Function (motohawk_sfun_fault_def): '<S253>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Eaton_CAN_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(10, rtb_LogicalOperator_b);
    UpdateFault(10);
  }

  /* Logic: '<S255>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S255>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S255>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S255>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_pz = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_i > (Accel_InputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S255>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Accel_RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(1, rtb_LogicalOperator2_pz);
    UpdateFault(1);
  }

  /* Logic: '<S255>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S255>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S255>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S255>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_d = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_i < (Accel_InputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S255>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Accel_RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(2, rtb_LogicalOperator3_d);
    UpdateFault(2);
  }

  /* Logic: '<S256>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S256>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S256>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S256>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_ka = ((MPRD_DataStore() && (rtb_DataTypeConversion_d >
    (LVVolt_InputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S256>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: LVVolt_RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(19, rtb_LogicalOperator2_ka);
    UpdateFault(19);
  }

  /* Logic: '<S256>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S256>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S256>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S256>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_f = ((MPRD_DataStore() && (rtb_DataTypeConversion_d <
    (LVVolt_InputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S256>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: LVVolt_RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(20, rtb_LogicalOperator3_f);
    UpdateFault(20);
  }

  /* Logic: '<S257>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S257>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S257>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S257>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_dm = ((MPRD_DataStore() && (rtb_DataTypeConversion_b >
    (Brake_InputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S257>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Brake_RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(5, rtb_LogicalOperator2_dm);
    UpdateFault(5);
  }

  /* Logic: '<S257>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S257>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S257>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S257>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_pt = ((MPRD_DataStore() && (rtb_DataTypeConversion_b <
    (Brake_InputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S257>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Brake_RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(6, rtb_LogicalOperator3_pt);
    UpdateFault(6);
  }

  /* Saturate: '<S395>/Saturation' */
  rtb_Saturation = BuckyWagon_01_B.s395_Sum >= 16000.0 ? 16000.0 :
    BuckyWagon_01_B.s395_Sum <= 0.0 ? 0.0 : BuckyWagon_01_B.s395_Sum;

  /* S-Function (motohawk_sfun_data_write): '<S395>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceKeyOnTimer */
  {
    TimeSinceKeyOnTimer_DataStore() = rtb_Saturation;
  }

  /* Update for UnitDelay: '<S255>/Unit Delay1' */
  BuckyWagon_01_DWork.s255_UnitDelay1_DSTATE = rtb_Merge_c;

  /* Update for UnitDelay: '<S376>/Unit Delay' */
  BuckyWagon_01_DWork.s376_UnitDelay_DSTATE = rtb_Sum1;

  /* Update for UnitDelay: '<S257>/Unit Delay1' */
  BuckyWagon_01_DWork.s257_UnitDelay1_DSTATE = rtb_Merge_e;

  /* Update for UnitDelay: '<S392>/Unit Delay' */
  BuckyWagon_01_DWork.s392_UnitDelay_DSTATE = rtb_Sum1_o;

  /* Update for UnitDelay: '<S181>/Unit Delay' */
  BuckyWagon_01_DWork.s181_UnitDelay_DSTATE = BuckyWagon_01_B.s181_Sum1;

  /* Update for UnitDelay: '<S256>/Unit Delay1' */
  BuckyWagon_01_DWork.s256_UnitDelay1_DSTATE = rtb_Merge_ep;

  /* Update for UnitDelay: '<S384>/Unit Delay' */
  BuckyWagon_01_DWork.s384_UnitDelay_DSTATE = rtb_to65535_b;

  /* Update for UnitDelay: '<S128>/Unit Delay' incorporates:
   *  MinMax: '<S130>/MinMax1'
   */
  BuckyWagon_01_DWork.s128_UnitDelay_DSTATE = rtb_to65535_dx;

  /* Update for UnitDelay: '<S129>/Unit Delay' */
  BuckyWagon_01_DWork.s129_UnitDelay_DSTATE = rtb_Switch1_m;

  /* Update for UnitDelay: '<S121>/Unit Delay' */
  BuckyWagon_01_DWork.s121_UnitDelay_DSTATE =
    BuckyWagon_01_B.s121_LogicalOperator;

  /* Update for UnitDelay: '<S147>/Unit Delay1' */
  BuckyWagon_01_DWork.s147_UnitDelay1_DSTATE = rtb_to65535_d;

  /* Update for UnitDelay: '<S132>/Unit Delay' */
  BuckyWagon_01_DWork.s132_UnitDelay_DSTATE = BuckyWagon_01_B.s146_Sum;

  /* Update for UnitDelay: '<S147>/Unit Delay' */
  BuckyWagon_01_DWork.s147_UnitDelay_DSTATE = rtb_Switch_h;

  /* Update for UnitDelay: '<S146>/Unit Delay' */
  BuckyWagon_01_DWork.s146_UnitDelay_DSTATE = BuckyWagon_01_B.s146_Sum;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
