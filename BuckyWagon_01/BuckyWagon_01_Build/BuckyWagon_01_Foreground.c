/*
 * File: BuckyWagon_01_Foreground.c
 *
 * Code generated for Simulink model 'BuckyWagon_01'.
 *
 * Model version                  : 1.1530
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sun Jul 29 18:42:46 2018
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

/* Named constants for Stateflow: '<S127>/Downsapmle' */
#define BuckyWagon_01_IN_Out           (1U)
#define BuckyWagon_01_IN_Value_1       (2U)
#define BuckyWagon_01_IN_Value_2       (3U)
#define BuckyWagon_01_IN_downsample    (4U)
#define BuckyWagon_01_IN_downsample_2  (5U)

/* Named constants for Stateflow: '<S37>/Chart' */
#define BuckyWagon_01_IN_FlashOne      (1U)
#define BuckyWagon_01_IN_FlashTwo      (2U)
#define BuckyWagon_01_IN_Off           (3U)
#define BuckyWagon_01_IN_OffOne        (4U)
#define BuckyWagon_01_IN_OffTwo        (5U)

/* Named constants for Stateflow: '<S17>/Chart' */
#define BuckyWagon_01_IN_Init          (1U)
#define BuckyWagon_01_IN_Off_n         (2U)
#define BuckyWagon_01_IN_On            (3U)
#define BuckyWagon_01_IN_Restart       (4U)
#define BuckyWagon_01_IN_Standby       (5U)

/* Named constants for Stateflow: '<S141>/Inverter Overheat Logic' */
#define BuckyWagon_01_IN_Off_m         (1U)
#define BuckyWagon_01_IN_On_m          (2U)

/* Named constants for Stateflow: '<S119>/Chart' */
#define BuckyWagon_01_IN_Braking       (1U)
#define BuckyWagon_01_IN_Creeping      (1U)
#define BuckyWagon_01_IN_Driving       (1U)
#define BuckyWagon_01_IN_DrivingAndBrake (2U)
#define BuckyWagon_01_IN_Idle          (2U)
#define BuckyWagon_01_IN_KeyUp         (3U)
#define BuckyWagon_01_IN_LowSpeedManeuvering (4U)
#define BuckyWagon_01_IN_NormalDriving (5U)
#define BuckyWagon_01_IN_Reversing     (2U)
#define BuckyWagon_01_IN_SlowingDown   (6U)
#define BuckyWagon_01_IN_Stopping      (7U)

/* Named constants for Stateflow: '<S122>/Chart' */
#define BuckyWagon_01_IN_Forward       (1U)
#define BuckyWagon_01_IN_Main          (1U)
#define BuckyWagon_01_IN_Reverse       (2U)
#define BuckyWagon_01_IN_TransistionOff (1U)
#define BuckyWagon_01_IN_TransistionOn (2U)
#define BuckyWagon_01_IN_waitRelease   (3U)
#define BuckyWagon_01_event_buttonPress (0)

/* Named constants for Stateflow: '<S299>/Chart' */
#define BuckyWagon_01_IN_CountDown     (1U)
#define BuckyWagon_01_IN_countUp       (4U)

/* Forward declaration for local functions */
static void BuckyWagon_01_c1_BuckyWagon_01(void);

/*
 * Initial conditions for atomic system:
 *    '<S127>/Downsapmle'
 *    '<S127>/Downsapmle1'
 */
