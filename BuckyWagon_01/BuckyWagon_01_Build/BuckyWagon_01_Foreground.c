/*
 * File: BuckyWagon_01_Foreground.c
 *
 * Code generated for Simulink model 'BuckyWagon_01'.
 *
 * Model version                  : 1.1586
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Mon Apr 29 19:20:54 2019
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

/* Named constants for Stateflow: '<S45>/Chart' */
#define BuckyWagon_01_IN_FlashOne      (1U)
#define BuckyWagon_01_IN_FlashTwo      (2U)
#define BuckyWagon_01_IN_Off           (3U)
#define BuckyWagon_01_IN_OffOne        (4U)
#define BuckyWagon_01_IN_OffTwo        (5U)

/* Named constants for Stateflow: '<S121>/Chart' */
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

/* Named constants for Stateflow: '<S124>/Chart' */
#define BuckyWagon_01_IN_Forward       (1U)
#define BuckyWagon_01_IN_Main          (1U)
#define BuckyWagon_01_IN_Reverse       (2U)
#define BuckyWagon_01_IN_TransistionOff (1U)
#define BuckyWagon_01_IN_TransistionOn (2U)
#define BuckyWagon_01_IN_waitRelease   (3U)
#define BuckyWagon_01_event_buttonPress (0)

/* Named constants for Stateflow: '<S304>/Chart' */
#define BuckyWagon_01_IN_CountDown     (1U)
#define BuckyWagon_01_IN_Off_l         (2U)
#define BuckyWagon_01_IN_On            (3U)
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
 *    '<S216>/If Action Subsystem'
 *    '<S216>/If Action Subsystem1'
 *    '<S216>/If Action Subsystem2'
 *    '<S217>/If Action Subsystem'
 *    '<S217>/If Action Subsystem1'
 *    '<S217>/If Action Subsystem2'
 *    '<S218>/If Action Subsystem'
 *    '<S218>/If Action Subsystem1'
 *    '<S218>/If Action Subsystem2'
 */
void BuckyWagon_01_IfActionSubsystem(real_T rtu_0, real_T *rty_Out)
{
  /* Inport: '<S334>/In' */
  (*rty_Out) = rtu_0;
}

/* Function for Stateflow: '<S124>/Chart' */
static void BuckyWagon_01_c1_BuckyWagon_01(void)
{
  int32_T b_previousEvent;

  /* During: Foreground/Control Strategy/Reverse/Chart */
  if (BuckyWagon_01_DWork.s156_is_active_c1_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Control Strategy/Reverse/Chart */
    BuckyWagon_01_DWork.s156_is_active_c1_BuckyWagon_01 = 1U;
    BuckyWagon_01_DWork.s156_is_c1_BuckyWagon_01 = BuckyWagon_01_IN_Main;
    BuckyWagon_01_DWork.s156_is_active_ButtonDebounce = 1U;

    /* Transition: '<S156>:16' */
    BuckyWagon_01_DWork.s156_is_ButtonDebounce = BuckyWagon_01_IN_TransistionOn;
    BuckyWagon_01_DWork.s156_is_active_ReverseLogic = 1U;

    /* Transition: '<S156>:17' */
    if (BuckyWagon_01_DWork.s156_is_ReverseLogic != BuckyWagon_01_IN_Forward) {
      BuckyWagon_01_DWork.s156_is_ReverseLogic = BuckyWagon_01_IN_Forward;

      /* Entry 'Forward': '<S156>:7' */
      BuckyWagon_01_B.s156_inReverse = 0.0;
    }
  } else {
    if (BuckyWagon_01_DWork.s156_is_c1_BuckyWagon_01 == BuckyWagon_01_IN_Main) {
      /* During 'Main': '<S156>:1' */
      if (BuckyWagon_01_DWork.s156_is_active_ButtonDebounce != 0) {
        /* During 'ButtonDebounce': '<S156>:2' */
        switch (BuckyWagon_01_DWork.s156_is_ButtonDebounce) {
         case BuckyWagon_01_IN_TransistionOff:
          /* During 'TransistionOff': '<S156>:6' */
          if (BuckyWagon_01_DWork.s156_timer >= (offTime_DataStore())) {
            /* Transition: '<S156>:10' */
            BuckyWagon_01_DWork.s156_is_ButtonDebounce =
              BuckyWagon_01_IN_TransistionOn;
          } else if (BuckyWagon_01_B.s242_Merge) {
            /* Transition: '<S156>:9' */
            BuckyWagon_01_DWork.s156_timer = 0.0;
            BuckyWagon_01_DWork.s156_is_ButtonDebounce =
              BuckyWagon_01_IN_TransistionOff;
          } else {
            BuckyWagon_01_DWork.s156_timer = BuckyWagon_01_DWork.s156_timer +
              1.0;
          }
          break;

         case BuckyWagon_01_IN_TransistionOn:
          /* During 'TransistionOn': '<S156>:5' */
          if (!BuckyWagon_01_B.s242_Merge) {
            /* Transition: '<S156>:13' */
            BuckyWagon_01_DWork.s156_timer = 0.0;
            BuckyWagon_01_DWork.s156_is_ButtonDebounce =
              BuckyWagon_01_IN_TransistionOn;
          } else if (BuckyWagon_01_DWork.s156_timer >= (onTime_DataStore())) {
            /* Transition: '<S156>:11' */
            BuckyWagon_01_DWork.s156_is_ButtonDebounce =
              BuckyWagon_01_IN_waitRelease;

            /* Entry 'waitRelease': '<S156>:3' */
            /* Event: '<S156>:29' */
            b_previousEvent = BuckyWagon_01_DWork.s156_sfEvent;
            BuckyWagon_01_DWork.s156_sfEvent = BuckyWagon_01_event_buttonPress;
            BuckyWagon_01_c1_BuckyWagon_01();
            BuckyWagon_01_DWork.s156_sfEvent = b_previousEvent;
          } else {
            BuckyWagon_01_DWork.s156_timer = BuckyWagon_01_DWork.s156_timer +
              1.0;
          }
          break;

         case BuckyWagon_01_IN_waitRelease:
          /* During 'waitRelease': '<S156>:3' */
          if (!BuckyWagon_01_B.s242_Merge) {
            /* Transition: '<S156>:12' */
            BuckyWagon_01_DWork.s156_is_ButtonDebounce =
              BuckyWagon_01_IN_TransistionOff;
          }
          break;

         default:
          BuckyWagon_01_DWork.s156_is_ButtonDebounce = (uint8_T)0U;
          break;
        }
      }

      if (BuckyWagon_01_DWork.s156_is_active_ReverseLogic != 0) {
        /* During 'ReverseLogic': '<S156>:4' */
        switch (BuckyWagon_01_DWork.s156_is_ReverseLogic) {
         case BuckyWagon_01_IN_Forward:
          /* During 'Forward': '<S156>:7' */
          if ((BuckyWagon_01_DWork.s156_sfEvent ==
               BuckyWagon_01_event_buttonPress) && ((BuckyWagon_01_B.s124_Abs <
                (revSpdThres_DataStore())) && (BuckyWagon_01_B.s337_Merge <
                (revAccThres_DataStore())))) {
            /* Transition: '<S156>:15' */
            BuckyWagon_01_DWork.s156_is_ReverseLogic = BuckyWagon_01_IN_Reverse;

            /* Entry 'Reverse': '<S156>:8' */
            BuckyWagon_01_B.s156_inReverse = 1.0;
          }
          break;

         case BuckyWagon_01_IN_Reverse:
          /* During 'Reverse': '<S156>:8' */
          if ((BuckyWagon_01_DWork.s156_sfEvent ==
               BuckyWagon_01_event_buttonPress) && ((BuckyWagon_01_B.s124_Abs <
                (fwdSpdThres_DataStore())) && (BuckyWagon_01_B.s337_Merge <
                (fwdAccThres_DataStore())))) {
            /* Transition: '<S156>:14' */
            BuckyWagon_01_DWork.s156_is_ReverseLogic = BuckyWagon_01_IN_Forward;

            /* Entry 'Forward': '<S156>:7' */
            BuckyWagon_01_B.s156_inReverse = 0.0;
          }
          break;

         default:
          BuckyWagon_01_DWork.s156_is_ReverseLogic = (uint8_T)0U;
          break;
        }
      }
    }
  }
}

/* Initial conditions for function-call system: '<Root>/Foreground' */
void BuckyWagon_01_Foreground_Init(void)
{
  /* InitializeConditions for Stateflow: '<S304>/Chart' */
  BuckyWagon_01_DWork.s314_is_active_c32_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s314_is_c32_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s314_timer = 0;
  BuckyWagon_01_B.s314_pluggedIn = FALSE;

  /* InitializeConditions for Atomic SubSystem: '<S20>/UQM Motor Inouts' */

  /* S-Function Block: <S361>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s361_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of InitializeConditions for SubSystem: '<S20>/UQM Motor Inouts' */

  /* InitializeConditions for Atomic SubSystem: '<S17>/HV Controller' */

  /* S-Function Block: <S151>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s151_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S150>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s150_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* End of InitializeConditions for SubSystem: '<S17>/HV Controller' */

  /* InitializeConditions for Atomic SubSystem: '<S17>/Reverse' */
  /* InitializeConditions for Stateflow: '<S124>/Chart' */
  BuckyWagon_01_DWork.s156_sfEvent = CALL_EVENT;
  BuckyWagon_01_DWork.s156_is_active_ButtonDebounce = 0U;
  BuckyWagon_01_DWork.s156_is_ButtonDebounce = 0U;
  BuckyWagon_01_DWork.s156_is_active_ReverseLogic = 0U;
  BuckyWagon_01_DWork.s156_is_ReverseLogic = 0U;
  BuckyWagon_01_DWork.s156_is_active_c1_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s156_is_c1_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s156_timer = 0.0;
  BuckyWagon_01_B.s156_inReverse = 0.0;

  /* End of InitializeConditions for SubSystem: '<S17>/Reverse' */

  /* InitializeConditions for Atomic SubSystem: '<S17>/Drive' */

  /* S-Function Block: <S131>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s131_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of InitializeConditions for SubSystem: '<S17>/Drive' */

  /* S-Function Block: <S122>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s122_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Atomic SubSystem: '<S15>/A123 Battery Controller' */

  /* S-Function Block: <S36>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s36_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S35>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s35_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* End of InitializeConditions for SubSystem: '<S15>/A123 Battery Controller' */

  /* InitializeConditions for Atomic SubSystem: '<S15>/Analog Out' */
  /* InitializeConditions for Stateflow: '<S45>/Chart' */
  BuckyWagon_01_DWork.s50_is_active_c6_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s50_is_c6_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s50_timer = 0U;
  BuckyWagon_01_B.s50_light = FALSE;

  /* End of InitializeConditions for SubSystem: '<S15>/Analog Out' */

  /* InitializeConditions for Stateflow: '<S121>/Chart' */
  BuckyWagon_01_DWork.s139_is_LowSpeedManeuvering = 0U;
  BuckyWagon_01_DWork.s139_is_NormalDriving = 0U;
  BuckyWagon_01_DWork.s139_is_active_c9_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 = 0U;
  BuckyWagon_01_DWork.s139_counts = 0U;
  BuckyWagon_01_DWork.s139_brakeCounts = 0.0;
  BuckyWagon_01_B.s139_PumpState = 0U;

  /* InitializeConditions for S-Function (motohawk_sfun_fault_def): '<S107>/motohawk_fault_def5' */
  /* Reset Fault Downsample Counter: LVVoltLow */
  {
    BuckyWagon_01_DWork.s107_motohawk_fault_def5_DWORK1 = 0;
  }

  /* S-Function Block: <S115>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s115_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S357>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s357_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S3>/motohawk_trigger' */
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
  /* Level2 S-Function Block: '<S3>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_3774p0004 */
  BuckyWagon_01_DWork.s3_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S3>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_RTI_PERIODIC_3773p0006 */
  BuckyWagon_01_DWork.s3_motohawk_trigger_DWORK1 = 1;
}

/* Disable for function-call system: '<Root>/Foreground' */
void BuckyWagon_01_Foreground_Disable(void)
{
  /* Disable for Atomic SubSystem: '<S15>/Analog Out' */
  /* Disable for Enabled SubSystem: '<S49>/Enabled Subsystem' */
  BuckyWagon_01_DWork.s49_EnabledSubsystem_MODE = FALSE;

  /* End of Disable for SubSystem: '<S49>/Enabled Subsystem' */
  /* End of Disable for SubSystem: '<S15>/Analog Out' */

  /* Disable for Enabled SubSystem: '<S106>/Time Since Enabled (With Input)1' */
  /* Disable for Outport: '<S110>/Time Since Enabled [sec]' */
  BuckyWagon_01_B.s110_UnitDelay = 0.0;
  BuckyWagon_01_DWork.s106_TimeSinceEnabledWithInput1_MODE = FALSE;

  /* End of Disable for SubSystem: '<S106>/Time Since Enabled (With Input)1' */

  /* Level2 S-Function Block: '<S3>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_20XRTI_PERIODIC_3774p0004 */
  BuckyWagon_01_DWork.s3_motohawk_trigger1_DWORK1 = 0;

  /* Level2 S-Function Block: '<S3>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_RTI_PERIODIC_3773p0006 */
  BuckyWagon_01_DWork.s3_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S20>/Time Since Enabled (With Input)1' */
  /* Disable for Outport: '<S219>/Time Since Enabled [sec]' */
  BuckyWagon_01_B.s219_UnitDelay = 0.0;
  BuckyWagon_01_DWork.s20_TimeSinceEnabledWithInput1_MODE = FALSE;

  /* End of Disable for SubSystem: '<S20>/Time Since Enabled (With Input)1' */
}

