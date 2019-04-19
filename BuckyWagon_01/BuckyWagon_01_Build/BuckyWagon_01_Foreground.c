/*
 * File: BuckyWagon_01_Foreground.c
 *
 * Code generated for Simulink model 'BuckyWagon_01'.
 *
 * Model version                  : 1.1575
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Thu Apr 18 08:31:45 2019
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

/* Named constants for Stateflow: '<S118>/Downsapmle' */
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

/* Named constants for Stateflow: '<S132>/Inverter Overheat Logic' */
#define BuckyWagon_01_IN_Off_k         (1U)
#define BuckyWagon_01_IN_On            (2U)

/* Named constants for Stateflow: '<S112>/Chart' */
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

/* Named constants for Stateflow: '<S115>/Chart' */
#define BuckyWagon_01_IN_Forward       (1U)
#define BuckyWagon_01_IN_Main          (1U)
#define BuckyWagon_01_IN_Reverse       (2U)
#define BuckyWagon_01_IN_TransistionOff (1U)
#define BuckyWagon_01_IN_TransistionOn (2U)
#define BuckyWagon_01_IN_waitRelease   (3U)
#define BuckyWagon_01_event_buttonPress (0)

/* Named constants for Stateflow: '<S306>/Chart' */
#define BuckyWagon_01_IN_CountDown     (1U)
#define BuckyWagon_01_IN_Off_p         (2U)
#define BuckyWagon_01_IN_On_p          (3U)
#define BuckyWagon_01_IN_countUp       (4U)

/* Forward declaration for local functions */
static void BuckyWagon_01_c1_BuckyWagon_01(void);

/*
 * Initial conditions for atomic system:
 *    '<S118>/Downsapmle'
 *    '<S118>/Downsapmle1'
 */