void BuckyWagon_01_Downsapmle_Init(rtB_Downsapmle_BuckyWagon_01 *localB,
  rtDW_Downsapmle_BuckyWagon_01 *localDW)
{
  localDW->s128_is_active_c11_BuckyWagon_01 = 0U;
  localDW->s128_is_c11_BuckyWagon_01 = 0U;
  localDW->s128_count = 0.0;
  localDW->s128_Val1 = 0.0;
  localDW->s128_Val2 = 0.0;
  localB->s128_Out_1 = 0.0;
  localB->s128_Out_2 = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S127>/Downsapmle'
 *    '<S127>/Downsapmle1'
 */
void BuckyWagon_01_Downsapmle(real_T rtu_Val_In, real_T rtu_numb_downsamp,
  rtB_Downsapmle_BuckyWagon_01 *localB, rtDW_Downsapmle_BuckyWagon_01 *localDW)
{
  /* Gateway: Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle */
  /* During: Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle */
  if (localDW->s128_is_active_c11_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle */
    localDW->s128_is_active_c11_BuckyWagon_01 = 1U;

    /* Transition: '<S128>:75' */
    localDW->s128_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_downsample;

    /* Entry 'downsample': '<S128>:22' */
    localDW->s128_count = 0.0;
  } else {
    switch (localDW->s128_is_c11_BuckyWagon_01) {
     case BuckyWagon_01_IN_Out:
      /* During 'Out': '<S128>:48' */
      if (localDW->s128_count >= 2.0) {
        /* Transition: '<S128>:51' */
        localDW->s128_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_downsample;

        /* Entry 'downsample': '<S128>:22' */
        localDW->s128_count = 0.0;
      } else {
        localDW->s128_count = localDW->s128_count + 1.0;
      }
      break;

     case BuckyWagon_01_IN_Value_1:
      /* During 'Value_1': '<S128>:29' */
      if (localDW->s128_count >= 2.0) {
        /* Transition: '<S128>:40' */
        localDW->s128_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_downsample_2;

        /* Entry 'downsample_2': '<S128>:30' */
        localDW->s128_count = 0.0;
      } else {
        localDW->s128_count = localDW->s128_count + 1.0;
      }
      break;

     case BuckyWagon_01_IN_Value_2:
      /* During 'Value_2': '<S128>:31' */
      if (localDW->s128_count >= 2.0) {
        /* Transition: '<S128>:78' */
        localDW->s128_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_Out;

        /* Entry 'Out': '<S128>:48' */
        localDW->s128_count = 0.0;
        localB->s128_Out_1 = localDW->s128_Val1;
        localB->s128_Out_2 = localDW->s128_Val2;
      } else {
        localDW->s128_count = localDW->s128_count + 1.0;
      }
      break;

     case BuckyWagon_01_IN_downsample:
      /* During 'downsample': '<S128>:22' */
      if (localDW->s128_count >= rtu_numb_downsamp) {
        /* Transition: '<S128>:34' */
        localDW->s128_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_Value_1;

        /* Entry 'Value_1': '<S128>:29' */
        localDW->s128_Val1 = rtu_Val_In;
        localDW->s128_count = 0.0;
      } else {
        localDW->s128_count = localDW->s128_count + 1.0;
      }
      break;

     case BuckyWagon_01_IN_downsample_2:
      /* During 'downsample_2': '<S128>:30' */
      if (localDW->s128_count >= rtu_numb_downsamp) {
        /* Transition: '<S128>:42' */
        localDW->s128_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_Value_2;

        /* Entry 'Value_2': '<S128>:31' */
        localDW->s128_Val2 = rtu_Val_In;
        localDW->s128_count = 0.0;
      } else {
        localDW->s128_count = localDW->s128_count + 1.0;
      }
      break;

     default:
      /* Transition: '<S128>:75' */
      localDW->s128_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_downsample;

      /* Entry 'downsample': '<S128>:22' */
      localDW->s128_count = 0.0;
      break;
    }
  }
}

/*
 * Output and update for action system:
 *    '<S230>/If Action Subsystem'
 *    '<S230>/If Action Subsystem1'
 *    '<S230>/If Action Subsystem2'
 *    '<S231>/If Action Subsystem'
 *    '<S231>/If Action Subsystem1'
 *    '<S231>/If Action Subsystem2'
 *    '<S232>/If Action Subsystem'
 *    '<S232>/If Action Subsystem1'
 *    '<S232>/If Action Subsystem2'
 */
void BuckyWagon_01_IfActionSubsystem(real_T rtu_0, real_T *rty_Out)
{
  /* Inport: '<S337>/In' */
  (*rty_Out) = rtu_0;
}

/* Function for Stateflow: '<S122>/Chart' */
static void BuckyWagon_01_c1_BuckyWagon_01(void)
{
  int32_T b_previousEvent;

  /* During: Foreground/Control Strategy/Reverse/Chart */
  if (BuckyWagon_01_DWork.s170_is_active_c1_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Control Strategy/Reverse/Chart */
    BuckyWagon_01_DWork.s170_is_active_c1_BuckyWagon_01 = 1U;
    BuckyWagon_01_DWork.s170_is_c1_BuckyWagon_01 = BuckyWagon_01_IN_Main;
    BuckyWagon_01_DWork.s170_is_active_ButtonDebounce = 1U;

    /* Transition: '<S170>:16' */
    BuckyWagon_01_DWork.s170_is_ButtonDebounce = BuckyWagon_01_IN_TransistionOn;
    BuckyWagon_01_DWork.s170_is_active_ReverseLogic = 1U;

    /* Transition: '<S170>:17' */
    if (BuckyWagon_01_DWork.s170_is_ReverseLogic != BuckyWagon_01_IN_Forward) {
      BuckyWagon_01_DWork.s170_is_ReverseLogic = BuckyWagon_01_IN_Forward;

      /* Entry 'Forward': '<S170>:7' */
      BuckyWagon_01_B.s170_inReverse = 0.0;
    }
  } else {
    if (BuckyWagon_01_DWork.s170_is_c1_BuckyWagon_01 == BuckyWagon_01_IN_Main) {
      /* During 'Main': '<S170>:1' */
      if (BuckyWagon_01_DWork.s170_is_active_ButtonDebounce != 0) {
        /* During 'ButtonDebounce': '<S170>:2' */
        switch (BuckyWagon_01_DWork.s170_is_ButtonDebounce) {
         case BuckyWagon_01_IN_TransistionOff:
          /* During 'TransistionOff': '<S170>:6' */
          if (BuckyWagon_01_DWork.s170_timer >= (offTime_DataStore())) {
            /* Transition: '<S170>:10' */
            BuckyWagon_01_DWork.s170_is_ButtonDebounce =
              BuckyWagon_01_IN_TransistionOn;
          } else if (BuckyWagon_01_B.s255_Merge) {
            /* Transition: '<S170>:9' */
            BuckyWagon_01_DWork.s170_timer = 0.0;
            BuckyWagon_01_DWork.s170_is_ButtonDebounce =
              BuckyWagon_01_IN_TransistionOff;
          } else {
            BuckyWagon_01_DWork.s170_timer = BuckyWagon_01_DWork.s170_timer +
              1.0;
          }
          break;

         case BuckyWagon_01_IN_TransistionOn:
          /* During 'TransistionOn': '<S170>:5' */
          if (!BuckyWagon_01_B.s255_Merge) {
            /* Transition: '<S170>:13' */
            BuckyWagon_01_DWork.s170_timer = 0.0;
            BuckyWagon_01_DWork.s170_is_ButtonDebounce =
              BuckyWagon_01_IN_TransistionOn;
          } else if (BuckyWagon_01_DWork.s170_timer >= (onTime_DataStore())) {
            /* Transition: '<S170>:11' */
            BuckyWagon_01_DWork.s170_is_ButtonDebounce =
              BuckyWagon_01_IN_waitRelease;

            /* Entry 'waitRelease': '<S170>:3' */
            /* Event: '<S170>:29' */
            b_previousEvent = BuckyWagon_01_DWork.s170_sfEvent;
            BuckyWagon_01_DWork.s170_sfEvent = BuckyWagon_01_event_buttonPress;
            BuckyWagon_01_c1_BuckyWagon_01();
            BuckyWagon_01_DWork.s170_sfEvent = b_previousEvent;
          } else {
            BuckyWagon_01_DWork.s170_timer = BuckyWagon_01_DWork.s170_timer +
              1.0;
          }
          break;

         case BuckyWagon_01_IN_waitRelease:
          /* During 'waitRelease': '<S170>:3' */
          if (!BuckyWagon_01_B.s255_Merge) {
            /* Transition: '<S170>:12' */
            BuckyWagon_01_DWork.s170_is_ButtonDebounce =
              BuckyWagon_01_IN_TransistionOff;
          }
          break;

         default:
          BuckyWagon_01_DWork.s170_is_ButtonDebounce = (uint8_T)0U;
          break;
        }
      }

      if (BuckyWagon_01_DWork.s170_is_active_ReverseLogic != 0) {
        /* During 'ReverseLogic': '<S170>:4' */
        switch (BuckyWagon_01_DWork.s170_is_ReverseLogic) {
         case BuckyWagon_01_IN_Forward:
          /* During 'Forward': '<S170>:7' */
          if ((BuckyWagon_01_DWork.s170_sfEvent ==
               BuckyWagon_01_event_buttonPress) && ((BuckyWagon_01_B.s122_Abs <
                (revSpdThres_DataStore())) && (BuckyWagon_01_B.s340_Merge <
                (revAccThres_DataStore())))) {
            /* Transition: '<S170>:15' */
            BuckyWagon_01_DWork.s170_is_ReverseLogic = BuckyWagon_01_IN_Reverse;

            /* Entry 'Reverse': '<S170>:8' */
            BuckyWagon_01_B.s170_inReverse = 1.0;
          }
          break;

         case BuckyWagon_01_IN_Reverse:
          /* During 'Reverse': '<S170>:8' */
          if ((BuckyWagon_01_DWork.s170_sfEvent ==
               BuckyWagon_01_event_buttonPress) && ((BuckyWagon_01_B.s122_Abs <
                (fwdSpdThres_DataStore())) && (BuckyWagon_01_B.s340_Merge <
                (fwdAccThres_DataStore())))) {
            /* Transition: '<S170>:14' */
            BuckyWagon_01_DWork.s170_is_ReverseLogic = BuckyWagon_01_IN_Forward;

            /* Entry 'Forward': '<S170>:7' */
            BuckyWagon_01_B.s170_inReverse = 0.0;
          }
          break;

         default:
          BuckyWagon_01_DWork.s170_is_ReverseLogic = (uint8_T)0U;
          break;
        }
      }
    }
  }
}

/* Initial conditions for function-call system: '<Root>/Foreground' */
void BuckyWagon_01_Foreground_Init(void)
{
  /* InitializeConditions for Stateflow: '<S299>/Chart' */
  BuckyWagon_01_DWork.s309_is_active_c32_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s309_is_c32_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s309_timer = 0;
  BuckyWagon_01_B.s309_pluggedIn = FALSE;

  /* InitializeConditions for Atomic SubSystem: '<S9>/HV Controller' */

  /* S-Function Block: <S165>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s165_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S164>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s164_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* End of InitializeConditions for SubSystem: '<S9>/HV Controller' */

  /* InitializeConditions for Atomic SubSystem: '<S9>/Reverse' */
  /* InitializeConditions for Stateflow: '<S122>/Chart' */
  BuckyWagon_01_DWork.s170_sfEvent = CALL_EVENT;
  BuckyWagon_01_DWork.s170_is_active_ButtonDebounce = 0U;
  BuckyWagon_01_DWork.s170_is_ButtonDebounce = 0U;
  BuckyWagon_01_DWork.s170_is_active_ReverseLogic = 0U;
  BuckyWagon_01_DWork.s170_is_ReverseLogic = 0U;
  BuckyWagon_01_DWork.s170_is_active_c1_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s170_is_c1_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s170_timer = 0.0;
  BuckyWagon_01_B.s170_inReverse = 0.0;

  /* End of InitializeConditions for SubSystem: '<S9>/Reverse' */
  /* InitializeConditions for Atomic SubSystem: '<S9>/Drive' */

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

  /* InitializeConditions for Stateflow: '<S141>/Inverter Overheat Logic' */
  BuckyWagon_01_DWork.s145_is_active_c5_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s145_is_c5_BuckyWagon_01 = 0U;
  BuckyWagon_01_B.s145_out = 0.0;

  /* End of InitializeConditions for SubSystem: '<S9>/Drive' */

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

  /* InitializeConditions for Atomic SubSystem: '<S7>/A123 Battery Controller' */

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

  /* S-Function Block: <S27>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s27_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* End of InitializeConditions for SubSystem: '<S7>/A123 Battery Controller' */

  /* InitializeConditions for Atomic SubSystem: '<S7>/Analog Out' */
  /* InitializeConditions for Stateflow: '<S37>/Chart' */
  BuckyWagon_01_DWork.s42_is_active_c6_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s42_is_c6_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s42_timer = 0U;
  BuckyWagon_01_B.s42_light = FALSE;

  /* End of InitializeConditions for SubSystem: '<S7>/Analog Out' */

  /* InitializeConditions for Stateflow: '<S119>/Chart' */
  BuckyWagon_01_DWork.s150_is_LowSpeedManeuvering = 0U;
  BuckyWagon_01_DWork.s150_is_NormalDriving = 0U;
  BuckyWagon_01_DWork.s150_is_active_c9_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s150_counts = 0U;
  BuckyWagon_01_DWork.s150_brakeCounts = 0.0;
  BuckyWagon_01_B.s150_PumpState = 0U;

  /* S-Function Block: <S360>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s360_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S17>/Chart' */
  BuckyWagon_01_DWork.s66_is_active_c7_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s66_is_c7_BuckyWagon_01 = 0U;
  BuckyWagon_01_B.s66_ctrlState = 0.0;

  /* InitializeConditions for S-Function (motohawk_sfun_fault_def): '<S106>/motohawk_fault_def5' */
  /* Reset Fault Downsample Counter: LVVoltLow */
  {
    BuckyWagon_01_DWork.s106_motohawk_fault_def5_DWORK1 = 0;
  }

  /* S-Function Block: <S114>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s114_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S2>/motohawk_trigger' */
  BuckyWagon_01_MiniViewDisplay_Init();

  /* S-Function Block: <S127>/motohawk_delta_time2 */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s127_motohawk_delta_time2_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S127>/motohawk_delta_time1 */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s127_motohawk_delta_time1_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S127>/Downsapmle1' */
  BuckyWagon_01_Downsapmle_Init(&BuckyWagon_01_B.s127_sf_Downsapmle1,
    &BuckyWagon_01_DWork.s127_sf_Downsapmle1);

  /* InitializeConditions for Stateflow: '<S127>/Downsapmle' */
  BuckyWagon_01_Downsapmle_Init(&BuckyWagon_01_B.s127_sf_Downsapmle,
    &BuckyWagon_01_DWork.s127_sf_Downsapmle);

  /* S-Function Block: <S126>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s126_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }
}

/* Enable for function-call system: '<Root>/Foreground' */
void BuckyWagon_01_Foreground_Enable(void)
{
  /* Level2 S-Function Block: '<S2>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_4151p0004 */
  BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S2>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_RTI_PERIODIC_4150p0006 */
  BuckyWagon_01_DWork.s2_motohawk_trigger_DWORK1 = 1;
}

/* Disable for function-call system: '<Root>/Foreground' */
void BuckyWagon_01_Foreground_Disable(void)
{
  /* Disable for Atomic SubSystem: '<S7>/Analog Out' */
  /* Disable for Enabled SubSystem: '<S41>/Enabled Subsystem' */
  BuckyWagon_01_DWork.s41_EnabledSubsystem_MODE = FALSE;

  /* End of Disable for SubSystem: '<S41>/Enabled Subsystem' */
  /* End of Disable for SubSystem: '<S7>/Analog Out' */

  /* Disable for Enabled SubSystem: '<S105>/Time Since Enabled (With Input)1' */
  /* Disable for Outport: '<S109>/Time Since Enabled [sec]' */
  BuckyWagon_01_B.s109_UnitDelay = 0.0;
  BuckyWagon_01_DWork.s105_TimeSinceEnabledWithInput1_MODE = FALSE;

  /* End of Disable for SubSystem: '<S105>/Time Since Enabled (With Input)1' */

  /* Level2 S-Function Block: '<S2>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_20XRTI_PERIODIC_4151p0004 */
  BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 = 0;

  /* Level2 S-Function Block: '<S2>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_RTI_PERIODIC_4150p0006 */
  BuckyWagon_01_DWork.s2_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S12>/Time Since Enabled (With Input)1' */
  /* Disable for Outport: '<S233>/Time Since Enabled [sec]' */
  BuckyWagon_01_B.s233_UnitDelay = 0.0;
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

  /* Start for Enabled SubSystem: '<S41>/Enabled Subsystem' */
  /* InitializeConditions for UnitDelay: '<S56>/Unit Delay' */
  BuckyWagon_01_DWork.s56_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S41>/Enabled Subsystem' */

  /* End of Start for SubSystem: '<S7>/Analog Out' */

  /* Start for Enabled SubSystem: '<S105>/Time Since Enabled (With Input)1' */

  /* S-Function Block: <S109>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s109_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S109>/Unit Delay' */
  BuckyWagon_01_DWork.s109_UnitDelay_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S105>/Time Since Enabled (With Input)1' */

  /* Start for function-call system: '<S2>/Gauges' */

  /* Start for S-Function (motohawk_sfun_vdogauge_def): '<S10>/VDO Gauge Interface' */
  {
    GaugeChain_EZLinkOutput_Create();
  }

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_4151p0004 */
  BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S2>/motohawk_trigger' */
  BuckyWagon_01_MiniViewDisplay_Start();

  /* Clear enable/disable state for embedded trigger Trigger_FGND_RTI_PERIODIC_4150p0006 */
  BuckyWagon_01_DWork.s2_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S12>/Time Since Enabled (With Input)1' */

  /* S-Function Block: <S233>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s233_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S233>/Unit Delay' */
  BuckyWagon_01_DWork.s233_UnitDelay_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S12>/Time Since Enabled (With Input)1' */

  /* S-Function (motohawk_sfun_probe): '<S19>/motohawk_probe' */
  (SpeedSet_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S117>/motohawk_probe3' */
  (InstDCDCWatts_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S117>/motohawk_probe9' */
  (EngPowerkW_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S117>/motohawk_probe8' */
  (GenEfficiencyPct_DataStore()) = 0.0;

  /* S-Function (motohawk_sfun_probe): '<S117>/motohawk_probe11' */
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
  real_T rtb_Merge_i;
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
  real_T rtb_MinMax_o;
  real_T rtb_Product1_n;
  real_T rtb_Gain7;
  uint32_T rtb_DataTypeConversion2_h;
  int16_T rtb_DataTypeConversion3;
  uint16_T rtb_motohawk_ain2;
  uint16_T rtb_motohawk_calibration8;
  index_T rtb_motohawk_prelookup1;
  index_T rtb_motohawk_prelookup;
  index_T rtb_motohawk_prelookup2;
  index_T rtb_motohawk_prelookup3;
  index_T rtb_motohawk_prelookup_row;
  index_T rtb_motohawk_prelookup_col;
  index_T rtb_motohawk_prelookup_o;
  index_T rtb_motohawk_prelookup_b;
  index_T rtb_motohawk_prelookup_p;
  uint8_T rtb_Merge_ht;
  uint8_T rtb_Merge_j0;
  uint8_T rtb_Merge_gc;
  uint8_T rtb_Merge_o0;
  boolean_T rtb_E_stop_switch;
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
  boolean_T rtb_LogicalOperator_b;
  boolean_T rtb_LogicalOperator2_pz;
  boolean_T rtb_LogicalOperator3_d;
  boolean_T rtb_LogicalOperator2_k;
  boolean_T rtb_LogicalOperator3_f;
  boolean_T rtb_LogicalOperator2_dm;
  boolean_T rtb_LogicalOperator3_p;
  boolean_T rtb_Compare_d;
  boolean_T rtb_Compare_k;
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
  boolean_T rtb_RelationalOperator_k;
  int32_T rtb_DataTypeConversion_i;
  boolean_T rtb_LogicalOperator1_jo;
  real_T rtb_Sum1;
  real_T rtb_Sum1_o;
  boolean_T rtb_LogicalOperator2_e;
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

  /* S-Function (motohawk_sfun_read_canmsg): '<S224>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_2909p0005;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_2909p0005,
      &messageObj);
    if ((BuckyWagon_01_B.s224_AgeCount + 1) > BuckyWagon_01_B.s224_AgeCount)
      BuckyWagon_01_B.s224_AgeCount++;
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
      BuckyWagon_01_B.s224_bcm_alarm = (real_T) tmp0;
      BuckyWagon_01_B.s224_bcm_cpwr_cmd = (real_T) tmp1;
      BuckyWagon_01_B.s224_bcm_cpwr_mon = (real_T) tmp2;
      BuckyWagon_01_B.s224_bcm_epo = (real_T) tmp3;
      BuckyWagon_01_B.s224_bcm_gfd = ((real_T) tmp4) / ((real_T) 4);
      BuckyWagon_01_B.s224_bcm_hvil_mon = (real_T) tmp5;
      BuckyWagon_01_B.s224_bcm_ibat = (((real_T) tmp6) / ((real_T) 40)) +
        ((real_T) -1000);
      BuckyWagon_01_B.s224_bcm_mainc_stat = (boolean_T) tmp7;
      BuckyWagon_01_B.s224_bcm_ready = (real_T) tmp8;
      BuckyWagon_01_B.s224_bcm_soc = ((real_T) tmp9) / ((real_T) 200);
      BuckyWagon_01_B.s224_bcm_vbat = ((real_T) tmp10) / ((real_T) 4);
      BuckyWagon_01_B.s224_bcm_chg_done = (real_T) tmp11;
      BuckyWagon_01_B.s224_bcm_chgc_stat = (boolean_T) tmp12;
      BuckyWagon_01_B.s224_bcm_cool_req = (real_T) tmp13;
      BuckyWagon_01_B.s224_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S237>/Compare' incorporates:
   *  Constant: '<S237>/Constant'
   */
  rtb_Compare_h = ((BuckyWagon_01_B.s224_AgeCount > 20U));

  /* S-Function (motohawk_sfun_fault_def): '<S224>/motohawk_fault_def10' */

  /* Set Fault Suspected Status: NoCAN_BCM_410 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(23, rtb_Compare_h);
    UpdateFault(23);
  }

  /* If: '<S240>/If' incorporates:
   *  Inport: '<S245>/In1'
   *  Inport: '<S246>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S240>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S240>/override_enable'
   */
  if ((bcm_mainc_stat_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S240>/NewValue' incorporates:
     *  ActionPort: '<S245>/Action Port'
     */
    BuckyWagon_01_B.s240_Merge = (bcm_mainc_stat_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S245>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(58);
    }

    /* End of Outputs for SubSystem: '<S240>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S240>/OldValue' incorporates:
     *  ActionPort: '<S246>/Action Port'
     */
    BuckyWagon_01_B.s240_Merge = BuckyWagon_01_B.s224_bcm_mainc_stat;

    /* S-Function (motohawk_sfun_code_cover): '<S246>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(59);
    }

    /* End of Outputs for SubSystem: '<S240>/OldValue' */
  }

  /* End of If: '<S240>/If' */

  /* If: '<S244>/If' incorporates:
   *  Inport: '<S253>/In1'
   *  Inport: '<S254>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S244>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S244>/override_enable'
   */
  if ((bcm_ready_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S244>/NewValue' incorporates:
     *  ActionPort: '<S253>/Action Port'
     */
    BuckyWagon_01_B.s244_Merge = (bcm_ready_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S253>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(66);
    }

    /* End of Outputs for SubSystem: '<S244>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S244>/OldValue' incorporates:
     *  ActionPort: '<S254>/Action Port'
     */
    BuckyWagon_01_B.s244_Merge = BuckyWagon_01_B.s224_bcm_ready;

    /* S-Function (motohawk_sfun_code_cover): '<S254>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(67);
    }

    /* End of Outputs for SubSystem: '<S244>/OldValue' */
  }

  /* End of If: '<S244>/If' */

  /* Gain: '<S224>/Gain1' */
  BuckyWagon_01_B.s224_bcm_soc_j = 100.0 * BuckyWagon_01_B.s224_bcm_soc;

  /* If: '<S241>/If' incorporates:
   *  Inport: '<S247>/In1'
   *  Inport: '<S248>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S241>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S241>/override_enable'
   */
  if ((bcm_chargec_stat_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S241>/NewValue' incorporates:
     *  ActionPort: '<S247>/Action Port'
     */
    BuckyWagon_01_B.s241_Merge = (bcm_chargec_stat_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S247>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(60);
    }

    /* End of Outputs for SubSystem: '<S241>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S241>/OldValue' incorporates:
     *  ActionPort: '<S248>/Action Port'
     */
    BuckyWagon_01_B.s241_Merge = BuckyWagon_01_B.s224_bcm_chgc_stat;

    /* S-Function (motohawk_sfun_code_cover): '<S248>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(61);
    }

    /* End of Outputs for SubSystem: '<S241>/OldValue' */
  }

  /* End of If: '<S241>/If' */

  /* If: '<S243>/If' incorporates:
   *  Inport: '<S251>/In1'
   *  Inport: '<S252>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S243>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S243>/override_enable'
   */
  if ((SOC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S243>/NewValue' incorporates:
     *  ActionPort: '<S251>/Action Port'
     */
    BuckyWagon_01_B.s243_Merge = (SOC_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S251>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(64);
    }

    /* End of Outputs for SubSystem: '<S243>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S243>/OldValue' incorporates:
     *  ActionPort: '<S252>/Action Port'
     */
    BuckyWagon_01_B.s243_Merge = BuckyWagon_01_B.s224_bcm_soc_j;

    /* S-Function (motohawk_sfun_code_cover): '<S252>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(65);
    }

    /* End of Outputs for SubSystem: '<S243>/OldValue' */
  }

  /* End of If: '<S243>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S224>/Read CAN Message6' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_2911p0004;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_2911p0004,
      &messageObj);
    if ((BuckyWagon_01_B.s224_AgeCount_e + 1) > BuckyWagon_01_B.s224_AgeCount_e)
      BuckyWagon_01_B.s224_AgeCount_e++;
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
      BuckyWagon_01_B.s224_bcm_cell_tmax = (((real_T) tmp0) / ((real_T) 2)) +
        ((real_T) -40);
      BuckyWagon_01_B.s224_bcm_cell_tmin = (((real_T) tmp1) / ((real_T) 2)) +
        ((real_T) -40);
      BuckyWagon_01_B.s224_bcm_cell_vmax = ((real_T) tmp2) / ((real_T) 1000);
      BuckyWagon_01_B.s224_bcm_cell_vmin = ((real_T) tmp3) / ((real_T) 1000);
      BuckyWagon_01_B.s224_bcm_chga_ena = (real_T) tmp4;
      BuckyWagon_01_B.s224_bcm_chga_mon = (real_T) tmp5;
      BuckyWagon_01_B.s224_bcm_lvbat = ((real_T) tmp6) / ((real_T) 10);
      BuckyWagon_01_B.s224_bcm_mod_ena = (real_T) tmp7;
      BuckyWagon_01_B.s224_bcm_veh_mon = (real_T) tmp8;
      BuckyWagon_01_B.s224_AgeCount_e = 0;
    }
  }

  /* RelationalOperator: '<S239>/Compare' incorporates:
   *  Constant: '<S239>/Constant'
   */
  rtb_Compare_gs = ((BuckyWagon_01_B.s224_AgeCount_e > 20U));

  /* S-Function (motohawk_sfun_fault_def): '<S224>/motohawk_fault_def12' */

  /* Set Fault Suspected Status: NoCAN_BCM_430 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(25, rtb_Compare_gs);
    UpdateFault(25);
  }

  /* Logic: '<S224>/Logical Operator1' incorporates:
   *  Logic: '<S224>/Logical Operator'
   *  S-Function (motohawk_sfun_fault_status): '<S224>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S224>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S224>/motohawk_fault_status2'
   */
  rtb_LogicalOperator1_jo = !(IsFaultActive(23) || IsFaultActive(24) ||
    IsFaultActive(25));

  /* S-Function (motohawk_sfun_read_canmsg): '<S224>/Read CAN Message5' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_2910p0004;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_2910p0004,
      &messageObj);
    if ((BuckyWagon_01_B.s224_AgeCount_k + 1) > BuckyWagon_01_B.s224_AgeCount_k)
      BuckyWagon_01_B.s224_AgeCount_k++;
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
      BuckyWagon_01_B.s224_bcm_cell_overvolt = (real_T) tmp0;
      BuckyWagon_01_B.s224_bcm_cell_undervolt = (boolean_T) tmp1;
      BuckyWagon_01_B.s224_bcm_chg_buf = ((real_T) tmp2) / ((real_T) 2);
      BuckyWagon_01_B.s224_bcm_chg_max = ((real_T) tmp3) / ((real_T) 4);
      BuckyWagon_01_B.s224_bcm_dis_buf = ((real_T) tmp4) / ((real_T) 2);
      BuckyWagon_01_B.s224_bcm_dis_max = ((real_T) tmp5) / ((real_T) 4);
      BuckyWagon_01_B.s224_bcm_t_coolant = (((real_T) tmp6) / ((real_T) 2)) +
        ((real_T) -40);
      BuckyWagon_01_B.s224_AgeCount_k = 0;
    }
  }

  /* RelationalOperator: '<S238>/Compare' incorporates:
   *  Constant: '<S238>/Constant'
   */
  rtb_Compare_i = ((BuckyWagon_01_B.s224_AgeCount_k > 20U));

  /* S-Function (motohawk_sfun_fault_def): '<S224>/motohawk_fault_def11' */

  /* Set Fault Suspected Status: NoCAN_BCM_420 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(24, rtb_Compare_i);
    UpdateFault(24);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S224>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: High_Cell_Voltage_Shutdown */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(12, BuckyWagon_01_B.s224_bcm_cell_undervolt);
    UpdateFault(12);
  }

  /* If: '<S242>/If' incorporates:
   *  Inport: '<S249>/In1'
   *  Inport: '<S250>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S242>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S242>/override_enable'
   */
  if ((bcm_cell_overvolt_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S242>/NewValue' incorporates:
     *  ActionPort: '<S249>/Action Port'
     */
    BuckyWagon_01_B.s242_Merge = (bcm_cell_overvolt_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S249>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(62);
    }

    /* End of Outputs for SubSystem: '<S242>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S242>/OldValue' incorporates:
     *  ActionPort: '<S250>/Action Port'
     */
    BuckyWagon_01_B.s242_Merge = BuckyWagon_01_B.s224_bcm_cell_overvolt;

    /* S-Function (motohawk_sfun_code_cover): '<S250>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(63);
    }

    /* End of Outputs for SubSystem: '<S242>/OldValue' */
  }

  /* End of If: '<S242>/If' */

  /* End of Outputs for SubSystem: '<S12>/A123 Battery Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S228>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3589p0004;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3589p0004,
      &messageObj);
    if ((BuckyWagon_01_B.s228_AgeCount + 1) > BuckyWagon_01_B.s228_AgeCount)
      BuckyWagon_01_B.s228_AgeCount++;
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
      BuckyWagon_01_B.s228_InputVoltage = ((real_T) tmp0) * ((real_T) 2);
      BuckyWagon_01_B.s228_OutputVoltage = ((real_T) tmp1) * ((real_T) 2);
      BuckyWagon_01_B.s228_InputCurrentLimitMax = ((real_T) tmp2) / ((real_T) 2);
      BuckyWagon_01_B.s228_InputCurrent = ((real_T) tmp3) / ((real_T) 2);
      BuckyWagon_01_B.s228_OutputCurrent = ((real_T) tmp4) / ((real_T) 2);
      BuckyWagon_01_B.s228_Eaton_HV_Charger_Temperature = (((real_T) tmp5) /
        ((real_T) 2)) + ((real_T) -40);
      BuckyWagon_01_B.s228_IgnitionStatus = (real_T) tmp6;
      BuckyWagon_01_B.s228_ChargerState = (real_T) tmp7;
      BuckyWagon_01_B.s228_FaultSeverityIndicator = (real_T) tmp8;
      BuckyWagon_01_B.s228_MessageCounter = (real_T) tmp9;
      BuckyWagon_01_B.s228_MessageChecksum = (real_T) tmp10;
      BuckyWagon_01_B.s228_AgeCount = 0;
    }
  }

  /* If: '<S308>/If' incorporates:
   *  Inport: '<S326>/In1'
   *  Inport: '<S327>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S308>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S308>/override_enable'
   */
  if ((InputVoltage_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S308>/NewValue' incorporates:
     *  ActionPort: '<S326>/Action Port'
     */
    rtb_Merge_k = (InputVoltage_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S326>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(112);
    }

    /* End of Outputs for SubSystem: '<S308>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S308>/OldValue' incorporates:
     *  ActionPort: '<S327>/Action Port'
     */
    rtb_Merge_k = BuckyWagon_01_B.s228_InputVoltage;

    /* S-Function (motohawk_sfun_code_cover): '<S327>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(113);
    }

    /* End of Outputs for SubSystem: '<S308>/OldValue' */
  }

  /* End of If: '<S308>/If' */

  /* RelationalOperator: '<S299>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S228>/motohawk_calibration'
   */
  rtb_RelationalOperator_k = (rtb_Merge_k > (PluggedInMainsThesEaton_DataStore()));

  /* Stateflow: '<S299>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S228>/motohawk_calibration1'
   */

  /* Gateway: Foreground/Sensors/Eaton HV Charger/PluggedInDetect/Chart */
  /* During: Foreground/Sensors/Eaton HV Charger/PluggedInDetect/Chart */
  if (BuckyWagon_01_DWork.s309_is_active_c32_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Sensors/Eaton HV Charger/PluggedInDetect/Chart */
    BuckyWagon_01_DWork.s309_is_active_c32_BuckyWagon_01 = 1U;

    /* Transition: '<S309>:5' */
    BuckyWagon_01_DWork.s309_is_c32_BuckyWagon_01 = BuckyWagon_01_IN_Off_n;

    /* Entry 'Off': '<S309>:1' */
    BuckyWagon_01_B.s309_pluggedIn = FALSE;
  } else {
    switch (BuckyWagon_01_DWork.s309_is_c32_BuckyWagon_01) {
     case BuckyWagon_01_IN_CountDown:
      /* During 'CountDown': '<S309>:3' */
      if (BuckyWagon_01_DWork.s309_timer <= 0) {
        /* Transition: '<S309>:9' */
        BuckyWagon_01_DWork.s309_is_c32_BuckyWagon_01 = BuckyWagon_01_IN_Off_n;

        /* Entry 'Off': '<S309>:1' */
        BuckyWagon_01_B.s309_pluggedIn = FALSE;
      } else if (rtb_RelationalOperator_k) {
        /* Transition: '<S309>:8' */
        BuckyWagon_01_DWork.s309_is_c32_BuckyWagon_01 = BuckyWagon_01_IN_countUp;
      } else {
        BuckyWagon_01_DWork.s309_timer = (int16_T)
          (BuckyWagon_01_DWork.s309_timer - 1);
      }
      break;

     case BuckyWagon_01_IN_Off_n:
      /* During 'Off': '<S309>:1' */
      if (rtb_RelationalOperator_k) {
        /* Transition: '<S309>:6' */
        BuckyWagon_01_DWork.s309_is_c32_BuckyWagon_01 = BuckyWagon_01_IN_countUp;
      }
      break;

     case BuckyWagon_01_IN_On:
      /* During 'On': '<S309>:4' */
      if (!rtb_RelationalOperator_k) {
        /* Transition: '<S309>:10' */
        BuckyWagon_01_DWork.s309_is_c32_BuckyWagon_01 =
          BuckyWagon_01_IN_CountDown;
      }
      break;

     case BuckyWagon_01_IN_countUp:
      /* During 'countUp': '<S309>:2' */
      if (!rtb_RelationalOperator_k) {
        /* Transition: '<S309>:7' */
        BuckyWagon_01_DWork.s309_is_c32_BuckyWagon_01 =
          BuckyWagon_01_IN_CountDown;
      } else if ((real_T)BuckyWagon_01_DWork.s309_timer >=
                 (PluggedInHistTimeeaton_DataStore())) {
        /* Transition: '<S309>:11' */
        BuckyWagon_01_DWork.s309_is_c32_BuckyWagon_01 = BuckyWagon_01_IN_On;

        /* Entry 'On': '<S309>:4' */
        BuckyWagon_01_B.s309_pluggedIn = TRUE;
      } else {
        BuckyWagon_01_DWork.s309_timer = (int16_T)
          (BuckyWagon_01_DWork.s309_timer + 1);
      }
      break;

     default:
      /* Transition: '<S309>:5' */
      BuckyWagon_01_DWork.s309_is_c32_BuckyWagon_01 = BuckyWagon_01_IN_Off_n;

      /* Entry 'Off': '<S309>:1' */
      BuckyWagon_01_B.s309_pluggedIn = FALSE;
      break;
    }
  }

  /* End of Stateflow: '<S299>/Chart' */

  /* Outputs for Atomic SubSystem: '<S12>/Eaton Motor Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S229>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3675p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3675p0001,
      &messageObj);
    if ((BuckyWagon_01_B.s229_AgeCount + 1) > BuckyWagon_01_B.s229_AgeCount)
      BuckyWagon_01_B.s229_AgeCount++;
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
      BuckyWagon_01_B.s229_Fault_Severity_Indicator = (real_T) tmp0;
      BuckyWagon_01_B.s229_Message_Checksum = (real_T) tmp1;
      BuckyWagon_01_B.s229_Message_Counter = (real_T) tmp2;
      BuckyWagon_01_B.s229_Motor_Control_State = (real_T) tmp3;
      BuckyWagon_01_B.s229_Motor_Speed = (((real_T) tmp4) / ((real_T) 4)) +
        ((real_T) -8000);
      BuckyWagon_01_B.s229_Motor_Torque = (((real_T) tmp5) / ((real_T) 10)) +
        ((real_T) -3200);
      BuckyWagon_01_B.s229_Percent_Torque_Available = ((real_T) tmp6) / ((real_T)
        2);
      BuckyWagon_01_B.s229_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S328>/Compare' incorporates:
   *  Constant: '<S328>/Constant'
   */
  rtb_Compare_d = ((BuckyWagon_01_B.s229_AgeCount > 20U));

  /* S-Function (motohawk_sfun_fault_def): '<S229>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: NoCAN_EatonM_FF30 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(27, rtb_Compare_d);
    UpdateFault(27);
  }

  /* If: '<S330>/If' incorporates:
   *  Inport: '<S332>/In1'
   *  Inport: '<S333>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S330>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S330>/override_enable'
   */
  if ((Motor_Speed_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S330>/NewValue' incorporates:
     *  ActionPort: '<S332>/Action Port'
     */
    BuckyWagon_01_B.s330_Merge = (Motor_Speed_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S332>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(114);
    }

    /* End of Outputs for SubSystem: '<S330>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S330>/OldValue' incorporates:
     *  ActionPort: '<S333>/Action Port'
     */
    BuckyWagon_01_B.s330_Merge = BuckyWagon_01_B.s229_Motor_Speed;

    /* S-Function (motohawk_sfun_code_cover): '<S333>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(115);
    }

    /* End of Outputs for SubSystem: '<S330>/OldValue' */
  }

  /* End of If: '<S330>/If' */

  /* RelationalOperator: '<S229>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S229>/motohawk_calibration'
   */
  BuckyWagon_01_B.s229_RelationalOperator =
    ((BuckyWagon_01_B.s229_Motor_Control_State > (Drive_Ready_DataStore())));

  /* If: '<S331>/If' incorporates:
   *  Inport: '<S334>/In1'
   *  Inport: '<S335>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S331>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S331>/override_enable'
   */
  if ((Motor_Torque_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S331>/NewValue' incorporates:
     *  ActionPort: '<S334>/Action Port'
     */
    BuckyWagon_01_B.s331_Merge = (Motor_Torque_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S334>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(116);
    }

    /* End of Outputs for SubSystem: '<S331>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S331>/OldValue' incorporates:
     *  ActionPort: '<S335>/Action Port'
     */
    BuckyWagon_01_B.s331_Merge = BuckyWagon_01_B.s229_Motor_Torque;

    /* S-Function (motohawk_sfun_code_cover): '<S335>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton Motor Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(117);
    }

    /* End of Outputs for SubSystem: '<S331>/OldValue' */
  }

  /* End of If: '<S331>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S229>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3674p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3674p0001,
      &messageObj);
    if ((BuckyWagon_01_B.s229_AgeCount_g + 1) > BuckyWagon_01_B.s229_AgeCount_g)
      BuckyWagon_01_B.s229_AgeCount_g++;
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
      BuckyWagon_01_B.s229_DC_Bus_Current = (((real_T) tmp0) / ((real_T) 5)) +
        ((real_T) -400);
      BuckyWagon_01_B.s229_DC_Bus_Voltage = ((real_T) tmp1) / ((real_T) 5);
      BuckyWagon_01_B.s229_Inverter_Temperature = ((real_T) tmp2) + ((real_T)
        -40);
      BuckyWagon_01_B.s229_Motor_Temperature = ((real_T) tmp3) + ((real_T) -40);
      BuckyWagon_01_B.s229_Phase_Current = (((real_T) tmp4) / ((real_T) 5)) +
        ((real_T) -400);
      BuckyWagon_01_B.s229_Phase_phase_voltage = ((real_T) tmp5) / ((real_T) 5);
      BuckyWagon_01_B.s229_AgeCount_g = 0;
    }
  }

  /* RelationalOperator: '<S329>/Compare' incorporates:
   *  Constant: '<S329>/Constant'
   */
  rtb_Compare_k = ((BuckyWagon_01_B.s229_AgeCount_g > 200U));

  /* S-Function (motohawk_sfun_fault_def): '<S229>/motohawk_fault_def13' */

  /* Set Fault Suspected Status: NoCAN_EatonM_FF31 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(28, rtb_Compare_k);
    UpdateFault(28);
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S229>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3676p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3676p0001,
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
      BuckyWagon_01_B.s229_Isolation_Resistance = ((real_T) tmp0) * ((real_T) 8);
      BuckyWagon_01_B.s229_Maximum_Rated_Power = ((real_T) tmp1) * ((real_T) 5);
      BuckyWagon_01_B.s229_Maximum_Rated_Speed = (((real_T) tmp2) / ((real_T) 4))
        + ((real_T) -8000);
      BuckyWagon_01_B.s229_Maximum_Rated_Torqe = (((real_T) tmp3) / ((real_T) 10))
        + ((real_T) -3200);
    }
  }

  /* End of Outputs for SubSystem: '<S12>/Eaton Motor Inputs' */

  /* Outputs for Atomic SubSystem: '<S9>/HV Controller' */

  /* Logic: '<S121>/Logical Operator2' */
  rtb_LogicalOperator2_e = !BuckyWagon_01_B.s309_pluggedIn;

  /* Logic: '<S121>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S121>/motohawk_data_read'
   */
  rtb_RelationalOperator_k = (Shutdown_Req_DataStore() && rtb_LogicalOperator2_e);

  /* If: '<S161>/If' incorporates:
   *  Inport: '<S168>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S161>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S161>/override_enable'
   */
  if ((Contactor_Shutdown_Test_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S161>/NewValue' incorporates:
     *  ActionPort: '<S168>/Action Port'
     */
    rtb_RelationalOperator_k = (Contactor_Shutdown_Test_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S168>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(52);
    }

    /* End of Outputs for SubSystem: '<S161>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S161>/OldValue' incorporates:
     *  ActionPort: '<S169>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S169>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(53);
    }

    /* End of Outputs for SubSystem: '<S161>/OldValue' */
  }

  /* End of If: '<S161>/If' */

  /* Logic: '<S121>/Logical Operator12' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S121>/motohawk_fault_action'
   */
  rtb_LogicalOperator12 = (rtb_RelationalOperator_k || GetFaultActionStatus(5));

  /* S-Function Block: <S165>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s165_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_h = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S165>/Switch' incorporates:
   *  Constant: '<S165>/Constant'
   *  Logic: '<S159>/Logical Operator5'
   *  S-Function (motohawk_sfun_data_read): '<S165>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S165>/motohawk_delta_time'
   *  Sum: '<S165>/Sum'
   */
  if (!rtb_LogicalOperator12) {
    rtb_Merge_k = rtb_motohawk_delta_time_h + Solectria_Enable_timer_DataStore();
  } else {
    rtb_Merge_k = 0.0;
  }

  /* End of Switch: '<S165>/Switch' */
  /* Logic: '<S159>/Logical Operator4' incorporates:
   *  Logic: '<S159>/Logical Operator3'
   *  RelationalOperator: '<S159>/Relational Operator1'
   *  RelationalOperator: '<S160>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S159>/motohawk_calibration1'
   */
  rtb_LogicalOperator4_f = ((!rtb_LogicalOperator12) && (rtb_Merge_k >=
    (Load_Enable_Delay_DataStore())) && BuckyWagon_01_B.s240_Merge);

  /* S-Function (motohawk_sfun_data_write): '<S121>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Batt_Load_Enable */
  {
    Batt_Load_Enable_DataStore() = rtb_LogicalOperator4_f;
  }

  /* RelationalOperator: '<S158>/Compare' incorporates:
   *  Constant: '<S158>/Constant'
   */
  rtb_RelationalOperator_k = (BuckyWagon_01_B.s244_Merge == 1.0);

  /* UnitDelay: '<S166>/Unit Delay' */
  rtb_UnitDelay_if = BuckyWagon_01_DWork.s166_UnitDelay_DSTATE;

  /* Switch: '<S163>/Switch' incorporates:
   *  Constant: '<S163>/Constant1'
   *  DataTypeConversion: '<S163>/Data Type Conversion'
   *  Sum: '<S163>/Sum'
   *  UnitDelay: '<S163>/Unit Delay'
   */
  if (rtb_RelationalOperator_k) {
    rtb_to65535_c = BuckyWagon_01_DWork.s163_UnitDelay_DSTATE + 1.0;
  } else {
    rtb_to65535_c = 0.0;
  }

  /* End of Switch: '<S163>/Switch' */

  /* Logic: '<S163>/Logical Operator' */
  rtb_LogicalOperator_bd = !rtb_RelationalOperator_k;

  /* Switch: '<S163>/Switch1' incorporates:
   *  Constant: '<S163>/Constant3'
   *  DataTypeConversion: '<S163>/Data Type Conversion1'
   *  Sum: '<S163>/Sum1'
   *  UnitDelay: '<S163>/Unit Delay1'
   */
  if (rtb_LogicalOperator_bd) {
    rtb_to65535_d = BuckyWagon_01_DWork.s163_UnitDelay1_DSTATE + 1.0;
  } else {
    rtb_to65535_d = 0.0;
  }

  /* End of Switch: '<S163>/Switch1' */

  /* Logic: '<S167>/Logical Operator2' incorporates:
   *  Constant: '<S163>/off delay'
   *  Constant: '<S163>/on delay'
   *  Logic: '<S163>/Logical Operator1'
   *  Logic: '<S163>/Logical Operator2'
   *  Logic: '<S167>/Logical Operator'
   *  Logic: '<S167>/Logical Operator1'
   *  RelationalOperator: '<S163>/Relational Operator1'
   *  RelationalOperator: '<S163>/Relational Operator2'
   *  UnitDelay: '<S167>/Unit Delay'
   */
  rtb_LogicalOperator2_o = ((BuckyWagon_01_DWork.s167_UnitDelay_DSTATE ||
    (rtb_RelationalOperator_k && (rtb_to65535_c >= 10.0))) &&
    (!(rtb_LogicalOperator_bd && (rtb_to65535_d >= 0.0))));

  /* S-Function Block: <S164>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s164_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_oi = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S164>/Switch' incorporates:
   *  Constant: '<S164>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S164>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S164>/motohawk_delta_time'
   *  Sum: '<S164>/Sum'
   */
  if (rtb_LogicalOperator12) {
    rtb_Switch_h = rtb_motohawk_delta_time_oi +
      Contactor_Disable_Timer_DataStore();
  } else {
    rtb_Switch_h = 0.0;
  }

  /* End of Switch: '<S164>/Switch' */
  /* Logic: '<S159>/Logical Operator2' incorporates:
   *  Logic: '<S159>/Logical Operator6'
   *  RelationalOperator: '<S159>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S159>/motohawk_calibration'
   */
  rtb_RelationalOperator_k = (rtb_LogicalOperator2_o && (!(rtb_Switch_h >=
    (Contactor_Disable_Delay_DataStore()))));

  /* Switch: '<S162>/Switch' incorporates:
   *  Constant: '<S162>/Constant1'
   *  DataTypeConversion: '<S162>/Data Type Conversion'
   *  Sum: '<S162>/Sum'
   *  UnitDelay: '<S162>/Unit Delay'
   */
  if (rtb_RelationalOperator_k) {
    rtb_to65535_b = BuckyWagon_01_DWork.s162_UnitDelay_DSTATE + 1.0;
  } else {
    rtb_to65535_b = 0.0;
  }

  /* End of Switch: '<S162>/Switch' */

  /* Logic: '<S162>/Logical Operator' */
  rtb_LogicalOperator_bd = !rtb_RelationalOperator_k;

  /* Switch: '<S162>/Switch1' incorporates:
   *  Constant: '<S162>/Constant3'
   *  DataTypeConversion: '<S162>/Data Type Conversion1'
   *  Sum: '<S162>/Sum1'
   *  UnitDelay: '<S162>/Unit Delay1'
   */
  if (rtb_LogicalOperator_bd) {
    rtb_to65535_dx = BuckyWagon_01_DWork.s162_UnitDelay1_DSTATE + 1.0;
  } else {
    rtb_to65535_dx = 0.0;
  }

  /* End of Switch: '<S162>/Switch1' */

  /* Logic: '<S166>/Logical Operator2' incorporates:
   *  Constant: '<S162>/off delay'
   *  Constant: '<S162>/on delay'
   *  Logic: '<S162>/Logical Operator1'
   *  Logic: '<S162>/Logical Operator2'
   *  Logic: '<S166>/Logical Operator'
   *  Logic: '<S166>/Logical Operator1'
   *  RelationalOperator: '<S162>/Relational Operator1'
   *  RelationalOperator: '<S162>/Relational Operator2'
   */
  rtb_LogicalOperator2_j = ((rtb_UnitDelay_if || (rtb_RelationalOperator_k &&
    (rtb_to65535_b >= 0.0))) && (!(rtb_LogicalOperator_bd && (rtb_to65535_dx >=
    10.0))));

  /* S-Function (motohawk_sfun_data_write): '<S159>/motohawk_data_write' */
  /* Write to Data Storage as scalar: MPRD_KeepAlive */
  {
    MPRD_KeepAlive_DataStore() = rtb_LogicalOperator2_j;
  }

  /* Saturate: '<S164>/Saturation' */
  rtb_Saturation_p = rtb_Switch_h >= 86400.0 ? 86400.0 : rtb_Switch_h <= 0.0 ?
    0.0 : rtb_Switch_h;

  /* S-Function (motohawk_sfun_data_write): '<S164>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Contactor_Disable_Timer */
  {
    Contactor_Disable_Timer_DataStore() = rtb_Saturation_p;
  }

  /* Saturate: '<S165>/Saturation' */
  rtb_Saturation_c = rtb_Merge_k >= 86400.0 ? 86400.0 : rtb_Merge_k <= 0.0 ? 0.0
    : rtb_Merge_k;

  /* S-Function (motohawk_sfun_data_write): '<S165>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Solectria_Enable_timer */
  {
    Solectria_Enable_timer_DataStore() = rtb_Saturation_c;
  }

  /* Logic: '<S121>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration8'
   */
  BuckyWagon_01_B.s121_LogicalOperator = (((Allow_MainContactor_Close_DataStore())
    && rtb_RelationalOperator_k));

  /* Logic: '<S121>/Logical Operator3' */
  rtb_LogicalOperator2_e = (rtb_LogicalOperator4_f && rtb_LogicalOperator2_e);

  /* Logic: '<S121>/Logical Operator4' */
  rtb_UnitDelay_if = (BuckyWagon_01_B.s229_RelationalOperator &&
                      rtb_LogicalOperator2_e);

  /* Logic: '<S121>/Logical Operator5' */
  rtb_LogicalOperator5_k = (rtb_LogicalOperator4_f || BuckyWagon_01_B.s241_Merge);

  /* Update for UnitDelay: '<S166>/Unit Delay' */
  BuckyWagon_01_DWork.s166_UnitDelay_DSTATE = rtb_LogicalOperator2_j;

  /* Update for UnitDelay: '<S167>/Unit Delay' */
  BuckyWagon_01_DWork.s167_UnitDelay_DSTATE = rtb_LogicalOperator2_o;

  /* Update for UnitDelay: '<S163>/Unit Delay' */
  BuckyWagon_01_DWork.s163_UnitDelay_DSTATE = rtb_to65535_c;

  /* Update for UnitDelay: '<S163>/Unit Delay1' */
  BuckyWagon_01_DWork.s163_UnitDelay1_DSTATE = rtb_to65535_d;

  /* Update for UnitDelay: '<S162>/Unit Delay' */
  BuckyWagon_01_DWork.s162_UnitDelay_DSTATE = rtb_to65535_b;

  /* Update for UnitDelay: '<S162>/Unit Delay1' */
  BuckyWagon_01_DWork.s162_UnitDelay1_DSTATE = rtb_to65535_dx;

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
  rtb_RelationalOperator_k = rtb_E_stop_switch ^ (E_Stop_Invert_DataStore());

  /* If: '<S236>/If' incorporates:
   *  Inport: '<S364>/In1'
   *  Inport: '<S365>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S236>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S236>/override_enable'
   */
  if ((Estop_switch_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S236>/NewValue' incorporates:
     *  ActionPort: '<S364>/Action Port'
     */
    BuckyWagon_01_B.s236_Merge = (Estop_switch_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S364>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(126);
    }

    /* End of Outputs for SubSystem: '<S236>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S236>/OldValue' incorporates:
     *  ActionPort: '<S365>/Action Port'
     */
    BuckyWagon_01_B.s236_Merge = rtb_RelationalOperator_k;

    /* S-Function (motohawk_sfun_code_cover): '<S365>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(127);
    }

    /* End of Outputs for SubSystem: '<S236>/OldValue' */
  }

  /* End of If: '<S236>/If' */

  /* Logic: '<S9>/Logical Operator' incorporates:
   *  Logic: '<S9>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_action): '<S9>/motohawk_fault_action'
   */
  rtb_BelowLoTarget = !(BuckyWagon_01_B.s309_pluggedIn ||
                        BuckyWagon_01_B.s236_Merge || GetFaultActionStatus(3));

  /* Product: '<S235>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S235>/motohawk_calibration'
   */
  rtb_Merge_k = BuckyWagon_01_B.s330_Merge * (OverallRatio_DataStore());

  /* If: '<S361>/If' incorporates:
   *  Inport: '<S362>/In1'
   *  Inport: '<S363>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S361>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S361>/override_enable'
   */
  if ((Vehicle_Speed_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S361>/NewValue' incorporates:
     *  ActionPort: '<S362>/Action Port'
     */
    BuckyWagon_01_B.s361_Merge = (Vehicle_Speed_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S362>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(124);
    }

    /* End of Outputs for SubSystem: '<S361>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S361>/OldValue' incorporates:
     *  ActionPort: '<S363>/Action Port'
     */
    BuckyWagon_01_B.s361_Merge = rtb_Merge_k;

    /* S-Function (motohawk_sfun_code_cover): '<S363>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(125);
    }

    /* End of Outputs for SubSystem: '<S361>/OldValue' */
  }

  /* End of If: '<S361>/If' */

  /* Abs: '<S235>/Abs' */
  BuckyWagon_01_B.s235_Abs = fabs(BuckyWagon_01_B.s361_Merge);

  /* S-Function Block: <S12>/motohawk_ain2 Resource: Reverse_Switch_Pin */
  {
    extern NativeError_S Reverse_Switch_Pin_AnalogInput_Get(uint16_T *adc,
      uint16_T *status);
    Reverse_Switch_Pin_AnalogInput_Get(&rtb_motohawk_ain2, NULL);
  }

  /* DataTypeConversion: '<S225>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S12>/motohawk_ain2'
   */
  BuckyWagon_01_B.s225_DataTypeConversion = (real_T)rtb_motohawk_ain2;

  /* RelationalOperator: '<S225>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S225>/SwitchPoint'
   */
  rtb_RelationalOperator_k = (BuckyWagon_01_B.s225_DataTypeConversion >
    (Reverse_SwitchPt_DataStore()));

  /* Logic: '<S225>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S225>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelationalOperator_k ^= (Reverse_Polarity_DataStore());

  /* If: '<S255>/If' incorporates:
   *  Inport: '<S256>/In1'
   *  Inport: '<S257>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S255>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S255>/override_enable'
   */
  if ((Reverse_Switch_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S255>/NewValue' incorporates:
     *  ActionPort: '<S256>/Action Port'
     */
    BuckyWagon_01_B.s255_Merge = (Reverse_Switch_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S256>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(68);
    }

    /* End of Outputs for SubSystem: '<S255>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S255>/OldValue' incorporates:
     *  ActionPort: '<S257>/Action Port'
     */
    BuckyWagon_01_B.s255_Merge = rtb_RelationalOperator_k;

    /* S-Function (motohawk_sfun_code_cover): '<S257>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(69);
    }

    /* End of Outputs for SubSystem: '<S255>/OldValue' */
  }

  /* End of If: '<S255>/If' */

  /* S-Function Block: <S336>/motohawk_delta_time */
  rtb_DataTypeConversion_b = 0.005;

  /* Product: '<S336>/Product' incorporates:
   *  MinMax: '<S336>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S336>/motohawk_calibration'
   */
  rtb_DataTypeConversion_b /= (rtb_DataTypeConversion_b >=
    (Accel_FilterConst_DataStore())) || rtIsNaN((Accel_FilterConst_DataStore()))
    ? rtb_DataTypeConversion_b : (Accel_FilterConst_DataStore());

  /* Logic: '<S230>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S230>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S230>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_fj = (IsFaultActive(1) || IsFaultActive(2));

  /* Logic: '<S230>/Logical Operator6' */
  rtb_RelationalOperator_k = !rtb_RelationalOperator_fj;

  /* Logic: '<S230>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S230>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S230>/motohawk_fault_status3'
   */
  rtb_LogicalOperator_bd = (IsFaultSuspected(1) || IsFaultSuspected(2));

  /* S-Function Block: <S12>/motohawk_ain Resource: Accel_Pedal_Pin */
  {
    extern NativeError_S Accel_Pedal_Pin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    Accel_Pedal_Pin_AnalogInput_Get(&BuckyWagon_01_B.s12_motohawk_ain, NULL);
  }

  /* DataTypeConversion: '<S230>/Data Type Conversion' */
  rtb_DataTypeConversion_i = BuckyWagon_01_B.s12_motohawk_ain;

  /* Fcn: '<S230>/ZeroFullCal' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S230>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S230>/motohawk_calibration5'
   */
  rtb_DataTypeConversion_d = ((real_T)rtb_DataTypeConversion_i -
    (Accel_Zero_DataStore())) / ((Accel_Full_DataStore()) -
    (Accel_Zero_DataStore()));

  /* Saturate: '<S230>/Saturation' */
  BuckyWagon_01_B.s230_Saturation = rtb_DataTypeConversion_d >= 1.0 ? 1.0 :
    rtb_DataTypeConversion_d <= 0.0 ? 0.0 : rtb_DataTypeConversion_d;

  /* UnitDelay: '<S230>/Unit Delay1' */
  rtb_UnitDelay1_k = BuckyWagon_01_DWork.s230_UnitDelay1_DSTATE;

  /* If: '<S230>/If' incorporates:
   *  Logic: '<S230>/Logical Operator5'
   */
  if (rtb_RelationalOperator_k && rtb_LogicalOperator_bd) {
    /* Outputs for IfAction SubSystem: '<S230>/If Action Subsystem' incorporates:
     *  ActionPort: '<S337>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(rtb_UnitDelay1_k, &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S230>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_fj) {
    /* Outputs for IfAction SubSystem: '<S230>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S338>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem((Accel_DfltValue_DataStore()), &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S230>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S230>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S339>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(BuckyWagon_01_B.s230_Saturation,
      &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S230>/If Action Subsystem2' */
  }

  /* End of If: '<S230>/If' */

  /* Sum: '<S341>/Sum1' incorporates:
   *  Constant: '<S341>/Constant'
   *  Product: '<S341>/Product'
   *  Product: '<S341>/Product1'
   *  Sum: '<S341>/Sum'
   *  UnitDelay: '<S341>/Unit Delay'
   */
  rtb_Sum1 = (1.0 - rtb_DataTypeConversion_b) *
    BuckyWagon_01_DWork.s341_UnitDelay_DSTATE + rtb_Merge_c *
    rtb_DataTypeConversion_b;

  /* If: '<S340>/If' incorporates:
   *  Inport: '<S342>/In1'
   *  Inport: '<S343>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S340>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S340>/override_enable'
   */
  if ((Accel_Pedal_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S340>/NewValue' incorporates:
     *  ActionPort: '<S342>/Action Port'
     */
    BuckyWagon_01_B.s340_Merge = (Accel_Pedal_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S342>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(118);
    }

    /* End of Outputs for SubSystem: '<S340>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S340>/OldValue' incorporates:
     *  ActionPort: '<S343>/Action Port'
     */
    BuckyWagon_01_B.s340_Merge = rtb_Sum1;

    /* S-Function (motohawk_sfun_code_cover): '<S343>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(119);
    }

    /* End of Outputs for SubSystem: '<S340>/OldValue' */
  }

  /* End of If: '<S340>/If' */

  /* Outputs for Atomic SubSystem: '<S9>/Reverse' */

  /* Abs: '<S122>/Abs' */
  BuckyWagon_01_B.s122_Abs = fabs(BuckyWagon_01_B.s235_Abs);

  /* Stateflow: '<S122>/Chart' */

  /* Gateway: Foreground/Control Strategy/Reverse/Chart */
  BuckyWagon_01_DWork.s170_sfEvent = CALL_EVENT;
  BuckyWagon_01_c1_BuckyWagon_01();

  /* If: '<S171>/If' incorporates:
   *  Inport: '<S172>/In1'
   *  Inport: '<S173>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S171>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S171>/override_enable'
   */
  if ((In_Reverse_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S171>/NewValue' incorporates:
     *  ActionPort: '<S172>/Action Port'
     */
    BuckyWagon_01_B.s171_Merge = (In_Reverse_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S172>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(54);
    }

    /* End of Outputs for SubSystem: '<S171>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S171>/OldValue' incorporates:
     *  ActionPort: '<S173>/Action Port'
     */
    BuckyWagon_01_B.s171_Merge = BuckyWagon_01_B.s170_inReverse;

    /* S-Function (motohawk_sfun_code_cover): '<S173>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(55);
    }

    /* End of Outputs for SubSystem: '<S171>/OldValue' */
  }

  /* End of If: '<S171>/If' */

  /* End of Outputs for SubSystem: '<S9>/Reverse' */
  /* S-Function Block: <S352>/motohawk_delta_time */
  rtb_DataTypeConversion_d = 0.005;

  /* Product: '<S352>/Product' incorporates:
   *  MinMax: '<S352>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S352>/motohawk_calibration'
   */
  rtb_DataTypeConversion_d /= (rtb_DataTypeConversion_d >=
    (Brake_FilterConst_DataStore())) || rtIsNaN((Brake_FilterConst_DataStore()))
    ? rtb_DataTypeConversion_d : (Brake_FilterConst_DataStore());

  /* Logic: '<S232>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S232>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S232>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_fj = (IsFaultActive(5) || IsFaultActive(6));

  /* Logic: '<S232>/Logical Operator6' */
  rtb_RelationalOperator_k = !rtb_RelationalOperator_fj;

  /* Logic: '<S232>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S232>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S232>/motohawk_fault_status3'
   */
  rtb_LogicalOperator_bd = (IsFaultSuspected(5) || IsFaultSuspected(6));

  /* S-Function Block: <S12>/motohawk_ain1 Resource: Brake_Pedal_Pin */
  {
    extern NativeError_S Brake_Pedal_Pin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    Brake_Pedal_Pin_AnalogInput_Get(&BuckyWagon_01_B.s12_motohawk_ain1, NULL);
  }

  /* DataTypeConversion: '<S232>/Data Type Conversion' */
  rtb_DataTypeConversion_b = (real_T)BuckyWagon_01_B.s12_motohawk_ain1;

  /* Fcn: '<S232>/ZeroFullCal' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S232>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S232>/motohawk_calibration5'
   */
  rtb_Gain7 = (rtb_DataTypeConversion_b - (Brake_Zero_DataStore())) /
    ((Brake_Full_DataStore()) - (Brake_Zero_DataStore()));

  /* Saturate: '<S232>/Saturation' */
  BuckyWagon_01_B.s232_Saturation = rtb_Gain7 >= 1.0 ? 1.0 : rtb_Gain7 <= 0.0 ?
    0.0 : rtb_Gain7;

  /* UnitDelay: '<S232>/Unit Delay1' */
  rtb_UnitDelay1_b = BuckyWagon_01_DWork.s232_UnitDelay1_DSTATE;

  /* If: '<S232>/If' incorporates:
   *  Logic: '<S232>/Logical Operator5'
   */
  if (rtb_RelationalOperator_k && rtb_LogicalOperator_bd) {
    /* Outputs for IfAction SubSystem: '<S232>/If Action Subsystem' incorporates:
     *  ActionPort: '<S353>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(rtb_UnitDelay1_b, &rtb_Merge_e);

    /* End of Outputs for SubSystem: '<S232>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_fj) {
    /* Outputs for IfAction SubSystem: '<S232>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S354>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem((Brake_DfltValue_DataStore()), &rtb_Merge_e);

    /* End of Outputs for SubSystem: '<S232>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S232>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S355>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(BuckyWagon_01_B.s232_Saturation,
      &rtb_Merge_e);

    /* End of Outputs for SubSystem: '<S232>/If Action Subsystem2' */
  }

  /* End of If: '<S232>/If' */

  /* Sum: '<S357>/Sum1' incorporates:
   *  Constant: '<S357>/Constant'
   *  Product: '<S357>/Product'
   *  Product: '<S357>/Product1'
   *  Sum: '<S357>/Sum'
   *  UnitDelay: '<S357>/Unit Delay'
   */
  rtb_Sum1_o = (1.0 - rtb_DataTypeConversion_d) *
    BuckyWagon_01_DWork.s357_UnitDelay_DSTATE + rtb_Merge_e *
    rtb_DataTypeConversion_d;

  /* If: '<S356>/If' incorporates:
   *  Inport: '<S358>/In1'
   *  Inport: '<S359>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S356>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S356>/override_enable'
   */
  if ((Brake_Pedal_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S356>/NewValue' incorporates:
     *  ActionPort: '<S358>/Action Port'
     */
    BuckyWagon_01_B.s356_Merge = (Brake_Pedal_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S358>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(122);
    }

    /* End of Outputs for SubSystem: '<S356>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S356>/OldValue' incorporates:
     *  ActionPort: '<S359>/Action Port'
     */
    BuckyWagon_01_B.s356_Merge = rtb_Sum1_o;

    /* S-Function (motohawk_sfun_code_cover): '<S359>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(123);
    }

    /* End of Outputs for SubSystem: '<S356>/OldValue' */
  }

  /* End of If: '<S356>/If' */

  /* Outputs for Atomic SubSystem: '<S9>/Drive' */

  /* RelationalOperator: '<S130>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S130>/motohawk_calibration2'
   */
  rtb_RelationalOperator_k = (BuckyWagon_01_B.s340_Merge >
    (Temp_ped_switchOver_DataStore()));

  /* S-Function Block: <S132>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s132_motohawk_delta_time_DWORK1, NULL);
    rtb_MinMax_o = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S132>/Product' incorporates:
   *  MinMax: '<S132>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration'
   */
  rtb_MinMax_o /= (rtb_MinMax_o >= (Veh_Speed_Regen_Filter_DataStore())) ||
    rtIsNaN((Veh_Speed_Regen_Filter_DataStore())) ? rtb_MinMax_o :
    (Veh_Speed_Regen_Filter_DataStore());

  /* Product: '<S135>/Product' */
  rtb_Merge_k = BuckyWagon_01_B.s330_Merge * rtb_MinMax_o;

  /* Sum: '<S135>/Sum' incorporates:
   *  Constant: '<S135>/Constant'
   */
  rtb_to65535_c = 1.0 - rtb_MinMax_o;

  /* UnitDelay: '<S135>/Unit Delay' */
  rtb_MinMax_o = BuckyWagon_01_DWork.s135_UnitDelay_DSTATE;

  /* Sum: '<S135>/Sum1' incorporates:
   *  Product: '<S135>/Product1'
   */
  rtb_Sum1_h = rtb_to65535_c * rtb_MinMax_o + rtb_Merge_k;

  /* Outputs for Atomic SubSystem: '<S130>/Regen' */

  /* S-Function Block: <S137>/motohawk_prelookup_row */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (StateOfChargePctIn_DataStore()) = BuckyWagon_01_B.s243_Merge;
    (StateOfChargePctIdx_DataStore()) = TablePrelookup_real_T
      (BuckyWagon_01_B.s243_Merge, (StateOfChargePctIdxArr_DataStore()), 4,
       (StateOfChargePctIdx_DataStore()));
    rtb_motohawk_prelookup_row = (StateOfChargePctIdx_DataStore());
  }

  /* S-Function Block: <S137>/motohawk_prelookup_col */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MotorSpdIn_DataStore()) = rtb_Sum1_h;
    (MotorSpdIdx_DataStore()) = TablePrelookup_real_T(rtb_Sum1_h,
      (MotorSpdIdxArr_DataStore()), 8, (MotorSpdIdx_DataStore()));
    rtb_motohawk_prelookup_col = (MotorSpdIdx_DataStore());
  }

  /* S-Function Block: <S137>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_Product1_n = TableInterpolation2D_real_T(rtb_motohawk_prelookup_row,
      rtb_motohawk_prelookup_col, (real_T *) ((MotoHawkTable2DMap_DataStore())),
      4, 8);
    (MotoHawkTable2D_DataStore()) = rtb_Product1_n;
  }

  /* Saturate: '<S133>/Saturation1' */
  BuckyWagon_01_B.s133_Saturation1 = rtb_Product1_n >= 1.0 ? 1.0 :
    rtb_Product1_n <= 0.0 ? 0.0 : rtb_Product1_n;

  /* Sum: '<S133>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S133>/motohawk_calibration1'
   */
  rtb_Merge_k = BuckyWagon_01_B.s356_Merge - (Regen_Start_DataStore());

  /* Product: '<S133>/Divide' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S133>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S133>/motohawk_calibration2'
   *  Sum: '<S133>/Sum1'
   */
  rtb_Product1_n = rtb_Merge_k / ((Regen_Full_DataStore()) -
    (Regen_Start_DataStore()));

  /* Product: '<S133>/Product' incorporates:
   *  Gain: '<S133>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S133>/motohawk_calibration3'
   *  Saturate: '<S133>/Saturation2'
   */
  BuckyWagon_01_B.s133_Product = (rtb_Product1_n >= 1.0 ? 1.0 : rtb_Product1_n <=
    0.0 ? 0.0 : rtb_Product1_n) * -1.0 * (Max_Regen_Tq_DataStore());

  /* Logic: '<S133>/Logical Operator2' incorporates:
   *  Logic: '<S133>/Logical Operator'
   *  Logic: '<S133>/Logical Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S133>/motohawk_calibration4'
   */
  rtb_LogicalOperator_bd = !((BuckyWagon_01_B.s171_Merge != 0.0) ||
    (!((Enable_Regen_DataStore()) != 0.0)));

  /* RelationalOperator: '<S133>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S133>/motohawk_calibration6'
   */
  rtb_LogicalOperator12 = (BuckyWagon_01_B.s235_Abs >
    (Min_Speed_Allow_Coast_NegT_DataStore()));

  /* Gain: '<S133>/Gain1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S133>/motohawk_calibration7'
   */
  rtb_Product1_n = -(Max_Coast_Tq_DataStore());

  /* Product: '<S133>/Product2' incorporates:
   *  Logic: '<S130>/Logic'
   *  RelationalOperator: '<S133>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S133>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S133>/motohawk_calibration8'
   */
  BuckyWagon_01_B.s133_Product2 = (real_T)rtb_LogicalOperator_bd *
    (Enable_Coast_Neg_Torque_DataStore()) * (real_T)rtb_LogicalOperator12 *
    rtb_Product1_n * (real_T)(BuckyWagon_01_B.s243_Merge <
    (Max_SOC_For_Coast_Tq_EN_DataStore())) * (real_T)!rtb_RelationalOperator_k;

  /* If: '<S136>/If' incorporates:
   *  Inport: '<S138>/In1'
   *  Inport: '<S139>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S136>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S136>/override_enable'
   */
  if ((Regen_SOC_Speed_Ramp_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S136>/NewValue' incorporates:
     *  ActionPort: '<S138>/Action Port'
     */
    rtb_Merge_k = (Regen_SOC_Speed_Ramp_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S138>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(46);
    }

    /* End of Outputs for SubSystem: '<S136>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S136>/OldValue' incorporates:
     *  ActionPort: '<S139>/Action Port'
     */
    rtb_Merge_k = BuckyWagon_01_B.s133_Saturation1;

    /* S-Function (motohawk_sfun_code_cover): '<S139>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(47);
    }

    /* End of Outputs for SubSystem: '<S136>/OldValue' */
  }

  /* End of If: '<S136>/If' */

  /* Product: '<S133>/Product1' */
  rtb_Product1_n = (real_T)rtb_LogicalOperator_bd * BuckyWagon_01_B.s133_Product
    * rtb_Merge_k;

  /* Switch: '<S133>/Switch' incorporates:
   *  RelationalOperator: '<S133>/Relational Operator1'
   */
  if (rtb_Product1_n <= BuckyWagon_01_B.s133_Product2) {
    rtb_Merge_k = rtb_Product1_n;
  } else {
    rtb_Merge_k = BuckyWagon_01_B.s133_Product2;
  }

  /* End of Switch: '<S133>/Switch' */
  /* End of Outputs for SubSystem: '<S130>/Regen' */

  /* Switch: '<S130>/Switch' incorporates:
   *  Product: '<S130>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S130>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S134>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S134>/motohawk_prelookup'
   */
  if (rtb_RelationalOperator_k) {
    /* S-Function Block: <S134>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (AccelPedalMapIn_DataStore()) = BuckyWagon_01_B.s340_Merge;
      (AccelPedalMapIdx_DataStore()) = TablePrelookup_real_T
        (BuckyWagon_01_B.s340_Merge, (AccelPedalMapIdxArr_DataStore()), 101,
         (AccelPedalMapIdx_DataStore()));
      rtb_motohawk_prelookup_o = (AccelPedalMapIdx_DataStore());
    }

    /* S-Function Block: <S134>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_o, (real_T *) ((AccelPedalMapTbl_DataStore())),
         101);
      (AccelPedalMap_DataStore()) = rtb_motohawk_interpolation_1d;
    }

    rtb_Merge_k = (Max_Slect_Tq_drive_DataStore()) *
      rtb_motohawk_interpolation_1d;
  }

  /* End of Switch: '<S130>/Switch' */
  /* S-Function Block: <S131>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (AccelPedalPreIn_DataStore()) = BuckyWagon_01_B.s340_Merge;
    (AccelPedalPreIdx_DataStore()) = TablePrelookup_real_T
      (BuckyWagon_01_B.s340_Merge, (AccelPedalPreIdxArr_DataStore()), 17,
       (AccelPedalPreIdx_DataStore()));
    rtb_motohawk_prelookup1 = (AccelPedalPreIdx_DataStore());
  }

  /* S-Function Block: <S131>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VehicleSpeedPreIn_DataStore()) = BuckyWagon_01_B.s235_Abs;
    (VehicleSpeedPreIdx_DataStore()) = TablePrelookup_real_T
      (BuckyWagon_01_B.s235_Abs, (VehicleSpeedPreIdxArr_DataStore()), 17,
       (VehicleSpeedPreIdx_DataStore()));
    rtb_motohawk_prelookup = (VehicleSpeedPreIdx_DataStore());
  }

  /* S-Function Block: <S140>/motohawk_interpolation_2d1 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BuckyWagon_01_B.s140_motohawk_interpolation_2d1 =
      TableInterpolation2D_real_T(rtb_motohawk_prelookup1,
      rtb_motohawk_prelookup, (real_T *) ((DriverDemandBaseReverseMap_DataStore())),
      17, 17);
    (DriverDemandBaseReverse_DataStore()) =
      BuckyWagon_01_B.s140_motohawk_interpolation_2d1;
  }

  /* S-Function Block: <S140>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BuckyWagon_01_B.s140_motohawk_interpolation_2d = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup1, rtb_motohawk_prelookup, (real_T *)
       ((DriverDemandBaseForwardMap_DataStore())), 17, 17);
    (DriverDemandBaseForward_DataStore()) =
      BuckyWagon_01_B.s140_motohawk_interpolation_2d;
  }

  /* Switch: '<S140>/Switch' */
  if (BuckyWagon_01_B.s171_Merge > 0.0) {
    BuckyWagon_01_B.s140_Switch =
      BuckyWagon_01_B.s140_motohawk_interpolation_2d1;
  } else {
    BuckyWagon_01_B.s140_Switch = BuckyWagon_01_B.s140_motohawk_interpolation_2d;
  }

  /* End of Switch: '<S140>/Switch' */
  /* Logic: '<S142>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S142>/motohawk_calibration'
   */
  rtb_RelationalOperator_k = (((RegenDisableTq_DataStore()) != 0.0) ||
    (BuckyWagon_01_B.s171_Merge != 0.0));

  /* S-Function Block: <S142>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BuckyWagon_01_B.s142_motohawk_interpolation_2d = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup1, rtb_motohawk_prelookup, (real_T *)
       ((RegenAccelMap_DataStore())), 17, 17);
    (RegenAccel_DataStore()) = BuckyWagon_01_B.s142_motohawk_interpolation_2d;
  }

  /* S-Function Block: <S131>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (BrakePedalPreIn_DataStore()) = BuckyWagon_01_B.s356_Merge;
    (BrakePedalPreIdx_DataStore()) = TablePrelookup_real_T
      (BuckyWagon_01_B.s356_Merge, (BrakePedalPreIdxArr_DataStore()), 17,
       (BrakePedalPreIdx_DataStore()));
    rtb_motohawk_prelookup2 = (BrakePedalPreIdx_DataStore());
  }

  /* S-Function Block: <S142>/motohawk_interpolation_2d1 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BuckyWagon_01_B.s142_motohawk_interpolation_2d1 =
      TableInterpolation2D_real_T(rtb_motohawk_prelookup2,
      rtb_motohawk_prelookup, (real_T *) ((RegenBrakeMap_DataStore())), 17, 17);
    (RegenBrake_DataStore()) = BuckyWagon_01_B.s142_motohawk_interpolation_2d1;
  }

  /* MinMax: '<S142>/MinMax' */
  BuckyWagon_01_B.s142_MinMax = (BuckyWagon_01_B.s142_motohawk_interpolation_2d >=
    BuckyWagon_01_B.s142_motohawk_interpolation_2d1) || rtIsNaN
    (BuckyWagon_01_B.s142_motohawk_interpolation_2d1) ?
    BuckyWagon_01_B.s142_motohawk_interpolation_2d :
    BuckyWagon_01_B.s142_motohawk_interpolation_2d1;

  /* Switch: '<S142>/Switch' incorporates:
   *  Sum: '<S142>/Add'
   */
  if (rtb_RelationalOperator_k) {
    BuckyWagon_01_B.s142_Switch = BuckyWagon_01_B.s140_Switch;
  } else {
    BuckyWagon_01_B.s142_Switch = BuckyWagon_01_B.s140_Switch +
      BuckyWagon_01_B.s142_MinMax;
  }

  /* End of Switch: '<S142>/Switch' */
  /* S-Function Block: <S131>/motohawk_prelookup3 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (SOCPreIn_DataStore()) = BuckyWagon_01_B.s243_Merge;
    (SOCPreIdx_DataStore()) = TablePrelookup_real_T(BuckyWagon_01_B.s243_Merge,
      (SOCPreIdxArr_DataStore()), 17, (SOCPreIdx_DataStore()));
    rtb_motohawk_prelookup3 = (SOCPreIdx_DataStore());
  }

  /* S-Function Block: <S143>/motohawk_interpolation_2d1 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BuckyWagon_01_B.s143_motohawk_interpolation_2d1 =
      TableInterpolation2D_real_T(rtb_motohawk_prelookup3,
      rtb_motohawk_prelookup, (real_T *) ((ChargeClipMap_DataStore())), 17, 17);
    (ChargeClip_DataStore()) = BuckyWagon_01_B.s143_motohawk_interpolation_2d1;
  }

  /* S-Function Block: <S143>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BuckyWagon_01_B.s143_motohawk_interpolation_2d = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup3, rtb_motohawk_prelookup, (real_T *)
       ((DischargeClipMap_DataStore())), 17, 17);
    (DischargeClip_DataStore()) = BuckyWagon_01_B.s143_motohawk_interpolation_2d;
  }

  /* Switch: '<S143>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S143>/motohawk_calibration'
   */
  if ((SOCClipDisable_DataStore()) > 0.0) {
    BuckyWagon_01_B.s143_Switch = BuckyWagon_01_B.s142_Switch;
  } else {
    /* MinMax: '<S148>/MinMax1' incorporates:
     *  MinMax: '<S148>/MinMax'
     */
    rtb_to65535_c = (BuckyWagon_01_B.s142_Switch >=
                     BuckyWagon_01_B.s143_motohawk_interpolation_2d1) || rtIsNaN
      (BuckyWagon_01_B.s143_motohawk_interpolation_2d1) ?
      BuckyWagon_01_B.s142_Switch :
      BuckyWagon_01_B.s143_motohawk_interpolation_2d1;
    BuckyWagon_01_B.s143_Switch = (rtb_to65535_c <=
      BuckyWagon_01_B.s143_motohawk_interpolation_2d) || rtIsNaN
      (BuckyWagon_01_B.s143_motohawk_interpolation_2d) ? rtb_to65535_c :
      BuckyWagon_01_B.s143_motohawk_interpolation_2d;
  }

  /* End of Switch: '<S143>/Switch' */
  /* Stateflow: '<S141>/Inverter Overheat Logic' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S141>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S141>/motohawk_calibration1'
   */

  /* Gateway: Foreground/Control Strategy/Drive/Torque Management/Overheat Clip/Inverter Overheat Logic */
  /* During: Foreground/Control Strategy/Drive/Torque Management/Overheat Clip/Inverter Overheat Logic */
  if (BuckyWagon_01_DWork.s145_is_active_c5_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Control Strategy/Drive/Torque Management/Overheat Clip/Inverter Overheat Logic */
    BuckyWagon_01_DWork.s145_is_active_c5_BuckyWagon_01 = 1U;

    /* Transition: '<S145>:7' */
    BuckyWagon_01_DWork.s145_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Off_m;
  } else {
    switch (BuckyWagon_01_DWork.s145_is_c5_BuckyWagon_01) {
     case BuckyWagon_01_IN_Off_m:
      /* During 'Off': '<S145>:5' */
      if (BuckyWagon_01_B.s229_Inverter_Temperature >=
          (InverterOverheatHigh_DataStore())) {
        /* Transition: '<S145>:8' */
        BuckyWagon_01_DWork.s145_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_On_m;
      } else {
        BuckyWagon_01_B.s145_out = 0.0;
      }
      break;

     case BuckyWagon_01_IN_On_m:
      /* During 'On': '<S145>:6' */
      if (BuckyWagon_01_B.s229_Inverter_Temperature <=
          (InverterOverheatLow_DataStore())) {
        /* Transition: '<S145>:9' */
        BuckyWagon_01_DWork.s145_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Off_m;
      } else {
        BuckyWagon_01_B.s145_out = 1.0;
      }
      break;

     default:
      /* Transition: '<S145>:7' */
      BuckyWagon_01_DWork.s145_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Off_m;
      break;
    }
  }

  /* End of Stateflow: '<S141>/Inverter Overheat Logic' */

  /* Switch: '<S141>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S141>/motohawk_calibration2'
   */
  if ((OverHeatClipDisable_DataStore()) > 0.0) {
    BuckyWagon_01_B.s141_Switch1 = BuckyWagon_01_B.s143_Switch;
  } else {
    /* Switch: '<S141>/Switch' */
    if (BuckyWagon_01_B.s145_out > 0.0) {
      /* MinMax: '<S147>/MinMax1' incorporates:
       *  MinMax: '<S147>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S146>/motohawk_calibration'
       *  S-Function (motohawk_sfun_calibration): '<S146>/motohawk_calibration1'
       */
      rtb_to65535_c = (BuckyWagon_01_B.s143_Switch >=
                       (SaturationLwrLim_DataStore())) || rtIsNaN
        ((SaturationLwrLim_DataStore())) ? BuckyWagon_01_B.s143_Switch :
        (SaturationLwrLim_DataStore());
      BuckyWagon_01_B.s141_Switch1 = (rtb_to65535_c <=
        (SaturationUprLim_DataStore())) || rtIsNaN((SaturationUprLim_DataStore()))
        ? rtb_to65535_c : (SaturationUprLim_DataStore());
    } else {
      BuckyWagon_01_B.s141_Switch1 = BuckyWagon_01_B.s143_Switch;
    }

    /* End of Switch: '<S141>/Switch' */
  }

  /* End of Switch: '<S141>/Switch1' */
  /* MinMax: '<S149>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration'
   */
  rtb_MinMax_o = (BuckyWagon_01_B.s141_Switch1 >= (TorqueClipLwrLim_DataStore()))
    || rtIsNaN((TorqueClipLwrLim_DataStore())) ? BuckyWagon_01_B.s141_Switch1 :
    (TorqueClipLwrLim_DataStore());

  /* MinMax: '<S149>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration1'
   */
  BuckyWagon_01_B.s149_MinMax1 = (rtb_MinMax_o <= (TorqueClipUprLim_DataStore()))
    || rtIsNaN((TorqueClipUprLim_DataStore())) ? rtb_MinMax_o :
    (TorqueClipUprLim_DataStore());

  /* Switch: '<S118>/Drive Mode' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration'
   */
  if ((DriveMode_DataStore()) >= 1.0) {
    /* Switch: '<S118>/Switch1' incorporates:
     *  Constant: '<S118>/Constant'
     *  Product: '<S118>/Product'
     */
    if (BuckyWagon_01_B.s171_Merge >= 1.0) {
      rtb_Merge_k = -rtb_Merge_k;
    }

    /* End of Switch: '<S118>/Switch1' */
  } else {
    rtb_Merge_k = BuckyWagon_01_B.s149_MinMax1;
  }

  /* End of Switch: '<S118>/Drive Mode' */

  /* Update for UnitDelay: '<S135>/Unit Delay' */
  BuckyWagon_01_DWork.s135_UnitDelay_DSTATE = rtb_Sum1_h;

  /* End of Outputs for SubSystem: '<S9>/Drive' */

  /* Product: '<S9>/Product1' */
  BuckyWagon_01_B.s9_Motor_Torque = (rtb_UnitDelay_if ? (real_T)
    rtb_BelowLoTarget : 0.0) * rtb_Merge_k;

  /* S-Function Block: <S120>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s120_motohawk_delta_time_DWORK1, NULL);
    rtb_Gain7 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S120>/Product' incorporates:
   *  MinMax: '<S120>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration'
   */
  rtb_Gain7 /= (rtb_Gain7 >= (TorqueRequestLP_DataStore())) || rtIsNaN
    ((TorqueRequestLP_DataStore())) ? rtb_Gain7 : (TorqueRequestLP_DataStore());

  /* Sum: '<S157>/Sum1' incorporates:
   *  Constant: '<S157>/Constant'
   *  Product: '<S157>/Product'
   *  Product: '<S157>/Product1'
   *  Sum: '<S157>/Sum'
   *  UnitDelay: '<S157>/Unit Delay'
   */
  BuckyWagon_01_B.s157_Sum1 = (1.0 - rtb_Gain7) *
    BuckyWagon_01_DWork.s157_UnitDelay_DSTATE + BuckyWagon_01_B.s9_Motor_Torque *
    rtb_Gain7;

  /* If: '<S123>/If' incorporates:
   *  Inport: '<S174>/In1'
   *  Inport: '<S175>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S123>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S123>/override_enable'
   */
  if ((motor_torque_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S123>/NewValue' incorporates:
     *  ActionPort: '<S174>/Action Port'
     */
    BuckyWagon_01_B.s123_Merge = (motor_torque_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S174>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(56);
    }

    /* End of Outputs for SubSystem: '<S123>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S123>/OldValue' incorporates:
     *  ActionPort: '<S175>/Action Port'
     */
    BuckyWagon_01_B.s123_Merge = BuckyWagon_01_B.s157_Sum1;

    /* S-Function (motohawk_sfun_code_cover): '<S175>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(57);
    }

    /* End of Outputs for SubSystem: '<S123>/OldValue' */
  }

  /* End of If: '<S123>/If' */

  /* Outputs for Atomic SubSystem: '<S7>/A123 Battery Controller' */

  /* If: '<S21>/If' incorporates:
   *  Constant: '<S13>/Main Enable'
   *  Inport: '<S29>/In1'
   *  Inport: '<S30>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S21>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S21>/override_enable'
   */
  if ((hsc_bcm_enable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S21>/NewValue' incorporates:
     *  ActionPort: '<S29>/Action Port'
     */
    rtb_Merge_gc = ((uint8_T)(hsc_bcm_enable_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S29>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(0);
    }

    /* End of Outputs for SubSystem: '<S21>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S21>/OldValue' incorporates:
     *  ActionPort: '<S30>/Action Port'
     */
    rtb_Merge_gc = 1U;

    /* S-Function (motohawk_sfun_code_cover): '<S30>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(1);
    }

    /* End of Outputs for SubSystem: '<S21>/OldValue' */
  }

  /* End of If: '<S21>/If' */

  /* Switch: '<S13>/Switch' incorporates:
   *  Constant: '<S13>/Emergency Power Off Comand'
   *  Constant: '<S13>/Emergency Power Off Comand1'
   *  S-Function (motohawk_sfun_fault_action): '<S13>/motohawk_fault_action'
   */
  if (GetFaultActionStatus(4)) {
    BuckyWagon_01_B.s13_Switch = 1U;
  } else {
    BuckyWagon_01_B.s13_Switch = 0U;
  }

  /* End of Switch: '<S13>/Switch' */
  /* If: '<S22>/If' incorporates:
   *  Inport: '<S31>/In1'
   *  Inport: '<S32>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S22>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S22>/override_enable'
   */
  if ((hsc_bcm_epo_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S22>/NewValue' incorporates:
     *  ActionPort: '<S31>/Action Port'
     */
    rtb_Merge_o0 = ((uint8_T)(hsc_bcm_epo_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S31>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(2);
    }

    /* End of Outputs for SubSystem: '<S22>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S22>/OldValue' incorporates:
     *  ActionPort: '<S32>/Action Port'
     */
    rtb_Merge_o0 = BuckyWagon_01_B.s13_Switch;

    /* S-Function (motohawk_sfun_code_cover): '<S32>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(3);
    }

    /* End of Outputs for SubSystem: '<S22>/OldValue' */
  }

  /* End of If: '<S22>/If' */

  /* S-Function Block: <S28>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s28_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_c = ((real_T) delta) * 0.000001;
  }

  /* Abs: '<S20>/Abs' */
  rtb_Merge_k = fabs(BuckyWagon_01_B.s123_Merge);

  /* RelationalOperator: '<S20>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration1'
   */
  rtb_RelationalOperator_k = (rtb_Merge_k < (GFD_Torque_Off_DataStore()));

  /* Switch: '<S28>/Switch' incorporates:
   *  Constant: '<S28>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S28>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S28>/motohawk_delta_time'
   *  Sum: '<S28>/Sum'
   */
  if (rtb_RelationalOperator_k) {
    rtb_Merge_k = rtb_motohawk_delta_time_c + GFD_Torque_Timer_DataStore();
  } else {
    rtb_Merge_k = 0.0;
  }

  /* End of Switch: '<S28>/Switch' */

  /* S-Function Block: <S27>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s27_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_j = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S27>/Switch' incorporates:
   *  Constant: '<S27>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S27>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S27>/motohawk_delta_time'
   *  Sum: '<S27>/Sum'
   */
  if (BuckyWagon_01_B.s121_LogicalOperator) {
    rtb_to65535_c = rtb_motohawk_delta_time_j +
      A123_GroundFaultDetector_Enable_Timer_DataStore();
  } else {
    rtb_to65535_c = 0.0;
  }

  /* End of Switch: '<S27>/Switch' */

  /* Logic: '<S20>/Logical Operator' incorporates:
   *  Constant: '<S25>/Constant'
   *  Constant: '<S26>/Constant'
   *  Product: '<S20>/Product'
   *  RelationalOperator: '<S25>/Compare'
   *  RelationalOperator: '<S26>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration'
   */
  BuckyWagon_01_B.s20_LogicalOperator = ((((GFD_Enable_DataStore()) != 0.0) &&
    ((rtb_RelationalOperator_k ? rtb_Merge_k >= 1.0 : 0) != 0) && (rtb_to65535_c
    >= 5.0)));

  /* If: '<S23>/If' incorporates:
   *  Inport: '<S33>/In1'
   *  Inport: '<S34>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S23>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S23>/override_enable'
   */
  if ((hsc_bcm_leakage_enable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S23>/NewValue' incorporates:
     *  ActionPort: '<S33>/Action Port'
     */
    rtb_Merge_hg = (hsc_bcm_leakage_enable_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S33>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(4);
    }

    /* End of Outputs for SubSystem: '<S23>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S23>/OldValue' incorporates:
     *  ActionPort: '<S34>/Action Port'
     */
    rtb_Merge_hg = BuckyWagon_01_B.s20_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S34>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(5);
    }

    /* End of Outputs for SubSystem: '<S23>/OldValue' */
  }

  /* End of If: '<S23>/If' */

  /* If: '<S24>/If' incorporates:
   *  Inport: '<S35>/In1'
   *  Inport: '<S36>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S24>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S24>/override_enable'
   */
  if ((hsc_bcm_mainc_enable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S24>/NewValue' incorporates:
     *  ActionPort: '<S35>/Action Port'
     */
    rtb_Merge_nz = (hsc_bcm_mainc_enable_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S35>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(6);
    }

    /* End of Outputs for SubSystem: '<S24>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S24>/OldValue' incorporates:
     *  ActionPort: '<S36>/Action Port'
     */
    rtb_Merge_nz = BuckyWagon_01_B.s121_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S36>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(7);
    }

    /* End of Outputs for SubSystem: '<S24>/OldValue' */
  }

  /* End of If: '<S24>/If' */

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

  /* Saturate: '<S27>/Saturation' */
  rtb_Saturation_i = rtb_to65535_c >= 86400.0 ? 86400.0 : rtb_to65535_c <= 0.0 ?
    0.0 : rtb_to65535_c;

  /* S-Function (motohawk_sfun_data_write): '<S27>/motohawk_data_write' */
  /* Write to Data Storage as scalar: A123_GroundFaultDetector_Enable_Timer */
  {
    A123_GroundFaultDetector_Enable_Timer_DataStore() = rtb_Saturation_i;
  }

  /* Saturate: '<S28>/Saturation' */
  rtb_Saturation_l = rtb_Merge_k >= 86400.0 ? 86400.0 : rtb_Merge_k <= 0.0 ? 0.0
    : rtb_Merge_k;

  /* S-Function (motohawk_sfun_data_write): '<S28>/motohawk_data_write' */
  /* Write to Data Storage as scalar: GFD_Torque_Timer */
  {
    GFD_Torque_Timer_DataStore() = rtb_Saturation_l;
  }

  /* End of Outputs for SubSystem: '<S7>/A123 Battery Controller' */

  /* DataTypeConversion: '<S9>/Data Type Conversion1' */
  rtb_LogicalOperator12 = (BuckyWagon_01_B.s171_Merge != 0.0);

  /* DataTypeConversion: '<S9>/Data Type Conversion' */
  BuckyWagon_01_B.s9_InReverse = (real_T)rtb_LogicalOperator12;

  /* If: '<S304>/If' incorporates:
   *  Inport: '<S318>/In1'
   *  Inport: '<S319>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S304>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S304>/override_enable'
   */
  if ((OutputCurrent_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S304>/NewValue' incorporates:
     *  ActionPort: '<S318>/Action Port'
     */
    rtb_Merge_k = (OutputCurrent_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S318>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(104);
    }

    /* End of Outputs for SubSystem: '<S304>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S304>/OldValue' incorporates:
     *  ActionPort: '<S319>/Action Port'
     */
    rtb_Merge_k = BuckyWagon_01_B.s228_OutputCurrent;

    /* S-Function (motohawk_sfun_code_cover): '<S319>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(105);
    }

    /* End of Outputs for SubSystem: '<S304>/OldValue' */
  }

  /* End of If: '<S304>/If' */

  /* RelationalOperator: '<S9>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S9>/motohawk_calibration'
   */
  rtb_RelationalOperator_fj = (rtb_Merge_k >= (Charger_Curr_DataStore()));

  /* Switch: '<S9>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S9>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S124>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S124>/motohawk_prelookup'
   */
  if (rtb_RelationalOperator_fj) {
    BuckyWagon_01_B.s9_FanDutyCycle = (Charging_Cooling_Speed_DataStore());
  } else {
    /* S-Function Block: <S124>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (RadiatorFanSpeed_InverterTempIn_DataStore()) =
        BuckyWagon_01_B.s229_Inverter_Temperature;
      (RadiatorFanSpeed_InverterTempIdx_DataStore()) = TablePrelookup_real_T
        (BuckyWagon_01_B.s229_Inverter_Temperature,
         (RadiatorFanSpeed_InverterTempIdxArr_DataStore()), 5,
         (RadiatorFanSpeed_InverterTempIdx_DataStore()));
      rtb_motohawk_prelookup_p = (RadiatorFanSpeed_InverterTempIdx_DataStore());
    }

    /* S-Function Block: <S124>/motohawk_interpolation_1d */
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

  /* If: '<S43>/If' incorporates:
   *  Constant: '<S37>/Constant1'
   *  Inport: '<S44>/In1'
   *  Inport: '<S45>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S43>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S43>/override_enable'
   */
  if ((Flash_Reverse_Lights_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S43>/NewValue' incorporates:
     *  ActionPort: '<S44>/Action Port'
     */
    BuckyWagon_01_B.s43_Merge = (Flash_Reverse_Lights_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S44>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(8);
    }

    /* End of Outputs for SubSystem: '<S43>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S43>/OldValue' incorporates:
     *  ActionPort: '<S45>/Action Port'
     */
    BuckyWagon_01_B.s43_Merge = 0.0;

    /* S-Function (motohawk_sfun_code_cover): '<S45>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(9);
    }

    /* End of Outputs for SubSystem: '<S43>/OldValue' */
  }

  /* End of If: '<S43>/If' */

  /* Stateflow: '<S37>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S37>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S37>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S37>/motohawk_calibration3'
   */

  /* Gateway: Foreground/Actuators/Analog Out/Cruise Control Indicator/Chart */
  /* During: Foreground/Actuators/Analog Out/Cruise Control Indicator/Chart */
  if (BuckyWagon_01_DWork.s42_is_active_c6_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Actuators/Analog Out/Cruise Control Indicator/Chart */
    BuckyWagon_01_DWork.s42_is_active_c6_BuckyWagon_01 = 1U;

    /* Transition: '<S42>:6' */
    BuckyWagon_01_DWork.s42_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_Off;

    /* Entry 'Off': '<S42>:1' */
    BuckyWagon_01_B.s42_light = FALSE;
  } else {
    switch (BuckyWagon_01_DWork.s42_is_c6_BuckyWagon_01) {
     case BuckyWagon_01_IN_FlashOne:
      /* During 'FlashOne': '<S42>:2' */
      if (BuckyWagon_01_DWork.s42_timer >= ((uint16_T)(cCInd_OnTime_DataStore())))
      {
        /* Transition: '<S42>:8' */
        BuckyWagon_01_DWork.s42_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_OffOne;

        /* Entry 'OffOne': '<S42>:4' */
        BuckyWagon_01_B.s42_light = FALSE;
        BuckyWagon_01_DWork.s42_timer = 0U;
      } else {
        BuckyWagon_01_DWork.s42_timer = (uint16_T)(BuckyWagon_01_DWork.s42_timer
          + 1);
      }
      break;

     case BuckyWagon_01_IN_FlashTwo:
      /* During 'FlashTwo': '<S42>:3' */
      if (BuckyWagon_01_DWork.s42_timer >= ((uint16_T)(cCInd_OnTime_DataStore())))
      {
        /* Transition: '<S42>:10' */
        BuckyWagon_01_DWork.s42_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_OffTwo;

        /* Entry 'OffTwo': '<S42>:5' */
        BuckyWagon_01_B.s42_light = FALSE;
        BuckyWagon_01_DWork.s42_timer = 0U;
      } else {
        BuckyWagon_01_DWork.s42_timer = (uint16_T)(BuckyWagon_01_DWork.s42_timer
          + 1);
      }
      break;

     case BuckyWagon_01_IN_Off:
      /* During 'Off': '<S42>:1' */
      if (BuckyWagon_01_B.s43_Merge != 0.0) {
        /* Transition: '<S42>:7' */
        BuckyWagon_01_DWork.s42_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_FlashOne;

        /* Entry 'FlashOne': '<S42>:2' */
        BuckyWagon_01_B.s42_light = TRUE;
        BuckyWagon_01_DWork.s42_timer = 0U;
      }
      break;

     case BuckyWagon_01_IN_OffOne:
      /* During 'OffOne': '<S42>:4' */
      if (BuckyWagon_01_DWork.s42_timer >= ((uint16_T)(cCInd_ShortTime_DataStore
            ()))) {
        /* Transition: '<S42>:9' */
        BuckyWagon_01_DWork.s42_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_FlashTwo;

        /* Entry 'FlashTwo': '<S42>:3' */
        BuckyWagon_01_B.s42_light = TRUE;
        BuckyWagon_01_DWork.s42_timer = 0U;
      } else if (!(BuckyWagon_01_B.s43_Merge != 0.0)) {
        /* Transition: '<S42>:11' */
        /* Transition: '<S42>:14' */
        /* Transition: '<S42>:15' */
        BuckyWagon_01_DWork.s42_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_Off;

        /* Entry 'Off': '<S42>:1' */
        BuckyWagon_01_B.s42_light = FALSE;
      } else {
        BuckyWagon_01_DWork.s42_timer = (uint16_T)(BuckyWagon_01_DWork.s42_timer
          + 1);
      }
      break;

     case BuckyWagon_01_IN_OffTwo:
      /* During 'OffTwo': '<S42>:5' */
      if (BuckyWagon_01_DWork.s42_timer >= ((uint16_T)(cCInd_LongOff_DataStore())))
      {
        /* Transition: '<S42>:17' */
        /* Transition: '<S42>:18' */
        /* Transition: '<S42>:16' */
        BuckyWagon_01_DWork.s42_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_FlashOne;

        /* Entry 'FlashOne': '<S42>:2' */
        BuckyWagon_01_B.s42_light = TRUE;
        BuckyWagon_01_DWork.s42_timer = 0U;
      } else if (!(BuckyWagon_01_B.s43_Merge != 0.0)) {
        /* Transition: '<S42>:12' */
        /* Transition: '<S42>:13' */
        /* Transition: '<S42>:14' */
        /* Transition: '<S42>:15' */
        BuckyWagon_01_DWork.s42_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_Off;

        /* Entry 'Off': '<S42>:1' */
        BuckyWagon_01_B.s42_light = FALSE;
      } else {
        BuckyWagon_01_DWork.s42_timer = (uint16_T)(BuckyWagon_01_DWork.s42_timer
          + 1);
      }
      break;

     default:
      /* Transition: '<S42>:6' */
      BuckyWagon_01_DWork.s42_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_Off;

      /* Entry 'Off': '<S42>:1' */
      BuckyWagon_01_B.s42_light = FALSE;
      break;
    }
  }

  /* End of Stateflow: '<S37>/Chart' */
  /* Logic: '<S41>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S41>/motohawk_calibration1'
   */
  rtb_RelationalOperator_k = ((((uint8_T)(RevIndType_DataStore())) != 0) &&
    (BuckyWagon_01_B.s9_InReverse != 0.0));

  /* Logic: '<S41>/Logical Operator3' incorporates:
   *  Logic: '<S41>/Logical Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S41>/motohawk_calibration1'
   */
  rtb_LogicalOperator_bd = ((BuckyWagon_01_B.s9_InReverse != 0.0) &&
    (!(((uint8_T)(RevIndType_DataStore())) != 0)));

  /* Outputs for Enabled SubSystem: '<S41>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S56>/Enable'
   */
  if (rtb_LogicalOperator_bd) {
    if (!BuckyWagon_01_DWork.s41_EnabledSubsystem_MODE) {
      /* InitializeConditions for UnitDelay: '<S56>/Unit Delay' */
      BuckyWagon_01_DWork.s56_UnitDelay_DSTATE = 0;
      BuckyWagon_01_DWork.s41_EnabledSubsystem_MODE = TRUE;
    }

    /* Switch: '<S56>/Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S41>/motohawk_calibration2'
     *  UnitDelay: '<S56>/Unit Delay'
     */
    if (BuckyWagon_01_DWork.s56_UnitDelay_DSTATE > 0) {
      rtb_Switch_d = BuckyWagon_01_DWork.s56_UnitDelay_DSTATE;
    } else {
      rtb_Switch_d = ((int16_T)(ReverseIndFlash_Period_DataStore()));
    }

    /* End of Switch: '<S56>/Switch' */

    /* Sum: '<S56>/Sum' incorporates:
     *  Constant: '<S56>/Constant'
     */
    rtb_Switch_d--;

    /* RelationalOperator: '<S56>/Relational Operator' incorporates:
     *  Gain: '<S56>/Gain'
     *  S-Function (motohawk_sfun_calibration): '<S41>/motohawk_calibration2'
     */
    BuckyWagon_01_B.s56_RelationalOperator = (((((int16_T)
      (ReverseIndFlash_Period_DataStore())) >> 1) <= rtb_Switch_d));

    /* Update for UnitDelay: '<S56>/Unit Delay' */
    BuckyWagon_01_DWork.s56_UnitDelay_DSTATE = rtb_Switch_d;
  } else {
    if (BuckyWagon_01_DWork.s41_EnabledSubsystem_MODE) {
      BuckyWagon_01_DWork.s41_EnabledSubsystem_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S41>/Enabled Subsystem' */

  /* Logic: '<S14>/Logical Operator3' incorporates:
   *  Logic: '<S41>/Logical Operator1'
   *  Logic: '<S41>/Logical Operator2'
   */
  rtb_RelationalOperator_k = (BuckyWagon_01_B.s42_light ||
    (rtb_RelationalOperator_k || (rtb_LogicalOperator_bd &&
    BuckyWagon_01_B.s56_RelationalOperator)));

  /* If: '<S46>/If' incorporates:
   *  Inport: '<S47>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S46>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S46>/override_enable'
   */
  if ((RevOut__ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S46>/NewValue' incorporates:
     *  ActionPort: '<S47>/Action Port'
     */
    rtb_RelationalOperator_k = (RevOut__new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S47>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1/Override in Engineering Units/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(10);
    }

    /* End of Outputs for SubSystem: '<S46>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S46>/OldValue' incorporates:
     *  ActionPort: '<S48>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S48>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1/Override in Engineering Units/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(11);
    }

    /* End of Outputs for SubSystem: '<S46>/OldValue' */
  }

  /* End of If: '<S46>/If' */

  /* Logic: '<S38>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S38>/0 = No Inversion 1 = Inversion'
   */
  BuckyWagon_01_B.s38_LogicalOperator = rtb_RelationalOperator_k ^
    (RevOut__Polarity_DataStore());

  /* Saturate: '<S14>/Saturation' */
  rtb_Merge_k = BuckyWagon_01_B.s9_FanDutyCycle >= 100.0 ? 100.0 :
    BuckyWagon_01_B.s9_FanDutyCycle <= -100.0 ? -100.0 :
    BuckyWagon_01_B.s9_FanDutyCycle;

  /* If: '<S53>/If' incorporates:
   *  Inport: '<S54>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S53>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S53>/override_enable'
   */
  if ((FanOut_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S53>/NewValue' incorporates:
     *  ActionPort: '<S54>/Action Port'
     */
    rtb_Merge_k = (FanOut_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S54>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(14);
    }

    /* End of Outputs for SubSystem: '<S53>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S53>/OldValue' incorporates:
     *  ActionPort: '<S55>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S55>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(15);
    }

    /* End of Outputs for SubSystem: '<S53>/OldValue' */
  }

  /* End of If: '<S53>/If' */

  /* Product: '<S40>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S40>/motohawk_calibration'
   */
  rtb_Merge_k *= (FanOut_Gain_DataStore());

  /* Sum: '<S40>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S40>/motohawk_calibration1'
   */
  rtb_Merge_k += (FanOut_Offset_DataStore());

  /* MinMax: '<S52>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S40>/motohawk_calibration2'
   */
  rtb_Merge_k = (rtb_Merge_k >= (FanOut_MinLimit_DataStore())) || rtIsNaN
    ((FanOut_MinLimit_DataStore())) ? rtb_Merge_k : (FanOut_MinLimit_DataStore());

  /* MinMax: '<S52>/MinMax1' incorporates:
   *  MinMax: '<S52>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S40>/motohawk_calibration3'
   */
  BuckyWagon_01_B.s52_MinMax1 = (rtb_Merge_k <= (FanOut_MaxLimit_DataStore())) ||
    rtIsNaN((FanOut_MaxLimit_DataStore())) ? rtb_Merge_k :
    (FanOut_MaxLimit_DataStore());

  /* DataTypeConversion: '<S40>/Data Type Conversion3' incorporates:
   *  Gain: '<S40>/Convert to integer 14-bit PWM resolution'
   */
  rtb_to65535_c = 40.95 * BuckyWagon_01_B.s52_MinMax1;
  if (rtb_to65535_c < 32768.0) {
    if (rtb_to65535_c >= -32768.0) {
      rtb_DataTypeConversion3 = (int16_T)rtb_to65535_c;
    } else {
      rtb_DataTypeConversion3 = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3 = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S40>/Data Type Conversion3' */
  /* DataTypeConversion: '<S40>/Data Type Conversion2' incorporates:
   *  Gain: '<S40>/Convert to integer 0.01Hz resolution'
   *  S-Function (motohawk_sfun_calibration): '<S40>/motohawk_calibration4'
   */
  rtb_to65535_c = 100.0 * (FanOut_Frequency_DataStore());
  if (rtb_to65535_c < 4.294967296E+9) {
    if (rtb_to65535_c >= 0.0) {
      rtb_DataTypeConversion2_h = (uint32_T)rtb_to65535_c;
    } else {
      rtb_DataTypeConversion2_h = 0U;
    }
  } else {
    rtb_DataTypeConversion2_h = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S40>/Data Type Conversion2' */

  /* If: '<S49>/If' incorporates:
   *  Inport: '<S50>/In1'
   *  Inport: '<S51>/In1'
   *  Logic: '<S14>/Logical Operator'
   *  S-Function (motohawk_sfun_calibration): '<S49>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S49>/override_enable'
   */
  if ((InhibitDCDC_Out__ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S49>/NewValue' incorporates:
     *  ActionPort: '<S50>/Action Port'
     */
    rtb_RelationalOperator_k = (InhibitDCDC_Out__new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S50>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2/Override in Engineering Units/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(12);
    }

    /* End of Outputs for SubSystem: '<S49>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S49>/OldValue' incorporates:
     *  ActionPort: '<S51>/Action Port'
     */
    rtb_RelationalOperator_k = !rtb_LogicalOperator5_k;

    /* S-Function (motohawk_sfun_code_cover): '<S51>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2/Override in Engineering Units/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(13);
    }

    /* End of Outputs for SubSystem: '<S49>/OldValue' */
  }

  /* End of If: '<S49>/If' */

  /* Logic: '<S39>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S39>/0 = No Inversion 1 = Inversion'
   */
  BuckyWagon_01_B.s39_LogicalOperator = rtb_RelationalOperator_k ^
    (InhibitDCDC_Out__Polarity_DataStore());

  /* RelationalOperator: '<S14>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S14>/motohawk_calibration1'
   */
  rtb_RelationalOperator_k = (BuckyWagon_01_B.s356_Merge >
    (Brake_light_On_Setpoint_DataStore()));

  /* Logic: '<S14>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S14>/motohawk_calibration2'
   */
  rtb_LogicalOperator1_p = ((rtb_RelationalOperator_k &&
    (Enable_Brake_Light_Out_DataStore())));

  /* Update for S-Function (motohawk_sfun_dout): '<S14>/motohawk_dout1' */

  /* S-Function Block: DOut177p001 */
  {
    DOut177p001_DiscreteOutput_Set(BuckyWagon_01_B.s38_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S14>/motohawk_pwm2' */

  /* S-Function Block: Fan_Pin_PWMOutput */
  Fan_Pin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_h,
    rtb_DataTypeConversion3, 0, 1);

  /* Update for S-Function (motohawk_sfun_dout): '<S14>/motohawk_dout2' */

  /* S-Function Block: DOut178p001 */
  {
    DOut178p001_DiscreteOutput_Set(BuckyWagon_01_B.s39_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S14>/motohawk_dout3' */

  /* S-Function Block: DOut179p001 */
  {
    DOut179p001_DiscreteOutput_Set(rtb_LogicalOperator1_p);
  }

  /* End of Outputs for SubSystem: '<S7>/Analog Out' */
  /* RelationalOperator: '<S119>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration'
   */
  rtb_RelationalOperator_k = (BuckyWagon_01_B.s356_Merge >
    (Brake_Active_Threshold_DataStore()));

  /* Abs: '<S119>/Abs' */
  rtb_Merge_k = fabs(BuckyWagon_01_B.s235_Abs);

  /* RelationalOperator: '<S119>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration15'
   */
  rtb_LogicalOperator_bd = (BuckyWagon_01_B.s356_Merge > (hardBrakeLev_DataStore
                             ()));

  /* Stateflow: '<S119>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration16'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration17'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration18'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration19'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration3'
   */

  /* Gateway: Foreground/Control Strategy/EHPAS_PercentControl/Chart */
  /* During: Foreground/Control Strategy/EHPAS_PercentControl/Chart */
  if (BuckyWagon_01_DWork.s150_is_active_c9_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Control Strategy/EHPAS_PercentControl/Chart */
    BuckyWagon_01_DWork.s150_is_active_c9_BuckyWagon_01 = 1U;

    /* Transition: '<S150>:25' */
    BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_KeyUp;

    /* Entry 'KeyUp': '<S150>:23' */
    BuckyWagon_01_DWork.s150_counts = 0U;
  } else {
    switch (BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01) {
     case BuckyWagon_01_IN_Braking:
      /* During 'Braking': '<S150>:76' */
      if ((!rtb_RelationalOperator_k) && (rtb_Merge_k < (creepSpeed_DataStore())))
      {
        /* Transition: '<S150>:79' */
        BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S150>:18' */
        /* Transition: '<S150>:34' */
        BuckyWagon_01_DWork.s150_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S150>:31' */
        BuckyWagon_01_DWork.s150_counts = 0U;
      } else if (rtb_RelationalOperator_k && (rtb_Merge_k <
                  (creepSpeed_DataStore()))) {
        /* Transition: '<S150>:46' */
        BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_SlowingDown;
      } else if ((!rtb_RelationalOperator_k) && ((real_T)
                  BuckyWagon_01_DWork.s150_counts > (minPumpRunTime_DataStore())
                  * 200.0)) {
        /* Transition: '<S150>:92' */
        BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S150>:33' */
        BuckyWagon_01_DWork.s150_is_NormalDriving = BuckyWagon_01_IN_Driving;
      } else {
        BuckyWagon_01_DWork.s150_counts = BuckyWagon_01_DWork.s150_counts + 1U;
        BuckyWagon_01_B.s150_PumpState = 3U;
      }
      break;

     case BuckyWagon_01_IN_Idle:
      /* During 'Idle': '<S150>:39' */
      if (rtb_Merge_k > (stopSpeed_DataStore())) {
        /* Transition: '<S150>:48' */
        BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S150>:18' */
        /* Transition: '<S150>:34' */
        BuckyWagon_01_DWork.s150_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S150>:31' */
        BuckyWagon_01_DWork.s150_counts = 0U;
      } else if (rtb_LogicalOperator12) {
        /* Transition: '<S150>:112' */
        BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S150>:18' */
        /* Transition: '<S150>:34' */
        BuckyWagon_01_DWork.s150_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S150>:31' */
        BuckyWagon_01_DWork.s150_counts = 0U;
      } else if (rtb_Merge_k > (creepSpeed_DataStore())) {
        /* Transition: '<S150>:113' */
        BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S150>:33' */
        BuckyWagon_01_DWork.s150_is_NormalDriving = BuckyWagon_01_IN_Driving;
      } else {
        BuckyWagon_01_B.s150_PumpState = 0U;
      }
      break;

     case BuckyWagon_01_IN_KeyUp:
      /* During 'KeyUp': '<S150>:23' */
      if ((rtb_Merge_k > (creepSpeed_DataStore())) &&
          (BuckyWagon_01_DWork.s150_counts > (uint32_T)(((uint16_T)
             (KeyOnRuntime_Sec_DataStore())) * 200))) {
        /* Transition: '<S150>:37' */
        BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S150>:33' */
        BuckyWagon_01_DWork.s150_is_NormalDriving = BuckyWagon_01_IN_Driving;
      } else if ((rtb_Merge_k > (stopSpeed_DataStore())) && (rtb_Merge_k <
                  (creepSpeed_DataStore()))) {
        /* Transition: '<S150>:109' */
        BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S150>:18' */
        /* Transition: '<S150>:34' */
        BuckyWagon_01_DWork.s150_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S150>:31' */
        BuckyWagon_01_DWork.s150_counts = 0U;
      } else if (rtb_LogicalOperator12) {
        /* Transition: '<S150>:43' */
        BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S150>:18' */
        /* Transition: '<S150>:34' */
        BuckyWagon_01_DWork.s150_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S150>:31' */
        BuckyWagon_01_DWork.s150_counts = 0U;
      } else if ((rtb_Merge_k < (stopSpeed_DataStore())) &&
                 (BuckyWagon_01_DWork.s150_counts > (uint32_T)(((uint16_T)
                    (KeyOnRuntime_Sec_DataStore())) * 200))) {
        /* Transition: '<S150>:44' */
        BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Idle;
      } else {
        BuckyWagon_01_DWork.s150_counts = BuckyWagon_01_DWork.s150_counts + 1U;
        BuckyWagon_01_B.s150_PumpState = 4U;
      }
      break;

     case BuckyWagon_01_IN_LowSpeedManeuvering:
      /* During 'LowSpeedManeuvering': '<S150>:18' */
      if ((rtb_Merge_k > (creepSpeed_DataStore())) && ((real_T)
           BuckyWagon_01_DWork.s150_counts > (minPumpRunTime_DataStore()) *
           200.0)) {
        /* Transition: '<S150>:57' */
        BuckyWagon_01_DWork.s150_is_LowSpeedManeuvering = (uint8_T)0U;
        BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S150>:33' */
        BuckyWagon_01_DWork.s150_is_NormalDriving = BuckyWagon_01_IN_Driving;
      } else if (BuckyWagon_01_DWork.s150_counts > (uint32_T)(((uint16_T)
                   (LowSpeedManeuverRuntime_DataStore())) * 200)) {
        /* Transition: '<S150>:47' */
        BuckyWagon_01_DWork.s150_is_LowSpeedManeuvering = (uint8_T)0U;
        BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Idle;
      } else {
        BuckyWagon_01_B.s150_PumpState = 1U;
        switch (BuckyWagon_01_DWork.s150_is_LowSpeedManeuvering) {
         case BuckyWagon_01_IN_Creeping:
          /* During 'Creeping': '<S150>:31' */
          if (rtb_LogicalOperator12) {
            /* Transition: '<S150>:53' */
            BuckyWagon_01_DWork.s150_is_LowSpeedManeuvering =
              BuckyWagon_01_IN_Reversing;

            /* Entry 'Reversing': '<S150>:32' */
            BuckyWagon_01_DWork.s150_counts = 0U;
          } else {
            BuckyWagon_01_DWork.s150_counts = BuckyWagon_01_DWork.s150_counts +
              1U;
          }
          break;

         case BuckyWagon_01_IN_Reversing:
          /* During 'Reversing': '<S150>:32' */
          if (!rtb_LogicalOperator12) {
            /* Transition: '<S150>:54' */
            BuckyWagon_01_DWork.s150_is_LowSpeedManeuvering =
              BuckyWagon_01_IN_Creeping;

            /* Entry 'Creeping': '<S150>:31' */
            BuckyWagon_01_DWork.s150_counts = 0U;
          }
          break;

         default:
          /* Transition: '<S150>:34' */
          BuckyWagon_01_DWork.s150_is_LowSpeedManeuvering =
            BuckyWagon_01_IN_Creeping;

          /* Entry 'Creeping': '<S150>:31' */
          BuckyWagon_01_DWork.s150_counts = 0U;
          break;
        }
      }
      break;

     case BuckyWagon_01_IN_NormalDriving:
      /* During 'NormalDriving': '<S150>:20' */
      if ((BuckyWagon_01_DWork.s150_brakeCounts > (brakeTime_sec_DataStore())) ||
          rtb_LogicalOperator_bd) {
        /* Transition: '<S150>:88' */
        BuckyWagon_01_DWork.s150_is_NormalDriving = (uint8_T)0U;
        BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Braking;

        /* Entry 'Braking': '<S150>:76' */
        BuckyWagon_01_DWork.s150_counts = 0U;
      } else {
        switch (BuckyWagon_01_DWork.s150_is_NormalDriving) {
         case BuckyWagon_01_IN_Driving:
          /* During 'Driving': '<S150>:21' */
          if (rtb_RelationalOperator_k) {
            /* Transition: '<S150>:81' */
            BuckyWagon_01_DWork.s150_is_NormalDriving =
              BuckyWagon_01_IN_DrivingAndBrake;

            /* Entry 'DrivingAndBrake': '<S150>:74' */
            BuckyWagon_01_DWork.s150_brakeCounts = 0.0;
          } else {
            BuckyWagon_01_B.s150_PumpState = 2U;
          }
          break;

         case BuckyWagon_01_IN_DrivingAndBrake:
          /* During 'DrivingAndBrake': '<S150>:74' */
          if (!rtb_RelationalOperator_k) {
            /* Transition: '<S150>:82' */
            BuckyWagon_01_DWork.s150_is_NormalDriving = BuckyWagon_01_IN_Driving;
          } else {
            BuckyWagon_01_DWork.s150_brakeCounts =
              BuckyWagon_01_DWork.s150_brakeCounts + 1.0;
            BuckyWagon_01_B.s150_PumpState = 5U;
          }
          break;

         default:
          /* Transition: '<S150>:33' */
          BuckyWagon_01_DWork.s150_is_NormalDriving = BuckyWagon_01_IN_Driving;
          break;
        }
      }
      break;

     case BuckyWagon_01_IN_SlowingDown:
      /* During 'SlowingDown': '<S150>:96' */
      if (rtb_Merge_k < (stopSpeed_DataStore())) {
        /* Transition: '<S150>:97' */
        BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Stopping;
      } else if ((!rtb_RelationalOperator_k) || ((real_T)
                  BuckyWagon_01_DWork.s150_counts < (minPumpRunTime_DataStore())
                  * 200.0)) {
        /* Transition: '<S150>:100' */
        BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S150>:18' */
        /* Transition: '<S150>:34' */
        BuckyWagon_01_DWork.s150_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S150>:31' */
        BuckyWagon_01_DWork.s150_counts = 0U;
      } else if ((rtb_Merge_k > (creepSpeed_DataStore())) && ((real_T)
                  BuckyWagon_01_DWork.s150_counts > (minPumpRunTime_DataStore())
                  * 200.0)) {
        /* Transition: '<S150>:101' */
        BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S150>:33' */
        BuckyWagon_01_DWork.s150_is_NormalDriving = BuckyWagon_01_IN_Driving;
      } else if ((real_T)BuckyWagon_01_DWork.s150_counts >
                 (minPumpRunTime_DataStore()) * 200.0) {
        /* Transition: '<S150>:104' */
        BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S150>:18' */
        /* Transition: '<S150>:34' */
        BuckyWagon_01_DWork.s150_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S150>:31' */
        BuckyWagon_01_DWork.s150_counts = 0U;
      } else {
        BuckyWagon_01_DWork.s150_counts = BuckyWagon_01_DWork.s150_counts + 1U;
        BuckyWagon_01_B.s150_PumpState = 6U;
      }
      break;

     case BuckyWagon_01_IN_Stopping:
      /* During 'Stopping': '<S150>:98' */
      if ((real_T)BuckyWagon_01_DWork.s150_counts > (minPumpRunTime_DataStore())
          * 200.0) {
        /* Transition: '<S150>:106' */
        BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Idle;
      } else if (rtb_Merge_k > (stopSpeed_DataStore())) {
        /* Transition: '<S150>:107' */
        BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_SlowingDown;
      } else {
        BuckyWagon_01_DWork.s150_counts = BuckyWagon_01_DWork.s150_counts + 1U;
        BuckyWagon_01_B.s150_PumpState = 7U;
      }
      break;

     default:
      /* Transition: '<S150>:25' */
      BuckyWagon_01_DWork.s150_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_KeyUp;

      /* Entry 'KeyUp': '<S150>:23' */
      BuckyWagon_01_DWork.s150_counts = 0U;
      break;
    }
  }

  /* End of Stateflow: '<S119>/Chart' */
  /* If: '<S152>/If' incorporates:
   *  Inport: '<S155>/In1'
   *  Inport: '<S156>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S152>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S152>/override_enable'
   */
  if ((EHPAS_PumpStateEnable_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S152>/NewValue' incorporates:
     *  ActionPort: '<S155>/Action Port'
     */
    rtb_Compare = ((uint8_T)(EHPAS_PumpStateEnable_ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S155>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(50);
    }

    /* End of Outputs for SubSystem: '<S152>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S152>/OldValue' incorporates:
     *  ActionPort: '<S156>/Action Port'
     */
    rtb_Compare = BuckyWagon_01_B.s150_PumpState;

    /* S-Function (motohawk_sfun_code_cover): '<S156>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(51);
    }

    /* End of Outputs for SubSystem: '<S152>/OldValue' */
  }

  /* End of If: '<S152>/If' */

  /* MultiPortSwitch: '<S119>/Multiport Switch1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration20'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration21'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration9'
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

  /* End of MultiPortSwitch: '<S119>/Multiport Switch1' */

  /* Logic: '<S9>/Logical Operator2' */
  rtb_RelationalOperator_k = (rtb_LogicalOperator2_e &&
    (rtb_motohawk_calibration8 != 0));

  /* Outputs for Enabled SubSystem: '<S7>/EHPAS Power Steering Pump Controller' incorporates:
   *  EnablePort: '<S15>/Enable1'
   */
  /* S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration2' */
  if ((Enable_PowerSteering_CAN_Msg_DataStore())) {
    /* Switch: '<S15>/Switch' incorporates:
     *  Constant: '<S15>/Operating Mode - Activate'
     *  Constant: '<S15>/Operating Mode - Disabled'
     */
    if (rtb_RelationalOperator_k) {
      BuckyWagon_01_B.s15_OperatingMode_cmd = 1U;
    } else {
      BuckyWagon_01_B.s15_OperatingMode_cmd = 0U;
    }

    /* End of Switch: '<S15>/Switch' */
    /* If: '<S57>/If' incorporates:
     *  Inport: '<S58>/In1'
     *  Inport: '<S59>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S57>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S57>/override_enable'
     */
    if ((EHPAS_Operating_Mode_Cmd_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S57>/NewValue' incorporates:
       *  ActionPort: '<S58>/Action Port'
       */
      rtb_Merge_j0 = ((uint8_T)(EHPAS_Operating_Mode_Cmd_new_DataStore()));

      /* S-Function (motohawk_sfun_code_cover): '<S58>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller/motohawk_override_abs4/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(16);
      }

      /* End of Outputs for SubSystem: '<S57>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S57>/OldValue' incorporates:
       *  ActionPort: '<S59>/Action Port'
       */
      rtb_Merge_j0 = BuckyWagon_01_B.s15_OperatingMode_cmd;

      /* S-Function (motohawk_sfun_code_cover): '<S59>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller/motohawk_override_abs4/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(17);
      }

      /* End of Outputs for SubSystem: '<S57>/OldValue' */
    }

    /* End of If: '<S57>/If' */

    /* S-Function (motohawk_sfun_send_canmsgs): '<S15>/Send CAN Messages' */
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
   *  S-Function (motohawk_sfun_interpolation_1d): '<S125>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S125>/motohawk_prelookup'
   */
  if (rtb_RelationalOperator_fj) {
    BuckyWagon_01_B.s9_CoolantPumpSpeed = (Charging_Cooling_Speed_DataStore());
  } else {
    /* S-Function Block: <S125>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CoolantPumpSpeedIn_DataStore()) =
        BuckyWagon_01_B.s229_Inverter_Temperature;
      (CoolantPumpSpeedIdx_DataStore()) = TablePrelookup_real_T
        (BuckyWagon_01_B.s229_Inverter_Temperature,
         (CoolantPumpSpeedIdxArr_DataStore()), 11,
         (CoolantPumpSpeedIdx_DataStore()));
      rtb_motohawk_prelookup_b = (CoolantPumpSpeedIdx_DataStore());
    }

    /* S-Function Block: <S125>/motohawk_interpolation_1d */
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

  /* Saturate: '<S16>/Saturation' */
  rtb_Merge_k = BuckyWagon_01_B.s9_CoolantPumpSpeed >= 100.0 ? 100.0 :
    BuckyWagon_01_B.s9_CoolantPumpSpeed <= 0.0 ? 0.0 :
    BuckyWagon_01_B.s9_CoolantPumpSpeed;

  /* If: '<S60>/If' incorporates:
   *  Inport: '<S62>/In1'
   *  Inport: '<S63>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S60>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S60>/override_enable'
   */
  if ((EMP_Speed_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S60>/NewValue' incorporates:
     *  ActionPort: '<S62>/Action Port'
     */
    BuckyWagon_01_B.s60_Merge = (EMP_Speed_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S62>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(18);
    }

    /* End of Outputs for SubSystem: '<S60>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S60>/OldValue' incorporates:
     *  ActionPort: '<S63>/Action Port'
     */
    BuckyWagon_01_B.s60_Merge = rtb_Merge_k;

    /* S-Function (motohawk_sfun_code_cover): '<S63>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(19);
    }

    /* End of Outputs for SubSystem: '<S60>/OldValue' */
  }

  /* End of If: '<S60>/If' */

  /* If: '<S61>/If' incorporates:
   *  Constant: '<S16>/Operating Mode: Normal'
   *  Inport: '<S64>/In1'
   *  Inport: '<S65>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S61>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S61>/override_enable'
   */
  if ((EMP_Mode_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S61>/NewValue' incorporates:
     *  ActionPort: '<S64>/Action Port'
     */
    rtb_Merge_ht = ((uint8_T)(EMP_Mode_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S64>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(20);
    }

    /* End of Outputs for SubSystem: '<S61>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S61>/OldValue' incorporates:
     *  ActionPort: '<S65>/Action Port'
     */
    rtb_Merge_ht = 1U;

    /* S-Function (motohawk_sfun_code_cover): '<S65>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(21);
    }

    /* End of Outputs for SubSystem: '<S61>/OldValue' */
  }

  /* End of If: '<S61>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S16>/Send CAN Messages' */
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
        if (BuckyWagon_01_B.s60_Merge < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (BuckyWagon_01_B.s60_Merge > 127.5000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(BuckyWagon_01_B.s60_Merge * (2.0000000000F));
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
  /* S-Function Block: <S360>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s360_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S360>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S360>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S360>/motohawk_delta_time'
   */
  BuckyWagon_01_B.s360_Sum = rtb_motohawk_delta_time +
    TimeSinceKeyOnTimer_DataStore();

  /* Abs: '<S17>/Abs' */
  rtb_Merge_k = fabs(BuckyWagon_01_B.s123_Merge);

  /* Stateflow: '<S17>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S17>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S17>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S17>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_calibration): '<S17>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S17>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S17>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_data_read): '<S17>/motohawk_data_read'
   */

  /* Gateway: Foreground/Actuators/Eaton Controller/Chart */
  /* During: Foreground/Actuators/Eaton Controller/Chart */
  if (BuckyWagon_01_DWork.s66_is_active_c7_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Actuators/Eaton Controller/Chart */
    BuckyWagon_01_DWork.s66_is_active_c7_BuckyWagon_01 = 1U;

    /* Transition: '<S66>:2' */
    BuckyWagon_01_DWork.s66_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_Init;
  } else {
    switch (BuckyWagon_01_DWork.s66_is_c7_BuckyWagon_01) {
     case BuckyWagon_01_IN_Init:
      /* During 'Init': '<S66>:1' */
      if (BuckyWagon_01_B.s360_Sum >= (Motor_Start_Delay_DataStore())) {
        /* Transition: '<S66>:4' */
        BuckyWagon_01_DWork.s66_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_On;
      } else {
        BuckyWagon_01_B.s66_ctrlState = (initState_DataStore());
      }
      break;

     case BuckyWagon_01_IN_Off_n:
      /* During 'Off': '<S66>:5' */
      BuckyWagon_01_B.s66_ctrlState = (offState_DataStore());
      break;

     case BuckyWagon_01_IN_On:
      /* During 'On': '<S66>:3' */
      if (Shutdown_Req_DataStore()) {
        /* Transition: '<S66>:6' */
        BuckyWagon_01_DWork.s66_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_Off_n;
      } else if ((BuckyWagon_01_B.s360_Sum >= (Motor_Start_Off_Delay_DataStore()))
                 && (rtb_Merge_k < (Torqe_Threshold_DataStore()))) {
        /* Transition: '<S66>:20' */
        BuckyWagon_01_DWork.s66_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_Standby;
      } else {
        BuckyWagon_01_B.s66_ctrlState = (onState_DataStore());
      }
      break;

     case BuckyWagon_01_IN_Restart:
      /* During 'Restart': '<S66>:21' */
      if (BuckyWagon_01_B.s66_ctrlState == (initState_DataStore())) {
        /* Transition: '<S66>:23' */
        BuckyWagon_01_DWork.s66_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_On;
      } else if (Shutdown_Req_DataStore()) {
        /* Transition: '<S66>:26' */
        BuckyWagon_01_DWork.s66_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_Off_n;
      } else {
        BuckyWagon_01_B.s66_ctrlState = (initState_DataStore());
      }
      break;

     case BuckyWagon_01_IN_Standby:
      /* During 'Standby': '<S66>:19' */
      if (rtb_Merge_k >= (Torqe_Threshold_DataStore())) {
        /* Transition: '<S66>:22' */
        BuckyWagon_01_DWork.s66_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_Restart;
      } else if (Shutdown_Req_DataStore()) {
        /* Transition: '<S66>:25' */
        BuckyWagon_01_DWork.s66_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_Off_n;
      } else {
        BuckyWagon_01_B.s66_ctrlState = (offState_DataStore());
      }
      break;

     default:
      /* Transition: '<S66>:2' */
      BuckyWagon_01_DWork.s66_is_c7_BuckyWagon_01 = BuckyWagon_01_IN_Init;
      break;
    }
  }

  /* End of Stateflow: '<S17>/Chart' */
  /* If: '<S68>/If' incorporates:
   *  Inport: '<S72>/In1'
   *  Inport: '<S73>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S68>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S68>/override_enable'
   */
  if ((Control_Mode_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S68>/NewValue' incorporates:
     *  ActionPort: '<S72>/Action Port'
     */
    rtb_Merge_f = (Control_Mode_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S72>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(22);
    }

    /* End of Outputs for SubSystem: '<S68>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S68>/OldValue' incorporates:
     *  ActionPort: '<S73>/Action Port'
     */
    rtb_Merge_f = BuckyWagon_01_B.s66_ctrlState;

    /* S-Function (motohawk_sfun_code_cover): '<S73>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(23);
    }

    /* End of Outputs for SubSystem: '<S68>/OldValue' */
  }

  /* End of If: '<S68>/If' */

  /* Product: '<S17>/Product' incorporates:
   *  Constant: '<S17>/Constant1'
   */
  BuckyWagon_01_B.s17_Product = -BuckyWagon_01_B.s123_Merge;

  /* If: '<S69>/If' incorporates:
   *  Inport: '<S74>/In1'
   *  Inport: '<S75>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S69>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S69>/override_enable'
   */
  if ((Torque_Command_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S69>/NewValue' incorporates:
     *  ActionPort: '<S74>/Action Port'
     */
    rtb_Merge_g = (Torque_Command_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S74>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(24);
    }

    /* End of Outputs for SubSystem: '<S69>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S69>/OldValue' incorporates:
     *  ActionPort: '<S75>/Action Port'
     */
    rtb_Merge_g = BuckyWagon_01_B.s17_Product;

    /* S-Function (motohawk_sfun_code_cover): '<S75>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(25);
    }

    /* End of Outputs for SubSystem: '<S69>/OldValue' */
  }

  /* End of If: '<S69>/If' */

  /* Outputs for Atomic SubSystem: '<S67>/Counter' */
  /* UnitDelay: '<S71>/Unit Delay2' */
  BuckyWagon_01_B.s71_UnitDelay2 = BuckyWagon_01_DWork.s71_UnitDelay2_DSTATE;

  /* Switch: '<S71>/Switch' incorporates:
   *  Constant: '<S67>/Constant1'
   *  RelationalOperator: '<S67>/Relational Operator'
   *  UnitDelay: '<S67>/Unit Delay'
   */
  if (BuckyWagon_01_DWork.s67_UnitDelay_DSTATE >= 7.0) {
    /* Update for UnitDelay: '<S71>/Unit Delay2' incorporates:
     *  Constant: '<S71>/Constant'
     */
    BuckyWagon_01_DWork.s71_UnitDelay2_DSTATE = 0.0;
  } else {
    /* Update for UnitDelay: '<S71>/Unit Delay2' incorporates:
     *  Constant: '<S67>/Constant'
     *  Sum: '<S71>/Sum'
     */
    BuckyWagon_01_DWork.s71_UnitDelay2_DSTATE = 1.0 +
      BuckyWagon_01_B.s71_UnitDelay2;
  }

  /* End of Switch: '<S71>/Switch' */
  /* End of Outputs for SubSystem: '<S67>/Counter' */

  /* If: '<S70>/If' incorporates:
   *  Inport: '<S76>/In1'
   *  Inport: '<S77>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S70>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S70>/override_enable'
   */
  if ((Message_Counter_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S70>/NewValue' incorporates:
     *  ActionPort: '<S76>/Action Port'
     */
    rtb_Merge_i = (Message_Counter_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S76>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(26);
    }

    /* End of Outputs for SubSystem: '<S70>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S70>/OldValue' incorporates:
     *  ActionPort: '<S77>/Action Port'
     */
    rtb_Merge_i = BuckyWagon_01_B.s71_UnitDelay2;

    /* S-Function (motohawk_sfun_code_cover): '<S77>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton Controller/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(27);
    }

    /* End of Outputs for SubSystem: '<S70>/OldValue' */
  }

  /* End of If: '<S70>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S17>/Send CAN Messages' */
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
        if (rtb_Merge_i < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Merge_i > 15.0000000000F) {
          tmp2 = (uint8_T)(15U);
        } else {
          tmp2 = (uint8_T)(rtb_Merge_i);
        }

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

  /* If: '<S78>/If' incorporates:
   *  Inport: '<S83>/In1'
   *  Inport: '<S84>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S18>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S78>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S78>/override_enable'
   */
  if ((Current_Limit_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S78>/NewValue' incorporates:
     *  ActionPort: '<S83>/Action Port'
     */
    BuckyWagon_01_B.s78_Merge = (Current_Limit_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S83>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(28);
    }

    /* End of Outputs for SubSystem: '<S78>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S78>/OldValue' incorporates:
     *  ActionPort: '<S84>/Action Port'
     */
    BuckyWagon_01_B.s78_Merge = (Current_Limit_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S84>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(29);
    }

    /* End of Outputs for SubSystem: '<S78>/OldValue' */
  }

  /* End of If: '<S78>/If' */

  /* If: '<S79>/If' incorporates:
   *  Inport: '<S85>/In1'
   *  Inport: '<S86>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S18>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S79>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S79>/override_enable'
   */
  if ((Voltage_Limit_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S79>/NewValue' incorporates:
     *  ActionPort: '<S85>/Action Port'
     */
    BuckyWagon_01_B.s79_Merge = (Voltage_Limit_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S85>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(30);
    }

    /* End of Outputs for SubSystem: '<S79>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S79>/OldValue' incorporates:
     *  ActionPort: '<S86>/Action Port'
     */
    BuckyWagon_01_B.s79_Merge = (Voltage_Limit_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S86>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(31);
    }

    /* End of Outputs for SubSystem: '<S79>/OldValue' */
  }

  /* End of If: '<S79>/If' */

  /* If: '<S80>/If' incorporates:
   *  Constant: '<S18>/Constant3'
   *  Inport: '<S87>/In1'
   *  Inport: '<S88>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S80>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S80>/override_enable'
   */
  if ((Charge_Falt_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S80>/NewValue' incorporates:
     *  ActionPort: '<S87>/Action Port'
     */
    BuckyWagon_01_B.s80_Merge = ((uint8_T)(Charge_Falt_Override_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S87>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(32);
    }

    /* End of Outputs for SubSystem: '<S80>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S80>/OldValue' incorporates:
     *  ActionPort: '<S88>/Action Port'
     */
    BuckyWagon_01_B.s80_Merge = 0U;

    /* S-Function (motohawk_sfun_code_cover): '<S88>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(33);
    }

    /* End of Outputs for SubSystem: '<S80>/OldValue' */
  }

  /* End of If: '<S80>/If' */

  /* If: '<S81>/If' incorporates:
   *  Constant: '<S18>/Constant'
   *  Inport: '<S89>/In1'
   *  Inport: '<S90>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S81>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S81>/override_enable'
   */
  if ((Charge_Complete_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S81>/NewValue' incorporates:
     *  ActionPort: '<S89>/Action Port'
     */
    BuckyWagon_01_B.s81_Merge = (Charge_Complete_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S89>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(34);
    }

    /* End of Outputs for SubSystem: '<S81>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S81>/OldValue' incorporates:
     *  ActionPort: '<S90>/Action Port'
     */
    BuckyWagon_01_B.s81_Merge = 0.0;

    /* S-Function (motohawk_sfun_code_cover): '<S90>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(35);
    }

    /* End of Outputs for SubSystem: '<S81>/OldValue' */
  }

  /* End of If: '<S81>/If' */

  /* If: '<S82>/If' incorporates:
   *  Inport: '<S91>/In1'
   *  Inport: '<S92>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S82>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S82>/override_enable'
   */
  if ((Charge_Enable_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S82>/NewValue' incorporates:
     *  ActionPort: '<S91>/Action Port'
     */
    BuckyWagon_01_B.s82_Merge = (Charge_Enable_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S91>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(36);
    }

    /* End of Outputs for SubSystem: '<S82>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S82>/OldValue' incorporates:
     *  ActionPort: '<S92>/Action Port'
     */
    BuckyWagon_01_B.s82_Merge = rtb_LogicalOperator5_k;

    /* S-Function (motohawk_sfun_code_cover): '<S92>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(37);
    }

    /* End of Outputs for SubSystem: '<S82>/OldValue' */
  }

  /* End of If: '<S82>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S18>/Send CAN Messages' */
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
        tmp0 = (uint8_T)(BuckyWagon_01_B.s82_Merge);
        if (BuckyWagon_01_B.s81_Merge < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (BuckyWagon_01_B.s81_Merge > 3.0000000000F) {
          tmp1 = (uint8_T)(3U);
        } else {
          tmp1 = (uint8_T)(BuckyWagon_01_B.s81_Merge);
        }

        if (BuckyWagon_01_B.s80_Merge > 3U) {
          tmp2 = (uint8_T)(3U);
        } else {
          tmp2 = (uint8_T)(BuckyWagon_01_B.s80_Merge);
        }

        if (BuckyWagon_01_B.s79_Merge < 0.0000000000F) {
          tmp3 = (uint16_T)(0U);
        } else if (BuckyWagon_01_B.s79_Merge > 803.0000000000F) {
          tmp3 = (uint16_T)(4015U);
        } else {
          tmp3 = (uint16_T)(BuckyWagon_01_B.s79_Merge * (5.0000000000F));
        }

        if (BuckyWagon_01_B.s78_Merge < 0.0000000000F) {
          tmp4 = (uint16_T)(0U);
        } else if (BuckyWagon_01_B.s78_Merge > 200.7500000000F) {
          tmp4 = (uint16_T)(4015U);
        } else {
          tmp4 = (uint16_T)(BuckyWagon_01_B.s78_Merge * (20.0000000000F));
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

  /* If: '<S93>/If' incorporates:
   *  Constant: '<S19>/Constant'
   *  Inport: '<S97>/In1'
   *  Inport: '<S98>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S93>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S93>/override_enable'
   */
  if ((SpeedSet_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S93>/NewValue' incorporates:
     *  ActionPort: '<S97>/Action Port'
     */
    rtb_Merge_d = (SpeedSet_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S97>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(38);
    }

    /* End of Outputs for SubSystem: '<S93>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S93>/OldValue' incorporates:
     *  ActionPort: '<S98>/Action Port'
     */
    rtb_Merge_d = 0.0;

    /* S-Function (motohawk_sfun_code_cover): '<S98>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(39);
    }

    /* End of Outputs for SubSystem: '<S93>/OldValue' */
  }

  /* End of If: '<S93>/If' */

  /* If: '<S96>/If' incorporates:
   *  Inport: '<S103>/In1'
   *  Inport: '<S104>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S96>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S96>/override_enable'
   */
  if ((TorqueControl_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S96>/NewValue' incorporates:
     *  ActionPort: '<S103>/Action Port'
     */
    BuckyWagon_01_B.s96_Merge = (TorqueControl_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S103>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(44);
    }

    /* End of Outputs for SubSystem: '<S96>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S96>/OldValue' incorporates:
     *  ActionPort: '<S104>/Action Port'
     */
    BuckyWagon_01_B.s96_Merge = BuckyWagon_01_B.s123_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S104>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(45);
    }

    /* End of Outputs for SubSystem: '<S96>/OldValue' */
  }

  /* End of If: '<S96>/If' */

  /* If: '<S94>/If' incorporates:
   *  Inport: '<S100>/In1'
   *  Inport: '<S99>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S94>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S94>/override_enable'
   */
  if ((LowerTorqueLimit_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S94>/NewValue' incorporates:
     *  ActionPort: '<S99>/Action Port'
     */
    rtb_Merge_b = (LowerTorqueLimit_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S99>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(40);
    }

    /* End of Outputs for SubSystem: '<S94>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S94>/OldValue' incorporates:
     *  ActionPort: '<S100>/Action Port'
     */
    rtb_Merge_b = BuckyWagon_01_B.s96_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S100>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(41);
    }

    /* End of Outputs for SubSystem: '<S94>/OldValue' */
  }

  /* End of If: '<S94>/If' */

  /* If: '<S95>/If' incorporates:
   *  Inport: '<S101>/In1'
   *  Inport: '<S102>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S95>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S95>/override_enable'
   */
  if ((UpperTorqueLimit_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S95>/NewValue' incorporates:
     *  ActionPort: '<S101>/Action Port'
     */
    rtb_Merge_o = (UpperTorqueLimit_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S101>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(42);
    }

    /* End of Outputs for SubSystem: '<S95>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S95>/OldValue' incorporates:
     *  ActionPort: '<S102>/Action Port'
     */
    rtb_Merge_o = BuckyWagon_01_B.s96_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S102>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Solectria Controller/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(43);
    }

    /* End of Outputs for SubSystem: '<S95>/OldValue' */
  }

  /* End of If: '<S95>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S19>/Send CAN Messages' */
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

  /* RelationalOperator: '<S111>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_c = ((BuckyWagon_01_B.s243_Merge <=
    (Under_SOC_Shutdown_Thresh_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S108>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Low_SOC_Shutdown */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(22, rtb_RelationalOperator1_c);
    UpdateFault(22);
  }

  /* RelationalOperator: '<S111>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration2'
   */
  rtb_RelationalOperator_a = (((Over_SOC_Shutdown_Thresh_DataStore()) <=
    BuckyWagon_01_B.s243_Merge));

  /* S-Function (motohawk_sfun_fault_def): '<S108>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: High_SOC_Shutdown */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(14, rtb_RelationalOperator_a);
    UpdateFault(14);
  }

  /* RelationalOperator: '<S110>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_cw = ((BuckyWagon_01_B.s243_Merge <=
    (Under_SOCAlertThresh_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S108>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Low_SOC_Alert */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(21, rtb_RelationalOperator1_cw);
    UpdateFault(21);
  }

  /* RelationalOperator: '<S110>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration2'
   */
  rtb_RelationalOperator_ac = (((Over_SOCAlertThresh_DataStore()) <=
    BuckyWagon_01_B.s243_Merge));

  /* S-Function (motohawk_sfun_fault_def): '<S108>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: High_SOC_Alert */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(13, rtb_RelationalOperator_ac);
    UpdateFault(13);
  }

  /* Sum: '<S105>/Subtract' */
  rtb_Gain7 = BuckyWagon_01_B.s224_bcm_vbat -
    BuckyWagon_01_B.s229_DC_Bus_Voltage;

  /* Abs: '<S105>/Abs' */
  rtb_Gain7 = fabs(rtb_Gain7);

  /* RelationalOperator: '<S105>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration2'
   */
  rtb_RelationalOperator_k = (rtb_Gain7 >= (HV_Bus_allowed_mismatch_DataStore()));

  /* Outputs for Enabled SubSystem: '<S105>/Time Since Enabled (With Input)1' incorporates:
   *  EnablePort: '<S109>/Enable'
   */
  /* S-Function (motohawk_sfun_data_read): '<S105>/motohawk_data_read' */
  if (Batt_Load_Enable_DataStore()) {
    if (!BuckyWagon_01_DWork.s105_TimeSinceEnabledWithInput1_MODE) {
      /* S-Function Block: <S109>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BuckyWagon_01_DWork.s109_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S109>/Unit Delay' */
      BuckyWagon_01_DWork.s109_UnitDelay_DSTATE = 0.0;
      BuckyWagon_01_DWork.s105_TimeSinceEnabledWithInput1_MODE = TRUE;
    }

    /* S-Function Block: <S109>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BuckyWagon_01_DWork.s109_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_a = ((real_T) delta) * 0.000001;
    }

    /* UnitDelay: '<S109>/Unit Delay' */
    BuckyWagon_01_B.s109_UnitDelay = BuckyWagon_01_DWork.s109_UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S109>/Unit Delay' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S109>/motohawk_delta_time'
     *  Sum: '<S109>/Sum'
     */
    BuckyWagon_01_DWork.s109_UnitDelay_DSTATE = rtb_motohawk_delta_time_a +
      BuckyWagon_01_B.s109_UnitDelay;
  } else {
    if (BuckyWagon_01_DWork.s105_TimeSinceEnabledWithInput1_MODE) {
      /* Disable for Outport: '<S109>/Time Since Enabled [sec]' */
      BuckyWagon_01_B.s109_UnitDelay = 0.0;
      BuckyWagon_01_DWork.s105_TimeSinceEnabledWithInput1_MODE = FALSE;
    }
  }

  /* End of S-Function (motohawk_sfun_data_read): '<S105>/motohawk_data_read' */
  /* End of Outputs for SubSystem: '<S105>/Time Since Enabled (With Input)1' */
  /* Logic: '<S105>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S105>/Relational Operator8'
   *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration8'
   */
  rtb_LogicalOperator1_f = ((rtb_RelationalOperator_k &&
    BuckyWagon_01_B.s240_Merge && (BuckyWagon_01_B.s109_UnitDelay >=
    (HV_Bus_offline_delay_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S105>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: HV_BUS_OFFLINE_check_fuse */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(11, rtb_LogicalOperator1_f);
    UpdateFault(11);
  }

  /* S-Function Block: <S344>/motohawk_delta_time */
  rtb_Gain7 = 0.005;

  /* Product: '<S344>/Product' incorporates:
   *  MinMax: '<S344>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S344>/motohawk_calibration'
   */
  rtb_Gain7 /= (rtb_Gain7 >= (LVVolt_FilterConst_DataStore())) || rtIsNaN
    ((LVVolt_FilterConst_DataStore())) ? rtb_Gain7 :
    (LVVolt_FilterConst_DataStore());

  /* Logic: '<S231>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S231>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S231>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_fj = (IsFaultActive(18) || IsFaultActive(19));

  /* Logic: '<S231>/Logical Operator6' */
  rtb_RelationalOperator_k = !rtb_RelationalOperator_fj;

  /* Logic: '<S231>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S231>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S231>/motohawk_fault_status3'
   */
  rtb_LogicalOperator_bd = (IsFaultSuspected(18) || IsFaultSuspected(19));

  /* S-Function Block: <S12>/motohawk_ain5 Resource: LV_Voltage_Pin */
  {
    extern NativeError_S LV_Voltage_Pin_AnalogInput_Get(uint16_T *adc, uint16_T *
      status);
    LV_Voltage_Pin_AnalogInput_Get(&BuckyWagon_01_B.s12_motohawk_ain5, NULL);
  }

  /* DataTypeConversion: '<S231>/Data Type Conversion' */
  rtb_DataTypeConversion_d = (real_T)BuckyWagon_01_B.s12_motohawk_ain5;

  /* Product: '<S231>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S231>/motohawk_calibration4'
   */
  rtb_Merge_k = rtb_DataTypeConversion_d * (LVVolt_Gain_DataStore());

  /* Sum: '<S231>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S231>/motohawk_calibration5'
   */
  BuckyWagon_01_B.s231_Sum1 = rtb_Merge_k + (LVVolt_Ofst_DataStore());

  /* UnitDelay: '<S231>/Unit Delay1' */
  rtb_UnitDelay1_f = BuckyWagon_01_DWork.s231_UnitDelay1_DSTATE;

  /* If: '<S231>/If' incorporates:
   *  Logic: '<S231>/Logical Operator5'
   */
  if (rtb_RelationalOperator_k && rtb_LogicalOperator_bd) {
    /* Outputs for IfAction SubSystem: '<S231>/If Action Subsystem' incorporates:
     *  ActionPort: '<S345>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(rtb_UnitDelay1_f, &rtb_Merge_ep);

    /* End of Outputs for SubSystem: '<S231>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_fj) {
    /* Outputs for IfAction SubSystem: '<S231>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S346>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem((LVVolt_DfltValue_DataStore()),
      &rtb_Merge_ep);

    /* End of Outputs for SubSystem: '<S231>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S231>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S347>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(BuckyWagon_01_B.s231_Sum1, &rtb_Merge_ep);

    /* End of Outputs for SubSystem: '<S231>/If Action Subsystem2' */
  }

  /* End of If: '<S231>/If' */

  /* Sum: '<S349>/Sum1' incorporates:
   *  Constant: '<S349>/Constant'
   *  Product: '<S349>/Product'
   *  Product: '<S349>/Product1'
   *  Sum: '<S349>/Sum'
   *  UnitDelay: '<S349>/Unit Delay'
   */
  rtb_to65535_dx = (1.0 - rtb_Gain7) * BuckyWagon_01_DWork.s349_UnitDelay_DSTATE
    + rtb_Merge_ep * rtb_Gain7;

  /* If: '<S348>/If' incorporates:
   *  Inport: '<S350>/In1'
   *  Inport: '<S351>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S348>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S348>/override_enable'
   */
  if ((LVVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S348>/NewValue' incorporates:
     *  ActionPort: '<S350>/Action Port'
     */
    BuckyWagon_01_B.s348_Merge = (LVVolt_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S350>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(120);
    }

    /* End of Outputs for SubSystem: '<S348>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S348>/OldValue' incorporates:
     *  ActionPort: '<S351>/Action Port'
     */
    BuckyWagon_01_B.s348_Merge = rtb_to65535_dx;

    /* S-Function (motohawk_sfun_code_cover): '<S351>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(121);
    }

    /* End of Outputs for SubSystem: '<S348>/OldValue' */
  }

  /* End of If: '<S348>/If' */

  /* RelationalOperator: '<S106>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration3'
   */
  rtb_RelationalOperator3 = ((BuckyWagon_01_B.s348_Merge <
    (Low12VThres_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S106>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: LVVoltLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    boolean_T update;
    if (BuckyWagon_01_DWork.s106_motohawk_fault_def5_DWORK1 >= 3) {
      update = 1;
      BuckyWagon_01_DWork.s106_motohawk_fault_def5_DWORK1 = 0;
    } else {
      update = 0;
      BuckyWagon_01_DWork.s106_motohawk_fault_def5_DWORK1++;
    }

    SetFaultSuspected(17, rtb_RelationalOperator3);
    if (update)
      UpdateFault(17);
  }

  /* RelationalOperator: '<S106>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration4'
   */
  rtb_RelationalOperator4_d = ((BuckyWagon_01_B.s348_Merge >
    (High12VThres_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S106>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: LVVoltHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(16, rtb_RelationalOperator4_d);
    UpdateFault(16);
  }

  /* Switch: '<S114>/Switch1' incorporates:
   *  Constant: '<S107>/Constant3'
   *  UnitDelay: '<S114>/Unit Delay'
   */
  if (BuckyWagon_01_ConstB.s114_DataTypeConversion) {
    BuckyWagon_01_B.s114_Switch1 = 0.0;
  } else {
    BuckyWagon_01_B.s114_Switch1 = BuckyWagon_01_DWork.s114_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S114>/Switch1' */
  /* RelationalOperator: '<S113>/LT' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration2'
   */
  rtb_RelationalOperator_fj = (BuckyWagon_01_B.s114_Switch1 >=
    (StallTrqThres_DataStore()));

  /* RelationalOperator: '<S113>/LT1' incorporates:
   *  Constant: '<S107>/Constant4'
   */
  rtb_BelowLoTarget = (BuckyWagon_01_B.s114_Switch1 <= 0.0);

  /* CombinatorialLogic: '<S115>/Combinatorial  Logic' */
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

  /* Switch: '<S115>/Switch1' incorporates:
   *  UnitDelay: '<S115>/Unit Delay'
   */
  if (rtb_CombinatorialLogic[1]) {
    rtb_Switch1_m = rtb_CombinatorialLogic[0];
  } else {
    rtb_Switch1_m = BuckyWagon_01_DWork.s115_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S115>/Switch1' */

  /* S-Function (motohawk_sfun_fault_def): '<S107>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: LockedRotor */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(20, rtb_Switch1_m);
    UpdateFault(20);
  }

  /* Abs: '<S107>/Abs' */
  rtb_Gain7 = fabs(BuckyWagon_01_B.s235_Abs);

  /* Switch: '<S107>/Switch1' incorporates:
   *  Constant: '<S107>/Constant2'
   *  RelationalOperator: '<S107>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration4'
   */
  if ((AccelRstThres_DataStore()) > BuckyWagon_01_B.s348_Merge) {
    rtb_to65535_c = (AccelRstSpd_DataStore());
  } else {
    rtb_to65535_c = 0.0;
  }

  /* End of Switch: '<S107>/Switch1' */
  /* Switch: '<S107>/Switch' incorporates:
   *  Constant: '<S107>/Constant'
   *  Constant: '<S107>/Constant1'
   *  RelationalOperator: '<S107>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration1'
   */
  if (rtb_Gain7 <= (StallSpd_DataStore())) {
    rtb_Gain7 = 1.0;
  } else {
    rtb_Gain7 = -1.0;
  }

  /* End of Switch: '<S107>/Switch' */

  /* Sum: '<S107>/Sum' incorporates:
   *  Product: '<S107>/Product'
   */
  rtb_Merge_k = rtb_Gain7 * BuckyWagon_01_B.s331_Merge - rtb_to65535_c;

  /* S-Function Block: <S114>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s114_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_p = ((real_T) delta) * 0.000001;
  }

  /* MinMax: '<S116>/MinMax' incorporates:
   *  Constant: '<S107>/Constant3'
   *  Product: '<S114>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S114>/motohawk_delta_time'
   *  Sum: '<S114>/Sum'
   */
  rtb_to65535_c = rtb_Merge_k * rtb_motohawk_delta_time_p +
    BuckyWagon_01_B.s114_Switch1;

  /* MinMax: '<S116>/MinMax1' incorporates:
   *  Constant: '<S107>/Constant3'
   *  MinMax: '<S116>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration2'
   */
  rtb_to65535_c = rtb_to65535_c >= 0.0 ? rtb_to65535_c : 0.0;
  rtb_to65535_b = (rtb_to65535_c <= (StallTrqThres_DataStore())) || rtIsNaN
    ((StallTrqThres_DataStore())) ? rtb_to65535_c : (StallTrqThres_DataStore());

  /* Logic: '<S107>/Logical Operator' incorporates:
   *  Constant: '<S112>/Constant'
   *  RelationalOperator: '<S112>/Compare'
   *  UnitDelay: '<S107>/Unit Delay'
   */
  BuckyWagon_01_B.s107_LogicalOperator = (((BuckyWagon_01_B.s340_Merge <= 0.01) ||
    BuckyWagon_01_DWork.s107_UnitDelay_DSTATE));

  /* Logic: '<S107>/Logical Operator1' */
  rtb_LogicalOperator1_fv = !BuckyWagon_01_B.s107_LogicalOperator;

  /* S-Function (motohawk_sfun_fault_def): '<S107>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Accel_NeverZeroed */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(0, rtb_LogicalOperator1_fv);
    UpdateFault(0);
  }

  /* Outputs for Atomic SubSystem: '<S12>/EMP Coolant Pump Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S227>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3511p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3511p0001,
      &messageObj);
    if ((BuckyWagon_01_B.s227_AgeCount + 1) > BuckyWagon_01_B.s227_AgeCount)
      BuckyWagon_01_B.s227_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint16_T tmp3 = 0;
      uint16_T tmp4 = 0;
      uint8_T tmp5 = 0;
      BuckyWagon_01_B.s227_ReadCANMessage_o2 = ((messageObj.u4MessageID &
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
      BuckyWagon_01_B.s227_EMP_Pump_Status = (real_T) tmp0;
      BuckyWagon_01_B.s227_EMP_Pump_Mode = (real_T) tmp1;
      BuckyWagon_01_B.s227_EMP_Pump_Speed = ((real_T) tmp2) / ((real_T) 2);
      BuckyWagon_01_B.s227_EMP_Board_Temp = (((real_T) tmp3) / ((real_T) 32)) +
        ((real_T) -273);
      BuckyWagon_01_B.s227_EMP_Pump_Power = (real_T) tmp4;
      BuckyWagon_01_B.s227_EMP_Speed_Percent = ((real_T) tmp5) / ((real_T) 2);
      BuckyWagon_01_B.s227_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S227>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S227>/motohawk_calibration2'
   */
  rtb_AgeCount = ((real_T)BuckyWagon_01_B.s227_AgeCount >
                  (EMP_CAN_MaxAge_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S227>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: NoCAN_CoolantPump */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(26, rtb_AgeCount);
    UpdateFault(26);
  }

  /* If: '<S280>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S280>/override_enable'
   */
  if ((EMP_Pump_Speed_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S280>/NewValue' incorporates:
     *  ActionPort: '<S286>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S286>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(84);
    }

    /* End of Outputs for SubSystem: '<S280>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S280>/OldValue' incorporates:
     *  ActionPort: '<S287>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S287>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(85);
    }

    /* End of Outputs for SubSystem: '<S280>/OldValue' */
  }

  /* End of If: '<S280>/If' */

  /* If: '<S281>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S281>/override_enable'
   */
  if ((EMP_Speed_Percent_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S281>/NewValue' incorporates:
     *  ActionPort: '<S288>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S288>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(86);
    }

    /* End of Outputs for SubSystem: '<S281>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S281>/OldValue' incorporates:
     *  ActionPort: '<S289>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S289>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(87);
    }

    /* End of Outputs for SubSystem: '<S281>/OldValue' */
  }

  /* End of If: '<S281>/If' */

  /* If: '<S282>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S282>/override_enable'
   */
  if ((EMP_Pump_Mode_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S282>/NewValue' incorporates:
     *  ActionPort: '<S290>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S290>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(88);
    }

    /* End of Outputs for SubSystem: '<S282>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S282>/OldValue' incorporates:
     *  ActionPort: '<S291>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S291>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(89);
    }

    /* End of Outputs for SubSystem: '<S282>/OldValue' */
  }

  /* End of If: '<S282>/If' */

  /* If: '<S283>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S283>/override_enable'
   */
  if ((EMP_Pump_Status_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S283>/NewValue' incorporates:
     *  ActionPort: '<S292>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S292>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(90);
    }

    /* End of Outputs for SubSystem: '<S283>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S283>/OldValue' incorporates:
     *  ActionPort: '<S293>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S293>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(91);
    }

    /* End of Outputs for SubSystem: '<S283>/OldValue' */
  }

  /* End of If: '<S283>/If' */

  /* If: '<S284>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S284>/override_enable'
   */
  if ((EMP_Board_Temp_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S284>/NewValue' incorporates:
     *  ActionPort: '<S294>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S294>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(92);
    }

    /* End of Outputs for SubSystem: '<S284>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S284>/OldValue' incorporates:
     *  ActionPort: '<S295>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S295>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(93);
    }

    /* End of Outputs for SubSystem: '<S284>/OldValue' */
  }

  /* End of If: '<S284>/If' */

  /* If: '<S285>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S285>/override_enable'
   */
  if ((EMP_Pump_Power_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S285>/NewValue' incorporates:
     *  ActionPort: '<S296>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S296>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(94);
    }

    /* End of Outputs for SubSystem: '<S285>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S285>/OldValue' incorporates:
     *  ActionPort: '<S297>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S297>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(95);
    }

    /* End of Outputs for SubSystem: '<S285>/OldValue' */
  }

  /* End of If: '<S285>/If' */
  /* End of Outputs for SubSystem: '<S12>/EMP Coolant Pump Inputs' */

  /* Outputs for Atomic SubSystem: '<S12>/EHPAS Power Steering Pump Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S226>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3455p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3455p0001,
      &messageObj);
    if ((BuckyWagon_01_B.s226_AgeCount + 1) > BuckyWagon_01_B.s226_AgeCount)
      BuckyWagon_01_B.s226_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint8_T tmp4 = 0;
      uint8_T tmp5 = 0;
      uint8_T tmp6 = 0;
      BuckyWagon_01_B.s226_ReadCANMessage_o2 = ((messageObj.u4MessageID &
        (0x0000000F)) >> 0);
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp2))[1] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[6] & 0x0000000F)) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[6] & 0x00000070) >> 4) ;
      BuckyWagon_01_B.s226_EHPAS_Input_Voltage = ((real_T) tmp0) * ((real_T) 2);
      BuckyWagon_01_B.s226_EHPAS_Input_Current_NA = ((real_T) tmp1) / ((real_T)
        10);
      BuckyWagon_01_B.s226_EHPAS_Pump_Speed = ((real_T) tmp2) / ((real_T) 8);
      BuckyWagon_01_B.s226_EHPAS_TempMax = ((real_T) tmp3) + ((real_T) -40);
      BuckyWagon_01_B.s226_EHPAS_TempCur = ((real_T) tmp4) + ((real_T) -40);
      BuckyWagon_01_B.s226_EHPAS_Op_State = (real_T) tmp5;
      BuckyWagon_01_B.s226_EHPAS_Fault = (real_T) tmp6;
      BuckyWagon_01_B.s226_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S258>/Compare' incorporates:
   *  Constant: '<S258>/Constant'
   */
  rtb_Compare_f = ((BuckyWagon_01_B.s226_AgeCount > 20U));

  /* S-Function (motohawk_sfun_fault_def): '<S226>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: NoCAN_PowerSteering */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(29, rtb_Compare_f);
    UpdateFault(29);
  }

  /* If: '<S259>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S259>/override_enable'
   */
  if ((EHPAS_Pump_Speed_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S259>/NewValue' incorporates:
     *  ActionPort: '<S266>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S266>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(70);
    }

    /* End of Outputs for SubSystem: '<S259>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S259>/OldValue' incorporates:
     *  ActionPort: '<S267>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S267>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(71);
    }

    /* End of Outputs for SubSystem: '<S259>/OldValue' */
  }

  /* End of If: '<S259>/If' */

  /* If: '<S260>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S260>/override_enable'
   */
  if ((EHPAS_Op_State_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S260>/NewValue' incorporates:
     *  ActionPort: '<S268>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S268>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(72);
    }

    /* End of Outputs for SubSystem: '<S260>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S260>/OldValue' incorporates:
     *  ActionPort: '<S269>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S269>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(73);
    }

    /* End of Outputs for SubSystem: '<S260>/OldValue' */
  }

  /* End of If: '<S260>/If' */

  /* If: '<S261>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S261>/override_enable'
   */
  if ((EHPAS_Input_Current_NA_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S261>/NewValue' incorporates:
     *  ActionPort: '<S270>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S270>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(74);
    }

    /* End of Outputs for SubSystem: '<S261>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S261>/OldValue' incorporates:
     *  ActionPort: '<S271>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S271>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(75);
    }

    /* End of Outputs for SubSystem: '<S261>/OldValue' */
  }

  /* End of If: '<S261>/If' */

  /* If: '<S262>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S262>/override_enable'
   */
  if ((EHPAS_Input_Voltage_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S262>/NewValue' incorporates:
     *  ActionPort: '<S272>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S272>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(76);
    }

    /* End of Outputs for SubSystem: '<S262>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S262>/OldValue' incorporates:
     *  ActionPort: '<S273>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S273>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(77);
    }

    /* End of Outputs for SubSystem: '<S262>/OldValue' */
  }

  /* End of If: '<S262>/If' */

  /* If: '<S263>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S263>/override_enable'
   */
  if ((EHPAS_Fault_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S263>/NewValue' incorporates:
     *  ActionPort: '<S274>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S274>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(78);
    }

    /* End of Outputs for SubSystem: '<S263>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S263>/OldValue' incorporates:
     *  ActionPort: '<S275>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S275>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(79);
    }

    /* End of Outputs for SubSystem: '<S263>/OldValue' */
  }

  /* End of If: '<S263>/If' */

  /* If: '<S264>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S264>/override_enable'
   */
  if ((EHPAS_TempMax_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S264>/NewValue' incorporates:
     *  ActionPort: '<S276>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S276>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(80);
    }

    /* End of Outputs for SubSystem: '<S264>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S264>/OldValue' incorporates:
     *  ActionPort: '<S277>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S277>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(81);
    }

    /* End of Outputs for SubSystem: '<S264>/OldValue' */
  }

  /* End of If: '<S264>/If' */

  /* If: '<S265>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S265>/override_enable'
   */
  if ((EHPAS_TempCur_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S265>/NewValue' incorporates:
     *  ActionPort: '<S278>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S278>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(82);
    }

    /* End of Outputs for SubSystem: '<S265>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S265>/OldValue' incorporates:
     *  ActionPort: '<S279>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S279>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(83);
    }

    /* End of Outputs for SubSystem: '<S265>/OldValue' */
  }

  /* End of If: '<S265>/If' */
  /* End of Outputs for SubSystem: '<S12>/EHPAS Power Steering Pump Inputs' */
  /* If: '<S300>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S300>/override_enable'
   */
  if ((FaultSeverityIndicator_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S300>/NewValue' incorporates:
     *  ActionPort: '<S310>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S310>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(96);
    }

    /* End of Outputs for SubSystem: '<S300>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S300>/OldValue' incorporates:
     *  ActionPort: '<S311>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S311>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(97);
    }

    /* End of Outputs for SubSystem: '<S300>/OldValue' */
  }

  /* End of If: '<S300>/If' */

  /* If: '<S301>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S301>/override_enable'
   */
  if ((ChargerState_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S301>/NewValue' incorporates:
     *  ActionPort: '<S312>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S312>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(98);
    }

    /* End of Outputs for SubSystem: '<S301>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S301>/OldValue' incorporates:
     *  ActionPort: '<S313>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S313>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(99);
    }

    /* End of Outputs for SubSystem: '<S301>/OldValue' */
  }

  /* End of If: '<S301>/If' */

  /* If: '<S302>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S302>/override_enable'
   */
  if ((IgnitionStatus_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S302>/NewValue' incorporates:
     *  ActionPort: '<S314>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S314>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(100);
    }

    /* End of Outputs for SubSystem: '<S302>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S302>/OldValue' incorporates:
     *  ActionPort: '<S315>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S315>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(101);
    }

    /* End of Outputs for SubSystem: '<S302>/OldValue' */
  }

  /* End of If: '<S302>/If' */

  /* If: '<S303>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S303>/override_enable'
   */
  if ((Eaton_HV_Charger_Temperature_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S303>/NewValue' incorporates:
     *  ActionPort: '<S316>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S316>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(102);
    }

    /* End of Outputs for SubSystem: '<S303>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S303>/OldValue' incorporates:
     *  ActionPort: '<S317>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S317>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(103);
    }

    /* End of Outputs for SubSystem: '<S303>/OldValue' */
  }

  /* End of If: '<S303>/If' */

  /* If: '<S305>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S305>/override_enable'
   */
  if ((OutputVoltage_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S305>/NewValue' incorporates:
     *  ActionPort: '<S320>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S320>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(106);
    }

    /* End of Outputs for SubSystem: '<S305>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S305>/OldValue' incorporates:
     *  ActionPort: '<S321>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S321>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(107);
    }

    /* End of Outputs for SubSystem: '<S305>/OldValue' */
  }

  /* End of If: '<S305>/If' */

  /* If: '<S306>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S306>/override_enable'
   */
  if ((InputCurrentLimitMax_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S306>/NewValue' incorporates:
     *  ActionPort: '<S322>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S322>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(108);
    }

    /* End of Outputs for SubSystem: '<S306>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S306>/OldValue' incorporates:
     *  ActionPort: '<S323>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S323>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(109);
    }

    /* End of Outputs for SubSystem: '<S306>/OldValue' */
  }

  /* End of If: '<S306>/If' */

  /* If: '<S307>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S307>/override_enable'
   */
  if ((InputCurrent_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S307>/NewValue' incorporates:
     *  ActionPort: '<S324>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S324>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(110);
    }

    /* End of Outputs for SubSystem: '<S307>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S307>/OldValue' incorporates:
     *  ActionPort: '<S325>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S325>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(111);
    }

    /* End of Outputs for SubSystem: '<S307>/OldValue' */
  }

  /* End of If: '<S307>/If' */

  /* S-Function (motohawk_sfun_trigger): '<S2>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_4151p0004 */
  if (BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 == 0) {
    BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S2>/motohawk_trigger' */
  /* Enable for Trigger_FGND_RTI_PERIODIC_4150p0006 */
  if (BuckyWagon_01_DWork.s2_motohawk_trigger_DWORK1 == 0) {
    BuckyWagon_01_DWork.s2_motohawk_trigger_DWORK1 = 1;
  }

  /* Gain: '<S127>/Gain1' incorporates:
   *  Product: '<S127>/Product'
   */
  BuckyWagon_01_B.s127_Gain1 = BuckyWagon_01_B.s224_bcm_vbat *
    BuckyWagon_01_B.s224_bcm_ibat * 0.001;

  /* Gain: '<S127>/Gain4' incorporates:
   *  Sum: '<S127>/Add'
   */
  BuckyWagon_01_B.s127_Gain4 = (BuckyWagon_01_B.s224_bcm_ibat + 0.0) * -1.0;

  /* Gain: '<S127>/Gain5' incorporates:
   *  Product: '<S127>/Product3'
   */
  BuckyWagon_01_B.s127_Gain5 = BuckyWagon_01_B.s127_Gain4 *
    BuckyWagon_01_B.s224_bcm_vbat * 0.001;

  /* Gain: '<S127>/Gain6' incorporates:
   *  Product: '<S127>/Product6'
   */
  BuckyWagon_01_B.s127_Gain6 = 0.0 * BuckyWagon_01_B.s224_bcm_vbat * 0.001;

  /* RelationalOperator: '<S127>/Relational Operator' incorporates:
   *  Constant: '<S127>/Constant'
   */
  rtb_RelationalOperator_fj = (BuckyWagon_01_B.s127_Gain4 >= 0.0);

  /* Product: '<S127>/Product5' */
  rtb_to65535_c = BuckyWagon_01_B.s127_Gain4 * (real_T)rtb_RelationalOperator_fj;

  /* Product: '<S127>/Product7' */
  rtb_Merge_k = rtb_to65535_c * BuckyWagon_01_B.s224_bcm_vbat;

  /* S-Function Block: <S127>/motohawk_delta_time2 */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s127_motohawk_delta_time2_DWORK1, NULL);
    rtb_motohawk_delta_time2 = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S127>/Sum1' incorporates:
   *  Product: '<S127>/Product8'
   *  S-Function (motohawk_sfun_delta_time): '<S127>/motohawk_delta_time2'
   *  UnitDelay: '<S127>/Unit Delay1'
   */
  rtb_to65535_d = rtb_Merge_k * rtb_motohawk_delta_time2 +
    BuckyWagon_01_DWork.s127_UnitDelay1_DSTATE;

  /* Gain: '<S127>/Gain7' */
  rtb_Gain7 = 0.00027777777777777778 * rtb_to65535_d;

  /* Gain: '<S127>/Gain8' */
  BuckyWagon_01_B.s127_Gain8 = 0.001 * rtb_Gain7;

  /* UnitDelay: '<S117>/Unit Delay' */
  rtb_UnitDelay_b = BuckyWagon_01_DWork.s117_UnitDelay_DSTATE;

  /* Product: '<S127>/Divide3' */
  BuckyWagon_01_B.s127_Divide3 = rtb_Gain7 / rtb_UnitDelay_b;

  /* Product: '<S127>/Product1' incorporates:
   *  Sum: '<S127>/Add1'
   */
  rtb_to65535_c = (rtb_to65535_c + 0.0) * BuckyWagon_01_B.s224_bcm_vbat;

  /* Gain: '<S127>/Gain' */
  BuckyWagon_01_B.s127_Gain = 0.001 * rtb_to65535_c;

  /* S-Function Block: <S127>/motohawk_delta_time1 */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s127_motohawk_delta_time1_DWORK1, NULL);
    rtb_motohawk_delta_time1 = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S127>/Sum' incorporates:
   *  Product: '<S127>/Product4'
   *  S-Function (motohawk_sfun_delta_time): '<S127>/motohawk_delta_time1'
   *  UnitDelay: '<S127>/Unit Delay'
   */
  rtb_Switch_h = rtb_to65535_c * rtb_motohawk_delta_time1 +
    BuckyWagon_01_DWork.s127_UnitDelay_DSTATE;

  /* Gain: '<S127>/Gain2' */
  rtb_Gain2 = 0.00027777777777777778 * rtb_Switch_h;

  /* Gain: '<S127>/Gain3' */
  BuckyWagon_01_B.s127_Gain3 = 0.001 * rtb_Gain2;

  /* Product: '<S127>/Divide' */
  BuckyWagon_01_B.s127_Divide = rtb_Gain2 / rtb_UnitDelay_b;

  /* Stateflow: '<S127>/Downsapmle1' */
  BuckyWagon_01_Downsapmle(rtb_Gain2, (Downsample_DataStore()),
    &BuckyWagon_01_B.s127_sf_Downsapmle1,
    &BuckyWagon_01_DWork.s127_sf_Downsapmle1);

  /* Sum: '<S127>/Subtract1' */
  rtb_Merge_k = BuckyWagon_01_B.s127_sf_Downsapmle1.s128_Out_2 -
    BuckyWagon_01_B.s127_sf_Downsapmle1.s128_Out_1;

  /* Stateflow: '<S127>/Downsapmle' */
  BuckyWagon_01_Downsapmle(rtb_UnitDelay_b, (Downsample_DataStore()),
    &BuckyWagon_01_B.s127_sf_Downsapmle, &BuckyWagon_01_DWork.s127_sf_Downsapmle);

  /* Saturate: '<S127>/Saturation' incorporates:
   *  Product: '<S127>/Divide1'
   *  Sum: '<S127>/Subtract'
   */
  rtb_to65535_c = rtb_Merge_k / (BuckyWagon_01_B.s127_sf_Downsapmle.s128_Out_2 -
    BuckyWagon_01_B.s127_sf_Downsapmle.s128_Out_1);
  BuckyWagon_01_B.s127_Saturation = rtb_to65535_c >= 50000.0 ? 50000.0 :
    rtb_to65535_c <= -1.0E+6 ? -1.0E+6 : rtb_to65535_c;

  /* Gain: '<S126>/Gain' incorporates:
   *  Abs: '<S126>/Abs'
   */
  rtb_Merge_k = 0.00027777777777777778 * fabs(BuckyWagon_01_B.s235_Abs);

  /* S-Function Block: <S126>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s126_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_o = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S126>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S126>/motohawk_delta_time'
   */
  rtb_to65535_c = rtb_Merge_k * rtb_motohawk_delta_time_o;

  /* Sum: '<S126>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read'
   */
  BuckyWagon_01_B.s126_Sum1 = rtb_to65535_c + Odometer_DataStore();

  /* S-Function (motohawk_sfun_data_write): '<S126>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Odometer */
  {
    Odometer_DataStore() = BuckyWagon_01_B.s126_Sum1;
  }

  /* Sum: '<S126>/Sum' incorporates:
   *  UnitDelay: '<S126>/Unit Delay'
   */
  BuckyWagon_01_B.s126_Sum = rtb_to65535_c +
    BuckyWagon_01_DWork.s126_UnitDelay_DSTATE;

  /* If: '<S151>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S151>/override_enable'
   */
  if ((EHPAS_PumpState_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S151>/NewValue' incorporates:
     *  ActionPort: '<S153>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S153>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(48);
    }

    /* End of Outputs for SubSystem: '<S151>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S151>/OldValue' incorporates:
     *  ActionPort: '<S154>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S154>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(49);
    }

    /* End of Outputs for SubSystem: '<S151>/OldValue' */
  }

  /* End of If: '<S151>/If' */

  /* S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration2' */
  rtb_motohawk_calibration8 = (EHPAS_LowSpeedManeuvering_DataStore());

  /* S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration4' */
  rtb_motohawk_calibration8 = (EHPAS_NormalDriving_DataStore());

  /* S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration5' */
  rtb_motohawk_calibration8 = (EHPAS_BrakingNormalDriving_DataStore());

  /* S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration6' */
  rtb_motohawk_calibration8 = (EHPAS_KeyUpActive_DataStore());

  /* S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration7' */
  rtb_motohawk_calibration8 = (EHPAS_BrakingZeroSpeed_DataStore());

  /* S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration8' */
  rtb_motohawk_calibration8 = (EHPAS_ZeroCommand_DataStore());

  /* Logic: '<S12>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S12>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration5'
   */
  rtb_LogicalOperator1_jy = (((BuckyWagon_01_B.s224_bcm_cell_tmax >=
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
  rtb_LogicalOperator3_l = ((BuckyWagon_01_B.s241_Merge &&
    (BuckyWagon_01_B.s224_bcm_vbat >= (ChargeInterruptor_Voltage_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S12>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: ChargeComplete */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(7, rtb_LogicalOperator3_l);
    UpdateFault(7);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S12>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: ESTOPped */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(8, BuckyWagon_01_B.s236_Merge);
    UpdateFault(8);
  }

  /* Logic: '<S12>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S12>/Relational Operator5'
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration1'
   */
  rtb_LogicalOperator2_d = (((BuckyWagon_01_B.s224_bcm_cell_tmin <=
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
  rtb_RelationalOperator_k = (BuckyWagon_01_B.s224_bcm_gfd <=
    (A123_Isolation_Monitor_Ground_Fault_Threshold_DataStore()));

  /* Outputs for Enabled SubSystem: '<S12>/Time Since Enabled (With Input)1' incorporates:
   *  EnablePort: '<S233>/Enable'
   */
  if (BuckyWagon_01_B.s360_Sum > 0.0) {
    if (!BuckyWagon_01_DWork.s12_TimeSinceEnabledWithInput1_MODE) {
      /* S-Function Block: <S233>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BuckyWagon_01_DWork.s233_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S233>/Unit Delay' */
      BuckyWagon_01_DWork.s233_UnitDelay_DSTATE = 0.0;
      BuckyWagon_01_DWork.s12_TimeSinceEnabledWithInput1_MODE = TRUE;
    }

    /* S-Function Block: <S233>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BuckyWagon_01_DWork.s233_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_b = ((real_T) delta) * 0.000001;
    }

    /* UnitDelay: '<S233>/Unit Delay' */
    BuckyWagon_01_B.s233_UnitDelay = BuckyWagon_01_DWork.s233_UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S233>/Unit Delay' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S233>/motohawk_delta_time'
     *  Sum: '<S233>/Sum'
     */
    BuckyWagon_01_DWork.s233_UnitDelay_DSTATE = rtb_motohawk_delta_time_b +
      BuckyWagon_01_B.s233_UnitDelay;
  } else {
    if (BuckyWagon_01_DWork.s12_TimeSinceEnabledWithInput1_MODE) {
      /* Disable for Outport: '<S233>/Time Since Enabled [sec]' */
      BuckyWagon_01_B.s233_UnitDelay = 0.0;
      BuckyWagon_01_DWork.s12_TimeSinceEnabledWithInput1_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S12>/Time Since Enabled (With Input)1' */
  /* Logic: '<S12>/Logical Operator' incorporates:
   *  RelationalOperator: '<S12>/Relational Operator8'
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration8'
   */
  rtb_LogicalOperator_d = ((rtb_RelationalOperator_k && rtb_LogicalOperator1_jo &&
                            (BuckyWagon_01_B.s233_UnitDelay >=
    (HV_GFI_Check_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S12>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: GroundFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(10, rtb_LogicalOperator_d);
    UpdateFault(10);
  }

  /* RelationalOperator: '<S12>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration6'
   */
  rtb_RelationalOperator6 = ((BuckyWagon_01_B.s229_Inverter_Temperature >
    (InverterTemp_Overheat_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S12>/motohawk_fault_def9' */

  /* Set Fault Suspected Status: Inverter_OverTemp */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(15, rtb_RelationalOperator6);
    UpdateFault(15);
  }

  /* Logic: '<S228>/Logical Operator' incorporates:
   *  Constant: '<S298>/Constant'
   *  RelationalOperator: '<S298>/Compare'
   */
  rtb_LogicalOperator_b = ((BuckyWagon_01_B.s309_pluggedIn &&
    (BuckyWagon_01_B.s228_AgeCount >= 30U)));

  /* S-Function (motohawk_sfun_fault_def): '<S228>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Eaton_CAN_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(9, rtb_LogicalOperator_b);
    UpdateFault(9);
  }

  /* Logic: '<S230>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S230>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S230>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S230>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_pz = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_i > (Accel_InputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S230>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Accel_RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(1, rtb_LogicalOperator2_pz);
    UpdateFault(1);
  }

  /* Logic: '<S230>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S230>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S230>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S230>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_d = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_i < (Accel_InputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S230>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Accel_RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(2, rtb_LogicalOperator3_d);
    UpdateFault(2);
  }

  /* Logic: '<S231>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S231>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S231>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S231>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_k = ((MPRD_DataStore() && (rtb_DataTypeConversion_d >
    (LVVolt_InputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S231>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: LVVolt_RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(18, rtb_LogicalOperator2_k);
    UpdateFault(18);
  }

  /* Logic: '<S231>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S231>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S231>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S231>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_f = ((MPRD_DataStore() && (rtb_DataTypeConversion_d <
    (LVVolt_InputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S231>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: LVVolt_RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(19, rtb_LogicalOperator3_f);
    UpdateFault(19);
  }

  /* Logic: '<S232>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S232>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S232>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S232>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_dm = ((MPRD_DataStore() && (rtb_DataTypeConversion_b >
    (Brake_InputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S232>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Brake_RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(5, rtb_LogicalOperator2_dm);
    UpdateFault(5);
  }

  /* Logic: '<S232>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S232>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S232>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S232>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_b <
    (Brake_InputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S232>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Brake_RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(6, rtb_LogicalOperator3_p);
    UpdateFault(6);
  }

  /* Saturate: '<S360>/Saturation' */
  rtb_Saturation = BuckyWagon_01_B.s360_Sum >= 16000.0 ? 16000.0 :
    BuckyWagon_01_B.s360_Sum <= 0.0 ? 0.0 : BuckyWagon_01_B.s360_Sum;

  /* S-Function (motohawk_sfun_data_write): '<S360>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceKeyOnTimer */
  {
    TimeSinceKeyOnTimer_DataStore() = rtb_Saturation;
  }

  /* Update for UnitDelay: '<S230>/Unit Delay1' */
  BuckyWagon_01_DWork.s230_UnitDelay1_DSTATE = rtb_Merge_c;

  /* Update for UnitDelay: '<S341>/Unit Delay' */
  BuckyWagon_01_DWork.s341_UnitDelay_DSTATE = rtb_Sum1;

  /* Update for UnitDelay: '<S232>/Unit Delay1' */
  BuckyWagon_01_DWork.s232_UnitDelay1_DSTATE = rtb_Merge_e;

  /* Update for UnitDelay: '<S357>/Unit Delay' */
  BuckyWagon_01_DWork.s357_UnitDelay_DSTATE = rtb_Sum1_o;

  /* Update for UnitDelay: '<S157>/Unit Delay' */
  BuckyWagon_01_DWork.s157_UnitDelay_DSTATE = BuckyWagon_01_B.s157_Sum1;

  /* Update for UnitDelay: '<S67>/Unit Delay' */
  BuckyWagon_01_DWork.s67_UnitDelay_DSTATE = BuckyWagon_01_B.s71_UnitDelay2;

  /* Update for UnitDelay: '<S231>/Unit Delay1' */
  BuckyWagon_01_DWork.s231_UnitDelay1_DSTATE = rtb_Merge_ep;

  /* Update for UnitDelay: '<S349>/Unit Delay' */
  BuckyWagon_01_DWork.s349_UnitDelay_DSTATE = rtb_to65535_dx;

  /* Update for UnitDelay: '<S114>/Unit Delay' incorporates:
   *  MinMax: '<S116>/MinMax1'
   */
  BuckyWagon_01_DWork.s114_UnitDelay_DSTATE = rtb_to65535_b;

  /* Update for UnitDelay: '<S115>/Unit Delay' */
  BuckyWagon_01_DWork.s115_UnitDelay_DSTATE = rtb_Switch1_m;

  /* Update for UnitDelay: '<S107>/Unit Delay' */
  BuckyWagon_01_DWork.s107_UnitDelay_DSTATE =
    BuckyWagon_01_B.s107_LogicalOperator;

  /* Update for UnitDelay: '<S127>/Unit Delay1' */
  BuckyWagon_01_DWork.s127_UnitDelay1_DSTATE = rtb_to65535_d;

  /* Update for UnitDelay: '<S117>/Unit Delay' */
  BuckyWagon_01_DWork.s117_UnitDelay_DSTATE = BuckyWagon_01_B.s126_Sum;

  /* Update for UnitDelay: '<S127>/Unit Delay' */
  BuckyWagon_01_DWork.s127_UnitDelay_DSTATE = rtb_Switch_h;

  /* Update for UnitDelay: '<S126>/Unit Delay' */
  BuckyWagon_01_DWork.s126_UnitDelay_DSTATE = BuckyWagon_01_B.s126_Sum;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