/* Start for function-call system: '<Root>/Foreground' */
void BuckyWagon_01_Foreground_Start(void)
{
  /* Start for Atomic SubSystem: '<S15>/A123 Battery Controller' */

  /* S-Function (motohawk_sfun_probe): '<S21>/motohawk_probe6' */
  (hsc_bcm_enable_DataStore()) = ((uint8_T)1U);

  /* End of Start for SubSystem: '<S15>/A123 Battery Controller' */

  /* Start for Atomic SubSystem: '<S15>/Analog Out' */

  /* Start for Enabled SubSystem: '<S49>/Enabled Subsystem' */
  /* InitializeConditions for UnitDelay: '<S64>/Unit Delay' */
  BuckyWagon_01_DWork.s64_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S49>/Enabled Subsystem' */

  /* End of Start for SubSystem: '<S15>/Analog Out' */

  /* Start for Enabled SubSystem: '<S106>/Time Since Enabled (With Input)1' */

  /* S-Function Block: <S110>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s110_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S110>/Unit Delay' */
  BuckyWagon_01_DWork.s110_UnitDelay_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S106>/Time Since Enabled (With Input)1' */

  /* Start for function-call system: '<S3>/Gauges' */

  /* Start for S-Function (motohawk_sfun_vdogauge_def): '<S18>/VDO Gauge Interface' */
  {
    GaugeChain_EZLinkOutput_Create();
  }

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_3774p0004 */
  BuckyWagon_01_DWork.s3_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S3>/motohawk_trigger' */
  BuckyWagon_01_MiniViewDisplay_Start();

  /* Clear enable/disable state for embedded trigger Trigger_FGND_RTI_PERIODIC_3773p0006 */
  BuckyWagon_01_DWork.s3_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S20>/Time Since Enabled (With Input)1' */

  /* S-Function Block: <S219>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BuckyWagon_01_DWork.s219_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S219>/Unit Delay' */
  BuckyWagon_01_DWork.s219_UnitDelay_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S20>/Time Since Enabled (With Input)1' */

  /* S-Function (motohawk_sfun_probe): '<S118>/motohawk_probe3' */
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
  real_T rtb_MinMax_a;
  real_T rtb_motohawk_delta_time_c;
  real_T rtb_motohawk_delta_time_j;
  real_T rtb_Saturation_i;
  real_T rtb_Saturation_l;
  real_T rtb_DataTypeConversion_b;
  real_T rtb_UnitDelay_g;
  real_T rtb_Product_p;
  real_T rtb_Product1_n;
  real_T rtb_Sum3;
  real_T rtb_Product_h;
  uint32_T rtb_DataTypeConversion2_h;
  int16_T rtb_DataTypeConversion3;
  uint16_T rtb_motohawk_ain2;
  index_T rtb_motohawk_prelookup_row;
  index_T rtb_motohawk_prelookup_col;
  index_T rtb_motohawk_prelookup;
  index_T rtb_motohawk_prelookup_m;
  index_T rtb_motohawk_prelookup1;
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
  uint8_T rtb_Compare_k;
  int16_T rtb_Switch_d;

  /* Outputs for Atomic SubSystem: '<S20>/A123 Battery Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S210>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_2774p0006;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_2774p0006,
      &messageObj);
    if ((BuckyWagon_01_B.s210_AgeCount + 1) > BuckyWagon_01_B.s210_AgeCount)
      BuckyWagon_01_B.s210_AgeCount++;
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
      BuckyWagon_01_B.s210_bcm_alarm = (real_T) tmp0;
      BuckyWagon_01_B.s210_bcm_cpwr_cmd = (real_T) tmp1;
      BuckyWagon_01_B.s210_bcm_cpwr_mon = (real_T) tmp2;
      BuckyWagon_01_B.s210_bcm_epo = (real_T) tmp3;
      BuckyWagon_01_B.s210_bcm_gfd = ((real_T) tmp4) / ((real_T) 4);
      BuckyWagon_01_B.s210_bcm_hvil_mon = (real_T) tmp5;
      BuckyWagon_01_B.s210_bcm_ibat = (((real_T) tmp6) / ((real_T) 40)) +
        ((real_T) -1000);
      BuckyWagon_01_B.s210_bcm_mainc_stat = (boolean_T) tmp7;
      BuckyWagon_01_B.s210_bcm_ready = (real_T) tmp8;
      BuckyWagon_01_B.s210_bcm_soc = ((real_T) tmp9) / ((real_T) 200);
      BuckyWagon_01_B.s210_bcm_vbat = ((real_T) tmp10) / ((real_T) 4);
      BuckyWagon_01_B.s210_bcm_chg_done = (real_T) tmp11;
      BuckyWagon_01_B.s210_bcm_chgc_stat = (boolean_T) tmp12;
      BuckyWagon_01_B.s210_bcm_cool_req = (real_T) tmp13;
      BuckyWagon_01_B.s210_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S224>/Compare' incorporates:
   *  Constant: '<S224>/Constant'
   */
  rtb_Compare_h = ((BuckyWagon_01_B.s210_AgeCount > 20U));

  /* S-Function (motohawk_sfun_fault_def): '<S210>/motohawk_fault_def10' */

  /* Set Fault Suspected Status: NoCAN_BCM_410 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(24, rtb_Compare_h);
    UpdateFault(24);
  }

  /* If: '<S227>/If' incorporates:
   *  Inport: '<S232>/In1'
   *  Inport: '<S233>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S227>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S227>/override_enable'
   */
  if ((bcm_mainc_stat_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S227>/NewValue' incorporates:
     *  ActionPort: '<S232>/Action Port'
     */
    BuckyWagon_01_B.s227_Merge = (bcm_mainc_stat_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S232>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(55);
    }

    /* End of Outputs for SubSystem: '<S227>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S227>/OldValue' incorporates:
     *  ActionPort: '<S233>/Action Port'
     */
    BuckyWagon_01_B.s227_Merge = BuckyWagon_01_B.s210_bcm_mainc_stat;

    /* S-Function (motohawk_sfun_code_cover): '<S233>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(56);
    }

    /* End of Outputs for SubSystem: '<S227>/OldValue' */
  }

  /* End of If: '<S227>/If' */

  /* If: '<S231>/If' incorporates:
   *  Inport: '<S240>/In1'
   *  Inport: '<S241>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S231>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S231>/override_enable'
   */
  if ((bcm_ready_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S231>/NewValue' incorporates:
     *  ActionPort: '<S240>/Action Port'
     */
    BuckyWagon_01_B.s231_Merge = (bcm_ready_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S240>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(63);
    }

    /* End of Outputs for SubSystem: '<S231>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S231>/OldValue' incorporates:
     *  ActionPort: '<S241>/Action Port'
     */
    BuckyWagon_01_B.s231_Merge = BuckyWagon_01_B.s210_bcm_ready;

    /* S-Function (motohawk_sfun_code_cover): '<S241>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(64);
    }

    /* End of Outputs for SubSystem: '<S231>/OldValue' */
  }

  /* End of If: '<S231>/If' */

  /* Gain: '<S210>/Gain1' */
  BuckyWagon_01_B.s210_bcm_soc_j = 100.0 * BuckyWagon_01_B.s210_bcm_soc;

  /* If: '<S228>/If' incorporates:
   *  Inport: '<S234>/In1'
   *  Inport: '<S235>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S228>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S228>/override_enable'
   */
  if ((bcm_chargec_stat_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S228>/NewValue' incorporates:
     *  ActionPort: '<S234>/Action Port'
     */
    BuckyWagon_01_B.s228_Merge = (bcm_chargec_stat_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S234>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(57);
    }

    /* End of Outputs for SubSystem: '<S228>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S228>/OldValue' incorporates:
     *  ActionPort: '<S235>/Action Port'
     */
    BuckyWagon_01_B.s228_Merge = BuckyWagon_01_B.s210_bcm_chgc_stat;

    /* S-Function (motohawk_sfun_code_cover): '<S235>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(58);
    }

    /* End of Outputs for SubSystem: '<S228>/OldValue' */
  }

  /* End of If: '<S228>/If' */

  /* If: '<S230>/If' incorporates:
   *  Inport: '<S238>/In1'
   *  Inport: '<S239>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S230>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S230>/override_enable'
   */
  if ((SOC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S230>/NewValue' incorporates:
     *  ActionPort: '<S238>/Action Port'
     */
    BuckyWagon_01_B.s230_Merge = (SOC_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S238>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(61);
    }

    /* End of Outputs for SubSystem: '<S230>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S230>/OldValue' incorporates:
     *  ActionPort: '<S239>/Action Port'
     */
    BuckyWagon_01_B.s230_Merge = BuckyWagon_01_B.s210_bcm_soc_j;

    /* S-Function (motohawk_sfun_code_cover): '<S239>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(62);
    }

    /* End of Outputs for SubSystem: '<S230>/OldValue' */
  }

  /* End of If: '<S230>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S210>/Read CAN Message6' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_2776p0005;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_2776p0005,
      &messageObj);
    if ((BuckyWagon_01_B.s210_AgeCount_e + 1) > BuckyWagon_01_B.s210_AgeCount_e)
      BuckyWagon_01_B.s210_AgeCount_e++;
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
      BuckyWagon_01_B.s210_bcm_cell_tmax = (((real_T) tmp0) / ((real_T) 2)) +
        ((real_T) -40);
      BuckyWagon_01_B.s210_bcm_cell_tmin = (((real_T) tmp1) / ((real_T) 2)) +
        ((real_T) -40);
      BuckyWagon_01_B.s210_bcm_cell_vmax = ((real_T) tmp2) / ((real_T) 1000);
      BuckyWagon_01_B.s210_bcm_cell_vmin = ((real_T) tmp3) / ((real_T) 1000);
      BuckyWagon_01_B.s210_bcm_chga_ena = (real_T) tmp4;
      BuckyWagon_01_B.s210_bcm_chga_mon = (real_T) tmp5;
      BuckyWagon_01_B.s210_bcm_lvbat = ((real_T) tmp6) / ((real_T) 10);
      BuckyWagon_01_B.s210_bcm_mod_ena = (real_T) tmp7;
      BuckyWagon_01_B.s210_bcm_veh_mon = (real_T) tmp8;
      BuckyWagon_01_B.s210_AgeCount_e = 0;
    }
  }

  /* RelationalOperator: '<S226>/Compare' incorporates:
   *  Constant: '<S226>/Constant'
   */
  rtb_Compare_gs = ((BuckyWagon_01_B.s210_AgeCount_e > 20U));

  /* S-Function (motohawk_sfun_fault_def): '<S210>/motohawk_fault_def12' */

  /* Set Fault Suspected Status: NoCAN_BCM_430 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(26, rtb_Compare_gs);
    UpdateFault(26);
  }

  /* Logic: '<S210>/Logical Operator1' incorporates:
   *  Logic: '<S210>/Logical Operator'
   *  S-Function (motohawk_sfun_fault_status): '<S210>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S210>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S210>/motohawk_fault_status2'
   */
  rtb_LogicalOperator1_jo = !(IsFaultActive(24) || IsFaultActive(25) ||
    IsFaultActive(26));

  /* S-Function (motohawk_sfun_read_canmsg): '<S210>/Read CAN Message5' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_2775p0005;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_2775p0005,
      &messageObj);
    if ((BuckyWagon_01_B.s210_AgeCount_k + 1) > BuckyWagon_01_B.s210_AgeCount_k)
      BuckyWagon_01_B.s210_AgeCount_k++;
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
      BuckyWagon_01_B.s210_bcm_cell_overvolt = (real_T) tmp0;
      BuckyWagon_01_B.s210_bcm_cell_undervolt = (boolean_T) tmp1;
      BuckyWagon_01_B.s210_bcm_chg_buf = ((real_T) tmp2) / ((real_T) 2);
      BuckyWagon_01_B.s210_bcm_chg_max = ((real_T) tmp3) / ((real_T) 4);
      BuckyWagon_01_B.s210_bcm_dis_buf = ((real_T) tmp4) / ((real_T) 2);
      BuckyWagon_01_B.s210_bcm_dis_max = ((real_T) tmp5) / ((real_T) 4);
      BuckyWagon_01_B.s210_bcm_t_coolant = (((real_T) tmp6) / ((real_T) 2)) +
        ((real_T) -40);
      BuckyWagon_01_B.s210_AgeCount_k = 0;
    }
  }

  /* RelationalOperator: '<S225>/Compare' incorporates:
   *  Constant: '<S225>/Constant'
   */
  rtb_Compare_i = ((BuckyWagon_01_B.s210_AgeCount_k > 20U));

  /* S-Function (motohawk_sfun_fault_def): '<S210>/motohawk_fault_def11' */

  /* Set Fault Suspected Status: NoCAN_BCM_420 */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(25, rtb_Compare_i);
    UpdateFault(25);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S210>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: High_Cell_Voltage_Shutdown */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(13, BuckyWagon_01_B.s210_bcm_cell_undervolt);
    UpdateFault(13);
  }

  /* If: '<S229>/If' incorporates:
   *  Inport: '<S236>/In1'
   *  Inport: '<S237>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S229>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S229>/override_enable'
   */
  if ((bcm_cell_overvolt_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S229>/NewValue' incorporates:
     *  ActionPort: '<S236>/Action Port'
     */
    BuckyWagon_01_B.s229_Merge = (bcm_cell_overvolt_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S236>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(59);
    }

    /* End of Outputs for SubSystem: '<S229>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S229>/OldValue' incorporates:
     *  ActionPort: '<S237>/Action Port'
     */
    BuckyWagon_01_B.s229_Merge = BuckyWagon_01_B.s210_bcm_cell_overvolt;

    /* S-Function (motohawk_sfun_code_cover): '<S237>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/A123 Battery Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(60);
    }

    /* End of Outputs for SubSystem: '<S229>/OldValue' */
  }

  /* End of If: '<S229>/If' */

  /* End of Outputs for SubSystem: '<S20>/A123 Battery Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S215>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3095p0004;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3095p0004,
      &messageObj);
    if ((BuckyWagon_01_B.s215_AgeCount + 1) > BuckyWagon_01_B.s215_AgeCount)
      BuckyWagon_01_B.s215_AgeCount++;
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
      BuckyWagon_01_B.s215_InputVoltage = ((real_T) tmp0) * ((real_T) 2);
      BuckyWagon_01_B.s215_OutputVoltage = ((real_T) tmp1) * ((real_T) 2);
      BuckyWagon_01_B.s215_InputCurrentLimitMax = ((real_T) tmp2) / ((real_T) 2);
      BuckyWagon_01_B.s215_InputCurrent = ((real_T) tmp3) / ((real_T) 2);
      BuckyWagon_01_B.s215_OutputCurrent = ((real_T) tmp4) / ((real_T) 2);
      BuckyWagon_01_B.s215_Eaton_HV_Charger_Temperature = (((real_T) tmp5) /
        ((real_T) 2)) + ((real_T) -40);
      BuckyWagon_01_B.s215_IgnitionStatus = (real_T) tmp6;
      BuckyWagon_01_B.s215_ChargerState = (real_T) tmp7;
      BuckyWagon_01_B.s215_FaultSeverityIndicator = (real_T) tmp8;
      BuckyWagon_01_B.s215_MessageCounter = (real_T) tmp9;
      BuckyWagon_01_B.s215_MessageChecksum = (real_T) tmp10;
      BuckyWagon_01_B.s215_AgeCount = 0;
    }
  }

  /* If: '<S313>/If' incorporates:
   *  Inport: '<S331>/In1'
   *  Inport: '<S332>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S313>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S313>/override_enable'
   */
  if ((InputVoltage_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S313>/NewValue' incorporates:
     *  ActionPort: '<S331>/Action Port'
     */
    rtb_Merge_k = (InputVoltage_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S331>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(121);
    }

    /* End of Outputs for SubSystem: '<S313>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S313>/OldValue' incorporates:
     *  ActionPort: '<S332>/Action Port'
     */
    rtb_Merge_k = BuckyWagon_01_B.s215_InputVoltage;

    /* S-Function (motohawk_sfun_code_cover): '<S332>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(122);
    }

    /* End of Outputs for SubSystem: '<S313>/OldValue' */
  }

  /* End of If: '<S313>/If' */

  /* RelationalOperator: '<S304>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S215>/motohawk_calibration'
   */
  rtb_RelationalOperator_k = (rtb_Merge_k > (PluggedInMainsThesEaton_DataStore()));

  /* Stateflow: '<S304>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S215>/motohawk_calibration1'
   */

  /* Gateway: Foreground/Sensors/Eaton HV Charger/PluggedInDetect/Chart */
  /* During: Foreground/Sensors/Eaton HV Charger/PluggedInDetect/Chart */
  if (BuckyWagon_01_DWork.s314_is_active_c32_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Sensors/Eaton HV Charger/PluggedInDetect/Chart */
    BuckyWagon_01_DWork.s314_is_active_c32_BuckyWagon_01 = 1U;

    /* Transition: '<S314>:5' */
    BuckyWagon_01_DWork.s314_is_c32_BuckyWagon_01 = BuckyWagon_01_IN_Off_l;

    /* Entry 'Off': '<S314>:1' */
    BuckyWagon_01_B.s314_pluggedIn = FALSE;
  } else {
    switch (BuckyWagon_01_DWork.s314_is_c32_BuckyWagon_01) {
     case BuckyWagon_01_IN_CountDown:
      /* During 'CountDown': '<S314>:3' */
      if (BuckyWagon_01_DWork.s314_timer <= 0) {
        /* Transition: '<S314>:9' */
        BuckyWagon_01_DWork.s314_is_c32_BuckyWagon_01 = BuckyWagon_01_IN_Off_l;

        /* Entry 'Off': '<S314>:1' */
        BuckyWagon_01_B.s314_pluggedIn = FALSE;
      } else if (rtb_RelationalOperator_k) {
        /* Transition: '<S314>:8' */
        BuckyWagon_01_DWork.s314_is_c32_BuckyWagon_01 = BuckyWagon_01_IN_countUp;
      } else {
        BuckyWagon_01_DWork.s314_timer = (int16_T)
          (BuckyWagon_01_DWork.s314_timer - 1);
      }
      break;

     case BuckyWagon_01_IN_Off_l:
      /* During 'Off': '<S314>:1' */
      if (rtb_RelationalOperator_k) {
        /* Transition: '<S314>:6' */
        BuckyWagon_01_DWork.s314_is_c32_BuckyWagon_01 = BuckyWagon_01_IN_countUp;
      }
      break;

     case BuckyWagon_01_IN_On:
      /* During 'On': '<S314>:4' */
      if (!rtb_RelationalOperator_k) {
        /* Transition: '<S314>:10' */
        BuckyWagon_01_DWork.s314_is_c32_BuckyWagon_01 =
          BuckyWagon_01_IN_CountDown;
      }
      break;

     case BuckyWagon_01_IN_countUp:
      /* During 'countUp': '<S314>:2' */
      if (!rtb_RelationalOperator_k) {
        /* Transition: '<S314>:7' */
        BuckyWagon_01_DWork.s314_is_c32_BuckyWagon_01 =
          BuckyWagon_01_IN_CountDown;
      } else if ((real_T)BuckyWagon_01_DWork.s314_timer >=
                 (PluggedInHistTimeeaton_DataStore())) {
        /* Transition: '<S314>:11' */
        BuckyWagon_01_DWork.s314_is_c32_BuckyWagon_01 = BuckyWagon_01_IN_On;

        /* Entry 'On': '<S314>:4' */
        BuckyWagon_01_B.s314_pluggedIn = TRUE;
      } else {
        BuckyWagon_01_DWork.s314_timer = (int16_T)
          (BuckyWagon_01_DWork.s314_timer + 1);
      }
      break;

     default:
      /* Transition: '<S314>:5' */
      BuckyWagon_01_DWork.s314_is_c32_BuckyWagon_01 = BuckyWagon_01_IN_Off_l;

      /* Entry 'Off': '<S314>:1' */
      BuckyWagon_01_B.s314_pluggedIn = FALSE;
      break;
    }
  }

  /* End of Stateflow: '<S304>/Chart' */

  /* Outputs for Atomic SubSystem: '<S20>/UQM Motor Inouts' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S221>/Read CAN Message3' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3457p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3457p0001,
      &messageObj);
    if ((BuckyWagon_01_B.s221_AgeCount + 1) > BuckyWagon_01_B.s221_AgeCount)
      BuckyWagon_01_B.s221_AgeCount++;
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
      BuckyWagon_01_B.s221_Accurate_Torque = (((real_T) tmp0) / ((real_T) 10)) +
        ((real_T) -3212.8);
      BuckyWagon_01_B.s221_Accurate_Voltage = (((real_T) tmp1) / ((real_T) 10))
        + ((real_T) -3212.8);
      BuckyWagon_01_B.s221_Accurate_Current = (((real_T) tmp2) / ((real_T) 10))
        + ((real_T) -3212.8);
      BuckyWagon_01_B.s221_Accurate_Speed = (((real_T) tmp3) / ((real_T) 2)) +
        ((real_T) -16064);
      BuckyWagon_01_B.s221_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S360>/Compare' incorporates:
   *  Constant: '<S360>/Constant'
   */
  rtb_Compare_b = ((BuckyWagon_01_B.s221_AgeCount > 200U));

  /* S-Function (motohawk_sfun_fault_def): '<S221>/motohawk_fault_def13' */

  /* Set Fault Suspected Status: NoCAN_UQM_04EF */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(30, rtb_Compare_b);
    UpdateFault(30);
  }

  /* UnitDelay: '<S361>/Unit Delay' */
  rtb_Merge_k = BuckyWagon_01_DWork.s361_UnitDelay_DSTATE;

  /* RelationalOperator: '<S221>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S221>/motohawk_calibration'
   */
  BuckyWagon_01_B.s221_RelationalOperator = ((rtb_Merge_k >=
    (Drive_Enable_Delay_DataStore())));

  /* S-Function Block: <S361>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s361_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_g = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S361>/Sum' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S361>/motohawk_delta_time'
   */
  rtb_Merge_k += rtb_motohawk_delta_time_g;

  /* S-Function (motohawk_sfun_read_canmsg): '<S221>/Read CAN Message6' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3460p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3460p0001,
      &messageObj);
    if ((BuckyWagon_01_B.s221_AgeCount_l + 1) > BuckyWagon_01_B.s221_AgeCount_l)
      BuckyWagon_01_B.s221_AgeCount_l++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[3])) ;
      BuckyWagon_01_B.s221_Inverter_Temperature = ((real_T) tmp0) + ((real_T)
        -40);
      BuckyWagon_01_B.s221_Rotor_Temp = ((real_T) tmp1) + ((real_T) -40);
      BuckyWagon_01_B.s221_Stator_Temp = ((real_T) tmp2) + ((real_T) -40);
      BuckyWagon_01_B.s221_AgeCount_l = 0;
    }
  }

  /* RelationalOperator: '<S359>/Compare' incorporates:
   *  Constant: '<S359>/Constant'
   */
  rtb_Compare_l = ((BuckyWagon_01_B.s221_AgeCount_l > 3000U));

  /* S-Function (motohawk_sfun_fault_def): '<S221>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: NoCAN_UQM_18EF */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(32, rtb_Compare_l);
    UpdateFault(32);
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S221>/Read CAN Message5' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3459p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3459p0001,
      &messageObj);
    if ((BuckyWagon_01_B.s221_AgeCount_j + 1) > BuckyWagon_01_B.s221_AgeCount_j)
      BuckyWagon_01_B.s221_AgeCount_j++;
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
      BuckyWagon_01_B.s221_Leg_Current = ((real_T) tmp0) * ((real_T) 4);
      BuckyWagon_01_B.s221_High_Bound = (((real_T) tmp1) / ((real_T) 1.25)) +
        ((real_T) -100);
      BuckyWagon_01_B.s221_Low_Bound = (((real_T) tmp2) / ((real_T) 1.25)) +
        ((real_T) -100);
      BuckyWagon_01_B.s221_Stall_Safety_Percentage = ((real_T) tmp3) / ((real_T)
        2.5);
      BuckyWagon_01_B.s221_Angular_Distance = ((real_T) tmp4) * ((real_T) 3.75);
      BuckyWagon_01_B.s221_Torque_Desired = (((real_T) tmp5) / ((real_T) 10)) +
        ((real_T) -3212.8);
      BuckyWagon_01_B.s221_AgeCount_j = 0;
    }
  }

  /* RelationalOperator: '<S358>/Compare' incorporates:
   *  Constant: '<S358>/Constant'
   */
  rtb_Compare_o = ((BuckyWagon_01_B.s221_AgeCount_j > 250U));

  /* S-Function (motohawk_sfun_fault_def): '<S221>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: NoCAN_UQM_14EF */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(31, rtb_Compare_o);
    UpdateFault(31);
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S221>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3455p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3455p0001,
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
      BuckyWagon_01_B.s221_Command_Watchdog_Status = (real_T) tmp0;
      BuckyWagon_01_B.s221_Status_A = (real_T) tmp1;
      BuckyWagon_01_B.s221_Software_Release_Sub_Version = (real_T) tmp2;
      BuckyWagon_01_B.s221_Software_Release_Minor_Version = (real_T) tmp3;
      BuckyWagon_01_B.s221_Software_Release_Major_Version = (real_T) tmp4;
      BuckyWagon_01_B.s221_Status_C = (real_T) tmp5;
      BuckyWagon_01_B.s221_Watchdog_Error = (real_T) tmp6;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S221>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3456p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3456p0001,
      &messageObj);
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[2] & 0x00000001)) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2] & 0x00000002) >> 1) ;
      BuckyWagon_01_B.s221_Derate = (real_T) tmp0;
      BuckyWagon_01_B.s221_Shutdown = (real_T) tmp1;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S221>/Read CAN Message4' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3458p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3458p0001,
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
      BuckyWagon_01_B.s221_Not_Enabled = (real_T) tmp0;
      BuckyWagon_01_B.s221_Not_Enabled_Histroy = (real_T) tmp1;
      BuckyWagon_01_B.s221_Over_Leg_Current = (real_T) tmp2;
      BuckyWagon_01_B.s221_Over_Leg_Current_History = (real_T) tmp3;
      BuckyWagon_01_B.s221_Over_Bus_Current = (real_T) tmp4;
      BuckyWagon_01_B.s221_Over_Bus_Current_History = (real_T) tmp5;
      BuckyWagon_01_B.s221_Over_Phase_Advance = (real_T) tmp6;
      BuckyWagon_01_B.s221_Over_Phase_Advance_History = (real_T) tmp7;
      BuckyWagon_01_B.s221_Under_Voltage_Warning = (real_T) tmp8;
      BuckyWagon_01_B.s221_Under_Voltage_Warning_History = (real_T) tmp9;
      BuckyWagon_01_B.s221_Rotor_Over_Temperature = (real_T) tmp10;
      BuckyWagon_01_B.s221_Rotor_Over_Temperature_History = (real_T) tmp11;
      BuckyWagon_01_B.s221_Stator_Over_Temperature = (real_T) tmp12;
      BuckyWagon_01_B.s221_Stator_Over_Temperature_History = (real_T) tmp13;
      BuckyWagon_01_B.s221_Inverter_Over_Temperature = (real_T) tmp14;
      BuckyWagon_01_B.s221_Inverter_Over_Temperature_History = (real_T) tmp15;
      BuckyWagon_01_B.s221_Over_Speed_Warning = (real_T) tmp16;
      BuckyWagon_01_B.s221_Over_Speed_Warning_History = (real_T) tmp17;
      BuckyWagon_01_B.s221_Over_Voltage_Warning = (real_T) tmp18;
      BuckyWagon_01_B.s221_Over_Voltage_Warning_History = (real_T) tmp19;
      BuckyWagon_01_B.s221_Over_Speed_Alarm = (real_T) tmp20;
      BuckyWagon_01_B.s221_Over_Speed_Alarm_History = (real_T) tmp21;
      BuckyWagon_01_B.s221_Over_Voltage_Alarm = (real_T) tmp22;
      BuckyWagon_01_B.s221_Over_Voltage_Alarm_History = (real_T) tmp23;
      BuckyWagon_01_B.s221_ADC_Calibration_Problem = (real_T) tmp24;
      BuckyWagon_01_B.s221_ADC_Calibration_Problem_History = (real_T) tmp25;
      BuckyWagon_01_B.s221_Limp_Home_Mode = (real_T) tmp26;
      BuckyWagon_01_B.s221_Limp_Home_Mode_History = (real_T) tmp27;
      BuckyWagon_01_B.s221_Inverter_Fault_Occured = (real_T) tmp28;
      BuckyWagon_01_B.s221_Iverter_Fault_Occured_History = (real_T) tmp29;
      BuckyWagon_01_B.s221_Inverter_Fault = (real_T) tmp30;
      BuckyWagon_01_B.s221_Inverter_Fault_History = (real_T) tmp31;
      BuckyWagon_01_B.s221_Forced_Voltage_Control = (real_T) tmp32;
      BuckyWagon_01_B.s221_CAN_Limits_In_Effect = (real_T) tmp33;
      BuckyWagon_01_B.s221_System_Disabled_In_Motion = (real_T) tmp34;
      BuckyWagon_01_B.s221_ABC_Phase_Order = (real_T) tmp35;
      BuckyWagon_01_B.s221_Regen_Switch_Open = (real_T) tmp36;
      BuckyWagon_01_B.s221_Current_Transducer_Fault_IbusIleg = (real_T) tmp37;
      BuckyWagon_01_B.s221_Acceleration_Limited = (real_T) tmp38;
      BuckyWagon_01_B.s221_Using_Raw_Speed = (real_T) tmp39;
      BuckyWagon_01_B.s221_Turbo_Mode = (real_T) tmp40;
      BuckyWagon_01_B.s221_Forced_Open_Loop = (real_T) tmp41;
      BuckyWagon_01_B.s221_Motor_Stalled = (real_T) tmp42;
      BuckyWagon_01_B.s221_Phase_Current_Sensor_Error = (real_T) tmp43;
      BuckyWagon_01_B.s221_Bad_Position_Signal = (real_T) tmp44;
      BuckyWagon_01_B.s221_Bad_Switch = (real_T) tmp45;
      BuckyWagon_01_B.s221_Invalid_Power_Supply = (real_T) tmp46;
      BuckyWagon_01_B.s221_Power_Switches_Off = (real_T) tmp47;
    }
  }

  /* Update for UnitDelay: '<S361>/Unit Delay' */
  BuckyWagon_01_DWork.s361_UnitDelay_DSTATE = rtb_Merge_k;

  /* End of Outputs for SubSystem: '<S20>/UQM Motor Inouts' */

  /* Outputs for Atomic SubSystem: '<S17>/HV Controller' */

  /* Logic: '<S123>/Logical Operator2' */
  rtb_LogicalOperator2_e = !BuckyWagon_01_B.s314_pluggedIn;

  /* Logic: '<S123>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S123>/motohawk_data_read'
   */
  rtb_RelationalOperator_k = (Shutdown_Req_DataStore() && rtb_LogicalOperator2_e);

  /* If: '<S147>/If' incorporates:
   *  Inport: '<S154>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S147>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S147>/override_enable'
   */
  if ((Contactor_Shutdown_Test_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S147>/NewValue' incorporates:
     *  ActionPort: '<S154>/Action Port'
     */
    rtb_RelationalOperator_k = (Contactor_Shutdown_Test_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S154>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(49);
    }

    /* End of Outputs for SubSystem: '<S147>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S147>/OldValue' incorporates:
     *  ActionPort: '<S155>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S155>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/HV Controller/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(50);
    }

    /* End of Outputs for SubSystem: '<S147>/OldValue' */
  }

  /* End of If: '<S147>/If' */

  /* Logic: '<S123>/Logical Operator12' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S123>/motohawk_fault_action'
   */
  rtb_LogicalOperator12 = (rtb_RelationalOperator_k || GetFaultActionStatus(5));

  /* S-Function Block: <S151>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s151_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ht = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S151>/Switch' incorporates:
   *  Constant: '<S151>/Constant'
   *  Logic: '<S145>/Logical Operator5'
   *  S-Function (motohawk_sfun_data_read): '<S151>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S151>/motohawk_delta_time'
   *  Sum: '<S151>/Sum'
   */
  if (!rtb_LogicalOperator12) {
    rtb_Merge_k = rtb_motohawk_delta_time_ht + Solectria_Enable_timer_DataStore();
  } else {
    rtb_Merge_k = 0.0;
  }

  /* End of Switch: '<S151>/Switch' */
  /* Logic: '<S145>/Logical Operator4' incorporates:
   *  Logic: '<S145>/Logical Operator3'
   *  RelationalOperator: '<S145>/Relational Operator1'
   *  RelationalOperator: '<S146>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S145>/motohawk_calibration1'
   */
  rtb_LogicalOperator4_f = ((!rtb_LogicalOperator12) && (rtb_Merge_k >=
    (Load_Enable_Delay_DataStore())) && BuckyWagon_01_B.s227_Merge);

  /* S-Function (motohawk_sfun_data_write): '<S123>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Batt_Load_Enable */
  {
    Batt_Load_Enable_DataStore() = rtb_LogicalOperator4_f;
  }

  /* RelationalOperator: '<S144>/Compare' incorporates:
   *  Constant: '<S144>/Constant'
   */
  rtb_RelationalOperator_k = (BuckyWagon_01_B.s231_Merge == 1.0);

  /* UnitDelay: '<S152>/Unit Delay' */
  rtb_UnitDelay_if = BuckyWagon_01_DWork.s152_UnitDelay_DSTATE;

  /* Switch: '<S149>/Switch' incorporates:
   *  Constant: '<S149>/Constant1'
   *  DataTypeConversion: '<S149>/Data Type Conversion'
   *  Sum: '<S149>/Sum'
   *  UnitDelay: '<S149>/Unit Delay'
   */
  if (rtb_RelationalOperator_k) {
    rtb_to65535_c = BuckyWagon_01_DWork.s149_UnitDelay_DSTATE + 1.0;
  } else {
    rtb_to65535_c = 0.0;
  }

  /* End of Switch: '<S149>/Switch' */

  /* Logic: '<S149>/Logical Operator' */
  rtb_LogicalOperator_bd = !rtb_RelationalOperator_k;

  /* Switch: '<S149>/Switch1' incorporates:
   *  Constant: '<S149>/Constant3'
   *  DataTypeConversion: '<S149>/Data Type Conversion1'
   *  Sum: '<S149>/Sum1'
   *  UnitDelay: '<S149>/Unit Delay1'
   */
  if (rtb_LogicalOperator_bd) {
    rtb_to65535_d = BuckyWagon_01_DWork.s149_UnitDelay1_DSTATE + 1.0;
  } else {
    rtb_to65535_d = 0.0;
  }

  /* End of Switch: '<S149>/Switch1' */

  /* Logic: '<S153>/Logical Operator2' incorporates:
   *  Constant: '<S149>/off delay'
   *  Constant: '<S149>/on delay'
   *  Logic: '<S149>/Logical Operator1'
   *  Logic: '<S149>/Logical Operator2'
   *  Logic: '<S153>/Logical Operator'
   *  Logic: '<S153>/Logical Operator1'
   *  RelationalOperator: '<S149>/Relational Operator1'
   *  RelationalOperator: '<S149>/Relational Operator2'
   *  UnitDelay: '<S153>/Unit Delay'
   */
  rtb_LogicalOperator2_o = ((BuckyWagon_01_DWork.s153_UnitDelay_DSTATE ||
    (rtb_RelationalOperator_k && (rtb_to65535_c >= 10.0))) &&
    (!(rtb_LogicalOperator_bd && (rtb_to65535_d >= 0.0))));

  /* S-Function Block: <S150>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s150_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_oi = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S150>/Switch' incorporates:
   *  Constant: '<S150>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S150>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S150>/motohawk_delta_time'
   *  Sum: '<S150>/Sum'
   */
  if (rtb_LogicalOperator12) {
    rtb_Switch_h = rtb_motohawk_delta_time_oi +
      Contactor_Disable_Timer_DataStore();
  } else {
    rtb_Switch_h = 0.0;
  }

  /* End of Switch: '<S150>/Switch' */
  /* Logic: '<S145>/Logical Operator2' incorporates:
   *  Logic: '<S145>/Logical Operator6'
   *  RelationalOperator: '<S145>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S145>/motohawk_calibration'
   */
  rtb_RelationalOperator_k = (rtb_LogicalOperator2_o && (!(rtb_Switch_h >=
    (Contactor_Disable_Delay_DataStore()))));

  /* Switch: '<S148>/Switch' incorporates:
   *  Constant: '<S148>/Constant1'
   *  DataTypeConversion: '<S148>/Data Type Conversion'
   *  Sum: '<S148>/Sum'
   *  UnitDelay: '<S148>/Unit Delay'
   */
  if (rtb_RelationalOperator_k) {
    rtb_to65535_b = BuckyWagon_01_DWork.s148_UnitDelay_DSTATE + 1.0;
  } else {
    rtb_to65535_b = 0.0;
  }

  /* End of Switch: '<S148>/Switch' */

  /* Logic: '<S148>/Logical Operator' */
  rtb_LogicalOperator_bd = !rtb_RelationalOperator_k;

  /* Switch: '<S148>/Switch1' incorporates:
   *  Constant: '<S148>/Constant3'
   *  DataTypeConversion: '<S148>/Data Type Conversion1'
   *  Sum: '<S148>/Sum1'
   *  UnitDelay: '<S148>/Unit Delay1'
   */
  if (rtb_LogicalOperator_bd) {
    rtb_to65535_dx = BuckyWagon_01_DWork.s148_UnitDelay1_DSTATE + 1.0;
  } else {
    rtb_to65535_dx = 0.0;
  }

  /* End of Switch: '<S148>/Switch1' */

  /* Logic: '<S152>/Logical Operator2' incorporates:
   *  Constant: '<S148>/off delay'
   *  Constant: '<S148>/on delay'
   *  Logic: '<S148>/Logical Operator1'
   *  Logic: '<S148>/Logical Operator2'
   *  Logic: '<S152>/Logical Operator'
   *  Logic: '<S152>/Logical Operator1'
   *  RelationalOperator: '<S148>/Relational Operator1'
   *  RelationalOperator: '<S148>/Relational Operator2'
   */
  rtb_LogicalOperator2_j = ((rtb_UnitDelay_if || (rtb_RelationalOperator_k &&
    (rtb_to65535_b >= 0.0))) && (!(rtb_LogicalOperator_bd && (rtb_to65535_dx >=
    10.0))));

  /* S-Function (motohawk_sfun_data_write): '<S145>/motohawk_data_write' */
  /* Write to Data Storage as scalar: MPRD_KeepAlive */
  {
    MPRD_KeepAlive_DataStore() = rtb_LogicalOperator2_j;
  }

  /* Saturate: '<S150>/Saturation' */
  rtb_Saturation_p = rtb_Switch_h >= 86400.0 ? 86400.0 : rtb_Switch_h <= 0.0 ?
    0.0 : rtb_Switch_h;

  /* S-Function (motohawk_sfun_data_write): '<S150>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Contactor_Disable_Timer */
  {
    Contactor_Disable_Timer_DataStore() = rtb_Saturation_p;
  }

  /* Saturate: '<S151>/Saturation' */
  rtb_Saturation_c = rtb_Merge_k >= 86400.0 ? 86400.0 : rtb_Merge_k <= 0.0 ? 0.0
    : rtb_Merge_k;

  /* S-Function (motohawk_sfun_data_write): '<S151>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Solectria_Enable_timer */
  {
    Solectria_Enable_timer_DataStore() = rtb_Saturation_c;
  }

  /* Logic: '<S123>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S123>/motohawk_calibration8'
   */
  BuckyWagon_01_B.s123_LogicalOperator = (((Allow_MainContactor_Close_DataStore())
    && rtb_RelationalOperator_k));

  /* Logic: '<S123>/Logical Operator3' */
  rtb_UnitDelay_if = (rtb_LogicalOperator4_f && rtb_LogicalOperator2_e);

  /* Logic: '<S123>/Logical Operator4' */
  rtb_LogicalOperator2_e = (BuckyWagon_01_B.s221_RelationalOperator &&
    rtb_UnitDelay_if);

  /* Logic: '<S123>/Logical Operator5' */
  rtb_LogicalOperator5_k = (rtb_LogicalOperator4_f || BuckyWagon_01_B.s228_Merge);

  /* Update for UnitDelay: '<S152>/Unit Delay' */
  BuckyWagon_01_DWork.s152_UnitDelay_DSTATE = rtb_LogicalOperator2_j;

  /* Update for UnitDelay: '<S153>/Unit Delay' */
  BuckyWagon_01_DWork.s153_UnitDelay_DSTATE = rtb_LogicalOperator2_o;

  /* Update for UnitDelay: '<S149>/Unit Delay' */
  BuckyWagon_01_DWork.s149_UnitDelay_DSTATE = rtb_to65535_c;

  /* Update for UnitDelay: '<S149>/Unit Delay1' */
  BuckyWagon_01_DWork.s149_UnitDelay1_DSTATE = rtb_to65535_d;

  /* Update for UnitDelay: '<S148>/Unit Delay' */
  BuckyWagon_01_DWork.s148_UnitDelay_DSTATE = rtb_to65535_b;

  /* Update for UnitDelay: '<S148>/Unit Delay1' */
  BuckyWagon_01_DWork.s148_UnitDelay1_DSTATE = rtb_to65535_dx;

  /* End of Outputs for SubSystem: '<S17>/HV Controller' */

  /* S-Function Block: <S20>/motohawk_din Resource: EStop_Switch_Pin */
  {
    extern NativeError_S EStop_Switch_Pin_DigitalInput_Get(boolean_T *out,
      uint16_T *status);
    EStop_Switch_Pin_DigitalInput_Get(&rtb_E_stop_switch, NULL);
  }

  /* Logic: '<S20>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration'
   *  S-Function (motohawk_sfun_din): '<S20>/motohawk_din'
   */
  rtb_RelationalOperator_k = rtb_E_stop_switch ^ (E_Stop_Invert_DataStore());

  /* If: '<S223>/If' incorporates:
   *  Inport: '<S365>/In1'
   *  Inport: '<S366>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S223>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S223>/override_enable'
   */
  if ((Estop_switch_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S223>/NewValue' incorporates:
     *  ActionPort: '<S365>/Action Port'
     */
    BuckyWagon_01_B.s223_Merge = (Estop_switch_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S365>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(131);
    }

    /* End of Outputs for SubSystem: '<S223>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S223>/OldValue' incorporates:
     *  ActionPort: '<S366>/Action Port'
     */
    BuckyWagon_01_B.s223_Merge = rtb_RelationalOperator_k;

    /* S-Function (motohawk_sfun_code_cover): '<S366>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(132);
    }

    /* End of Outputs for SubSystem: '<S223>/OldValue' */
  }

  /* End of If: '<S223>/If' */

  /* Logic: '<S17>/Logical Operator' incorporates:
   *  Logic: '<S17>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_action): '<S17>/motohawk_fault_action'
   */
  rtb_BelowLoTarget = !(BuckyWagon_01_B.s314_pluggedIn ||
                        BuckyWagon_01_B.s223_Merge || GetFaultActionStatus(3));

  /* Product: '<S222>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S222>/motohawk_calibration2'
   */
  rtb_Merge_k = BuckyWagon_01_B.s221_Accurate_Speed * (TireSize_DataStore());

  /* Product: '<S222>/Product1' incorporates:
   *  Constant: '<S222>/Constant2'
   *  S-Function (motohawk_sfun_calibration): '<S222>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S222>/motohawk_calibration1'
   */
  rtb_to65535_c = (RearDiffRatio_DataStore()) * (IntermediaryGearRatio_DataStore
    ()) * 336.0;

  /* If: '<S362>/If' incorporates:
   *  Inport: '<S363>/In1'
   *  Inport: '<S364>/In1'
   *  Product: '<S222>/Product6'
   *  S-Function (motohawk_sfun_calibration): '<S362>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S362>/override_enable'
   */
  if ((Vehicle_Speed_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S362>/NewValue' incorporates:
     *  ActionPort: '<S363>/Action Port'
     */
    BuckyWagon_01_B.s362_Merge = (Vehicle_Speed_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S363>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(129);
    }

    /* End of Outputs for SubSystem: '<S362>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S362>/OldValue' incorporates:
     *  ActionPort: '<S364>/Action Port'
     */
    BuckyWagon_01_B.s362_Merge = rtb_Merge_k / rtb_to65535_c;

    /* S-Function (motohawk_sfun_code_cover): '<S364>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Vehicle Speed/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(130);
    }

    /* End of Outputs for SubSystem: '<S362>/OldValue' */
  }

  /* End of If: '<S362>/If' */

  /* Abs: '<S222>/Abs' */
  BuckyWagon_01_B.s222_Abs = fabs(BuckyWagon_01_B.s362_Merge);

  /* S-Function Block: <S20>/motohawk_ain2 Resource: Reverse_Switch_Pin */
  {
    extern NativeError_S Reverse_Switch_Pin_AnalogInput_Get(uint16_T *adc,
      uint16_T *status);
    Reverse_Switch_Pin_AnalogInput_Get(&rtb_motohawk_ain2, NULL);
  }

  /* DataTypeConversion: '<S211>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S20>/motohawk_ain2'
   */
  BuckyWagon_01_B.s211_DataTypeConversion = (real_T)rtb_motohawk_ain2;

  /* RelationalOperator: '<S211>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S211>/SwitchPoint'
   */
  rtb_RelationalOperator_k = (BuckyWagon_01_B.s211_DataTypeConversion >
    (Reverse_SwitchPt_DataStore()));

  /* Logic: '<S211>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S211>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelationalOperator_k ^= (Reverse_Polarity_DataStore());

  /* If: '<S242>/If' incorporates:
   *  Inport: '<S243>/In1'
   *  Inport: '<S244>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S242>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S242>/override_enable'
   */
  if ((Reverse_Switch_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S242>/NewValue' incorporates:
     *  ActionPort: '<S243>/Action Port'
     */
    BuckyWagon_01_B.s242_Merge = (Reverse_Switch_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S243>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(65);
    }

    /* End of Outputs for SubSystem: '<S242>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S242>/OldValue' incorporates:
     *  ActionPort: '<S244>/Action Port'
     */
    BuckyWagon_01_B.s242_Merge = rtb_RelationalOperator_k;

    /* S-Function (motohawk_sfun_code_cover): '<S244>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Analog Switch1/Override in Engineering Units/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(66);
    }

    /* End of Outputs for SubSystem: '<S242>/OldValue' */
  }

  /* End of If: '<S242>/If' */

  /* S-Function Block: <S333>/motohawk_delta_time */
  rtb_DataTypeConversion_b = 0.005;

  /* Product: '<S333>/Product' incorporates:
   *  MinMax: '<S333>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S333>/motohawk_calibration'
   */
  rtb_DataTypeConversion_b /= (rtb_DataTypeConversion_b >=
    (Accel_FilterConst_DataStore())) || rtIsNaN((Accel_FilterConst_DataStore()))
    ? rtb_DataTypeConversion_b : (Accel_FilterConst_DataStore());

  /* Logic: '<S216>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S216>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S216>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_fj = (IsFaultActive(1) || IsFaultActive(2));

  /* Logic: '<S216>/Logical Operator6' */
  rtb_RelationalOperator_k = !rtb_RelationalOperator_fj;

  /* Logic: '<S216>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S216>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S216>/motohawk_fault_status3'
   */
  rtb_LogicalOperator_bd = (IsFaultSuspected(1) || IsFaultSuspected(2));

  /* S-Function Block: <S20>/motohawk_ain Resource: Accel_Pedal_Pin */
  {
    extern NativeError_S Accel_Pedal_Pin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    Accel_Pedal_Pin_AnalogInput_Get(&BuckyWagon_01_B.s20_motohawk_ain, NULL);
  }

  /* DataTypeConversion: '<S216>/Data Type Conversion' */
  rtb_DataTypeConversion_i = BuckyWagon_01_B.s20_motohawk_ain;

  /* Fcn: '<S216>/ZeroFullCal' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration5'
   */
  rtb_Product_p = ((real_T)rtb_DataTypeConversion_i - (Accel_Zero_DataStore())) /
    ((Accel_Full_DataStore()) - (Accel_Zero_DataStore()));

  /* Saturate: '<S216>/Saturation' */
  BuckyWagon_01_B.s216_Saturation = rtb_Product_p >= 1.0 ? 1.0 : rtb_Product_p <=
    0.0 ? 0.0 : rtb_Product_p;

  /* UnitDelay: '<S216>/Unit Delay1' */
  rtb_UnitDelay1_k = BuckyWagon_01_DWork.s216_UnitDelay1_DSTATE;

  /* If: '<S216>/If' incorporates:
   *  Logic: '<S216>/Logical Operator5'
   */
  if (rtb_RelationalOperator_k && rtb_LogicalOperator_bd) {
    /* Outputs for IfAction SubSystem: '<S216>/If Action Subsystem' incorporates:
     *  ActionPort: '<S334>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(rtb_UnitDelay1_k, &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S216>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_fj) {
    /* Outputs for IfAction SubSystem: '<S216>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S335>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem((Accel_DfltValue_DataStore()), &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S216>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S216>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S336>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(BuckyWagon_01_B.s216_Saturation,
      &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S216>/If Action Subsystem2' */
  }

  /* End of If: '<S216>/If' */

  /* Sum: '<S338>/Sum1' incorporates:
   *  Constant: '<S338>/Constant'
   *  Product: '<S338>/Product'
   *  Product: '<S338>/Product1'
   *  Sum: '<S338>/Sum'
   *  UnitDelay: '<S338>/Unit Delay'
   */
  rtb_Sum1 = (1.0 - rtb_DataTypeConversion_b) *
    BuckyWagon_01_DWork.s338_UnitDelay_DSTATE + rtb_Merge_c *
    rtb_DataTypeConversion_b;

  /* If: '<S337>/If' incorporates:
   *  Inport: '<S339>/In1'
   *  Inport: '<S340>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S337>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S337>/override_enable'
   */
  if ((Accel_Pedal_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S337>/NewValue' incorporates:
     *  ActionPort: '<S339>/Action Port'
     */
    BuckyWagon_01_B.s337_Merge = (Accel_Pedal_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S339>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(123);
    }

    /* End of Outputs for SubSystem: '<S337>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S337>/OldValue' incorporates:
     *  ActionPort: '<S340>/Action Port'
     */
    BuckyWagon_01_B.s337_Merge = rtb_Sum1;

    /* S-Function (motohawk_sfun_code_cover): '<S340>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization/Override/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(124);
    }

    /* End of Outputs for SubSystem: '<S337>/OldValue' */
  }

  /* End of If: '<S337>/If' */

  /* Outputs for Atomic SubSystem: '<S17>/Reverse' */

  /* Abs: '<S124>/Abs' */
  BuckyWagon_01_B.s124_Abs = fabs(BuckyWagon_01_B.s222_Abs);

  /* Stateflow: '<S124>/Chart' */

  /* Gateway: Foreground/Control Strategy/Reverse/Chart */
  BuckyWagon_01_DWork.s156_sfEvent = CALL_EVENT;
  BuckyWagon_01_c1_BuckyWagon_01();

  /* If: '<S157>/If' incorporates:
   *  Inport: '<S158>/In1'
   *  Inport: '<S159>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S157>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S157>/override_enable'
   */
  if ((In_Reverse_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S157>/NewValue' incorporates:
     *  ActionPort: '<S158>/Action Port'
     */
    BuckyWagon_01_B.s157_Merge = (In_Reverse_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S158>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(51);
    }

    /* End of Outputs for SubSystem: '<S157>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S157>/OldValue' incorporates:
     *  ActionPort: '<S159>/Action Port'
     */
    BuckyWagon_01_B.s157_Merge = BuckyWagon_01_B.s156_inReverse;

    /* S-Function (motohawk_sfun_code_cover): '<S159>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Reverse/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(52);
    }

    /* End of Outputs for SubSystem: '<S157>/OldValue' */
  }

  /* End of If: '<S157>/If' */

  /* End of Outputs for SubSystem: '<S17>/Reverse' */
  /* S-Function Block: <S349>/motohawk_delta_time */
  rtb_Product_p = 0.005;

  /* Product: '<S349>/Product' incorporates:
   *  MinMax: '<S349>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S349>/motohawk_calibration'
   */
  rtb_Product_p /= (rtb_Product_p >= (Brake_FilterConst_DataStore())) || rtIsNaN
    ((Brake_FilterConst_DataStore())) ? rtb_Product_p :
    (Brake_FilterConst_DataStore());

  /* Logic: '<S218>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S218>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S218>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_fj = (IsFaultActive(5) || IsFaultActive(6));

  /* Logic: '<S218>/Logical Operator6' */
  rtb_RelationalOperator_k = !rtb_RelationalOperator_fj;

  /* Logic: '<S218>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S218>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S218>/motohawk_fault_status3'
   */
  rtb_LogicalOperator_bd = (IsFaultSuspected(5) || IsFaultSuspected(6));

  /* S-Function Block: <S20>/motohawk_ain1 Resource: Brake_Pedal_Pin */
  {
    extern NativeError_S Brake_Pedal_Pin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    Brake_Pedal_Pin_AnalogInput_Get(&BuckyWagon_01_B.s20_motohawk_ain1, NULL);
  }

  /* DataTypeConversion: '<S218>/Data Type Conversion' */
  rtb_DataTypeConversion_b = (real_T)BuckyWagon_01_B.s20_motohawk_ain1;

  /* Fcn: '<S218>/ZeroFullCal' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S218>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S218>/motohawk_calibration5'
   */
  rtb_Sum3 = (rtb_DataTypeConversion_b - (Brake_Zero_DataStore())) /
    ((Brake_Full_DataStore()) - (Brake_Zero_DataStore()));

  /* Saturate: '<S218>/Saturation' */
  BuckyWagon_01_B.s218_Saturation = rtb_Sum3 >= 1.0 ? 1.0 : rtb_Sum3 <= 0.0 ?
    0.0 : rtb_Sum3;

  /* UnitDelay: '<S218>/Unit Delay1' */
  rtb_UnitDelay1_b = BuckyWagon_01_DWork.s218_UnitDelay1_DSTATE;

  /* If: '<S218>/If' incorporates:
   *  Logic: '<S218>/Logical Operator5'
   */
  if (rtb_RelationalOperator_k && rtb_LogicalOperator_bd) {
    /* Outputs for IfAction SubSystem: '<S218>/If Action Subsystem' incorporates:
     *  ActionPort: '<S350>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(rtb_UnitDelay1_b, &rtb_Merge_e);

    /* End of Outputs for SubSystem: '<S218>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_fj) {
    /* Outputs for IfAction SubSystem: '<S218>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S351>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem((Brake_DfltValue_DataStore()), &rtb_Merge_e);

    /* End of Outputs for SubSystem: '<S218>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S218>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S352>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(BuckyWagon_01_B.s218_Saturation,
      &rtb_Merge_e);

    /* End of Outputs for SubSystem: '<S218>/If Action Subsystem2' */
  }

  /* End of If: '<S218>/If' */

  /* Sum: '<S354>/Sum1' incorporates:
   *  Constant: '<S354>/Constant'
   *  Product: '<S354>/Product'
   *  Product: '<S354>/Product1'
   *  Sum: '<S354>/Sum'
   *  UnitDelay: '<S354>/Unit Delay'
   */
  rtb_Sum1_o = (1.0 - rtb_Product_p) * BuckyWagon_01_DWork.s354_UnitDelay_DSTATE
    + rtb_Merge_e * rtb_Product_p;

  /* If: '<S353>/If' incorporates:
   *  Inport: '<S355>/In1'
   *  Inport: '<S356>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S353>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S353>/override_enable'
   */
  if ((Brake_Pedal_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S353>/NewValue' incorporates:
     *  ActionPort: '<S355>/Action Port'
     */
    BuckyWagon_01_B.s353_Merge = (Brake_Pedal_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S355>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(127);
    }

    /* End of Outputs for SubSystem: '<S353>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S353>/OldValue' incorporates:
     *  ActionPort: '<S356>/Action Port'
     */
    BuckyWagon_01_B.s353_Merge = rtb_Sum1_o;

    /* S-Function (motohawk_sfun_code_cover): '<S356>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization2/Override/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(128);
    }

    /* End of Outputs for SubSystem: '<S353>/OldValue' */
  }

  /* End of If: '<S353>/If' */

  /* Outputs for Atomic SubSystem: '<S17>/Drive' */

  /* RelationalOperator: '<S130>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S130>/motohawk_calibration2'
   */
  rtb_RelationalOperator_k = (BuckyWagon_01_B.s337_Merge >
    (Temp_ped_switchOver_DataStore()));

  /* S-Function Block: <S131>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s131_motohawk_delta_time_DWORK1, NULL);
    rtb_UnitDelay_g = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S131>/Product' incorporates:
   *  MinMax: '<S131>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration'
   */
  rtb_UnitDelay_g /= (rtb_UnitDelay_g >= (Veh_Speed_Regen_Filter_DataStore())) ||
    rtIsNaN((Veh_Speed_Regen_Filter_DataStore())) ? rtb_UnitDelay_g :
    (Veh_Speed_Regen_Filter_DataStore());

  /* Product: '<S134>/Product' */
  rtb_Merge_k = BuckyWagon_01_B.s221_Accurate_Speed * rtb_UnitDelay_g;

  /* Sum: '<S134>/Sum' incorporates:
   *  Constant: '<S134>/Constant'
   */
  rtb_to65535_c = 1.0 - rtb_UnitDelay_g;

  /* UnitDelay: '<S134>/Unit Delay' */
  rtb_UnitDelay_g = BuckyWagon_01_DWork.s134_UnitDelay_DSTATE;

  /* Sum: '<S134>/Sum1' incorporates:
   *  Product: '<S134>/Product1'
   */
  rtb_Sum1_h = rtb_to65535_c * rtb_UnitDelay_g + rtb_Merge_k;

  /* Outputs for Atomic SubSystem: '<S130>/Regen' */

  /* S-Function Block: <S136>/motohawk_prelookup_row */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (StateOfChargePctIn_DataStore()) = BuckyWagon_01_B.s230_Merge;
    (StateOfChargePctIdx_DataStore()) = TablePrelookup_real_T
      (BuckyWagon_01_B.s230_Merge, (StateOfChargePctIdxArr_DataStore()), 4,
       (StateOfChargePctIdx_DataStore()));
    rtb_motohawk_prelookup_row = (StateOfChargePctIdx_DataStore());
  }

  /* S-Function Block: <S136>/motohawk_prelookup_col */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MotorSpdIn_DataStore()) = rtb_Sum1_h;
    (MotorSpdIdx_DataStore()) = TablePrelookup_real_T(rtb_Sum1_h,
      (MotorSpdIdxArr_DataStore()), 8, (MotorSpdIdx_DataStore()));
    rtb_motohawk_prelookup_col = (MotorSpdIdx_DataStore());
  }

  /* S-Function Block: <S136>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_Product1_n = TableInterpolation2D_real_T(rtb_motohawk_prelookup_row,
      rtb_motohawk_prelookup_col, (real_T *) ((RegenBatteryLimitsMap_DataStore())),
      4, 8);
    (RegenBatteryLimits_DataStore()) = rtb_Product1_n;
  }

  /* Saturate: '<S132>/Saturation1' */
  BuckyWagon_01_B.s132_Saturation1 = rtb_Product1_n >= 1.0 ? 1.0 :
    rtb_Product1_n <= 0.0 ? 0.0 : rtb_Product1_n;

  /* Sum: '<S132>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration1'
   */
  rtb_Merge_k = BuckyWagon_01_B.s353_Merge - (Regen_Start_DataStore());

  /* Product: '<S132>/Divide' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration2'
   *  Sum: '<S132>/Sum1'
   */
  rtb_Product1_n = rtb_Merge_k / ((Regen_Full_DataStore()) -
    (Regen_Start_DataStore()));

  /* Product: '<S132>/Product' incorporates:
   *  Gain: '<S132>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration3'
   *  Saturate: '<S132>/Saturation2'
   */
  BuckyWagon_01_B.s132_Product = (rtb_Product1_n >= 1.0 ? 1.0 : rtb_Product1_n <=
    0.0 ? 0.0 : rtb_Product1_n) * -1.0 * (Max_Regen_Tq_DataStore());

  /* Logic: '<S132>/Logical Operator2' incorporates:
   *  Logic: '<S132>/Logical Operator'
   *  Logic: '<S132>/Logical Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration4'
   */
  rtb_LogicalOperator_bd = !((BuckyWagon_01_B.s157_Merge != 0.0) ||
    (!(Enable_Regen_DataStore())));

  /* RelationalOperator: '<S132>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration6'
   */
  rtb_LogicalOperator12 = (BuckyWagon_01_B.s222_Abs >
    (Min_Speed_Allow_Coast_NegT_DataStore()));

  /* Gain: '<S132>/Gain1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration7'
   */
  rtb_Product1_n = -(Max_Coast_Tq_DataStore());

  /* Product: '<S132>/Product2' incorporates:
   *  Logic: '<S130>/Logic'
   *  RelationalOperator: '<S132>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration8'
   */
  BuckyWagon_01_B.s132_Product2 = (rtb_LogicalOperator_bd ? (real_T)
    (Enable_Coast_Neg_Torque_DataStore()) : 0.0) * (real_T)rtb_LogicalOperator12
    * rtb_Product1_n * (real_T)(BuckyWagon_01_B.s230_Merge <
    (Max_SOC_For_Coast_Tq_EN_DataStore())) * (real_T)!rtb_RelationalOperator_k;

  /* If: '<S135>/If' incorporates:
   *  Inport: '<S137>/In1'
   *  Inport: '<S138>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S135>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S135>/override_enable'
   */
  if ((Regen_SOC_Speed_Ramp_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S135>/NewValue' incorporates:
     *  ActionPort: '<S137>/Action Port'
     */
    rtb_Merge_k = (Regen_SOC_Speed_Ramp_ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S137>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(45);
    }

    /* End of Outputs for SubSystem: '<S135>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S135>/OldValue' incorporates:
     *  ActionPort: '<S138>/Action Port'
     */
    rtb_Merge_k = BuckyWagon_01_B.s132_Saturation1;

    /* S-Function (motohawk_sfun_code_cover): '<S138>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/Drive/Normal Driving/Regen/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(46);
    }

    /* End of Outputs for SubSystem: '<S135>/OldValue' */
  }

  /* End of If: '<S135>/If' */

  /* Product: '<S132>/Product1' */
  rtb_Product1_n = (real_T)rtb_LogicalOperator_bd * BuckyWagon_01_B.s132_Product
    * rtb_Merge_k;

  /* Switch: '<S132>/Switch' incorporates:
   *  RelationalOperator: '<S132>/Relational Operator1'
   */
  if (rtb_Product1_n <= BuckyWagon_01_B.s132_Product2) {
    rtb_Merge_k = rtb_Product1_n;
  } else {
    rtb_Merge_k = BuckyWagon_01_B.s132_Product2;
  }

  /* End of Switch: '<S132>/Switch' */
  /* End of Outputs for SubSystem: '<S130>/Regen' */

  /* Switch: '<S130>/Switch' incorporates:
   *  Product: '<S130>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S130>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S133>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S133>/motohawk_prelookup'
   */
  if (rtb_RelationalOperator_k) {
    /* S-Function Block: <S133>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (AccelPedalMap_v2In_DataStore()) = BuckyWagon_01_B.s337_Merge;
      (AccelPedalMap_v2Idx_DataStore()) = TablePrelookup_real_T
        (BuckyWagon_01_B.s337_Merge, (AccelPedalMap_v2IdxArr_DataStore()), 13,
         (AccelPedalMap_v2Idx_DataStore()));
      rtb_motohawk_prelookup = (AccelPedalMap_v2Idx_DataStore());
    }

    /* S-Function Block: <S133>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup, (real_T *) ((AccelPedalMap_v2Tbl_DataStore())),
         13);
      (AccelPedalMap_v2_DataStore()) = rtb_motohawk_interpolation_1d;
    }

    rtb_Merge_k = (Max_Slect_Tq_drive_DataStore()) *
      rtb_motohawk_interpolation_1d;
  }

  /* End of Switch: '<S130>/Switch' */
  /* Switch: '<S120>/Switch' incorporates:
   *  Gain: '<S120>/Gain'
   *  Logic: '<S120>/Logical Operator'
   *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration1'
   */
  if ((((uint8_T)(Reverse_TQ_Negative_Enable_DataStore())) != 0) &&
      (BuckyWagon_01_B.s157_Merge != 0.0)) {
    rtb_Merge_k = -rtb_Merge_k;
  }

  /* End of Switch: '<S120>/Switch' */

  /* Update for UnitDelay: '<S134>/Unit Delay' */
  BuckyWagon_01_DWork.s134_UnitDelay_DSTATE = rtb_Sum1_h;

  /* End of Outputs for SubSystem: '<S17>/Drive' */

  /* Product: '<S17>/Product1' */
  BuckyWagon_01_B.s17_Motor_Torque = (rtb_LogicalOperator2_e ? (real_T)
    rtb_BelowLoTarget : 0.0) * rtb_Merge_k;

  /* S-Function Block: <S122>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s122_motohawk_delta_time_DWORK1, NULL);
    rtb_Sum3 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S122>/Product' incorporates:
   *  MinMax: '<S122>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S122>/motohawk_calibration'
   */
  rtb_Sum3 /= (rtb_Sum3 >= (TorqueRequestLP_DataStore())) || rtIsNaN
    ((TorqueRequestLP_DataStore())) ? rtb_Sum3 : (TorqueRequestLP_DataStore());

  /* Sum: '<S143>/Sum1' incorporates:
   *  Constant: '<S143>/Constant'
   *  Product: '<S143>/Product'
   *  Product: '<S143>/Product1'
   *  Sum: '<S143>/Sum'
   *  UnitDelay: '<S143>/Unit Delay'
   */
  BuckyWagon_01_B.s143_Sum1 = (1.0 - rtb_Sum3) *
    BuckyWagon_01_DWork.s143_UnitDelay_DSTATE + BuckyWagon_01_B.s17_Motor_Torque
    * rtb_Sum3;

  /* If: '<S125>/If' incorporates:
   *  Inport: '<S160>/In1'
   *  Inport: '<S161>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S125>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S125>/override_enable'
   */
  if ((motor_torque_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S125>/NewValue' incorporates:
     *  ActionPort: '<S160>/Action Port'
     */
    BuckyWagon_01_B.s125_Merge = (motor_torque_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S160>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(53);
    }

    /* End of Outputs for SubSystem: '<S125>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S125>/OldValue' incorporates:
     *  ActionPort: '<S161>/Action Port'
     */
    BuckyWagon_01_B.s125_Merge = BuckyWagon_01_B.s143_Sum1;

    /* S-Function (motohawk_sfun_code_cover): '<S161>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/motohawk_override_abs/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(54);
    }

    /* End of Outputs for SubSystem: '<S125>/OldValue' */
  }

  /* End of If: '<S125>/If' */

  /* Outputs for Atomic SubSystem: '<S15>/A123 Battery Controller' */

  /* If: '<S29>/If' incorporates:
   *  Constant: '<S21>/Main Enable'
   *  Inport: '<S37>/In1'
   *  Inport: '<S38>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S29>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S29>/override_enable'
   */
  if ((hsc_bcm_enable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S29>/NewValue' incorporates:
     *  ActionPort: '<S37>/Action Port'
     */
    rtb_Merge_gc = ((uint8_T)(hsc_bcm_enable_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S37>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(5);
    }

    /* End of Outputs for SubSystem: '<S29>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S29>/OldValue' incorporates:
     *  ActionPort: '<S38>/Action Port'
     */
    rtb_Merge_gc = 1U;

    /* S-Function (motohawk_sfun_code_cover): '<S38>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(6);
    }

    /* End of Outputs for SubSystem: '<S29>/OldValue' */
  }

  /* End of If: '<S29>/If' */

  /* Switch: '<S21>/Switch' incorporates:
   *  Constant: '<S21>/Emergency Power Off Comand'
   *  Constant: '<S21>/Emergency Power Off Comand1'
   *  S-Function (motohawk_sfun_fault_action): '<S21>/motohawk_fault_action'
   */
  if (GetFaultActionStatus(4)) {
    BuckyWagon_01_B.s21_Switch = 1U;
  } else {
    BuckyWagon_01_B.s21_Switch = 0U;
  }

  /* End of Switch: '<S21>/Switch' */
  /* If: '<S30>/If' incorporates:
   *  Inport: '<S39>/In1'
   *  Inport: '<S40>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S30>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S30>/override_enable'
   */
  if ((hsc_bcm_epo_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S30>/NewValue' incorporates:
     *  ActionPort: '<S39>/Action Port'
     */
    rtb_Merge_o0 = ((uint8_T)(hsc_bcm_epo_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S39>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(7);
    }

    /* End of Outputs for SubSystem: '<S30>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S30>/OldValue' incorporates:
     *  ActionPort: '<S40>/Action Port'
     */
    rtb_Merge_o0 = BuckyWagon_01_B.s21_Switch;

    /* S-Function (motohawk_sfun_code_cover): '<S40>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(8);
    }

    /* End of Outputs for SubSystem: '<S30>/OldValue' */
  }

  /* End of If: '<S30>/If' */

  /* S-Function Block: <S36>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s36_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_c = ((real_T) delta) * 0.000001;
  }

  /* Abs: '<S28>/Abs' */
  rtb_Merge_k = fabs(BuckyWagon_01_B.s125_Merge);

  /* RelationalOperator: '<S28>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S28>/motohawk_calibration1'
   */
  rtb_RelationalOperator_k = (rtb_Merge_k < (GFD_Torque_Off_DataStore()));

  /* Switch: '<S36>/Switch' incorporates:
   *  Constant: '<S36>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S36>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S36>/motohawk_delta_time'
   *  Sum: '<S36>/Sum'
   */
  if (rtb_RelationalOperator_k) {
    rtb_Merge_k = rtb_motohawk_delta_time_c + GFD_Torque_Timer_DataStore();
  } else {
    rtb_Merge_k = 0.0;
  }

  /* End of Switch: '<S36>/Switch' */

  /* S-Function Block: <S35>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s35_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_j = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S35>/Switch' incorporates:
   *  Constant: '<S35>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S35>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S35>/motohawk_delta_time'
   *  Sum: '<S35>/Sum'
   */
  if (BuckyWagon_01_B.s123_LogicalOperator) {
    rtb_to65535_c = rtb_motohawk_delta_time_j +
      A123_GroundFaultDetector_Enable_Timer_DataStore();
  } else {
    rtb_to65535_c = 0.0;
  }

  /* End of Switch: '<S35>/Switch' */

  /* Logic: '<S28>/Logical Operator' incorporates:
   *  Constant: '<S33>/Constant'
   *  Constant: '<S34>/Constant'
   *  Product: '<S28>/Product'
   *  RelationalOperator: '<S33>/Compare'
   *  RelationalOperator: '<S34>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S28>/motohawk_calibration'
   */
  BuckyWagon_01_B.s28_LogicalOperator = ((((GFD_Enable_DataStore()) != 0.0) &&
    ((rtb_RelationalOperator_k ? rtb_Merge_k >= 1.0 : 0) != 0) && (rtb_to65535_c
    >= 5.0)));

  /* If: '<S31>/If' incorporates:
   *  Inport: '<S41>/In1'
   *  Inport: '<S42>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S31>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S31>/override_enable'
   */
  if ((hsc_bcm_leakage_enable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S31>/NewValue' incorporates:
     *  ActionPort: '<S41>/Action Port'
     */
    rtb_Merge_hg = (hsc_bcm_leakage_enable_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S41>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(9);
    }

    /* End of Outputs for SubSystem: '<S31>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S31>/OldValue' incorporates:
     *  ActionPort: '<S42>/Action Port'
     */
    rtb_Merge_hg = BuckyWagon_01_B.s28_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S42>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(10);
    }

    /* End of Outputs for SubSystem: '<S31>/OldValue' */
  }

  /* End of If: '<S31>/If' */

  /* If: '<S32>/If' incorporates:
   *  Inport: '<S43>/In1'
   *  Inport: '<S44>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S32>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S32>/override_enable'
   */
  if ((hsc_bcm_mainc_enable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S32>/NewValue' incorporates:
     *  ActionPort: '<S43>/Action Port'
     */
    rtb_Merge_nz = (hsc_bcm_mainc_enable_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S43>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(11);
    }

    /* End of Outputs for SubSystem: '<S32>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S32>/OldValue' incorporates:
     *  ActionPort: '<S44>/Action Port'
     */
    rtb_Merge_nz = BuckyWagon_01_B.s123_LogicalOperator;

    /* S-Function (motohawk_sfun_code_cover): '<S44>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/A123 Battery Controller/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(12);
    }

    /* End of Outputs for SubSystem: '<S32>/OldValue' */
  }

  /* End of If: '<S32>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S21>/Send CAN Messages3' */
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

  /* Saturate: '<S35>/Saturation' */
  rtb_Saturation_i = rtb_to65535_c >= 86400.0 ? 86400.0 : rtb_to65535_c <= 0.0 ?
    0.0 : rtb_to65535_c;

  /* S-Function (motohawk_sfun_data_write): '<S35>/motohawk_data_write' */
  /* Write to Data Storage as scalar: A123_GroundFaultDetector_Enable_Timer */
  {
    A123_GroundFaultDetector_Enable_Timer_DataStore() = rtb_Saturation_i;
  }

  /* Saturate: '<S36>/Saturation' */
  rtb_Saturation_l = rtb_Merge_k >= 86400.0 ? 86400.0 : rtb_Merge_k <= 0.0 ? 0.0
    : rtb_Merge_k;

  /* S-Function (motohawk_sfun_data_write): '<S36>/motohawk_data_write' */
  /* Write to Data Storage as scalar: GFD_Torque_Timer */
  {
    GFD_Torque_Timer_DataStore() = rtb_Saturation_l;
  }

  /* End of Outputs for SubSystem: '<S15>/A123 Battery Controller' */

  /* DataTypeConversion: '<S17>/Data Type Conversion1' */
  rtb_LogicalOperator12 = (BuckyWagon_01_B.s157_Merge != 0.0);

  /* DataTypeConversion: '<S17>/Data Type Conversion' */
  BuckyWagon_01_B.s17_InReverse = (real_T)rtb_LogicalOperator12;

  /* S-Function (motohawk_sfun_fault_action): '<S119>/motohawk_fault_action'
   *
   * Regarding '<S119>/motohawk_fault_action':
     Get Fault Action Status: PumpFan_Full
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_RelationalOperator_fj = GetFaultActionStatus(6);
  }

  /* Sum: '<S119>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration'
   */
  rtb_Sum3 = BuckyWagon_01_B.s221_Inverter_Temperature +
    (Inverter_Temp_Offset_DataStore());

  /* Product: '<S119>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration1'
   */
  rtb_Product_p = (real_T)((uint8_T)(Inverter_Temp_Enable_DataStore())) *
    rtb_Sum3;

  /* If: '<S308>/If' incorporates:
   *  Inport: '<S321>/In1'
   *  Inport: '<S322>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S308>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S308>/override_enable'
   */
  if ((Eaton_HV_Charger_Temperature_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S308>/NewValue' incorporates:
     *  ActionPort: '<S321>/Action Port'
     */
    rtb_Merge_k = (Eaton_HV_Charger_Temperature_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S321>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(111);
    }

    /* End of Outputs for SubSystem: '<S308>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S308>/OldValue' incorporates:
     *  ActionPort: '<S322>/Action Port'
     */
    rtb_Merge_k = BuckyWagon_01_B.s215_Eaton_HV_Charger_Temperature;

    /* S-Function (motohawk_sfun_code_cover): '<S322>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(112);
    }

    /* End of Outputs for SubSystem: '<S308>/OldValue' */
  }

  /* End of If: '<S308>/If' */

  /* Sum: '<S119>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration2'
   */
  rtb_Sum3 = rtb_Merge_k + (Charger_Temp_Offset_DataStore());

  /* Product: '<S119>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration3'
   */
  rtb_Merge_k = (real_T)((uint8_T)(Charger_Temp_Enable_DataStore())) * rtb_Sum3;

  /* Sum: '<S119>/Sum2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_data_read): '<S119>/motohawk_data_read'
   */
  rtb_Sum3 = Rotor_Temp_DataStore() + (Rotor_Temp_Offset_DataStore());

  /* Product: '<S119>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration5'
   */
  rtb_to65535_dx = (real_T)((uint8_T)(Rotor_Temp_Enable_DataStore())) * rtb_Sum3;

  /* Sum: '<S119>/Sum3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S119>/motohawk_data_read1'
   */
  rtb_Sum3 = Stator_Temp_DataStore() + (Stator_Temp_Offset_DataStore());

  /* Product: '<S119>/Product3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration7'
   */
  rtb_Product_h = (real_T)((uint8_T)(Stator_Temp_Enable_DataStore())) * rtb_Sum3;

  /* MinMax: '<S119>/MinMax' */
  rtb_Merge_k = (rtb_Product_p >= rtb_Merge_k) || rtIsNaN(rtb_Merge_k) ?
    rtb_Product_p : rtb_Merge_k;
  rtb_Merge_k = (rtb_Merge_k >= rtb_to65535_dx) || rtIsNaN(rtb_to65535_dx) ?
    rtb_Merge_k : rtb_to65535_dx;
  rtb_MinMax_e = (rtb_Merge_k >= rtb_Product_h) || rtIsNaN(rtb_Product_h) ?
    rtb_Merge_k : rtb_Product_h;

  /* Switch: '<S119>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S119>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_prelookup): '<S119>/motohawk_prelookup1'
   */
  if (rtb_RelationalOperator_fj) {
    BuckyWagon_01_B.s119_Switch1 = (Overheat_PumpFan_Speed_DataStore());
  } else {
    /* S-Function Block: <S119>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (Coolant_FanIn_DataStore()) = rtb_MinMax_e;
      (Coolant_FanIdx_DataStore()) = TablePrelookup_real_T(rtb_MinMax_e,
        (Coolant_FanIdxArr_DataStore()), 10, (Coolant_FanIdx_DataStore()));
      rtb_motohawk_prelookup1 = (Coolant_FanIdx_DataStore());
    }

    /* S-Function Block: <S119>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_FanDutyCycle = TableInterpolation1D_real_T(rtb_motohawk_prelookup1,
        (real_T *) ((Coolant_FanTbl_DataStore())), 10);
      (Coolant_Fan_DataStore()) = rtb_FanDutyCycle;
    }

    BuckyWagon_01_B.s119_Switch1 = rtb_FanDutyCycle;
  }

  /* End of Switch: '<S119>/Switch1' */

  /* Outputs for Atomic SubSystem: '<S15>/Analog Out' */

  /* If: '<S51>/If' incorporates:
   *  Constant: '<S45>/Constant1'
   *  Inport: '<S52>/In1'
   *  Inport: '<S53>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S51>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S51>/override_enable'
   */
  if ((Flash_Reverse_Lights_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S51>/NewValue' incorporates:
     *  ActionPort: '<S52>/Action Port'
     */
    BuckyWagon_01_B.s51_Merge = (Flash_Reverse_Lights_Ovr_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S52>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(13);
    }

    /* End of Outputs for SubSystem: '<S51>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S51>/OldValue' incorporates:
     *  ActionPort: '<S53>/Action Port'
     */
    BuckyWagon_01_B.s51_Merge = 0.0;

    /* S-Function (motohawk_sfun_code_cover): '<S53>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Cruise Control Indicator/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(14);
    }

    /* End of Outputs for SubSystem: '<S51>/OldValue' */
  }

  /* End of If: '<S51>/If' */

  /* Stateflow: '<S45>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S45>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S45>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S45>/motohawk_calibration3'
   */

  /* Gateway: Foreground/Actuators/Analog Out/Cruise Control Indicator/Chart */
  /* During: Foreground/Actuators/Analog Out/Cruise Control Indicator/Chart */
  if (BuckyWagon_01_DWork.s50_is_active_c6_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Actuators/Analog Out/Cruise Control Indicator/Chart */
    BuckyWagon_01_DWork.s50_is_active_c6_BuckyWagon_01 = 1U;

    /* Transition: '<S50>:6' */
    BuckyWagon_01_DWork.s50_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_Off;

    /* Entry 'Off': '<S50>:1' */
    BuckyWagon_01_B.s50_light = FALSE;
  } else {
    switch (BuckyWagon_01_DWork.s50_is_c6_BuckyWagon_01) {
     case BuckyWagon_01_IN_FlashOne:
      /* During 'FlashOne': '<S50>:2' */
      if (BuckyWagon_01_DWork.s50_timer >= ((uint16_T)(cCInd_OnTime_DataStore())))
      {
        /* Transition: '<S50>:8' */
        BuckyWagon_01_DWork.s50_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_OffOne;

        /* Entry 'OffOne': '<S50>:4' */
        BuckyWagon_01_B.s50_light = FALSE;
        BuckyWagon_01_DWork.s50_timer = 0U;
      } else {
        BuckyWagon_01_DWork.s50_timer = (uint16_T)(BuckyWagon_01_DWork.s50_timer
          + 1);
      }
      break;

     case BuckyWagon_01_IN_FlashTwo:
      /* During 'FlashTwo': '<S50>:3' */
      if (BuckyWagon_01_DWork.s50_timer >= ((uint16_T)(cCInd_OnTime_DataStore())))
      {
        /* Transition: '<S50>:10' */
        BuckyWagon_01_DWork.s50_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_OffTwo;

        /* Entry 'OffTwo': '<S50>:5' */
        BuckyWagon_01_B.s50_light = FALSE;
        BuckyWagon_01_DWork.s50_timer = 0U;
      } else {
        BuckyWagon_01_DWork.s50_timer = (uint16_T)(BuckyWagon_01_DWork.s50_timer
          + 1);
      }
      break;

     case BuckyWagon_01_IN_Off:
      /* During 'Off': '<S50>:1' */
      if (BuckyWagon_01_B.s51_Merge != 0.0) {
        /* Transition: '<S50>:7' */
        BuckyWagon_01_DWork.s50_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_FlashOne;

        /* Entry 'FlashOne': '<S50>:2' */
        BuckyWagon_01_B.s50_light = TRUE;
        BuckyWagon_01_DWork.s50_timer = 0U;
      }
      break;

     case BuckyWagon_01_IN_OffOne:
      /* During 'OffOne': '<S50>:4' */
      if (BuckyWagon_01_DWork.s50_timer >= ((uint16_T)(cCInd_ShortTime_DataStore
            ()))) {
        /* Transition: '<S50>:9' */
        BuckyWagon_01_DWork.s50_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_FlashTwo;

        /* Entry 'FlashTwo': '<S50>:3' */
        BuckyWagon_01_B.s50_light = TRUE;
        BuckyWagon_01_DWork.s50_timer = 0U;
      } else if (!(BuckyWagon_01_B.s51_Merge != 0.0)) {
        /* Transition: '<S50>:11' */
        /* Transition: '<S50>:14' */
        /* Transition: '<S50>:15' */
        BuckyWagon_01_DWork.s50_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_Off;

        /* Entry 'Off': '<S50>:1' */
        BuckyWagon_01_B.s50_light = FALSE;
      } else {
        BuckyWagon_01_DWork.s50_timer = (uint16_T)(BuckyWagon_01_DWork.s50_timer
          + 1);
      }
      break;

     case BuckyWagon_01_IN_OffTwo:
      /* During 'OffTwo': '<S50>:5' */
      if (BuckyWagon_01_DWork.s50_timer >= ((uint16_T)(cCInd_LongOff_DataStore())))
      {
        /* Transition: '<S50>:17' */
        /* Transition: '<S50>:18' */
        /* Transition: '<S50>:16' */
        BuckyWagon_01_DWork.s50_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_FlashOne;

        /* Entry 'FlashOne': '<S50>:2' */
        BuckyWagon_01_B.s50_light = TRUE;
        BuckyWagon_01_DWork.s50_timer = 0U;
      } else if (!(BuckyWagon_01_B.s51_Merge != 0.0)) {
        /* Transition: '<S50>:12' */
        /* Transition: '<S50>:13' */
        /* Transition: '<S50>:14' */
        /* Transition: '<S50>:15' */
        BuckyWagon_01_DWork.s50_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_Off;

        /* Entry 'Off': '<S50>:1' */
        BuckyWagon_01_B.s50_light = FALSE;
      } else {
        BuckyWagon_01_DWork.s50_timer = (uint16_T)(BuckyWagon_01_DWork.s50_timer
          + 1);
      }
      break;

     default:
      /* Transition: '<S50>:6' */
      BuckyWagon_01_DWork.s50_is_c6_BuckyWagon_01 = BuckyWagon_01_IN_Off;

      /* Entry 'Off': '<S50>:1' */
      BuckyWagon_01_B.s50_light = FALSE;
      break;
    }
  }

  /* End of Stateflow: '<S45>/Chart' */
  /* Logic: '<S49>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S49>/motohawk_calibration1'
   */
  rtb_RelationalOperator_k = ((((uint8_T)(RevIndType_DataStore())) != 0) &&
    (BuckyWagon_01_B.s17_InReverse != 0.0));

  /* Logic: '<S49>/Logical Operator3' incorporates:
   *  Logic: '<S49>/Logical Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S49>/motohawk_calibration1'
   */
  rtb_LogicalOperator_bd = ((BuckyWagon_01_B.s17_InReverse != 0.0) &&
    (!(((uint8_T)(RevIndType_DataStore())) != 0)));

  /* Outputs for Enabled SubSystem: '<S49>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S64>/Enable'
   */
  if (rtb_LogicalOperator_bd) {
    if (!BuckyWagon_01_DWork.s49_EnabledSubsystem_MODE) {
      /* InitializeConditions for UnitDelay: '<S64>/Unit Delay' */
      BuckyWagon_01_DWork.s64_UnitDelay_DSTATE = 0;
      BuckyWagon_01_DWork.s49_EnabledSubsystem_MODE = TRUE;
    }

    /* Switch: '<S64>/Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S49>/motohawk_calibration2'
     *  UnitDelay: '<S64>/Unit Delay'
     */
    if (BuckyWagon_01_DWork.s64_UnitDelay_DSTATE > 0) {
      rtb_Switch_d = BuckyWagon_01_DWork.s64_UnitDelay_DSTATE;
    } else {
      rtb_Switch_d = ((int16_T)(ReverseIndFlash_Period_DataStore()));
    }

    /* End of Switch: '<S64>/Switch' */

    /* Sum: '<S64>/Sum' incorporates:
     *  Constant: '<S64>/Constant'
     */
    rtb_Switch_d--;

    /* RelationalOperator: '<S64>/Relational Operator' incorporates:
     *  Gain: '<S64>/Gain'
     *  S-Function (motohawk_sfun_calibration): '<S49>/motohawk_calibration2'
     */
    BuckyWagon_01_B.s64_RelationalOperator = (((((int16_T)
      (ReverseIndFlash_Period_DataStore())) >> 1) <= rtb_Switch_d));

    /* Update for UnitDelay: '<S64>/Unit Delay' */
    BuckyWagon_01_DWork.s64_UnitDelay_DSTATE = rtb_Switch_d;
  } else {
    if (BuckyWagon_01_DWork.s49_EnabledSubsystem_MODE) {
      BuckyWagon_01_DWork.s49_EnabledSubsystem_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S49>/Enabled Subsystem' */

  /* Logic: '<S22>/Logical Operator3' incorporates:
   *  Logic: '<S49>/Logical Operator1'
   *  Logic: '<S49>/Logical Operator2'
   */
  rtb_RelationalOperator_k = (BuckyWagon_01_B.s50_light ||
    (rtb_RelationalOperator_k || (rtb_LogicalOperator_bd &&
    BuckyWagon_01_B.s64_RelationalOperator)));

  /* If: '<S54>/If' incorporates:
   *  Inport: '<S55>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S54>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S54>/override_enable'
   */
  if ((RevOut__ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S54>/NewValue' incorporates:
     *  ActionPort: '<S55>/Action Port'
     */
    rtb_RelationalOperator_k = (RevOut__new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S55>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1/Override in Engineering Units/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(15);
    }

    /* End of Outputs for SubSystem: '<S54>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S54>/OldValue' incorporates:
     *  ActionPort: '<S56>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S56>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization1/Override in Engineering Units/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(16);
    }

    /* End of Outputs for SubSystem: '<S54>/OldValue' */
  }

  /* End of If: '<S54>/If' */

  /* Logic: '<S46>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S46>/0 = No Inversion 1 = Inversion'
   */
  BuckyWagon_01_B.s46_LogicalOperator = rtb_RelationalOperator_k ^
    (RevOut__Polarity_DataStore());

  /* Saturate: '<S22>/Saturation' */
  rtb_Merge_k = BuckyWagon_01_B.s119_Switch1 >= 100.0 ? 100.0 :
    BuckyWagon_01_B.s119_Switch1 <= -100.0 ? -100.0 :
    BuckyWagon_01_B.s119_Switch1;

  /* If: '<S61>/If' incorporates:
   *  Inport: '<S62>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S61>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S61>/override_enable'
   */
  if ((FanOut_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S61>/NewValue' incorporates:
     *  ActionPort: '<S62>/Action Port'
     */
    rtb_Merge_k = (FanOut_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S62>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(19);
    }

    /* End of Outputs for SubSystem: '<S61>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S61>/OldValue' incorporates:
     *  ActionPort: '<S63>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S63>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/PWM Characterization2/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(20);
    }

    /* End of Outputs for SubSystem: '<S61>/OldValue' */
  }

  /* End of If: '<S61>/If' */

  /* Product: '<S48>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S48>/motohawk_calibration'
   */
  rtb_Merge_k *= (FanOut_Gain_DataStore());

  /* Sum: '<S48>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S48>/motohawk_calibration1'
   */
  rtb_Merge_k += (FanOut_Offset_DataStore());

  /* MinMax: '<S60>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S48>/motohawk_calibration2'
   */
  rtb_Merge_k = (rtb_Merge_k >= (FanOut_MinLimit_DataStore())) || rtIsNaN
    ((FanOut_MinLimit_DataStore())) ? rtb_Merge_k : (FanOut_MinLimit_DataStore());

  /* MinMax: '<S60>/MinMax1' incorporates:
   *  MinMax: '<S60>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S48>/motohawk_calibration3'
   */
  BuckyWagon_01_B.s60_MinMax1 = (rtb_Merge_k <= (FanOut_MaxLimit_DataStore())) ||
    rtIsNaN((FanOut_MaxLimit_DataStore())) ? rtb_Merge_k :
    (FanOut_MaxLimit_DataStore());

  /* DataTypeConversion: '<S48>/Data Type Conversion3' incorporates:
   *  Gain: '<S48>/Convert to integer 14-bit PWM resolution'
   */
  rtb_Merge_k = 40.95 * BuckyWagon_01_B.s60_MinMax1;
  if (rtb_Merge_k < 32768.0) {
    if (rtb_Merge_k >= -32768.0) {
      rtb_DataTypeConversion3 = (int16_T)rtb_Merge_k;
    } else {
      rtb_DataTypeConversion3 = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3 = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S48>/Data Type Conversion3' */
  /* DataTypeConversion: '<S48>/Data Type Conversion2' incorporates:
   *  Gain: '<S48>/Convert to integer 0.01Hz resolution'
   *  S-Function (motohawk_sfun_calibration): '<S48>/motohawk_calibration4'
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

  /* End of DataTypeConversion: '<S48>/Data Type Conversion2' */

  /* If: '<S57>/If' incorporates:
   *  Inport: '<S58>/In1'
   *  Inport: '<S59>/In1'
   *  Logic: '<S22>/Logical Operator'
   *  S-Function (motohawk_sfun_calibration): '<S57>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S57>/override_enable'
   */
  if ((InhibitDCDC_Out__ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S57>/NewValue' incorporates:
     *  ActionPort: '<S58>/Action Port'
     */
    rtb_RelationalOperator_k = (InhibitDCDC_Out__new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S58>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2/Override in Engineering Units/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(17);
    }

    /* End of Outputs for SubSystem: '<S57>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S57>/OldValue' incorporates:
     *  ActionPort: '<S59>/Action Port'
     */
    rtb_RelationalOperator_k = !rtb_LogicalOperator5_k;

    /* S-Function (motohawk_sfun_code_cover): '<S59>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Analog Out/Discrete Actuator Characterization2/Override in Engineering Units/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(18);
    }

    /* End of Outputs for SubSystem: '<S57>/OldValue' */
  }

  /* End of If: '<S57>/If' */

  /* Logic: '<S47>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S47>/0 = No Inversion 1 = Inversion'
   */
  BuckyWagon_01_B.s47_LogicalOperator = rtb_RelationalOperator_k ^
    (InhibitDCDC_Out__Polarity_DataStore());

  /* RelationalOperator: '<S22>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S22>/motohawk_calibration1'
   */
  rtb_RelationalOperator_k = (BuckyWagon_01_B.s353_Merge >
    (Brake_light_On_Setpoint_DataStore()));

  /* Logic: '<S22>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S22>/motohawk_calibration2'
   */
  rtb_LogicalOperator1_p = ((rtb_RelationalOperator_k &&
    (Enable_Brake_Light_Out_DataStore())));

  /* Update for S-Function (motohawk_sfun_dout): '<S22>/motohawk_dout1' */

  /* S-Function Block: DOut177p001 */
  {
    DOut177p001_DiscreteOutput_Set(BuckyWagon_01_B.s46_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S22>/motohawk_pwm2' */

  /* S-Function Block: Fan_Pin_PWMOutput */
  Fan_Pin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_h,
    rtb_DataTypeConversion3, 0, 1);

  /* Update for S-Function (motohawk_sfun_dout): '<S22>/motohawk_dout2' */

  /* S-Function Block: DOut178p001 */
  {
    DOut178p001_DiscreteOutput_Set(BuckyWagon_01_B.s47_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S22>/motohawk_dout3' */

  /* S-Function Block: DOut179p001 */
  {
    DOut179p001_DiscreteOutput_Set(rtb_LogicalOperator1_p);
  }

  /* End of Outputs for SubSystem: '<S15>/Analog Out' */
  /* RelationalOperator: '<S121>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration'
   */
  rtb_RelationalOperator_k = (BuckyWagon_01_B.s353_Merge >
    (Brake_Active_Threshold_DataStore()));

  /* Abs: '<S121>/Abs' */
  rtb_Merge_k = fabs(BuckyWagon_01_B.s222_Abs);

  /* RelationalOperator: '<S121>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration15'
   */
  rtb_LogicalOperator_bd = (BuckyWagon_01_B.s353_Merge > (hardBrakeLev_DataStore
                             ()));

  /* Stateflow: '<S121>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration16'
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration17'
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration18'
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration19'
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration3'
   */

  /* Gateway: Foreground/Control Strategy/EHPAS_PercentControl/Chart */
  /* During: Foreground/Control Strategy/EHPAS_PercentControl/Chart */
  if (BuckyWagon_01_DWork.s139_is_active_c9_BuckyWagon_01 == 0) {
    /* Entry: Foreground/Control Strategy/EHPAS_PercentControl/Chart */
    BuckyWagon_01_DWork.s139_is_active_c9_BuckyWagon_01 = 1U;

    /* Transition: '<S139>:25' */
    BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_KeyUp;

    /* Entry 'KeyUp': '<S139>:23' */
    BuckyWagon_01_DWork.s139_counts = 0U;
  } else {
    switch (BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01) {
     case BuckyWagon_01_IN_Braking:
      /* During 'Braking': '<S139>:76' */
      if ((!rtb_RelationalOperator_k) && (rtb_Merge_k < (creepSpeed_DataStore())))
      {
        /* Transition: '<S139>:79' */
        BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S139>:18' */
        /* Transition: '<S139>:34' */
        BuckyWagon_01_DWork.s139_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S139>:31' */
        BuckyWagon_01_DWork.s139_counts = 0U;
      } else if (rtb_RelationalOperator_k && (rtb_Merge_k <
                  (creepSpeed_DataStore()))) {
        /* Transition: '<S139>:46' */
        BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_SlowingDown;
      } else if ((!rtb_RelationalOperator_k) && ((real_T)
                  BuckyWagon_01_DWork.s139_counts > (minPumpRunTime_DataStore())
                  * 200.0)) {
        /* Transition: '<S139>:92' */
        BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S139>:33' */
        BuckyWagon_01_DWork.s139_is_NormalDriving = BuckyWagon_01_IN_Driving;
      } else {
        BuckyWagon_01_DWork.s139_counts = BuckyWagon_01_DWork.s139_counts + 1U;
        BuckyWagon_01_B.s139_PumpState = 3U;
      }
      break;

     case BuckyWagon_01_IN_Idle:
      /* During 'Idle': '<S139>:39' */
      if (rtb_Merge_k > (stopSpeed_DataStore())) {
        /* Transition: '<S139>:48' */
        BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S139>:18' */
        /* Transition: '<S139>:34' */
        BuckyWagon_01_DWork.s139_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S139>:31' */
        BuckyWagon_01_DWork.s139_counts = 0U;
      } else if (rtb_LogicalOperator12 || rtb_RelationalOperator_k) {
        /* Transition: '<S139>:112' */
        BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S139>:18' */
        /* Transition: '<S139>:34' */
        BuckyWagon_01_DWork.s139_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S139>:31' */
        BuckyWagon_01_DWork.s139_counts = 0U;
      } else if (rtb_Merge_k > (creepSpeed_DataStore())) {
        /* Transition: '<S139>:113' */
        BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S139>:33' */
        BuckyWagon_01_DWork.s139_is_NormalDriving = BuckyWagon_01_IN_Driving;
      } else {
        BuckyWagon_01_B.s139_PumpState = 0U;
      }
      break;

     case BuckyWagon_01_IN_KeyUp:
      /* During 'KeyUp': '<S139>:23' */
      if ((rtb_Merge_k > (creepSpeed_DataStore())) &&
          (BuckyWagon_01_DWork.s139_counts > (uint32_T)(((uint16_T)
             (KeyOnRuntime_Sec_DataStore())) * 200))) {
        /* Transition: '<S139>:37' */
        BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S139>:33' */
        BuckyWagon_01_DWork.s139_is_NormalDriving = BuckyWagon_01_IN_Driving;
      } else if ((rtb_Merge_k > (stopSpeed_DataStore())) && (rtb_Merge_k <
                  (creepSpeed_DataStore()))) {
        /* Transition: '<S139>:109' */
        BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S139>:18' */
        /* Transition: '<S139>:34' */
        BuckyWagon_01_DWork.s139_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S139>:31' */
        BuckyWagon_01_DWork.s139_counts = 0U;
      } else if (rtb_LogicalOperator12) {
        /* Transition: '<S139>:43' */
        BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S139>:18' */
        /* Transition: '<S139>:34' */
        BuckyWagon_01_DWork.s139_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S139>:31' */
        BuckyWagon_01_DWork.s139_counts = 0U;
      } else if ((rtb_Merge_k < (stopSpeed_DataStore())) &&
                 (BuckyWagon_01_DWork.s139_counts > (uint32_T)(((uint16_T)
                    (KeyOnRuntime_Sec_DataStore())) * 200))) {
        /* Transition: '<S139>:44' */
        BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Idle;
      } else {
        BuckyWagon_01_DWork.s139_counts = BuckyWagon_01_DWork.s139_counts + 1U;
        BuckyWagon_01_B.s139_PumpState = 4U;
      }
      break;

     case BuckyWagon_01_IN_LowSpeedManeuvering:
      /* During 'LowSpeedManeuvering': '<S139>:18' */
      if ((rtb_Merge_k > (creepSpeed_DataStore())) && ((real_T)
           BuckyWagon_01_DWork.s139_counts > (minPumpRunTime_DataStore()) *
           200.0)) {
        /* Transition: '<S139>:57' */
        BuckyWagon_01_DWork.s139_is_LowSpeedManeuvering = (uint8_T)0U;
        BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S139>:33' */
        BuckyWagon_01_DWork.s139_is_NormalDriving = BuckyWagon_01_IN_Driving;
      } else if (BuckyWagon_01_DWork.s139_counts > (uint32_T)(((uint16_T)
                   (LowSpeedManeuverRuntime_DataStore())) * 200)) {
        /* Transition: '<S139>:47' */
        BuckyWagon_01_DWork.s139_is_LowSpeedManeuvering = (uint8_T)0U;
        BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Idle;
      } else {
        BuckyWagon_01_B.s139_PumpState = 1U;
        switch (BuckyWagon_01_DWork.s139_is_LowSpeedManeuvering) {
         case BuckyWagon_01_IN_Creeping:
          /* During 'Creeping': '<S139>:31' */
          if (rtb_LogicalOperator12 || rtb_RelationalOperator_k) {
            /* Transition: '<S139>:53' */
            BuckyWagon_01_DWork.s139_is_LowSpeedManeuvering =
              BuckyWagon_01_IN_Reversing;

            /* Entry 'Reversing': '<S139>:32' */
            BuckyWagon_01_DWork.s139_counts = 0U;
          } else {
            BuckyWagon_01_DWork.s139_counts = BuckyWagon_01_DWork.s139_counts +
              1U;
          }
          break;

         case BuckyWagon_01_IN_Reversing:
          /* During 'Reversing': '<S139>:32' */
          if ((!rtb_LogicalOperator12) && (!rtb_RelationalOperator_k)) {
            /* Transition: '<S139>:54' */
            BuckyWagon_01_DWork.s139_is_LowSpeedManeuvering =
              BuckyWagon_01_IN_Creeping;

            /* Entry 'Creeping': '<S139>:31' */
            BuckyWagon_01_DWork.s139_counts = 0U;
          }
          break;

         default:
          /* Transition: '<S139>:34' */
          BuckyWagon_01_DWork.s139_is_LowSpeedManeuvering =
            BuckyWagon_01_IN_Creeping;

          /* Entry 'Creeping': '<S139>:31' */
          BuckyWagon_01_DWork.s139_counts = 0U;
          break;
        }
      }
      break;

     case BuckyWagon_01_IN_NormalDriving:
      /* During 'NormalDriving': '<S139>:20' */
      if ((BuckyWagon_01_DWork.s139_brakeCounts > (brakeTime_sec_DataStore())) ||
          rtb_LogicalOperator_bd) {
        /* Transition: '<S139>:88' */
        BuckyWagon_01_DWork.s139_is_NormalDriving = (uint8_T)0U;
        BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Braking;

        /* Entry 'Braking': '<S139>:76' */
        BuckyWagon_01_DWork.s139_counts = 0U;
      } else {
        switch (BuckyWagon_01_DWork.s139_is_NormalDriving) {
         case BuckyWagon_01_IN_Driving:
          /* During 'Driving': '<S139>:21' */
          if (rtb_RelationalOperator_k) {
            /* Transition: '<S139>:81' */
            BuckyWagon_01_DWork.s139_is_NormalDriving =
              BuckyWagon_01_IN_DrivingAndBrake;

            /* Entry 'DrivingAndBrake': '<S139>:74' */
            BuckyWagon_01_DWork.s139_brakeCounts = 0.0;
          } else {
            BuckyWagon_01_B.s139_PumpState = 2U;
          }
          break;

         case BuckyWagon_01_IN_DrivingAndBrake:
          /* During 'DrivingAndBrake': '<S139>:74' */
          if (!rtb_RelationalOperator_k) {
            /* Transition: '<S139>:82' */
            BuckyWagon_01_DWork.s139_is_NormalDriving = BuckyWagon_01_IN_Driving;
          } else {
            BuckyWagon_01_DWork.s139_brakeCounts =
              BuckyWagon_01_DWork.s139_brakeCounts + 1.0;
            BuckyWagon_01_B.s139_PumpState = 5U;
          }
          break;

         default:
          /* Transition: '<S139>:33' */
          BuckyWagon_01_DWork.s139_is_NormalDriving = BuckyWagon_01_IN_Driving;
          break;
        }
      }
      break;

     case BuckyWagon_01_IN_SlowingDown:
      /* During 'SlowingDown': '<S139>:96' */
      if (rtb_Merge_k < (stopSpeed_DataStore())) {
        /* Transition: '<S139>:97' */
        BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Stopping;
      } else if ((!rtb_RelationalOperator_k) || ((real_T)
                  BuckyWagon_01_DWork.s139_counts < (minPumpRunTime_DataStore())
                  * 200.0)) {
        /* Transition: '<S139>:100' */
        BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S139>:18' */
        /* Transition: '<S139>:34' */
        BuckyWagon_01_DWork.s139_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S139>:31' */
        BuckyWagon_01_DWork.s139_counts = 0U;
      } else if ((rtb_Merge_k > (creepSpeed_DataStore())) && ((real_T)
                  BuckyWagon_01_DWork.s139_counts > (minPumpRunTime_DataStore())
                  * 200.0)) {
        /* Transition: '<S139>:101' */
        BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_NormalDriving;

        /* Transition: '<S139>:33' */
        BuckyWagon_01_DWork.s139_is_NormalDriving = BuckyWagon_01_IN_Driving;
      } else if ((real_T)BuckyWagon_01_DWork.s139_counts >
                 (minPumpRunTime_DataStore()) * 200.0) {
        /* Transition: '<S139>:104' */
        BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_LowSpeedManeuvering;

        /* Entry 'LowSpeedManeuvering': '<S139>:18' */
        /* Transition: '<S139>:34' */
        BuckyWagon_01_DWork.s139_is_LowSpeedManeuvering =
          BuckyWagon_01_IN_Creeping;

        /* Entry 'Creeping': '<S139>:31' */
        BuckyWagon_01_DWork.s139_counts = 0U;
      } else {
        BuckyWagon_01_DWork.s139_counts = BuckyWagon_01_DWork.s139_counts + 1U;
        BuckyWagon_01_B.s139_PumpState = 6U;
      }
      break;

     case BuckyWagon_01_IN_Stopping:
      /* During 'Stopping': '<S139>:98' */
      if ((real_T)BuckyWagon_01_DWork.s139_counts > (minPumpRunTime_DataStore())
          * 200.0) {
        /* Transition: '<S139>:106' */
        BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_Idle;
      } else if (rtb_Merge_k > (stopSpeed_DataStore())) {
        /* Transition: '<S139>:107' */
        BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 =
          BuckyWagon_01_IN_SlowingDown;
      } else {
        BuckyWagon_01_DWork.s139_counts = BuckyWagon_01_DWork.s139_counts + 1U;
        BuckyWagon_01_B.s139_PumpState = 7U;
      }
      break;

     default:
      /* Transition: '<S139>:25' */
      BuckyWagon_01_DWork.s139_is_c9_BuckyWagon_01 = BuckyWagon_01_IN_KeyUp;

      /* Entry 'KeyUp': '<S139>:23' */
      BuckyWagon_01_DWork.s139_counts = 0U;
      break;
    }
  }

  /* End of Stateflow: '<S121>/Chart' */
  /* If: '<S140>/If' incorporates:
   *  Inport: '<S141>/In1'
   *  Inport: '<S142>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S140>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S140>/override_enable'
   */
  if ((EHPAS_PumpStateEnable_ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S140>/NewValue' incorporates:
     *  ActionPort: '<S141>/Action Port'
     */
    rtb_Compare_k = ((uint8_T)(EHPAS_PumpStateEnable_ovr_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S141>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(47);
    }

    /* End of Outputs for SubSystem: '<S140>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S140>/OldValue' incorporates:
     *  ActionPort: '<S142>/Action Port'
     */
    rtb_Compare_k = BuckyWagon_01_B.s139_PumpState;

    /* S-Function (motohawk_sfun_code_cover): '<S142>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Control Strategy/EHPAS_PercentControl/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(48);
    }

    /* End of Outputs for SubSystem: '<S140>/OldValue' */
  }

  /* End of If: '<S140>/If' */

  /* MultiPortSwitch: '<S121>/Multiport Switch1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration20'
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration21'
   *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration9'
   */
  switch (rtb_Compare_k) {
   case 0:
    rtb_Product_h = (EHPAS_IdleEn_DataStore());
    break;

   case 1:
    rtb_Product_h = (EHPAS_lowSpeedEn_DataStore());
    break;

   case 2:
    rtb_Product_h = (EHPAS_driveEn_DataStore());
    break;

   case 3:
    rtb_Product_h = (EHPAS_brakeEn_DataStore());
    break;

   case 4:
    rtb_Product_h = (EHPAS_keyUpEn_DataStore());
    break;

   case 5:
    rtb_Product_h = (EHPAS_driveNbrakeEn_DataStore());
    break;

   case 6:
    rtb_Product_h = (EHPAS_slowingEn_DataStore());
    break;

   default:
    rtb_Product_h = (EHPAS_stoppingEn_DataStore());
    break;
  }

  /* End of MultiPortSwitch: '<S121>/Multiport Switch1' */

  /* Product: '<S17>/Product' */
  rtb_Merge_k = (real_T)rtb_UnitDelay_if * rtb_Product_h;

  /* Outputs for Enabled SubSystem: '<S15>/EHPAS Power Steering Pump Controller' incorporates:
   *  EnablePort: '<S23>/Enable1'
   */
  /* S-Function (motohawk_sfun_calibration): '<S15>/motohawk_calibration2' */
  if ((Enable_PowerSteering_CAN_Msg_DataStore())) {
    /* MinMax: '<S23>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S23>/motohawk_calibration2'
     */
    rtb_MinMax_a = (rtb_Merge_k <= (EHPAS_Performance_Limit_DataStore())) ||
      rtIsNaN((EHPAS_Performance_Limit_DataStore())) ? rtb_Merge_k :
      (EHPAS_Performance_Limit_DataStore());

    /* Switch: '<S23>/Switch' incorporates:
     *  Constant: '<S23>/Operating Mode - Activate'
     *  Constant: '<S23>/Operating Mode - Disabled'
     *  Constant: '<S65>/Constant'
     *  RelationalOperator: '<S65>/Compare'
     */
    if (rtb_Merge_k > 0.0) {
      BuckyWagon_01_B.s23_OperatingMode_cmd = 1U;
    } else {
      BuckyWagon_01_B.s23_OperatingMode_cmd = 0U;
    }

    /* End of Switch: '<S23>/Switch' */
    /* If: '<S66>/If' incorporates:
     *  Inport: '<S67>/In1'
     *  Inport: '<S68>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S66>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S66>/override_enable'
     */
    if ((EHPAS_Operating_Mode_Cmd_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S66>/NewValue' incorporates:
       *  ActionPort: '<S67>/Action Port'
       */
      rtb_Merge_j0 = ((uint8_T)(EHPAS_Operating_Mode_Cmd_new_DataStore()));

      /* S-Function (motohawk_sfun_code_cover): '<S67>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller/motohawk_override_abs4/NewValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(21);
      }

      /* End of Outputs for SubSystem: '<S66>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S66>/OldValue' incorporates:
       *  ActionPort: '<S68>/Action Port'
       */
      rtb_Merge_j0 = BuckyWagon_01_B.s23_OperatingMode_cmd;

      /* S-Function (motohawk_sfun_code_cover): '<S68>/motohawk_code_coverage' */
      /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EHPAS Power Steering Pump Controller/motohawk_override_abs4/OldValue */
      {
        extern void MH_CodeCovered(uint32_T idx);
        MH_CodeCovered(22);
      }

      /* End of Outputs for SubSystem: '<S66>/OldValue' */
    }

    /* End of If: '<S66>/If' */

    /* S-Function (motohawk_sfun_send_canmsgs): '<S23>/Send CAN Messages' */
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

          if (rtb_MinMax_a < 0.0000000000F) {
            tmp1 = (uint8_T)(0U);
          } else if (rtb_MinMax_a > 102.0000000000F) {
            tmp1 = (uint8_T)(255U);
          } else {
            tmp1 = (uint8_T)(rtb_MinMax_a * (2.5000000000F));
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

  /* End of S-Function (motohawk_sfun_calibration): '<S15>/motohawk_calibration2' */
  /* End of Outputs for SubSystem: '<S15>/EHPAS Power Steering Pump Controller' */

  /* Switch: '<S119>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S119>/motohawk_interpolation_1d'
   *  S-Function (motohawk_sfun_prelookup): '<S119>/motohawk_prelookup'
   */
  if (rtb_RelationalOperator_fj) {
    BuckyWagon_01_B.s119_Switch = (Overheat_PumpFan_Speed_DataStore());
  } else {
    /* S-Function Block: <S119>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (Coolant_PumpIn_DataStore()) = rtb_MinMax_e;
      (Coolant_PumpIdx_DataStore()) = TablePrelookup_real_T(rtb_MinMax_e,
        (Coolant_PumpIdxArr_DataStore()), 10, (Coolant_PumpIdx_DataStore()));
      rtb_motohawk_prelookup_m = (Coolant_PumpIdx_DataStore());
    }

    /* S-Function Block: <S119>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_CoolantPumpSpeed = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_m, (real_T *) ((Coolant_PumpTbl_DataStore())),
         10);
      (Coolant_Pump_DataStore()) = rtb_CoolantPumpSpeed;
    }

    BuckyWagon_01_B.s119_Switch = rtb_CoolantPumpSpeed;
  }

  /* End of Switch: '<S119>/Switch' */

  /* Outputs for Atomic SubSystem: '<S15>/EMP Coolant Pump' */

  /* Saturate: '<S24>/Saturation' */
  rtb_Merge_k = BuckyWagon_01_B.s119_Switch >= 100.0 ? 100.0 :
    BuckyWagon_01_B.s119_Switch <= 0.0 ? 0.0 : BuckyWagon_01_B.s119_Switch;

  /* If: '<S69>/If' incorporates:
   *  Inport: '<S71>/In1'
   *  Inport: '<S72>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S69>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S69>/override_enable'
   */
  if ((EMP_Speed_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S69>/NewValue' incorporates:
     *  ActionPort: '<S71>/Action Port'
     */
    BuckyWagon_01_B.s69_Merge = (EMP_Speed_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S71>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(23);
    }

    /* End of Outputs for SubSystem: '<S69>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S69>/OldValue' incorporates:
     *  ActionPort: '<S72>/Action Port'
     */
    BuckyWagon_01_B.s69_Merge = rtb_Merge_k;

    /* S-Function (motohawk_sfun_code_cover): '<S72>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(24);
    }

    /* End of Outputs for SubSystem: '<S69>/OldValue' */
  }

  /* End of If: '<S69>/If' */

  /* If: '<S70>/If' incorporates:
   *  Constant: '<S24>/Operating Mode: Normal'
   *  Inport: '<S73>/In1'
   *  Inport: '<S74>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S70>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S70>/override_enable'
   */
  if ((EMP_Mode_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S70>/NewValue' incorporates:
     *  ActionPort: '<S73>/Action Port'
     */
    rtb_Merge_ht = ((uint8_T)(EMP_Mode_new_DataStore()));

    /* S-Function (motohawk_sfun_code_cover): '<S73>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs4/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(25);
    }

    /* End of Outputs for SubSystem: '<S70>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S70>/OldValue' incorporates:
     *  ActionPort: '<S74>/Action Port'
     */
    rtb_Merge_ht = 1U;

    /* S-Function (motohawk_sfun_code_cover): '<S74>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EMP Coolant Pump/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(26);
    }

    /* End of Outputs for SubSystem: '<S70>/OldValue' */
  }

  /* End of If: '<S70>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S24>/Send CAN Messages' */
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
        if (BuckyWagon_01_B.s69_Merge < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (BuckyWagon_01_B.s69_Merge > 127.5000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(BuckyWagon_01_B.s69_Merge * (2.0000000000F));
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

  /* End of Outputs for SubSystem: '<S15>/EMP Coolant Pump' */

  /* Outputs for Atomic SubSystem: '<S15>/EMP Cooling Fan' */

  /* Saturate: '<S25>/Saturation' */
  rtb_Merge_k = BuckyWagon_01_B.s119_Switch1 >= 100.0 ? 100.0 :
    BuckyWagon_01_B.s119_Switch1 <= 0.0 ? 0.0 : BuckyWagon_01_B.s119_Switch1;

  /* If: '<S75>/If' incorporates:
   *  Inport: '<S76>/In1'
   *  Inport: '<S77>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S75>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S75>/override_enable'
   */
  if ((EMP_Fan_Speed_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S75>/NewValue' incorporates:
     *  ActionPort: '<S76>/Action Port'
     */
    BuckyWagon_01_B.s75_Merge = (EMP_Fan_Speed_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S76>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EMP Cooling Fan/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(27);
    }

    /* End of Outputs for SubSystem: '<S75>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S75>/OldValue' incorporates:
     *  ActionPort: '<S77>/Action Port'
     */
    BuckyWagon_01_B.s75_Merge = rtb_Merge_k;

    /* S-Function (motohawk_sfun_code_cover): '<S77>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/EMP Cooling Fan/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(28);
    }

    /* End of Outputs for SubSystem: '<S75>/OldValue' */
  }

  /* End of If: '<S75>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S25>/Send CAN Messages' */
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
        if (BuckyWagon_01_B.s75_Merge < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (BuckyWagon_01_B.s75_Merge > 127.5000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(BuckyWagon_01_B.s75_Merge * (2.0000000000F));
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

  /* End of Outputs for SubSystem: '<S15>/EMP Cooling Fan' */
  /* If: '<S78>/If' incorporates:
   *  Inport: '<S83>/In1'
   *  Inport: '<S84>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration'
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
      MH_CodeCovered(29);
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
      MH_CodeCovered(30);
    }

    /* End of Outputs for SubSystem: '<S78>/OldValue' */
  }

  /* End of If: '<S78>/If' */

  /* If: '<S79>/If' incorporates:
   *  Inport: '<S85>/In1'
   *  Inport: '<S86>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration1'
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
      MH_CodeCovered(31);
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
      MH_CodeCovered(32);
    }

    /* End of Outputs for SubSystem: '<S79>/OldValue' */
  }

  /* End of If: '<S79>/If' */

  /* If: '<S80>/If' incorporates:
   *  Constant: '<S26>/Constant3'
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
      MH_CodeCovered(33);
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
      MH_CodeCovered(34);
    }

    /* End of Outputs for SubSystem: '<S80>/OldValue' */
  }

  /* End of If: '<S80>/If' */

  /* RelationalOperator: '<S26>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration2'
   */
  rtb_RelationalOperator_k = (BuckyWagon_01_B.s230_Merge >=
    (ChargeComplete_SOC_DataStore()));

  /* If: '<S81>/If' incorporates:
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
      MH_CodeCovered(35);
    }

    /* End of Outputs for SubSystem: '<S81>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S81>/OldValue' incorporates:
     *  ActionPort: '<S90>/Action Port'
     */
    BuckyWagon_01_B.s81_Merge = rtb_RelationalOperator_k;

    /* S-Function (motohawk_sfun_code_cover): '<S90>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/Eaton HV Charger/motohawk_override_abs4/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(36);
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
      MH_CodeCovered(37);
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
      MH_CodeCovered(38);
    }

    /* End of Outputs for SubSystem: '<S82>/OldValue' */
  }

  /* End of If: '<S82>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S26>/Send CAN Messages' */
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
        tmp1 = (uint8_T)(BuckyWagon_01_B.s81_Merge);
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

  /* UnitDelay: '<S97>/Output' */
  rtb_Compare_k = BuckyWagon_01_DWork.s97_Output_DSTATE;

  /* Switch: '<S93>/Switch' incorporates:
   *  DataTypeConversion: '<S93>/Data Type Conversion'
   *  Product: '<S93>/Product'
   *  Rounding: '<S93>/Rounding Function'
   *  S-Function (motohawk_sfun_calibration): '<S93>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S93>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S93>/motohawk_calibration3'
   */
  if (((uint8_T)(Counter_Mode_Select_DataStore())) >= 1) {
    BuckyWagon_01_B.s93_Switch = (Command_Counter_DataStore());
  } else {
    BuckyWagon_01_B.s93_Switch = floor((real_T)rtb_Compare_k *
      (Counter_Multiplier_DataStore()));
  }

  /* End of Switch: '<S93>/Switch' */
  /* If: '<S94>/If' incorporates:
   *  Inport: '<S100>/In1'
   *  Inport: '<S101>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S94>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S94>/override_enable'
   */
  if ((UQM_Enable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S94>/NewValue' incorporates:
     *  ActionPort: '<S100>/Action Port'
     */
    BuckyWagon_01_B.s94_Merge = (UQM_Enable_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S100>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(39);
    }

    /* End of Outputs for SubSystem: '<S94>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S94>/OldValue' incorporates:
     *  ActionPort: '<S101>/Action Port'
     */
    BuckyWagon_01_B.s94_Merge = rtb_LogicalOperator2_e;

    /* S-Function (motohawk_sfun_code_cover): '<S101>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(40);
    }

    /* End of Outputs for SubSystem: '<S94>/OldValue' */
  }

  /* End of If: '<S94>/If' */

  /* If: '<S95>/If' incorporates:
   *  Inport: '<S102>/In1'
   *  Inport: '<S103>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S95>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S95>/override_enable'
   */
  if ((UQM_Torque_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S95>/NewValue' incorporates:
     *  ActionPort: '<S102>/Action Port'
     */
    BuckyWagon_01_B.s95_Merge = (UQM_Torque_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S102>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(41);
    }

    /* End of Outputs for SubSystem: '<S95>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S95>/OldValue' incorporates:
     *  ActionPort: '<S103>/Action Port'
     */
    BuckyWagon_01_B.s95_Merge = BuckyWagon_01_B.s125_Merge;

    /* S-Function (motohawk_sfun_code_cover): '<S103>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(42);
    }

    /* End of Outputs for SubSystem: '<S95>/OldValue' */
  }

  /* End of If: '<S95>/If' */

  /* Logic: '<S27>/Logical Operator' */
  rtb_RelationalOperator_k = !(BuckyWagon_01_B.s17_InReverse != 0.0);

  /* If: '<S96>/If' incorporates:
   *  Inport: '<S104>/In1'
   *  Inport: '<S105>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S96>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S96>/override_enable'
   */
  if ((UQM_Direction_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S96>/NewValue' incorporates:
     *  ActionPort: '<S104>/Action Port'
     */
    BuckyWagon_01_B.s96_Merge = (UQM_Direction_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S104>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(43);
    }

    /* End of Outputs for SubSystem: '<S96>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S96>/OldValue' incorporates:
     *  ActionPort: '<S105>/Action Port'
     */
    BuckyWagon_01_B.s96_Merge = rtb_RelationalOperator_k;

    /* S-Function (motohawk_sfun_code_cover): '<S105>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Actuators/UQM Motor/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(44);
    }

    /* End of Outputs for SubSystem: '<S96>/OldValue' */
  }

  /* End of If: '<S96>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S27>/Send CAN Messages2' */
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

        if (BuckyWagon_01_B.s93_Switch < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (BuckyWagon_01_B.s93_Switch > 15.0000000000F) {
          tmp1 = (uint8_T)(15U);
        } else {
          tmp1 = (uint8_T)(BuckyWagon_01_B.s93_Switch);
        }

        if ((Use_Raw_Speed_DataStore()) < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if ((Use_Raw_Speed_DataStore()) > 1.0000000000F) {
          tmp2 = (uint8_T)(1U);
        } else {
          tmp2 = (uint8_T)((Use_Raw_Speed_DataStore()) != 0);
        }

        tmp3 = (uint8_T)(BuckyWagon_01_B.s96_Merge != 0);
        tmp4 = (uint8_T)(BuckyWagon_01_B.s94_Merge != 0);
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

        if (BuckyWagon_01_B.s95_Merge < -3212.8000000000F) {
          tmp7 = (uint16_T)(0U);
        } else if (BuckyWagon_01_B.s95_Merge > 3340.7000000000F) {
          tmp7 = (uint16_T)(65535U);
        } else {
          tmp7 = (uint16_T)((BuckyWagon_01_B.s95_Merge - (-3212.8000000000F)) *
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

  /* Sum: '<S98>/FixPt Sum1' incorporates:
   *  Constant: '<S98>/FixPt Constant'
   */
  rtb_Compare_k = (uint8_T)((uint32_T)rtb_Compare_k + 1U);

  /* Switch: '<S99>/FixPt Switch' incorporates:
   *  Constant: '<S99>/Constant'
   */
  if (rtb_Compare_k > 31) {
    rtb_Compare_k = 0U;
  }

  /* End of Switch: '<S99>/FixPt Switch' */
  /* Product: '<S27>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration9'
   */
  rtb_Clear_Watchdog_Error = (CAN_Watchdog_Reset_DataStore()) *
    (Watchdog_Reset_Num_DataStore());

  /* S-Function (motohawk_sfun_send_canmsgs): '<S27>/Send CAN Messages' */
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

  /* S-Function (motohawk_sfun_send_canmsgs): '<S27>/Send CAN Messages1' */
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

  /* RelationalOperator: '<S112>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_c = ((BuckyWagon_01_B.s230_Merge <=
    (Under_SOC_Shutdown_Thresh_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S109>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Low_SOC_Shutdown */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(23, rtb_RelationalOperator1_c);
    UpdateFault(23);
  }

  /* RelationalOperator: '<S112>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration2'
   */
  rtb_RelationalOperator_a = (((Over_SOC_Shutdown_Thresh_DataStore()) <=
    BuckyWagon_01_B.s230_Merge));

  /* S-Function (motohawk_sfun_fault_def): '<S109>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: High_SOC_Shutdown */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(15, rtb_RelationalOperator_a);
    UpdateFault(15);
  }

  /* RelationalOperator: '<S111>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_cw = ((BuckyWagon_01_B.s230_Merge <=
    (Under_SOCAlertThresh_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S109>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Low_SOC_Alert */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(22, rtb_RelationalOperator1_cw);
    UpdateFault(22);
  }

  /* RelationalOperator: '<S111>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration2'
   */
  rtb_RelationalOperator_ac = (((Over_SOCAlertThresh_DataStore()) <=
    BuckyWagon_01_B.s230_Merge));

  /* S-Function (motohawk_sfun_fault_def): '<S109>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: High_SOC_Alert */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(14, rtb_RelationalOperator_ac);
    UpdateFault(14);
  }

  /* Sum: '<S106>/Subtract' */
  rtb_Product_h = BuckyWagon_01_B.s210_bcm_vbat -
    BuckyWagon_01_B.s221_Accurate_Voltage;

  /* Abs: '<S106>/Abs' */
  rtb_Product_h = fabs(rtb_Product_h);

  /* RelationalOperator: '<S106>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration2'
   */
  rtb_RelationalOperator_k = (rtb_Product_h >=
    (HV_Bus_allowed_mismatch_DataStore()));

  /* Outputs for Enabled SubSystem: '<S106>/Time Since Enabled (With Input)1' incorporates:
   *  EnablePort: '<S110>/Enable'
   */
  /* S-Function (motohawk_sfun_data_read): '<S106>/motohawk_data_read' */
  if (Batt_Load_Enable_DataStore()) {
    if (!BuckyWagon_01_DWork.s106_TimeSinceEnabledWithInput1_MODE) {
      /* S-Function Block: <S110>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BuckyWagon_01_DWork.s110_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S110>/Unit Delay' */
      BuckyWagon_01_DWork.s110_UnitDelay_DSTATE = 0.0;
      BuckyWagon_01_DWork.s106_TimeSinceEnabledWithInput1_MODE = TRUE;
    }

    /* S-Function Block: <S110>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BuckyWagon_01_DWork.s110_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_a = ((real_T) delta) * 0.000001;
    }

    /* UnitDelay: '<S110>/Unit Delay' */
    BuckyWagon_01_B.s110_UnitDelay = BuckyWagon_01_DWork.s110_UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S110>/Unit Delay' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S110>/motohawk_delta_time'
     *  Sum: '<S110>/Sum'
     */
    BuckyWagon_01_DWork.s110_UnitDelay_DSTATE = rtb_motohawk_delta_time_a +
      BuckyWagon_01_B.s110_UnitDelay;
  } else {
    if (BuckyWagon_01_DWork.s106_TimeSinceEnabledWithInput1_MODE) {
      /* Disable for Outport: '<S110>/Time Since Enabled [sec]' */
      BuckyWagon_01_B.s110_UnitDelay = 0.0;
      BuckyWagon_01_DWork.s106_TimeSinceEnabledWithInput1_MODE = FALSE;
    }
  }

  /* End of S-Function (motohawk_sfun_data_read): '<S106>/motohawk_data_read' */
  /* End of Outputs for SubSystem: '<S106>/Time Since Enabled (With Input)1' */
  /* Logic: '<S106>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S106>/Relational Operator8'
   *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration8'
   */
  rtb_LogicalOperator1_f = ((rtb_RelationalOperator_k &&
    BuckyWagon_01_B.s227_Merge && (BuckyWagon_01_B.s110_UnitDelay >=
    (HV_Bus_offline_delay_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S106>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: HV_BUS_OFFLINE_check_fuse */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(12, rtb_LogicalOperator1_f);
    UpdateFault(12);
  }

  /* S-Function Block: <S341>/motohawk_delta_time */
  rtb_Product_h = 0.005;

  /* Product: '<S341>/Product' incorporates:
   *  MinMax: '<S341>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S341>/motohawk_calibration'
   */
  rtb_Product_h /= (rtb_Product_h >= (LVVolt_FilterConst_DataStore())) ||
    rtIsNaN((LVVolt_FilterConst_DataStore())) ? rtb_Product_h :
    (LVVolt_FilterConst_DataStore());

  /* Logic: '<S217>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S217>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S217>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_fj = (IsFaultActive(19) || IsFaultActive(20));

  /* Logic: '<S217>/Logical Operator6' */
  rtb_RelationalOperator_k = !rtb_RelationalOperator_fj;

  /* Logic: '<S217>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S217>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S217>/motohawk_fault_status3'
   */
  rtb_LogicalOperator_bd = (IsFaultSuspected(19) || IsFaultSuspected(20));

  /* S-Function Block: <S20>/motohawk_ain5 Resource: LV_Voltage_Pin */
  {
    extern NativeError_S LV_Voltage_Pin_AnalogInput_Get(uint16_T *adc, uint16_T *
      status);
    LV_Voltage_Pin_AnalogInput_Get(&BuckyWagon_01_B.s20_motohawk_ain5, NULL);
  }

  /* DataTypeConversion: '<S217>/Data Type Conversion' */
  rtb_to65535_dx = (real_T)BuckyWagon_01_B.s20_motohawk_ain5;

  /* Product: '<S217>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S217>/motohawk_calibration4'
   */
  rtb_Merge_k = rtb_to65535_dx * (LVVolt_Gain_DataStore());

  /* Sum: '<S217>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S217>/motohawk_calibration5'
   */
  BuckyWagon_01_B.s217_Sum1 = rtb_Merge_k + (LVVolt_Ofst_DataStore());

  /* UnitDelay: '<S217>/Unit Delay1' */
  rtb_UnitDelay1_f = BuckyWagon_01_DWork.s217_UnitDelay1_DSTATE;

  /* If: '<S217>/If' incorporates:
   *  Logic: '<S217>/Logical Operator5'
   */
  if (rtb_RelationalOperator_k && rtb_LogicalOperator_bd) {
    /* Outputs for IfAction SubSystem: '<S217>/If Action Subsystem' incorporates:
     *  ActionPort: '<S342>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(rtb_UnitDelay1_f, &rtb_Merge_ep);

    /* End of Outputs for SubSystem: '<S217>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_fj) {
    /* Outputs for IfAction SubSystem: '<S217>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S343>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem((LVVolt_DfltValue_DataStore()),
      &rtb_Merge_ep);

    /* End of Outputs for SubSystem: '<S217>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S217>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S344>/Action Port'
     */
    BuckyWagon_01_IfActionSubsystem(BuckyWagon_01_B.s217_Sum1, &rtb_Merge_ep);

    /* End of Outputs for SubSystem: '<S217>/If Action Subsystem2' */
  }

  /* End of If: '<S217>/If' */

  /* Sum: '<S346>/Sum1' incorporates:
   *  Constant: '<S346>/Constant'
   *  Product: '<S346>/Product'
   *  Product: '<S346>/Product1'
   *  Sum: '<S346>/Sum'
   *  UnitDelay: '<S346>/Unit Delay'
   */
  rtb_to65535_b = (1.0 - rtb_Product_h) *
    BuckyWagon_01_DWork.s346_UnitDelay_DSTATE + rtb_Merge_ep * rtb_Product_h;

  /* If: '<S345>/If' incorporates:
   *  Inport: '<S347>/In1'
   *  Inport: '<S348>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S345>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S345>/override_enable'
   */
  if ((LVVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S345>/NewValue' incorporates:
     *  ActionPort: '<S347>/Action Port'
     */
    BuckyWagon_01_B.s345_Merge = (LVVolt_new_DataStore());

    /* S-Function (motohawk_sfun_code_cover): '<S347>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(125);
    }

    /* End of Outputs for SubSystem: '<S345>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S345>/OldValue' incorporates:
     *  ActionPort: '<S348>/Action Port'
     */
    BuckyWagon_01_B.s345_Merge = rtb_to65535_b;

    /* S-Function (motohawk_sfun_code_cover): '<S348>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Linear Sensor Characterization1/Override/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(126);
    }

    /* End of Outputs for SubSystem: '<S345>/OldValue' */
  }

  /* End of If: '<S345>/If' */

  /* RelationalOperator: '<S107>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration3'
   */
  rtb_RelationalOperator3 = ((BuckyWagon_01_B.s345_Merge <
    (Low12VThres_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S107>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: LVVoltLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    boolean_T update;
    if (BuckyWagon_01_DWork.s107_motohawk_fault_def5_DWORK1 >= 3) {
      update = 1;
      BuckyWagon_01_DWork.s107_motohawk_fault_def5_DWORK1 = 0;
    } else {
      update = 0;
      BuckyWagon_01_DWork.s107_motohawk_fault_def5_DWORK1++;
    }

    SetFaultSuspected(18, rtb_RelationalOperator3);
    if (update)
      UpdateFault(18);
  }

  /* RelationalOperator: '<S107>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration4'
   */
  rtb_RelationalOperator4_d = ((BuckyWagon_01_B.s345_Merge >
    (High12VThres_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S107>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: LVVoltHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(17, rtb_RelationalOperator4_d);
    UpdateFault(17);
  }

  /* Switch: '<S115>/Switch1' incorporates:
   *  Constant: '<S108>/Constant3'
   *  UnitDelay: '<S115>/Unit Delay'
   */
  if (BuckyWagon_01_ConstB.s115_DataTypeConversion) {
    BuckyWagon_01_B.s115_Switch1 = 0.0;
  } else {
    BuckyWagon_01_B.s115_Switch1 = BuckyWagon_01_DWork.s115_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S115>/Switch1' */
  /* RelationalOperator: '<S114>/LT' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration2'
   */
  rtb_RelationalOperator_fj = (BuckyWagon_01_B.s115_Switch1 >=
    (StallTrqThres_DataStore()));

  /* RelationalOperator: '<S114>/LT1' incorporates:
   *  Constant: '<S108>/Constant4'
   */
  rtb_BelowLoTarget = (BuckyWagon_01_B.s115_Switch1 <= 0.0);

  /* CombinatorialLogic: '<S116>/Combinatorial  Logic' */
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

  /* Switch: '<S116>/Switch1' incorporates:
   *  UnitDelay: '<S116>/Unit Delay'
   */
  if (rtb_CombinatorialLogic[1]) {
    rtb_Switch1_m = rtb_CombinatorialLogic[0];
  } else {
    rtb_Switch1_m = BuckyWagon_01_DWork.s116_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S116>/Switch1' */

  /* S-Function (motohawk_sfun_fault_def): '<S108>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: LockedRotor */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(21, rtb_Switch1_m);
    UpdateFault(21);
  }

  /* Abs: '<S108>/Abs' */
  rtb_Product_h = fabs(BuckyWagon_01_B.s222_Abs);

  /* Switch: '<S108>/Switch1' incorporates:
   *  Constant: '<S108>/Constant2'
   *  RelationalOperator: '<S108>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration4'
   */
  if ((AccelRstThres_DataStore()) > BuckyWagon_01_B.s345_Merge) {
    rtb_Merge_k = (AccelRstSpd_DataStore());
  } else {
    rtb_Merge_k = 0.0;
  }

  /* End of Switch: '<S108>/Switch1' */
  /* Switch: '<S108>/Switch' incorporates:
   *  Constant: '<S108>/Constant'
   *  Constant: '<S108>/Constant1'
   *  RelationalOperator: '<S108>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration1'
   */
  if (rtb_Product_h <= (StallSpd_DataStore())) {
    rtb_Product_h = 1.0;
  } else {
    rtb_Product_h = -1.0;
  }

  /* End of Switch: '<S108>/Switch' */

  /* Sum: '<S108>/Sum' incorporates:
   *  Product: '<S108>/Product'
   */
  rtb_Merge_k = rtb_Product_h * BuckyWagon_01_B.s221_Accurate_Torque -
    rtb_Merge_k;

  /* S-Function Block: <S115>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s115_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S115>/Sum' incorporates:
   *  Product: '<S115>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S115>/motohawk_delta_time'
   */
  rtb_Product_h = rtb_Merge_k * rtb_motohawk_delta_time +
    BuckyWagon_01_B.s115_Switch1;

  /* MinMax: '<S117>/MinMax' incorporates:
   *  Constant: '<S108>/Constant3'
   */
  rtb_Product_h = rtb_Product_h >= 0.0 ? rtb_Product_h : 0.0;

  /* MinMax: '<S117>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration2'
   */
  rtb_Switch_h = (rtb_Product_h <= (StallTrqThres_DataStore())) || rtIsNaN
    ((StallTrqThres_DataStore())) ? rtb_Product_h : (StallTrqThres_DataStore());

  /* Logic: '<S108>/Logical Operator' incorporates:
   *  Constant: '<S113>/Constant'
   *  RelationalOperator: '<S113>/Compare'
   *  UnitDelay: '<S108>/Unit Delay'
   */
  BuckyWagon_01_B.s108_LogicalOperator = (((BuckyWagon_01_B.s337_Merge <= 0.01) ||
    BuckyWagon_01_DWork.s108_UnitDelay_DSTATE));

  /* Logic: '<S108>/Logical Operator1' */
  rtb_LogicalOperator1_fv = !BuckyWagon_01_B.s108_LogicalOperator;

  /* S-Function (motohawk_sfun_fault_def): '<S108>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Accel_NeverZeroed */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(0, rtb_LogicalOperator1_fv);
    UpdateFault(0);
  }

  /* Outputs for Atomic SubSystem: '<S20>/EMP Fan Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S214>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_3017p0005;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_3017p0005,
      &messageObj);
    if ((BuckyWagon_01_B.s214_AgeCount + 1) > BuckyWagon_01_B.s214_AgeCount)
      BuckyWagon_01_B.s214_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint16_T tmp3 = 0;
      uint16_T tmp4 = 0;
      uint8_T tmp5 = 0;
      BuckyWagon_01_B.s214_ReadCANMessage_o2 = ((messageObj.u4MessageID &
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
      BuckyWagon_01_B.s214_EMP_Pump_Status = (real_T) tmp0;
      BuckyWagon_01_B.s214_EMP_Pump_Mode = (real_T) tmp1;
      BuckyWagon_01_B.s214_EMP_Pump_Speed = ((real_T) tmp2) / ((real_T) 2);
      BuckyWagon_01_B.s214_EMP_Board_Temp = (((real_T) tmp3) / ((real_T) 32)) +
        ((real_T) -273);
      BuckyWagon_01_B.s214_EMP_Pump_Power = (real_T) tmp4;
      BuckyWagon_01_B.s214_EMP_Speed_Percent = ((real_T) tmp5) / ((real_T) 2);
      BuckyWagon_01_B.s214_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S214>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S214>/motohawk_calibration2'
   */
  rtb_AgeCount = ((real_T)BuckyWagon_01_B.s214_AgeCount >
                  (EMPFan_CAN_MaxAge_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S214>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: NoCAN_CoolingFan */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(28, rtb_AgeCount);
    UpdateFault(28);
  }

  /* If: '<S285>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S285>/override_enable'
   */
  if ((EMP_Cooling_Fan_Speed_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S285>/NewValue' incorporates:
     *  ActionPort: '<S291>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S291>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(93);
    }

    /* End of Outputs for SubSystem: '<S285>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S285>/OldValue' incorporates:
     *  ActionPort: '<S292>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S292>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(94);
    }

    /* End of Outputs for SubSystem: '<S285>/OldValue' */
  }

  /* End of If: '<S285>/If' */

  /* If: '<S286>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S286>/override_enable'
   */
  if ((EMP_Cooling_Fan_Speed_Percent_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S286>/NewValue' incorporates:
     *  ActionPort: '<S293>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S293>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(95);
    }

    /* End of Outputs for SubSystem: '<S286>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S286>/OldValue' incorporates:
     *  ActionPort: '<S294>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S294>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(96);
    }

    /* End of Outputs for SubSystem: '<S286>/OldValue' */
  }

  /* End of If: '<S286>/If' */

  /* If: '<S287>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S287>/override_enable'
   */
  if ((EMP_Cooling_Fan_Mode_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S287>/NewValue' incorporates:
     *  ActionPort: '<S295>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S295>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(97);
    }

    /* End of Outputs for SubSystem: '<S287>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S287>/OldValue' incorporates:
     *  ActionPort: '<S296>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S296>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(98);
    }

    /* End of Outputs for SubSystem: '<S287>/OldValue' */
  }

  /* End of If: '<S287>/If' */

  /* If: '<S288>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S288>/override_enable'
   */
  if ((EMP_Cooling_Fan_Status_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S288>/NewValue' incorporates:
     *  ActionPort: '<S297>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S297>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(99);
    }

    /* End of Outputs for SubSystem: '<S288>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S288>/OldValue' incorporates:
     *  ActionPort: '<S298>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S298>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(100);
    }

    /* End of Outputs for SubSystem: '<S288>/OldValue' */
  }

  /* End of If: '<S288>/If' */

  /* If: '<S289>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S289>/override_enable'
   */
  if ((EMP_Cooling_Fan_Board_Temp_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S289>/NewValue' incorporates:
     *  ActionPort: '<S299>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S299>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(101);
    }

    /* End of Outputs for SubSystem: '<S289>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S289>/OldValue' incorporates:
     *  ActionPort: '<S300>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S300>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(102);
    }

    /* End of Outputs for SubSystem: '<S289>/OldValue' */
  }

  /* End of If: '<S289>/If' */

  /* If: '<S290>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S290>/override_enable'
   */
  if ((EMP_Cooling_Fan_Power_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S290>/NewValue' incorporates:
     *  ActionPort: '<S301>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S301>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(103);
    }

    /* End of Outputs for SubSystem: '<S290>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S290>/OldValue' incorporates:
     *  ActionPort: '<S302>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S302>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Fan Inputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(104);
    }

    /* End of Outputs for SubSystem: '<S290>/OldValue' */
  }

  /* End of If: '<S290>/If' */
  /* End of Outputs for SubSystem: '<S20>/EMP Fan Inputs' */

  /* Outputs for Atomic SubSystem: '<S20>/EMP Coolant Pump Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S213>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_2967p0005;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_2967p0005,
      &messageObj);
    if ((BuckyWagon_01_B.s213_AgeCount + 1) > BuckyWagon_01_B.s213_AgeCount)
      BuckyWagon_01_B.s213_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint16_T tmp3 = 0;
      uint16_T tmp4 = 0;
      uint8_T tmp5 = 0;
      BuckyWagon_01_B.s213_ReadCANMessage_o2 = ((messageObj.u4MessageID &
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
      BuckyWagon_01_B.s213_EMP_Pump_Status = (real_T) tmp0;
      BuckyWagon_01_B.s213_EMP_Pump_Mode = (real_T) tmp1;
      BuckyWagon_01_B.s213_EMP_Pump_Speed = ((real_T) tmp2) / ((real_T) 2);
      BuckyWagon_01_B.s213_EMP_Board_Temp = (((real_T) tmp3) / ((real_T) 32)) +
        ((real_T) -273);
      BuckyWagon_01_B.s213_EMP_Pump_Power = (real_T) tmp4;
      BuckyWagon_01_B.s213_EMP_Speed_Percent = ((real_T) tmp5) / ((real_T) 2);
      BuckyWagon_01_B.s213_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S213>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S213>/motohawk_calibration2'
   */
  rtb_AgeCount_d = ((real_T)BuckyWagon_01_B.s213_AgeCount >
                    (EMP_CAN_MaxAge_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S213>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: NoCAN_CoolantPump */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(27, rtb_AgeCount_d);
    UpdateFault(27);
  }

  /* If: '<S267>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S267>/override_enable'
   */
  if ((EMP_Pump_Speed_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S267>/NewValue' incorporates:
     *  ActionPort: '<S273>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S273>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(81);
    }

    /* End of Outputs for SubSystem: '<S267>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S267>/OldValue' incorporates:
     *  ActionPort: '<S274>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S274>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(82);
    }

    /* End of Outputs for SubSystem: '<S267>/OldValue' */
  }

  /* End of If: '<S267>/If' */

  /* If: '<S268>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S268>/override_enable'
   */
  if ((EMP_Speed_Percent_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S268>/NewValue' incorporates:
     *  ActionPort: '<S275>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S275>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(83);
    }

    /* End of Outputs for SubSystem: '<S268>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S268>/OldValue' incorporates:
     *  ActionPort: '<S276>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S276>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(84);
    }

    /* End of Outputs for SubSystem: '<S268>/OldValue' */
  }

  /* End of If: '<S268>/If' */

  /* If: '<S269>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S269>/override_enable'
   */
  if ((EMP_Pump_Mode_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S269>/NewValue' incorporates:
     *  ActionPort: '<S277>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S277>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(85);
    }

    /* End of Outputs for SubSystem: '<S269>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S269>/OldValue' incorporates:
     *  ActionPort: '<S278>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S278>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(86);
    }

    /* End of Outputs for SubSystem: '<S269>/OldValue' */
  }

  /* End of If: '<S269>/If' */

  /* If: '<S270>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S270>/override_enable'
   */
  if ((EMP_Pump_Status_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S270>/NewValue' incorporates:
     *  ActionPort: '<S279>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S279>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(87);
    }

    /* End of Outputs for SubSystem: '<S270>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S270>/OldValue' incorporates:
     *  ActionPort: '<S280>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S280>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(88);
    }

    /* End of Outputs for SubSystem: '<S270>/OldValue' */
  }

  /* End of If: '<S270>/If' */

  /* If: '<S271>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S271>/override_enable'
   */
  if ((EMP_Board_Temp_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S271>/NewValue' incorporates:
     *  ActionPort: '<S281>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S281>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(89);
    }

    /* End of Outputs for SubSystem: '<S271>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S271>/OldValue' incorporates:
     *  ActionPort: '<S282>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S282>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(90);
    }

    /* End of Outputs for SubSystem: '<S271>/OldValue' */
  }

  /* End of If: '<S271>/If' */

  /* If: '<S272>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S272>/override_enable'
   */
  if ((EMP_Pump_Power_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S272>/NewValue' incorporates:
     *  ActionPort: '<S283>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S283>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(91);
    }

    /* End of Outputs for SubSystem: '<S272>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S272>/OldValue' incorporates:
     *  ActionPort: '<S284>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S284>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EMP Coolant Pump Inputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(92);
    }

    /* End of Outputs for SubSystem: '<S272>/OldValue' */
  }

  /* End of If: '<S272>/If' */
  /* End of Outputs for SubSystem: '<S20>/EMP Coolant Pump Inputs' */

  /* Outputs for Atomic SubSystem: '<S20>/EHPAS Power Steering Pump Inputs' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S212>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_2911p0005;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_2911p0005,
      &messageObj);
    if ((BuckyWagon_01_B.s212_AgeCount + 1) > BuckyWagon_01_B.s212_AgeCount)
      BuckyWagon_01_B.s212_AgeCount++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint8_T tmp4 = 0;
      uint8_T tmp5 = 0;
      uint8_T tmp6 = 0;
      BuckyWagon_01_B.s212_ReadCANMessage_o2 = ((messageObj.u4MessageID &
        (0x0000000F)) >> 0);
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp2))[1] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[6] & 0x0000000F)) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[6] & 0x00000070) >> 4) ;
      BuckyWagon_01_B.s212_EHPAS_Input_Voltage = ((real_T) tmp0) * ((real_T) 2);
      BuckyWagon_01_B.s212_EHPAS_Input_Current_NA = ((real_T) tmp1) / ((real_T)
        10);
      BuckyWagon_01_B.s212_EHPAS_Pump_Speed = ((real_T) tmp2) / ((real_T) 8);
      BuckyWagon_01_B.s212_EHPAS_TempMax = ((real_T) tmp3) + ((real_T) -40);
      BuckyWagon_01_B.s212_EHPAS_TempCur = ((real_T) tmp4) + ((real_T) -40);
      BuckyWagon_01_B.s212_EHPAS_Op_State = (real_T) tmp5;
      BuckyWagon_01_B.s212_EHPAS_Fault = (real_T) tmp6;
      BuckyWagon_01_B.s212_AgeCount = 0;
    }
  }

  /* RelationalOperator: '<S245>/Compare' incorporates:
   *  Constant: '<S245>/Constant'
   */
  rtb_Compare_f = ((BuckyWagon_01_B.s212_AgeCount > 20U));

  /* S-Function (motohawk_sfun_fault_def): '<S212>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: NoCAN_PowerSteering */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(29, rtb_Compare_f);
    UpdateFault(29);
  }

  /* If: '<S246>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S246>/override_enable'
   */
  if ((EHPAS_Pump_Speed_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S246>/NewValue' incorporates:
     *  ActionPort: '<S253>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S253>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(67);
    }

    /* End of Outputs for SubSystem: '<S246>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S246>/OldValue' incorporates:
     *  ActionPort: '<S254>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S254>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(68);
    }

    /* End of Outputs for SubSystem: '<S246>/OldValue' */
  }

  /* End of If: '<S246>/If' */

  /* If: '<S247>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S247>/override_enable'
   */
  if ((EHPAS_Op_State_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S247>/NewValue' incorporates:
     *  ActionPort: '<S255>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S255>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(69);
    }

    /* End of Outputs for SubSystem: '<S247>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S247>/OldValue' incorporates:
     *  ActionPort: '<S256>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S256>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs10/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(70);
    }

    /* End of Outputs for SubSystem: '<S247>/OldValue' */
  }

  /* End of If: '<S247>/If' */

  /* If: '<S248>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S248>/override_enable'
   */
  if ((EHPAS_Input_Current_NA_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S248>/NewValue' incorporates:
     *  ActionPort: '<S257>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S257>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(71);
    }

    /* End of Outputs for SubSystem: '<S248>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S248>/OldValue' incorporates:
     *  ActionPort: '<S258>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S258>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(72);
    }

    /* End of Outputs for SubSystem: '<S248>/OldValue' */
  }

  /* End of If: '<S248>/If' */

  /* If: '<S249>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S249>/override_enable'
   */
  if ((EHPAS_Input_Voltage_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S249>/NewValue' incorporates:
     *  ActionPort: '<S259>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S259>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(73);
    }

    /* End of Outputs for SubSystem: '<S249>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S249>/OldValue' incorporates:
     *  ActionPort: '<S260>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S260>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(74);
    }

    /* End of Outputs for SubSystem: '<S249>/OldValue' */
  }

  /* End of If: '<S249>/If' */

  /* If: '<S250>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S250>/override_enable'
   */
  if ((EHPAS_Fault_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S250>/NewValue' incorporates:
     *  ActionPort: '<S261>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S261>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(75);
    }

    /* End of Outputs for SubSystem: '<S250>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S250>/OldValue' incorporates:
     *  ActionPort: '<S262>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S262>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(76);
    }

    /* End of Outputs for SubSystem: '<S250>/OldValue' */
  }

  /* End of If: '<S250>/If' */

  /* If: '<S251>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S251>/override_enable'
   */
  if ((EHPAS_TempMax_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S251>/NewValue' incorporates:
     *  ActionPort: '<S263>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S263>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(77);
    }

    /* End of Outputs for SubSystem: '<S251>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S251>/OldValue' incorporates:
     *  ActionPort: '<S264>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S264>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(78);
    }

    /* End of Outputs for SubSystem: '<S251>/OldValue' */
  }

  /* End of If: '<S251>/If' */

  /* If: '<S252>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S252>/override_enable'
   */
  if ((EHPAS_TempCur_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S252>/NewValue' incorporates:
     *  ActionPort: '<S265>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S265>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(79);
    }

    /* End of Outputs for SubSystem: '<S252>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S252>/OldValue' incorporates:
     *  ActionPort: '<S266>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S266>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/EHPAS Power Steering Pump Inputs/motohawk_override_abs9/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(80);
    }

    /* End of Outputs for SubSystem: '<S252>/OldValue' */
  }

  /* End of If: '<S252>/If' */
  /* End of Outputs for SubSystem: '<S20>/EHPAS Power Steering Pump Inputs' */
  /* S-Function Block: <S357>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BuckyWagon_01_DWork.s357_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_h = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S357>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S357>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S357>/motohawk_delta_time'
   */
  BuckyWagon_01_B.s357_Sum = rtb_motohawk_delta_time_h +
    TimeSinceKeyOnTimer_DataStore();

  /* If: '<S305>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S305>/override_enable'
   */
  if ((FaultSeverityIndicator_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S305>/NewValue' incorporates:
     *  ActionPort: '<S315>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S315>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(105);
    }

    /* End of Outputs for SubSystem: '<S305>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S305>/OldValue' incorporates:
     *  ActionPort: '<S316>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S316>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs1/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(106);
    }

    /* End of Outputs for SubSystem: '<S305>/OldValue' */
  }

  /* End of If: '<S305>/If' */

  /* If: '<S306>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S306>/override_enable'
   */
  if ((ChargerState_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S306>/NewValue' incorporates:
     *  ActionPort: '<S317>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S317>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(107);
    }

    /* End of Outputs for SubSystem: '<S306>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S306>/OldValue' incorporates:
     *  ActionPort: '<S318>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S318>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs2/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(108);
    }

    /* End of Outputs for SubSystem: '<S306>/OldValue' */
  }

  /* End of If: '<S306>/If' */

  /* If: '<S307>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S307>/override_enable'
   */
  if ((IgnitionStatus_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S307>/NewValue' incorporates:
     *  ActionPort: '<S319>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S319>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(109);
    }

    /* End of Outputs for SubSystem: '<S307>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S307>/OldValue' incorporates:
     *  ActionPort: '<S320>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S320>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs3/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(110);
    }

    /* End of Outputs for SubSystem: '<S307>/OldValue' */
  }

  /* End of If: '<S307>/If' */

  /* If: '<S309>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S309>/override_enable'
   */
  if ((OutputCurrent_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S309>/NewValue' incorporates:
     *  ActionPort: '<S323>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S323>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(113);
    }

    /* End of Outputs for SubSystem: '<S309>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S309>/OldValue' incorporates:
     *  ActionPort: '<S324>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S324>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs5/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(114);
    }

    /* End of Outputs for SubSystem: '<S309>/OldValue' */
  }

  /* End of If: '<S309>/If' */

  /* If: '<S310>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S310>/override_enable'
   */
  if ((OutputVoltage_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S310>/NewValue' incorporates:
     *  ActionPort: '<S325>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S325>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(115);
    }

    /* End of Outputs for SubSystem: '<S310>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S310>/OldValue' incorporates:
     *  ActionPort: '<S326>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S326>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs6/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(116);
    }

    /* End of Outputs for SubSystem: '<S310>/OldValue' */
  }

  /* End of If: '<S310>/If' */

  /* If: '<S311>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S311>/override_enable'
   */
  if ((InputCurrentLimitMax_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S311>/NewValue' incorporates:
     *  ActionPort: '<S327>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S327>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(117);
    }

    /* End of Outputs for SubSystem: '<S311>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S311>/OldValue' incorporates:
     *  ActionPort: '<S328>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S328>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs7/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(118);
    }

    /* End of Outputs for SubSystem: '<S311>/OldValue' */
  }

  /* End of If: '<S311>/If' */

  /* If: '<S312>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S312>/override_enable'
   */
  if ((InputCurrent_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S312>/NewValue' incorporates:
     *  ActionPort: '<S329>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S329>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8/NewValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(119);
    }

    /* End of Outputs for SubSystem: '<S312>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S312>/OldValue' incorporates:
     *  ActionPort: '<S330>/Action Port'
     */

    /* S-Function (motohawk_sfun_code_cover): '<S330>/motohawk_code_coverage' */
    /* Code Coverage Test: BuckyWagon_01/Foreground/Sensors/Eaton HV Charger/motohawk_override_abs8/OldValue */
    {
      extern void MH_CodeCovered(uint32_T idx);
      MH_CodeCovered(120);
    }

    /* End of Outputs for SubSystem: '<S312>/OldValue' */
  }

  /* End of If: '<S312>/If' */

  /* S-Function (motohawk_sfun_trigger): '<S3>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_3774p0004 */
  if (BuckyWagon_01_DWork.s3_motohawk_trigger1_DWORK1 == 0) {
    BuckyWagon_01_DWork.s3_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S3>/motohawk_trigger' */
  /* Enable for Trigger_FGND_RTI_PERIODIC_3773p0006 */
  if (BuckyWagon_01_DWork.s3_motohawk_trigger_DWORK1 == 0) {
    BuckyWagon_01_DWork.s3_motohawk_trigger_DWORK1 = 1;
  }

  /* Gain: '<S127>/Gain1' incorporates:
   *  Product: '<S127>/Product'
   */
  BuckyWagon_01_B.s127_Gain1 = BuckyWagon_01_B.s210_bcm_vbat *
    BuckyWagon_01_B.s210_bcm_ibat * 0.001;

  /* Gain: '<S127>/Gain4' incorporates:
   *  Sum: '<S127>/Add'
   */
  BuckyWagon_01_B.s127_Gain4 = (BuckyWagon_01_B.s210_bcm_ibat + 0.0) * -1.0;

  /* Gain: '<S127>/Gain5' incorporates:
   *  Product: '<S127>/Product3'
   */
  BuckyWagon_01_B.s127_Gain5 = BuckyWagon_01_B.s127_Gain4 *
    BuckyWagon_01_B.s210_bcm_vbat * 0.001;

  /* Gain: '<S127>/Gain6' incorporates:
   *  Product: '<S127>/Product6'
   */
  BuckyWagon_01_B.s127_Gain6 = 0.0 * BuckyWagon_01_B.s210_bcm_vbat * 0.001;

  /* RelationalOperator: '<S127>/Relational Operator' incorporates:
   *  Constant: '<S127>/Constant'
   */
  rtb_RelationalOperator_fj = (BuckyWagon_01_B.s127_Gain4 >= 0.0);

  /* Product: '<S127>/Product5' */
  rtb_Product_h = BuckyWagon_01_B.s127_Gain4 * (real_T)rtb_RelationalOperator_fj;

  /* Product: '<S127>/Product7' */
  rtb_Merge_k = rtb_Product_h * BuckyWagon_01_B.s210_bcm_vbat;

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
  rtb_Merge_k = 0.00027777777777777778 * rtb_to65535_d;

  /* Gain: '<S127>/Gain8' */
  BuckyWagon_01_B.s127_Gain8 = 0.001 * rtb_Merge_k;

  /* UnitDelay: '<S118>/Unit Delay' */
  rtb_UnitDelay_b = BuckyWagon_01_DWork.s118_UnitDelay_DSTATE;

  /* Product: '<S127>/Divide3' */
  BuckyWagon_01_B.s127_Divide3 = rtb_Merge_k / rtb_UnitDelay_b;

  /* Product: '<S127>/Product1' incorporates:
   *  Sum: '<S127>/Add1'
   */
  rtb_Product_h = (rtb_Product_h + 0.0) * BuckyWagon_01_B.s210_bcm_vbat;

  /* Gain: '<S127>/Gain' */
  BuckyWagon_01_B.s127_Gain = 0.001 * rtb_Product_h;

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
  rtb_to65535_c = rtb_Product_h * rtb_motohawk_delta_time1 +
    BuckyWagon_01_DWork.s127_UnitDelay_DSTATE;

  /* Gain: '<S127>/Gain2' */
  rtb_Gain2 = 0.00027777777777777778 * rtb_to65535_c;

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

  /* Product: '<S127>/Divide1' incorporates:
   *  Sum: '<S127>/Subtract'
   */
  rtb_Product_h = rtb_Merge_k / (BuckyWagon_01_B.s127_sf_Downsapmle.s128_Out_2 -
    BuckyWagon_01_B.s127_sf_Downsapmle.s128_Out_1);

  /* Saturate: '<S127>/Saturation' */
  BuckyWagon_01_B.s127_Saturation = rtb_Product_h >= 50000.0 ? 50000.0 :
    rtb_Product_h <= -1.0E+6 ? -1.0E+6 : rtb_Product_h;

  /* Abs: '<S126>/Abs' */
  rtb_Product_h = fabs(BuckyWagon_01_B.s222_Abs);

  /* Gain: '<S126>/Gain' */
  rtb_Merge_k = 0.00027777777777777778 * rtb_Product_h;

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
  rtb_Product_h = rtb_Merge_k * rtb_motohawk_delta_time_o;

  /* Sum: '<S126>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read'
   */
  BuckyWagon_01_B.s126_Sum1 = rtb_Product_h + Odometer_DataStore();

  /* S-Function (motohawk_sfun_data_write): '<S126>/motohawk_data_write' */
  /* Write to Data Storage as scalar: Odometer */
  {
    Odometer_DataStore() = BuckyWagon_01_B.s126_Sum1;
  }

  /* Sum: '<S126>/Sum' incorporates:
   *  UnitDelay: '<S126>/Unit Delay'
   */
  BuckyWagon_01_B.s126_Sum = rtb_Product_h +
    BuckyWagon_01_DWork.s126_UnitDelay_DSTATE;

  /* RelationalOperator: '<S119>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration8'
   */
  rtb_RelationalOperator_b1 = ((rtb_MinMax_e >= (Overheat_Threshold_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S119>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: CoolingOverheat */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(8, rtb_RelationalOperator_b1);
    UpdateFault(8);
  }

  /* Logic: '<S20>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S20>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration5'
   */
  rtb_LogicalOperator1_jy = (((BuckyWagon_01_B.s210_bcm_cell_tmax >=
    (Battery_OverTemp_Threshold_DataStore())) && rtb_LogicalOperator1_jo));

  /* S-Function (motohawk_sfun_fault_def): '<S20>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Battery_OverTemp */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(3, rtb_LogicalOperator1_jy);
    UpdateFault(3);
  }

  /* Logic: '<S20>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S20>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration2'
   */
  rtb_LogicalOperator3_l = ((BuckyWagon_01_B.s228_Merge &&
    (BuckyWagon_01_B.s210_bcm_vbat >= (ChargeInterruptor_Voltage_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S20>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: ChargeComplete */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(7, rtb_LogicalOperator3_l);
    UpdateFault(7);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S20>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: ESTOPped */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(9, BuckyWagon_01_B.s223_Merge);
    UpdateFault(9);
  }

  /* Logic: '<S20>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S20>/Relational Operator5'
   *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration1'
   */
  rtb_LogicalOperator2_d = (((BuckyWagon_01_B.s210_bcm_cell_tmin <=
    (Battery_UnderTemp_Threshold_DataStore())) && rtb_LogicalOperator1_jo));

  /* S-Function (motohawk_sfun_fault_def): '<S20>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Battery_UnderTemp */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(4, rtb_LogicalOperator2_d);
    UpdateFault(4);
  }

  /* RelationalOperator: '<S20>/Relational Operator7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration7'
   */
  rtb_RelationalOperator_k = (BuckyWagon_01_B.s210_bcm_gfd <=
    (A123_Isolation_Monitor_Ground_Fault_Threshold_DataStore()));

  /* Outputs for Enabled SubSystem: '<S20>/Time Since Enabled (With Input)1' incorporates:
   *  EnablePort: '<S219>/Enable'
   */
  if (BuckyWagon_01_B.s357_Sum > 0.0) {
    if (!BuckyWagon_01_DWork.s20_TimeSinceEnabledWithInput1_MODE) {
      /* S-Function Block: <S219>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BuckyWagon_01_DWork.s219_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S219>/Unit Delay' */
      BuckyWagon_01_DWork.s219_UnitDelay_DSTATE = 0.0;
      BuckyWagon_01_DWork.s20_TimeSinceEnabledWithInput1_MODE = TRUE;
    }

    /* S-Function Block: <S219>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BuckyWagon_01_DWork.s219_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_b = ((real_T) delta) * 0.000001;
    }

    /* UnitDelay: '<S219>/Unit Delay' */
    BuckyWagon_01_B.s219_UnitDelay = BuckyWagon_01_DWork.s219_UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S219>/Unit Delay' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S219>/motohawk_delta_time'
     *  Sum: '<S219>/Sum'
     */
    BuckyWagon_01_DWork.s219_UnitDelay_DSTATE = rtb_motohawk_delta_time_b +
      BuckyWagon_01_B.s219_UnitDelay;
  } else {
    if (BuckyWagon_01_DWork.s20_TimeSinceEnabledWithInput1_MODE) {
      /* Disable for Outport: '<S219>/Time Since Enabled [sec]' */
      BuckyWagon_01_B.s219_UnitDelay = 0.0;
      BuckyWagon_01_DWork.s20_TimeSinceEnabledWithInput1_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S20>/Time Since Enabled (With Input)1' */
  /* Logic: '<S20>/Logical Operator' incorporates:
   *  RelationalOperator: '<S20>/Relational Operator8'
   *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration8'
   */
  rtb_LogicalOperator_d = ((rtb_RelationalOperator_k && rtb_LogicalOperator1_jo &&
                            (BuckyWagon_01_B.s219_UnitDelay >=
    (HV_GFI_Check_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S20>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: GroundFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(11, rtb_LogicalOperator_d);
    UpdateFault(11);
  }

  /* RelationalOperator: '<S20>/Relational Operator6' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration6'
   */
  rtb_RelationalOperator6 = ((BuckyWagon_01_B.s221_Inverter_Temperature >
    (InverterTemp_Overheat_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S20>/motohawk_fault_def9' */

  /* Set Fault Suspected Status: Inverter_OverTemp */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(16, rtb_RelationalOperator6);
    UpdateFault(16);
  }

  /* Logic: '<S215>/Logical Operator' incorporates:
   *  Constant: '<S303>/Constant'
   *  RelationalOperator: '<S303>/Compare'
   */
  rtb_LogicalOperator_b = ((BuckyWagon_01_B.s314_pluggedIn &&
    (BuckyWagon_01_B.s215_AgeCount >= 30U)));

  /* S-Function (motohawk_sfun_fault_def): '<S215>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Eaton_CAN_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(10, rtb_LogicalOperator_b);
    UpdateFault(10);
  }

  /* Logic: '<S216>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S216>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S216>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_pz = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_i > (Accel_InputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S216>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Accel_RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(1, rtb_LogicalOperator2_pz);
    UpdateFault(1);
  }

  /* Logic: '<S216>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S216>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S216>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_d = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_i < (Accel_InputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S216>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Accel_RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(2, rtb_LogicalOperator3_d);
    UpdateFault(2);
  }

  /* Logic: '<S217>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S217>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S217>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S217>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_k = ((MPRD_DataStore() && (rtb_to65535_dx >
    (LVVolt_InputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S217>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: LVVolt_RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(19, rtb_LogicalOperator2_k);
    UpdateFault(19);
  }

  /* Logic: '<S217>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S217>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S217>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S217>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_f = ((MPRD_DataStore() && (rtb_to65535_dx <
    (LVVolt_InputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S217>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: LVVolt_RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(20, rtb_LogicalOperator3_f);
    UpdateFault(20);
  }

  /* Logic: '<S218>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S218>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S218>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S218>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_dm = ((MPRD_DataStore() && (rtb_DataTypeConversion_b >
    (Brake_InputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S218>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Brake_RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(5, rtb_LogicalOperator2_dm);
    UpdateFault(5);
  }

  /* Logic: '<S218>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S218>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S218>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S218>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_b <
    (Brake_InputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S218>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Brake_RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(6, rtb_LogicalOperator3_p);
    UpdateFault(6);
  }

  /* Saturate: '<S357>/Saturation' */
  rtb_Saturation = BuckyWagon_01_B.s357_Sum >= 16000.0 ? 16000.0 :
    BuckyWagon_01_B.s357_Sum <= 0.0 ? 0.0 : BuckyWagon_01_B.s357_Sum;

  /* S-Function (motohawk_sfun_data_write): '<S357>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceKeyOnTimer */
  {
    TimeSinceKeyOnTimer_DataStore() = rtb_Saturation;
  }

  /* Update for UnitDelay: '<S216>/Unit Delay1' */
  BuckyWagon_01_DWork.s216_UnitDelay1_DSTATE = rtb_Merge_c;

  /* Update for UnitDelay: '<S338>/Unit Delay' */
  BuckyWagon_01_DWork.s338_UnitDelay_DSTATE = rtb_Sum1;

  /* Update for UnitDelay: '<S218>/Unit Delay1' */
  BuckyWagon_01_DWork.s218_UnitDelay1_DSTATE = rtb_Merge_e;

  /* Update for UnitDelay: '<S354>/Unit Delay' */
  BuckyWagon_01_DWork.s354_UnitDelay_DSTATE = rtb_Sum1_o;

  /* Update for UnitDelay: '<S143>/Unit Delay' */
  BuckyWagon_01_DWork.s143_UnitDelay_DSTATE = BuckyWagon_01_B.s143_Sum1;

  /* Update for UnitDelay: '<S97>/Output' */
  BuckyWagon_01_DWork.s97_Output_DSTATE = rtb_Compare_k;

  /* Update for UnitDelay: '<S217>/Unit Delay1' */
  BuckyWagon_01_DWork.s217_UnitDelay1_DSTATE = rtb_Merge_ep;

  /* Update for UnitDelay: '<S346>/Unit Delay' */
  BuckyWagon_01_DWork.s346_UnitDelay_DSTATE = rtb_to65535_b;

  /* Update for UnitDelay: '<S115>/Unit Delay' incorporates:
   *  MinMax: '<S117>/MinMax1'
   */
  BuckyWagon_01_DWork.s115_UnitDelay_DSTATE = rtb_Switch_h;

  /* Update for UnitDelay: '<S116>/Unit Delay' */
  BuckyWagon_01_DWork.s116_UnitDelay_DSTATE = rtb_Switch1_m;

  /* Update for UnitDelay: '<S108>/Unit Delay' */
  BuckyWagon_01_DWork.s108_UnitDelay_DSTATE =
    BuckyWagon_01_B.s108_LogicalOperator;

  /* Update for UnitDelay: '<S127>/Unit Delay1' */
  BuckyWagon_01_DWork.s127_UnitDelay1_DSTATE = rtb_to65535_d;

  /* Update for UnitDelay: '<S118>/Unit Delay' */
  BuckyWagon_01_DWork.s118_UnitDelay_DSTATE = BuckyWagon_01_B.s126_Sum;

  /* Update for UnitDelay: '<S127>/Unit Delay' */
  BuckyWagon_01_DWork.s127_UnitDelay_DSTATE = rtb_to65535_c;

  /* Update for UnitDelay: '<S126>/Unit Delay' */
  BuckyWagon_01_DWork.s126_UnitDelay_DSTATE = BuckyWagon_01_B.s126_Sum;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