void BuckyWagon_01_Downsapmle_Init(rtB_Downsapmle_BuckyWagon_01 *localB,
  rtDW_Downsapmle_BuckyWagon_01 *localDW)
{
  localDW->s119_is_active_c11_BuckyWagon_01 = 0U;
  localDW->s119_is_c11_BuckyWagon_01 = 0U;
  localDW->s119_count = 0.0;
  localDW->s119_Val1 = 0.0;
  localDW->s119_Val2 = 0.0;
  localB->s119_Out_1 = 0.0;
  localB->s119_Out_2 = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S118>/Downsapmle'
 *    '<S118>/Downsapmle1'
 */
void BuckyWagon_01_Downsapmle(real_T rtu_Val_In, real_T rtu_numb_downsamp,
  rtB_Downsapmle_BuckyWagon_01 *localB, rtDW_Downsapmle_BuckyWagon_01 *localDW)
{
  /* Gateway: Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle */
  /* During: Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle */
  if (localDW->s119_is_active_c11_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Control Strategy/Calculations/kW calculation1/Downsapmle */
    localDW->s119_is_active_c11_BuckyWagon_01 = 1U;

    /* Transition: '<S119>:75' */
    localDW->s119_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_downsample;

    /* Entry 'downsample': '<S119>:22' */
    localDW->s119_count = 0.0;
  } else {
    switch (localDW->s119_is_c11_BuckyWagon_01) {
     case BuckyWagon_01_IN_Out:
      /* During 'Out': '<S119>:48' */
      if (localDW->s119_count >= 2.0) {
        /* Transition: '<S119>:51' */
        localDW->s119_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_downsample;

        /* Entry 'downsample': '<S119>:22' */
        localDW->s119_count = 0.0;
      } else {
        localDW->s119_count = localDW->s119_count + 1.0;
      }
      break;

     case BuckyWagon_01_IN_Value_1:
      /* During 'Value_1': '<S119>:29' */
      if (localDW->s119_count >= 2.0) {
        /* Transition: '<S119>:40' */
        localDW->s119_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_downsample_2;

        /* Entry 'downsample_2': '<S119>:30' */
        localDW->s119_count = 0.0;
      } else {
        localDW->s119_count = localDW->s119_count + 1.0;
      }
      break;

     case BuckyWagon_01_IN_Value_2:
      /* During 'Value_2': '<S119>:31' */
      if (localDW->s119_count >= 2.0) {
        /* Transition: '<S119>:78' */
        localDW->s119_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_Out;

        /* Entry 'Out': '<S119>:48' */
        localDW->s119_count = 0.0;
        localB->s119_Out_1 = localDW->s119_Val1;
        localB->s119_Out_2 = localDW->s119_Val2;
      } else {
        localDW->s119_count = localDW->s119_count + 1.0;
      }
      break;

     case BuckyWagon_01_IN_downsample:
      /* During 'downsample': '<S119>:22' */
      if (localDW->s119_count >= rtu_numb_downsamp) {
        /* Transition: '<S119>:34' */
        localDW->s119_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_Value_1;

        /* Entry 'Value_1': '<S119>:29' */
        localDW->s119_Val1 = rtu_Val_In;
        localDW->s119_count = 0.0;
      } else {
        localDW->s119_count = localDW->s119_count + 1.0;
      }
      break;

     case BuckyWagon_01_IN_downsample_2:
      /* During 'downsample_2': '<S119>:30' */
      if (localDW->s119_count >= rtu_numb_downsamp) {
        /* Transition: '<S119>:42' */
        localDW->s119_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_Value_2;

        /* Entry 'Value_2': '<S119>:31' */
        localDW->s119_Val2 = rtu_Val_In;
        localDW->s119_count = 0.0;
      } else {
        localDW->s119_count = localDW->s119_count + 1.0;
      }
      break;

     default:
      /* Transition: '<S119>:75' */
      localDW->s119_is_c11_BuckyWagon_01 = BuckyWagon_01_IN_downsample;

      /* Entry 'downsample': '<S119>:22' */
      localDW->s119_count = 0.0;
      break;
    }
  }
}

/*
 * Output and update for action system:
 *    '<S218>/If Action Subsystem'
 *    '<S218>/If Action Subsystem1'
 *    '<S218>/If Action Subsystem2'
 *    '<S219>/If Action Subsystem'
 *    '<S219>/If Action Subsystem1'
 *    '<S219>/If Action Subsystem2'
 *    '<S220>/If Action Subsystem'
 *    '<S220>/If Action Subsystem1'
 *    '<S220>/If Action Subsystem2'
 */
void BuckyWagon_01_IfActionSubsystem(real_T rtu_0, real_T *rty_Out)
{
  /* Inport: '<S336>/In' */
  (*rty_Out) = rtu_0;
}

/* Function for Stateflow: '<S115>/Chart' */
static void BuckyWagon_01_c1_BuckyWagon_01(void)
{
  int32_T b_previousEvent;

  /* During: Foreground/Control Strategy/Reverse/Chart */
  if (BuckyWagon_01_DWork.s158_is_active_c1_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Control Strategy/Reverse/Chart */
    BuckyWagon_01_DWork.s158_is_active_c1_BuckyWagon_01 = 1U;
    BuckyWagon_01_DWork.s158_is_c1_BuckyWagon_01 = BuckyWagon_01_IN_Main;
    BuckyWagon_01_DWork.s158_is_active_ButtonDebounce = 1U;

    /* Transition: '<S158>:16' */
    BuckyWagon_01_DWork.s158_is_ButtonDebounce = BuckyWagon_01_IN_TransistionOn;
    BuckyWagon_01_DWork.s158_is_active_ReverseLogic = 1U;

    /* Transition: '<S158>:17' */
    if (BuckyWagon_01_DWork.s158_is_ReverseLogic != BuckyWagon_01_IN_Forward) {
      BuckyWagon_01_DWork.s158_is_ReverseLogic = BuckyWagon_01_IN_Forward;

      /* Entry 'Forward': '<S158>:7' */
      BuckyWagon_01_B.s158_inReverse = 0.0;
    }
  } else {
    if (BuckyWagon_01_DWork.s158_is_c1_BuckyWagon_01 == BuckyWagon_01_IN_Main) {
      /* During 'Main': '<S158>:1' */
      if (BuckyWagon_01_DWork.s158_is_active_ButtonDebounce != 0) {
        /* During 'ButtonDebounce': '<S158>:2' */
        switch (BuckyWagon_01_DWork.s158_is_ButtonDebounce) {
         case BuckyWagon_01_IN_TransistionOff:
          /* During 'TransistionOff': '<S158>:6' */
          if (BuckyWagon_01_DWork.s158_timer >= (offTime_DataStore())) {
            /* Transition: '<S158>:10' */
            BuckyWagon_01_DWork.s158_is_ButtonDebounce =
              BuckyWagon_01_IN_TransistionOn;
          } else if (BuckyWagon_01_B.s244_Merge) {
            /* Transition: '<S158>:9' */
            BuckyWagon_01_DWork.s158_timer = 0.0;
            BuckyWagon_01_DWork.s158_is_ButtonDebounce =
              BuckyWagon_01_IN_TransistionOff;
          } else {
            BuckyWagon_01_DWork.s158_timer = BuckyWagon_01_DWork.s158_timer +
              1.0;
          }
          break;

         case BuckyWagon_01_IN_TransistionOn:
          /* During 'TransistionOn': '<S158>:5' */
          if (!BuckyWagon_01_B.s244_Merge) {
            /* Transition: '<S158>:13' */
            BuckyWagon_01_DWork.s158_timer = 0.0;
            BuckyWagon_01_DWork.s158_is_ButtonDebounce =
              BuckyWagon_01_IN_TransistionOn;
          } else if (BuckyWagon_01_DWork.s158_timer >= (onTime_DataStore())) {
            /* Transition: '<S158>:11' */
            BuckyWagon_01_DWork.s158_is_ButtonDebounce =
              BuckyWagon_01_IN_waitRelease;

            /* Entry 'waitRelease': '<S158>:3' */
            /* Event: '<S158>:29' */
            b_previousEvent = BuckyWagon_01_DWork.s158_sfEvent;
            BuckyWagon_01_DWork.s158_sfEvent = BuckyWagon_01_event_buttonPress;
            BuckyWagon_01_c1_BuckyWagon_01();
            BuckyWagon_01_DWork.s158_sfEvent = b_previousEvent;
          } else {
            BuckyWagon_01_DWork.s158_timer = BuckyWagon_01_DWork.s158_timer +
              1.0;
          }
          break;

         case BuckyWagon_01_IN_waitRelease:
          /* During 'waitRelease': '<S158>:3' */
          if (!BuckyWagon_01_B.s244_Merge) {
            /* Transition: '<S158>:12' */
            BuckyWagon_01_DWork.s158_is_ButtonDebounce =
              BuckyWagon_01_IN_TransistionOff;
          }
          break;

         default:
          BuckyWagon_01_DWork.s158_is_ButtonDebounce = (uint8_T)0U;
          break;
        }
      }

      if (BuckyWagon_01_DWork.s158_is_active_ReverseLogic != 0) {
        /* During 'ReverseLogic': '<S158>:4' */
        switch (BuckyWagon_01_DWork.s158_is_ReverseLogic) {
         case BuckyWagon_01_IN_Forward:
          /* During 'Forward': '<S158>:7' */
          if ((BuckyWagon_01_DWork.s158_sfEvent ==
               BuckyWagon_01_event_buttonPress) && ((BuckyWagon_01_B.s115_Abs <
                (revSpdThres_DataStore())) && (BuckyWagon_01_B.s339_Merge <
                (revAccThres_DataStore())))) {
            /* Transition: '<S158>:15' */
            BuckyWagon_01_DWork.s158_is_ReverseLogic = BuckyWagon_01_IN_Reverse;

            /* Entry 'Reverse': '<S158>:8' */
            BuckyWagon_01_B.s158_inReverse = 1.0;
          }
          break;

         case BuckyWagon_01_IN_Reverse:
          /* During 'Reverse': '<S158>:8' */
          if ((BuckyWagon_01_DWork.s158_sfEvent ==
               BuckyWagon_01_event_buttonPress) && ((BuckyWagon_01_B.s115_Abs <
                (fwdSpdThres_DataStore())) && (BuckyWagon_01_B.s339_Merge <
                (fwdAccThres_DataStore())))) {
            /* Transition: '<S158>:14' */
            BuckyWagon_01_DWork.s158_is_ReverseLogic = BuckyWagon_01_IN_Forward;

            /* Entry 'Forward': '<S158>:7' */
            BuckyWagon_01_B.s158_inReverse = 0.0;
          }
          break;

         default:
          BuckyWagon_01_DWork.s158_is_ReverseLogic = (uint8_T)0U;
          break;
        }
      }
    }
  }
}

/* Initial conditions for function-call system: '<Root>/Foreground' */
void BuckyWagon_01_Foreground_Init(void)
{
  /* InitializeConditions for Stateflow: '<S306>/Chart' */
  BuckyWagon_01_DWork.s316_is_active_c32_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s316_is_c32_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s316_timer = 0;
  BuckyWagon_01_B.s316_pluggedIn = FALSE;

  /* InitializeConditions for Atomic SubSystem: '<S12>/UQM Motor Inouts' */

  /* S-Function Block: <S363>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s363_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of InitializeConditions for SubSystem: '<S12>/UQM Motor Inouts' */

  /* InitializeConditions for Atomic SubSystem: '<S9>/HV Controller' */

  /* S-Function Block: <S153>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s153_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S152>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s152_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* End of InitializeConditions for SubSystem: '<S9>/HV Controller' */

  /* InitializeConditions for Atomic SubSystem: '<S9>/Reverse' */
  /* InitializeConditions for Stateflow: '<S115>/Chart' */
  BuckyWagon_01_DWork.s158_sfEvent = CALL_EVENT;
  BuckyWagon_01_DWork.s158_is_active_ButtonDebounce = 0U;
  BuckyWagon_01_DWork.s158_is_ButtonDebounce = 0U;
  BuckyWagon_01_DWork.s158_is_active_ReverseLogic = 0U;
  BuckyWagon_01_DWork.s158_is_ReverseLogic = 0U;
  BuckyWagon_01_DWork.s158_is_active_c1_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s158_is_c1_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s158_timer = 0.0;
  BuckyWagon_01_B.s158_inReverse = 0.0;

  /* End of InitializeConditions for SubSystem: '<S9>/Reverse' */
  /* InitializeConditions for Atomic SubSystem: '<S9>/Drive' */

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

  /* InitializeConditions for Stateflow: '<S132>/Inverter Overheat Logic' */
  BuckyWagon_01_DWork.s136_is_active_c5_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s136_is_c5_BuckyWagon_01 = 0U;
  BuckyWagon_01_B.s136_out = 0.0;

  /* End of InitializeConditions for SubSystem: '<S9>/Drive' */

  /* S-Function Block: <S113>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s113_motohawk_delta_time_DWORK1 = now -
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

  /* InitializeConditions for Stateflow: '<S112>/Chart' */
  BuckyWagon_01_DWork.s141_is_LowSpeedManeuvering = 0U;
  BuckyWagon_01_DWork.s141_is_NormalDriving = 0U;
  BuckyWagon_01_DWork.s141_is_active_c9_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s141_counts = 0U;
  BuckyWagon_01_DWork.s141_brakeCounts = 0.0;
  BuckyWagon_01_B.s141_PumpState = 0U;

  /* InitializeConditions for S-Function (motohawk_sfun_fault_def): '<S98>/motohawk_fault_def5' */
  /* Reset Fault Downsample Counter: LVVoltLow */
  {
    BuckyWagon_01_DWork.s98_motohawk_fault_def5_DWORK1 = 0;
  }

  /* S-Function Block: <S106>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s106_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S359>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s359_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S2>/motohawk_trigger' */
  BuckyWagon_01_MiniViewDisplay_Init();

  /* S-Function Block: <S118>/motohawk_delta_time2 */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s118_motohawk_delta_time2_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S118>/motohawk_delta_time1 */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s118_motohawk_delta_time1_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S118>/Downsapmle1' */
  BuckyWagon_01_Downsapmle_Init(&BuckyWagon_01_B.s118_sf_Downsapmle1,
    &BuckyWagon_01_DWork.s118_sf_Downsapmle1);

  /* InitializeConditions for Stateflow: '<S118>/Downsapmle' */
  BuckyWagon_01_Downsapmle_Init(&BuckyWagon_01_B.s118_sf_Downsapmle,
    &BuckyWagon_01_DWork.s118_sf_Downsapmle);

  /* S-Function Block: <S117>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s117_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }
}

/* Enable for function-call system: '<Root>/Foreground' */
void BuckyWagon_01_Foreground_Enable(void)
{
  /* Level2 S-Function Block: '<S2>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_878p0011 */
  BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S2>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_RTI_PERIODIC_877p0013 */
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

  /* Disable for Enabled SubSystem: '<S97>/Time Since Enabled (With Input)1' */
  /* Disable for Outport: '<S101>/Time Since Enabled [sec]' */
  BuckyWagon_01_B.s101_UnitDelay = 0.0;
  BuckyWagon_01_DWork.s97_TimeSinceEnabledWithInput1_MODE = FALSE;

  /* End of Disable for SubSystem: '<S97>/Time Since Enabled (With Input)1' */

  /* Level2 S-Function Block: '<S2>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_20XRTI_PERIODIC_878p0011 */
  BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 = 0;

  /* Level2 S-Function Block: '<S2>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_RTI_PERIODIC_877p0013 */
  BuckyWagon_01_DWork.s2_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S12>/Time Since Enabled (With Input)1' */
  /* Disable for Outport: '<S221>/Time Since Enabled [sec]' */
  BuckyWagon_01_B.s221_UnitDelay = 0.0;
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

  /* Start for Enabled SubSystem: '<S97>/Time Since Enabled (With Input)1' */

  /* S-Function Block: <S101>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s101_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S101>/Unit Delay' */
  BuckyWagon_01_DWork.s101_UnitDelay_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S97>/Time Since Enabled (With Input)1' */

  /* Start for function-call system: '<S2>/Gauges' */

  /* Start for S-Function (motohawk_sfun_vdogauge_def): '<S10>/VDO Gauge Interface' */
  {
    GaugeChain_EZLinkOutput_Create();
  }

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_878p0011 */
  BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S2>/motohawk_trigger' */
  BuckyWagon_01_MiniViewDisplay_Start();

  /* Clear enable/disable state for embedded trigger Trigger_FGND_RTI_PERIODIC_877p0013 */
  BuckyWagon_01_DWork.s2_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S12>/Time Since Enabled (With Input)1' */

  /* S-Function Block: <S221>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s221_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S221>/Unit Delay' */
  BuckyWagon_01_DWork.s221_UnitDelay_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S12>/Time Since Enabled (With Input)1' */

  /* S-Function (motohawk_sfun_probe): '<S109>/motohawk_probe3' */
  (InstDCDCWatts_DataStore()) = 0.0;
}

/* Output and update for function-call system: '<Root>/Foreground' */
void BuckyWagon_01_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_UnitDelay1_k;
  real_T rtb_Merge_c;
  real_T rtb_UnitDelay1_b;
  real_T rtb_Merge_e;
  real_T rtb_MinMax_e;
  real_T rtb_Clear_Watchdog_Error;
  real_T rtb_UnitDelay1_f;
  real_T rtb_Merge_ep;
  real_T rtb_motohawk_delta_time;
  real_T rtb_motohawk_delta_time_h;
  real_T rtb_motohawk_delta_time2;
  real_T rtb_UnitDelay_b;
  real_T rtb_motohawk_delta_time1;
  real_T rtb_Gain2;
  real_T rtb_motohawk_delta_time_o;
  real_T rtb_Saturation;
  real_T rtb_motohawk_delta_time_g;
  real_T rtb_motohawk_delta_time_b;
  real_T rtb_motohawk_delta_time_ht;
  real_T rtb_motohawk_delta_time_oi;
  real_T rtb_Saturation_p;
  real_T rtb_Saturation_c;
  real_T rtb_Sum1_h;
  real_T rtb_motohawk_interpolation_1d;
  real_T rtb_CoolantPumpSpeed;
  real_T rtb_FanDutyCycle;
  real_T rtb_motohawk_delta_time_a;
  real_T rtb_motohawk_delta_time_c;
  real_T rtb_motohawk_delta_time_j;
  real_T rtb_Saturation_i;
  real_T rtb_Saturation_l;
  real_T rtb_DataTypeConversion_b;
  real_T rtb_Product_p;
  real_T rtb_MinMax_o;
  real_T rtb_Product1_n;
  real_T rtb_Sum3;
  real_T rtb_Product_h;
  uint32_T rtb_DataTypeConversion2_h;
  int16_T rtb_DataTypeConversion3;
  uint16_T rtb_motohawk_ain2;
  index_T rtb_motohawk_prelookup1;
  index_T rtb_motohawk_prelookup;
  index_T rtb_motohawk_prelookup2;
  index_T rtb_motohawk_prelookup3;
  index_T rtb_motohawk_prelookup_row;
  index_T rtb_motohawk_prelookup_col;
  index_T rtb_motohawk_prelookup_o;
  index_T rtb_motohawk_prelookup_m;
  index_T rtb_motohawk_prelookup1_k;
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
  boolean_T rtb_RelationalOperator_b1;
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
  boolean_T rtb_Compare_b;
  boolean_T rtb_Compare_l;
  boolean_T rtb_Compare_o;
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
  boolean_T rtb_AgeCount_d;
  boolean_T rtb_LogicalOperator4_f;
  boolean_T rtb_BelowLoTarget;
  boolean_T rtb_RelationalOperator_fj;
  real_T rtb_Merge_k;
  boolean_T rtb_RelationalOperator_k;
  int32_T rtb_DataTypeConversion_i;
  uint16_T rtb_MultiportSwitch1;
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

  /* S-Function (motohawk_sfun_read_canmsg): '<S212>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_10899p0006;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_10899p0006,
      &messageObj);
    if ((BuckyWagon_01_B.s212_AgeCount + 1) > BuckyWagon_01_B.s212_AgeCount)
      BuckyWagon_01_B.s212_AgeCount++;
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
      BuckyWagon_01_B.s212_bcm_alarm = (real_T) tmp0;
      BuckyWagon_01_B.s212_bcm_cpwr_cmd = (real_T) tmp1;
      BuckyWagon_01_B.s212_bcm_cpwr_mon = (real_T) tmp2;
      BuckyWagon_01_B.s212_bcm_epo = (real_T) tmp3;
      BuckyWagon_01_B.s212_bcm_gfd = ((real_T) tmp4) / ((real_T) 4);
      BuckyWagon_01_B.s212_bcm_hvil_mon = (real_T) tmp5;
      BuckyWagon_01_B.s212_bcm_ibat = (((real_T) tmp6) / ((real_T) 40)) +
        ((real_T) -1000);
      BuckyWagon_01_B.s212_bcm_mainc_stat = (boolean_T) tmp7;
      BuckyWagon_01_B.s212_bcm_ready = (real_T) tmp8;
      BuckyWagon_01_B.s212_bcm_soc = ((real_T) tmp9) / ((real_T) 200);
      BuckyWagon_01_B.s212_bcm_vbat = ((real_T) tmp10) / ((real_T) 4);
      BuckyWagon_01_B.s212_bcm_chg_done = (real_T) tmp11;
      BuckyWagon_01_B.s212_bcm_chgc_stat = (boolean_T) tmp12;
      BuckyWagon_01_B.s212_bcm_cool_req = (real_T) tmp13;
      BuckyWagon_01_B.s212_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S226>/Compare' incorporates:
   *  Constant: '<S226>/Constant'
   */
  rtb_Compare_h = ((BuckyWagon_01_B.s212_AgeCount > 20U));

  /* S-Function (motohawk_sfun_fault_def): '<S212>/motohawk_fault_def10' */

  /* Set Fault Suspected Status: NoCAN_BCM_410 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(24, rtb_Compare_h);
    UpdateFault(24);
  }

  /* If: '<S229>/If' incorporates:
   *  Inport: '<S234>/In1'
   *  Inport: '<S235>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S229>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S229>/override_enable'
   */
  if ((bcm_mainc_stat_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S229>/NewValue' incorporates:
     *  ActionPort: '<S234>/Action Port'
     */
    BuckyWagon_01_B.s229_Merge = (bcm_mainc_stat_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S234>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(50);
    }

    /* End of Outputs for SubSystem: '<S229>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S229>/OldValue' incorporates:
     *  ActionPort: '<S235>/Action Port'
     */
    BuckyWagon_01_B.s229_Merge = BuckyWagon_01_B.s212_bcm_mainc_stat;

    /* S-Function (motohawk_sfun_code_cover): '<S235>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(51);
    }

    /* End of Outputs for SubSystem: '<S229>/OldValue' */
  }

  /* End of If: '<S229>/If' */

  /* If: '<S233>/If' incorporates:
   *  Inport: '<S242>/In1'
   *  Inport: '<S243>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S233>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S233>/override_enable'
   */
  if ((bcm_ready_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S233>/NewValue' incorporates:
     *  ActionPort: '<S242>/Action Port'
     */
    BuckyWagon_01_B.s233_Merge = (bcm_ready_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S242>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(58);
    }

    /* End of Outputs for SubSystem: '<S233>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S233>/OldValue' incorporates:
     *  ActionPort: '<S243>/Action Port'
     */
    BuckyWagon_01_B.s233_Merge = BuckyWagon_01_B.s212_bcm_ready;

    /* S-Function (motohawk_sfun_code_cover): '<S243>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(59);
    }

    /* End of Outputs for SubSystem: '<S233>/OldValue' */
  }

  /* End of If: '<S233>/If' */

  /* Gain: '<S212>/Gain1' */
  BuckyWagon_01_B.s212_bcm_soc_j = 100.0 * BuckyWagon_01_B.s212_bcm_soc;

  /* If: '<S230>/If' incorporates:
   *  Inport: '<S236>/In1'
   *  Inport: '<S237>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S230>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S230>/override_enable'
   */
  if ((bcm_chargec_stat_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S230>/NewValue' incorporates:
     *  ActionPort: '<S236>/Action Port'
     */
    BuckyWagon_01_B.s230_Merge = (bcm_chargec_stat_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S236>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(52);
    }

    /* End of Outputs for SubSystem: '<S230>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S230>/OldValue' incorporates:
     *  ActionPort: '<S237>/Action Port'
     */
    BuckyWagon_01_B.s230_Merge = BuckyWagon_01_B.s212_bcm_chgc_stat;

    /* S-Function (motohawk_sfun_code_cover): '<S237>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(53);
    }

    /* End of Outputs for SubSystem: '<S230>/OldValue' */
  }

  /* End of If: '<S230>/If' */

  /* If: '<S232>/If' incorporates:
   *  Inport: '<S240>/In1'
   *  Inport: '<S241>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S232>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S232>/override_enable'
   */
  if ((SOC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S232>/NewValue' incorporates:
     *  ActionPort: '<S240>/Action Port'
     */
    BuckyWagon_01_B.s232_Merge = (SOC_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S240>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(56);
    }

    /* End of Outputs for SubSystem: '<S232>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S232>/OldValue' incorporates:
     *  ActionPort: '<S241>/Action Port'
     */
    BuckyWagon_01_B.s232_Merge = BuckyWagon_01_B.s212_bcm_soc_j;

    /* S-Function (motohawk_sfun_code_cover): '<S241>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(57);
    }

    /* End of Outputs for SubSystem: '<S232>/OldValue' */
  }

  /* End of If: '<S232>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S212>/Read CAN Message6' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_10901p0005;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_10901p0005,
      &messageObj);
    if ((BuckyWagon_01_B.s212_AgeCount_e + 1) > BuckyWagon_01_B.s212_AgeCount_e)
      BuckyWagon_01_B.s212_AgeCount_e++;
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
      BuckyWagon_01_B.s212_bcm_cell_tmax = (((real_T) tmp0) / ((real_T) 2)) +
        ((real_T) -40);
      BuckyWagon_01_B.s212_bcm_cell_tmin = (((real_T) tmp1) / ((real_T) 2)) +
        ((real_T) -40);
      BuckyWagon_01_B.s212_bcm_cell_vmax = ((real_T) tmp2) / ((real_T) 1000);
      BuckyWagon_01_B.s212_bcm_cell_vmin = ((real_T) tmp3) / ((real_T) 1000);
      BuckyWagon_01_B.s212_bcm_chga_ena = (real_T) tmp4;
      BuckyWagon_01_B.s212_bcm_chga_mon = (real_T) tmp5;
      BuckyWagon_01_B.s212_bcm_lvbat = ((real_T) tmp6) / ((real_T) 10);
      BuckyWagon_01_B.s212_bcm_mod_ena = (real_T) tmp7;
      BuckyWagon_01_B.s212_bcm_veh_mon = (real_T) tmp8;
      BuckyWagon_01_B.s212_AgeCount_e = 0;
    }
  }

  /* RelationalOperator: '<S228>/Compare' incorporates:
   *  Constant: '<S228>/Constant'
   */
  rtb_Compare_gs = ((BuckyWagon_01_B.s212_AgeCount_e > 20U));

  /* S-Function (motohawk_sfun_fault_def): '<S212>/motohawk_fault_def12' */

  /* Set Fault Suspected Status: NoCAN_BCM_430 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(26, rtb_Compare_gs);
    UpdateFault(26);
  }

  /* Logic: '<S212>/Logical Operator1' incorporates:
   *  Logic: '<S212>/Logical Operator'
   *  S-Function (motohawk_sfun_fault_status): '<S212>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S212>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S212>/motohawk_fault_status2'
   */
  rtb_LogicalOperator1_jo = !(IsFaultActive(24) || IsFaultActive(25) ||
    IsFaultActive(26));

  /* S-Function (motohawk_sfun_read_canmsg): '<S212>/Read CAN Message5' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_10900p0007;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_10900p0007,
      &messageObj);
    if ((BuckyWagon_01_B.s212_AgeCount_k + 1) > BuckyWagon_01_B.s212_AgeCount_k)
      BuckyWagon_01_B.s212_AgeCount_k++;
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
      BuckyWagon_01_B.s212_bcm_cell_overvolt = (real_T) tmp0;
      BuckyWagon_01_B.s212_bcm_cell_undervolt = (boolean_T) tmp1;
      BuckyWagon_01_B.s212_bcm_chg_buf = ((real_T) tmp2) / ((real_T) 2);
      BuckyWagon_01_B.s212_bcm_chg_max = ((real_T) tmp3) / ((real_T) 4);
      BuckyWagon_01_B.s212_bcm_dis_buf = ((real_T) tmp4) / ((real_T) 2);
      BuckyWagon_01_B.s212_bcm_dis_max = ((real_T) tmp5) / ((real_T) 4);
      BuckyWagon_01_B.s212_bcm_t_coolant = (((real_T) tmp6) / ((real_T) 2)) +
        ((real_T) -40);
      BuckyWagon_01_B.s212_AgeCount_k = 0;
    }
  }

  /* RelationalOperator: '<S227>/Compare' incorporates:
   *  Constant: '<S227>/Constant'
   */
  rtb_Compare_i = ((BuckyWagon_01_B.s212_AgeCount_k > 20U));

  /* S-Function (motohawk_sfun_fault_def): '<S212>/motohawk_fault_def11' */

  /* Set Fault Suspected Status: NoCAN_BCM_420 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(25, rtb_Compare_i);
    UpdateFault(25);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S212>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: High_Cell_Voltage_Shutdown */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(13, BuckyWagon_01_B.s212_bcm_cell_undervolt);
    UpdateFault(13);
  }

  /* If: '<S231>/If' incorporates:
   *  Inport: '<S238>/In1'
   *  Inport: '<S239>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S231>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S231>/override_enable'
   */
  if ((bcm_cell_overvolt_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S231>/NewValue' incorporates:
     *  ActionPort: '<S238>/Action Port'
     */
    BuckyWagon_01_B.s231_Merge = (bcm_cell_overvolt_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S238>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(54);
    }

    /* End of Outputs for SubSystem: '<S231>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S231>/OldValue' incorporates:
     *  ActionPort: '<S239>/Action Port'
     */
    BuckyWagon_01_B.s231_Merge = BuckyWagon_01_B.s212_bcm_cell_overvolt;

    /* S-Function (motohawk_sfun_code_cover): '<S239>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(55);
    }

    /* End of Outputs for SubSystem: '<S231>/OldValue' */
  }

  /* End of If: '<S231>/If' */

  /* End of Outputs for SubSystem: '<S12>/A123 Battery Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S217>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_11220p0007;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_11220p0007,
      &messageObj);
    if ((BuckyWagon_01_B.s217_AgeCount + 1) > BuckyWagon_01_B.s217_AgeCount)
      BuckyWagon_01_B.s217_AgeCount++;
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
      BuckyWagon_01_B.s217_InputVoltage = ((real_T) tmp0) * ((real_T) 2);
      BuckyWagon_01_B.s217_OutputVoltage = ((real_T) tmp1) * ((real_T) 2);
      BuckyWagon_01_B.s217_InputCurrentLimitMax = ((real_T) tmp2) / ((real_T) 2);
      BuckyWagon_01_B.s217_InputCurrent = ((real_T) tmp3) / ((real_T) 2);
      BuckyWagon_01_B.s217_OutputCurrent = ((real_T) tmp4) / ((real_T) 2);
      BuckyWagon_01_B.s217_Eaton_HV_Charger_Temperature = (((real_T) tmp5) /
        ((real_T) 2)) + ((real_T) -40);
      BuckyWagon_01_B.s217_IgnitionStatus = (real_T) tmp6;
      BuckyWagon_01_B.s217_ChargerState = (real_T) tmp7;
      BuckyWagon_01_B.s217_FaultSeverityIndicator = (real_T) tmp8;
      BuckyWagon_01_B.s217_MessageCounter = (real_T) tmp9;
      BuckyWagon_01_B.s217_MessageChecksum = (real_T) tmp10;
      BuckyWagon_01_B.s217_AgeCount = 0;
    }
  }

  /* If: '<S315>/If' incorporates:
   *  Inport: '<S333>/In1'
   *  Inport: '<S334>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S315>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S315>/override_enable'
   */
  if ((InputVoltage_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S315>/NewValue' incorporates:
     *  ActionPort: '<S333>/Action Port'
     */
    rtb_Merge_k = (InputVoltage_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S333>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(116);
    }

    /* End of Outputs for SubSystem: '<S315>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S315>/OldValue' incorporates:
     *  ActionPort: '<S334>/Action Port'
     */
    rtb_Merge_k = BuckyWagon_01_B.s217_InputVoltage;

    /* S-Function (motohawk_sfun_code_cover): '<S334>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(117);
    }

    /* End of Outputs for SubSystem: '<S315>/OldValue' */
  }

  /* End of If: '<S315>/If' */

  /* RelationalOperator: '<S306>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S217>/motohawk_calibration'
   */
  rtb_RelationalOperator_k = (rtb_Merge_k > (PluggedInMainsThesEaton_DataStore()));

  /* Stateflow: '<S306>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S217>/motohawk_calibration1'
   */

  /* Gateway: Foreground/Sensors/Eaton HV Charger/PluggedInDetect/Chart */
  /* During: Foreground/Sensors/Eaton HV Charger/PluggedInDetect/Chart */
  if (BuckyWagon_01_DWork.s316_is_active_c32_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Sensors/Eaton HV Charger/PluggedInDetect/Chart */
    BuckyWagon_01_DWork.s316_is_active_c32_BuckyWagon_01 = 1U;

    /* Transition: '<S316>:5' */
    BuckyWagon_01_DWork.s316_is_c32_BuckyWagon_01 = BuckyWagon_01_IN_Off_p;

    /* Entry 'Off': '<S316>:1' */
    BuckyWagon_01_B.s316_pluggedIn = FALSE;
  } else {
    switch (BuckyWagon_01_DWork.s316_is_c32_BuckyWagon_01) {
     case BuckyWagon_01_IN_CountDown:
      /* During 'CountDown': '<S316>:3' */
      if (BuckyWagon_01_DWork.s316_timer <= 0) {
        /* Transition: '<S316>:9' */
        BuckyWagon_01_DWork.s316_is_c32_BuckyWagon_01 = BuckyWagon_01_IN_Off_p;

        /* Entry 'Off': '<S316>:1' */
        BuckyWagon_01_B.s316_pluggedIn = FALSE;
      } else if (rtb_RelationalOperator_k) {
        /* Transition: '<S316>:8' */
        BuckyWagon_01_DWork.s316_is_c32_BuckyWagon_01 = BuckyWagon_01_IN_countUp;
      } else {
        BuckyWagon_01_DWork.s316_timer = (int16_T)
          (BuckyWagon_01_DWork.s316_timer - 1);
      }
      break;

     case BuckyWagon_01_IN_Off_p:
      /* During 'Off': '<S316>:1' */
      if (rtb_RelationalOperator_k) {
        /* Transition: '<S316>:6' */
        BuckyWagon_01_DWork.s316_is_c32_BuckyWagon_01 = BuckyWagon_01_IN_countUp;
      }
      break;

     case BuckyWagon_01_IN_On_p:
      /* During 'On': '<S316>:4' */
      if (!rtb_RelationalOperator_k) {
        /* Transition: '<S316>:10' */
        BuckyWagon_01_DWork.s316_is_c32_BuckyWagon_01 =
          BuckyWagon_01_IN_CountDown;
      }
      break;

     case BuckyWagon_01_IN_countUp:
      /* During 'countUp': '<S316>:2' */
      if (!rtb_RelationalOperator_k) {
        /* Transition: '<S316>:7' */
        BuckyWagon_01_DWork.s316_is_c32_BuckyWagon_01 =
          BuckyWagon_01_IN_CountDown;
      } else if ((real_T)BuckyWagon_01_DWork.s316_timer >=
                 (PluggedInHistTimeeaton_DataStore())) {
        /* Transition: '<S316>:11' */
        BuckyWagon_01_DWork.s316_is_c32_BuckyWagon_01 = BuckyWagon_01_IN_On_p;

        /* Entry 'On': '<S316>:4' */
        BuckyWagon_01_B.s316_pluggedIn = TRUE;
      } else {
        BuckyWagon_01_DWork.s316_timer = (int16_T)
          (BuckyWagon_01_DWork.s316_timer + 1);
      }
      break;

     default:
      /* Transition: '<S316>:5' */
      BuckyWagon_01_DWork.s316_is_c32_BuckyWagon_01 = BuckyWagon_01_IN_Off_p;

      /* Entry 'Off': '<S316>:1' */
      BuckyWagon_01_B.s316_pluggedIn = FALSE;
      break;
    }
  }

  /* End of Stateflow: '<S306>/Chart' */

  /* Outputs for Atomic SubSystem: '<S12>/UQM Motor Inouts' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S223>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_561p0011;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_561p0011,
      &messageObj);
    if ((BuckyWagon_01_B.s223_AgeCount + 1) > BuckyWagon_01_B.s223_AgeCount)
      BuckyWagon_01_B.s223_AgeCount++;
    if (msg_valid) {
      uint16_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint16_T tmp3 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp2))[1] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[7])) ;
      ((uint8_T *)(&tmp3))[1] = ((messageObj.u1DataArr[6])) ;
      BuckyWagon_01_B.s223_Accurate_Torque = (((real_T) tmp0) / ((real_T) 10)) +
        ((real_T) -3212.8);
      BuckyWagon_01_B.s223_Accurate_Voltage = (((real_T) tmp1) / ((real_T) 10))
        + ((real_T) -3212.8);
      BuckyWagon_01_B.s223_Accurate_Current = (((real_T) tmp2) / ((real_T) 10))
        + ((real_T) -3212.8);
      BuckyWagon_01_B.s223_Accurate_Speed = (((real_T) tmp3) / ((real_T) 2)) +
        ((real_T) -16064);
      BuckyWagon_01_B.s223_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S362>/Compare' incorporates:
   *  Constant: '<S362>/Constant'
   */
  rtb_Compare_b = ((BuckyWagon_01_B.s223_AgeCount > 200U));

  /* S-Function (motohawk_sfun_fault_def): '<S223>/motohawk_fault_def13' */

  /* Set Fault Suspected Status: NoCAN_UQM_04EF */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(30, rtb_Compare_b);
    UpdateFault(30);
  }

  /* UnitDelay: '<S363>/Unit Delay' */
  rtb_Merge_k = BuckyWagon_01_DWork.s363_UnitDelay_DSTATE;

  /* RelationalOperator: '<S223>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S223>/motohawk_calibration'
   */
  BuckyWagon_01_B.s223_RelationalOperator = ((rtb_Merge_k >=
    (Drive_Enable_Delay_DataStore())));

  /* S-Function Block: <S363>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s363_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_g = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S363>/Sum' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S363>/motohawk_delta_time'
   */
  rtb_Merge_k += rtb_motohawk_delta_time_g;

  /* S-Function (motohawk_sfun_read_canmsg): '<S223>/Read CAN Message6' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_564p0011;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_564p0011,
      &messageObj);
    if ((BuckyWagon_01_B.s223_AgeCount_l + 1) > BuckyWagon_01_B.s223_AgeCount_l)
      BuckyWagon_01_B.s223_AgeCount_l++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[3])) ;
      BuckyWagon_01_B.s223_Inverter_Temperature = ((real_T) tmp0) + ((real_T)
        -40);
      BuckyWagon_01_B.s223_Rotor_Temp = ((real_T) tmp1) + ((real_T) -40);
      BuckyWagon_01_B.s223_Stator_Temp = ((real_T) tmp2) + ((real_T) -40);
      BuckyWagon_01_B.s223_AgeCount_l = 0;
    }
  }

  /* RelationalOperator: '<S361>/Compare' incorporates:
   *  Constant: '<S361>/Constant'
   */
  rtb_Compare_l = ((BuckyWagon_01_B.s223_AgeCount_l > 3000U));

  /* S-Function (motohawk_sfun_fault_def): '<S223>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: NoCAN_UQM_18EF */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(32, rtb_Compare_l);
    UpdateFault(32);
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S223>/Read CAN Message5' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_563p0011;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_563p0011,
      &messageObj);
    if ((BuckyWagon_01_B.s223_AgeCount_j + 1) > BuckyWagon_01_B.s223_AgeCount_j)
      BuckyWagon_01_B.s223_AgeCount_j++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint16_T tmp4 = 0;
      uint16_T tmp5 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp4))[1] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[7])) ;
      ((uint8_T *)(&tmp5))[1] = ((messageObj.u1DataArr[6])) ;
      BuckyWagon_01_B.s223_Leg_Current = ((real_T) tmp0) * ((real_T) 4);
      BuckyWagon_01_B.s223_High_Bound = (((real_T) tmp1) / ((real_T) 1.25)) +
        ((real_T) -100);
      BuckyWagon_01_B.s223_Low_Bound = (((real_T) tmp2) / ((real_T) 1.25)) +
        ((real_T) -100);
      BuckyWagon_01_B.s223_Stall_Safety_Percentage = ((real_T) tmp3) / ((real_T)
        2.5);
      BuckyWagon_01_B.s223_Angular_Distance = ((real_T) tmp4) * ((real_T) 3.75);
      BuckyWagon_01_B.s223_Torque_Desired = (((real_T) tmp5) / ((real_T) 10)) +
        ((real_T) -3212.8);
      BuckyWagon_01_B.s223_AgeCount_j = 0;
    }
  }

  /* RelationalOperator: '<S360>/Compare' incorporates:
   *  Constant: '<S360>/Constant'
   */
  rtb_Compare_o = ((BuckyWagon_01_B.s223_AgeCount_j > 250U));

  /* S-Function (motohawk_sfun_fault_def): '<S223>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: NoCAN_UQM_14EF */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(31, rtb_Compare_o);
    UpdateFault(31);
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S223>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_559p0011;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_559p0011,
      &messageObj);
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint16_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint8_T tmp4 = 0;
      uint8_T tmp5 = 0;
      uint8_T tmp6 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[4] & 0x0000000F)) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[4] & 0x000000F0) >> 4) |
        ((messageObj.u1DataArr[5] & 0x0000000F) << 4) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[5] & 0x000000F0) >> 4) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[6] & 0x0000000F)) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[7] & 0x00000001)) ;
      BuckyWagon_01_B.s223_Command_Watchdog_Status = (real_T) tmp0;
      BuckyWagon_01_B.s223_Status_A = (real_T) tmp1;
      BuckyWagon_01_B.s223_Software_Release_Sub_Version = (real_T) tmp2;
      BuckyWagon_01_B.s223_Software_Release_Minor_Version = (real_T) tmp3;
      BuckyWagon_01_B.s223_Software_Release_Major_Version = (real_T) tmp4;
      BuckyWagon_01_B.s223_Status_C = (real_T) tmp5;
      BuckyWagon_01_B.s223_Watchdog_Error = (real_T) tmp6;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S223>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_560p0011;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_560p0011,
      &messageObj);
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[2] & 0x00000001)) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2] & 0x00000002) >> 1) ;
      BuckyWagon_01_B.s223_Derate = (real_T) tmp0;
      BuckyWagon_01_B.s223_Shutdown = (real_T) tmp1;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S223>/Read CAN Message4' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_562p0011;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_562p0011,
      &messageObj);
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
      uint8_T tmp34 = 0;
      uint8_T tmp35 = 0;
      uint8_T tmp36 = 0;
      uint8_T tmp37 = 0;
      uint8_T tmp38 = 0;
      uint8_T tmp39 = 0;
      uint8_T tmp40 = 0;
      uint8_T tmp41 = 0;
      uint8_T tmp42 = 0;
      uint8_T tmp43 = 0;
      uint8_T tmp44 = 0;
      uint8_T tmp45 = 0;
      uint8_T tmp46 = 0;
      uint8_T tmp47 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0] & 0x00000001)) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2] & 0x00000001)) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[0] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[2] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[0] & 0x00000004) >> 2) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[2] & 0x00000004) >> 2) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[0] & 0x00000008) >> 3) ;
      ((uint8_T *)(&tmp7))[0] = ((messageObj.u1DataArr[2] & 0x00000008) >> 3) ;
      ((uint8_T *)(&tmp8))[0] = ((messageObj.u1DataArr[0] & 0x00000010) >> 4) ;
      ((uint8_T *)(&tmp9))[0] = ((messageObj.u1DataArr[2] & 0x00000010) >> 4) ;
      ((uint8_T *)(&tmp10))[0] = ((messageObj.u1DataArr[0] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp11))[0] = ((messageObj.u1DataArr[2] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp12))[0] = ((messageObj.u1DataArr[0] & 0x00000040) >> 6) ;
      ((uint8_T *)(&tmp13))[0] = ((messageObj.u1DataArr[2] & 0x00000040) >> 6) ;
      ((uint8_T *)(&tmp14))[0] = ((messageObj.u1DataArr[0] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp15))[0] = ((messageObj.u1DataArr[2] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp16))[0] = ((messageObj.u1DataArr[1] & 0x00000001)) ;
      ((uint8_T *)(&tmp17))[0] = ((messageObj.u1DataArr[3] & 0x00000001)) ;
      ((uint8_T *)(&tmp18))[0] = ((messageObj.u1DataArr[1] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp19))[0] = ((messageObj.u1DataArr[3] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp20))[0] = ((messageObj.u1DataArr[1] & 0x00000004) >> 2) ;
      ((uint8_T *)(&tmp21))[0] = ((messageObj.u1DataArr[3] & 0x00000004) >> 2) ;
      ((uint8_T *)(&tmp22))[0] = ((messageObj.u1DataArr[1] & 0x00000008) >> 3) ;
      ((uint8_T *)(&tmp23))[0] = ((messageObj.u1DataArr[3] & 0x00000008) >> 3) ;
      ((uint8_T *)(&tmp24))[0] = ((messageObj.u1DataArr[1] & 0x00000010) >> 4) ;
      ((uint8_T *)(&tmp25))[0] = ((messageObj.u1DataArr[3] & 0x00000010) >> 4) ;
      ((uint8_T *)(&tmp26))[0] = ((messageObj.u1DataArr[1] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp27))[0] = ((messageObj.u1DataArr[3] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp28))[0] = ((messageObj.u1DataArr[1] & 0x00000040) >> 6) ;
      ((uint8_T *)(&tmp29))[0] = ((messageObj.u1DataArr[3] & 0x00000040) >> 6) ;
      ((uint8_T *)(&tmp30))[0] = ((messageObj.u1DataArr[1] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp31))[0] = ((messageObj.u1DataArr[3] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp32))[0] = ((messageObj.u1DataArr[6] & 0x00000001)) ;
      ((uint8_T *)(&tmp33))[0] = ((messageObj.u1DataArr[6] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp34))[0] = ((messageObj.u1DataArr[6] & 0x00000004) >> 2) ;
      ((uint8_T *)(&tmp35))[0] = ((messageObj.u1DataArr[6] & 0x00000008) >> 3) ;
      ((uint8_T *)(&tmp36))[0] = ((messageObj.u1DataArr[6] & 0x00000010) >> 4) ;
      ((uint8_T *)(&tmp37))[0] = ((messageObj.u1DataArr[6] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp38))[0] = ((messageObj.u1DataArr[6] & 0x00000040) >> 6) ;
      ((uint8_T *)(&tmp39))[0] = ((messageObj.u1DataArr[6] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp40))[0] = ((messageObj.u1DataArr[7] & 0x00000001)) ;
      ((uint8_T *)(&tmp41))[0] = ((messageObj.u1DataArr[7] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp42))[0] = ((messageObj.u1DataArr[7] & 0x00000004) >> 2) ;
      ((uint8_T *)(&tmp43))[0] = ((messageObj.u1DataArr[7] & 0x00000008) >> 3) ;
      ((uint8_T *)(&tmp44))[0] = ((messageObj.u1DataArr[7] & 0x00000010) >> 4) ;
      ((uint8_T *)(&tmp45))[0] = ((messageObj.u1DataArr[7] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp46))[0] = ((messageObj.u1DataArr[7] & 0x00000040) >> 6) ;
      ((uint8_T *)(&tmp47))[0] = ((messageObj.u1DataArr[7] & 0x00000080) >> 7) ;
      BuckyWagon_01_B.s223_Not_Enabled = (real_T) tmp0;
      BuckyWagon_01_B.s223_Not_Enabled_Histroy = (real_T) tmp1;
      BuckyWagon_01_B.s223_Over_Leg_Current = (real_T) tmp2;
      BuckyWagon_01_B.s223_Over_Leg_Current_History = (real_T) tmp3;
      BuckyWagon_01_B.s223_Over_Bus_Current = (real_T) tmp4;
      BuckyWagon_01_B.s223_Over_Bus_Current_History = (real_T) tmp5;
      BuckyWagon_01_B.s223_Over_Phase_Advance = (real_T) tmp6;
      BuckyWagon_01_B.s223_Over_Phase_Advance_History = (real_T) tmp7;
      BuckyWagon_01_B.s223_Under_Voltage_Warning = (real_T) tmp8;
      BuckyWagon_01_B.s223_Under_Voltage_Warning_History = (real_T) tmp9;
      BuckyWagon_01_B.s223_Rotor_Over_Temperature = (real_T) tmp10;
      BuckyWagon_01_B.s223_Rotor_Over_Temperature_History = (real_T) tmp11;
      BuckyWagon_01_B.s223_Stator_Over_Temperature = (real_T) tmp12;
      BuckyWagon_01_B.s223_Stator_Over_Temperature_History = (real_T) tmp13;
      BuckyWagon_01_B.s223_Inverter_Over_Temperature = (real_T) tmp14;
      BuckyWagon_01_B.s223_Inverter_Over_Temperature_History = (real_T) tmp15;
      BuckyWagon_01_B.s223_Over_Speed_Warning = (real_T) tmp16;
      BuckyWagon_01_B.s223_Over_Speed_Warning_History = (real_T) tmp17;
      BuckyWagon_01_B.s223_Over_Voltage_Warning = (real_T) tmp18;
      BuckyWagon_01_B.s223_Over_Voltage_Warning_History = (real_T) tmp19;
      BuckyWagon_01_B.s223_Over_Speed_Alarm = (real_T) tmp20;
      BuckyWagon_01_B.s223_Over_Speed_Alarm_History = (real_T) tmp21;
      BuckyWagon_01_B.s223_Over_Voltage_Alarm = (real_T) tmp22;
      BuckyWagon_01_B.s223_Over_Voltage_Alarm_History = (real_T) tmp23;
      BuckyWagon_01_B.s223_ADC_Calibration_Problem = (real_T) tmp24;
      BuckyWagon_01_B.s223_ADC_Calibration_Problem_History = (real_T) tmp25;
      BuckyWagon_01_B.s223_Limp_Home_Mode = (real_T) tmp26;
      BuckyWagon_01_B.s223_Limp_Home_Mode_History = (real_T) tmp27;
      BuckyWagon_01_B.s223_Inverter_Fault_Occured = (real_T) tmp28;
      BuckyWagon_01_B.s223_Iverter_Fault_Occured_History = (real_T) tmp29;
      BuckyWagon_01_B.s223_Inverter_Fault = (real_T) tmp30;
      BuckyWagon_01_B.s223_Inverter_Fault_History = (real_T) tmp31;
      BuckyWagon_01_B.s223_Forced_Voltage_Control = (real_T) tmp32;
      BuckyWagon_01_B.s223_CAN_Limits_In_Effect = (real_T) tmp33;
      BuckyWagon_01_B.s223_System_Disabled_In_Motion = (real_T) tmp34;
      BuckyWagon_01_B.s223_ABC_Phase_Order = (real_T) tmp35;
      BuckyWagon_01_B.s223_Regen_Switch_Open = (real_T) tmp36;
      BuckyWagon_01_B.s223_Current_Transducer_Fault_IbusIleg = (real_T) tmp37;
      BuckyWagon_01_B.s223_Acceleration_Limited = (real_T) tmp38;
      BuckyWagon_01_B.s223_Using_Raw_Speed = (real_T) tmp39;
      BuckyWagon_01_B.s223_Turbo_Mode = (real_T) tmp40;
      BuckyWagon_01_B.s223_Forced_Open_Loop = (real_T) tmp41;
      BuckyWagon_01_B.s223_Motor_Stalled = (real_T) tmp42;
      BuckyWagon_01_B.s223_Phase_Current_Sensor_Error = (real_T) tmp43;
      BuckyWagon_01_B.s223_Bad_Position_Signal = (real_T) tmp44;
      BuckyWagon_01_B.s223_Bad_Switch = (real_T) tmp45;
      BuckyWagon_01_B.s223_Invalid_Power_Supply = (real_T) tmp46;
      BuckyWagon_01_B.s223_Power_Switches_Off = (real_T) tmp47;
    }
  }

  /* Update for UnitDelay: '<S363>/Unit Delay' */
  BuckyWagon_01_DWork.s363_UnitDelay_DSTATE = rtb_Merge_k;

  /* End of Outputs for SubSystem: '<S12>/UQM Motor Inouts' */

  /* Outputs for Atomic SubSystem: '<S9>/HV Controller' */

  /* Logic: '<S114>/Logical Operator2' */
  rtb_LogicalOperator2_e = !BuckyWagon_01_B.s316_pluggedIn;

  /* Logic: '<S114>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S114>/motohawk_data_read'
   */
  rtb_RelationalOperator_k = (Shutdown_Req_DataStore() && rtb_LogicalOperator2_e);

  /* If: '<S149>/If' incorporates:
   *  Inport: '<S156>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S149>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S149>/override_enable'
   */
  if ((Contactor_Shutdown_Test_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S149>/NewValue' incorporates:
     *  ActionPort: '<S156>/Action Port'
     */
    rtb_RelationalOperator_k = (Contactor_Shutdown_Test_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S156>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(44);
    }

    /* End of Outputs for SubSystem: '<S149>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S149>/OldValue' incorporates:
     *  ActionPort: '<S157>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S157>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(45);
    }

    /* End of Outputs for SubSystem: '<S149>/OldValue' */
  }

  /* End of If: '<S149>/If' */

  /* Logic: '<S114>/Logical Operator12' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S114>/motohawk_fault_action'
   */
  rtb_LogicalOperator12 = (rtb_RelationalOperator_k || GetFaultActionStatus(5));

  /* S-Function Block: <S153>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s153_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ht = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S153>/Switch' incorporates:
   *  Constant: '<S153>/Constant'
   *  Logic: '<S147>/Logical Operator5'
   *  S-Function (motohawk_sfun_data_read): '<S153>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S153>/motohawk_delta_time'
   *  Sum: '<S153>/Sum'
   */
  if (!rtb_LogicalOperator12) {
    rtb_Merge_k = rtb_motohawk_delta_time_ht + Solectria_Enable_timer_DataStore();
  } else {
    rtb_Merge_k = 0.0;
  }

  /* End of Switch: '<S153>/Switch' */
  /* Logic: '<S147>/Logical Operator4' incorporates:
   *  Logic: '<S147>/Logical Operator3'
   *  RelationalOperator: '<S147>/Relational Operator1'
   *  RelationalOperator: '<S148>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration1'
   */
  rtb_LogicalOperator4_f = ((!rtb_LogicalOperator12) && (rtb_Merge_k >=
    (Load_Enable_Delay_DataStore())) && BuckyWagon_01_B.s229_Merge);

  /* S-Function (motohawk_sfun_data_write): '<S114>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Batt_Load_Enable */
  {
    Batt_Load_Enable_DataStore() = rtb_LogicalOperator4_f;
  }

  /* RelationalOperator: '<S146>/Compare' incorporates:
   *  Constant: '<S146>/Constant'
   */
  rtb_RelationalOperator_k = (BuckyWagon_01_B.s233_Merge == 1.0);

  /* UnitDelay: '<S154>/Unit Delay' */
  rtb_UnitDelay_if = BuckyWagon_01_DWork.s154_UnitDelay_DSTATE;

  /* Switch: '<S151>/Switch' incorporates:
   *  Constant: '<S151>/Constant1'
   *  DataTypeConversion: '<S151>/Data Type Conversion'
   *  Sum: '<S151>/Sum'
   *  UnitDelay: '<S151>/Unit Delay'
   */
  if (rtb_RelationalOperator_k) {
    rtb_to65535_c = BuckyWagon_01_DWork.s151_UnitDelay_DSTATE + 1.0;
  } else {
    rtb_to65535_c = 0.0;
  }

  /* End of Switch: '<S151>/Switch' */

  /* Logic: '<S151>/Logical Operator' */
  rtb_LogicalOperator_bd = !rtb_RelationalOperator_k;

  /* Switch: '<S151>/Switch1' incorporates:
   *  Constant: '<S151>/Constant3'
   *  DataTypeConversion: '<S151>/Data Type Conversion1'
   *  Sum: '<S151>/Sum1'
   *  UnitDelay: '<S151>/Unit Delay1'
   */
  if (rtb_LogicalOperator_bd) {
    rtb_to65535_d = BuckyWagon_01_DWork.s151_UnitDelay1_DSTATE + 1.0;
  } else {
    rtb_to65535_d = 0.0;
  }

  /* End of Switch: '<S151>/Switch1' */

  /* Logic: '<S155>/Logical Operator2' incorporates:
   *  Constant: '<S151>/off delay'
   *  Constant: '<S151>/on delay'
   *  Logic: '<S151>/Logical Operator1'
   *  Logic: '<S151>/Logical Operator2'
   *  Logic: '<S155>/Logical Operator'
   *  Logic: '<S155>/Logical Operator1'
   *  RelationalOperator: '<S151>/Relational Operator1'
   *  RelationalOperator: '<S151>/Relational Operator2'
   *  UnitDelay: '<S155>/Unit Delay'
   */
  rtb_LogicalOperator2_o = ((BuckyWagon_01_DWork.s155_UnitDelay_DSTATE ||
    (rtb_RelationalOperator_k && (rtb_to65535_c >= 10.0))) &&
    (!(rtb_LogicalOperator_bd && (rtb_to65535_d >= 0.0))));

  /* S-Function Block: <S152>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s152_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_oi = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S152>/Switch' incorporates:
   *  Constant: '<S152>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S152>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S152>/motohawk_delta_time'
   *  Sum: '<S152>/Sum'
   */
  if (rtb_LogicalOperator12) {
    rtb_Switch_h = rtb_motohawk_delta_time_oi +
      Contactor_Disable_Timer_DataStore();
  } else {
    rtb_Switch_h = 0.0;
  }

  /* End of Switch: '<S152>/Switch' */
  /* Logic: '<S147>/Logical Operator2' incorporates:
   *  Logic: '<S147>/Logical Operator6'
   *  RelationalOperator: '<S147>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration'
   */
  rtb_RelationalOperator_k = (rtb_LogicalOperator2_o && (!(rtb_Switch_h >=
    (Contactor_Disable_Delay_DataStore()))));

  /* Switch: '<S150>/Switch' incorporates:
   *  Constant: '<S150>/Constant1'
   *  DataTypeConversion: '<S150>/Data Type Conversion'
   *  Sum: '<S150>/Sum'
   *  UnitDelay: '<S150>/Unit Delay'
   */
  if (rtb_RelationalOperator_k) {
    rtb_to65535_b = BuckyWagon_01_DWork.s150_UnitDelay_DSTATE + 1.0;
  } else {
    rtb_to65535_b = 0.0;
  }

  /* End of Switch: '<S150>/Switch' */

  /* Logic: '<S150>/Logical Operator' */
  rtb_LogicalOperator_bd = !rtb_RelationalOperator_k;

  /* Switch: '<S150>/Switch1' incorporates:
   *  Constant: '<S150>/Constant3'
   *  DataTypeConversion: '<S150>/Data Type Conversion1'
   *  Sum: '<S150>/Sum1'
   *  UnitDelay: '<S150>/Unit Delay1'
   */
  if (rtb_LogicalOperator_bd) {
    rtb_to65535_dx = BuckyWagon_01_DWork.s150_UnitDelay1_DSTATE + 1.0;
  } else {
    rtb_to65535_dx = 0.0;
  }

  /* End of Switch: '<S150>/Switch1' */

  /* Logic: '<S154>/Logical Operator2' incorporates:
   *  Constant: '<S150>/off delay'
   *  Constant: '<S150>/on delay'
   *  Logic: '<S150>/Logical Operator1'
   *  Logic: '<S150>/Logical Operator2'
   *  Logic: '<S154>/Logical Operator'
   *  Logic: '<S154>/Logical Operator1'
   *  RelationalOperator: '<S150>/Relational Operator1'
   *  RelationalOperator: '<S150>/Relational Operator2'
   */
  rtb_LogicalOperator2_j = ((rtb_UnitDelay_if || (rtb_RelationalOperator_k &&
    (rtb_to65535_b >= 0.0))) && (!(rtb_LogicalOperator_bd && (rtb_to65535_dx >=
    10.0))));

  /* S-Function (motohawk_sfun_data_write): '<S147>/motohawk_data_write' */
  /* Write to Data Storage as scalar: MPRD_KeepAlive */
  {
    MPRD_KeepAlive_DataStore() = rtb_LogicalOperator2_j;
  }

  /* Saturate: '<S152>/Saturation' */
  rtb_Saturation_p = rtb_Switch_h >= 86400.0 ? 86400.0 : rtb_Switch_h <= 0.0 ?
    0.0 : rtb_Switch_h;

  /* S-Function (motohawk_sfun_data_write): '<S152>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Contactor_Disable_Timer */
  {
    Contactor_Disable_Timer_DataStore() = rtb_Saturation_p;
  }

  /* Saturate: '<S153>/Saturation' */
  rtb_Saturation_c = rtb_Merge_k >= 86400.0 ? 86400.0 : rtb_Merge_k <= 0.0 ? 0.0
    : rtb_Merge_k;

  /* S-Function (motohawk_sfun_data_write): '<S153>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Solectria_Enable_timer */
  {
    Solectria_Enable_timer_DataStore() = rtb_Saturation_c;
  }

  /* Logic: '<S114>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration8'
   */
  BuckyWagon_01_B.s114_LogicalOperator = (((Allow_MainContactor_Close_DataStore())
    && rtb_RelationalOperator_k));

  /* Logic: '<S114>/Logical Operator3' */
  rtb_UnitDelay_if = (rtb_LogicalOperator4_f && rtb_LogicalOperator2_e);

  /* Logic: '<S114>/Logical Operator4' */
  rtb_LogicalOperator2_e = (BuckyWagon_01_B.s223_RelationalOperator &&
    rtb_UnitDelay_if);

  /* Logic: '<S114>/Logical Operator5' */
  rtb_LogicalOperator5_k = (rtb_LogicalOperator4_f || BuckyWagon_01_B.s230_Merge);

  /* Update for UnitDelay: '<S154>/Unit Delay' */
  BuckyWagon_01_DWork.s154_UnitDelay_DSTATE = rtb_LogicalOperator2_j;

  /* Update for UnitDelay: '<S155>/Unit Delay' */
  BuckyWagon_01_DWork.s155_UnitDelay_DSTATE = rtb_LogicalOperator2_o;

  /* Update for UnitDelay: '<S151>/Unit Delay' */
  BuckyWagon_01_DWork.s151_UnitDelay_DSTATE = rtb_to65535_c;

  /* Update for UnitDelay: '<S151>/Unit Delay1' */
  BuckyWagon_01_DWork.s151_UnitDelay1_DSTATE = rtb_to65535_d;

  /* Update for UnitDelay: '<S150>/Unit Delay' */
  BuckyWagon_01_DWork.s150_UnitDelay_DSTATE = rtb_to65535_b;

  /* Update for UnitDelay: '<S150>/Unit Delay1' */
  BuckyWagon_01_DWork.s150_UnitDelay1_DSTATE = rtb_to65535_dx;

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

  /* If: '<S225>/If' incorporates:
   *  Inport: '<S367>/In1'
   *  Inport: '<S368>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S225>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S225>/override_enable'
   */
  if ((Estop_switch_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S225>/NewValue' incorporates:
     *  ActionPort: '<S367>/Action Port'
     */
    BuckyWagon_01_B.s225_Merge = (Estop_switch_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S367>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(126);
    }

    /* End of Outputs for SubSystem: '<S225>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S225>/OldValue' incorporates:
     *  ActionPort: '<S368>/Action Port'
     */
    BuckyWagon_01_B.s225_Merge = rtb_RelationalOperator_k;

    /* S-Function (motohawk_sfun_code_cover): '<S368>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(127);
    }

    /* End of Outputs for SubSystem: '<S225>/OldValue' */
  }

  /* End of If: '<S225>/If' */

  /* Logic: '<S9>/Logical Operator' incorporates:
   *  Logic: '<S9>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_action): '<S9>/motohawk_fault_action'
   */
  rtb_BelowLoTarget = !(BuckyWagon_01_B.s316_pluggedIn ||
                        BuckyWagon_01_B.s225_Merge || GetFaultActionStatus(3));

  /* Product: '<S224>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S224>/motohawk_calibration2'
   */
  rtb_Merge_k = BuckyWagon_01_B.s223_Accurate_Speed * (TireSize_DataStore());

  /* Product: '<S224>/Product1' incorporates:
   *  Constant: '<S224>/Constant2'
   *  S-Function (motohawk_sfun_calibration): '<S224>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S224>/motohawk_calibration1'
   */
  rtb_to65535_c = (RearDiffRatio_DataStore()) * (IntermediaryGearRatio_DataStore
    ()) * 336.0;

  /* If: '<S364>/If' incorporates:
   *  Inport: '<S365>/In1'
   *  Inport: '<S366>/In1'
   *  Product: '<S224>/Product6'
   *  S-Function (motohawk_sfun_calibration): '<S364>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S364>/override_enable'
   */
  if ((Vehicle_Speed_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S364>/NewValue' incorporates:
     *  ActionPort: '<S365>/Action Port'
     */
    BuckyWagon_01_B.s364_Merge = (Vehicle_Speed_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S365>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(124);
    }

    /* End of Outputs for SubSystem: '<S364>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S364>/OldValue' incorporates:
     *  ActionPort: '<S366>/Action Port'
     */
    BuckyWagon_01_B.s364_Merge = rtb_Merge_k / rtb_to65535_c;

    /* S-Function (motohawk_sfun_code_cover): '<S366>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(125);
    }

    /* End of Outputs for SubSystem: '<S364>/OldValue' */
  }

  /* End of If: '<S364>/If' */

  /* Abs: '<S224>/Abs' */
  BuckyWagon_01_B.s224_Abs = fabs(BuckyWagon_01_B.s364_Merge);

  /* S-Function Block: <S12>/motohawk_ain2 Resource: Reverse_Switch_Pin */
  {
    extern NativeError_S Reverse_Switch_Pin_AnalogInput_Get(uint16_T *adc,
      uint16_T *status);
    Reverse_Switch_Pin_AnalogInput_Get(&rtb_motohawk_ain2, NULL);
  }

  /* DataTypeConversion: '<S213>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S12>/motohawk_ain2'
   */
  BuckyWagon_01_B.s213_DataTypeConversion = (real_T)rtb_motohawk_ain2;

  /* RelationalOperator: '<S213>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S213>/SwitchPoint'
   */
  rtb_RelationalOperator_k = (BuckyWagon_01_B.s213_DataTypeConversion >
    (Reverse_SwitchPt_DataStore()));

  /* Logic: '<S213>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S213>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelationalOperator_k ^= (Reverse_Polarity_DataStore());

  /* If: '<S244>/If' incorporates:
   *  Inport: '<S245>/In1'
   *  Inport: '<S246>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S244>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S244>/override_enable'
   */
  if ((Reverse_Switch_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S244>/NewValue' incorporates:
     *  ActionPort: '<S245>/Action Port'
     */
    BuckyWagon_01_B.s244_Merge = (Reverse_Switch_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S245>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(60);
    }

    /* End of Outputs for SubSystem: '<S244>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S244>/OldValue' incorporates:
     *  ActionPort: '<S246>/Action Port'
     */
    BuckyWagon_01_B.s244_Merge = rtb_RelationalOperator_k;

    /* S-Function (motohawk_sfun_code_cover): '<S246>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(61);
    }

    /* End of Outputs for SubSystem: '<S244>/OldValue' */
  }

  /* End of If: '<S244>/If' */

  /* S-Function Block: <S335>/motohawk_delta_time */
  rtb_DataTypeConversion_b = 0.005;

  /* Product: '<S335>/Product' incorporates:
   *  MinMax: '<S335>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S335>/motohawk_calibration'
   */
  rtb_DataTypeConversion_b /= (rtb_DataTypeConversion_b >=
    (Accel_FilterConst_DataStore())) || rtIsNaN((Accel_FilterConst_DataStore()))
    ? rtb_DataTypeConversion_b : (Accel_FilterConst_DataStore());

  /* Logic: '<S218>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S218>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S218>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_fj = (IsFaultActive(1) || IsFaultActive(2));

  /* Logic: '<S218>/Logical Operator6' */
  rtb_RelationalOperator_k = !rtb_RelationalOperator_fj;

  /* Logic: '<S218>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S218>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S218>/motohawk_fault_status3'
   */
  rtb_LogicalOperator_bd = (IsFaultSuspected(1) || IsFaultSuspected(2));

  /* S-Function Block: <S12>/motohawk_ain Resource: Accel_Pedal_Pin */
  {
    extern NativeError_S Accel_Pedal_Pin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    Accel_Pedal_Pin_AnalogInput_Get(&BuckyWagon_01_B.s12_motohawk_ain, NULL);
  }

  /* DataTypeConversion: '<S218>/Data Type Conversion' */
  rtb_DataTypeConversion_i = BuckyWagon_01_B.s12_motohawk_ain;

  /* Fcn: '<S218>/ZeroFullCal' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S218>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S218>/motohawk_calibration5'
   */
  rtb_Product_p = ((real_T)rtb_DataTypeConversion_i - (Accel_Zero_DataStore())) /
    ((Accel_Full_DataStore()) - (Accel_Zero_DataStore()));

  /* Saturate: '<S218>/Saturation' */
  BuckyWagon_01_B.s218_Saturation = rtb_Product_p >= 1.0 ? 1.0 : rtb_Product_p <=
    0.0 ? 0.0 : rtb_Product_p;

  /* UnitDelay: '<S218>/Unit Delay1' */
  rtb_UnitDelay1_k = BuckyWagon_01_DWork.s218_UnitDelay1_DSTATE;

  /* If: '<S218>/If' incorporates:
   *  Logic: '<S218>/Logical Operator5'
   */
  if (rtb_RelationalOperator_k && rtb_LogicalOperator_bd) {
    /* Outputs for IfAction SubSystem: '<S218>/If Action Subsystem' incorporates:
     *  ActionPort: '<S336>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(rtb_UnitDelay1_k, &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S218>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_fj) {
    /* Outputs for IfAction SubSystem: '<S218>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S337>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem((Accel_DfltValue_DataStore()), &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S218>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S218>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S338>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(BuckyWagon_01_B.s218_Saturation,
      &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S218>/If Action Subsystem2' */
  }

  /* End of If: '<S218>/If' */

  /* Sum: '<S340>/Sum1' incorporates:
   *  Constant: '<S340>/Constant'
   *  Product: '<S340>/Product'
   *  Product: '<S340>/Product1'
   *  Sum: '<S340>/Sum'
   *  UnitDelay: '<S340>/Unit Delay'
   */
  rtb_Sum1 = (1.0 - rtb_DataTypeConversion_b) *
    BuckyWagon_01_DWork.s340_UnitDelay_DSTATE + rtb_Merge_c *
    rtb_DataTypeConversion_b;

  /* If: '<S339>/If' incorporates:
   *  Inport: '<S341>/In1'
   *  Inport: '<S342>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S339>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S339>/override_enable'
   */
  if ((Accel_Pedal_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S339>/NewValue' incorporates:
     *  ActionPort: '<S341>/Action Port'
     */
    BuckyWagon_01_B.s339_Merge = (Accel_Pedal_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S341>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(118);
    }

    /* End of Outputs for SubSystem: '<S339>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S339>/OldValue' incorporates:
     *  ActionPort: '<S342>/Action Port'
     */
    BuckyWagon_01_B.s339_Merge = rtb_Sum1;

    /* S-Function (motohawk_sfun_code_cover): '<S342>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(119);
    }

    /* End of Outputs for SubSystem: '<S339>/OldValue' */
  }

  /* End of If: '<S339>/If' */

  /* Outputs for Atomic SubSystem: '<S9>/Reverse' */

  /* Abs: '<S115>/Abs' */
  BuckyWagon_01_B.s115_Abs = fabs(BuckyWagon_01_B.s224_Abs);

  /* Stateflow: '<S115>/Chart' */

  /* Gateway: Foreground/Control Strategy/Reverse/Chart */
  BuckyWagon_01_DWork.s158_sfEvent = CALL_EVENT;
  BuckyWagon_01_c1_BuckyWagon_01();

  /* If: '<S159>/If' incorporates:
   *  Inport: '<S160>/In1'
   *  Inport: '<S161>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S159>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S159>/override_enable'
   */
  if ((In_Reverse_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S159>/NewValue' incorporates:
     *  ActionPort: '<S160>/Action Port'
     */
    BuckyWagon_01_B.s159_Merge = (In_Reverse_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S160>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(46);
    }

    /* End of Outputs for SubSystem: '<S159>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S159>/OldValue' incorporates:
     *  ActionPort: '<S161>/Action Port'
     */
    BuckyWagon_01_B.s159_Merge = BuckyWagon_01_B.s158_inReverse;

    /* S-Function (motohawk_sfun_code_cover): '<S161>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(47);
    }

    /* End of Outputs for SubSystem: '<S159>/OldValue' */
  }

  /* End of If: '<S159>/If' */

  /* End of Outputs for SubSystem: '<S9>/Reverse' */
  /* S-Function Block: <S351>/motohawk_delta_time */
  rtb_Product_p = 0.005;

  /* Product: '<S351>/Product' incorporates:
   *  MinMax: '<S351>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S351>/motohawk_calibration'
   */
  rtb_Product_p /= (rtb_Product_p >= (Brake_FilterConst_DataStore())) || rtIsNaN
    ((Brake_FilterConst_DataStore())) ? rtb_Product_p :
    (Brake_FilterConst_DataStore());

  /* Logic: '<S220>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S220>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S220>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_fj = (IsFaultActive(5) || IsFaultActive(6));

  /* Logic: '<S220>/Logical Operator6' */
  rtb_RelationalOperator_k = !rtb_RelationalOperator_fj;

  /* Logic: '<S220>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S220>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S220>/motohawk_fault_status3'
   */
  rtb_LogicalOperator_bd = (IsFaultSuspected(5) || IsFaultSuspected(6));

  /* S-Function Block: <S12>/motohawk_ain1 Resource: Brake_Pedal_Pin */
  {
    extern NativeError_S Brake_Pedal_Pin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    Brake_Pedal_Pin_AnalogInput_Get(&BuckyWagon_01_B.s12_motohawk_ain1, NULL);
  }

  /* DataTypeConversion: '<S220>/Data Type Conversion' */
  rtb_DataTypeConversion_b = (real_T)BuckyWagon_01_B.s12_motohawk_ain1;

  /* Fcn: '<S220>/ZeroFullCal' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S220>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S220>/motohawk_calibration5'
   */
  rtb_Sum3 = (rtb_DataTypeConversion_b - (Brake_Zero_DataStore())) /
    ((Brake_Full_DataStore()) - (Brake_Zero_DataStore()));

  /* Saturate: '<S220>/Saturation' */
  BuckyWagon_01_B.s220_Saturation = rtb_Sum3 >= 1.0 ? 1.0 : rtb_Sum3 <= 0.0 ?
    0.0 : rtb_Sum3;

  /* UnitDelay: '<S220>/Unit Delay1' */
  rtb_UnitDelay1_b = BuckyWagon_01_DWork.s220_UnitDelay1_DSTATE;

  /* If: '<S220>/If' incorporates:
   *  Logic: '<S220>/Logical Operator5'
   */
  if (rtb_RelationalOperator_k && rtb_LogicalOperator_bd) {
    /* Outputs for IfAction SubSystem: '<S220>/If Action Subsystem' incorporates:
     *  ActionPort: '<S352>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(rtb_UnitDelay1_b, &rtb_Merge_e);

    /* End of Outputs for SubSystem: '<S220>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_fj) {
    /* Outputs for IfAction SubSystem: '<S220>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S353>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem((Brake_DfltValue_DataStore()), &rtb_Merge_e);

    /* End of Outputs for SubSystem: '<S220>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S220>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S354>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(BuckyWagon_01_B.s220_Saturation,
      &rtb_Merge_e);

    /* End of Outputs for SubSystem: '<S220>/If Action Subsystem2' */
  }

  /* End of If: '<S220>/If' */

  /* Sum: '<S356>/Sum1' incorporates:
   *  Constant: '<S356>/Constant'
   *  Product: '<S356>/Product'
   *  Product: '<S356>/Product1'
   *  Sum: '<S356>/Sum'
   *  UnitDelay: '<S356>/Unit Delay'
   */
  rtb_Sum1_o = (1.0 - rtb_Product_p) * BuckyWagon_01_DWork.s356_UnitDelay_DSTATE
    + rtb_Merge_e * rtb_Product_p;

  /* If: '<S355>/If' incorporates:
   *  Inport: '<S357>/In1'
   *  Inport: '<S358>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S355>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S355>/override_enable'
   */
  if ((Brake_Pedal_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S355>/NewValue' incorporates:
     *  ActionPort: '<S357>/Action Port'
     */
    BuckyWagon_01_B.s355_Merge = (Brake_Pedal_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S357>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(122);
    }

    /* End of Outputs for SubSystem: '<S355>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S355>/OldValue' incorporates:
     *  ActionPort: '<S358>/Action Port'
     */
    BuckyWagon_01_B.s355_Merge = rtb_Sum1_o;

    /* S-Function (motohawk_sfun_code_cover): '<S358>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(123);
    }

    /* End of Outputs for SubSystem: '<S355>/OldValue' */
  }

  /* End of If: '<S355>/If' */

  /* Outputs for Atomic SubSystem: '<S9>/Drive' */

  /* RelationalOperator: '<S121>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration2'
   */
  rtb_LogicalOperator12 = (BuckyWagon_01_B.s339_Merge >
    (Temp_ped_switchOver_DataStore()));

  /* S-Function Block: <S123>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s123_motohawk_delta_time_DWORK1, NULL);
    rtb_MinMax_o = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S123>/Product' incorporates:
   *  MinMax: '<S123>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S123>/motohawk_calibration'
   */
  rtb_MinMax_o /= (rtb_MinMax_o >= (Veh_Speed_Regen_Filter_DataStore())) ||
    rtIsNaN((Veh_Speed_Regen_Filter_DataStore())) ? rtb_MinMax_o :
    (Veh_Speed_Regen_Filter_DataStore());

  /* Product: '<S126>/Product' */
  rtb_Merge_k = BuckyWagon_01_B.s223_Accurate_Speed * rtb_MinMax_o;

  /* Sum: '<S126>/Sum' incorporates:
   *  Constant: '<S126>/Constant'
   */
  rtb_to65535_c = 1.0 - rtb_MinMax_o;

  /* UnitDelay: '<S126>/Unit Delay' */
  rtb_MinMax_o = BuckyWagon_01_DWork.s126_UnitDelay_DSTATE;

  /* Sum: '<S126>/Sum1' incorporates:
   *  Product: '<S126>/Product1'
   */
  rtb_Sum1_h = rtb_to65535_c * rtb_MinMax_o + rtb_Merge_k;

  /* Outputs for Atomic SubSystem: '<S121>/Regen' */

  /* S-Function Block: <S128>/motohawk_prelookup_row */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (StateOfChargePctIn_DataStore()) = BuckyWagon_01_B.s232_Merge;
    (StateOfChargePctIdx_DataStore()) = TablePrelookup_real_T
      (BuckyWagon_01_B.s232_Merge, (StateOfChargePctIdxArr_DataStore()), 4,
       (StateOfChargePctIdx_DataStore()));
    rtb_motohawk_prelookup_row = (StateOfChargePctIdx_DataStore());
  }

  /* S-Function Block: <S128>/motohawk_prelookup_col */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MotorSpdIn_DataStore()) = rtb_Sum1_h;
    (MotorSpdIdx_DataStore()) = TablePrelookup_real_T(rtb_Sum1_h,
      (MotorSpdIdxArr_DataStore()), 8, (MotorSpdIdx_DataStore()));
    rtb_motohawk_prelookup_col = (MotorSpdIdx_DataStore());
  }

  /* S-Function Block: <S128>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_Product1_n = TableInterpolation2D_real_T(rtb_motohawk_prelookup_row,
      rtb_motohawk_prelookup_col, (real_T *) ((MotoHawkTable2DMap_DataStore())),
      4, 8);
    (MotoHawkTable2D_DataStore()) = rtb_Product1_n;
  }

  /* Saturate: '<S124>/Saturation1' */
  BuckyWagon_01_B.s124_Saturation1 = rtb_Product1_n >= 1.0 ? 1.0 :
    rtb_Product1_n <= 0.0 ? 0.0 : rtb_Product1_n;

  /* Sum: '<S124>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration1'
   */
  rtb_Merge_k = BuckyWagon_01_B.s355_Merge - (Regen_Start_DataStore());

  /* Product: '<S124>/Divide' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration2'
   *  Sum: '<S124>/Sum1'
   */
  rtb_Product1_n = rtb_Merge_k / ((Regen_Full_DataStore()) -
    (Regen_Start_DataStore()));

  /* Product: '<S124>/Product' incorporates:
   *  Gain: '<S124>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration3'
   *  Saturate: '<S124>/Saturation2'
   */
  BuckyWagon_01_B.s124_Product = (rtb_Product1_n >= 1.0 ? 1.0 : rtb_Product1_n <=
    0.0 ? 0.0 : rtb_Product1_n) * -1.0 * (Max_Regen_Tq_DataStore());

  /* Logic: '<S124>/Logical Operator2' incorporates:
   *  Logic: '<S124>/Logical Operator'
   *  Logic: '<S124>/Logical Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration4'
   */
  rtb_RelationalOperator_k = !((BuckyWagon_01_B.s159_Merge != 0.0) ||
    (!((Enable_Regen_DataStore()) != 0.0)));

  /* RelationalOperator: '<S124>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration6'
   */
  rtb_LogicalOperator_bd = (BuckyWagon_01_B.s224_Abs >
    (Min_Speed_Allow_Coast_NegT_DataStore()));

  /* Gain: '<S124>/Gain1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration7'
   */
  rtb_Product1_n = -(Max_Coast_Tq_DataStore());

  /* Product: '<S124>/Product2' incorporates:
   *  Logic: '<S121>/Logic'
   *  RelationalOperator: '<S124>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration8'
   */
  BuckyWagon_01_B.s124_Product2 = (real_T)rtb_RelationalOperator_k *
    (Enable_Coast_Neg_Torque_DataStore()) * (real_T)rtb_LogicalOperator_bd *
    rtb_Product1_n * (real_T)(BuckyWagon_01_B.s232_Merge <
    (Max_SOC_For_Coast_Tq_EN_DataStore())) * (real_T)!rtb_LogicalOperator12;

  /* If: '<S127>/If' incorporates:
   *  Inport: '<S129>/In1'
   *  Inport: '<S130>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S127>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S127>/override_enable'
   */
  if ((Regen_SOC_Speed_Ramp_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S127>/NewValue' incorporates:
     *  ActionPort: '<S129>/Action Port'
     */
    rtb_Merge_k = (Regen_SOC_Speed_Ramp_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S129>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(40);
    }

    /* End of Outputs for SubSystem: '<S127>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S127>/OldValue' incorporates:
     *  ActionPort: '<S130>/Action Port'
     */
    rtb_Merge_k = BuckyWagon_01_B.s124_Saturation1;

    /* S-Function (motohawk_sfun_code_cover): '<S130>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(41);
    }

    /* End of Outputs for SubSystem: '<S127>/OldValue' */
  }

  /* End of If: '<S127>/If' */

  /* Product: '<S124>/Product1' */
  rtb_Product1_n = (real_T)rtb_RelationalOperator_k *
    BuckyWagon_01_B.s124_Product * rtb_Merge_k;

  /* Switch: '<S124>/Switch' incorporates:
   *  RelationalOperator: '<S124>/Relational Operator1'
   */
  if (rtb_Product1_n <= BuckyWagon_01_B.s124_Product2) {
    rtb_Merge_k = rtb_Product1_n;
  } else {
    rtb_Merge_k = BuckyWagon_01_B.s124_Product2;
  }

  /* End of Switch: '<S124>/Switch' */
  /* End of Outputs for SubSystem: '<S121>/Regen' */
  /* S-Function Block: <S122>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (AccelPedalPreIn_DataStore()) = BuckyWagon_01_B.s339_Merge;
    (AccelPedalPreIdx_DataStore()) = TablePrelookup_real_T
      (BuckyWagon_01_B.s339_Merge, (AccelPedalPreIdxArr_DataStore()), 17,
       (AccelPedalPreIdx_DataStore()));
    rtb_motohawk_prelookup1 = (AccelPedalPreIdx_DataStore());
  }

  /* S-Function Block: <S122>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VehicleSpeedPreIn_DataStore()) = BuckyWagon_01_B.s224_Abs;
    (VehicleSpeedPreIdx_DataStore()) = TablePrelookup_real_T
      (BuckyWagon_01_B.s224_Abs, (VehicleSpeedPreIdxArr_DataStore()), 17,
       (VehicleSpeedPreIdx_DataStore()));
    rtb_motohawk_prelookup = (VehicleSpeedPreIdx_DataStore());
  }

  /* S-Function Block: <S131>/motohawk_interpolation_2d1 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BuckyWagon_01_B.s131_motohawk_interpolation_2d1 =
      TableInterpolation2D_real_T(rtb_motohawk_prelookup1,
      rtb_motohawk_prelookup, (real_T *) ((DriverDemandBaseReverseMap_DataStore())),
      17, 17);
    (DriverDemandBaseReverse_DataStore()) =
      BuckyWagon_01_B.s131_motohawk_interpolation_2d1;
  }

  /* S-Function Block: <S131>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BuckyWagon_01_B.s131_motohawk_interpolation_2d = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup1, rtb_motohawk_prelookup, (real_T *)
       ((DriverDemandBaseForwardMap_DataStore())), 17, 17);
    (DriverDemandBaseForward_DataStore()) =
      BuckyWagon_01_B.s131_motohawk_interpolation_2d;
  }

  /* Switch: '<S131>/Switch' */
  if (BuckyWagon_01_B.s159_Merge > 0.0) {
    BuckyWagon_01_B.s131_Switch =
      BuckyWagon_01_B.s131_motohawk_interpolation_2d1;
  } else {
    BuckyWagon_01_B.s131_Switch = BuckyWagon_01_B.s131_motohawk_interpolation_2d;
  }

  /* End of Switch: '<S131>/Switch' */
  /* Logic: '<S133>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S133>/motohawk_calibration'
   */
  rtb_RelationalOperator_k = (((RegenDisableTq_DataStore()) != 0.0) ||
    (BuckyWagon_01_B.s159_Merge != 0.0));

  /* S-Function Block: <S133>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BuckyWagon_01_B.s133_motohawk_interpolation_2d = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup1, rtb_motohawk_prelookup, (real_T *)
       ((RegenAccelMap_DataStore())), 17, 17);
    (RegenAccel_DataStore()) = BuckyWagon_01_B.s133_motohawk_interpolation_2d;
  }

  /* S-Function Block: <S122>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (BrakePedalPreIn_DataStore()) = BuckyWagon_01_B.s355_Merge;
    (BrakePedalPreIdx_DataStore()) = TablePrelookup_real_T
      (BuckyWagon_01_B.s355_Merge, (BrakePedalPreIdxArr_DataStore()), 17,
       (BrakePedalPreIdx_DataStore()));
    rtb_motohawk_prelookup2 = (BrakePedalPreIdx_DataStore());
  }

  /* S-Function Block: <S133>/motohawk_interpolation_2d1 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BuckyWagon_01_B.s133_motohawk_interpolation_2d1 =
      TableInterpolation2D_real_T(rtb_motohawk_prelookup2,
      rtb_motohawk_prelookup, (real_T *) ((RegenBrakeMap_DataStore())), 17, 17);
    (RegenBrake_DataStore()) = BuckyWagon_01_B.s133_motohawk_interpolation_2d1;
  }

  /* MinMax: '<S133>/MinMax' */
  BuckyWagon_01_B.s133_MinMax = (BuckyWagon_01_B.s133_motohawk_interpolation_2d >=
    BuckyWagon_01_B.s133_motohawk_interpolation_2d1) || rtIsNaN
    (BuckyWagon_01_B.s133_motohawk_interpolation_2d1) ?
    BuckyWagon_01_B.s133_motohawk_interpolation_2d :
    BuckyWagon_01_B.s133_motohawk_interpolation_2d1;

  /* Switch: '<S133>/Switch' incorporates:
   *  Sum: '<S133>/Add'
   */
  if (rtb_RelationalOperator_k) {
    BuckyWagon_01_B.s133_Switch = BuckyWagon_01_B.s131_Switch;
  } else {
    BuckyWagon_01_B.s133_Switch = BuckyWagon_01_B.s131_Switch +
      BuckyWagon_01_B.s133_MinMax;
  }

  /* End of Switch: '<S133>/Switch' */
  /* S-Function Block: <S122>/motohawk_prelookup3 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (SOCPreIn_DataStore()) = BuckyWagon_01_B.s232_Merge;
    (SOCPreIdx_DataStore()) = TablePrelookup_real_T(BuckyWagon_01_B.s232_Merge,
      (SOCPreIdxArr_DataStore()), 17, (SOCPreIdx_DataStore()));
    rtb_motohawk_prelookup3 = (SOCPreIdx_DataStore());
  }

  /* S-Function Block: <S134>/motohawk_interpolation_2d1 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BuckyWagon_01_B.s134_motohawk_interpolation_2d1 =
      TableInterpolation2D_real_T(rtb_motohawk_prelookup3,
      rtb_motohawk_prelookup, (real_T *) ((ChargeClipMap_DataStore())), 17, 17);
    (ChargeClip_DataStore()) = BuckyWagon_01_B.s134_motohawk_interpolation_2d1;
  }

  /* S-Function Block: <S134>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BuckyWagon_01_B.s134_motohawk_interpolation_2d = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup3, rtb_motohawk_prelookup, (real_T *)
       ((DischargeClipMap_DataStore())), 17, 17);
    (DischargeClip_DataStore()) = BuckyWagon_01_B.s134_motohawk_interpolation_2d;
  }

  /* Switch: '<S134>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S134>/motohawk_calibration'
   */
  if ((SOCClipDisable_DataStore()) > 0.0) {
    BuckyWagon_01_B.s134_Switch = BuckyWagon_01_B.s133_Switch;
  } else {
    /* MinMax: '<S139>/MinMax1' incorporates:
     *  MinMax: '<S139>/MinMax'
     */
    rtb_to65535_c = (BuckyWagon_01_B.s133_Switch >=
                     BuckyWagon_01_B.s134_motohawk_interpolation_2d1) || rtIsNaN
      (BuckyWagon_01_B.s134_motohawk_interpolation_2d1) ?
      BuckyWagon_01_B.s133_Switch :
      BuckyWagon_01_B.s134_motohawk_interpolation_2d1;
    BuckyWagon_01_B.s134_Switch = (rtb_to65535_c <=
      BuckyWagon_01_B.s134_motohawk_interpolation_2d) || rtIsNaN
      (BuckyWagon_01_B.s134_motohawk_interpolation_2d) ? rtb_to65535_c :
      BuckyWagon_01_B.s134_motohawk_interpolation_2d;
  }

  /* End of Switch: '<S134>/Switch' */
  /* Stateflow: '<S132>/Inverter Overheat Logic' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration1'
   */

  /* Gateway: Foreground/Control Strategy/Drive/Torque Management/Overheat Clip/Inverter Overheat Logic */
  /* During: Foreground/Control Strategy/Drive/Torque Management/Overheat Clip/Inverter Overheat Logic */
  if (BuckyWagon_01_DWork.s136_is_active_c5_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Control Strategy/Drive/Torque Management/Overheat Clip/Inverter Overheat Logic */
    BuckyWagon_01_DWork.s136_is_active_c5_BuckyWagon_01 = 1U;

    /* Transition: '<S136>:7' */
    BuckyWagon_01_DWork.s136_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Off_k;
  } else {
    switch (BuckyWagon_01_DWork.s136_is_c5_BuckyWagon_01) {
     case BuckyWagon_01_IN_Off_k:
      /* During 'Off': '<S136>:5' */
      if (BuckyWagon_01_B.s223_Inverter_Temperature >=
          (InverterOverheatHigh_DataStore())) {
        /* Transition: '<S136>:8' */
        BuckyWagon_01_DWork.s136_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_On;
      } else {
        BuckyWagon_01_B.s136_out = 0.0;
      }
      break;

     case BuckyWagon_01_IN_On:
      /* During 'On': '<S136>:6' */
      if (BuckyWagon_01_B.s223_Inverter_Temperature <=
          (InverterOverheatLow_DataStore())) {
        /* Transition: '<S136>:9' */
        BuckyWagon_01_DWork.s136_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Off_k;
      } else {
        BuckyWagon_01_B.s136_out = 1.0;
      }
      break;

     default:
      /* Transition: '<S136>:7' */
      BuckyWagon_01_DWork.s136_is_c5_BuckyWagon_01 = BuckyWagon_01_IN_Off_k;
      break;
    }
  }

  /* End of Stateflow: '<S132>/Inverter Overheat Logic' */

  /* Switch: '<S132>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration2'
   */
  if ((OverHeatClipDisable_DataStore()) > 0.0) {
    BuckyWagon_01_B.s132_Switch1 = BuckyWagon_01_B.s134_Switch;
  } else {
    /* Switch: '<S132>/Switch' */
    if (BuckyWagon_01_B.s136_out > 0.0) {
      /* MinMax: '<S138>/MinMax1' incorporates:
       *  MinMax: '<S138>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S137>/motohawk_calibration'
       *  S-Function (motohawk_sfun_calibration): '<S137>/motohawk_calibration1'
       */
      rtb_to65535_c = (BuckyWagon_01_B.s134_Switch >=
                       (SaturationLwrLim_DataStore())) || rtIsNaN
        ((SaturationLwrLim_DataStore())) ? BuckyWagon_01_B.s134_Switch :
        (SaturationLwrLim_DataStore());
      BuckyWagon_01_B.s132_Switch1 = (rtb_to65535_c <=
        (SaturationUprLim_DataStore())) || rtIsNaN((SaturationUprLim_DataStore()))
        ? rtb_to65535_c : (SaturationUprLim_DataStore());
    } else {
      BuckyWagon_01_B.s132_Switch1 = BuckyWagon_01_B.s134_Switch;
    }

    /* End of Switch: '<S132>/Switch' */
  }

  /* End of Switch: '<S132>/Switch1' */
  /* MinMax: '<S140>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S135>/motohawk_calibration'
   */
  rtb_MinMax_o = (BuckyWagon_01_B.s132_Switch1 >= (TorqueClipLwrLim_DataStore()))
    || rtIsNaN((TorqueClipLwrLim_DataStore())) ? BuckyWagon_01_B.s132_Switch1 :
    (TorqueClipLwrLim_DataStore());

  /* MinMax: '<S140>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S135>/motohawk_calibration1'
   */
  BuckyWagon_01_B.s140_MinMax1 = (rtb_MinMax_o <= (TorqueClipUprLim_DataStore()))
    || rtIsNaN((TorqueClipUprLim_DataStore())) ? rtb_MinMax_o :
    (TorqueClipUprLim_DataStore());

  /* Switch: '<S111>/Drive Mode' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration'
   */
  if (((uint8_T)(DriveMode_DataStore())) >= 1) {
    /* Switch: '<S121>/Switch' incorporates:
     *  Product: '<S121>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S125>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S125>/motohawk_prelookup'
     */
    if (rtb_LogicalOperator12) {
      /* S-Function Block: <S125>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (AccelPedalMapIn_DataStore()) = BuckyWagon_01_B.s339_Merge;
        (AccelPedalMapIdx_DataStore()) = TablePrelookup_real_T
          (BuckyWagon_01_B.s339_Merge, (AccelPedalMapIdxArr_DataStore()), 101,
           (AccelPedalMapIdx_DataStore()));
        rtb_motohawk_prelookup_o = (AccelPedalMapIdx_DataStore());
      }

      /* S-Function Block: <S125>/motohawk_interpolation_1d */
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

    /* End of Switch: '<S121>/Switch' */
  } else {
    rtb_Merge_k = BuckyWagon_01_B.s140_MinMax1;
  }

  /* End of Switch: '<S111>/Drive Mode' */
  /* Switch: '<S111>/Switch' incorporates:
   *  Gain: '<S111>/Gain'
   *  Logic: '<S111>/Logical Operator'
   *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration1'
   */
  if ((((uint8_T)(Reverse_TQ_Negative_Enable_DataStore())) != 0) &&
      (BuckyWagon_01_B.s159_Merge != 0.0)) {
    rtb_Merge_k = -rtb_Merge_k;
  }

  /* End of Switch: '<S111>/Switch' */

  /* Update for UnitDelay: '<S126>/Unit Delay' */
  BuckyWagon_01_DWork.s126_UnitDelay_DSTATE = rtb_Sum1_h;

  /* End of Outputs for SubSystem: '<S9>/Drive' */

  /* Product: '<S9>/Product1' */
  BuckyWagon_01_B.s9_Motor_Torque = (rtb_LogicalOperator2_e ? (real_T)
    rtb_BelowLoTarget : 0.0) * rtb_Merge_k;

  /* S-Function Block: <S113>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s113_motohawk_delta_time_DWORK1, NULL);
    rtb_Sum3 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S113>/Product' incorporates:
   *  MinMax: '<S113>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration'
   */
  rtb_Sum3 /= (rtb_Sum3 >= (TorqueRequestLP_DataStore())) || rtIsNaN
    ((TorqueRequestLP_DataStore())) ? rtb_Sum3 : (TorqueRequestLP_DataStore());

  /* Sum: '<S145>/Sum1' incorporates:
   *  Constant: '<S145>/Constant'
   *  Product: '<S145>/Product'
   *  Product: '<S145>/Product1'
   *  Sum: '<S145>/Sum'
   *  UnitDelay: '<S145>/Unit Delay'
   */
  BuckyWagon_01_B.s145_Sum1 = (1.0 - rtb_Sum3) *
    BuckyWagon_01_DWork.s145_UnitDelay_DSTATE + BuckyWagon_01_B.s9_Motor_Torque *
    rtb_Sum3;

  /* If: '<S116>/If' incorporates:
   *  Inport: '<S162>/In1'
   *  Inport: '<S163>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S116>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S116>/override_enable'
   */
  if ((motor_torque_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S116>/NewValue' incorporates:
     *  ActionPort: '<S162>/Action Port'
     */
    BuckyWagon_01_B.s116_Merge = (motor_torque_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S162>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(48);
    }

    /* End of Outputs for SubSystem: '<S116>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S116>/OldValue' incorporates:
     *  ActionPort: '<S163>/Action Port'
     */
    BuckyWagon_01_B.s116_Merge = BuckyWagon_01_B.s145_Sum1;

    /* S-Function (motohawk_sfun_code_cover): '<S163>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(49);
    }

    /* End of Outputs for SubSystem: '<S116>/OldValue' */
  }

  /* End of If: '<S116>/If' */

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
  rtb_Merge_k = fabs(BuckyWagon_01_B.s116_Merge);

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
  if (BuckyWagon_01_B.s114_LogicalOperator) {
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
    rtb_Merge_nz = BuckyWagon_01_B.s114_LogicalOperator;

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
  rtb_LogicalOperator12 = (BuckyWagon_01_B.s159_Merge != 0.0);

  /* DataTypeConversion: '<S9>/Data Type Conversion' */
  BuckyWagon_01_B.s9_InReverse = (real_T)rtb_LogicalOperator12;

  /* S-Function (motohawk_sfun_fault_action): '<S110>/motohawk_fault_action'
   *
   * Regarding '<S110>/motohawk_fault_action':
     Get Fault Action Status: PumpFan_Full
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_RelationalOperator_fj = GetFaultActionStatus(6);
  }

  /* Sum: '<S110>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration'
   */
  rtb_Sum3 = BuckyWagon_01_B.s223_Inverter_Temperature +
    (Inverter_Temp_Offset_DataStore());

  /* Product: '<S110>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration1'
   */
  rtb_Product_p = (real_T)((uint8_T)(Inverter_Temp_Enable_DataStore())) *
    rtb_Sum3;

  /* If: '<S310>/If' incorporates:
   *  Inport: '<S323>/In1'
   *  Inport: '<S324>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S310>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S310>/override_enable'
   */
  if ((Eaton_HV_Charger_Temperature_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S310>/NewValue' incorporates:
     *  ActionPort: '<S323>/Action Port'
     */
    rtb_Merge_k = (Eaton_HV_Charger_Temperature_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S323>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(106);
    }

    /* End of Outputs for SubSystem: '<S310>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S310>/OldValue' incorporates:
     *  ActionPort: '<S324>/Action Port'
     */
    rtb_Merge_k = BuckyWagon_01_B.s217_Eaton_HV_Charger_Temperature;

    /* S-Function (motohawk_sfun_code_cover): '<S324>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(107);
    }

    /* End of Outputs for SubSystem: '<S310>/OldValue' */
  }

  /* End of If: '<S310>/If' */

  /* Sum: '<S110>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration2'
   */
  rtb_Sum3 = rtb_Merge_k + (Charger_Temp_Offset_DataStore());

  /* Product: '<S110>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration3'
   */
  rtb_Merge_k = (real_T)((uint8_T)(Charger_Temp_Enable_DataStore())) * rtb_Sum3;

  /* Sum: '<S110>/Sum2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_data_read): '<S110>/motohawk_data_read'
   */
  rtb_Sum3 = Rotor_Temp_DataStore() + (Rotor_Temp_Offset_DataStore());

  /* Product: '<S110>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration5'
   */
  rtb_to65535_dx = (real_T)((uint8_T)(Rotor_Temp_Enable_DataStore())) * rtb_Sum3;

  /* Sum: '<S110>/Sum3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S110>/motohawk_data_read1'
   */
  rtb_Sum3 = Stator_Temp_DataStore() + (Stator_Temp_Offset_DataStore());

  /* Product: '<S110>/Product3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration7'
   */
  rtb_Product_h = (real_T)((uint8_T)(Stator_Temp_Enable_DataStore())) * rtb_Sum3;

  /* MinMax: '<S110>/MinMax' */
  rtb_to65535_c = (rtb_Product_p >= rtb_Merge_k) || rtIsNaN(rtb_Merge_k) ?
    rtb_Product_p : rtb_Merge_k;
  rtb_to65535_c = (rtb_to65535_c >= rtb_to65535_dx) || rtIsNaN(rtb_to65535_dx) ?
    rtb_to65535_c : rtb_to65535_dx;
  rtb_MinMax_e = (rtb_to65535_c >= rtb_Product_h) || rtIsNaN(rtb_Product_h) ?
    rtb_to65535_c : rtb_Product_h;

  /* Switch: '<S110>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S110>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_prelookup): '<S110>/motohawk_prelookup1'
   */
  if (rtb_RelationalOperator_fj) {
    BuckyWagon_01_B.s110_Switch1 = (Overheat_PumpFan_Speed_DataStore());
  } else {
    /* S-Function Block: <S110>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (Coolant_FanIn_DataStore()) = rtb_MinMax_e;
      (Coolant_FanIdx_DataStore()) = TablePrelookup_real_T(rtb_MinMax_e,
        (Coolant_FanIdxArr_DataStore()), 10, (Coolant_FanIdx_DataStore()));
      rtb_motohawk_prelookup1_k = (Coolant_FanIdx_DataStore());
    }

    /* S-Function Block: <S110>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_FanDutyCycle = TableInterpolation1D_real_T(rtb_motohawk_prelookup1_k,
        (real_T *) ((Coolant_FanTbl_DataStore())), 10);
      (Coolant_Fan_DataStore()) = rtb_FanDutyCycle;
    }

    BuckyWagon_01_B.s110_Switch1 = rtb_FanDutyCycle;
  }

  /* End of Switch: '<S110>/Switch1' */

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
  rtb_Merge_k = BuckyWagon_01_B.s110_Switch1 >= 100.0 ? 100.0 :
    BuckyWagon_01_B.s110_Switch1 <= -100.0 ? -100.0 :
    BuckyWagon_01_B.s110_Switch1;

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
  rtb_RelationalOperator_k = (BuckyWagon_01_B.s355_Merge >
    (Brake_light_On_Setpoint_DataStore()));

  /* Logic: '<S14>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S14>/motohawk_calibration2'
   */
  rtb_LogicalOperator1_p = ((rtb_RelationalOperator_k &&
    (Enable_Brake_Light_Out_DataStore())));

  /* Update for S-Function (motohawk_sfun_dout): '<S14>/motohawk_dout1' */

  /* S-Function Block: DOut178p0011 */
  {
    DOut178p0011_DiscreteOutput_Set(BuckyWagon_01_B.s38_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S14>/motohawk_pwm2' */

  /* S-Function Block: Fan_Pin_PWMOutput */
  Fan_Pin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_h,
    rtb_DataTypeConversion3, 0, 1);

  /* Update for S-Function (motohawk_sfun_dout): '<S14>/motohawk_dout2' */

  /* S-Function Block: DOut179p0011 */
  {
    DOut179p0011_DiscreteOutput_Set(BuckyWagon_01_B.s39_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S14>/motohawk_dout3' */

  /* S-Function Block: DOut180p0011 */
  {
    DOut180p0011_DiscreteOutput_Set(rtb_LogicalOperator1_p);
  }

  /* End of Outputs for SubSystem: '<S7>/Analog Out' */
  /* RelationalOperator: '<S112>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration'
   */
  rtb_RelationalOperator_k = (BuckyWagon_01_B.s355_Merge >
    (Brake_Active_Threshold_DataStore()));

  /* Abs: '<S112>/Abs' */
  rtb_Merge_k = fabs(BuckyWagon_01_B.s224_Abs);

  /* RelationalOperator: '<S112>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration15'
   */
  rtb_LogicalOperator_bd = (BuckyWagon_01_B.s355_Merge > (hardBrakeLev_DataStore
                             ()));

  /* Stateflow: '<S112>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration16'
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration17'
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration18'
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration19'
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration3'
   */

  /* Gateway: Foreground/Control Strategy/EHPAS_PercentControl/Chart */
  /* During: Foreground/Control Strategy/EHPAS_PercentControl/Chart */
  if (BuckyWagon_01_DWork.s141_is_active_c9_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Control Strategy/EHPAS_PercentControl/Chart */
    BuckyWagon_01_DWork.s141_is_active_c9_BuckyWagon_01 = 1U;

    /* Transition: '<S141>:25' */
    BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_KeyUp;

    /* Entry 'KeyUp': '<S141>:23' */
    BuckyWagon_01_DWork.s141_counts = 0U;
  } else {
    switch (BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01) {
     case BuckyWagon_01_IN_Braking:
      /* During 'Braking': '<S141>:76' */
      if ((!rtb_RelationalOperator_k) && (rtb_Merge_k < (creepSpeed_DataStore())))
      {
        /* Transition: '<S141>:79' */
        BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S141>:18' */
        /* Transition: '<S141>:34' */
        BuckyWagon_01_DWork.s141_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S141>:31' */
        BuckyWagon_01_DWork.s141_counts = 0U;
      } else if (rtb_RelationalOperator_k && (rtb_Merge_k <
                  (creepSpeed_DataStore()))) {
        /* Transition: '<S141>:46' */
        BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_SlowingDown;
      } else if ((!rtb_RelationalOperator_k) && ((real_T)
                  BuckyWagon_01_DWork.s141_counts > (minPumpRunTime_DataStore())
                  * 200.0)) {
        /* Transition: '<S141>:92' */
        BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S141>:33' */
        BuckyWagon_01_DWork.s141_is_NormalDriving = BuckyWagon_01_IN_Driving;
      } else {
        BuckyWagon_01_DWork.s141_counts = BuckyWagon_01_DWork.s141_counts + 1U;
        BuckyWagon_01_B.s141_PumpState = 3U;
      }
      break;

     case BuckyWagon_01_IN_Idle:
      /* During 'Idle': '<S141>:39' */
      if (rtb_Merge_k > (stopSpeed_DataStore())) {
        /* Transition: '<S141>:48' */
        BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S141>:18' */
        /* Transition: '<S141>:34' */
        BuckyWagon_01_DWork.s141_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S141>:31' */
        BuckyWagon_01_DWork.s141_counts = 0U;
      } else if (rtb_LogicalOperator12) {
        /* Transition: '<S141>:112' */
        BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S141>:18' */
        /* Transition: '<S141>:34' */
        BuckyWagon_01_DWork.s141_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S141>:31' */
        BuckyWagon_01_DWork.s141_counts = 0U;
      } else if (rtb_Merge_k > (creepSpeed_DataStore())) {
        /* Transition: '<S141>:113' */
        BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S141>:33' */
        BuckyWagon_01_DWork.s141_is_NormalDriving = BuckyWagon_01_IN_Driving;
      } else {
        BuckyWagon_01_B.s141_PumpState = 0U;
      }
      break;

     case BuckyWagon_01_IN_KeyUp:
      /* During 'KeyUp': '<S141>:23' */
      if ((rtb_Merge_k > (creepSpeed_DataStore())) &&
          (BuckyWagon_01_DWork.s141_counts > (uint32_T)(((uint16_T)
             (KeyOnRuntime_Sec_DataStore())) * 200))) {
        /* Transition: '<S141>:37' */
        BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S141>:33' */
        BuckyWagon_01_DWork.s141_is_NormalDriving = BuckyWagon_01_IN_Driving;
      } else if ((rtb_Merge_k > (stopSpeed_DataStore())) && (rtb_Merge_k <
                  (creepSpeed_DataStore()))) {
        /* Transition: '<S141>:109' */
        BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S141>:18' */
        /* Transition: '<S141>:34' */
        BuckyWagon_01_DWork.s141_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S141>:31' */
        BuckyWagon_01_DWork.s141_counts = 0U;
      } else if (rtb_LogicalOperator12) {
        /* Transition: '<S141>:43' */
        BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S141>:18' */
        /* Transition: '<S141>:34' */
        BuckyWagon_01_DWork.s141_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S141>:31' */
        BuckyWagon_01_DWork.s141_counts = 0U;
      } else if ((rtb_Merge_k < (stopSpeed_DataStore())) &&
                 (BuckyWagon_01_DWork.s141_counts > (uint32_T)(((uint16_T)
                    (KeyOnRuntime_Sec_DataStore())) * 200))) {
        /* Transition: '<S141>:44' */
        BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Idle;
      } else {
        BuckyWagon_01_DWork.s141_counts = BuckyWagon_01_DWork.s141_counts + 1U;
        BuckyWagon_01_B.s141_PumpState = 4U;
      }
      break;

     case BuckyWagon_01_IN_LowSpeedManeuvering:
      /* During 'LowSpeedManeuvering': '<S141>:18' */
      if ((rtb_Merge_k > (creepSpeed_DataStore())) && ((real_T)
           BuckyWagon_01_DWork.s141_counts > (minPumpRunTime_DataStore()) *
           200.0)) {
        /* Transition: '<S141>:57' */
        BuckyWagon_01_DWork.s141_is_LowSpeedManeuvering = (uint8_T)0U;
        BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S141>:33' */
        BuckyWagon_01_DWork.s141_is_NormalDriving = BuckyWagon_01_IN_Driving;
      } else if (BuckyWagon_01_DWork.s141_counts > (uint32_T)(((uint16_T)
                   (LowSpeedManeuverRuntime_DataStore())) * 200)) {
        /* Transition: '<S141>:47' */
        BuckyWagon_01_DWork.s141_is_LowSpeedManeuvering = (uint8_T)0U;
        BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Idle;
      } else {
        BuckyWagon_01_B.s141_PumpState = 1U;
        switch (BuckyWagon_01_DWork.s141_is_LowSpeedManeuvering) {
         case BuckyWagon_01_IN_Creeping:
          /* During 'Creeping': '<S141>:31' */
          if (rtb_LogicalOperator12) {
            /* Transition: '<S141>:53' */
            BuckyWagon_01_DWork.s141_is_LowSpeedManeuvering =
              BuckyWagon_01_IN_Reversing;

            /* Entry 'Reversing': '<S141>:32' */
            BuckyWagon_01_DWork.s141_counts = 0U;
          } else {
            BuckyWagon_01_DWork.s141_counts = BuckyWagon_01_DWork.s141_counts +
              1U;
          }
          break;

         case BuckyWagon_01_IN_Reversing:
          /* During 'Reversing': '<S141>:32' */
          if (!rtb_LogicalOperator12) {
            /* Transition: '<S141>:54' */
            BuckyWagon_01_DWork.s141_is_LowSpeedManeuvering =
              BuckyWagon_01_IN_Creeping;

            /* Entry 'Creeping': '<S141>:31' */
            BuckyWagon_01_DWork.s141_counts = 0U;
          }
          break;

         default:
          /* Transition: '<S141>:34' */
          BuckyWagon_01_DWork.s141_is_LowSpeedManeuvering =
            BuckyWagon_01_IN_Creeping;

          /* Entry 'Creeping': '<S141>:31' */
          BuckyWagon_01_DWork.s141_counts = 0U;
          break;
        }
      }
      break;

     case BuckyWagon_01_IN_NormalDriving:
      /* During 'NormalDriving': '<S141>:20' */
      if ((BuckyWagon_01_DWork.s141_brakeCounts > (brakeTime_sec_DataStore())) ||
          rtb_LogicalOperator_bd) {
        /* Transition: '<S141>:88' */
        BuckyWagon_01_DWork.s141_is_NormalDriving = (uint8_T)0U;
        BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Braking;

        /* Entry 'Braking': '<S141>:76' */
        BuckyWagon_01_DWork.s141_counts = 0U;
      } else {
        switch (BuckyWagon_01_DWork.s141_is_NormalDriving) {
         case BuckyWagon_01_IN_Driving:
          /* During 'Driving': '<S141>:21' */
          if (rtb_RelationalOperator_k) {
            /* Transition: '<S141>:81' */
            BuckyWagon_01_DWork.s141_is_NormalDriving =
              BuckyWagon_01_IN_DrivingAndBrake;

            /* Entry 'DrivingAndBrake': '<S141>:74' */
            BuckyWagon_01_DWork.s141_brakeCounts = 0.0;
          } else {
            BuckyWagon_01_B.s141_PumpState = 2U;
          }
          break;

         case BuckyWagon_01_IN_DrivingAndBrake:
          /* During 'DrivingAndBrake': '<S141>:74' */
          if (!rtb_RelationalOperator_k) {
            /* Transition: '<S141>:82' */
            BuckyWagon_01_DWork.s141_is_NormalDriving = BuckyWagon_01_IN_Driving;
          } else {
            BuckyWagon_01_DWork.s141_brakeCounts =
              BuckyWagon_01_DWork.s141_brakeCounts + 1.0;
            BuckyWagon_01_B.s141_PumpState = 5U;
          }
          break;

         default:
          /* Transition: '<S141>:33' */
          BuckyWagon_01_DWork.s141_is_NormalDriving = BuckyWagon_01_IN_Driving;
          break;
        }
      }
      break;

     case BuckyWagon_01_IN_SlowingDown:
      /* During 'SlowingDown': '<S141>:96' */
      if (rtb_Merge_k < (stopSpeed_DataStore())) {
        /* Transition: '<S141>:97' */
        BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Stopping;
      } else if ((!rtb_RelationalOperator_k) || ((real_T)
                  BuckyWagon_01_DWork.s141_counts < (minPumpRunTime_DataStore())
                  * 200.0)) {
        /* Transition: '<S141>:100' */
        BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S141>:18' */
        /* Transition: '<S141>:34' */
        BuckyWagon_01_DWork.s141_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S141>:31' */
        BuckyWagon_01_DWork.s141_counts = 0U;
      } else if ((rtb_Merge_k > (creepSpeed_DataStore())) && ((real_T)
                  BuckyWagon_01_DWork.s141_counts > (minPumpRunTime_DataStore())
                  * 200.0)) {
        /* Transition: '<S141>:101' */
        BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S141>:33' */
        BuckyWagon_01_DWork.s141_is_NormalDriving = BuckyWagon_01_IN_Driving;
      } else if ((real_T)BuckyWagon_01_DWork.s141_counts >
                 (minPumpRunTime_DataStore()) * 200.0) {
        /* Transition: '<S141>:104' */
        BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S141>:18' */
        /* Transition: '<S141>:34' */
        BuckyWagon_01_DWork.s141_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S141>:31' */
        BuckyWagon_01_DWork.s141_counts = 0U;
      } else {
        BuckyWagon_01_DWork.s141_counts = BuckyWagon_01_DWork.s141_counts + 1U;
        BuckyWagon_01_B.s141_PumpState = 6U;
      }
      break;

     case BuckyWagon_01_IN_Stopping:
      /* During 'Stopping': '<S141>:98' */
      if ((real_T)BuckyWagon_01_DWork.s141_counts > (minPumpRunTime_DataStore())
          * 200.0) {
        /* Transition: '<S141>:106' */
        BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Idle;
      } else if (rtb_Merge_k > (stopSpeed_DataStore())) {
        /* Transition: '<S141>:107' */
        BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_SlowingDown;
      } else {
        BuckyWagon_01_DWork.s141_counts = BuckyWagon_01_DWork.s141_counts + 1U;
        BuckyWagon_01_B.s141_PumpState = 7U;
      }
      break;

     default:
      /* Transition: '<S141>:25' */
      BuckyWagon_01_DWork.s141_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_KeyUp;

      /* Entry 'KeyUp': '<S141>:23' */
      BuckyWagon_01_DWork.s141_counts = 0U;
      break;
    }
  }

  /* End of Stateflow: '<S112>/Chart' */
  /* If: '<S142>/If' incorporates:
   *  Inport: '<S143>/In1'
   *  Inport: '<S144>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S142>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S142>/override_enable'
   */
  if ((EHPAS_PumpStateEnable_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S142>/NewValue' incorporates:
     *  ActionPort: '<S143>/Action Port'
     */
    rtb_Compare = ((uint8_T)(EHPAS_PumpStateEnable_ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S143>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(42);
    }

    /* End of Outputs for SubSystem: '<S142>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S142>/OldValue' incorporates:
     *  ActionPort: '<S144>/Action Port'
     */
    rtb_Compare = BuckyWagon_01_B.s141_PumpState;

    /* S-Function (motohawk_sfun_code_cover): '<S144>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(43);
    }

    /* End of Outputs for SubSystem: '<S142>/OldValue' */
  }

  /* End of If: '<S142>/If' */

  /* MultiPortSwitch: '<S112>/Multiport Switch1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration20'
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration21'
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration9'
   */
  switch (rtb_Compare) {
   case 0:
    rtb_MultiportSwitch1 = ((uint16_T)(EHPAS_IdleEn_DataStore()));
    break;

   case 1:
    rtb_MultiportSwitch1 = ((uint16_T)(EHPAS_lowSpeedEn_DataStore()));
    break;

   case 2:
    rtb_MultiportSwitch1 = ((uint16_T)(EHPAS_driveEn_DataStore()));
    break;

   case 3:
    rtb_MultiportSwitch1 = ((uint16_T)(EHPAS_brakeEn_DataStore()));
    break;

   case 4:
    rtb_MultiportSwitch1 = ((uint16_T)(EHPAS_keyUpEn_DataStore()));
    break;

   case 5:
    rtb_MultiportSwitch1 = ((uint16_T)(EHPAS_driveNbrakeEn_DataStore()));
    break;

   case 6:
    rtb_MultiportSwitch1 = ((uint16_T)(EHPAS_slowingEn_DataStore()));
    break;

   default:
    rtb_MultiportSwitch1 = ((uint16_T)(EHPAS_stoppingEn_DataStore()));
    break;
  }

  /* End of MultiPortSwitch: '<S112>/Multiport Switch1' */

  /* Outputs for Enabled SubSystem: '<S7>/EHPAS Power Steering Pump Controller' incorporates:
   *  EnablePort: '<S15>/Enable1'
   */
  /* S-Function (motohawk_sfun_calibration): '<S7>/motohawk_calibration2' */
  if ((Enable_PowerSteering_CAN_Msg_DataStore())) {
    /* Switch: '<S15>/Switch' incorporates:
     *  Constant: '<S15>/Operating Mode - Activate'
     *  Constant: '<S15>/Operating Mode - Disabled'
     *  Logic: '<S9>/Logical Operator2'
     */
    if (rtb_UnitDelay_if && (rtb_MultiportSwitch1 != 0)) {
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

  /* Switch: '<S110>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S110>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S110>/motohawk_prelookup'
   */
  if (rtb_RelationalOperator_fj) {
    BuckyWagon_01_B.s110_Switch = (Overheat_PumpFan_Speed_DataStore());
  } else {
    /* S-Function Block: <S110>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (Coolant_PumpIn_DataStore()) = rtb_MinMax_e;
      (Coolant_PumpIdx_DataStore()) = TablePrelookup_real_T(rtb_MinMax_e,
        (Coolant_PumpIdxArr_DataStore()), 10, (Coolant_PumpIdx_DataStore()));
      rtb_motohawk_prelookup_m = (Coolant_PumpIdx_DataStore());
    }

    /* S-Function Block: <S110>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_CoolantPumpSpeed = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_m, (real_T *) ((Coolant_PumpTbl_DataStore())),
         10);
      (Coolant_Pump_DataStore()) = rtb_CoolantPumpSpeed;
    }

    BuckyWagon_01_B.s110_Switch = rtb_CoolantPumpSpeed;
  }

  /* End of Switch: '<S110>/Switch' */

  /* Outputs for Atomic SubSystem: '<S7>/EMP Coolant Pump' */

  /* Saturate: '<S16>/Saturation' */
  rtb_Merge_k = BuckyWagon_01_B.s110_Switch >= 100.0 ? 100.0 :
    BuckyWagon_01_B.s110_Switch <= 0.0 ? 0.0 : BuckyWagon_01_B.s110_Switch;

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

  /* Outputs for Atomic SubSystem: '<S7>/EMP Cooling Fan' */

  /* Saturate: '<S17>/Saturation' */
  rtb_Merge_k = BuckyWagon_01_B.s110_Switch1 >= 100.0 ? 100.0 :
    BuckyWagon_01_B.s110_Switch1 <= 0.0 ? 0.0 : BuckyWagon_01_B.s110_Switch1;

  /* If: '<S66>/If' incorporates:
   *  Inport: '<S67>/In1'
   *  Inport: '<S68>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S66>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S66>/override_enable'
   */
  if ((EMP_Fan_Speed_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S66>/NewValue' incorporates:
     *  ActionPort: '<S67>/Action Port'
     */
    BuckyWagon_01_B.s66_Merge = (EMP_Fan_Speed_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S67>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EMP Cooling Fan/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(22);
    }

    /* End of Outputs for SubSystem: '<S66>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S66>/OldValue' incorporates:
     *  ActionPort: '<S68>/Action Port'
     */
    BuckyWagon_01_B.s66_Merge = rtb_Merge_k;

    /* S-Function (motohawk_sfun_code_cover): '<S68>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EMP Cooling Fan/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(23);
    }

    /* End of Outputs for SubSystem: '<S66>/OldValue' */
  }

  /* End of If: '<S66>/If' */

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
      /* 0x18ef8b01 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint16_T tmp2;
        uint8_T tmp3;
        if ((Fan_Mode_DataStore()) > 3U) {
          tmp0 = (uint8_T)(3U);
        } else {
          tmp0 = (uint8_T)((Fan_Mode_DataStore()));
        }

        if ((Fan_Hold_Mode_DataStore()) > 3U) {
          tmp1 = (uint8_T)(3U);
        } else {
          tmp1 = (uint8_T)((Fan_Hold_Mode_DataStore()));
        }

        tmp2 = (uint16_T)(((uint16_T)65535U));
        if (BuckyWagon_01_B.s66_Merge < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (BuckyWagon_01_B.s66_Merge > 127.5000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(BuckyWagon_01_B.s66_Merge * (2.0000000000F));
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
        CAN_1_Transmit(1, 0x18ef8b01UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* End of Outputs for SubSystem: '<S7>/EMP Cooling Fan' */
  /* If: '<S69>/If' incorporates:
   *  Inport: '<S74>/In1'
   *  Inport: '<S75>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S18>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S69>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S69>/override_enable'
   */
  if ((Current_Limit_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S69>/NewValue' incorporates:
     *  ActionPort: '<S74>/Action Port'
     */
    BuckyWagon_01_B.s69_Merge = (Current_Limit_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S74>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(24);
    }

    /* End of Outputs for SubSystem: '<S69>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S69>/OldValue' incorporates:
     *  ActionPort: '<S75>/Action Port'
     */
    BuckyWagon_01_B.s69_Merge = (Current_Limit_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S75>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(25);
    }

    /* End of Outputs for SubSystem: '<S69>/OldValue' */
  }

  /* End of If: '<S69>/If' */

  /* If: '<S70>/If' incorporates:
   *  Inport: '<S76>/In1'
   *  Inport: '<S77>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S18>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S70>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S70>/override_enable'
   */
  if ((Voltage_Limit_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S70>/NewValue' incorporates:
     *  ActionPort: '<S76>/Action Port'
     */
    BuckyWagon_01_B.s70_Merge = (Voltage_Limit_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S76>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(26);
    }

    /* End of Outputs for SubSystem: '<S70>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S70>/OldValue' incorporates:
     *  ActionPort: '<S77>/Action Port'
     */
    BuckyWagon_01_B.s70_Merge = (Voltage_Limit_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S77>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(27);
    }

    /* End of Outputs for SubSystem: '<S70>/OldValue' */
  }

  /* End of If: '<S70>/If' */

  /* If: '<S71>/If' incorporates:
   *  Constant: '<S18>/Constant3'
   *  Inport: '<S78>/In1'
   *  Inport: '<S79>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S71>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S71>/override_enable'
   */
  if ((Charge_Falt_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S71>/NewValue' incorporates:
     *  ActionPort: '<S78>/Action Port'
     */
    BuckyWagon_01_B.s71_Merge = ((uint8_T)(Charge_Falt_Override_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S78>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(28);
    }

    /* End of Outputs for SubSystem: '<S71>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S71>/OldValue' incorporates:
     *  ActionPort: '<S79>/Action Port'
     */
    BuckyWagon_01_B.s71_Merge = 0U;

    /* S-Function (motohawk_sfun_code_cover): '<S79>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(29);
    }

    /* End of Outputs for SubSystem: '<S71>/OldValue' */
  }

  /* End of If: '<S71>/If' */

  /* RelationalOperator: '<S18>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S18>/motohawk_calibration2'
   */
  rtb_RelationalOperator_k = (BuckyWagon_01_B.s232_Merge >=
    (ChargeComplete_SOC_DataStore()));

  /* If: '<S72>/If' incorporates:
   *  Inport: '<S80>/In1'
   *  Inport: '<S81>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S72>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S72>/override_enable'
   */
  if ((Charge_Complete_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S72>/NewValue' incorporates:
     *  ActionPort: '<S80>/Action Port'
     */
    BuckyWagon_01_B.s72_Merge = (Charge_Complete_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S80>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(30);
    }

    /* End of Outputs for SubSystem: '<S72>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S72>/OldValue' incorporates:
     *  ActionPort: '<S81>/Action Port'
     */
    BuckyWagon_01_B.s72_Merge = rtb_RelationalOperator_k;

    /* S-Function (motohawk_sfun_code_cover): '<S81>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(31);
    }

    /* End of Outputs for SubSystem: '<S72>/OldValue' */
  }

  /* End of If: '<S72>/If' */

  /* If: '<S73>/If' incorporates:
   *  Inport: '<S82>/In1'
   *  Inport: '<S83>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S73>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S73>/override_enable'
   */
  if ((Charge_Enable_Override_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S73>/NewValue' incorporates:
     *  ActionPort: '<S82>/Action Port'
     */
    BuckyWagon_01_B.s73_Merge = (Charge_Enable_Override_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S82>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(32);
    }

    /* End of Outputs for SubSystem: '<S73>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S73>/OldValue' incorporates:
     *  ActionPort: '<S83>/Action Port'
     */
    BuckyWagon_01_B.s73_Merge = rtb_LogicalOperator5_k;

    /* S-Function (motohawk_sfun_code_cover): '<S83>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(33);
    }

    /* End of Outputs for SubSystem: '<S73>/OldValue' */
  }

  /* End of If: '<S73>/If' */

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
        tmp0 = (uint8_T)(BuckyWagon_01_B.s73_Merge);
        tmp1 = (uint8_T)(BuckyWagon_01_B.s72_Merge);
        if (BuckyWagon_01_B.s71_Merge > 3U) {
          tmp2 = (uint8_T)(3U);
        } else {
          tmp2 = (uint8_T)(BuckyWagon_01_B.s71_Merge);
        }

        if (BuckyWagon_01_B.s70_Merge < 0.0000000000F) {
          tmp3 = (uint16_T)(0U);
        } else if (BuckyWagon_01_B.s70_Merge > 803.0000000000F) {
          tmp3 = (uint16_T)(4015U);
        } else {
          tmp3 = (uint16_T)(BuckyWagon_01_B.s70_Merge * (5.0000000000F));
        }

        if (BuckyWagon_01_B.s69_Merge < 0.0000000000F) {
          tmp4 = (uint16_T)(0U);
        } else if (BuckyWagon_01_B.s69_Merge > 200.7500000000F) {
          tmp4 = (uint16_T)(4015U);
        } else {
          tmp4 = (uint16_T)(BuckyWagon_01_B.s69_Merge * (20.0000000000F));
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

  /* UnitDelay: '<S88>/Output' */
  rtb_Compare = BuckyWagon_01_DWork.s88_Output_DSTATE;

  /* Switch: '<S84>/Switch' incorporates:
   *  DataTypeConversion: '<S84>/Data Type Conversion'
   *  Product: '<S84>/Product'
   *  Rounding: '<S84>/Rounding Function'
   *  S-Function (motohawk_sfun_calibration): '<S84>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S84>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S84>/motohawk_calibration3'
   */
  if (((uint8_T)(Counter_Mode_Select_DataStore())) >= 1) {
    BuckyWagon_01_B.s84_Switch = (Command_Counter_DataStore());
  } else {
    BuckyWagon_01_B.s84_Switch = floor((real_T)rtb_Compare *
      (Counter_Multiplier_DataStore()));
  }

  /* End of Switch: '<S84>/Switch' */
  /* If: '<S85>/If' incorporates:
   *  Inport: '<S91>/In1'
   *  Inport: '<S92>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S85>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S85>/override_enable'
   */
  if ((UQM_Enable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S85>/NewValue' incorporates:
     *  ActionPort: '<S91>/Action Port'
     */
    BuckyWagon_01_B.s85_Merge = (UQM_Enable_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S91>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(34);
    }

    /* End of Outputs for SubSystem: '<S85>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S85>/OldValue' incorporates:
     *  ActionPort: '<S92>/Action Port'
     */
    BuckyWagon_01_B.s85_Merge = rtb_LogicalOperator2_e;

    /* S-Function (motohawk_sfun_code_cover): '<S92>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(35);
    }

    /* End of Outputs for SubSystem: '<S85>/OldValue' */
  }

  /* End of If: '<S85>/If' */

  /* If: '<S86>/If' incorporates:
   *  Inport: '<S93>/In1'
   *  Inport: '<S94>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S86>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S86>/override_enable'
   */
  if ((UQM_Torque_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S86>/NewValue' incorporates:
     *  ActionPort: '<S93>/Action Port'
     */
    BuckyWagon_01_B.s86_Merge = (UQM_Torque_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S93>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(36);
    }

    /* End of Outputs for SubSystem: '<S86>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S86>/OldValue' incorporates:
     *  ActionPort: '<S94>/Action Port'
     */
    BuckyWagon_01_B.s86_Merge = BuckyWagon_01_B.s116_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S94>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(37);
    }

    /* End of Outputs for SubSystem: '<S86>/OldValue' */
  }

  /* End of If: '<S86>/If' */

  /* Logic: '<S19>/Logical Operator' */
  rtb_RelationalOperator_k = !(BuckyWagon_01_B.s9_InReverse != 0.0);

  /* If: '<S87>/If' incorporates:
   *  Inport: '<S95>/In1'
   *  Inport: '<S96>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S87>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S87>/override_enable'
   */
  if ((UQM_Direction_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S87>/NewValue' incorporates:
     *  ActionPort: '<S95>/Action Port'
     */
    BuckyWagon_01_B.s87_Merge = (UQM_Direction_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S95>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(38);
    }

    /* End of Outputs for SubSystem: '<S87>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S87>/OldValue' incorporates:
     *  ActionPort: '<S96>/Action Port'
     */
    BuckyWagon_01_B.s87_Merge = rtb_RelationalOperator_k;

    /* S-Function (motohawk_sfun_code_cover): '<S96>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(39);
    }

    /* End of Outputs for SubSystem: '<S87>/OldValue' */
  }

  /* End of If: '<S87>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S19>/Send CAN Messages2' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (12.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (11500U)
         )) {
      /* 0x14efef03 */
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
        uint16_T tmp7;
        uint16_T tmp8;
        uint16_T tmp9;
        if ((Control_Mode_DataStore()) > 15U) {
          tmp0 = (uint8_T)(15U);
        } else {
          tmp0 = (uint8_T)((Control_Mode_DataStore()));
        }

        if (BuckyWagon_01_B.s84_Switch < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (BuckyWagon_01_B.s84_Switch > 15.0000000000F) {
          tmp1 = (uint8_T)(15U);
        } else {
          tmp1 = (uint8_T)(BuckyWagon_01_B.s84_Switch);
        }

        if ((Use_Raw_Speed_DataStore()) < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if ((Use_Raw_Speed_DataStore()) > 1.0000000000F) {
          tmp2 = (uint8_T)(1U);
        } else {
          tmp2 = (uint8_T)((Use_Raw_Speed_DataStore()) != 0);
        }

        tmp3 = (uint8_T)(BuckyWagon_01_B.s87_Merge != 0);
        tmp4 = (uint8_T)(BuckyWagon_01_B.s85_Merge != 0);
        if ((Ignore_Accel_Limit_DataStore()) < 0.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if ((Ignore_Accel_Limit_DataStore()) > 1.0000000000F) {
          tmp5 = (uint8_T)(1U);
        } else {
          tmp5 = (uint8_T)((Ignore_Accel_Limit_DataStore()) != 0);
        }

        if ((UQM_TurboMode_DataStore()) > 3U) {
          tmp6 = (uint8_T)(3U);
        } else {
          tmp6 = (uint8_T)((UQM_TurboMode_DataStore()));
        }

        if (BuckyWagon_01_B.s86_Merge < -3212.8000000000F) {
          tmp7 = (uint16_T)(0U);
        } else if (BuckyWagon_01_B.s86_Merge > 3340.7000000000F) {
          tmp7 = (uint16_T)(65535U);
        } else {
          tmp7 = (uint16_T)((BuckyWagon_01_B.s86_Merge - (-3212.8000000000F)) *
                            (10.0000000000F));
        }

        if ((Forward_Speed_Limit_DataStore()) < -16064.0000000000F) {
          tmp8 = (uint16_T)(0U);
        } else if ((Forward_Speed_Limit_DataStore()) > 16703.5000000000F) {
          tmp8 = (uint16_T)(65535U);
        } else {
          tmp8 = (uint16_T)(((Forward_Speed_Limit_DataStore()) -
                             (-16064.0000000000F)) * (2.0000000000F));
        }

        if ((Reverse_Speed_Limit_DataStore()) < -16064.0000000000F) {
          tmp9 = (uint16_T)(0U);
        } else if ((Reverse_Speed_Limit_DataStore()) > 16703.5000000000F) {
          tmp9 = (uint16_T)(65535U);
        } else {
          tmp9 = (uint16_T)(((Reverse_Speed_Limit_DataStore()) -
                             (-16064.0000000000F)) * (2.0000000000F));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0] & 0x0000000F)) | ((((uint8_T *)(
          &tmp1))[0] & 0x0000000F) << 4) ;
        msg_data[1] = ((((uint8_T *)(&tmp2))[0] & 0x00000001) << 2) |
          ((((uint8_T *)(&tmp3))[0] & 0x00000001) << 3) | ((((uint8_T *)(&tmp4))
          [0] & 0x00000001) << 4) | ((((uint8_T *)(&tmp5))[0] & 0x00000001) << 5)
          | ((((uint8_T *)(&tmp6))[0] & 0x00000003) << 6) ;
        msg_data[2] = ((((uint8_T *)(&tmp7))[1])) ;
        msg_data[3] = ((((uint8_T *)(&tmp7))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp8))[1])) ;
        msg_data[5] = ((((uint8_T *)(&tmp8))[0])) ;
        msg_data[6] = ((((uint8_T *)(&tmp9))[1])) ;
        msg_data[7] = ((((uint8_T *)(&tmp9))[0])) ;
        CAN_1_Transmit(1, 0x14efef03UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* Sum: '<S89>/FixPt Sum1' incorporates:
   *  Constant: '<S89>/FixPt Constant'
   */
  rtb_Compare = (uint8_T)((uint32_T)rtb_Compare + 1U);

  /* Switch: '<S90>/FixPt Switch' incorporates:
   *  Constant: '<S90>/Constant'
   */
  if (rtb_Compare > 31) {
    rtb_Compare = 0U;
  }

  /* End of Switch: '<S90>/FixPt Switch' */
  /* Product: '<S19>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S19>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S19>/motohawk_calibration9'
   */
  rtb_Clear_Watchdog_Error = (CAN_Watchdog_Reset_DataStore()) *
    (Watchdog_Reset_Num_DataStore());

  /* S-Function (motohawk_sfun_send_canmsgs): '<S19>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (12.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (11500U)
         )) {
      /* 0x1cefef03 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        if ((Heartbeat_Identifier_1_DataStore()) < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if ((Heartbeat_Identifier_1_DataStore()) > 65535.0000000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)((Heartbeat_Identifier_1_DataStore()));
        }

        if (rtb_Clear_Watchdog_Error < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Clear_Watchdog_Error > 255.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_Clear_Watchdog_Error);
        }

        if ((Heartbeat_Identifier_2_DataStore()) < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if ((Heartbeat_Identifier_2_DataStore()) > 255.0000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)((Heartbeat_Identifier_2_DataStore()));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[2] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(1, 0x1cefef03UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S19>/Send CAN Messages1' */
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
      /* 0x10efef03 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint16_T tmp1;
        uint16_T tmp2;
        tmp0 = (uint8_T)((Limits_Control_Mode_DataStore()));
        if ((Acceleration_Limit_DataStore()) < 0.0000000000F) {
          tmp1 = (uint16_T)(0U);
        } else if ((Acceleration_Limit_DataStore()) > 65535.0000000000F) {
          tmp1 = (uint16_T)(65535U);
        } else {
          tmp1 = (uint16_T)((Acceleration_Limit_DataStore()));
        }

        if ((Suge_Limit_DataStore()) < 0.0000000000F) {
          tmp2 = (uint16_T)(0U);
        } else if ((Suge_Limit_DataStore()) > 65535.0000000000F) {
          tmp2 = (uint16_T)(65535U);
        } else {
          tmp2 = (uint16_T)((Suge_Limit_DataStore()));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = 0 ;
        msg_data[2] = ((((uint8_T *)(&tmp1))[1])) ;
        msg_data[3] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp2))[1])) ;
        msg_data[5] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(1, 0x10efef03UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* RelationalOperator: '<S103>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_c = ((BuckyWagon_01_B.s232_Merge <=
    (Under_SOC_Shutdown_Thresh_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S100>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Low_SOC_Shutdown */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(23, rtb_RelationalOperator1_c);
    UpdateFault(23);
  }

  /* RelationalOperator: '<S103>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration2'
   */
  rtb_RelationalOperator_a = (((Over_SOC_Shutdown_Thresh_DataStore()) <=
    BuckyWagon_01_B.s232_Merge));

  /* S-Function (motohawk_sfun_fault_def): '<S100>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: High_SOC_Shutdown */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(15, rtb_RelationalOperator_a);
    UpdateFault(15);
  }

  /* RelationalOperator: '<S102>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_cw = ((BuckyWagon_01_B.s232_Merge <=
    (Under_SOCAlertThresh_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S100>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Low_SOC_Alert */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(22, rtb_RelationalOperator1_cw);
    UpdateFault(22);
  }

  /* RelationalOperator: '<S102>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration2'
   */
  rtb_RelationalOperator_ac = (((Over_SOCAlertThresh_DataStore()) <=
    BuckyWagon_01_B.s232_Merge));

  /* S-Function (motohawk_sfun_fault_def): '<S100>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: High_SOC_Alert */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(14, rtb_RelationalOperator_ac);
    UpdateFault(14);
  }

  /* Sum: '<S97>/Subtract' */
  rtb_Product_h = BuckyWagon_01_B.s212_bcm_vbat -
    BuckyWagon_01_B.s223_Accurate_Voltage;

  /* Abs: '<S97>/Abs' */
  rtb_Product_h = fabs(rtb_Product_h);

  /* RelationalOperator: '<S97>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration2'
   */
  rtb_RelationalOperator_k = (rtb_Product_h >=
    (HV_Bus_allowed_mismatch_DataStore()));

  /* Outputs for Enabled SubSystem: '<S97>/Time Since Enabled (With Input)1' incorporates:
   *  EnablePort: '<S101>/Enable'
   */
  /* S-Function (motohawk_sfun_data_read): '<S97>/motohawk_data_read' */
  if (Batt_Load_Enable_DataStore()) {
    if (!BuckyWagon_01_DWork.s97_TimeSinceEnabledWithInput1_MODE) {
      /* S-Function Block: <S101>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BuckyWagon_01_DWork.s101_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S101>/Unit Delay' */
      BuckyWagon_01_DWork.s101_UnitDelay_DSTATE = 0.0;
      BuckyWagon_01_DWork.s97_TimeSinceEnabledWithInput1_MODE = TRUE;
    }

    /* S-Function Block: <S101>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BuckyWagon_01_DWork.s101_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_a = ((real_T) delta) * 0.000001;
    }

    /* UnitDelay: '<S101>/Unit Delay' */
    BuckyWagon_01_B.s101_UnitDelay = BuckyWagon_01_DWork.s101_UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S101>/Unit Delay' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S101>/motohawk_delta_time'
     *  Sum: '<S101>/Sum'
     */
    BuckyWagon_01_DWork.s101_UnitDelay_DSTATE = rtb_motohawk_delta_time_a +
      BuckyWagon_01_B.s101_UnitDelay;
  } else {
    if (BuckyWagon_01_DWork.s97_TimeSinceEnabledWithInput1_MODE) {
      /* Disable for Outport: '<S101>/Time Since Enabled [sec]' */
      BuckyWagon_01_B.s101_UnitDelay = 0.0;
      BuckyWagon_01_DWork.s97_TimeSinceEnabledWithInput1_MODE = FALSE;
    }
  }

  /* End of S-Function (motohawk_sfun_data_read): '<S97>/motohawk_data_read' */
  /* End of Outputs for SubSystem: '<S97>/Time Since Enabled (With Input)1' */
  /* Logic: '<S97>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S97>/Relational Operator8'
   *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration8'
   */
  rtb_LogicalOperator1_f = ((rtb_RelationalOperator_k &&
    BuckyWagon_01_B.s229_Merge && (BuckyWagon_01_B.s101_UnitDelay >=
    (HV_Bus_offline_delay_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S97>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: HV_BUS_OFFLINE_check_fuse */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(12, rtb_LogicalOperator1_f);
    UpdateFault(12);
  }

  /* S-Function Block: <S343>/motohawk_delta_time */
  rtb_Product_h = 0.005;

  /* Product: '<S343>/Product' incorporates:
   *  MinMax: '<S343>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S343>/motohawk_calibration'
   */
  rtb_Product_h /= (rtb_Product_h >= (LVVolt_FilterConst_DataStore())) ||
    rtIsNaN((LVVolt_FilterConst_DataStore())) ? rtb_Product_h :
    (LVVolt_FilterConst_DataStore());

  /* Logic: '<S219>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S219>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S219>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_fj = (IsFaultActive(19) || IsFaultActive(20));

  /* Logic: '<S219>/Logical Operator6' */
  rtb_RelationalOperator_k = !rtb_RelationalOperator_fj;

  /* Logic: '<S219>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S219>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S219>/motohawk_fault_status3'
   */
  rtb_LogicalOperator_bd = (IsFaultSuspected(19) || IsFaultSuspected(20));

  /* S-Function Block: <S12>/motohawk_ain5 Resource: LV_Voltage_Pin */
  {
    extern NativeError_S LV_Voltage_Pin_AnalogInput_Get(uint16_T *adc, uint16_T *
      status);
    LV_Voltage_Pin_AnalogInput_Get(&BuckyWagon_01_B.s12_motohawk_ain5, NULL);
  }

  /* DataTypeConversion: '<S219>/Data Type Conversion' */
  rtb_to65535_dx = (real_T)BuckyWagon_01_B.s12_motohawk_ain5;

  /* Product: '<S219>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S219>/motohawk_calibration4'
   */
  rtb_Merge_k = rtb_to65535_dx * (LVVolt_Gain_DataStore());

  /* Sum: '<S219>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S219>/motohawk_calibration5'
   */
  BuckyWagon_01_B.s219_Sum1 = rtb_Merge_k + (LVVolt_Ofst_DataStore());

  /* UnitDelay: '<S219>/Unit Delay1' */
  rtb_UnitDelay1_f = BuckyWagon_01_DWork.s219_UnitDelay1_DSTATE;

  /* If: '<S219>/If' incorporates:
   *  Logic: '<S219>/Logical Operator5'
   */
  if (rtb_RelationalOperator_k && rtb_LogicalOperator_bd) {
    /* Outputs for IfAction SubSystem: '<S219>/If Action Subsystem' incorporates:
     *  ActionPort: '<S344>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(rtb_UnitDelay1_f, &rtb_Merge_ep);

    /* End of Outputs for SubSystem: '<S219>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_fj) {
    /* Outputs for IfAction SubSystem: '<S219>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S345>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem((LVVolt_DfltValue_DataStore()),
      &rtb_Merge_ep);

    /* End of Outputs for SubSystem: '<S219>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S219>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S346>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(BuckyWagon_01_B.s219_Sum1, &rtb_Merge_ep);

    /* End of Outputs for SubSystem: '<S219>/If Action Subsystem2' */
  }

  /* End of If: '<S219>/If' */

  /* Sum: '<S348>/Sum1' incorporates:
   *  Constant: '<S348>/Constant'
   *  Product: '<S348>/Product'
   *  Product: '<S348>/Product1'
   *  Sum: '<S348>/Sum'
   *  UnitDelay: '<S348>/Unit Delay'
   */
  rtb_to65535_b = (1.0 - rtb_Product_h) *
    BuckyWagon_01_DWork.s348_UnitDelay_DSTATE + rtb_Merge_ep * rtb_Product_h;

  /* If: '<S347>/If' incorporates:
   *  Inport: '<S349>/In1'
   *  Inport: '<S350>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S347>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S347>/override_enable'
   */
  if ((LVVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S347>/NewValue' incorporates:
     *  ActionPort: '<S349>/Action Port'
     */
    BuckyWagon_01_B.s347_Merge = (LVVolt_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S349>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(120);
    }

    /* End of Outputs for SubSystem: '<S347>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S347>/OldValue' incorporates:
     *  ActionPort: '<S350>/Action Port'
     */
    BuckyWagon_01_B.s347_Merge = rtb_to65535_b;

    /* S-Function (motohawk_sfun_code_cover): '<S350>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(121);
    }

    /* End of Outputs for SubSystem: '<S347>/OldValue' */
  }

  /* End of If: '<S347>/If' */

  /* RelationalOperator: '<S98>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration3'
   */
  rtb_RelationalOperator3 = ((BuckyWagon_01_B.s347_Merge <
    (Low12VThres_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S98>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: LVVoltLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    boolean_T update;
    if (BuckyWagon_01_DWork.s98_motohawk_fault_def5_DWORK1 >= 3) {
      update = 1;
      BuckyWagon_01_DWork.s98_motohawk_fault_def5_DWORK1 = 0;
    } else {
      update = 0;
      BuckyWagon_01_DWork.s98_motohawk_fault_def5_DWORK1++;
    }

    SetFaultSuspected(18, rtb_RelationalOperator3);
    if (update)
      UpdateFault(18);
  }

  /* RelationalOperator: '<S98>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration4'
   */
  rtb_RelationalOperator4_d = ((BuckyWagon_01_B.s347_Merge >
    (High12VThres_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S98>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: LVVoltHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(17, rtb_RelationalOperator4_d);
    UpdateFault(17);
  }

  /* Switch: '<S106>/Switch1' incorporates:
   *  Constant: '<S99>/Constant3'
   *  UnitDelay: '<S106>/Unit Delay'
   */
  if (BuckyWagon_01_ConstB.s106_DataTypeConversion) {
    BuckyWagon_01_B.s106_Switch1 = 0.0;
  } else {
    BuckyWagon_01_B.s106_Switch1 = BuckyWagon_01_DWork.s106_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S106>/Switch1' */
  /* RelationalOperator: '<S105>/LT' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration2'
   */
  rtb_RelationalOperator_fj = (BuckyWagon_01_B.s106_Switch1 >=
    (StallTrqThres_DataStore()));

  /* RelationalOperator: '<S105>/LT1' incorporates:
   *  Constant: '<S99>/Constant4'
   */
  rtb_BelowLoTarget = (BuckyWagon_01_B.s106_Switch1 <= 0.0);

  /* CombinatorialLogic: '<S107>/Combinatorial  Logic' */
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

  /* Switch: '<S107>/Switch1' incorporates:
   *  UnitDelay: '<S107>/Unit Delay'
   */
  if (rtb_CombinatorialLogic[1]) {
    rtb_Switch1_m = rtb_CombinatorialLogic[0];
  } else {
    rtb_Switch1_m = BuckyWagon_01_DWork.s107_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S107>/Switch1' */

  /* S-Function (motohawk_sfun_fault_def): '<S99>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: LockedRotor */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(21, rtb_Switch1_m);
    UpdateFault(21);
  }

  /* Abs: '<S99>/Abs' */
  rtb_Product_h = fabs(BuckyWagon_01_B.s224_Abs);

  /* Switch: '<S99>/Switch1' incorporates:
   *  Constant: '<S99>/Constant2'
   *  RelationalOperator: '<S99>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration4'
   */
  if ((AccelRstThres_DataStore()) > BuckyWagon_01_B.s347_Merge) {
    rtb_Merge_k = (AccelRstSpd_DataStore());
  } else {
    rtb_Merge_k = 0.0;
  }

  /* End of Switch: '<S99>/Switch1' */
  /* Switch: '<S99>/Switch' incorporates:
   *  Constant: '<S99>/Constant'
   *  Constant: '<S99>/Constant1'
   *  RelationalOperator: '<S99>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration1'
   */
  if (rtb_Product_h <= (StallSpd_DataStore())) {
    rtb_Product_h = 1.0;
  } else {
    rtb_Product_h = -1.0;
  }

  /* End of Switch: '<S99>/Switch' */

  /* Sum: '<S99>/Sum' incorporates:
   *  Product: '<S99>/Product'
   */
  rtb_Merge_k = rtb_Product_h * BuckyWagon_01_B.s223_Accurate_Torque -
    rtb_Merge_k;

  /* S-Function Block: <S106>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s106_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S106>/Sum' incorporates:
   *  Product: '<S106>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S106>/motohawk_delta_time'
   */
  rtb_Product_h = rtb_Merge_k * rtb_motohawk_delta_time +
    BuckyWagon_01_B.s106_Switch1;

  /* MinMax: '<S108>/MinMax' incorporates:
   *  Constant: '<S99>/Constant3'
   */
  rtb_Product_h = rtb_Product_h >= 0.0 ? rtb_Product_h : 0.0;

  /* MinMax: '<S108>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration2'
   */
  rtb_Switch_h = (rtb_Product_h <= (StallTrqThres_DataStore())) || rtIsNaN
    ((StallTrqThres_DataStore())) ? rtb_Product_h : (StallTrqThres_DataStore());

  /* Logic: '<S99>/Logical Operator' incorporates:
   *  Constant: '<S104>/Constant'
   *  RelationalOperator: '<S104>/Compare'
   *  UnitDelay: '<S99>/Unit Delay'
   */
  BuckyWagon_01_B.s99_LogicalOperator = (((BuckyWagon_01_B.s339_Merge <= 0.01) ||
    BuckyWagon_01_DWork.s99_UnitDelay_DSTATE));

  /* Logic: '<S99>/Logical Operator1' */
  rtb_LogicalOperator1_fv = !BuckyWagon_01_B.s99_LogicalOperator;

  /* S-Function (motohawk_sfun_fault_def): '<S99>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Accel_NeverZeroed */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(0, rtb_LogicalOperator1_fv);
    UpdateFault(0);
  }

  /* Outputs for Atomic SubSystem: '<S12>/EMP Fan Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S216>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_11142p0005;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_11142p0005,
      &messageObj);
    if ((BuckyWagon_01_B.s216_AgeCount + 1) > BuckyWagon_01_B.s216_AgeCount)
      BuckyWagon_01_B.s216_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint16_T tmp3 = 0;
      uint16_T tmp4 = 0;
      uint8_T tmp5 = 0;
      BuckyWagon_01_B.s216_ReadCANMessage_o2 = ((messageObj.u4MessageID &
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
      BuckyWagon_01_B.s216_EMP_Pump_Status = (real_T) tmp0;
      BuckyWagon_01_B.s216_EMP_Pump_Mode = (real_T) tmp1;
      BuckyWagon_01_B.s216_EMP_Pump_Speed = ((real_T) tmp2) / ((real_T) 2);
      BuckyWagon_01_B.s216_EMP_Board_Temp = (((real_T) tmp3) / ((real_T) 32)) +
        ((real_T) -273);
      BuckyWagon_01_B.s216_EMP_Pump_Power = (real_T) tmp4;
      BuckyWagon_01_B.s216_EMP_Speed_Percent = ((real_T) tmp5) / ((real_T) 2);
      BuckyWagon_01_B.s216_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S216>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration2'
   */
  rtb_AgeCount = ((real_T)BuckyWagon_01_B.s216_AgeCount >
                  (EMPFan_CAN_MaxAge_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S216>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: NoCAN_CoolingFan */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(28, rtb_AgeCount);
    UpdateFault(28);
  }

  /* If: '<S287>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S287>/override_enable'
   */
  if ((EMP_Cooling_Fan_Speed_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S287>/NewValue' incorporates:
     *  ActionPort: '<S293>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S293>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(88);
    }

    /* End of Outputs for SubSystem: '<S287>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S287>/OldValue' incorporates:
     *  ActionPort: '<S294>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S294>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(89);
    }

    /* End of Outputs for SubSystem: '<S287>/OldValue' */
  }

  /* End of If: '<S287>/If' */

  /* If: '<S288>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S288>/override_enable'
   */
  if ((EMP_Cooling_Fan_Speed_Percent_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S288>/NewValue' incorporates:
     *  ActionPort: '<S295>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S295>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(90);
    }

    /* End of Outputs for SubSystem: '<S288>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S288>/OldValue' incorporates:
     *  ActionPort: '<S296>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S296>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(91);
    }

    /* End of Outputs for SubSystem: '<S288>/OldValue' */
  }

  /* End of If: '<S288>/If' */

  /* If: '<S289>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S289>/override_enable'
   */
  if ((EMP_Cooling_Fan_Mode_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S289>/NewValue' incorporates:
     *  ActionPort: '<S297>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S297>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(92);
    }

    /* End of Outputs for SubSystem: '<S289>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S289>/OldValue' incorporates:
     *  ActionPort: '<S298>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S298>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(93);
    }

    /* End of Outputs for SubSystem: '<S289>/OldValue' */
  }

  /* End of If: '<S289>/If' */

  /* If: '<S290>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S290>/override_enable'
   */
  if ((EMP_Cooling_Fan_Status_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S290>/NewValue' incorporates:
     *  ActionPort: '<S299>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S299>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(94);
    }

    /* End of Outputs for SubSystem: '<S290>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S290>/OldValue' incorporates:
     *  ActionPort: '<S300>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S300>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(95);
    }

    /* End of Outputs for SubSystem: '<S290>/OldValue' */
  }

  /* End of If: '<S290>/If' */

  /* If: '<S291>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S291>/override_enable'
   */
  if ((EMP_Cooling_Fan_Board_Temp_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S291>/NewValue' incorporates:
     *  ActionPort: '<S301>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S301>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(96);
    }

    /* End of Outputs for SubSystem: '<S291>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S291>/OldValue' incorporates:
     *  ActionPort: '<S302>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S302>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(97);
    }

    /* End of Outputs for SubSystem: '<S291>/OldValue' */
  }

  /* End of If: '<S291>/If' */

  /* If: '<S292>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S292>/override_enable'
   */
  if ((EMP_Cooling_Fan_Power_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S292>/NewValue' incorporates:
     *  ActionPort: '<S303>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S303>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(98);
    }

    /* End of Outputs for SubSystem: '<S292>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S292>/OldValue' incorporates:
     *  ActionPort: '<S304>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S304>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(99);
    }

    /* End of Outputs for SubSystem: '<S292>/OldValue' */
  }

  /* End of If: '<S292>/If' */
  /* End of Outputs for SubSystem: '<S12>/EMP Fan Inputs' */

  /* Outputs for Atomic SubSystem: '<S12>/EMP Coolant Pump Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S215>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_11092p0006;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_11092p0006,
      &messageObj);
    if ((BuckyWagon_01_B.s215_AgeCount + 1) > BuckyWagon_01_B.s215_AgeCount)
      BuckyWagon_01_B.s215_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint16_T tmp3 = 0;
      uint16_T tmp4 = 0;
      uint8_T tmp5 = 0;
      BuckyWagon_01_B.s215_ReadCANMessage_o2 = ((messageObj.u4MessageID &
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
      BuckyWagon_01_B.s215_EMP_Pump_Status = (real_T) tmp0;
      BuckyWagon_01_B.s215_EMP_Pump_Mode = (real_T) tmp1;
      BuckyWagon_01_B.s215_EMP_Pump_Speed = ((real_T) tmp2) / ((real_T) 2);
      BuckyWagon_01_B.s215_EMP_Board_Temp = (((real_T) tmp3) / ((real_T) 32)) +
        ((real_T) -273);
      BuckyWagon_01_B.s215_EMP_Pump_Power = (real_T) tmp4;
      BuckyWagon_01_B.s215_EMP_Speed_Percent = ((real_T) tmp5) / ((real_T) 2);
      BuckyWagon_01_B.s215_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S215>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S215>/motohawk_calibration2'
   */
  rtb_AgeCount_d = ((real_T)BuckyWagon_01_B.s215_AgeCount >
                    (EMP_CAN_MaxAge_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S215>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: NoCAN_CoolantPump */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(27, rtb_AgeCount_d);
    UpdateFault(27);
  }

  /* If: '<S269>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S269>/override_enable'
   */
  if ((EMP_Pump_Speed_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S269>/NewValue' incorporates:
     *  ActionPort: '<S275>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S275>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(76);
    }

    /* End of Outputs for SubSystem: '<S269>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S269>/OldValue' incorporates:
     *  ActionPort: '<S276>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S276>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(77);
    }

    /* End of Outputs for SubSystem: '<S269>/OldValue' */
  }

  /* End of If: '<S269>/If' */

  /* If: '<S270>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S270>/override_enable'
   */
  if ((EMP_Speed_Percent_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S270>/NewValue' incorporates:
     *  ActionPort: '<S277>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S277>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(78);
    }

    /* End of Outputs for SubSystem: '<S270>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S270>/OldValue' incorporates:
     *  ActionPort: '<S278>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S278>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(79);
    }

    /* End of Outputs for SubSystem: '<S270>/OldValue' */
  }

  /* End of If: '<S270>/If' */

  /* If: '<S271>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S271>/override_enable'
   */
  if ((EMP_Pump_Mode_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S271>/NewValue' incorporates:
     *  ActionPort: '<S279>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S279>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(80);
    }

    /* End of Outputs for SubSystem: '<S271>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S271>/OldValue' incorporates:
     *  ActionPort: '<S280>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S280>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(81);
    }

    /* End of Outputs for SubSystem: '<S271>/OldValue' */
  }

  /* End of If: '<S271>/If' */

  /* If: '<S272>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S272>/override_enable'
   */
  if ((EMP_Pump_Status_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S272>/NewValue' incorporates:
     *  ActionPort: '<S281>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S281>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(82);
    }

    /* End of Outputs for SubSystem: '<S272>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S272>/OldValue' incorporates:
     *  ActionPort: '<S282>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S282>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(83);
    }

    /* End of Outputs for SubSystem: '<S272>/OldValue' */
  }

  /* End of If: '<S272>/If' */

  /* If: '<S273>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S273>/override_enable'
   */
  if ((EMP_Board_Temp_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S273>/NewValue' incorporates:
     *  ActionPort: '<S283>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S283>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(84);
    }

    /* End of Outputs for SubSystem: '<S273>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S273>/OldValue' incorporates:
     *  ActionPort: '<S284>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S284>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(85);
    }

    /* End of Outputs for SubSystem: '<S273>/OldValue' */
  }

  /* End of If: '<S273>/If' */

  /* If: '<S274>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S274>/override_enable'
   */
  if ((EMP_Pump_Power_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S274>/NewValue' incorporates:
     *  ActionPort: '<S285>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S285>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(86);
    }

    /* End of Outputs for SubSystem: '<S274>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S274>/OldValue' incorporates:
     *  ActionPort: '<S286>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S286>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(87);
    }

    /* End of Outputs for SubSystem: '<S274>/OldValue' */
  }

  /* End of If: '<S274>/If' */
  /* End of Outputs for SubSystem: '<S12>/EMP Coolant Pump Inputs' */

  /* Outputs for Atomic SubSystem: '<S12>/EHPAS Power Steering Pump Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S214>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_11036p0005;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_11036p0005,
      &messageObj);
    if ((BuckyWagon_01_B.s214_AgeCount + 1) > BuckyWagon_01_B.s214_AgeCount)
      BuckyWagon_01_B.s214_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint8_T tmp4 = 0;
      uint8_T tmp5 = 0;
      uint8_T tmp6 = 0;
      BuckyWagon_01_B.s214_ReadCANMessage_o2 = ((messageObj.u4MessageID &
        (0x0000000F)) >> 0);
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp2))[1] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[6] & 0x0000000F)) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[6] & 0x00000070) >> 4) ;
      BuckyWagon_01_B.s214_EHPAS_Input_Voltage = ((real_T) tmp0) * ((real_T) 2);
      BuckyWagon_01_B.s214_EHPAS_Input_Current_NA = ((real_T) tmp1) / ((real_T)
        10);
      BuckyWagon_01_B.s214_EHPAS_Pump_Speed = ((real_T) tmp2) / ((real_T) 8);
      BuckyWagon_01_B.s214_EHPAS_TempMax = ((real_T) tmp3) + ((real_T) -40);
      BuckyWagon_01_B.s214_EHPAS_TempCur = ((real_T) tmp4) + ((real_T) -40);
      BuckyWagon_01_B.s214_EHPAS_Op_State = (real_T) tmp5;
      BuckyWagon_01_B.s214_EHPAS_Fault = (real_T) tmp6;
      BuckyWagon_01_B.s214_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S247>/Compare' incorporates:
   *  Constant: '<S247>/Constant'
   */
  rtb_Compare_f = ((BuckyWagon_01_B.s214_AgeCount > 20U));

  /* S-Function (motohawk_sfun_fault_def): '<S214>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: NoCAN_PowerSteering */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(29, rtb_Compare_f);
    UpdateFault(29);
  }

  /* If: '<S248>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S248>/override_enable'
   */
  if ((EHPAS_Pump_Speed_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S248>/NewValue' incorporates:
     *  ActionPort: '<S255>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S255>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(62);
    }

    /* End of Outputs for SubSystem: '<S248>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S248>/OldValue' incorporates:
     *  ActionPort: '<S256>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S256>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(63);
    }

    /* End of Outputs for SubSystem: '<S248>/OldValue' */
  }

  /* End of If: '<S248>/If' */

  /* If: '<S249>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S249>/override_enable'
   */
  if ((EHPAS_Op_State_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S249>/NewValue' incorporates:
     *  ActionPort: '<S257>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S257>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(64);
    }

    /* End of Outputs for SubSystem: '<S249>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S249>/OldValue' incorporates:
     *  ActionPort: '<S258>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S258>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(65);
    }

    /* End of Outputs for SubSystem: '<S249>/OldValue' */
  }

  /* End of If: '<S249>/If' */

  /* If: '<S250>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S250>/override_enable'
   */
  if ((EHPAS_Input_Current_NA_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S250>/NewValue' incorporates:
     *  ActionPort: '<S259>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S259>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(66);
    }

    /* End of Outputs for SubSystem: '<S250>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S250>/OldValue' incorporates:
     *  ActionPort: '<S260>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S260>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(67);
    }

    /* End of Outputs for SubSystem: '<S250>/OldValue' */
  }

  /* End of If: '<S250>/If' */

  /* If: '<S251>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S251>/override_enable'
   */
  if ((EHPAS_Input_Voltage_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S251>/NewValue' incorporates:
     *  ActionPort: '<S261>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S261>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(68);
    }

    /* End of Outputs for SubSystem: '<S251>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S251>/OldValue' incorporates:
     *  ActionPort: '<S262>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S262>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(69);
    }

    /* End of Outputs for SubSystem: '<S251>/OldValue' */
  }

  /* End of If: '<S251>/If' */

  /* If: '<S252>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S252>/override_enable'
   */
  if ((EHPAS_Fault_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S252>/NewValue' incorporates:
     *  ActionPort: '<S263>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S263>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(70);
    }

    /* End of Outputs for SubSystem: '<S252>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S252>/OldValue' incorporates:
     *  ActionPort: '<S264>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S264>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(71);
    }

    /* End of Outputs for SubSystem: '<S252>/OldValue' */
  }

  /* End of If: '<S252>/If' */

  /* If: '<S253>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S253>/override_enable'
   */
  if ((EHPAS_TempMax_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S253>/NewValue' incorporates:
     *  ActionPort: '<S265>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S265>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(72);
    }

    /* End of Outputs for SubSystem: '<S253>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S253>/OldValue' incorporates:
     *  ActionPort: '<S266>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S266>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(73);
    }

    /* End of Outputs for SubSystem: '<S253>/OldValue' */
  }

  /* End of If: '<S253>/If' */

  /* If: '<S254>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S254>/override_enable'
   */
  if ((EHPAS_TempCur_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S254>/NewValue' incorporates:
     *  ActionPort: '<S267>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S267>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(74);
    }

    /* End of Outputs for SubSystem: '<S254>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S254>/OldValue' incorporates:
     *  ActionPort: '<S268>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S268>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(75);
    }

    /* End of Outputs for SubSystem: '<S254>/OldValue' */
  }

  /* End of If: '<S254>/If' */
  /* End of Outputs for SubSystem: '<S12>/EHPAS Power Steering Pump Inputs' */
  /* S-Function Block: <S359>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s359_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_h = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S359>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S359>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S359>/motohawk_delta_time'
   */
  BuckyWagon_01_B.s359_Sum = rtb_motohawk_delta_time_h +
    TimeSinceKeyOnTimer_DataStore();

  /* If: '<S307>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S307>/override_enable'
   */
  if ((FaultSeverityIndicator_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S307>/NewValue' incorporates:
     *  ActionPort: '<S317>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S317>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(100);
    }

    /* End of Outputs for SubSystem: '<S307>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S307>/OldValue' incorporates:
     *  ActionPort: '<S318>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S318>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(101);
    }

    /* End of Outputs for SubSystem: '<S307>/OldValue' */
  }

  /* End of If: '<S307>/If' */

  /* If: '<S308>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S308>/override_enable'
   */
  if ((ChargerState_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S308>/NewValue' incorporates:
     *  ActionPort: '<S319>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S319>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(102);
    }

    /* End of Outputs for SubSystem: '<S308>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S308>/OldValue' incorporates:
     *  ActionPort: '<S320>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S320>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(103);
    }

    /* End of Outputs for SubSystem: '<S308>/OldValue' */
  }

  /* End of If: '<S308>/If' */

  /* If: '<S309>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S309>/override_enable'
   */
  if ((IgnitionStatus_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S309>/NewValue' incorporates:
     *  ActionPort: '<S321>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S321>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(104);
    }

    /* End of Outputs for SubSystem: '<S309>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S309>/OldValue' incorporates:
     *  ActionPort: '<S322>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S322>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(105);
    }

    /* End of Outputs for SubSystem: '<S309>/OldValue' */
  }

  /* End of If: '<S309>/If' */

  /* If: '<S311>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S311>/override_enable'
   */
  if ((OutputCurrent_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S311>/NewValue' incorporates:
     *  ActionPort: '<S325>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S325>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(108);
    }

    /* End of Outputs for SubSystem: '<S311>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S311>/OldValue' incorporates:
     *  ActionPort: '<S326>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S326>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(109);
    }

    /* End of Outputs for SubSystem: '<S311>/OldValue' */
  }

  /* End of If: '<S311>/If' */

  /* If: '<S312>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S312>/override_enable'
   */
  if ((OutputVoltage_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S312>/NewValue' incorporates:
     *  ActionPort: '<S327>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S327>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(110);
    }

    /* End of Outputs for SubSystem: '<S312>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S312>/OldValue' incorporates:
     *  ActionPort: '<S328>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S328>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(111);
    }

    /* End of Outputs for SubSystem: '<S312>/OldValue' */
  }

  /* End of If: '<S312>/If' */

  /* If: '<S313>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S313>/override_enable'
   */
  if ((InputCurrentLimitMax_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S313>/NewValue' incorporates:
     *  ActionPort: '<S329>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S329>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(112);
    }

    /* End of Outputs for SubSystem: '<S313>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S313>/OldValue' incorporates:
     *  ActionPort: '<S330>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S330>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(113);
    }

    /* End of Outputs for SubSystem: '<S313>/OldValue' */
  }

  /* End of If: '<S313>/If' */

  /* If: '<S314>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S314>/override_enable'
   */
  if ((InputCurrent_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S314>/NewValue' incorporates:
     *  ActionPort: '<S331>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S331>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(114);
    }

    /* End of Outputs for SubSystem: '<S314>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S314>/OldValue' incorporates:
     *  ActionPort: '<S332>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S332>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(115);
    }

    /* End of Outputs for SubSystem: '<S314>/OldValue' */
  }

  /* End of If: '<S314>/If' */

  /* S-Function (motohawk_sfun_trigger): '<S2>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_878p0011 */
  if (BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 == 0) {
    BuckyWagon_01_DWork.s2_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S2>/motohawk_trigger' */
  /* Enable for Trigger_FGND_RTI_PERIODIC_877p0013 */
  if (BuckyWagon_01_DWork.s2_motohawk_trigger_DWORK1 == 0) {
    BuckyWagon_01_DWork.s2_motohawk_trigger_DWORK1 = 1;
  }

  /* Gain: '<S118>/Gain1' incorporates:
   *  Product: '<S118>/Product'
   */
  BuckyWagon_01_B.s118_Gain1 = BuckyWagon_01_B.s212_bcm_vbat *
    BuckyWagon_01_B.s212_bcm_ibat * 0.001;

  /* Gain: '<S118>/Gain4' incorporates:
   *  Sum: '<S118>/Add'
   */
  BuckyWagon_01_B.s118_Gain4 = (BuckyWagon_01_B.s212_bcm_ibat + 0.0) * -1.0;

  /* Gain: '<S118>/Gain5' incorporates:
   *  Product: '<S118>/Product3'
   */
  BuckyWagon_01_B.s118_Gain5 = BuckyWagon_01_B.s118_Gain4 *
    BuckyWagon_01_B.s212_bcm_vbat * 0.001;

  /* Gain: '<S118>/Gain6' incorporates:
   *  Product: '<S118>/Product6'
   */
  BuckyWagon_01_B.s118_Gain6 = 0.0 * BuckyWagon_01_B.s212_bcm_vbat * 0.001;

  /* RelationalOperator: '<S118>/Relational Operator' incorporates:
   *  Constant: '<S118>/Constant'
   */
  rtb_RelationalOperator_fj = (BuckyWagon_01_B.s118_Gain4 >= 0.0);

  /* Product: '<S118>/Product5' */
  rtb_Product_h = BuckyWagon_01_B.s118_Gain4 * (real_T)rtb_RelationalOperator_fj;

  /* Product: '<S118>/Product7' */
  rtb_Merge_k = rtb_Product_h * BuckyWagon_01_B.s212_bcm_vbat;

  /* S-Function Block: <S118>/motohawk_delta_time2 */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s118_motohawk_delta_time2_DWORK1, NULL);
    rtb_motohawk_delta_time2 = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S118>/Sum1' incorporates:
   *  Product: '<S118>/Product8'
   *  S-Function (motohawk_sfun_delta_time): '<S118>/motohawk_delta_time2'
   *  UnitDelay: '<S118>/Unit Delay1'
   */
  rtb_to65535_d = rtb_Merge_k * rtb_motohawk_delta_time2 +
    BuckyWagon_01_DWork.s118_UnitDelay1_DSTATE;

  /* Gain: '<S118>/Gain7' */
  rtb_Merge_k = 0.00027777777777777778 * rtb_to65535_d;

  /* Gain: '<S118>/Gain8' */
  BuckyWagon_01_B.s118_Gain8 = 0.001 * rtb_Merge_k;

  /* UnitDelay: '<S109>/Unit Delay' */
  rtb_UnitDelay_b = BuckyWagon_01_DWork.s109_UnitDelay_DSTATE;

  /* Product: '<S118>/Divide3' */
  BuckyWagon_01_B.s118_Divide3 = rtb_Merge_k / rtb_UnitDelay_b;

  /* Product: '<S118>/Product1' incorporates:
   *  Sum: '<S118>/Add1'
   */
  rtb_Product_h = (rtb_Product_h + 0.0) * BuckyWagon_01_B.s212_bcm_vbat;

  /* Gain: '<S118>/Gain' */
  BuckyWagon_01_B.s118_Gain = 0.001 * rtb_Product_h;

  /* S-Function Block: <S118>/motohawk_delta_time1 */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s118_motohawk_delta_time1_DWORK1, NULL);
    rtb_motohawk_delta_time1 = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S118>/Sum' incorporates:
   *  Product: '<S118>/Product4'
   *  S-Function (motohawk_sfun_delta_time): '<S118>/motohawk_delta_time1'
   *  UnitDelay: '<S118>/Unit Delay'
   */
  rtb_to65535_c = rtb_Product_h * rtb_motohawk_delta_time1 +
    BuckyWagon_01_DWork.s118_UnitDelay_DSTATE;

  /* Gain: '<S118>/Gain2' */
  rtb_Gain2 = 0.00027777777777777778 * rtb_to65535_c;

  /* Gain: '<S118>/Gain3' */
  BuckyWagon_01_B.s118_Gain3 = 0.001 * rtb_Gain2;

  /* Product: '<S118>/Divide' */
  BuckyWagon_01_B.s118_Divide = rtb_Gain2 / rtb_UnitDelay_b;

  /* Stateflow: '<S118>/Downsapmle1' */
  BuckyWagon_01_Downsapmle(rtb_Gain2, (Downsample_DataStore()),
    &BuckyWagon_01_B.s118_sf_Downsapmle1,
    &BuckyWagon_01_DWork.s118_sf_Downsapmle1);

  /* Sum: '<S118>/Subtract1' */
  rtb_Merge_k = BuckyWagon_01_B.s118_sf_Downsapmle1.s119_Out_2 -
    BuckyWagon_01_B.s118_sf_Downsapmle1.s119_Out_1;

  /* Stateflow: '<S118>/Downsapmle' */
  BuckyWagon_01_Downsapmle(rtb_UnitDelay_b, (Downsample_DataStore()),
    &BuckyWagon_01_B.s118_sf_Downsapmle, &BuckyWagon_01_DWork.s118_sf_Downsapmle);

  /* Product: '<S118>/Divide1' incorporates:
   *  Sum: '<S118>/Subtract'
   */
  rtb_Product_h = rtb_Merge_k / (BuckyWagon_01_B.s118_sf_Downsapmle.s119_Out_2 -
    BuckyWagon_01_B.s118_sf_Downsapmle.s119_Out_1);

  /* Saturate: '<S118>/Saturation' */
  BuckyWagon_01_B.s118_Saturation = rtb_Product_h >= 50000.0 ? 50000.0 :
    rtb_Product_h <= -1.0E+6 ? -1.0E+6 : rtb_Product_h;

  /* Abs: '<S117>/Abs' */
  rtb_Product_h = fabs(BuckyWagon_01_B.s224_Abs);

  /* Gain: '<S117>/Gain' */
  rtb_Merge_k = 0.00027777777777777778 * rtb_Product_h;

  /* S-Function Block: <S117>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s117_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_o = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S117>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S117>/motohawk_delta_time'
   */
  rtb_Product_h = rtb_Merge_k * rtb_motohawk_delta_time_o;

  /* Sum: '<S117>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S117>/motohawk_data_read'
   */
  BuckyWagon_01_B.s117_Sum1 = rtb_Product_h + Odometer_DataStore();

  /* S-Function (motohawk_sfun_data_write): '<S117>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Odometer */
  {
    Odometer_DataStore() = BuckyWagon_01_B.s117_Sum1;
  }

  /* Sum: '<S117>/Sum' incorporates:
   *  UnitDelay: '<S117>/Unit Delay'
   */
  BuckyWagon_01_B.s117_Sum = rtb_Product_h +
    BuckyWagon_01_DWork.s117_UnitDelay_DSTATE;

  /* RelationalOperator: '<S110>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration8'
   */
  rtb_RelationalOperator_b1 = ((rtb_MinMax_e >= (Overheat_Threshold_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S110>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: CoolingOverheat */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(8, rtb_RelationalOperator_b1);
    UpdateFault(8);
  }

  /* Logic: '<S12>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S12>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration5'
   */
  rtb_LogicalOperator1_jy = (((BuckyWagon_01_B.s212_bcm_cell_tmax >=
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
  rtb_LogicalOperator3_l = ((BuckyWagon_01_B.s230_Merge &&
    (BuckyWagon_01_B.s212_bcm_vbat >= (ChargeInterruptor_Voltage_DataStore()))));

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
    SetFaultSuspected(9, BuckyWagon_01_B.s225_Merge);
    UpdateFault(9);
  }

  /* Logic: '<S12>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S12>/Relational Operator5'
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration1'
   */
  rtb_LogicalOperator2_d = (((BuckyWagon_01_B.s212_bcm_cell_tmin <=
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
  rtb_RelationalOperator_k = (BuckyWagon_01_B.s212_bcm_gfd <=
    (A123_Isolation_Monitor_Ground_Fault_Threshold_DataStore()));

  /* Outputs for Enabled SubSystem: '<S12>/Time Since Enabled (With Input)1' incorporates:
   *  EnablePort: '<S221>/Enable'
   */
  if (BuckyWagon_01_B.s359_Sum > 0.0) {
    if (!BuckyWagon_01_DWork.s12_TimeSinceEnabledWithInput1_MODE) {
      /* S-Function Block: <S221>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BuckyWagon_01_DWork.s221_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S221>/Unit Delay' */
      BuckyWagon_01_DWork.s221_UnitDelay_DSTATE = 0.0;
      BuckyWagon_01_DWork.s12_TimeSinceEnabledWithInput1_MODE = TRUE;
    }

    /* S-Function Block: <S221>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BuckyWagon_01_DWork.s221_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_b = ((real_T) delta) * 0.000001;
    }

    /* UnitDelay: '<S221>/Unit Delay' */
    BuckyWagon_01_B.s221_UnitDelay = BuckyWagon_01_DWork.s221_UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S221>/Unit Delay' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S221>/motohawk_delta_time'
     *  Sum: '<S221>/Sum'
     */
    BuckyWagon_01_DWork.s221_UnitDelay_DSTATE = rtb_motohawk_delta_time_b +
      BuckyWagon_01_B.s221_UnitDelay;
  } else {
    if (BuckyWagon_01_DWork.s12_TimeSinceEnabledWithInput1_MODE) {
      /* Disable for Outport: '<S221>/Time Since Enabled [sec]' */
      BuckyWagon_01_B.s221_UnitDelay = 0.0;
      BuckyWagon_01_DWork.s12_TimeSinceEnabledWithInput1_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S12>/Time Since Enabled (With Input)1' */
  /* Logic: '<S12>/Logical Operator' incorporates:
   *  RelationalOperator: '<S12>/Relational Operator8'
   *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration8'
   */
  rtb_LogicalOperator_d = ((rtb_RelationalOperator_k && rtb_LogicalOperator1_jo &&
                            (BuckyWagon_01_B.s221_UnitDelay >=
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
  rtb_RelationalOperator6 = ((BuckyWagon_01_B.s223_Inverter_Temperature >
    (InverterTemp_Overheat_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S12>/motohawk_fault_def9' */

  /* Set Fault Suspected Status: Inverter_OverTemp */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(16, rtb_RelationalOperator6);
    UpdateFault(16);
  }

  /* Logic: '<S217>/Logical Operator' incorporates:
   *  Constant: '<S305>/Constant'
   *  RelationalOperator: '<S305>/Compare'
   */
  rtb_LogicalOperator_b = ((BuckyWagon_01_B.s316_pluggedIn &&
    (BuckyWagon_01_B.s217_AgeCount >= 30U)));

  /* S-Function (motohawk_sfun_fault_def): '<S217>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Eaton_CAN_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(10, rtb_LogicalOperator_b);
    UpdateFault(10);
  }

  /* Logic: '<S218>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S218>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S218>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S218>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_pz = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_i > (Accel_InputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S218>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Accel_RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(1, rtb_LogicalOperator2_pz);
    UpdateFault(1);
  }

  /* Logic: '<S218>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S218>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S218>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S218>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_d = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_i < (Accel_InputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S218>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Accel_RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(2, rtb_LogicalOperator3_d);
    UpdateFault(2);
  }

  /* Logic: '<S219>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S219>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S219>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S219>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_k = ((MPRD_DataStore() && (rtb_to65535_dx >
    (LVVolt_InputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S219>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: LVVolt_RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(19, rtb_LogicalOperator2_k);
    UpdateFault(19);
  }

  /* Logic: '<S219>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S219>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S219>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S219>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_f = ((MPRD_DataStore() && (rtb_to65535_dx <
    (LVVolt_InputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S219>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: LVVolt_RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(20, rtb_LogicalOperator3_f);
    UpdateFault(20);
  }

  /* Logic: '<S220>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S220>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S220>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S220>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_dm = ((MPRD_DataStore() && (rtb_DataTypeConversion_b >
    (Brake_InputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S220>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Brake_RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(5, rtb_LogicalOperator2_dm);
    UpdateFault(5);
  }

  /* Logic: '<S220>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S220>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S220>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S220>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_b <
    (Brake_InputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S220>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Brake_RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(6, rtb_LogicalOperator3_p);
    UpdateFault(6);
  }

  /* Saturate: '<S359>/Saturation' */
  rtb_Saturation = BuckyWagon_01_B.s359_Sum >= 16000.0 ? 16000.0 :
    BuckyWagon_01_B.s359_Sum <= 0.0 ? 0.0 : BuckyWagon_01_B.s359_Sum;

  /* S-Function (motohawk_sfun_data_write): '<S359>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceKeyOnTimer */
  {
    TimeSinceKeyOnTimer_DataStore() = rtb_Saturation;
  }

  /* Update for UnitDelay: '<S218>/Unit Delay1' */
  BuckyWagon_01_DWork.s218_UnitDelay1_DSTATE = rtb_Merge_c;

  /* Update for UnitDelay: '<S340>/Unit Delay' */
  BuckyWagon_01_DWork.s340_UnitDelay_DSTATE = rtb_Sum1;

  /* Update for UnitDelay: '<S220>/Unit Delay1' */
  BuckyWagon_01_DWork.s220_UnitDelay1_DSTATE = rtb_Merge_e;

  /* Update for UnitDelay: '<S356>/Unit Delay' */
  BuckyWagon_01_DWork.s356_UnitDelay_DSTATE = rtb_Sum1_o;

  /* Update for UnitDelay: '<S145>/Unit Delay' */
  BuckyWagon_01_DWork.s145_UnitDelay_DSTATE = BuckyWagon_01_B.s145_Sum1;

  /* Update for UnitDelay: '<S88>/Output' */
  BuckyWagon_01_DWork.s88_Output_DSTATE = rtb_Compare;

  /* Update for UnitDelay: '<S219>/Unit Delay1' */
  BuckyWagon_01_DWork.s219_UnitDelay1_DSTATE = rtb_Merge_ep;

  /* Update for UnitDelay: '<S348>/Unit Delay' */
  BuckyWagon_01_DWork.s348_UnitDelay_DSTATE = rtb_to65535_b;

  /* Update for UnitDelay: '<S106>/Unit Delay' incorporates:
   *  MinMax: '<S108>/MinMax1'
   */
  BuckyWagon_01_DWork.s106_UnitDelay_DSTATE = rtb_Switch_h;

  /* Update for UnitDelay: '<S107>/Unit Delay' */
  BuckyWagon_01_DWork.s107_UnitDelay_DSTATE = rtb_Switch1_m;

  /* Update for UnitDelay: '<S99>/Unit Delay' */
  BuckyWagon_01_DWork.s99_UnitDelay_DSTATE = BuckyWagon_01_B.s99_LogicalOperator;

  /* Update for UnitDelay: '<S118>/Unit Delay1' */
  BuckyWagon_01_DWork.s118_UnitDelay1_DSTATE = rtb_to65535_d;

  /* Update for UnitDelay: '<S109>/Unit Delay' */
  BuckyWagon_01_DWork.s109_UnitDelay_DSTATE = BuckyWagon_01_B.s117_Sum;

  /* Update for UnitDelay: '<S118>/Unit Delay' */
  BuckyWagon_01_DWork.s118_UnitDelay_DSTATE = rtb_to65535_c;

  /* Update for UnitDelay: '<S117>/Unit Delay' */
  BuckyWagon_01_DWork.s117_UnitDelay_DSTATE = BuckyWagon_01_B.s117_Sum;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
